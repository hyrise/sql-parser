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
#line 39 "bison_parser.y"

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

#line 80 "bison_parser.h"

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
    SQL_ENCODING = 279,            /* ENCODING  */
    SQL_INTEGER = 280,             /* INTEGER  */
    SQL_NATURAL = 281,             /* NATURAL  */
    SQL_PREPARE = 282,             /* PREPARE  */
    SQL_PRIMARY = 283,             /* PRIMARY  */
    SQL_SCHEMAS = 284,             /* SCHEMAS  */
    SQL_CHARACTER_VARYING = 285,   /* CHARACTER_VARYING  */
    SQL_REAL = 286,                /* REAL  */
    SQL_DECIMAL = 287,             /* DECIMAL  */
    SQL_SMALLINT = 288,            /* SMALLINT  */
    SQL_BIGINT = 289,              /* BIGINT  */
    SQL_SPATIAL = 290,             /* SPATIAL  */
    SQL_VARCHAR = 291,             /* VARCHAR  */
    SQL_VIRTUAL = 292,             /* VIRTUAL  */
    SQL_DESCRIBE = 293,            /* DESCRIBE  */
    SQL_BEFORE = 294,              /* BEFORE  */
    SQL_COLUMN = 295,              /* COLUMN  */
    SQL_CREATE = 296,              /* CREATE  */
    SQL_DELETE = 297,              /* DELETE  */
    SQL_DIRECT = 298,              /* DIRECT  */
    SQL_DOUBLE = 299,              /* DOUBLE  */
    SQL_ESCAPE = 300,              /* ESCAPE  */
    SQL_EXCEPT = 301,              /* EXCEPT  */
    SQL_EXISTS = 302,              /* EXISTS  */
    SQL_EXTRACT = 303,             /* EXTRACT  */
    SQL_CAST = 304,                /* CAST  */
    SQL_FORMAT = 305,              /* FORMAT  */
    SQL_GLOBAL = 306,              /* GLOBAL  */
    SQL_HAVING = 307,              /* HAVING  */
    SQL_IMPORT = 308,              /* IMPORT  */
    SQL_INSERT = 309,              /* INSERT  */
    SQL_ISNULL = 310,              /* ISNULL  */
    SQL_OFFSET = 311,              /* OFFSET  */
    SQL_RENAME = 312,              /* RENAME  */
    SQL_SCHEMA = 313,              /* SCHEMA  */
    SQL_SELECT = 314,              /* SELECT  */
    SQL_SORTED = 315,              /* SORTED  */
    SQL_TABLES = 316,              /* TABLES  */
    SQL_UNIQUE = 317,              /* UNIQUE  */
    SQL_UNLOAD = 318,              /* UNLOAD  */
    SQL_UPDATE = 319,              /* UPDATE  */
    SQL_VALUES = 320,              /* VALUES  */
    SQL_AFTER = 321,               /* AFTER  */
    SQL_ALTER = 322,               /* ALTER  */
    SQL_CROSS = 323,               /* CROSS  */
    SQL_DELTA = 324,               /* DELTA  */
    SQL_FLOAT = 325,               /* FLOAT  */
    SQL_GROUP = 326,               /* GROUP  */
    SQL_INDEX = 327,               /* INDEX  */
    SQL_INNER = 328,               /* INNER  */
    SQL_LIMIT = 329,               /* LIMIT  */
    SQL_LOCAL = 330,               /* LOCAL  */
    SQL_MERGE = 331,               /* MERGE  */
    SQL_MINUS = 332,               /* MINUS  */
    SQL_ORDER = 333,               /* ORDER  */
    SQL_OVER = 334,                /* OVER  */
    SQL_OUTER = 335,               /* OUTER  */
    SQL_RIGHT = 336,               /* RIGHT  */
    SQL_TABLE = 337,               /* TABLE  */
    SQL_UNION = 338,               /* UNION  */
    SQL_USING = 339,               /* USING  */
    SQL_WHERE = 340,               /* WHERE  */
    SQL_CALL = 341,                /* CALL  */
    SQL_CASE = 342,                /* CASE  */
    SQL_CHAR = 343,                /* CHAR  */
    SQL_COPY = 344,                /* COPY  */
    SQL_DATE = 345,                /* DATE  */
    SQL_DATETIME = 346,            /* DATETIME  */
    SQL_DESC = 347,                /* DESC  */
    SQL_DROP = 348,                /* DROP  */
    SQL_ELSE = 349,                /* ELSE  */
    SQL_FILE = 350,                /* FILE  */
    SQL_FROM = 351,                /* FROM  */
    SQL_FULL = 352,                /* FULL  */
    SQL_HASH = 353,                /* HASH  */
    SQL_HINT = 354,                /* HINT  */
    SQL_INTO = 355,                /* INTO  */
    SQL_JOIN = 356,                /* JOIN  */
    SQL_LEFT = 357,                /* LEFT  */
    SQL_LIKE = 358,                /* LIKE  */
    SQL_LOAD = 359,                /* LOAD  */
    SQL_LONG = 360,                /* LONG  */
    SQL_NULL = 361,                /* NULL  */
    SQL_PARTITION = 362,           /* PARTITION  */
    SQL_PLAN = 363,                /* PLAN  */
    SQL_SHOW = 364,                /* SHOW  */
    SQL_TEXT = 365,                /* TEXT  */
    SQL_THEN = 366,                /* THEN  */
    SQL_TIME = 367,                /* TIME  */
    SQL_VIEW = 368,                /* VIEW  */
    SQL_WHEN = 369,                /* WHEN  */
    SQL_WITH = 370,                /* WITH  */
    SQL_ADD = 371,                 /* ADD  */
    SQL_ALL = 372,                 /* ALL  */
    SQL_AND = 373,                 /* AND  */
    SQL_ASC = 374,                 /* ASC  */
    SQL_END = 375,                 /* END  */
    SQL_FOR = 376,                 /* FOR  */
    SQL_INT = 377,                 /* INT  */
    SQL_KEY = 378,                 /* KEY  */
    SQL_NOT = 379,                 /* NOT  */
    SQL_OFF = 380,                 /* OFF  */
    SQL_SET = 381,                 /* SET  */
    SQL_TOP = 382,                 /* TOP  */
    SQL_AS = 383,                  /* AS  */
    SQL_BY = 384,                  /* BY  */
    SQL_IF = 385,                  /* IF  */
    SQL_IN = 386,                  /* IN  */
    SQL_IS = 387,                  /* IS  */
    SQL_OF = 388,                  /* OF  */
    SQL_ON = 389,                  /* ON  */
    SQL_OR = 390,                  /* OR  */
    SQL_TO = 391,                  /* TO  */
    SQL_NO = 392,                  /* NO  */
    SQL_ARRAY = 393,               /* ARRAY  */
    SQL_CONCAT = 394,              /* CONCAT  */
    SQL_ILIKE = 395,               /* ILIKE  */
    SQL_SECOND = 396,              /* SECOND  */
    SQL_MINUTE = 397,              /* MINUTE  */
    SQL_HOUR = 398,                /* HOUR  */
    SQL_DAY = 399,                 /* DAY  */
    SQL_MONTH = 400,               /* MONTH  */
    SQL_YEAR = 401,                /* YEAR  */
    SQL_SECONDS = 402,             /* SECONDS  */
    SQL_MINUTES = 403,             /* MINUTES  */
    SQL_HOURS = 404,               /* HOURS  */
    SQL_DAYS = 405,                /* DAYS  */
    SQL_MONTHS = 406,              /* MONTHS  */
    SQL_YEARS = 407,               /* YEARS  */
    SQL_INTERVAL = 408,            /* INTERVAL  */
    SQL_TRUE = 409,                /* TRUE  */
    SQL_FALSE = 410,               /* FALSE  */
    SQL_BOOLEAN = 411,             /* BOOLEAN  */
    SQL_TRANSACTION = 412,         /* TRANSACTION  */
    SQL_BEGIN = 413,               /* BEGIN  */
    SQL_COMMIT = 414,              /* COMMIT  */
    SQL_ROLLBACK = 415,            /* ROLLBACK  */
    SQL_NOWAIT = 416,              /* NOWAIT  */
    SQL_SKIP = 417,                /* SKIP  */
    SQL_LOCKED = 418,              /* LOCKED  */
    SQL_SHARE = 419,               /* SHARE  */
    SQL_RANGE = 420,               /* RANGE  */
    SQL_ROWS = 421,                /* ROWS  */
    SQL_GROUPS = 422,              /* GROUPS  */
    SQL_UNBOUNDED = 423,           /* UNBOUNDED  */
    SQL_FOLLOWING = 424,           /* FOLLOWING  */
    SQL_PRECEDING = 425,           /* PRECEDING  */
    SQL_CURRENT_ROW = 426,         /* CURRENT_ROW  */
    SQL_EQUALS = 427,              /* EQUALS  */
    SQL_NOTEQUALS = 428,           /* NOTEQUALS  */
    SQL_LESS = 429,                /* LESS  */
    SQL_GREATER = 430,             /* GREATER  */
    SQL_LESSEQ = 431,              /* LESSEQ  */
    SQL_GREATEREQ = 432,           /* GREATEREQ  */
    SQL_NOTNULL = 433,             /* NOTNULL  */
    SQL_UMINUS = 434               /* UMINUS  */
  };
  typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 97 "bison_parser.y"

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
  hsql::FrameBound* frame_bound;
  hsql::FrameDescription* frame_description;
  hsql::FrameType frame_type;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::LockingClause* locking_t;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WindowDescription* window_description;
  hsql::WithDescription* with_description_t;

  std::vector<char*>* str_vec;
  std::unordered_set<hsql::ConstraintType>* column_constraint_set;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;
  std::vector<hsql::LockingClause*>* locking_clause_vec;

  std::pair<int64_t, int64_t>* ival_pair;

  hsql::RowLockMode lock_mode_t;
  hsql::RowLockWaitPolicy lock_wait_policy_t;

  hsql::ImportExportOptions* import_export_option_t;

  // clang-format off

#line 348 "bison_parser.h"

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
