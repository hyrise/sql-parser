/* A Bison parser, made by GNU Bison 3.6.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

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
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 107 "bison_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 174 "bison_parser.cpp"

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
    SQL_SPATIAL = 284,             /* SPATIAL  */
    SQL_VARCHAR = 285,             /* VARCHAR  */
    SQL_VIRTUAL = 286,             /* VIRTUAL  */
    SQL_DESCRIBE = 287,            /* DESCRIBE  */
    SQL_BEFORE = 288,              /* BEFORE  */
    SQL_COLUMN = 289,              /* COLUMN  */
    SQL_CREATE = 290,              /* CREATE  */
    SQL_DELETE = 291,              /* DELETE  */
    SQL_DIRECT = 292,              /* DIRECT  */
    SQL_DOUBLE = 293,              /* DOUBLE  */
    SQL_ESCAPE = 294,              /* ESCAPE  */
    SQL_EXCEPT = 295,              /* EXCEPT  */
    SQL_EXISTS = 296,              /* EXISTS  */
    SQL_EXTRACT = 297,             /* EXTRACT  */
    SQL_CAST = 298,                /* CAST  */
    SQL_FORMAT = 299,              /* FORMAT  */
    SQL_GLOBAL = 300,              /* GLOBAL  */
    SQL_HAVING = 301,              /* HAVING  */
    SQL_IMPORT = 302,              /* IMPORT  */
    SQL_INSERT = 303,              /* INSERT  */
    SQL_ISNULL = 304,              /* ISNULL  */
    SQL_OFFSET = 305,              /* OFFSET  */
    SQL_RENAME = 306,              /* RENAME  */
    SQL_SCHEMA = 307,              /* SCHEMA  */
    SQL_SELECT = 308,              /* SELECT  */
    SQL_SORTED = 309,              /* SORTED  */
    SQL_TABLES = 310,              /* TABLES  */
    SQL_UNIQUE = 311,              /* UNIQUE  */
    SQL_UNLOAD = 312,              /* UNLOAD  */
    SQL_UPDATE = 313,              /* UPDATE  */
    SQL_VALUES = 314,              /* VALUES  */
    SQL_AFTER = 315,               /* AFTER  */
    SQL_ALTER = 316,               /* ALTER  */
    SQL_CROSS = 317,               /* CROSS  */
    SQL_DELTA = 318,               /* DELTA  */
    SQL_FLOAT = 319,               /* FLOAT  */
    SQL_GROUP = 320,               /* GROUP  */
    SQL_INDEX = 321,               /* INDEX  */
    SQL_INNER = 322,               /* INNER  */
    SQL_LIMIT = 323,               /* LIMIT  */
    SQL_LOCAL = 324,               /* LOCAL  */
    SQL_MERGE = 325,               /* MERGE  */
    SQL_MINUS = 326,               /* MINUS  */
    SQL_ORDER = 327,               /* ORDER  */
    SQL_OUTER = 328,               /* OUTER  */
    SQL_RIGHT = 329,               /* RIGHT  */
    SQL_TABLE = 330,               /* TABLE  */
    SQL_UNION = 331,               /* UNION  */
    SQL_USING = 332,               /* USING  */
    SQL_WHERE = 333,               /* WHERE  */
    SQL_CALL = 334,                /* CALL  */
    SQL_CASE = 335,                /* CASE  */
    SQL_CHAR = 336,                /* CHAR  */
    SQL_COPY = 337,                /* COPY  */
    SQL_DATE = 338,                /* DATE  */
    SQL_DATETIME = 339,            /* DATETIME  */
    SQL_DESC = 340,                /* DESC  */
    SQL_DROP = 341,                /* DROP  */
    SQL_ELSE = 342,                /* ELSE  */
    SQL_FILE = 343,                /* FILE  */
    SQL_FROM = 344,                /* FROM  */
    SQL_FULL = 345,                /* FULL  */
    SQL_HASH = 346,                /* HASH  */
    SQL_HINT = 347,                /* HINT  */
    SQL_INTO = 348,                /* INTO  */
    SQL_JOIN = 349,                /* JOIN  */
    SQL_LEFT = 350,                /* LEFT  */
    SQL_LIKE = 351,                /* LIKE  */
    SQL_LOAD = 352,                /* LOAD  */
    SQL_LONG = 353,                /* LONG  */
    SQL_NULL = 354,                /* NULL  */
    SQL_PLAN = 355,                /* PLAN  */
    SQL_SHOW = 356,                /* SHOW  */
    SQL_TEXT = 357,                /* TEXT  */
    SQL_THEN = 358,                /* THEN  */
    SQL_TIME = 359,                /* TIME  */
    SQL_VIEW = 360,                /* VIEW  */
    SQL_WHEN = 361,                /* WHEN  */
    SQL_WITH = 362,                /* WITH  */
    SQL_ADD = 363,                 /* ADD  */
    SQL_ALL = 364,                 /* ALL  */
    SQL_AND = 365,                 /* AND  */
    SQL_ASC = 366,                 /* ASC  */
    SQL_END = 367,                 /* END  */
    SQL_FOR = 368,                 /* FOR  */
    SQL_INT = 369,                 /* INT  */
    SQL_KEY = 370,                 /* KEY  */
    SQL_NOT = 371,                 /* NOT  */
    SQL_OFF = 372,                 /* OFF  */
    SQL_SET = 373,                 /* SET  */
    SQL_TOP = 374,                 /* TOP  */
    SQL_AS = 375,                  /* AS  */
    SQL_BY = 376,                  /* BY  */
    SQL_IF = 377,                  /* IF  */
    SQL_IN = 378,                  /* IN  */
    SQL_IS = 379,                  /* IS  */
    SQL_OF = 380,                  /* OF  */
    SQL_ON = 381,                  /* ON  */
    SQL_OR = 382,                  /* OR  */
    SQL_TO = 383,                  /* TO  */
    SQL_ARRAY = 384,               /* ARRAY  */
    SQL_CONCAT = 385,              /* CONCAT  */
    SQL_ILIKE = 386,               /* ILIKE  */
    SQL_SECOND = 387,              /* SECOND  */
    SQL_MINUTE = 388,              /* MINUTE  */
    SQL_HOUR = 389,                /* HOUR  */
    SQL_DAY = 390,                 /* DAY  */
    SQL_MONTH = 391,               /* MONTH  */
    SQL_YEAR = 392,                /* YEAR  */
    SQL_TRUE = 393,                /* TRUE  */
    SQL_FALSE = 394,               /* FALSE  */
    SQL_TRANSACTION = 395,         /* TRANSACTION  */
    SQL_BEGIN = 396,               /* BEGIN  */
    SQL_COMMIT = 397,              /* COMMIT  */
    SQL_ROLLBACK = 398,            /* ROLLBACK  */
    SQL_EQUALS = 399,              /* EQUALS  */
    SQL_NOTEQUALS = 400,           /* NOTEQUALS  */
    SQL_LESS = 401,                /* LESS  */
    SQL_GREATER = 402,             /* GREATER  */
    SQL_LESSEQ = 403,              /* LESSEQ  */
    SQL_GREATEREQ = 404,           /* GREATEREQ  */
    SQL_NOTNULL = 405,             /* NOTNULL  */
    SQL_UMINUS = 406               /* UMINUS  */
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

#line 390 "bison_parser.cpp"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOATVAL = 5,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 6,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 7,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 8,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 9,                  /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 10,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 11,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 12,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 13,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 14,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 15,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 16,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 17,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 18,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 19,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 20,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 22,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 23,                   /* EXPLAIN  */
  YYSYMBOL_INTEGER = 24,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 25,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 26,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 27,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 28,                   /* SCHEMAS  */
  YYSYMBOL_SPATIAL = 29,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 30,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 31,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 32,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 33,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 34,                    /* COLUMN  */
  YYSYMBOL_CREATE = 35,                    /* CREATE  */
  YYSYMBOL_DELETE = 36,                    /* DELETE  */
  YYSYMBOL_DIRECT = 37,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 38,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 39,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 40,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 41,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 42,                   /* EXTRACT  */
  YYSYMBOL_CAST = 43,                      /* CAST  */
  YYSYMBOL_FORMAT = 44,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 45,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 46,                    /* HAVING  */
  YYSYMBOL_IMPORT = 47,                    /* IMPORT  */
  YYSYMBOL_INSERT = 48,                    /* INSERT  */
  YYSYMBOL_ISNULL = 49,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 50,                    /* OFFSET  */
  YYSYMBOL_RENAME = 51,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 52,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 53,                    /* SELECT  */
  YYSYMBOL_SORTED = 54,                    /* SORTED  */
  YYSYMBOL_TABLES = 55,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 56,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 57,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 58,                    /* UPDATE  */
  YYSYMBOL_VALUES = 59,                    /* VALUES  */
  YYSYMBOL_AFTER = 60,                     /* AFTER  */
  YYSYMBOL_ALTER = 61,                     /* ALTER  */
  YYSYMBOL_CROSS = 62,                     /* CROSS  */
  YYSYMBOL_DELTA = 63,                     /* DELTA  */
  YYSYMBOL_FLOAT = 64,                     /* FLOAT  */
  YYSYMBOL_GROUP = 65,                     /* GROUP  */
  YYSYMBOL_INDEX = 66,                     /* INDEX  */
  YYSYMBOL_INNER = 67,                     /* INNER  */
  YYSYMBOL_LIMIT = 68,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 69,                     /* LOCAL  */
  YYSYMBOL_MERGE = 70,                     /* MERGE  */
  YYSYMBOL_MINUS = 71,                     /* MINUS  */
  YYSYMBOL_ORDER = 72,                     /* ORDER  */
  YYSYMBOL_OUTER = 73,                     /* OUTER  */
  YYSYMBOL_RIGHT = 74,                     /* RIGHT  */
  YYSYMBOL_TABLE = 75,                     /* TABLE  */
  YYSYMBOL_UNION = 76,                     /* UNION  */
  YYSYMBOL_USING = 77,                     /* USING  */
  YYSYMBOL_WHERE = 78,                     /* WHERE  */
  YYSYMBOL_CALL = 79,                      /* CALL  */
  YYSYMBOL_CASE = 80,                      /* CASE  */
  YYSYMBOL_CHAR = 81,                      /* CHAR  */
  YYSYMBOL_COPY = 82,                      /* COPY  */
  YYSYMBOL_DATE = 83,                      /* DATE  */
  YYSYMBOL_DATETIME = 84,                  /* DATETIME  */
  YYSYMBOL_DESC = 85,                      /* DESC  */
  YYSYMBOL_DROP = 86,                      /* DROP  */
  YYSYMBOL_ELSE = 87,                      /* ELSE  */
  YYSYMBOL_FILE = 88,                      /* FILE  */
  YYSYMBOL_FROM = 89,                      /* FROM  */
  YYSYMBOL_FULL = 90,                      /* FULL  */
  YYSYMBOL_HASH = 91,                      /* HASH  */
  YYSYMBOL_HINT = 92,                      /* HINT  */
  YYSYMBOL_INTO = 93,                      /* INTO  */
  YYSYMBOL_JOIN = 94,                      /* JOIN  */
  YYSYMBOL_LEFT = 95,                      /* LEFT  */
  YYSYMBOL_LIKE = 96,                      /* LIKE  */
  YYSYMBOL_LOAD = 97,                      /* LOAD  */
  YYSYMBOL_LONG = 98,                      /* LONG  */
  YYSYMBOL_NULL = 99,                      /* NULL  */
  YYSYMBOL_PLAN = 100,                     /* PLAN  */
  YYSYMBOL_SHOW = 101,                     /* SHOW  */
  YYSYMBOL_TEXT = 102,                     /* TEXT  */
  YYSYMBOL_THEN = 103,                     /* THEN  */
  YYSYMBOL_TIME = 104,                     /* TIME  */
  YYSYMBOL_VIEW = 105,                     /* VIEW  */
  YYSYMBOL_WHEN = 106,                     /* WHEN  */
  YYSYMBOL_WITH = 107,                     /* WITH  */
  YYSYMBOL_ADD = 108,                      /* ADD  */
  YYSYMBOL_ALL = 109,                      /* ALL  */
  YYSYMBOL_AND = 110,                      /* AND  */
  YYSYMBOL_ASC = 111,                      /* ASC  */
  YYSYMBOL_END = 112,                      /* END  */
  YYSYMBOL_FOR = 113,                      /* FOR  */
  YYSYMBOL_INT = 114,                      /* INT  */
  YYSYMBOL_KEY = 115,                      /* KEY  */
  YYSYMBOL_NOT = 116,                      /* NOT  */
  YYSYMBOL_OFF = 117,                      /* OFF  */
  YYSYMBOL_SET = 118,                      /* SET  */
  YYSYMBOL_TOP = 119,                      /* TOP  */
  YYSYMBOL_AS = 120,                       /* AS  */
  YYSYMBOL_BY = 121,                       /* BY  */
  YYSYMBOL_IF = 122,                       /* IF  */
  YYSYMBOL_IN = 123,                       /* IN  */
  YYSYMBOL_IS = 124,                       /* IS  */
  YYSYMBOL_OF = 125,                       /* OF  */
  YYSYMBOL_ON = 126,                       /* ON  */
  YYSYMBOL_OR = 127,                       /* OR  */
  YYSYMBOL_TO = 128,                       /* TO  */
  YYSYMBOL_ARRAY = 129,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 130,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 131,                    /* ILIKE  */
  YYSYMBOL_SECOND = 132,                   /* SECOND  */
  YYSYMBOL_MINUTE = 133,                   /* MINUTE  */
  YYSYMBOL_HOUR = 134,                     /* HOUR  */
  YYSYMBOL_DAY = 135,                      /* DAY  */
  YYSYMBOL_MONTH = 136,                    /* MONTH  */
  YYSYMBOL_YEAR = 137,                     /* YEAR  */
  YYSYMBOL_TRUE = 138,                     /* TRUE  */
  YYSYMBOL_FALSE = 139,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 140,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 141,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 142,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 143,                 /* ROLLBACK  */
  YYSYMBOL_144_ = 144,                     /* '='  */
  YYSYMBOL_EQUALS = 145,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 146,                /* NOTEQUALS  */
  YYSYMBOL_147_ = 147,                     /* '<'  */
  YYSYMBOL_148_ = 148,                     /* '>'  */
  YYSYMBOL_LESS = 149,                     /* LESS  */
  YYSYMBOL_GREATER = 150,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 151,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 152,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 153,                  /* NOTNULL  */
  YYSYMBOL_154_ = 154,                     /* '+'  */
  YYSYMBOL_155_ = 155,                     /* '-'  */
  YYSYMBOL_156_ = 156,                     /* '*'  */
  YYSYMBOL_157_ = 157,                     /* '/'  */
  YYSYMBOL_158_ = 158,                     /* '%'  */
  YYSYMBOL_159_ = 159,                     /* '^'  */
  YYSYMBOL_UMINUS = 160,                   /* UMINUS  */
  YYSYMBOL_161_ = 161,                     /* '['  */
  YYSYMBOL_162_ = 162,                     /* ']'  */
  YYSYMBOL_163_ = 163,                     /* '('  */
  YYSYMBOL_164_ = 164,                     /* ')'  */
  YYSYMBOL_165_ = 165,                     /* '.'  */
  YYSYMBOL_166_ = 166,                     /* ';'  */
  YYSYMBOL_167_ = 167,                     /* ','  */
  YYSYMBOL_168_ = 168,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 169,                 /* $accept  */
  YYSYMBOL_input = 170,                    /* input  */
  YYSYMBOL_statement_list = 171,           /* statement_list  */
  YYSYMBOL_statement = 172,                /* statement  */
  YYSYMBOL_preparable_statement = 173,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 174,                /* opt_hints  */
  YYSYMBOL_hint_list = 175,                /* hint_list  */
  YYSYMBOL_hint = 176,                     /* hint  */
  YYSYMBOL_transaction_statement = 177,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 178,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 179,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 180,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 181,        /* execute_statement  */
  YYSYMBOL_import_statement = 182,         /* import_statement  */
  YYSYMBOL_file_type = 183,                /* file_type  */
  YYSYMBOL_file_path = 184,                /* file_path  */
  YYSYMBOL_opt_file_type = 185,            /* opt_file_type  */
  YYSYMBOL_export_statement = 186,         /* export_statement  */
  YYSYMBOL_show_statement = 187,           /* show_statement  */
  YYSYMBOL_create_statement = 188,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 189,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 190,     /* column_def_commalist  */
  YYSYMBOL_column_def = 191,               /* column_def  */
  YYSYMBOL_column_type = 192,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 193,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 194,           /* drop_statement  */
  YYSYMBOL_opt_exists = 195,               /* opt_exists  */
  YYSYMBOL_delete_statement = 196,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 197,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 198,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 199,          /* opt_column_list  */
  YYSYMBOL_update_statement = 200,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 201,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 202,            /* update_clause  */
  YYSYMBOL_select_statement = 203,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 204, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 205, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 206,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 207,          /* select_no_paren  */
  YYSYMBOL_set_operator = 208,             /* set_operator  */
  YYSYMBOL_set_type = 209,                 /* set_type  */
  YYSYMBOL_opt_all = 210,                  /* opt_all  */
  YYSYMBOL_select_clause = 211,            /* select_clause  */
  YYSYMBOL_opt_distinct = 212,             /* opt_distinct  */
  YYSYMBOL_select_list = 213,              /* select_list  */
  YYSYMBOL_opt_from_clause = 214,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 215,              /* from_clause  */
  YYSYMBOL_opt_where = 216,                /* opt_where  */
  YYSYMBOL_opt_group = 217,                /* opt_group  */
  YYSYMBOL_opt_having = 218,               /* opt_having  */
  YYSYMBOL_opt_order = 219,                /* opt_order  */
  YYSYMBOL_order_list = 220,               /* order_list  */
  YYSYMBOL_order_desc = 221,               /* order_desc  */
  YYSYMBOL_opt_order_type = 222,           /* opt_order_type  */
  YYSYMBOL_opt_top = 223,                  /* opt_top  */
  YYSYMBOL_opt_limit = 224,                /* opt_limit  */
  YYSYMBOL_expr_list = 225,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 226,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 227,             /* literal_list  */
  YYSYMBOL_expr_alias = 228,               /* expr_alias  */
  YYSYMBOL_expr = 229,                     /* expr  */
  YYSYMBOL_operand = 230,                  /* operand  */
  YYSYMBOL_scalar_expr = 231,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 232,               /* unary_expr  */
  YYSYMBOL_binary_expr = 233,              /* binary_expr  */
  YYSYMBOL_logic_expr = 234,               /* logic_expr  */
  YYSYMBOL_in_expr = 235,                  /* in_expr  */
  YYSYMBOL_case_expr = 236,                /* case_expr  */
  YYSYMBOL_case_list = 237,                /* case_list  */
  YYSYMBOL_exists_expr = 238,              /* exists_expr  */
  YYSYMBOL_comp_expr = 239,                /* comp_expr  */
  YYSYMBOL_function_expr = 240,            /* function_expr  */
  YYSYMBOL_extract_expr = 241,             /* extract_expr  */
  YYSYMBOL_cast_expr = 242,                /* cast_expr  */
  YYSYMBOL_datetime_field = 243,           /* datetime_field  */
  YYSYMBOL_array_expr = 244,               /* array_expr  */
  YYSYMBOL_array_index = 245,              /* array_index  */
  YYSYMBOL_between_expr = 246,             /* between_expr  */
  YYSYMBOL_column_name = 247,              /* column_name  */
  YYSYMBOL_literal = 248,                  /* literal  */
  YYSYMBOL_string_literal = 249,           /* string_literal  */
  YYSYMBOL_bool_literal = 250,             /* bool_literal  */
  YYSYMBOL_num_literal = 251,              /* num_literal  */
  YYSYMBOL_int_literal = 252,              /* int_literal  */
  YYSYMBOL_null_literal = 253,             /* null_literal  */
  YYSYMBOL_param_expr = 254,               /* param_expr  */
  YYSYMBOL_table_ref = 255,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 256,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 257, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 258,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 259,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 260,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 261,               /* table_name  */
  YYSYMBOL_table_alias = 262,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 263,          /* opt_table_alias  */
  YYSYMBOL_alias = 264,                    /* alias  */
  YYSYMBOL_opt_alias = 265,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 266,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 267,              /* with_clause  */
  YYSYMBOL_with_description_list = 268,    /* with_description_list  */
  YYSYMBOL_with_description = 269,         /* with_description  */
  YYSYMBOL_join_clause = 270,              /* join_clause  */
  YYSYMBOL_opt_join_type = 271,            /* opt_join_type  */
  YYSYMBOL_join_condition = 272,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 273,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 274           /* ident_commalist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   721

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  169
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  262
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  474

#define YYMAXUTOK   406


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   158,     2,     2,
     163,   164,   156,   154,   167,   155,   165,   157,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   166,
     147,   144,   148,   168,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   161,     2,   162,   159,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   145,
     146,   149,   150,   151,   152,   153,   160
};

#if HSQL_DEBUG
  /* YYRLINEYYN -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   269,   269,   290,   296,   305,   309,   313,   316,   319,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   343,
     344,   349,   350,   354,   358,   370,   373,   376,   382,   383,
     390,   397,   400,   404,   418,   424,   433,   450,   454,   457,
     466,   480,   483,   488,   502,   515,   522,   529,   540,   541,
     545,   546,   550,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   569,   570,   571,   581,   587,   593,   601,
     602,   611,   620,   633,   640,   651,   652,   662,   671,   672,
     676,   688,   692,   696,   710,   711,   714,   715,   726,   727,
     731,   741,   754,   761,   765,   769,   776,   779,   785,   797,
     798,   802,   806,   807,   811,   816,   817,   821,   826,   830,
     831,   835,   836,   840,   841,   845,   849,   850,   851,   857,
     858,   862,   863,   864,   865,   866,   867,   874,   875,   879,
     880,   884,   885,   889,   899,   900,   901,   902,   903,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     921,   922,   926,   927,   928,   929,   930,   934,   935,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   948,   949,
     953,   954,   955,   956,   962,   963,   964,   965,   969,   970,
     974,   975,   979,   980,   981,   982,   983,   984,   985,   989,
     990,   994,   998,  1002,  1003,  1004,  1005,  1006,  1007,  1011,
    1015,  1019,  1023,  1024,  1025,  1026,  1030,  1031,  1032,  1033,
    1034,  1038,  1042,  1043,  1047,  1048,  1052,  1056,  1060,  1072,
    1073,  1083,  1084,  1088,  1089,  1098,  1099,  1104,  1115,  1124,
    1125,  1130,  1131,  1136,  1137,  1142,  1143,  1148,  1149,  1158,
    1159,  1163,  1167,  1171,  1178,  1191,  1199,  1209,  1228,  1229,
    1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1242,  1251,
    1252,  1257,  1258
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE",
  "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT",
  "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED",
  "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING",
  "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC",
  "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN",
  "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN",
  "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR",
  "INT", "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS",
  "OF", "ON", "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    61,   399,   400,    60,    62,   401,
     402,   403,   404,   405,    43,    45,    42,    47,    37,    94,
     406,    91,    93,    40,    41,    46,    59,    44,    63
};
#endif

#define YYPACT_NINF (-318)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-260)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACTSTATE-NUM -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     511,     7,    39,   125,   147,    39,   -37,    71,    95,   103,
      39,    39,   -19,     6,   225,    96,    96,    96,   237,    72,
    -318,   150,  -318,   150,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,    10,  -318,   246,   135,  -318,
      98,   190,  -318,   179,   179,    39,   307,    39,   195,  -318,
     -63,   192,   192,    39,  -318,   200,   158,  -318,  -318,  -318,
    -318,  -318,  -318,   506,  -318,   245,  -318,  -318,   219,    10,
      20,  -318,    26,  -318,   338,     9,   341,   226,    39,    39,
     268,  -318,   261,   189,   350,   351,   351,   313,    39,    39,
    -318,   194,   225,  -318,   196,   352,   349,   198,   199,  -318,
    -318,  -318,    10,   264,   254,    10,    45,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,   212,   211,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,   339,   -62,   189,   248,
    -318,   351,   378,    66,   240,   -57,  -318,   278,  -318,   278,
    -318,  -318,  -318,  -318,  -318,   385,  -318,  -318,   248,  -318,
    -318,   320,  -318,  -318,    20,  -318,  -318,   248,   320,   248,
      79,  -318,  -318,     9,  -318,   394,   291,   396,   281,  -122,
     242,   244,   247,   149,   280,   239,   326,  -318,   227,     2,
     353,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,   321,  -318,   -86,
     250,  -318,   248,   350,  -318,   371,  -318,  -318,   257,    30,
    -318,   328,   255,  -318,    36,    45,    10,   256,  -318,   -34,
      45,     2,   377,   -16,  -318,   333,  -318,   310,    58,  -318,
     291,     8,    14,   375,   161,   248,   248,   117,   133,   266,
     326,   541,   248,    44,   269,   -55,   248,   248,   326,  -318,
     326,    -8,   267,   -54,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   352,
      39,  -318,   429,     9,     2,  -318,   307,     9,  -318,   385,
      13,   268,  -318,   248,  -318,   431,  -318,  -318,  -318,  -318,
     248,  -318,  -318,  -318,  -318,   248,   248,   351,  -318,   276,
    -318,  -318,   282,  -318,  -318,  -318,  -318,  -318,    90,  -318,
     396,  -318,  -318,   248,  -318,  -318,   283,  -318,  -318,  -318,
    -318,  -318,  -318,   357,   172,    77,   134,   248,   248,  -318,
     375,   344,    97,  -318,  -318,  -318,   340,   475,   560,   326,
     288,   227,  -318,   354,   295,   560,   560,   560,   560,   425,
     425,   425,   425,    44,    44,    55,    55,    55,   -94,   290,
    -318,  -318,   108,  -318,   142,  -318,   291,  -318,    -3,  -318,
     293,  -318,    29,  -318,   392,  -318,  -318,  -318,     2,     2,
    -318,   452,   455,  -318,   363,  -318,  -318,   144,  -318,   248,
     310,   248,   248,  -318,   114,   140,   299,  -318,   326,   560,
     227,   302,   151,  -318,  -318,  -318,  -318,   303,   374,  -318,
    -318,  -318,   397,   398,   399,   379,    13,   472,  -318,  -318,
    -318,   358,  -318,   314,   316,  -318,  -318,    48,   322,     2,
     146,  -318,   248,  -318,   541,   323,   152,  -318,  -318,    29,
      13,  -318,  -318,  -318,    13,   277,   325,   248,  -318,  -318,
    -318,  -318,  -318,     2,  -318,  -318,  -318,  -318,   364,   378,
     -22,   329,   248,   160,   248,  -318,    15,     2,  -318,  -318,
       2,   330,   327,  -318
};

  /* YYDEFACTSTATE-NUM -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   260,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   239,     0,   229,    72,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   228,
       0,    70,    70,     0,    41,     0,   241,   242,    28,    25,
      27,    26,     1,   240,     2,     0,     6,     5,   120,     0,
      81,    82,   112,    68,     0,   130,     0,     0,     0,     0,
     106,    36,     0,    76,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   100,     0,     0,    94,
      95,    93,     0,    97,     0,     0,   126,   230,   211,   214,
     216,   217,   212,   213,   218,     0,   129,   131,   206,   207,
     208,   215,   209,   210,    31,    30,     0,     0,    76,     0,
      71,     0,     0,     0,     0,   106,    78,    39,    37,    39,
      69,    66,    67,   244,   243,     0,   119,    99,     0,    89,
      88,   112,    85,    84,    86,    96,    92,     0,   112,     0,
       0,    90,    33,     0,    48,     0,   240,     0,     0,   202,
       0,     0,     0,     0,     0,     0,     0,   204,     0,   105,
     134,   141,   143,   142,   136,   138,   144,   137,   157,   145,
     146,   147,   148,   140,   135,   150,   151,     0,   261,     0,
       0,    74,     0,     0,    77,     0,    35,    40,    23,     0,
      21,   103,   101,   127,   238,   126,     0,   111,   113,   118,
     126,   122,   124,   121,   132,     0,    46,     0,     0,    50,
     240,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,   152,     0,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    80,    79,     0,     0,    19,     0,
       0,   106,   102,     0,   236,     0,   237,   133,    83,    87,
       0,   117,   116,   115,    91,     0,     0,     0,    54,     0,
      57,    56,     0,    62,    61,    55,    60,    53,    65,    45,
       0,    47,   189,     0,   203,   205,     0,   193,   194,   195,
     196,   197,   198,     0,     0,     0,     0,     0,     0,   176,
       0,     0,     0,   149,   139,   168,   169,     0,   164,     0,
       0,     0,   155,     0,   167,   166,   182,   183,   184,   185,
     186,   187,   188,   159,   158,   161,   160,   162,   163,     0,
      34,   262,     0,    38,     0,    22,   240,   104,   219,   221,
       0,   223,   234,   222,   108,   128,   235,   114,   125,   123,
      44,     0,     0,    63,     0,    52,    51,     0,   180,     0,
       0,     0,     0,   174,     0,     0,     0,   199,     0,   165,
       0,     0,     0,   156,   200,    73,    24,     0,     0,   256,
     248,   254,   252,   255,   250,     0,     0,     0,   233,   227,
     231,     0,    98,     0,     0,    64,   190,     0,     0,   178,
       0,   177,     0,   181,   201,     0,     0,   172,   170,   234,
       0,   251,   253,   249,     0,   220,   235,     0,    58,    59,
     191,   192,   175,   179,   173,   171,   224,   245,   257,     0,
     110,     0,     0,     0,     0,   107,     0,   258,   246,   232,
     109,   202,     0,   247
};

  /* YYPGOTONTERM-NUM.  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,  -318,   422,  -318,   470,  -318,   217,  -318,   166,
    -318,  -318,  -318,  -318,   241,   -78,   376,  -318,  -318,  -318,
     458,  -318,   193,   126,  -318,  -318,   467,  -318,  -318,  -318,
     395,  -318,  -318,   317,  -156,   -48,  -318,    88,   -64,   -49,
    -318,  -318,   -65,   294,  -318,  -318,  -318,  -116,  -318,  -318,
      35,  -318,   232,  -318,  -318,    61,  -238,  -318,  -173,   251,
    -129,  -124,  -318,  -318,  -318,  -318,  -318,  -318,   292,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,    64,   -66,
     -84,  -318,  -318,   -88,  -318,  -318,  -318,  -317,    87,  -318,
    -318,  -318,     1,  -318,    92,   331,  -318,  -318,  -318,  -318,
     443,  -318,  -318,  -318,  -318,    80
};

  /* YYDEFGOTONTERM-NUM.  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   209,   210,    22,    59,
      23,   125,    24,    25,    82,   137,   206,    26,    27,    28,
      78,   228,   229,   308,   385,    29,    88,    30,    31,    32,
     133,    33,   135,   136,    34,   151,   152,   153,    71,   102,
     103,   156,    72,   148,   211,   281,   282,   130,   422,   465,
     106,   217,   218,   293,    96,   161,   212,   115,   116,   213,
     214,   180,   181,   182,   183,   184,   185,   186,   238,   187,
     188,   189,   190,   191,   323,   192,   193,   194,   195,   196,
     118,   119,   120,   121,   122,   123,   367,   368,   369,   370,
     371,    48,   372,   418,   419,   420,   287,    35,    36,    56,
      57,   373,   415,   468,    64,   199
};

  /* YYTABLEYYPACT[STATE-NUM] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     179,   138,   138,    39,   332,    98,    42,   146,   139,   117,
     226,    49,    50,   108,   109,   110,    38,   314,   471,   204,
     147,   129,   408,   105,   464,    53,    85,   165,   219,    99,
     221,   223,   284,    37,   296,    99,   254,   154,    43,   284,
     154,   231,    38,   232,   237,   342,    80,   138,    83,   245,
     241,   291,   243,   197,    90,   246,    51,   158,   166,   409,
     100,    54,   343,    68,   410,    86,   100,   269,    44,   201,
     411,   412,   247,   274,   311,   387,   246,   292,   271,   127,
     128,   272,   169,   108,   109,   110,    52,   413,   339,   141,
     142,  -257,   414,   247,   246,   159,   101,   224,   104,   445,
     362,   167,   101,   402,   364,   216,   324,   325,   111,   334,
     203,   247,   246,   160,   244,   340,   241,   335,   336,    68,
     170,   171,   172,    70,   337,   200,   338,   458,    40,   247,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   283,   246,   112,   113,   417,
      41,   154,   169,   108,   109,   110,   285,    97,   246,   173,
      45,   219,   436,   247,  -225,   374,   378,   379,   289,   316,
     315,   177,   312,    69,   254,   247,   366,   114,   111,   143,
     391,   359,    60,    61,    46,   254,   215,   246,   222,   383,
     170,   171,   172,   220,   278,   174,    47,   279,   394,   395,
     265,   266,   267,   268,   247,   269,   384,   117,   175,   460,
     407,   117,   450,   138,   268,   399,   269,   112,   113,   380,
     327,   392,   309,   236,   246,   310,   431,   246,    55,   173,
     169,   108,   109,   110,   176,   177,    58,    62,    63,   328,
     328,   247,   178,   432,   247,   329,   393,   114,   111,    73,
     246,   169,   108,   109,   110,   236,   246,    65,   452,   397,
     427,    75,   429,   430,   283,   174,   396,   247,   170,   171,
     172,   360,   405,   247,   434,   163,   288,   401,   175,    76,
      68,   294,   246,   169,   108,   109,   110,   112,   113,   170,
     171,   172,   390,   317,   318,   319,   320,   321,   322,   247,
      74,    77,   408,   453,   176,   177,   406,   173,   426,   163,
      81,   283,   178,    84,    87,   438,   455,   114,   283,   283,
      91,   239,   171,   172,   469,    92,   111,   272,   173,   169,
     108,   109,   110,   467,   298,   470,   435,    94,    95,   409,
     299,   107,   126,   174,   410,   124,   129,   111,   300,   131,
     411,   412,   132,   134,   140,   108,   175,    69,   110,   145,
     173,   147,   149,   150,   174,   112,   113,   413,   171,   172,
     248,  -257,   414,   155,   301,   157,   162,   175,   163,   111,
     164,   198,   176,   177,   202,   205,   112,   113,   208,   408,
     178,   302,   104,   303,   304,   114,   240,   225,    14,   227,
     242,   230,   249,   176,   177,   233,   173,   234,   305,   175,
     235,   178,   306,   273,   270,   276,   114,   280,   112,   113,
     277,   297,   283,   290,   307,   111,   409,   295,    68,   330,
     341,   410,   361,   333,   376,   176,   177,   411,   412,   381,
     339,   461,   240,   178,  -226,   382,   389,   388,   114,   250,
     246,   400,   404,   403,   413,   175,   269,   421,   423,   414,
     416,   424,   425,   433,   112,   113,   437,   439,   440,   251,
     441,   442,   443,   444,   249,   446,   252,   253,   448,   447,
     449,   176,   177,   254,   255,    93,   451,   454,   459,   178,
     462,   473,   466,    67,   114,   232,   365,   256,   257,   258,
     259,   260,    79,   386,   261,   262,  -259,   263,   264,   265,
     266,   267,   268,     1,   269,   207,   428,   363,     1,    89,
     275,     2,   377,   168,   249,   313,     2,   457,     3,   326,
     472,   456,     4,     3,   375,   144,     0,     4,     5,   463,
       0,     6,     7,     5,     0,   286,     6,     7,     0,   253,
       0,     0,     0,     8,     9,   254,     0,     0,     8,     9,
       0,     0,     0,     0,    10,     0,     0,     0,     0,    10,
       0,   250,  -260,  -260,     0,     0,  -260,  -260,     0,   263,
     264,   265,   266,   267,   268,   398,   269,     0,    11,     0,
     249,   331,    12,    11,     0,     0,     0,    12,     0,   253,
       0,     0,     0,     0,     0,   254,   255,    13,     0,   249,
       0,     0,    13,    14,     0,     0,     0,     0,    14,   256,
     257,   258,   259,   260,     0,     0,   261,   262,     0,   263,
     264,   265,   266,   267,   268,     0,   269,   250,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,    17,
       0,     0,    15,    16,    17,     0,  -260,   331,     0,     0,
       0,     0,     0,     0,     0,   253,     0,     0,     0,     0,
       0,   254,   255,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,   256,   257,   258,   259,   260,
     254,  -260,   261,   262,     0,   263,   264,   265,   266,   267,
     268,     0,   269,     0,  -260,  -260,  -260,   259,   260,     0,
       0,   261,   262,     0,   263,   264,   265,   266,   267,   268,
       0,   269
};

static const yytype_int16 yycheck[] =
{
     129,    85,    86,     2,   242,    69,     5,    95,    86,    75,
     166,    10,    11,     4,     5,     6,     3,     3,     3,   135,
      12,    78,    25,    72,    46,    19,    89,    89,   157,     9,
     159,   160,     3,    26,    50,     9,   130,   102,    75,     3,
     105,   163,     3,   165,   173,    99,    45,   131,    47,   178,
     174,    85,   176,   131,    53,   110,    75,   105,   120,    62,
      40,    55,   116,    53,    67,   128,    40,   161,   105,   133,
      73,    74,   127,   202,   230,   313,   110,   111,   164,    78,
      79,   167,     3,     4,     5,     6,   105,    90,    96,    88,
      89,    94,    95,   127,   110,    50,    76,   163,    72,   416,
     273,   163,    76,   341,   277,   154,   235,   236,    99,   164,
     167,   127,   110,    68,   178,   123,   240,   246,   247,    53,
      41,    42,    43,    35,   248,    59,   250,   444,     3,   127,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   167,   110,   138,   139,   120,
       3,   216,     3,     4,     5,     6,   120,    69,   110,    80,
      89,   290,   400,   127,   167,   281,   295,   296,   216,   233,
     156,   156,   164,   163,   130,   127,   163,   168,    99,    91,
     103,   269,    16,    17,    89,   130,   151,   110,   109,    99,
      41,    42,    43,   158,   164,   116,    93,   167,   327,   328,
     156,   157,   158,   159,   127,   161,   116,   273,   129,   447,
     366,   277,   164,   297,   159,   339,   161,   138,   139,   297,
      87,    87,   164,   106,   110,   167,   112,   110,     3,    80,
       3,     4,     5,     6,   155,   156,   140,     0,   166,   106,
     106,   127,   163,   103,   127,   112,   112,   168,    99,     3,
     110,     3,     4,     5,     6,   106,   110,   107,   112,   162,
     389,   163,   391,   392,   167,   116,   330,   127,    41,    42,
      43,   270,   164,   127,   398,   167,   215,   341,   129,    89,
      53,   220,   110,     3,     4,     5,     6,   138,   139,    41,
      42,    43,   120,   132,   133,   134,   135,   136,   137,   127,
     165,   122,    25,   432,   155,   156,   164,    80,   164,   167,
       3,   167,   163,   118,   122,   164,   164,   168,   167,   167,
     120,    41,    42,    43,   164,   167,    99,   167,    80,     3,
       4,     5,     6,   462,    24,   464,   400,    92,   119,    62,
      30,     3,   116,   116,    67,     4,    78,    99,    38,    88,
      73,    74,   163,     3,    41,     4,   129,   163,     6,   163,
      80,    12,   164,   164,   116,   138,   139,    90,    42,    43,
      17,    94,    95,   109,    64,   121,   164,   129,   167,    99,
      41,     3,   155,   156,   144,   107,   138,   139,     3,    25,
     163,    81,    72,    83,    84,   168,   116,     3,   107,     3,
     161,   120,    49,   155,   156,   163,    80,   163,    98,   129,
     163,   163,   102,   163,    93,    44,   168,    89,   138,   139,
     163,    88,   167,   167,   114,    99,    62,    50,    53,   163,
     163,    67,     3,   164,     3,   155,   156,    73,    74,   163,
      96,    77,   116,   163,   167,   163,    89,   164,   168,    96,
     110,   163,   162,    99,    90,   129,   161,    65,     6,    95,
     167,     6,    99,   164,   138,   139,   164,   164,    94,   116,
      73,    73,    73,    94,    49,     3,   123,   124,   164,   121,
     164,   155,   156,   130,   131,    63,   164,   164,   163,   163,
     126,   164,   163,    23,   168,   165,   279,   144,   145,   146,
     147,   148,    44,   310,   151,   152,     0,   154,   155,   156,
     157,   158,   159,     7,   161,   139,   390,   276,     7,    52,
     203,    15,   290,   128,    49,   231,    15,   440,    22,   237,
     466,   439,    26,    22,   283,    92,    -1,    26,    32,   459,
      -1,    35,    36,    32,    -1,   214,    35,    36,    -1,   124,
      -1,    -1,    -1,    47,    48,   130,    -1,    -1,    47,    48,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    58,
      -1,    96,   147,   148,    -1,    -1,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,   110,   161,    -1,    82,    -1,
      49,   116,    86,    82,    -1,    -1,    -1,    86,    -1,   124,
      -1,    -1,    -1,    -1,    -1,   130,   131,   101,    -1,    49,
      -1,    -1,   101,   107,    -1,    -1,    -1,    -1,   107,   144,
     145,   146,   147,   148,    -1,    -1,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,    -1,   161,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
      -1,    -1,   141,   142,   143,    -1,    96,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   144,   145,   146,   147,   148,
     130,   131,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,    -1,   161,    -1,   144,   145,   146,   147,   148,    -1,
      -1,   151,   152,    -1,   154,   155,   156,   157,   158,   159,
      -1,   161
};

  /* YYSTOSSTATE-NUM -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   101,   107,   141,   142,   143,   170,   171,
     172,   173,   177,   179,   181,   182,   186,   187,   188,   194,
     196,   197,   198,   200,   203,   266,   267,    26,     3,   261,
       3,     3,   261,    75,   105,    89,    89,    93,   260,   261,
     261,    75,   105,    19,    55,     3,   268,   269,   140,   178,
     178,   178,     0,   166,   273,   107,   174,   174,    53,   163,
     206,   207,   211,     3,   165,   163,    89,   122,   189,   189,
     261,     3,   183,   261,   118,    89,   128,   122,   195,   195,
     261,   120,   167,   172,    92,   119,   223,   206,   207,     9,
      40,    76,   208,   209,    72,   208,   219,     3,     4,     5,
       6,    99,   138,   139,   168,   226,   227,   248,   249,   250,
     251,   252,   253,   254,     4,   180,   116,   261,   261,    78,
     216,    88,   163,   199,     3,   201,   202,   184,   249,   184,
      41,   261,   261,   206,   269,   163,   252,    12,   212,   164,
     164,   204,   205,   206,   211,   109,   210,   121,   204,    50,
      68,   224,   164,   167,    41,    89,   120,   163,   199,     3,
      41,    42,    43,    80,   116,   129,   155,   156,   163,   229,
     230,   231,   232,   233,   234,   235,   236,   238,   239,   240,
     241,   242,   244,   245,   246,   247,   248,   184,     3,   274,
      59,   207,   144,   167,   216,   107,   185,   185,     3,   175,
     176,   213,   225,   228,   229,   219,   208,   220,   221,   229,
     219,   229,   109,   229,   248,     3,   203,     3,   190,   191,
     120,   163,   165,   163,   163,   163,   106,   229,   237,    41,
     116,   230,   161,   230,   207,   229,   110,   127,    17,    49,
      96,   116,   123,   124,   130,   131,   144,   145,   146,   147,
     148,   151,   152,   154,   155,   156,   157,   158,   159,   161,
      93,   164,   167,   163,   229,   202,    44,   163,   164,   167,
      89,   214,   215,   167,     3,   120,   264,   265,   224,   204,
     167,    85,   111,   222,   224,    50,    50,    88,    24,    30,
      38,    64,    81,    83,    84,    98,   102,   114,   192,   164,
     167,   203,   164,   212,     3,   156,   207,   132,   133,   134,
     135,   136,   137,   243,   229,   229,   237,    87,   106,   112,
     163,   116,   225,   164,   164,   229,   229,   230,   230,    96,
     123,   163,    99,   116,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   252,
     261,     3,   227,   183,   227,   176,   163,   255,   256,   257,
     258,   259,   261,   270,   216,   228,     3,   221,   229,   229,
     184,   163,   163,    99,   116,   193,   191,   225,   164,    89,
     120,   103,    87,   112,   229,   229,   207,   162,   110,   230,
     163,   207,   225,    99,   162,   164,   164,   203,    25,    62,
      67,    73,    74,    90,    95,   271,   167,   120,   262,   263,
     264,    65,   217,     6,     6,    99,   164,   229,   192,   229,
     229,   112,   103,   164,   230,   207,   225,   164,   164,   164,
      94,    73,    73,    73,    94,   256,     3,   121,   164,   164,
     164,   164,   112,   229,   164,   164,   263,   257,   256,   163,
     225,    77,   126,   274,    46,   218,   163,   229,   272,   164,
     229,     3,   247,   164
};

  /* YYR1YYN -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   169,   170,   171,   171,   172,   172,   172,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   177,   178,   178,
     179,   180,   181,   181,   182,   182,   183,   184,   185,   185,
     186,   187,   187,   187,   188,   188,   188,   188,   189,   189,
     190,   190,   191,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   193,   193,   194,   194,   194,   195,
     195,   196,   197,   198,   198,   199,   199,   200,   201,   201,
     202,   203,   203,   203,   204,   204,   205,   205,   206,   206,
     207,   207,   208,   209,   209,   209,   210,   210,   211,   212,
     212,   213,   214,   214,   215,   216,   216,   217,   217,   218,
     218,   219,   219,   220,   220,   221,   222,   222,   222,   223,
     223,   224,   224,   224,   224,   224,   224,   225,   225,   226,
     226,   227,   227,   228,   229,   229,   229,   229,   229,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     231,   231,   232,   232,   232,   232,   232,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   234,
     235,   235,   235,   235,   236,   236,   236,   236,   237,   237,
     238,   238,   239,   239,   239,   239,   239,   239,   239,   240,
     240,   241,   242,   243,   243,   243,   243,   243,   243,   244,
     245,   246,   247,   247,   247,   247,   248,   248,   248,   248,
     248,   249,   250,   250,   251,   251,   252,   253,   254,   255,
     255,   256,   256,   257,   257,   258,   258,   259,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   268,   268,   269,   270,   270,   270,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   272,   273,
     273,   274,   274
};

  /* YYR2YYN -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     7,     6,     7,     3,     0,
       1,     3,     3,     1,     1,     1,     1,     1,     4,     4,
       1,     1,     1,     1,     2,     0,     4,     4,     3,     2,
       0,     4,     2,     8,     5,     3,     0,     5,     1,     3,
       3,     2,     2,     6,     1,     1,     1,     3,     3,     3,
       3,     5,     2,     1,     1,     1,     1,     0,     7,     1,
       0,     1,     1,     0,     2,     2,     0,     4,     0,     2,
       0,     3,     0,     1,     3,     2,     1,     1,     0,     2,
       0,     2,     2,     4,     2,     4,     0,     1,     3,     1,
       0,     1,     3,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       5,     6,     5,     6,     4,     6,     3,     5,     4,     5,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     6,     6,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     2,     1,     1,
       3,     1,     5,     1,     0,     2,     1,     1,     0,     1,
       0,     2,     1,     3,     3,     4,     6,     8,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     0,     1,     1,
       0,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case 3: /* IDENTIFIER  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2184 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2190 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 147 "bison_parser.y"
            { }
#line 2196 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 147 "bison_parser.y"
            { }
#line 2202 "bison_parser.cpp"
        break;

    case 171: /* statement_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 2215 "bison_parser.cpp"
        break;

    case 172: /* statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2221 "bison_parser.cpp"
        break;

    case 173: /* preparable_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2227 "bison_parser.cpp"
        break;

    case 174: /* opt_hints  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2240 "bison_parser.cpp"
        break;

    case 175: /* hint_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2253 "bison_parser.cpp"
        break;

    case 176: /* hint  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2259 "bison_parser.cpp"
        break;

    case 177: /* transaction_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2265 "bison_parser.cpp"
        break;

    case 179: /* prepare_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2271 "bison_parser.cpp"
        break;

    case 180: /* prepare_target_query  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2277 "bison_parser.cpp"
        break;

    case 181: /* execute_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2283 "bison_parser.cpp"
        break;

    case 182: /* import_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2289 "bison_parser.cpp"
        break;

    case 183: /* file_type  */
#line 147 "bison_parser.y"
            { }
#line 2295 "bison_parser.cpp"
        break;

    case 184: /* file_path  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2301 "bison_parser.cpp"
        break;

    case 185: /* opt_file_type  */
#line 147 "bison_parser.y"
            { }
#line 2307 "bison_parser.cpp"
        break;

    case 186: /* export_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2313 "bison_parser.cpp"
        break;

    case 187: /* show_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2319 "bison_parser.cpp"
        break;

    case 188: /* create_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2325 "bison_parser.cpp"
        break;

    case 189: /* opt_not_exists  */
#line 147 "bison_parser.y"
            { }
#line 2331 "bison_parser.cpp"
        break;

    case 190: /* column_def_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2344 "bison_parser.cpp"
        break;

    case 191: /* column_def  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2350 "bison_parser.cpp"
        break;

    case 192: /* column_type  */
#line 147 "bison_parser.y"
            { }
#line 2356 "bison_parser.cpp"
        break;

    case 193: /* opt_column_nullable  */
#line 147 "bison_parser.y"
            { }
#line 2362 "bison_parser.cpp"
        break;

    case 194: /* drop_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2368 "bison_parser.cpp"
        break;

    case 195: /* opt_exists  */
#line 147 "bison_parser.y"
            { }
#line 2374 "bison_parser.cpp"
        break;

    case 196: /* delete_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2380 "bison_parser.cpp"
        break;

    case 197: /* truncate_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2386 "bison_parser.cpp"
        break;

    case 198: /* insert_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2392 "bison_parser.cpp"
        break;

    case 199: /* opt_column_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2405 "bison_parser.cpp"
        break;

    case 200: /* update_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2411 "bison_parser.cpp"
        break;

    case 201: /* update_clause_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2424 "bison_parser.cpp"
        break;

    case 202: /* update_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2430 "bison_parser.cpp"
        break;

    case 203: /* select_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2436 "bison_parser.cpp"
        break;

    case 204: /* select_within_set_operation  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2442 "bison_parser.cpp"
        break;

    case 205: /* select_within_set_operation_no_parentheses  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2448 "bison_parser.cpp"
        break;

    case 206: /* select_with_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2454 "bison_parser.cpp"
        break;

    case 207: /* select_no_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2460 "bison_parser.cpp"
        break;

    case 208: /* set_operator  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2466 "bison_parser.cpp"
        break;

    case 209: /* set_type  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2472 "bison_parser.cpp"
        break;

    case 210: /* opt_all  */
#line 147 "bison_parser.y"
            { }
#line 2478 "bison_parser.cpp"
        break;

    case 211: /* select_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2484 "bison_parser.cpp"
        break;

    case 212: /* opt_distinct  */
#line 147 "bison_parser.y"
            { }
#line 2490 "bison_parser.cpp"
        break;

    case 213: /* select_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2503 "bison_parser.cpp"
        break;

    case 214: /* opt_from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2509 "bison_parser.cpp"
        break;

    case 215: /* from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2515 "bison_parser.cpp"
        break;

    case 216: /* opt_where  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2521 "bison_parser.cpp"
        break;

    case 217: /* opt_group  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2527 "bison_parser.cpp"
        break;

    case 218: /* opt_having  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2533 "bison_parser.cpp"
        break;

    case 219: /* opt_order  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2546 "bison_parser.cpp"
        break;

    case 220: /* order_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2559 "bison_parser.cpp"
        break;

    case 221: /* order_desc  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2565 "bison_parser.cpp"
        break;

    case 222: /* opt_order_type  */
#line 147 "bison_parser.y"
            { }
#line 2571 "bison_parser.cpp"
        break;

    case 223: /* opt_top  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2577 "bison_parser.cpp"
        break;

    case 224: /* opt_limit  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2583 "bison_parser.cpp"
        break;

    case 225: /* expr_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2596 "bison_parser.cpp"
        break;

    case 226: /* opt_literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2609 "bison_parser.cpp"
        break;

    case 227: /* literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2622 "bison_parser.cpp"
        break;

    case 228: /* expr_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2628 "bison_parser.cpp"
        break;

    case 229: /* expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2634 "bison_parser.cpp"
        break;

    case 230: /* operand  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2640 "bison_parser.cpp"
        break;

    case 231: /* scalar_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2646 "bison_parser.cpp"
        break;

    case 232: /* unary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2652 "bison_parser.cpp"
        break;

    case 233: /* binary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2658 "bison_parser.cpp"
        break;

    case 234: /* logic_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2664 "bison_parser.cpp"
        break;

    case 235: /* in_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2670 "bison_parser.cpp"
        break;

    case 236: /* case_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2676 "bison_parser.cpp"
        break;

    case 237: /* case_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2682 "bison_parser.cpp"
        break;

    case 238: /* exists_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2688 "bison_parser.cpp"
        break;

    case 239: /* comp_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2694 "bison_parser.cpp"
        break;

    case 240: /* function_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2700 "bison_parser.cpp"
        break;

    case 241: /* extract_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2706 "bison_parser.cpp"
        break;

    case 242: /* cast_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2712 "bison_parser.cpp"
        break;

    case 243: /* datetime_field  */
#line 147 "bison_parser.y"
            { }
#line 2718 "bison_parser.cpp"
        break;

    case 244: /* array_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2724 "bison_parser.cpp"
        break;

    case 245: /* array_index  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2730 "bison_parser.cpp"
        break;

    case 246: /* between_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2736 "bison_parser.cpp"
        break;

    case 247: /* column_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2742 "bison_parser.cpp"
        break;

    case 248: /* literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2748 "bison_parser.cpp"
        break;

    case 249: /* string_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2754 "bison_parser.cpp"
        break;

    case 250: /* bool_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2760 "bison_parser.cpp"
        break;

    case 251: /* num_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2766 "bison_parser.cpp"
        break;

    case 252: /* int_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2772 "bison_parser.cpp"
        break;

    case 253: /* null_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2778 "bison_parser.cpp"
        break;

    case 254: /* param_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2784 "bison_parser.cpp"
        break;

    case 255: /* table_ref  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2790 "bison_parser.cpp"
        break;

    case 256: /* table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2796 "bison_parser.cpp"
        break;

    case 257: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2802 "bison_parser.cpp"
        break;

    case 258: /* table_ref_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2815 "bison_parser.cpp"
        break;

    case 259: /* table_ref_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2821 "bison_parser.cpp"
        break;

    case 260: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2827 "bison_parser.cpp"
        break;

    case 261: /* table_name  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2833 "bison_parser.cpp"
        break;

    case 262: /* table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2839 "bison_parser.cpp"
        break;

    case 263: /* opt_table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2845 "bison_parser.cpp"
        break;

    case 264: /* alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2851 "bison_parser.cpp"
        break;

    case 265: /* opt_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2857 "bison_parser.cpp"
        break;

    case 266: /* opt_with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2863 "bison_parser.cpp"
        break;

    case 267: /* with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2869 "bison_parser.cpp"
        break;

    case 268: /* with_description_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2875 "bison_parser.cpp"
        break;

    case 269: /* with_description  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2881 "bison_parser.cpp"
        break;

    case 270: /* join_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2887 "bison_parser.cpp"
        break;

    case 271: /* opt_join_type  */
#line 147 "bison_parser.y"
            { }
#line 2893 "bison_parser.cpp"
        break;

    case 272: /* join_condition  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2899 "bison_parser.cpp"
        break;

    case 274: /* ident_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2912 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 3034 "bison_parser.cpp"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 269 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 3262 "bison_parser.cpp"
    break;

  case 3:
#line 290 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3273 "bison_parser.cpp"
    break;

  case 4:
#line 296 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3284 "bison_parser.cpp"
    break;

  case 5:
#line 305 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3293 "bison_parser.cpp"
    break;

  case 6:
#line 309 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3302 "bison_parser.cpp"
    break;

  case 7:
#line 313 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3310 "bison_parser.cpp"
    break;

  case 8:
#line 316 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3318 "bison_parser.cpp"
    break;

  case 9:
#line 319 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3326 "bison_parser.cpp"
    break;

  case 10:
#line 326 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3332 "bison_parser.cpp"
    break;

  case 11:
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3338 "bison_parser.cpp"
    break;

  case 12:
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3344 "bison_parser.cpp"
    break;

  case 13:
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3350 "bison_parser.cpp"
    break;

  case 14:
#line 330 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3356 "bison_parser.cpp"
    break;

  case 15:
#line 331 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3362 "bison_parser.cpp"
    break;

  case 16:
#line 332 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3368 "bison_parser.cpp"
    break;

  case 17:
#line 333 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3374 "bison_parser.cpp"
    break;

  case 18:
#line 334 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3380 "bison_parser.cpp"
    break;

  case 19:
#line 343 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3386 "bison_parser.cpp"
    break;

  case 20:
#line 344 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3392 "bison_parser.cpp"
    break;

  case 21:
#line 349 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3398 "bison_parser.cpp"
    break;

  case 22:
#line 350 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3404 "bison_parser.cpp"
    break;

  case 23:
#line 354 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3413 "bison_parser.cpp"
    break;

  case 24:
#line 358 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3423 "bison_parser.cpp"
    break;

  case 25:
#line 370 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3431 "bison_parser.cpp"
    break;

  case 26:
#line 373 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3439 "bison_parser.cpp"
    break;

  case 27:
#line 376 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3447 "bison_parser.cpp"
    break;

  case 30:
#line 390 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3457 "bison_parser.cpp"
    break;

  case 32:
#line 400 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3466 "bison_parser.cpp"
    break;

  case 33:
#line 404 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3476 "bison_parser.cpp"
    break;

  case 34:
#line 418 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3487 "bison_parser.cpp"
    break;

  case 35:
#line 424 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3498 "bison_parser.cpp"
    break;

  case 36:
#line 433 "bison_parser.y"
                           {
			if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
				(yyval.import_type_t) = kImportCSV;
			} else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
				(yyval.import_type_t) = kImportTbl;
			} else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
				(yyval.import_type_t) = kImportBinary;
			} else {
				free((yyvsp[0].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
				YYERROR;
			}
			free((yyvsp[0].sval));
		}
#line 3517 "bison_parser.cpp"
    break;

  case 37:
#line 450 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3523 "bison_parser.cpp"
    break;

  case 38:
#line 454 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3531 "bison_parser.cpp"
    break;

  case 39:
#line 457 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3537 "bison_parser.cpp"
    break;

  case 40:
#line 466 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3548 "bison_parser.cpp"
    break;

  case 41:
#line 480 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3556 "bison_parser.cpp"
    break;

  case 42:
#line 483 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3566 "bison_parser.cpp"
    break;

  case 43:
#line 488 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3576 "bison_parser.cpp"
    break;

  case 44:
#line 502 "bison_parser.y"
                                                                                      {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
				free((yyvsp[-2].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
			 	YYERROR;
			}
			free((yyvsp[-2].sval));
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3594 "bison_parser.cpp"
    break;

  case 45:
#line 515 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3606 "bison_parser.cpp"
    break;

  case 46:
#line 522 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3618 "bison_parser.cpp"
    break;

  case 47:
#line 529 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3631 "bison_parser.cpp"
    break;

  case 48:
#line 540 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3637 "bison_parser.cpp"
    break;

  case 49:
#line 541 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3643 "bison_parser.cpp"
    break;

  case 50:
#line 545 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3649 "bison_parser.cpp"
    break;

  case 51:
#line 546 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3655 "bison_parser.cpp"
    break;

  case 52:
#line 550 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3663 "bison_parser.cpp"
    break;

  case 53:
#line 556 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3669 "bison_parser.cpp"
    break;

  case 54:
#line 557 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3675 "bison_parser.cpp"
    break;

  case 55:
#line 558 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3681 "bison_parser.cpp"
    break;

  case 56:
#line 559 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3687 "bison_parser.cpp"
    break;

  case 57:
#line 560 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3693 "bison_parser.cpp"
    break;

  case 58:
#line 561 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3699 "bison_parser.cpp"
    break;

  case 59:
#line 562 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3705 "bison_parser.cpp"
    break;

  case 60:
#line 563 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3711 "bison_parser.cpp"
    break;

  case 61:
#line 564 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3717 "bison_parser.cpp"
    break;

  case 62:
#line 565 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3723 "bison_parser.cpp"
    break;

  case 63:
#line 569 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3729 "bison_parser.cpp"
    break;

  case 64:
#line 570 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3735 "bison_parser.cpp"
    break;

  case 65:
#line 571 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3741 "bison_parser.cpp"
    break;

  case 66:
#line 581 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3752 "bison_parser.cpp"
    break;

  case 67:
#line 587 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3763 "bison_parser.cpp"
    break;

  case 68:
#line 593 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3773 "bison_parser.cpp"
    break;

  case 69:
#line 601 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3779 "bison_parser.cpp"
    break;

  case 70:
#line 602 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3785 "bison_parser.cpp"
    break;

  case 71:
#line 611 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3796 "bison_parser.cpp"
    break;

  case 72:
#line 620 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3806 "bison_parser.cpp"
    break;

  case 73:
#line 633 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3818 "bison_parser.cpp"
    break;

  case 74:
#line 640 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3830 "bison_parser.cpp"
    break;

  case 75:
#line 651 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3836 "bison_parser.cpp"
    break;

  case 76:
#line 652 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3842 "bison_parser.cpp"
    break;

  case 77:
#line 662 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3853 "bison_parser.cpp"
    break;

  case 78:
#line 671 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3859 "bison_parser.cpp"
    break;

  case 79:
#line 672 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3865 "bison_parser.cpp"
    break;

  case 80:
#line 676 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3875 "bison_parser.cpp"
    break;

  case 81:
#line 688 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3884 "bison_parser.cpp"
    break;

  case 82:
#line 692 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3893 "bison_parser.cpp"
    break;

  case 83:
#line 696 "bison_parser.y"
                                                                                                               {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
		}
#line 3909 "bison_parser.cpp"
    break;

  case 86:
#line 714 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3915 "bison_parser.cpp"
    break;

  case 87:
#line 715 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3928 "bison_parser.cpp"
    break;

  case 88:
#line 726 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3934 "bison_parser.cpp"
    break;

  case 89:
#line 727 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3940 "bison_parser.cpp"
    break;

  case 90:
#line 731 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3955 "bison_parser.cpp"
    break;

  case 91:
#line 741 "bison_parser.y"
                                                                                           {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
		}
#line 3970 "bison_parser.cpp"
    break;

  case 92:
#line 754 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3979 "bison_parser.cpp"
    break;

  case 93:
#line 761 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3988 "bison_parser.cpp"
    break;

  case 94:
#line 765 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3997 "bison_parser.cpp"
    break;

  case 95:
#line 769 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 4006 "bison_parser.cpp"
    break;

  case 96:
#line 776 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 4014 "bison_parser.cpp"
    break;

  case 97:
#line 779 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 4022 "bison_parser.cpp"
    break;

  case 98:
#line 785 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 4036 "bison_parser.cpp"
    break;

  case 99:
#line 797 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 4042 "bison_parser.cpp"
    break;

  case 100:
#line 798 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4048 "bison_parser.cpp"
    break;

  case 102:
#line 806 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4054 "bison_parser.cpp"
    break;

  case 103:
#line 807 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4060 "bison_parser.cpp"
    break;

  case 104:
#line 811 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4066 "bison_parser.cpp"
    break;

  case 105:
#line 816 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4072 "bison_parser.cpp"
    break;

  case 106:
#line 817 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4078 "bison_parser.cpp"
    break;

  case 107:
#line 821 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4088 "bison_parser.cpp"
    break;

  case 108:
#line 826 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4094 "bison_parser.cpp"
    break;

  case 109:
#line 830 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4100 "bison_parser.cpp"
    break;

  case 110:
#line 831 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4106 "bison_parser.cpp"
    break;

  case 111:
#line 835 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4112 "bison_parser.cpp"
    break;

  case 112:
#line 836 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4118 "bison_parser.cpp"
    break;

  case 113:
#line 840 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4124 "bison_parser.cpp"
    break;

  case 114:
#line 841 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4130 "bison_parser.cpp"
    break;

  case 115:
#line 845 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4136 "bison_parser.cpp"
    break;

  case 116:
#line 849 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4142 "bison_parser.cpp"
    break;

  case 117:
#line 850 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4148 "bison_parser.cpp"
    break;

  case 118:
#line 851 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4154 "bison_parser.cpp"
    break;

  case 119:
#line 857 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4160 "bison_parser.cpp"
    break;

  case 120:
#line 858 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4166 "bison_parser.cpp"
    break;

  case 121:
#line 862 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4172 "bison_parser.cpp"
    break;

  case 122:
#line 863 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4178 "bison_parser.cpp"
    break;

  case 123:
#line 864 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4184 "bison_parser.cpp"
    break;

  case 124:
#line 865 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4190 "bison_parser.cpp"
    break;

  case 125:
#line 866 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4196 "bison_parser.cpp"
    break;

  case 126:
#line 867 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4202 "bison_parser.cpp"
    break;

  case 127:
#line 874 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4208 "bison_parser.cpp"
    break;

  case 128:
#line 875 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4214 "bison_parser.cpp"
    break;

  case 129:
#line 879 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4220 "bison_parser.cpp"
    break;

  case 130:
#line 880 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4226 "bison_parser.cpp"
    break;

  case 131:
#line 884 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4232 "bison_parser.cpp"
    break;

  case 132:
#line 885 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4238 "bison_parser.cpp"
    break;

  case 133:
#line 889 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4250 "bison_parser.cpp"
    break;

  case 139:
#line 907 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4256 "bison_parser.cpp"
    break;

  case 149:
#line 917 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4262 "bison_parser.cpp"
    break;

  case 152:
#line 926 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4268 "bison_parser.cpp"
    break;

  case 153:
#line 927 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4274 "bison_parser.cpp"
    break;

  case 154:
#line 928 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4280 "bison_parser.cpp"
    break;

  case 155:
#line 929 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4286 "bison_parser.cpp"
    break;

  case 156:
#line 930 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4292 "bison_parser.cpp"
    break;

  case 158:
#line 935 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4298 "bison_parser.cpp"
    break;

  case 159:
#line 936 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4304 "bison_parser.cpp"
    break;

  case 160:
#line 937 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4310 "bison_parser.cpp"
    break;

  case 161:
#line 938 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4316 "bison_parser.cpp"
    break;

  case 162:
#line 939 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4322 "bison_parser.cpp"
    break;

  case 163:
#line 940 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4328 "bison_parser.cpp"
    break;

  case 164:
#line 941 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4334 "bison_parser.cpp"
    break;

  case 165:
#line 942 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4340 "bison_parser.cpp"
    break;

  case 166:
#line 943 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4346 "bison_parser.cpp"
    break;

  case 167:
#line 944 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4352 "bison_parser.cpp"
    break;

  case 168:
#line 948 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4358 "bison_parser.cpp"
    break;

  case 169:
#line 949 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4364 "bison_parser.cpp"
    break;

  case 170:
#line 953 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4370 "bison_parser.cpp"
    break;

  case 171:
#line 954 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4376 "bison_parser.cpp"
    break;

  case 172:
#line 955 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4382 "bison_parser.cpp"
    break;

  case 173:
#line 956 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4388 "bison_parser.cpp"
    break;

  case 174:
#line 962 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4394 "bison_parser.cpp"
    break;

  case 175:
#line 963 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4400 "bison_parser.cpp"
    break;

  case 176:
#line 964 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4406 "bison_parser.cpp"
    break;

  case 177:
#line 965 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4412 "bison_parser.cpp"
    break;

  case 178:
#line 969 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4418 "bison_parser.cpp"
    break;

  case 179:
#line 970 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4424 "bison_parser.cpp"
    break;

  case 180:
#line 974 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4430 "bison_parser.cpp"
    break;

  case 181:
#line 975 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4436 "bison_parser.cpp"
    break;

  case 182:
#line 979 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4442 "bison_parser.cpp"
    break;

  case 183:
#line 980 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4448 "bison_parser.cpp"
    break;

  case 184:
#line 981 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4454 "bison_parser.cpp"
    break;

  case 185:
#line 982 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4460 "bison_parser.cpp"
    break;

  case 186:
#line 983 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4466 "bison_parser.cpp"
    break;

  case 187:
#line 984 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4472 "bison_parser.cpp"
    break;

  case 188:
#line 985 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4478 "bison_parser.cpp"
    break;

  case 189:
#line 989 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4484 "bison_parser.cpp"
    break;

  case 190:
#line 990 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4490 "bison_parser.cpp"
    break;

  case 191:
#line 994 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4496 "bison_parser.cpp"
    break;

  case 192:
#line 998 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4502 "bison_parser.cpp"
    break;

  case 193:
#line 1002 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4508 "bison_parser.cpp"
    break;

  case 194:
#line 1003 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4514 "bison_parser.cpp"
    break;

  case 195:
#line 1004 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4520 "bison_parser.cpp"
    break;

  case 196:
#line 1005 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4526 "bison_parser.cpp"
    break;

  case 197:
#line 1006 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4532 "bison_parser.cpp"
    break;

  case 198:
#line 1007 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4538 "bison_parser.cpp"
    break;

  case 199:
#line 1011 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4544 "bison_parser.cpp"
    break;

  case 200:
#line 1015 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4550 "bison_parser.cpp"
    break;

  case 201:
#line 1019 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4556 "bison_parser.cpp"
    break;

  case 202:
#line 1023 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4562 "bison_parser.cpp"
    break;

  case 203:
#line 1024 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4568 "bison_parser.cpp"
    break;

  case 204:
#line 1025 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4574 "bison_parser.cpp"
    break;

  case 205:
#line 1026 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4580 "bison_parser.cpp"
    break;

  case 211:
#line 1038 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4586 "bison_parser.cpp"
    break;

  case 212:
#line 1042 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4592 "bison_parser.cpp"
    break;

  case 213:
#line 1043 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4598 "bison_parser.cpp"
    break;

  case 214:
#line 1047 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4604 "bison_parser.cpp"
    break;

  case 216:
#line 1052 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4610 "bison_parser.cpp"
    break;

  case 217:
#line 1056 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4616 "bison_parser.cpp"
    break;

  case 218:
#line 1060 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4626 "bison_parser.cpp"
    break;

  case 220:
#line 1073 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4637 "bison_parser.cpp"
    break;

  case 224:
#line 1089 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4648 "bison_parser.cpp"
    break;

  case 225:
#line 1098 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4654 "bison_parser.cpp"
    break;

  case 226:
#line 1099 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4660 "bison_parser.cpp"
    break;

  case 227:
#line 1104 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4672 "bison_parser.cpp"
    break;

  case 228:
#line 1115 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4682 "bison_parser.cpp"
    break;

  case 229:
#line 1124 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4688 "bison_parser.cpp"
    break;

  case 230:
#line 1125 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4694 "bison_parser.cpp"
    break;

  case 232:
#line 1131 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4700 "bison_parser.cpp"
    break;

  case 234:
#line 1137 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4706 "bison_parser.cpp"
    break;

  case 235:
#line 1142 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4712 "bison_parser.cpp"
    break;

  case 236:
#line 1143 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4718 "bison_parser.cpp"
    break;

  case 238:
#line 1149 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4724 "bison_parser.cpp"
    break;

  case 240:
#line 1159 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4730 "bison_parser.cpp"
    break;

  case 241:
#line 1163 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4736 "bison_parser.cpp"
    break;

  case 242:
#line 1167 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4745 "bison_parser.cpp"
    break;

  case 243:
#line 1171 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4754 "bison_parser.cpp"
    break;

  case 244:
#line 1178 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4764 "bison_parser.cpp"
    break;

  case 245:
#line 1192 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4776 "bison_parser.cpp"
    break;

  case 246:
#line 1200 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4789 "bison_parser.cpp"
    break;

  case 247:
#line 1210 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4809 "bison_parser.cpp"
    break;

  case 248:
#line 1228 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4815 "bison_parser.cpp"
    break;

  case 249:
#line 1229 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4821 "bison_parser.cpp"
    break;

  case 250:
#line 1230 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4827 "bison_parser.cpp"
    break;

  case 251:
#line 1231 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4833 "bison_parser.cpp"
    break;

  case 252:
#line 1232 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4839 "bison_parser.cpp"
    break;

  case 253:
#line 1233 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4845 "bison_parser.cpp"
    break;

  case 254:
#line 1234 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4851 "bison_parser.cpp"
    break;

  case 255:
#line 1235 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4857 "bison_parser.cpp"
    break;

  case 256:
#line 1236 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4863 "bison_parser.cpp"
    break;

  case 257:
#line 1237 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4869 "bison_parser.cpp"
    break;

  case 261:
#line 1257 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4875 "bison_parser.cpp"
    break;

  case 262:
#line 1258 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4881 "bison_parser.cpp"
    break;


#line 4885 "bison_parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != SQL_HSQL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1261 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
