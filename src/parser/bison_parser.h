/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y"

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
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 81 "bison_parser.h"

/* Token kinds.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_HSQL_EMPTY = -2,
    SQL_YYEOF = 0,                 /* "end of file"  */
    SQL_HSQL_error = 256,          /* error  */
    SQL_HSQL_UNDEF = 257,          /* "invalid token"  */
    SQL_IDENTIFIER = 258,          /* IDENTIFIER  */
    SQL_STRING = 259,              /* STRING  */
    SQL_FLOATVAL = 260,            /* FLOATVAL  */
    SQL_INTVAL = 261,              /* INTVAL  */
    SQL_DEALLOCATE = 262,          /* DEALLOCATE  */
    SQL_PARAMETERS = 263,          /* PARAMETERS  */
    SQL_INTERSECT = 264,           /* INTERSECT  */
    SQL_TEMPORARY = 265,           /* TEMPORARY  */
    SQL_TIMESTAMP = 266,           /* TIMESTAMP  */
    SQL_DISTINCT = 267,            /* DISTINCT  */
    SQL_NVARCHAR = 268,            /* NVARCHAR  */
    SQL_RESTRICT = 269,            /* RESTRICT  */
    SQL_TRUNCATE = 270,            /* TRUNCATE  */
    SQL_ANALYZE = 271,             /* ANALYZE  */
    SQL_BETWEEN = 272,             /* BETWEEN  */
    SQL_CASCADE = 273,             /* CASCADE  */
    SQL_COLUMNS = 274,             /* COLUMNS  */
    SQL_CONTROL = 275,             /* CONTROL  */
    SQL_DEFAULT = 276,             /* DEFAULT  */
    SQL_EXECUTE = 277,             /* EXECUTE  */
    SQL_EXPLAIN = 278,             /* EXPLAIN  */
    SQL_INTEGER = 279,             /* INTEGER  */
    SQL_NATURAL = 280,             /* NATURAL  */
    SQL_PREPARE = 281,             /* PREPARE  */
    SQL_PRIMARY = 282,             /* PRIMARY  */
    SQL_SCHEMAS = 283,             /* SCHEMAS  */
    SQL_CHARACTER = 284,           /* CHARACTER  */
    SQL_VARYING = 285,             /* VARYING  */
    SQL_SPATIAL = 286,             /* SPATIAL  */
    SQL_VARCHAR = 287,             /* VARCHAR  */
    SQL_VIRTUAL = 288,             /* VIRTUAL  */
    SQL_DESCRIBE = 289,            /* DESCRIBE  */
    SQL_BEFORE = 290,              /* BEFORE  */
    SQL_COLUMN = 291,              /* COLUMN  */
    SQL_CREATE = 292,              /* CREATE  */
    SQL_DELETE = 293,              /* DELETE  */
    SQL_DIRECT = 294,              /* DIRECT  */
    SQL_DOUBLE = 295,              /* DOUBLE  */
    SQL_ESCAPE = 296,              /* ESCAPE  */
    SQL_EXCEPT = 297,              /* EXCEPT  */
    SQL_EXISTS = 298,              /* EXISTS  */
    SQL_EXTRACT = 299,             /* EXTRACT  */
    SQL_CAST = 300,                /* CAST  */
    SQL_FORMAT = 301,              /* FORMAT  */
    SQL_GLOBAL = 302,              /* GLOBAL  */
    SQL_HAVING = 303,              /* HAVING  */
    SQL_IMPORT = 304,              /* IMPORT  */
    SQL_INSERT = 305,              /* INSERT  */
    SQL_ISNULL = 306,              /* ISNULL  */
    SQL_OFFSET = 307,              /* OFFSET  */
    SQL_RENAME = 308,              /* RENAME  */
    SQL_SCHEMA = 309,              /* SCHEMA  */
    SQL_SELECT = 310,              /* SELECT  */
    SQL_SORTED = 311,              /* SORTED  */
    SQL_TABLES = 312,              /* TABLES  */
    SQL_UNIQUE = 313,              /* UNIQUE  */
    SQL_UNLOAD = 314,              /* UNLOAD  */
    SQL_UPDATE = 315,              /* UPDATE  */
    SQL_VALUES = 316,              /* VALUES  */
    SQL_AFTER = 317,               /* AFTER  */
    SQL_ALTER = 318,               /* ALTER  */
    SQL_CROSS = 319,               /* CROSS  */
    SQL_DELTA = 320,               /* DELTA  */
    SQL_FLOAT = 321,               /* FLOAT  */
    SQL_GROUP = 322,               /* GROUP  */
    SQL_INDEX = 323,               /* INDEX  */
    SQL_INNER = 324,               /* INNER  */
    SQL_LIMIT = 325,               /* LIMIT  */
    SQL_LOCAL = 326,               /* LOCAL  */
    SQL_MERGE = 327,               /* MERGE  */
    SQL_MINUS = 328,               /* MINUS  */
    SQL_ORDER = 329,               /* ORDER  */
    SQL_OUTER = 330,               /* OUTER  */
    SQL_RIGHT = 331,               /* RIGHT  */
    SQL_TABLE = 332,               /* TABLE  */
    SQL_UNION = 333,               /* UNION  */
    SQL_USING = 334,               /* USING  */
    SQL_WHERE = 335,               /* WHERE  */
    SQL_CALL = 336,                /* CALL  */
    SQL_CASE = 337,                /* CASE  */
    SQL_CHAR = 338,                /* CHAR  */
    SQL_COPY = 339,                /* COPY  */
    SQL_DATE = 340,                /* DATE  */
    SQL_DATETIME = 341,            /* DATETIME  */
    SQL_DESC = 342,                /* DESC  */
    SQL_DROP = 343,                /* DROP  */
    SQL_ELSE = 344,                /* ELSE  */
    SQL_FILE = 345,                /* FILE  */
    SQL_FROM = 346,                /* FROM  */
    SQL_FULL = 347,                /* FULL  */
    SQL_HASH = 348,                /* HASH  */
    SQL_HINT = 349,                /* HINT  */
    SQL_INTO = 350,                /* INTO  */
    SQL_JOIN = 351,                /* JOIN  */
    SQL_LEFT = 352,                /* LEFT  */
    SQL_LIKE = 353,                /* LIKE  */
    SQL_LOAD = 354,                /* LOAD  */
    SQL_LONG = 355,                /* LONG  */
    SQL_NULL = 356,                /* NULL  */
    SQL_PLAN = 357,                /* PLAN  */
    SQL_SHOW = 358,                /* SHOW  */
    SQL_TEXT = 359,                /* TEXT  */
    SQL_THEN = 360,                /* THEN  */
    SQL_TIME = 361,                /* TIME  */
    SQL_VIEW = 362,                /* VIEW  */
    SQL_WHEN = 363,                /* WHEN  */
    SQL_WITH = 364,                /* WITH  */
    SQL_ADD = 365,                 /* ADD  */
    SQL_ALL = 366,                 /* ALL  */
    SQL_AND = 367,                 /* AND  */
    SQL_ASC = 368,                 /* ASC  */
    SQL_END = 369,                 /* END  */
    SQL_FOR = 370,                 /* FOR  */
    SQL_INT = 371,                 /* INT  */
    SQL_KEY = 372,                 /* KEY  */
    SQL_NOT = 373,                 /* NOT  */
    SQL_OFF = 374,                 /* OFF  */
    SQL_SET = 375,                 /* SET  */
    SQL_TOP = 376,                 /* TOP  */
    SQL_AS = 377,                  /* AS  */
    SQL_BY = 378,                  /* BY  */
    SQL_IF = 379,                  /* IF  */
    SQL_IN = 380,                  /* IN  */
    SQL_IS = 381,                  /* IS  */
    SQL_OF = 382,                  /* OF  */
    SQL_ON = 383,                  /* ON  */
    SQL_OR = 384,                  /* OR  */
    SQL_TO = 385,                  /* TO  */
    SQL_ARRAY = 386,               /* ARRAY  */
    SQL_CONCAT = 387,              /* CONCAT  */
    SQL_ILIKE = 388,               /* ILIKE  */
    SQL_SECOND = 389,              /* SECOND  */
    SQL_MINUTE = 390,              /* MINUTE  */
    SQL_HOUR = 391,                /* HOUR  */
    SQL_DAY = 392,                 /* DAY  */
    SQL_MONTH = 393,               /* MONTH  */
    SQL_YEAR = 394,                /* YEAR  */
    SQL_TRUE = 395,                /* TRUE  */
    SQL_FALSE = 396,               /* FALSE  */
    SQL_TRANSACTION = 397,         /* TRANSACTION  */
    SQL_BEGIN = 398,               /* BEGIN  */
    SQL_COMMIT = 399,              /* COMMIT  */
    SQL_ROLLBACK = 400,            /* ROLLBACK  */
    SQL_EQUALS = 401,              /* EQUALS  */
    SQL_NOTEQUALS = 402,           /* NOTEQUALS  */
    SQL_LESS = 403,                /* LESS  */
    SQL_GREATER = 404,             /* GREATER  */
    SQL_LESSEQ = 405,              /* LESSEQ  */
    SQL_GREATEREQ = 406,           /* GREATEREQ  */
    SQL_NOTNULL = 407,             /* NOTNULL  */
    SQL_UMINUS = 408               /* UMINUS  */
  };
  typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 95 "bison_parser.y"

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::ExportStatement* 	export_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;
	hsql::TransactionStatement* transaction_stmt;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::WithDescription* with_description_t;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::ImportType import_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;
	hsql::SetOperation* set_operator_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 299 "bison_parser.h"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
