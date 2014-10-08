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
	Expression* expr;

	List<char*>* slist;
	List<Expression*>* explist;
}

%token SELECT FROM GROUP BY INTNUM
%token <sval> STRING

%type <statement> statement
%type <select_statement> select_statement
%type <table> from_clause
%type <slist> string_list
%type <explist> expr_list group_clause
%type <expr> expr;
%%


input: 
	statement opt_semicolon { *statement = $1; };


opt_semicolon:
	';' | ;


statement:
	select_statement { $$ = $1; }
	|  { $$ = NULL; };


select_statement:
	SELECT expr_list from_clause group_clause
		{ 
			SelectStatement* s = new SelectStatement();
			s->_select_list = $2;
			s->_from_table = $3;
			s->_group_by = $4;
			$$ = s;
		};


expr_list: 
	expr { $$ = new List<Expression*>($1); }
	| expr_list ',' expr { $1->push_back($3); $$ = $1; };


expr:
	STRING { $$ = new Expression($1); }
	| STRING '(' STRING ')' { $$ = new Expression($3, $1); };


from_clause: 
	FROM string_list
		{ 
			TableRef* t = new TableRef(eTableName);
			t->_table_names = $2;
			$$ = t;
		}
	| FROM '(' select_statement ')'
		{
			TableRef* t = new TableRef(eTableSelect);
			t->_stmt = $3;
			$$ = t;
		};


group_clause:
	GROUP BY expr_list { $$ = $3; }
	| { $$ = NULL; };

string_list:
	STRING { $$ = new List<char*>($1); }
	| string_list ',' STRING { $1->push_back($3); $$ = $1; }

%%