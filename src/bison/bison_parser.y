%{
/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 * 
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "Statement.h"
#include "List.h"
#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>

int yyerror(Statement **expression, yyscan_t scanner, const char *msg) {
	fprintf(stderr, "[Error] SQL Parser: %s\n", msg);
	return 0;
}

%}
/*********************************
 ** Section 2: Bison Parser Declarations
 *********************************/


// Define the names of the created files
%output  "bison_parser.c"
%defines "bison_parser.h"

// Tell bison to create a reentrant parser
%define api.pure full


// Specify code that is included in the generated .h and .c files
%code requires {

#ifndef YYtypeDEF_YY_SCANNER_T
#define YYtypeDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

}

// Define additional parameters for yylex (http://www.gnu.org/software/bison/manual/html_node/Pure-Calling.html)
%lex-param   { yyscan_t scanner }

// Define additional parameters for yyparse
%parse-param { Statement **statement }
%parse-param { yyscan_t scanner }

%define api.token.prefix {SQL_}

/*********************************
 ** Define all data-types (http://www.gnu.org/software/bison/manual/html_node/Union-Decl.html)
 *********************************/
%union {
	float number;
	uint uintnum;
	char* sval;

	Statement* statement;
	SelectStatement* select_statement;
	TableRef* table;
	Expr* expr;

	List<char*>* slist;
	List<Expr*>* explist;
}



/*********************************
 ** Token Definition
 *********************************/
%token SELECT FROM GROUP BY WHERE NOT AND OR
%token <sval> NAME STRING COMPARISON
%token <number> FLOAT
%token <uintnum> EQUALS NOTEQUALS LESS GREATER LESSEQ GREATEREQ

/*********************************
 ** Non-Terminal types (http://www.gnu.org/software/bison/manual/html_node/Type-Decl.html)
 *********************************/
%type <statement> statement
%type <select_statement> select_statement
%type <sval> table_name
%type <table> from_clause table_exp
%type <expr> expr column_name scalar_exp literal
%type <expr> comparison_predicate predicate search_condition where_clause
%type <slist> table_ref_commalist
%type <explist> expr_list group_clause select_list



%%
/*********************************
 ** Section 3: Grammar Definition
 *********************************/


// Defines our general input.
// TODO: Support list of statements
input:
		statement opt_semicolon { *statement = $1; }
	;

// All types of statements
// Atm: only select statements (future: insert, delete, etc...)
statement:
		select_statement { $$ = $1; }
	|	/* empty */ { $$ = NULL; }
	;


/******************************
 ** Select Statements
 ******************************/

// TODO: join
// TODO: limit
// TODO: order by
select_statement:
		SELECT select_list from_clause where_clause group_clause
		{
			SelectStatement* s = new SelectStatement();
			s->select_list = $2;
			s->from_table = $3;
			s->where_clause = $4;
			s->group_by = $5;
			$$ = s;
		}
		;


select_list:
		'*' { $$ = new List<Expr*>(new Expr(eExprStar)); }
	|	expr_list;


from_clause:
		FROM table_exp { $$ = $2; }
	;


where_clause:
		WHERE search_condition { $$ = $2; }
	|	/* empty */ { $$ = NULL; }
	;

// TODO: having
group_clause:
		GROUP BY expr_list { $$ = $3; }
	|	/* empty */ { $$ = NULL; }
	;


// TODO: comma_list with mixed table names and select statements
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


// TODO: multiple predicates
search_condition:
		predicate
	;


predicate:
		comparison_predicate
	;


comparison_predicate:
		scalar_exp EQUALS scalar_exp { $$ = makePredicate($1, SQL_EQUALS, $3); }
	|	scalar_exp NOTEQUALS scalar_exp { $$ = makePredicate($1, SQL_NOTEQUALS, $3); }
	|	scalar_exp LESS scalar_exp { $$ = makePredicate($1, SQL_LESS, $3); }
	|	scalar_exp GREATER scalar_exp { $$ = makePredicate($1, SQL_GREATER, $3); }
	|	scalar_exp LESSEQ scalar_exp { $$ = makePredicate($1, SQL_LESSEQ, $3); }
	|	scalar_exp GREATEREQ scalar_exp { $$ = makePredicate($1, SQL_GREATEREQ, $3); }
	;

// TODO: Expression can also be scalar_exp
expr:
		column_name
	|	NAME '(' expr ')' { $$ = makeFunctionRef($1, $3); }
	;


// TODO: Scalar expressions can also be arithmetic
scalar_exp:
		column_name
	|	literal
	;

column_name:
		NAME { $$ = makeColumnRef($1); }
	;

table_name:
		NAME
	|	NAME '.' NAME
	;

literal:
		STRING { $$ = makeStringLiteral($1); }
	|	FLOAT { $$ = makeFloatLiteral($1); }
	;


opt_semicolon:
		';'
	|	/* empty */
	;


/******************************
 ** Lists 
 ******************************/
expr_list:
		expr { $$ = new List<Expr*>($1); }
	|	expr_list ',' expr { $1->push_back($3); $$ = $1; }
	;

// TODO: add table_ref to include names and select queries
table_ref_commalist:
		table_name { $$ = new List<char*>($1); }
	|	table_ref_commalist ',' table_name { $1->push_back($3); $$ = $1; }
	;



%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

