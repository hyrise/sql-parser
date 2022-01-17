/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
#if defined YYDEBUG
#if YYDEBUG
#define HSQL_DEBUG 1
#else
#define HSQL_DEBUG 0
#endif
#else /* ! defined YYDEBUG */
#define HSQL_DEBUG 0
#endif /* ! defined YYDEBUG */
#endif /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 38 "bison_parser.y"

// clang-format on
// %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 81 "bison_parser.h"

/* Token kinds.  */
#ifndef HSQL_TOKENTYPE
#define HSQL_TOKENTYPE
enum hsql_tokentype {
  SQL_HSQL_EMPTY = -2,
  SQL_YYEOF = 0,               /* "end of file"  */
  SQL_HSQL_error = 256,        /* error  */
  SQL_HSQL_UNDEF = 257,        /* "invalid token"  */
  SQL_IDENTIFIER = 258,        /* IDENTIFIER  */
  SQL_STRING = 259,            /* STRING  */
  SQL_FLOATVAL = 260,          /* FLOATVAL  */
  SQL_INTVAL = 261,            /* INTVAL  */
  SQL_DEALLOCATE = 262,        /* DEALLOCATE  */
  SQL_PARAMETERS = 263,        /* PARAMETERS  */
  SQL_INTERSECT = 264,         /* INTERSECT  */
  SQL_TEMPORARY = 265,         /* TEMPORARY  */
  SQL_TIMESTAMP = 266,         /* TIMESTAMP  */
  SQL_DISTINCT = 267,          /* DISTINCT  */
  SQL_NVARCHAR = 268,          /* NVARCHAR  */
  SQL_RESTRICT = 269,          /* RESTRICT  */
  SQL_TRUNCATE = 270,          /* TRUNCATE  */
  SQL_ANALYZE = 271,           /* ANALYZE  */
  SQL_BETWEEN = 272,           /* BETWEEN  */
  SQL_CASCADE = 273,           /* CASCADE  */
  SQL_COLUMNS = 274,           /* COLUMNS  */
  SQL_CONTROL = 275,           /* CONTROL  */
  SQL_DEFAULT = 276,           /* DEFAULT  */
  SQL_EXECUTE = 277,           /* EXECUTE  */
  SQL_EXPLAIN = 278,           /* EXPLAIN  */
  SQL_INTEGER = 279,           /* INTEGER  */
  SQL_NATURAL = 280,           /* NATURAL  */
  SQL_PREPARE = 281,           /* PREPARE  */
  SQL_PRIMARY = 282,           /* PRIMARY  */
  SQL_SCHEMAS = 283,           /* SCHEMAS  */
  SQL_CHARACTER_VARYING = 284, /* CHARACTER_VARYING  */
  SQL_REAL = 285,              /* REAL  */
  SQL_DECIMAL = 286,           /* DECIMAL  */
  SQL_SMALLINT = 287,          /* SMALLINT  */
  SQL_SPATIAL = 288,           /* SPATIAL  */
  SQL_VARCHAR = 289,           /* VARCHAR  */
  SQL_VIRTUAL = 290,           /* VIRTUAL  */
  SQL_DESCRIBE = 291,          /* DESCRIBE  */
  SQL_BEFORE = 292,            /* BEFORE  */
  SQL_COLUMN = 293,            /* COLUMN  */
  SQL_CREATE = 294,            /* CREATE  */
  SQL_DELETE = 295,            /* DELETE  */
  SQL_DIRECT = 296,            /* DIRECT  */
  SQL_DOUBLE = 297,            /* DOUBLE  */
  SQL_ESCAPE = 298,            /* ESCAPE  */
  SQL_EXCEPT = 299,            /* EXCEPT  */
  SQL_EXISTS = 300,            /* EXISTS  */
  SQL_EXTRACT = 301,           /* EXTRACT  */
  SQL_CAST = 302,              /* CAST  */
  SQL_FORMAT = 303,            /* FORMAT  */
  SQL_GLOBAL = 304,            /* GLOBAL  */
  SQL_HAVING = 305,            /* HAVING  */
  SQL_IMPORT = 306,            /* IMPORT  */
  SQL_INSERT = 307,            /* INSERT  */
  SQL_ISNULL = 308,            /* ISNULL  */
  SQL_OFFSET = 309,            /* OFFSET  */
  SQL_RENAME = 310,            /* RENAME  */
  SQL_SCHEMA = 311,            /* SCHEMA  */
  SQL_SELECT = 312,            /* SELECT  */
  SQL_SORTED = 313,            /* SORTED  */
  SQL_TABLES = 314,            /* TABLES  */
  SQL_UNIQUE = 315,            /* UNIQUE  */
  SQL_UNLOAD = 316,            /* UNLOAD  */
  SQL_UPDATE = 317,            /* UPDATE  */
  SQL_VALUES = 318,            /* VALUES  */
  SQL_AFTER = 319,             /* AFTER  */
  SQL_ALTER = 320,             /* ALTER  */
  SQL_CROSS = 321,             /* CROSS  */
  SQL_DELTA = 322,             /* DELTA  */
  SQL_FLOAT = 323,             /* FLOAT  */
  SQL_GROUP = 324,             /* GROUP  */
  SQL_INDEX = 325,             /* INDEX  */
  SQL_INNER = 326,             /* INNER  */
  SQL_LIMIT = 327,             /* LIMIT  */
  SQL_LOCAL = 328,             /* LOCAL  */
  SQL_MERGE = 329,             /* MERGE  */
  SQL_MINUS = 330,             /* MINUS  */
  SQL_ORDER = 331,             /* ORDER  */
  SQL_OUTER = 332,             /* OUTER  */
  SQL_RIGHT = 333,             /* RIGHT  */
  SQL_TABLE = 334,             /* TABLE  */
  SQL_UNION = 335,             /* UNION  */
  SQL_USING = 336,             /* USING  */
  SQL_WHERE = 337,             /* WHERE  */
  SQL_CALL = 338,              /* CALL  */
  SQL_CASE = 339,              /* CASE  */
  SQL_CHAR = 340,              /* CHAR  */
  SQL_COPY = 341,              /* COPY  */
  SQL_DATE = 342,              /* DATE  */
  SQL_DATETIME = 343,          /* DATETIME  */
  SQL_DESC = 344,              /* DESC  */
  SQL_DROP = 345,              /* DROP  */
  SQL_ELSE = 346,              /* ELSE  */
  SQL_FILE = 347,              /* FILE  */
  SQL_FROM = 348,              /* FROM  */
  SQL_FULL = 349,              /* FULL  */
  SQL_HASH = 350,              /* HASH  */
  SQL_HINT = 351,              /* HINT  */
  SQL_INTO = 352,              /* INTO  */
  SQL_JOIN = 353,              /* JOIN  */
  SQL_LEFT = 354,              /* LEFT  */
  SQL_LIKE = 355,              /* LIKE  */
  SQL_LOAD = 356,              /* LOAD  */
  SQL_LONG = 357,              /* LONG  */
  SQL_NULL = 358,              /* NULL  */
  SQL_PLAN = 359,              /* PLAN  */
  SQL_SHOW = 360,              /* SHOW  */
  SQL_TEXT = 361,              /* TEXT  */
  SQL_THEN = 362,              /* THEN  */
  SQL_TIME = 363,              /* TIME  */
  SQL_VIEW = 364,              /* VIEW  */
  SQL_WHEN = 365,              /* WHEN  */
  SQL_WITH = 366,              /* WITH  */
  SQL_ADD = 367,               /* ADD  */
  SQL_ALL = 368,               /* ALL  */
  SQL_AND = 369,               /* AND  */
  SQL_ASC = 370,               /* ASC  */
  SQL_END = 371,               /* END  */
  SQL_FOR = 372,               /* FOR  */
  SQL_INT = 373,               /* INT  */
  SQL_KEY = 374,               /* KEY  */
  SQL_NOT = 375,               /* NOT  */
  SQL_OFF = 376,               /* OFF  */
  SQL_SET = 377,               /* SET  */
  SQL_TOP = 378,               /* TOP  */
  SQL_AS = 379,                /* AS  */
  SQL_BY = 380,                /* BY  */
  SQL_IF = 381,                /* IF  */
  SQL_IN = 382,                /* IN  */
  SQL_IS = 383,                /* IS  */
  SQL_OF = 384,                /* OF  */
  SQL_ON = 385,                /* ON  */
  SQL_OR = 386,                /* OR  */
  SQL_TO = 387,                /* TO  */
  SQL_ARRAY = 388,             /* ARRAY  */
  SQL_CONCAT = 389,            /* CONCAT  */
  SQL_ILIKE = 390,             /* ILIKE  */
  SQL_SECOND = 391,            /* SECOND  */
  SQL_MINUTE = 392,            /* MINUTE  */
  SQL_HOUR = 393,              /* HOUR  */
  SQL_DAY = 394,               /* DAY  */
  SQL_MONTH = 395,             /* MONTH  */
  SQL_YEAR = 396,              /* YEAR  */
  SQL_SECONDS = 397,           /* SECONDS  */
  SQL_MINUTES = 398,           /* MINUTES  */
  SQL_HOURS = 399,             /* HOURS  */
  SQL_DAYS = 400,              /* DAYS  */
  SQL_MONTHS = 401,            /* MONTHS  */
  SQL_YEARS = 402,             /* YEARS  */
  SQL_INTERVAL = 403,          /* INTERVAL  */
  SQL_TRUE = 404,              /* TRUE  */
  SQL_FALSE = 405,             /* FALSE  */
  SQL_TRANSACTION = 406,       /* TRANSACTION  */
  SQL_BEGIN = 407,             /* BEGIN  */
  SQL_COMMIT = 408,            /* COMMIT  */
  SQL_ROLLBACK = 409,          /* ROLLBACK  */
  SQL_EQUALS = 410,            /* EQUALS  */
  SQL_NOTEQUALS = 411,         /* NOTEQUALS  */
  SQL_LESS = 412,              /* LESS  */
  SQL_GREATER = 413,           /* GREATER  */
  SQL_LESSEQ = 414,            /* LESSEQ  */
  SQL_GREATEREQ = 415,         /* GREATEREQ  */
  SQL_NOTNULL = 416,           /* NOTNULL  */
  SQL_UMINUS = 417             /* UMINUS  */
};
typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if !defined HSQL_STYPE && !defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE {
#line 98 "bison_parser.y"

  // clang-format on
  bool bval;
  char* sval;
  double fval;
  int64_t ival;
  uintmax_t uval;

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
  hsql::ExportStatement* export_stmt;
  hsql::ImportStatement* import_stmt;
  hsql::InsertStatement* insert_stmt;
  hsql::PrepareStatement* prep_stmt;
  hsql::SelectStatement* select_stmt;
  hsql::ShowStatement* show_stmt;
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;

  hsql::Alias* alias_t;
  hsql::AlterAction* alter_action_t;
  hsql::ColumnDefinition* column_t;
  hsql::ColumnType column_type_t;
  hsql::ConstraintType column_constraint_t;
  hsql::DatetimeField datetime_field;
  hsql::DropColumnAction* drop_action_t;
  hsql::Expr* expr;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WithDescription* with_description_t;

  std::vector<char*>* str_vec;
  std::vector<hsql::ConstraintType>* column_constraint_vec;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;

  std::pair<int64_t, int64_t>* ival_pair;

#line 319 "bison_parser.h"
};
typedef union HSQL_STYPE HSQL_STYPE;
#define HSQL_STYPE_IS_TRIVIAL 1
#define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if !defined HSQL_LTYPE && !defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE {
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
#define HSQL_LTYPE_IS_DECLARED 1
#define HSQL_LTYPE_IS_TRIVIAL 1
#endif

int hsql_parse(hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
