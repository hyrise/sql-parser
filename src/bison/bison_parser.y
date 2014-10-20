%{

/*
 * parser.y file
 * To generate the parser run: "bison parser.y"
 */

#include "Statement.h"
#include "List.h"
#include "bison_parser.h"
#include "flex_lexer.h"

#include <iostream>

int yyerror(Statement **expression, yyscan_t scanner, const char *msg) {
    // Add error handling routine as needed
}

%}

%code requires {

#ifndef YYtypeDEF_YY_SCANNER_T
#define YYtypeDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

}

%output  "bison_parser.c"
%defines "bison_parser.h"

%define api.pure
%lex-param   { yyscan_t scanner }
%parse-param { Statement **statement }
%parse-param { yyscan_t scanner }

%union {
	float number;
	char* sval;

	Statement* statement;
	SelectStatement* select_statement;
	TableRef* table;
	Expr* expr;

	List<char*>* slist;
	List<Expr*>* explist;
}

%token SELECT FROM GROUP BY WHERE NOT AND OR

%token <sval> NAME STRING COMPARISON
%token <number> INTNUM

%type <statement> statement
%type <select_statement> select_statement
%type <sval> table_name
%type <table> from_clause table_exp

%type <expr> expr column_name scalar_exp literal
%type <expr> comparison_predicate predicate search_condition where_clause

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


////// TODO:
// join
// limit
// order by

select_statement:
		SELECT expr_list from_clause where_clause group_clause
		{
			SelectStatement* s = new SelectStatement();
			s->select_list = $2;
			s->from_table = $3;
			s->where_clause = $4;
			s->group_by = $5;
			$$ = s;
		}
		;



from_clause:
		FROM table_exp { $$ = $2; }
	;

where_clause:
		WHERE search_condition { $$ = $2; }
	|	/* empty */ { $$ = NULL; }
	;

group_clause:
		GROUP BY expr_list { $$ = $3; }
	|	/* empty */ { $$ = NULL; }
	;



table_exp:
		table_ref_commalist {
			TableRef* t = new TableRef(eTableName);
			t->table_names = $1;
			$$ = t;
		}
	|	'(' select_statement ')' {
			TableRef* t = new TableRef(eTableSelect);
			t->stmt = $2;
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
		scalar_exp COMPARISON scalar_exp { $$ = makePredicate($1, $2, $3); }
	;


expr:
		column_name
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
		NAME { $$ = makeColumnRef($1); }
	;

table_name:
		NAME
	|	NAME '.' NAME
	;

literal:
		STRING { $$ = makeStringLiteral($1); }
	|	INTNUM { $$ = makeFloatLiteral($1); }
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
