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

#include "sqllib.h"
#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>

using namespace hsql;

int yyerror(StatementList** result, yyscan_t scanner, const char *msg) {

	StatementList* list = new StatementList();
	list->isValid = false;
	list->parser_msg = strdup(msg);
	*result = list;

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

// Prefix the parser
%define api.prefix {hsql_}
%define api.token.prefix {SQL_}

%define parse.error verbose

// Specify code that is included in the generated .h and .c files
%code requires {

#ifndef YYtypeDEF_YY_SCANNER_T
#define YYtypeDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

#define YYSTYPE HSQL_STYPE

}

// Define additional parameters for yylex (http://www.gnu.org/software/bison/manual/html_node/Pure-Calling.html)
%lex-param   { yyscan_t scanner }

// Define additional parameters for yyparse
%parse-param { hsql::StatementList** result }
%parse-param { yyscan_t scanner }


/*********************************
 ** Define all data-types (http://www.gnu.org/software/bison/manual/html_node/Union-Decl.html)
 *********************************/
%union {
	double fval;
	int64_t ival;
	char* sval;
	uint uval;
	bool bval;

	hsql::Statement* statement;
	hsql::SelectStatement* select_stmt;
	hsql::ImportStatement* import_stmt;
	hsql::CreateStatement* create_stmt;

	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::LimitDescription* limit;

	hsql::StatementList* stmt_list;
	hsql::List<char*>* slist;
	hsql::List<hsql::Expr*>* expr_list;
	hsql::List<hsql::TableRef*>* table_list;
}



/*********************************
 ** Token Definition
 *********************************/
%token <sval> IDENTIFIER STRING
%token <fval> FLOAT
%token <ival> INT
%token <uval> NOTEQUALS LESSEQ GREATEREQ

/* SQL Keywords */
%token DATABASE DISTINCT BETWEEN CONTROL NATURAL COLUMN
%token CREATE DELETE EXISTS HAVING IMPORT INSERT ISNULL
%token OFFSET RENAME SELECT UNLOAD UPDATE ALTER CROSS GROUP
%token INDEX INNER LIMIT ORDER OUTER RADIX RIGHT TABLE UNION
%token USING WHERE DESC DROP FILE FROM HASH INTO JOIN LEFT
%token LIKE LOAD NULL SCAN ALL AND ASC CSV NOT TBL TOP AS BY
%token IF IN IS ON OR


/*********************************
 ** Non-Terminal types (http://www.gnu.org/software/bison/manual/html_node/Type-Decl.html)
 *********************************/
%type <stmt_list>	statement_list
%type <statement> 	statement
%type <select_stmt> select_statement select_ref select_with_paren select_no_paren select_clause
%type <import_stmt> import_statement
%type <create_stmt> create_statement
%type <sval> 		table_name opt_alias alias file_path
%type <bval> 		opt_not_exists
%type <table> 		from_clause table_ref table_ref_atomic table_ref_name
%type <table>		join_clause join_table
%type <expr> 		expr scalar_expr unary_expr binary_expr function_expr star_expr expr_alias
%type <expr> 		column_name literal int_literal num_literal string_literal
%type <expr> 		comp_expr opt_where join_condition
%type <expr_list> 	expr_list opt_group select_list
%type <table_list> 	table_ref_commalist
%type <order>		opt_order
%type <limit>		opt_limit
%type <order_type>	opt_order_type
%type <uval>		import_file_type opt_join_type

/******************************
 ** Token Precedence and Associativity
 ** Precedence: lowest to highest
 ******************************/
%left		OR
%left		AND
%right		NOT
%right		'=' EQUALS NOTEQUALS LIKE
%nonassoc	'<' '>' LESS GREATER LESSEQ GREATEREQ

%nonassoc	NOTNULL
%nonassoc	ISNULL
%nonassoc	IS				/* sets precedence for IS NULL, etc */
%left		'+' '-'
%left		'*' '/' '%'
%left		'^'

/* Unary Operators */
%right 		UMINUS
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
		statement_list opt_semicolon { *result = $1; }
	;


statement_list:
		statement { $$ = new StatementList($1); }
	|	statement_list ';' statement { $1->push_back($3); $$ = $1; }
	;


// All types of statements
// TODO: insert, delete, etc...
statement:
		select_statement { $$ = $1; }
	|	import_statement { $$ = $1; }
	|	create_statement { $$ = $1; }
	;



/******************************
 ** Import Statement
 ******************************/
import_statement:
		IMPORT FROM import_file_type FILE file_path INTO table_name {
			$$ = new ImportStatement();
			$$->file_type = (ImportFileType) $3;
			$$->file_path = $5;
			$$->table_name = $7;
		}
	;

import_file_type:
		CSV { $$ = kImportCSV; }
	;

file_path:
		string_literal { $$ = $1->name; }
	;


/******************************
 ** Create Statement
 ******************************/
create_statement:
		CREATE TABLE opt_not_exists table_name FROM TBL FILE file_path {
			$$ = new CreateStatement();
			$$->create_type = kTableFromTbl;
			$$->if_not_exists = $3;
			$$->table_name = $4;
			$$->file_path = $8;
		}
	;

opt_not_exists:
		IF NOT EXISTS { $$ = true; }
	|	/* empty */ { $$ = false; }
	;

/******************************
 ** Select Statement
 ******************************/

select_statement:
		select_with_paren
	|	select_no_paren
	;

select_with_paren:
		'(' select_no_paren ')' { $$ = $2; }
	|	'(' select_with_paren ')' { $$ = $2; }
	;

select_no_paren:
		select_clause opt_order opt_limit {
			$$ = $1;
			$$->order = $2;
			$$->limit = $3;
		}
	|	select_ref UNION select_ref opt_order opt_limit {
			$$ = $1;
			$$->union_select = $3;
			// TODO: might overwrite order and limit of first select here
			$$->order = $4;
			$$->limit = $5;
		}
	;

select_ref:
		select_clause
	|	select_with_paren
	;

select_clause:
		SELECT select_list from_clause opt_where opt_group {
			$$ = new SelectStatement();
			$$->select_list = $2;
			$$->from_table = $3;
			$$->where_clause = $4;
			$$->group_by = $5;
		}
	;


select_list:
		expr_list
	;


from_clause:
		FROM table_ref { $$ = $2; }
	;


opt_where:
		WHERE expr { $$ = $2; }
	|	/* empty */ { $$ = NULL; }
	;

// TODO: having
opt_group:
		GROUP BY expr_list { $$ = $3; }
	|	/* empty */ { $$ = NULL; }
	;


opt_order:
		ORDER BY expr opt_order_type { $$ = new OrderDescription($4, $3); }
	|	/* empty */ { $$ = NULL; }
	;

opt_order_type:
		ASC { $$ = kOrderAsc; }
	|	DESC { $$ = kOrderDesc; }
	|	/* empty */ { $$ = kOrderAsc; }
	;


opt_limit:
		LIMIT int_literal { $$ = new LimitDescription($2->ival, kNoOffset); delete $2; }
	|	LIMIT int_literal OFFSET int_literal { $$ = new LimitDescription($2->ival, $4->ival); delete $2; delete $4; }
	|	/* empty */ { $$ = NULL; }
	;

/******************************
 ** Expressions 
 ******************************/
expr_list:
		expr_alias { $$ = new List<Expr*>($1); }
	|	expr_list ',' expr_alias { $1->push_back($3); $$ = $1; }
	;

expr_alias:
		expr opt_alias {
			$$ = $1;
			$$->alias = $2;
		}
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
		'-' expr { $$ = Expr::makeOpUnary(Expr::UMINUS, $2); }
	|	NOT expr { $$ = Expr::makeOpUnary(Expr::NOT, $2); }
	;

binary_expr:
		comp_expr
	|	expr '-' expr	{ $$ = Expr::makeOpBinary($1, '-', $3); }
	|	expr '+' expr	{ $$ = Expr::makeOpBinary($1, '+', $3); }
	|	expr '/' expr	{ $$ = Expr::makeOpBinary($1, '/', $3); }
	|	expr '*' expr	{ $$ = Expr::makeOpBinary($1, '*', $3); }
	|	expr '%' expr	{ $$ = Expr::makeOpBinary($1, '%', $3); }
	|	expr '^' expr	{ $$ = Expr::makeOpBinary($1, '^', $3); }
	|	expr AND expr	{ $$ = Expr::makeOpBinary($1, Expr::AND, $3); }
	|	expr OR expr	{ $$ = Expr::makeOpBinary($1, Expr::OR, $3); }
	|	expr LIKE expr	{ $$ = Expr::makeOpBinary($1, Expr::LIKE, $3); }
	|	expr NOT LIKE expr	{ $$ = Expr::makeOpBinary($1, Expr::NOT_LIKE, $4); }
	;


comp_expr:
		expr '=' expr		{ $$ = Expr::makeOpBinary($1, '=', $3); }
	|	expr NOTEQUALS expr	{ $$ = Expr::makeOpBinary($1, Expr::NOT_EQUALS, $3); }
	|	expr '<' expr		{ $$ = Expr::makeOpBinary($1, '<', $3); }
	|	expr '>' expr		{ $$ = Expr::makeOpBinary($1, '>', $3); }
	|	expr LESSEQ expr	{ $$ = Expr::makeOpBinary($1, Expr::LESS_EQ, $3); }
	|	expr GREATEREQ expr	{ $$ = Expr::makeOpBinary($1, Expr::GREATER_EQ, $3); }
	;

function_expr:
		IDENTIFIER '(' expr ')' { $$ = Expr::makeFunctionRef($1, $3); }
	;

column_name:
		IDENTIFIER { $$ = Expr::makeColumnRef($1); }
	|	IDENTIFIER '.' IDENTIFIER { $$ = Expr::makeColumnRef($1, $3); }
	;

literal:
		string_literal
	|	num_literal
	;

string_literal:
		STRING { $$ = Expr::makeLiteral($1); }
	;


num_literal:
		FLOAT { $$ = Expr::makeLiteral($1); }
	|	int_literal
	;

int_literal:
		INT { $$ = Expr::makeLiteral($1); }
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
		table_ref_name
	|	'(' select_statement ')' alias {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = $2;
			tbl->alias = $4;
			$$ = tbl;
		}
	|	join_clause
	;


table_ref_commalist:
		table_ref_atomic { $$ = new List<TableRef*>($1); }
	|	table_ref_commalist ',' table_ref_atomic { $1->push_back($3); $$ = $1; }
	;


table_ref_name:
		table_name opt_alias {
			auto tbl = new TableRef(kTableName);
			tbl->name = $1;
			tbl->alias = $2;
			$$ = tbl;
		}
		;

table_name:
		IDENTIFIER
	|	IDENTIFIER '.' IDENTIFIER
	;


alias:	
		AS IDENTIFIER { $$ = $2; }
	|	IDENTIFIER
	;

opt_alias:
		alias
	|	/* empty */ { $$ = NULL; }


/******************************
 ** Join Statements
 ******************************/

join_clause:
		join_table opt_join_type JOIN join_table ON join_condition
		{ 
			$$ = new TableRef(kTableJoin);
			$$->join = new JoinDefinition();
			$$->join->type = (JoinType) $2;
			$$->join->left = $1;
			$$->join->right = $4;
			$$->join->condition = $6;
		}
		;

opt_join_type:
		INNER 	{ $$ = kJoinInner; }
	|	OUTER 	{ $$ = kJoinOuter; }
	|	LEFT 	{ $$ = kJoinLeft; }
	|	RIGHT 	{ $$ = kJoinRight; }
	|	/* empty, default */ 	{ $$ = kJoinInner; }
	;



join_table:
		'(' select_statement ')' alias {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = $2;
			tbl->alias = $4;
			$$ = tbl;
		}
	|	table_ref_name;


join_condition:
		expr
		;


/******************************
 ** Misc
 ******************************/

opt_semicolon:
		';'
	|	/* empty */
	;


%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

