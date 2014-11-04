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

using namespace hsql;

int yyerror(Statement **stmt, yyscan_t scanner, const char *msg) {
	*stmt = new Statement(kStmtError);
	(*stmt)->parser_msg = msg;
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
%parse-param { hsql::Statement **statement }
%parse-param { yyscan_t scanner }


/*********************************
 ** Define all data-types (http://www.gnu.org/software/bison/manual/html_node/Union-Decl.html)
 *********************************/
%union {
	double fval;
	int64_t ival;
	char* sval;
	uint uval;

	hsql::Statement* statement;
	hsql::SelectStatement* select_stmt;

	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::LimitDescription* limit;

	hsql::List<char*>* slist;
	hsql::List<hsql::Expr*>* explist;
	hsql::List<hsql::TableRef*>* tbllist;
}



/*********************************
 ** Token Definition
 *********************************/
%token SELECT FROM WHERE GROUP BY HAVING ORDER ASC DESC LIMIT
%token JOIN ON INNER OUTER LEFT RIGHT CROSS USING NATURAL
%token CREATE TABLE DATABASE INDEX
%token AS NOT AND OR NULL LIKE
%token <sval> NAME STRING COMPARISON
%token <fval> FLOAT
%token <ival> INT
%token <uval> EQUALS NOTEQUALS LESS GREATER LESSEQ GREATEREQ

/*********************************
 ** Non-Terminal types (http://www.gnu.org/software/bison/manual/html_node/Type-Decl.html)
 *********************************/
%type <statement> 	statement
%type <select_stmt> select_statement
%type <sval> 		table_name opt_alias alias
%type <table> 		from_clause table_ref table_ref_atomic table_ref_name
%type <table>		join_stmt join_table
%type <expr> 		expr scalar_expr unary_expr binary_expr function_expr star_expr
%type <expr> 		column_name literal int_literal num_literal
%type <expr> 		comp_expr where_clause join_condition
%type <explist> 	expr_list group_clause select_list
%type <tbllist> 	table_ref_commalist
%type <order>		order_by_clause
%type <limit>		limit_clause
%type <order_type>	order_type


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
		statement opt_semicolon { *statement = $1; }
	;

// All types of statements
// Atm: only select statements (future: insert, delete, etc...)
statement:
		select_statement { $$ = $1; }
	;





/******************************
 ** Select Statements
 ******************************/

select_statement:
		SELECT select_list from_clause where_clause group_clause order_by_clause limit_clause
		{
			SelectStatement* s = new SelectStatement();
			s->select_list = $2;
			s->from_table = $3;
			s->where_clause = $4;
			s->group_by = $5;
			s->order = $6;
			s->limit = $7;
			$$ = s;
		}
	|	'(' select_statement ')' { $$ = $2; }
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


order_by_clause:
		ORDER BY expr order_type { $$ = new OrderDescription($4, $3); }
	|	/* empty */ { $$ = NULL; }

order_type:
		ASC { $$ = kOrderAsc; }
	|	DESC { $$ = kOrderDesc; }
	|	/* empty */ { $$ = kOrderAsc; }

limit_clause:
		LIMIT int_literal { $$ = new LimitDescription($2->ival, kNoOffset); delete $2; }
	|	/* empty */ { $$ = NULL; }

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
		'-' expr { $$ = Expr::makeOpUnary(Expr::UMINUS, $2); }
	|	NOT expr { $$ = Expr::makeOpUnary(Expr::NOT, $2); }
	;

binary_expr:
		comp_expr
	|	expr '-' expr { $$ = Expr::makeOpBinary($1, '-', $3); }
	|	expr '+' expr { $$ = Expr::makeOpBinary($1, '+', $3); }
	|	expr '/' expr { $$ = Expr::makeOpBinary($1, '/', $3); }
	|	expr '*' expr { $$ = Expr::makeOpBinary($1, '*', $3); }
	|	expr AND expr { $$ = Expr::makeOpBinary($1, Expr::AND, $3); }
	|	expr OR expr { $$ = Expr::makeOpBinary($1, Expr::OR, $3); }
	;


comp_expr:
		expr EQUALS expr { $$ = Expr::makeOpBinary($1, '=', $3); }
	|	expr NOTEQUALS expr { $$ = Expr::makeOpBinary($1, Expr::NOT_EQUALS, $3); }
	|	expr LESS expr { $$ = Expr::makeOpBinary($1, '<', $3); }
	|	expr GREATER expr { $$ = Expr::makeOpBinary($1, '>', $3); }
	|	expr LESSEQ expr { $$ = Expr::makeOpBinary($1, Expr::LESS_EQ, $3); }
	|	expr GREATEREQ expr { $$ = Expr::makeOpBinary($1, Expr::GREATER_EQ, $3); }
	;

function_expr:
		NAME '(' expr ')' { $$ = Expr::makeFunctionRef($1, $3); }
	;

column_name:
		NAME { $$ = Expr::makeColumnRef($1); }
	|	NAME '.' NAME { $$ = Expr::makeColumnRef($1, $3); }
	;

literal:
		STRING { $$ = Expr::makeLiteral($1); }
	|	num_literal
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
	|	join_stmt
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
		NAME
	|	NAME '.' NAME
	;


alias:	
		AS NAME { $$ = $2; }
	|	NAME
	;

opt_alias:
		alias
	|	/* empty */ { $$ = NULL; }


/******************************
 ** Join Statements
 ******************************/

join_stmt:
		join_table JOIN join_table ON join_condition
		{ 
			$$ = new TableRef(kTableJoin);
			$$->left = $1;
			$$->right = $3;
			$$->join_condition = $5;
			$$->join_type = kJoinInner;
		}
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

