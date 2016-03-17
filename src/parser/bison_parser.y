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

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult** result, yyscan_t scanner, const char *msg) {

	SQLParserResult* list = new SQLParserResult();
	list->isValid = false;
	list->errorMsg = strdup(msg);
	list->errorLine = llocp->first_line;
	list->errorColumn = llocp->first_column;

	*result = list;
	return 0;
}



%}
/*********************************
 ** Section 2: Bison Parser Declarations
 *********************************/


// Specify code that is included in the generated .h and .c files
%code requires {
// %code requires block	

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
    yylloc->first_line = yylloc->last_line; \
    yylloc->first_column = yylloc->last_column; \
    for(int i = 0; yytext[i] != '\0'; i++) { \
    	yylloc->total_column++; \
        if(yytext[i] == '\n') { \
            yylloc->last_line++; \
            yylloc->last_column = 0; \
        } \
        else { \
            yylloc->last_column++; \
        } \
    }
}

// Define the names of the created files
%output  "bison_parser.cpp"
%defines "bison_parser.h"

// Tell bison to create a reentrant parser
%define api.pure full

// Prefix the parser
%define api.prefix {hsql_}
%define api.token.prefix {SQL_}

%define parse.error verbose
%locations

%initial-action {
	// Initialize
	@$.first_column = 0;
	@$.last_column = 0;
	@$.first_line = 0;
	@$.last_line = 0;
	@$.total_column = 0;
	@$.placeholder_id = 0;
};


// Define additional parameters for yylex (http://www.gnu.org/software/bison/manual/html_node/Pure-Calling.html)
%lex-param   { yyscan_t scanner }

// Define additional parameters for yyparse
%parse-param { hsql::SQLParserResult** result }
%parse-param { yyscan_t scanner }


/*********************************
 ** Define all data-types (http://www.gnu.org/software/bison/manual/html_node/Union-Decl.html)
 *********************************/
%union {
	double fval;
	int64_t ival;
	char* sval;
	unsigned uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;

	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;

	hsql::SQLParserResult* stmt_list;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
}



/*********************************
 ** Token Definition
 *********************************/
%token <sval> IDENTIFIER STRING
%token <fval> FLOATVAL
%token <ival> INTVAL
%token <uval> NOTEQUALS LESSEQ GREATEREQ

/* SQL Keywords */
%token DEALLOCATE PARAMETERS INTERSECT TEMPORARY TIMESTAMP
%token DISTINCT NVARCHAR RESTRICT TRUNCATE ANALYZE BETWEEN
%token CASCADE COLUMNS CONTROL DEFAULT EXECUTE EXPLAIN
%token HISTORY INTEGER NATURAL PREPARE PRIMARY SCHEMAS
%token SPATIAL VIRTUAL BEFORE COLUMN CREATE DELETE DIRECT
%token DOUBLE ESCAPE EXCEPT EXISTS GLOBAL HAVING IMPORT
%token INSERT ISNULL OFFSET RENAME SCHEMA SELECT SORTED
%token TABLES UNIQUE UNLOAD UPDATE VALUES AFTER ALTER CROSS
%token DELTA GROUP INDEX INNER LIMIT LOCAL MERGE MINUS ORDER
%token OUTER RIGHT TABLE UNION USING WHERE CALL DATE DESC
%token DROP FILE FROM FULL HASH HINT INTO JOIN LEFT LIKE
%token LOAD NULL PART PLAN SHOW TEXT TIME VIEW WITH ADD ALL
%token AND ASC CSV FOR INT KEY NOT OFF SET TBL TOP AS BY IF
%token IN IS OF ON OR TO


/*********************************
 ** Non-Terminal types (http://www.gnu.org/software/bison/manual/html_node/Type-Decl.html)
 *********************************/
%type <stmt_list>	statement_list
%type <statement> 	statement preparable_statement
%type <exec_stmt>	execute_statement
%type <prep_stmt>	prepare_statement
%type <select_stmt> select_statement select_with_paren select_no_paren select_clause
%type <import_stmt> import_statement
%type <create_stmt> create_statement
%type <insert_stmt> insert_statement
%type <delete_stmt> delete_statement truncate_statement
%type <update_stmt> update_statement
%type <drop_stmt>	drop_statement
%type <sval> 		table_name opt_alias alias file_path
%type <bval> 		opt_not_exists opt_distinct
%type <uval>		import_file_type opt_join_type column_type
%type <table> 		from_clause table_ref table_ref_atomic table_ref_name
%type <table>		join_clause join_table table_ref_name_no_alias
%type <expr> 		expr scalar_expr unary_expr binary_expr function_expr star_expr expr_alias placeholder_expr
%type <expr> 		column_name literal int_literal num_literal string_literal
%type <expr> 		comp_expr opt_where join_condition opt_having
%type <order>		opt_order
%type <limit>		opt_limit
%type <order_type>	opt_order_type
%type <column_t>	column_def
%type <update_t>	update_clause
%type <group_t>		opt_group

%type <str_vec>		ident_commalist opt_column_list
%type <expr_vec> 	expr_list select_list literal_list
%type <table_vec> 	table_ref_commalist
%type <update_vec>	update_clause_commalist
%type <column_vec>	column_def_commalist

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
input:
		statement_list opt_semicolon {
			*result = $1;
		}
	;


statement_list:
		statement { $$ = new SQLParserResult($1); }
	|	statement_list ';' statement { $1->addStatement($3); $$ = $1; }
	;

statement:
		prepare_statement {
			$1->setPlaceholders(yyloc.placeholder_list);
			yyloc.placeholder_list.clear();
			$$ = $1;
		}
	|	preparable_statement
	;


preparable_statement:
		select_statement { $$ = $1; }
	|	import_statement { $$ = $1; }
	|	create_statement { $$ = $1; }
	|	insert_statement { $$ = $1; }
	|	delete_statement { $$ = $1; }
	|	truncate_statement { $$ = $1; }
	|	update_statement { $$ = $1; }
	|	drop_statement { $$ = $1; }
	|	execute_statement { $$ = $1; }
	;


/******************************
 * Prepared Statement
 ******************************/
prepare_statement:
		PREPARE IDENTIFIER ':' preparable_statement {
			$$ = new PrepareStatement();
			$$->name = $2;
			$$->query = new SQLParserResult($4);
		}
	|	PREPARE IDENTIFIER '{' statement_list opt_semicolon '}' {
			$$ = new PrepareStatement();
			$$->name = $2;
			$$->query = $4;
		}
	;

execute_statement:
		EXECUTE IDENTIFIER {
			$$ = new ExecuteStatement();
			$$->name = $2;
		}
	|	EXECUTE IDENTIFIER '(' literal_list ')' {
			$$ = new ExecuteStatement();
			$$->name = $2;
			$$->parameters = $4;
		}
	;


/******************************
 * Import Statement
 ******************************/
import_statement:
		IMPORT FROM import_file_type FILE file_path INTO table_name {
			$$ = new ImportStatement((ImportStatement::ImportType) $3);
			$$->filePath = $5;
			$$->tableName = $7;
		}
	;

import_file_type:
		CSV { $$ = ImportStatement::kImportCSV; }
	;

file_path:
		string_literal { $$ = $1->name; }
	;


/******************************
 * Create Statement
 * CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)
 * CREATE TABLE students FROM TBL FILE 'test/students.tbl'
 ******************************/
create_statement:
		CREATE TABLE opt_not_exists table_name FROM TBL FILE file_path {
			$$ = new CreateStatement(CreateStatement::kTableFromTbl);
			$$->ifNotExists = $3;
			$$->tableName = $4;
			$$->filePath = $8;
		}
	|	CREATE TABLE opt_not_exists table_name '(' column_def_commalist ')' {
			$$ = new CreateStatement(CreateStatement::kTable);
			$$->ifNotExists = $3;
			$$->tableName = $4;
			$$->columns = $6;
		}
	;

opt_not_exists:
		IF NOT EXISTS { $$ = true; }
	|	/* empty */ { $$ = false; }
	;

column_def_commalist:
		column_def { $$ = new std::vector<ColumnDefinition*>(); $$->push_back($1); }
	|	column_def_commalist ',' column_def { $1->push_back($3); $$ = $1; }
	;

column_def:
		IDENTIFIER column_type {
			$$ = new ColumnDefinition($1, (ColumnDefinition::DataType) $2);
		}
	;


column_type:
		INT { $$ = ColumnDefinition::INT; }
	|	INTEGER { $$ = ColumnDefinition::INT; }
	|	DOUBLE { $$ = ColumnDefinition::DOUBLE; }
	|	TEXT { $$ = ColumnDefinition::TEXT; }
	;

/******************************
 * Drop Statement
 * DROP TABLE students;
 * DEALLOCATE PREPARE stmt;
 ******************************/

drop_statement:
		DROP TABLE table_name {
			$$ = new DropStatement(DropStatement::kTable);
			$$->name = $3;
		}
	|	DEALLOCATE PREPARE IDENTIFIER {
			$$ = new DropStatement(DropStatement::kPreparedStatement);
			$$->name = $3;
		}
	;

/******************************
 * Delete Statement / Truncate statement
 * DELETE FROM students WHERE grade > 3.0
 * DELETE FROM students <=> TRUNCATE students
 ******************************/
delete_statement:
		DELETE FROM table_name opt_where {
			$$ = new DeleteStatement();
			$$->tableName = $3;
			$$->expr = $4;
		}
	;

truncate_statement:
		TRUNCATE table_name {
			$$ = new DeleteStatement();
			$$->tableName = $2;
		}
	;

/******************************
 * Insert Statement
 * INSERT INTO students VALUES ('Max', 1112233, 'Musterhausen', 2.3)
 * INSERT INTO employees SELECT * FROM stundents
 ******************************/
insert_statement:
		INSERT INTO table_name opt_column_list VALUES '(' literal_list ')' {
			$$ = new InsertStatement(InsertStatement::kInsertValues);
			$$->tableName = $3;
			$$->columns = $4;
			$$->values = $7;
		}
	|	INSERT INTO table_name opt_column_list select_no_paren {
			$$ = new InsertStatement(InsertStatement::kInsertSelect);
			$$->tableName = $3;
			$$->columns = $4;
			$$->select = $5;
		}
	;


opt_column_list:
		'(' ident_commalist ')' { $$ = $2; }
	|	/* empty */ { $$ = NULL; }
	;


/******************************
 * Update Statement
 * UPDATE students SET grade = 1.3, name='Felix Fürstenberg' WHERE name = 'Max Mustermann';
 ******************************/

update_statement:
	UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where {
		$$ = new UpdateStatement();
		$$->table = $2;
		$$->updates = $4;
		$$->where = $5;
	}
	;

update_clause_commalist:
		update_clause { $$ = new std::vector<UpdateClause*>(); $$->push_back($1); }
	|	update_clause_commalist ',' update_clause { $1->push_back($3); $$ = $1; }
	;

update_clause:
		IDENTIFIER '=' literal {
			$$ = new UpdateClause();
			$$->column = $1;
			$$->value = $3;
		}
	;

/******************************
 * Select Statement
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
	|	select_clause set_operator select_clause opt_order opt_limit {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			$$ = $1;
			$$->unionSelect = $3;
			$$->order = $4;
			$$->limit = $5;
		}
	;

set_operator:
		UNION
	|	INTERSECT
	|	EXCEPT
	;

select_clause:
		SELECT opt_distinct select_list from_clause opt_where opt_group {
			$$ = new SelectStatement();
			$$->selectDistinct = $2;
			$$->selectList = $3;
			$$->fromTable = $4;
			$$->whereClause = $5;
			$$->groupBy = $6;
		}
	;

opt_distinct:
		DISTINCT { $$ = true; }
	|	/* empty */ { $$ = false; }
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

opt_group:
		GROUP BY expr_list opt_having {
			$$ = new GroupByDescription();
			$$->columns = $3;
			$$->having = $4;
		}
	|	/* empty */ { $$ = NULL; }
	;

opt_having:
		HAVING expr { $$ = $2; }
	|	/* empty */ { $$ = NULL; }

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
 * Expressions 
 ******************************/
expr_list:
		expr_alias { $$ = new std::vector<Expr*>(); $$->push_back($1); }
	|	expr_list ',' expr_alias { $1->push_back($3); $$ = $1; }
	;

literal_list:
		literal { $$ = new std::vector<Expr*>(); $$->push_back($1); }
	|	literal_list ',' literal { $1->push_back($3); $$ = $1; }
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
		IDENTIFIER '(' opt_distinct expr ')' { $$ = Expr::makeFunctionRef($1, $4, $3); }
	;

column_name:
		IDENTIFIER { $$ = Expr::makeColumnRef($1); }
	|	IDENTIFIER '.' IDENTIFIER { $$ = Expr::makeColumnRef($1, $3); }
	;

literal:
		string_literal
	|	num_literal
	|	placeholder_expr
	;

string_literal:
		STRING { $$ = Expr::makeLiteral($1); }
	;


num_literal:
		FLOATVAL { $$ = Expr::makeLiteral($1); }
	|	int_literal
	;

int_literal:
		INTVAL { $$ = Expr::makeLiteral($1); }
	;

star_expr:
		'*' { $$ = new Expr(kExprStar); }
	;


placeholder_expr:
		'?' {
			$$ = Expr::makePlaceholder(yylloc.total_column);
			yyloc.placeholder_list.push_back($$);
		}
	;


/******************************
 * Table 
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
		table_ref_atomic { $$ = new std::vector<TableRef*>(); $$->push_back($1); }
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


table_ref_name_no_alias:
		table_name {
			$$ = new TableRef(kTableName);
			$$->name = $1;
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
 * Join Statements
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
 * Misc
 ******************************/

opt_semicolon:
		';'
	|	/* empty */
	;


ident_commalist:
		IDENTIFIER { $$ = new std::vector<char*>(); $$->push_back($1); }
	|	ident_commalist ',' IDENTIFIER { $1->push_back($3); $$ = $1; }
	;

%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

