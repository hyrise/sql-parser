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
%output  "bison_parser.cpp"
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
	List<TableRef*>* tbllist;
}



/*********************************
 ** Token Definition
 *********************************/
%token SELECT FROM WHERE GROUP BY HAVING
%token JOIN ON INNER OUTER LEFT RIGHT CROSS USING NATURAL
%token CREATE TABLE DATABASE INDEX
%token AS NOT AND OR NULL LIKE
%token <sval> NAME STRING COMPARISON
%token <number> FLOAT
%token <uintnum> EQUALS NOTEQUALS LESS GREATER LESSEQ GREATEREQ

/*********************************
 ** Non-Terminal types (http://www.gnu.org/software/bison/manual/html_node/Type-Decl.html)
 *********************************/
%type <statement> statement
%type <select_statement> select_statement
%type <sval> table_name
%type <table> from_clause table_ref table_ref_atomic
%type <expr> expr scalar_expr unary_expr binary_expr function_expr star_expr
%type <expr> column_name literal
%type <expr> comp_expr where_clause
%type <explist> expr_list group_clause select_list
%type <tbllist> table_ref_commalist


/******************************
 ** Token Precedence and Associativity
 ** Precedence: lowest to highest
 ******************************/
%left		OR
%left		AND
%right		NOT
%right		'=' EQUALS NOTEQUALS
%nonassoc	'<' '>' LESS GREATER LESSEQ GREATEREQ

%nonassoc	NOTNULL
%nonassoc	ISNULL
%nonassoc	IS				/* sets precedence for IS NULL, etc */
%left		'+' '-'
%left		'*' '/' '%'
%left		'^'

/* Unary Operators */
%left		'[' ']'
%left		'(' ')'
%left		'.'

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
			s->having = NULL; // TODO
			s->order = NULL; // TODO
			s->limit = kNoLimit; // TODO
			s->offset = kNoOffset; // TODO
			$$ = s;
		}
		;


select_list:
		expr_list
	;


from_clause:
		FROM table_ref { $$ = $2; }
	;


where_clause:
		WHERE expr { $$ = $2; }
	|	/* empty */ { $$ = NULL; }
	;

// TODO: having
group_clause:
		GROUP BY expr_list { $$ = $3; }
	|	/* empty */ { $$ = NULL; }
	;


/******************************
 ** Expressions 
 ******************************/
expr_list:
		expr { $$ = new List<Expr*>($1); }
	|	expr_list ',' expr { $1->push_back($3); $$ = $1; }
	;


expr:
		'(' expr ')' { $$ = $2; }
	|	scalar_expr
	|	unary_expr
	|	binary_expr
	|	function_expr
	;

scalar_expr:
		column_name
	|	star_expr
	|	literal
	;

unary_expr:
		'-' expr { $$ = Expr::makeOpUnary(UMINUS, $2); }
	|	NOT expr { $$ = Expr::makeOpUnary(NOT, $2); }
	;

binary_expr:
		comp_expr
	|	expr '-' expr { $$ = Expr::makeOpBinary($1, '-', $3); }
	|	expr '+' expr { $$ = Expr::makeOpBinary($1, '+', $3); }
	|	expr '/' expr { $$ = Expr::makeOpBinary($1, '/', $3); }
	|	expr '*' expr { $$ = Expr::makeOpBinary($1, '*', $3); }
	|	expr AND expr { $$ = Expr::makeOpBinary($1, AND, $3); }
	|	expr OR expr { $$ = Expr::makeOpBinary($1, OR, $3); }
	;


comp_expr:
		expr EQUALS expr { $$ = Expr::makeOpBinary($1, '=', $3); }
	|	expr NOTEQUALS expr { $$ = Expr::makeOpBinary($1, NOT_EQUALS, $3); }
	|	expr LESS expr { $$ = Expr::makeOpBinary($1, '<', $3); }
	|	expr GREATER expr { $$ = Expr::makeOpBinary($1, '>', $3); }
	|	expr LESSEQ expr { $$ = Expr::makeOpBinary($1, LESS_EQ, $3); }
	|	expr GREATEREQ expr { $$ = Expr::makeOpBinary($1, GREATER_EQ, $3); }
	;

function_expr:
		NAME '(' expr ')' { $$ = makeFunctionRef($1, $3); }
	;

column_name:
		NAME { $$ = makeColumnRef($1); }
	;

literal:
		STRING { $$ = makeStringLiteral($1); }
	|	FLOAT { $$ = makeFloatLiteral($1); }
	;

star_expr:
		'*' { $$ = new Expr(kExprStar); }
	;


/******************************
 ** Table 
 ******************************/
table_ref:
		table_ref_atomic
	|	table_ref_atomic ',' table_ref_commalist {
		$3->push_back($1);
		auto tbl = new TableRef(kTableCrossProduct);
		tbl->list = $3;
		$$ = tbl;
	}
	;

table_ref_atomic:
		table_name {
			auto tbl = new TableRef(kTableName);
			tbl->name = $1;
			$$ = tbl;
		}
	|	'(' select_statement ')' {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = $2;
			$$ = tbl;
		}
	;

table_ref_commalist:
		table_ref_atomic { $$ = new List<TableRef*>($1); }
	|	table_ref_commalist ',' table_ref_atomic { $1->push_back($3); $$ = $1; }
	;

table_name:
		NAME
	|	NAME '.' NAME
	;



opt_semicolon:
		';'
	|	/* empty */
	;


%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

