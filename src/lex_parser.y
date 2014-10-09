%{

/*
 * parser.y file
 * To generate the parser run: "bison parser.y"
 */

#include "Statement.h"
#include "List.h"
#include "lex_parser.h"
#include "lex_lexer.h"

#include <iostream>

int yyerror(Statement **expression, yyscan_t scanner, const char *msg) {
    // Add error handling routine as needed
}

%}

%code requires {

#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

}

%output  "lex_parser.c"
%defines "lex_parser.h"

%define api.pure
%lex-param   { yyscan_t scanner }
%parse-param { Statement **statement }
%parse-param { yyscan_t scanner }

%union {
	int value;
	char* sval;

	Statement* statement;
	SelectStatement* select_statement;
	TableRef* table;
	Expr* expr;

	List<char*>* slist;
	List<Expr*>* explist;
}

%token SELECT FROM GROUP BY WHERE NOT AND OR
%token INTNUM COMPARISON STRING
%token <sval> NAME

%type <statement> statement
%type <select_statement> select_statement
%type <sval> column_name table_name
%type <table> from_clause table_exp
%type <expr> expr;
%type <slist> table_ref_commalist
%type <explist> expr_list group_clause
%%


input: 
		statement opt_semicolon { *statement = $1; }
	;

statement:
		select_statement { $$ = $1; }
	|	/* empty */ { $$ = NULL; }
	;




select_statement:
		SELECT expr_list from_clause where_clause group_clause
		{ 
			SelectStatement* s = new SelectStatement();
			s->_select_list = $2;
			s->_from_table = $3;
			s->_group_by = $5;
			$$ = s;
		}
		;



from_clause:
		FROM table_exp { $$ = $2; }
	;

where_clause:
		WHERE search_condition
	|	/* empty */
	;

group_clause:
		GROUP BY expr_list { $$ = $3; }
	|	/* empty */ { $$ = NULL; }
	;



table_exp:
		table_ref_commalist { 
			TableRef* t = new TableRef(eTableName);
			t->_table_names = $1;
			$$ = t;
		}
	|	'(' select_statement ')' {
			TableRef* t = new TableRef(eTableSelect);
			t->_stmt = $2;
			$$ = t;
		}
	;


search_condition:
		predicate
	;

predicate:
		comparison_predicate
	;

comparison_predicate:
		scalar_exp COMPARISON scalar_exp
	;


expr:
		column_name { $$ = makeColumnRef($1); }
	|	NAME '(' expr ')' { $$ = makeFunctionRef($1, $3); }
	;



/* Lists */
expr_list: 
		expr { $$ = new List<Expr*>($1); }
	|	expr_list ',' expr { $1->push_back($3); $$ = $1; }
	;


// TODO: add table_ref to include names and select queries
table_ref_commalist:
		table_name { $$ = new List<char*>($1); }
	|	table_ref_commalist ',' table_name { $1->push_back($3); $$ = $1; }
	;
/* / Lists */


column_name:
		NAME
	;

table_name:
		NAME
	|	NAME '.' NAME
	;

literal:
		STRING
	|	INTNUM
	;

scalar_exp:
		column_name
	|	literal
	;

opt_semicolon:
		';' 
	|	/* empty */
	;
%%