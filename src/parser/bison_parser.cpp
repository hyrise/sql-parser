/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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
#line 2 "bison_parser.y"

  // clang-format on
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
#include <sstream>
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 109 "bison_parser.cpp"

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

#include "bison_parser.h"
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
  YYSYMBOL_CHARACTER_VARYING = 29,         /* CHARACTER_VARYING  */
  YYSYMBOL_REAL = 30,                      /* REAL  */
  YYSYMBOL_DECIMAL = 31,                   /* DECIMAL  */
  YYSYMBOL_SMALLINT = 32,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 33,                    /* BIGINT  */
  YYSYMBOL_SPATIAL = 34,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 35,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 36,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 37,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 38,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 39,                    /* COLUMN  */
  YYSYMBOL_CREATE = 40,                    /* CREATE  */
  YYSYMBOL_DELETE = 41,                    /* DELETE  */
  YYSYMBOL_DIRECT = 42,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 43,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 44,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 45,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 46,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 47,                   /* EXTRACT  */
  YYSYMBOL_CAST = 48,                      /* CAST  */
  YYSYMBOL_FORMAT = 49,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 50,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 51,                    /* HAVING  */
  YYSYMBOL_IMPORT = 52,                    /* IMPORT  */
  YYSYMBOL_INSERT = 53,                    /* INSERT  */
  YYSYMBOL_ISNULL = 54,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 55,                    /* OFFSET  */
  YYSYMBOL_RENAME = 56,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 57,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 58,                    /* SELECT  */
  YYSYMBOL_SORTED = 59,                    /* SORTED  */
  YYSYMBOL_TABLES = 60,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 61,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 62,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 63,                    /* UPDATE  */
  YYSYMBOL_VALUES = 64,                    /* VALUES  */
  YYSYMBOL_AFTER = 65,                     /* AFTER  */
  YYSYMBOL_ALTER = 66,                     /* ALTER  */
  YYSYMBOL_CROSS = 67,                     /* CROSS  */
  YYSYMBOL_DELTA = 68,                     /* DELTA  */
  YYSYMBOL_FLOAT = 69,                     /* FLOAT  */
  YYSYMBOL_GROUP = 70,                     /* GROUP  */
  YYSYMBOL_GROUPS = 71,                    /* GROUPS  */
  YYSYMBOL_INDEX = 72,                     /* INDEX  */
  YYSYMBOL_INNER = 73,                     /* INNER  */
  YYSYMBOL_LIMIT = 74,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 75,                     /* LOCAL  */
  YYSYMBOL_MERGE = 76,                     /* MERGE  */
  YYSYMBOL_MINUS = 77,                     /* MINUS  */
  YYSYMBOL_ORDER = 78,                     /* ORDER  */
  YYSYMBOL_OVER = 79,                      /* OVER  */
  YYSYMBOL_RANGE = 80,                     /* RANGE  */
  YYSYMBOL_ROWS = 81,                      /* ROWS  */
  YYSYMBOL_OUTER = 82,                     /* OUTER  */
  YYSYMBOL_RIGHT = 83,                     /* RIGHT  */
  YYSYMBOL_TABLE = 84,                     /* TABLE  */
  YYSYMBOL_UNION = 85,                     /* UNION  */
  YYSYMBOL_USING = 86,                     /* USING  */
  YYSYMBOL_WHERE = 87,                     /* WHERE  */
  YYSYMBOL_CALL = 88,                      /* CALL  */
  YYSYMBOL_CASE = 89,                      /* CASE  */
  YYSYMBOL_CHAR = 90,                      /* CHAR  */
  YYSYMBOL_COPY = 91,                      /* COPY  */
  YYSYMBOL_DATE = 92,                      /* DATE  */
  YYSYMBOL_DATETIME = 93,                  /* DATETIME  */
  YYSYMBOL_DESC = 94,                      /* DESC  */
  YYSYMBOL_DROP = 95,                      /* DROP  */
  YYSYMBOL_ELSE = 96,                      /* ELSE  */
  YYSYMBOL_FILE = 97,                      /* FILE  */
  YYSYMBOL_FROM = 98,                      /* FROM  */
  YYSYMBOL_FULL = 99,                      /* FULL  */
  YYSYMBOL_HASH = 100,                     /* HASH  */
  YYSYMBOL_HINT = 101,                     /* HINT  */
  YYSYMBOL_INTO = 102,                     /* INTO  */
  YYSYMBOL_JOIN = 103,                     /* JOIN  */
  YYSYMBOL_LEFT = 104,                     /* LEFT  */
  YYSYMBOL_LIKE = 105,                     /* LIKE  */
  YYSYMBOL_LOAD = 106,                     /* LOAD  */
  YYSYMBOL_LONG = 107,                     /* LONG  */
  YYSYMBOL_NULL = 108,                     /* NULL  */
  YYSYMBOL_PARTITION = 109,                /* PARTITION  */
  YYSYMBOL_PLAN = 110,                     /* PLAN  */
  YYSYMBOL_SHOW = 111,                     /* SHOW  */
  YYSYMBOL_TEXT = 112,                     /* TEXT  */
  YYSYMBOL_THEN = 113,                     /* THEN  */
  YYSYMBOL_TIME = 114,                     /* TIME  */
  YYSYMBOL_VIEW = 115,                     /* VIEW  */
  YYSYMBOL_WHEN = 116,                     /* WHEN  */
  YYSYMBOL_WITH = 117,                     /* WITH  */
  YYSYMBOL_ADD = 118,                      /* ADD  */
  YYSYMBOL_ALL = 119,                      /* ALL  */
  YYSYMBOL_AND = 120,                      /* AND  */
  YYSYMBOL_ASC = 121,                      /* ASC  */
  YYSYMBOL_END = 122,                      /* END  */
  YYSYMBOL_FOR = 123,                      /* FOR  */
  YYSYMBOL_INT = 124,                      /* INT  */
  YYSYMBOL_KEY = 125,                      /* KEY  */
  YYSYMBOL_NOT = 126,                      /* NOT  */
  YYSYMBOL_OFF = 127,                      /* OFF  */
  YYSYMBOL_SET = 128,                      /* SET  */
  YYSYMBOL_TOP = 129,                      /* TOP  */
  YYSYMBOL_AS = 130,                       /* AS  */
  YYSYMBOL_BY = 131,                       /* BY  */
  YYSYMBOL_IF = 132,                       /* IF  */
  YYSYMBOL_IN = 133,                       /* IN  */
  YYSYMBOL_IS = 134,                       /* IS  */
  YYSYMBOL_OF = 135,                       /* OF  */
  YYSYMBOL_ON = 136,                       /* ON  */
  YYSYMBOL_OR = 137,                       /* OR  */
  YYSYMBOL_TO = 138,                       /* TO  */
  YYSYMBOL_NO = 139,                       /* NO  */
  YYSYMBOL_ARRAY = 140,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 141,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 142,                    /* ILIKE  */
  YYSYMBOL_SECOND = 143,                   /* SECOND  */
  YYSYMBOL_MINUTE = 144,                   /* MINUTE  */
  YYSYMBOL_HOUR = 145,                     /* HOUR  */
  YYSYMBOL_DAY = 146,                      /* DAY  */
  YYSYMBOL_MONTH = 147,                    /* MONTH  */
  YYSYMBOL_YEAR = 148,                     /* YEAR  */
  YYSYMBOL_SECONDS = 149,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 150,                  /* MINUTES  */
  YYSYMBOL_HOURS = 151,                    /* HOURS  */
  YYSYMBOL_DAYS = 152,                     /* DAYS  */
  YYSYMBOL_MONTHS = 153,                   /* MONTHS  */
  YYSYMBOL_YEARS = 154,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 155,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 156,                     /* TRUE  */
  YYSYMBOL_FALSE = 157,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 158,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 159,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 160,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 161,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 162,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 163,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 164,                     /* SKIP  */
  YYSYMBOL_LOCKED = 165,                   /* LOCKED  */
  YYSYMBOL_SHARE = 166,                    /* SHARE  */
  YYSYMBOL_167_ = 167,                     /* '='  */
  YYSYMBOL_EQUALS = 168,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 169,                /* NOTEQUALS  */
  YYSYMBOL_170_ = 170,                     /* '<'  */
  YYSYMBOL_171_ = 171,                     /* '>'  */
  YYSYMBOL_LESS = 172,                     /* LESS  */
  YYSYMBOL_GREATER = 173,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 174,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 175,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 176,                  /* NOTNULL  */
  YYSYMBOL_177_ = 177,                     /* '+'  */
  YYSYMBOL_178_ = 178,                     /* '-'  */
  YYSYMBOL_179_ = 179,                     /* '*'  */
  YYSYMBOL_180_ = 180,                     /* '/'  */
  YYSYMBOL_181_ = 181,                     /* '%'  */
  YYSYMBOL_182_ = 182,                     /* '^'  */
  YYSYMBOL_UMINUS = 183,                   /* UMINUS  */
  YYSYMBOL_184_ = 184,                     /* '['  */
  YYSYMBOL_185_ = 185,                     /* ']'  */
  YYSYMBOL_186_ = 186,                     /* '('  */
  YYSYMBOL_187_ = 187,                     /* ')'  */
  YYSYMBOL_188_ = 188,                     /* '.'  */
  YYSYMBOL_189_ = 189,                     /* ';'  */
  YYSYMBOL_190_ = 190,                     /* ','  */
  YYSYMBOL_191_ = 191,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 192,                 /* $accept  */
  YYSYMBOL_input = 193,                    /* input  */
  YYSYMBOL_statement_list = 194,           /* statement_list  */
  YYSYMBOL_statement = 195,                /* statement  */
  YYSYMBOL_preparable_statement = 196,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 197,                /* opt_hints  */
  YYSYMBOL_hint_list = 198,                /* hint_list  */
  YYSYMBOL_hint = 199,                     /* hint  */
  YYSYMBOL_transaction_statement = 200,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 201,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 202,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 203,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 204,        /* execute_statement  */
  YYSYMBOL_import_statement = 205,         /* import_statement  */
  YYSYMBOL_file_type = 206,                /* file_type  */
  YYSYMBOL_file_path = 207,                /* file_path  */
  YYSYMBOL_opt_file_type = 208,            /* opt_file_type  */
  YYSYMBOL_export_statement = 209,         /* export_statement  */
  YYSYMBOL_show_statement = 210,           /* show_statement  */
  YYSYMBOL_create_statement = 211,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 212,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 213,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 214,               /* table_elem  */
  YYSYMBOL_column_def = 215,               /* column_def  */
  YYSYMBOL_column_type = 216,              /* column_type  */
  YYSYMBOL_opt_time_precision = 217,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 218, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 219,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 220,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 221,        /* column_constraint  */
  YYSYMBOL_table_constraint = 222,         /* table_constraint  */
  YYSYMBOL_drop_statement = 223,           /* drop_statement  */
  YYSYMBOL_opt_exists = 224,               /* opt_exists  */
  YYSYMBOL_alter_statement = 225,          /* alter_statement  */
  YYSYMBOL_alter_action = 226,             /* alter_action  */
  YYSYMBOL_drop_action = 227,              /* drop_action  */
  YYSYMBOL_delete_statement = 228,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 229,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 230,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 231,          /* opt_column_list  */
  YYSYMBOL_update_statement = 232,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 233,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 234,            /* update_clause  */
  YYSYMBOL_select_statement = 235,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 236, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 237, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 238,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 239,          /* select_no_paren  */
  YYSYMBOL_set_operator = 240,             /* set_operator  */
  YYSYMBOL_set_type = 241,                 /* set_type  */
  YYSYMBOL_opt_all = 242,                  /* opt_all  */
  YYSYMBOL_select_clause = 243,            /* select_clause  */
  YYSYMBOL_opt_distinct = 244,             /* opt_distinct  */
  YYSYMBOL_select_list = 245,              /* select_list  */
  YYSYMBOL_opt_from_clause = 246,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 247,              /* from_clause  */
  YYSYMBOL_opt_where = 248,                /* opt_where  */
  YYSYMBOL_opt_group = 249,                /* opt_group  */
  YYSYMBOL_opt_having = 250,               /* opt_having  */
  YYSYMBOL_opt_order = 251,                /* opt_order  */
  YYSYMBOL_order_list = 252,               /* order_list  */
  YYSYMBOL_order_desc = 253,               /* order_desc  */
  YYSYMBOL_opt_order_type = 254,           /* opt_order_type  */
  YYSYMBOL_opt_top = 255,                  /* opt_top  */
  YYSYMBOL_opt_limit = 256,                /* opt_limit  */
  YYSYMBOL_expr_list = 257,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 258,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 259,             /* literal_list  */
  YYSYMBOL_expr_alias = 260,               /* expr_alias  */
  YYSYMBOL_expr = 261,                     /* expr  */
  YYSYMBOL_operand = 262,                  /* operand  */
  YYSYMBOL_scalar_expr = 263,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 264,               /* unary_expr  */
  YYSYMBOL_binary_expr = 265,              /* binary_expr  */
  YYSYMBOL_logic_expr = 266,               /* logic_expr  */
  YYSYMBOL_in_expr = 267,                  /* in_expr  */
  YYSYMBOL_window_expr = 268,              /* window_expr  */
  YYSYMBOL_opt_partition = 269,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 270,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 271,               /* frame_type  */
  YYSYMBOL_frame_bound = 272,              /* frame_bound  */
  YYSYMBOL_case_expr = 273,                /* case_expr  */
  YYSYMBOL_case_list = 274,                /* case_list  */
  YYSYMBOL_exists_expr = 275,              /* exists_expr  */
  YYSYMBOL_comp_expr = 276,                /* comp_expr  */
  YYSYMBOL_function_expr = 277,            /* function_expr  */
  YYSYMBOL_extract_expr = 278,             /* extract_expr  */
  YYSYMBOL_cast_expr = 279,                /* cast_expr  */
  YYSYMBOL_datetime_field = 280,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 281,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 282,           /* duration_field  */
  YYSYMBOL_array_expr = 283,               /* array_expr  */
  YYSYMBOL_array_index = 284,              /* array_index  */
  YYSYMBOL_between_expr = 285,             /* between_expr  */
  YYSYMBOL_column_name = 286,              /* column_name  */
  YYSYMBOL_literal = 287,                  /* literal  */
  YYSYMBOL_string_literal = 288,           /* string_literal  */
  YYSYMBOL_bool_literal = 289,             /* bool_literal  */
  YYSYMBOL_num_literal = 290,              /* num_literal  */
  YYSYMBOL_int_literal = 291,              /* int_literal  */
  YYSYMBOL_null_literal = 292,             /* null_literal  */
  YYSYMBOL_date_literal = 293,             /* date_literal  */
  YYSYMBOL_interval_literal = 294,         /* interval_literal  */
  YYSYMBOL_param_expr = 295,               /* param_expr  */
  YYSYMBOL_table_ref = 296,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 297,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 298, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 299,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 300,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 301,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 302,               /* table_name  */
  YYSYMBOL_opt_index_name = 303,           /* opt_index_name  */
  YYSYMBOL_table_alias = 304,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 305,          /* opt_table_alias  */
  YYSYMBOL_alias = 306,                    /* alias  */
  YYSYMBOL_opt_alias = 307,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 308,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 309,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 310,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 311,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 312,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 313,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 314,              /* with_clause  */
  YYSYMBOL_with_description_list = 315,    /* with_description_list  */
  YYSYMBOL_with_description = 316,         /* with_description  */
  YYSYMBOL_join_clause = 317,              /* join_clause  */
  YYSYMBOL_opt_join_type = 318,            /* opt_join_type  */
  YYSYMBOL_join_condition = 319,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 320,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 321           /* ident_commalist  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   898

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  192
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  332
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  601

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   429


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
       2,     2,     2,     2,     2,     2,     2,   181,     2,     2,
     186,   187,   179,   177,   190,   178,   188,   180,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   189,
     170,   167,   171,   191,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   184,     2,   185,   182,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   168,   169,   172,   173,   174,   175,   176,   183
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   319,   319,   338,   344,   351,   355,   359,   360,   361,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     378,   379,   381,   385,   390,   394,   404,   405,   406,   408,
     408,   414,   420,   422,   426,   437,   443,   451,   466,   471,
     472,   478,   484,   495,   496,   501,   512,   525,   537,   544,
     551,   560,   561,   563,   567,   572,   573,   575,   582,   583,
     584,   585,   586,   587,   588,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   604,   605,   607,   608,
     609,   611,   612,   614,   618,   623,   624,   625,   626,   628,
     629,   637,   643,   649,   655,   661,   662,   669,   675,   677,
     687,   694,   705,   712,   720,   721,   728,   735,   739,   744,
     754,   758,   762,   774,   774,   776,   777,   786,   787,   789,
     803,   815,   820,   824,   828,   833,   834,   836,   846,   847,
     849,   851,   852,   854,   856,   857,   859,   864,   866,   867,
     869,   870,   872,   876,   881,   883,   884,   885,   889,   890,
     892,   893,   894,   895,   896,   897,   902,   906,   911,   912,
     914,   918,   923,   931,   931,   931,   931,   931,   931,   933,
     934,   934,   934,   934,   934,   934,   934,   934,   935,   935,
     939,   939,   941,   942,   943,   944,   945,   947,   947,   948,
     949,   950,   951,   952,   953,   954,   955,   956,   958,   959,
     961,   962,   963,   964,   968,   970,   971,   973,   974,   975,
     977,   978,   979,   985,  1001,  1013,  1014,  1015,  1016,  1018,
    1019,  1021,  1022,  1024,  1025,  1026,  1027,  1028,  1029,  1030,
    1032,  1033,  1035,  1037,  1039,  1040,  1041,  1042,  1043,  1044,
    1046,  1047,  1048,  1049,  1050,  1051,  1053,  1053,  1055,  1057,
    1059,  1061,  1062,  1063,  1064,  1066,  1066,  1066,  1066,  1066,
    1066,  1066,  1068,  1070,  1071,  1073,  1074,  1076,  1078,  1080,
    1091,  1095,  1106,  1138,  1147,  1147,  1154,  1154,  1156,  1156,
    1163,  1167,  1172,  1180,  1186,  1190,  1195,  1196,  1198,  1198,
    1200,  1200,  1202,  1203,  1205,  1205,  1211,  1212,  1214,  1218,
    1223,  1229,  1236,  1237,  1238,  1239,  1241,  1242,  1243,  1249,
    1249,  1251,  1253,  1257,  1262,  1272,  1279,  1287,  1311,  1312,
    1313,  1314,  1315,  1316,  1317,  1318,  1319,  1320,  1322,  1328,
    1328,  1331,  1335
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
  "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "BIGINT",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS",
  "DELTA", "FLOAT", "GROUP", "GROUPS", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OVER", "RANGE", "ROWS", "OUTER", "RIGHT",
  "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "COPY",
  "DATE", "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL",
  "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL",
  "PARTITION", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN",
  "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT",
  "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR",
  "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS",
  "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE", "'='",
  "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_set", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "window_expr", "opt_partition", "opt_frame_clause",
  "frame_type", "frame_bound", "case_expr", "case_list", "exists_expr",
  "comp_expr", "function_expr", "extract_expr", "cast_expr",
  "datetime_field", "datetime_field_plural", "duration_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "interval_literal", "param_expr",
  "table_ref", "table_ref_atomic", "nonjoin_table_ref_atomic",
  "table_ref_commalist", "table_ref_name", "table_ref_name_no_alias",
  "table_name", "opt_index_name", "table_alias", "opt_table_alias",
  "alias", "opt_alias", "opt_locking_clause", "opt_locking_clause_list",
  "locking_clause", "row_lock_mode", "opt_row_lock_policy",
  "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-464)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-330)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     629,    35,    54,   101,   105,    54,   -16,   -52,    30,    57,
      54,    68,    11,   196,    23,   170,    25,    25,    25,   203,
      67,  -464,    93,  -464,    93,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,   -26,  -464,   230,
     104,  -464,   116,   222,  -464,   184,   184,   184,    54,   321,
      54,   200,  -464,   190,   -26,   208,   -32,   190,   190,   190,
      54,  -464,   217,   158,  -464,  -464,  -464,  -464,  -464,  -464,
     624,  -464,   251,  -464,  -464,   236,   138,  -464,   176,  -464,
     357,    71,   382,   261,   389,    54,    54,   311,  -464,   302,
     223,   408,   369,    54,   241,   242,   413,   413,   413,   428,
      54,    54,  -464,   247,   170,  -464,   248,   429,   425,  -464,
    -464,  -464,   -26,   320,   310,   -26,   -11,  -464,  -464,  -464,
    -464,   438,  -464,   439,  -464,  -464,  -464,   257,   255,  -464,
    -464,  -464,  -464,   386,  -464,  -464,  -464,  -464,  -464,  -464,
     400,  -464,   314,   -59,   223,   366,  -464,   413,   449,   249,
     284,   -49,  -464,  -464,   359,  -464,  -464,   339,  -464,   339,
     339,  -464,  -464,  -464,  -464,  -464,   454,  -464,  -464,   366,
     381,  -464,  -464,   138,  -464,  -464,   366,   381,   366,    85,
     338,  -464,   231,  -464,    71,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,    54,   463,   352,    76,   342,    34,   287,   290,   291,
     211,   416,   295,   420,  -464,   292,    58,   448,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,   373,  -464,   127,   294,  -464,
     366,   408,  -464,   442,  -464,  -464,   433,  -464,   311,  -464,
     299,   166,  -464,   388,   297,  -464,    50,   -11,   -26,   301,
    -464,   149,   -11,    58,   440,    18,     9,  -464,   338,  -464,
    -464,  -464,   318,   387,  -464,   669,   363,   324,   167,  -464,
    -464,  -464,   352,    15,    19,   453,   231,   366,   366,   169,
      60,   327,   420,   662,   366,    10,   328,    44,   366,   366,
     420,  -464,   330,   420,    53,   331,   147,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   429,    54,  -464,   504,    71,    58,  -464,   190,
     321,  -464,    71,  -464,   454,    21,   311,  -464,   366,  -464,
     511,  -464,  -464,  -464,  -464,   366,  -464,  -464,  -464,   338,
     366,   366,  -464,   353,   393,  -464,    83,  -464,   449,   413,
    -464,  -464,   334,  -464,   340,  -464,  -464,   355,  -464,  -464,
     361,  -464,  -464,  -464,  -464,   362,  -464,  -464,    31,   364,
     449,  -464,    76,  -464,  -464,   366,  -464,  -464,   356,   427,
     130,   -39,   113,   366,   366,  -464,   453,   444,  -136,  -464,
    -464,  -464,   431,   631,   445,   714,   420,   372,   292,  -464,
     447,   375,   714,   714,   714,   714,   319,   319,   319,   319,
      10,    10,    55,    55,    55,   -77,   376,  -464,  -464,   172,
     559,  -464,   174,  -464,   352,  -464,    62,  -464,   374,  -464,
      37,  -464,   493,  -464,  -464,  -464,  -464,    58,    58,  -464,
     502,   449,  -464,   401,  -464,   193,  -464,   561,   562,  -464,
     563,   564,   572,  -464,   455,  -464,  -464,   471,  -464,    31,
    -464,   449,   195,  -464,   204,  -464,   366,   669,   366,   366,
    -464,   -75,    99,   396,  -464,   420,   456,   381,   714,   292,
     397,   206,  -464,  -464,  -464,  -464,  -464,   398,   483,  -464,
    -464,  -464,   506,   509,   510,   490,    21,   593,  -464,  -464,
    -464,   466,  -464,  -464,  -112,  -464,  -464,   414,   214,   417,
     418,   421,  -464,  -464,  -464,   216,  -464,  -464,    51,   422,
      58,   168,  -464,   366,  -464,   662,   366,   194,   423,   218,
    -464,  -464,    37,    21,  -464,  -464,  -464,    21,   226,   426,
     366,  -464,  -464,  -464,   594,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,    58,   297,  -464,  -464,  -464,   434,   298,  -464,
    -464,  -464,  -464,   259,   449,   -21,   446,  -464,   600,   610,
     404,  -464,   451,   366,   240,   366,  -464,  -464,  -464,  -464,
     494,    20,    58,  -464,  -464,    58,   404,   432,   458,  -464,
    -464
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     310,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     330,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   309,     0,
     284,   101,    33,     0,    45,    52,    52,    52,     0,     0,
       0,     0,   283,    96,     0,     0,     0,    96,    96,    96,
       0,    43,     0,   311,   312,    29,    26,    28,    27,     1,
     310,     2,     0,     6,     5,   149,   110,   111,   141,    93,
       0,   159,     0,     0,   287,     0,     0,   135,    37,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     4,     0,     0,   129,   123,
     124,   122,     0,   126,     0,     0,   155,   285,   262,   265,
     267,     0,   268,     0,   263,   264,   273,     0,   158,   160,
     255,   256,   257,   266,   258,   259,   260,   261,    32,    31,
       0,   286,     0,     0,   105,     0,   100,     0,     0,     0,
       0,   135,   107,    95,     0,   118,   117,    40,    38,    40,
      40,    94,    91,    92,   314,   313,     0,   148,   128,     0,
     141,   114,   113,   115,   125,   121,     0,   141,     0,     0,
     297,   269,   272,    34,     0,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   270,
      51,     0,     0,   310,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,   253,     0,   134,   163,   171,   172,
     173,   165,   167,   168,   174,   166,   187,   175,   176,   177,
     178,   170,   164,   180,   181,     0,   331,     0,     0,   103,
       0,     0,   106,     0,    97,    98,     0,    42,   135,    41,
      24,     0,    22,   132,   130,   156,   295,   155,     0,   140,
     142,   147,   155,   151,   153,   150,     0,   119,   296,   298,
     271,   161,     0,     0,    48,     0,     0,     0,     0,    53,
      55,    56,   310,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   183,     0,   182,     0,     0,     0,     0,
       0,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,   109,   108,    96,
       0,    36,     0,    20,     0,     0,   135,   131,     0,   293,
       0,   294,   162,   112,   116,     0,   146,   145,   144,   297,
       0,     0,   302,     0,     0,   304,   308,   299,     0,     0,
      74,    68,     0,    70,    80,    71,    58,     0,    65,    66,
       0,    62,    63,    69,    72,    77,    67,    59,    82,     0,
       0,    47,     0,    50,   230,     0,   252,   254,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,     0,   179,
     169,   198,   199,     0,   206,   194,     0,     0,     0,   185,
       0,   197,   196,   223,   224,   225,   226,   227,   228,   229,
     189,   188,   191,   190,   192,   193,     0,    35,   332,     0,
       0,    39,     0,    23,   310,   133,   274,   276,     0,   278,
     291,   277,   137,   157,   292,   143,   120,   154,   152,   305,
       0,     0,   307,     0,   300,     0,    46,     0,     0,    64,
       0,     0,     0,    73,     0,    86,    87,     0,    57,    81,
      83,     0,     0,    54,     0,   221,     0,     0,     0,     0,
     215,     0,     0,     0,   248,     0,     0,   141,   195,     0,
       0,     0,   186,   249,   102,    99,    25,     0,     0,   326,
     318,   324,   322,   325,   320,     0,     0,     0,   290,   282,
     288,     0,   127,   303,   308,   306,    49,     0,     0,     0,
       0,     0,    85,    88,    84,     0,    90,   231,     0,     0,
     219,     0,   218,     0,   222,   250,     0,   209,     0,     0,
     202,   200,   291,     0,   321,   323,   319,     0,   275,   292,
       0,   301,    61,    79,     0,    75,    60,    76,    89,   232,
     233,   216,   220,   205,   212,   210,   211,     0,     0,   203,
     201,   279,   315,   327,     0,   139,     0,   204,     0,     0,
       0,   207,     0,     0,     0,     0,   136,    78,   214,   213,
       0,     0,   328,   316,   289,   138,     0,   251,     0,   208,
     317
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -464,  -464,  -464,   565,  -464,   614,  -464,   300,  -464,   227,
    -464,  -464,  -464,  -464,   312,   -78,   123,  -464,  -464,  -464,
     289,  -464,   258,  -464,   164,  -464,  -464,  -464,  -464,   178,
    -464,  -464,   -51,  -464,  -464,  -464,  -464,  -464,  -464,   499,
    -464,  -464,   407,  -200,   -90,  -464,    43,   -53,   -37,  -464,
    -464,   -86,   370,  -464,  -464,  -464,  -123,  -464,  -464,  -166,
    -464,   304,  -464,  -464,    87,  -259,  -464,   -14,   316,  -145,
    -198,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -286,  -464,   367,  -464,  -464,  -464,  -464,  -464,  -146,  -464,
    -464,  -464,  -464,  -464,    61,   -60,   -80,  -464,  -464,   -98,
    -464,  -464,  -464,  -464,  -464,  -463,   114,  -464,  -464,  -464,
       0,  -464,  -464,   117,   402,  -464,   313,  -464,   392,  -464,
     153,  -464,  -464,  -464,   567,  -464,  -464,  -464,  -464,  -321
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   251,   252,    23,    66,
      24,   139,    25,    26,    89,   157,   247,    27,    28,    29,
      84,   278,   279,   280,   378,   463,   459,   468,   469,   470,
     281,    30,    93,    31,   244,   245,    32,    33,    34,   149,
      35,   151,   152,    36,   170,   171,   172,    77,   112,   113,
     175,    78,   169,   253,   336,   337,   146,   512,   586,   116,
     259,   260,   348,   108,   180,   254,   127,   128,   255,   256,
     217,   218,   219,   220,   221,   222,   223,   487,   567,   568,
     581,   224,   290,   225,   226,   227,   228,   229,   197,   198,
     199,   230,   231,   232,   233,   234,   130,   131,   132,   133,
     134,   135,   136,   137,   435,   436,   437,   438,   439,    51,
     440,   142,   508,   509,   510,   342,   267,   268,   269,   356,
     454,    37,    38,    63,    64,   441,   505,   593,    71,   237
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     216,    95,    41,   274,   257,    44,    99,   100,   101,   167,
      52,   262,    56,   293,    40,   295,   158,   158,   158,   159,
     160,   129,   386,   597,    40,   177,   173,   168,   242,   173,
     585,   261,    75,   263,   265,   398,   270,   455,   145,   202,
     339,   115,    60,   548,   178,   298,    48,   532,    87,   484,
      90,   452,   453,   339,   338,    55,    45,    40,   464,   472,
     102,    39,   299,   179,   307,   289,    97,   158,    46,   235,
     297,   203,   352,   351,   478,   118,   119,   120,   325,   275,
      76,   298,   383,    61,   573,   143,   144,   498,   206,   118,
     119,   120,   465,   154,   293,   327,   239,    94,   299,    47,
     162,   163,   403,   276,    42,   405,    98,   322,    43,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   271,   331,   474,   204,    49,   499,
     514,   207,   208,   209,   353,   500,   258,   277,   298,   466,
     389,   241,   390,   391,   501,   502,   164,   109,   354,   491,
     525,   307,    53,   401,   402,   299,   393,   467,   406,    50,
      54,   503,   296,   121,   298,  -327,   504,   507,   344,   338,
     298,   298,   173,    62,   210,   355,   394,   121,   298,   122,
     340,   299,   395,   110,    65,   109,   407,   299,   299,   318,
     319,   320,   321,   122,   322,   299,   307,    54,   387,   214,
     261,   272,   384,    69,   264,   447,   448,   434,   488,   479,
      72,   211,   533,   442,   206,   118,   119,   120,   451,   298,
     283,   110,   284,   111,   426,   212,   123,   124,   125,   394,
     539,   400,   388,    79,   497,   480,   299,   321,   559,   322,
     123,   124,   125,   346,    67,    68,   452,   453,   481,   482,
     298,   498,  -280,   584,   114,   409,    70,   207,   208,   209,
     477,   111,   126,   213,   214,   564,   129,   299,    57,   298,
     347,   215,   129,   410,   565,   566,   126,   563,   430,   158,
      58,   456,   248,   249,   498,   288,   299,   535,   298,   298,
     561,   575,    80,   499,   590,   206,   118,   119,   120,   500,
     210,   578,    81,   121,   579,   299,   299,    75,   501,   502,
     599,    59,   429,   238,   324,   580,    83,   325,   432,   122,
      82,   537,    92,   427,    88,   503,   499,   288,    91,  -327,
     504,   528,   500,   530,   531,    85,    86,   211,   207,   208,
     209,   501,   502,   483,   343,   582,    96,   103,   104,   349,
      75,   212,   106,   333,   381,   490,   334,   382,   503,   494,
     117,   496,   184,   504,   184,   107,   123,   124,   125,   206,
     118,   119,   120,   301,   185,   186,   187,   188,   189,   190,
     516,   210,   526,   325,   121,   325,   138,   140,   562,   213,
     214,   527,   141,   541,   338,   583,   338,   215,   145,   147,
     122,   553,   126,   558,   554,   570,   325,   578,   338,   148,
     579,   150,   207,   208,   209,   153,  -281,   118,   211,   206,
     118,   119,   120,   206,   118,   119,   120,   594,   155,   156,
     325,   161,   212,    54,   166,   120,   538,   168,   592,   174,
     595,   176,   181,   182,   183,   184,   200,   123,   124,   125,
     201,   240,   236,   306,   243,   210,   246,   250,   121,   114,
     307,   266,   291,   208,   209,   300,   273,   208,   209,    15,
     213,   214,   282,   285,   122,   323,   286,   287,   215,   294,
     326,   329,   330,   126,   359,   332,   335,   338,   379,  -330,
    -330,   345,   211,  -330,  -330,   350,   316,   317,   318,   319,
     320,   321,   301,   322,   358,   210,   212,   428,   121,   210,
     380,    75,   121,   396,   444,   399,   404,   408,   450,   449,
     457,   123,   124,   125,   122,   476,   458,   302,   122,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   460,   292,   475,   213,   214,   292,   461,   462,   406,
     471,   298,   215,   303,   486,   492,   212,   126,   489,   322,
     212,   493,   495,   511,   506,   513,   515,   517,   518,   519,
     520,   123,   124,   125,   304,   123,   124,   125,   521,   523,
     522,   305,   306,   534,   540,   542,   543,   536,   544,   307,
     308,   545,   546,   547,   213,   214,   549,   550,   213,   214,
     576,   552,   215,   588,   555,   556,   215,   126,   557,   560,
     569,   126,   574,   589,   596,   309,   310,   311,   312,   313,
     284,   577,   314,   315,  -329,   316,   317,   318,   319,   320,
     321,     1,   322,   587,   433,   105,     1,   591,    74,     2,
     473,   529,   431,   205,     2,   600,     3,   524,   328,   445,
       4,     3,   598,   385,   443,     4,   392,   572,   341,   571,
     357,     5,   446,     0,     6,     7,     5,   551,     0,     6,
       7,   165,     0,     0,     0,     0,     8,     9,     0,     0,
     360,     8,     9,     0,     0,   301,     0,    10,     0,     0,
      11,     0,    10,   361,     0,    11,     0,     0,   362,   363,
     364,   365,   366,     0,   367,     0,     0,     0,     0,     0,
       0,     0,   368,     0,     0,    12,   301,     0,     0,    13,
      12,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,   303,     0,   369,     0,
      14,    15,     0,     0,     0,     0,    15,     0,     0,     0,
       0,   485,     0,     0,     0,     0,     0,   397,     0,   370,
       0,   371,   372,     0,     0,   306,     0,   303,   301,     0,
       0,     0,   307,   308,     0,     0,   373,     0,     0,     0,
       0,   374,     0,   375,    16,    17,    18,     0,   397,    16,
      17,    18,     0,   376,     0,     0,   306,     0,   309,   310,
     311,   312,   313,   307,   308,   314,   315,     0,   316,   317,
     318,   319,   320,   321,     0,   322,     0,     0,     0,  -330,
       0,     0,     0,     0,     0,     0,     0,   377,     0,   309,
     310,   311,   312,   313,     0,     0,   314,   315,     0,   316,
     317,   318,   319,   320,   321,     0,   322,     0,   306,     0,
       0,     0,     0,     0,     0,   307,  -330,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -330,  -330,  -330,   312,   313,     0,     0,   314,   315,
       0,   316,   317,   318,   319,   320,   321,     0,   322
};

static const yytype_int16 yycheck[] =
{
     145,    54,     2,   203,   170,     5,    57,    58,    59,   107,
      10,   177,    12,   211,     3,   213,    96,    97,    98,    97,
      98,    81,     3,     3,     3,   115,   112,    12,   151,   115,
      51,   176,    58,   178,   179,   294,   182,   358,    87,    98,
       3,    78,    19,   506,    55,   120,    98,   122,    48,   185,
      50,   163,   164,     3,   190,    12,    72,     3,    27,   380,
      60,    26,   137,    74,   141,   210,    98,   147,    84,   147,
     215,   130,    63,    55,   113,     4,     5,     6,   190,     3,
      37,   120,   282,    60,   547,    85,    86,    25,     3,     4,
       5,     6,    61,    93,   292,   240,   149,    54,   137,   115,
     100,   101,   300,    27,     3,   303,   138,   184,     3,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   184,   248,   385,   186,    98,    67,
     451,    46,    47,    48,   125,    73,   173,    61,   120,   108,
     286,   190,   287,   288,    82,    83,   103,     9,   139,   408,
     471,   141,    84,   298,   299,   137,    96,   126,   105,   102,
     186,    99,   215,    92,   120,   103,   104,   130,   258,   190,
     120,   120,   258,     3,    89,   166,   116,    92,   120,   108,
     130,   137,   122,    45,   159,     9,   133,   137,   137,   179,
     180,   181,   182,   108,   184,   137,   141,   186,   179,   179,
     345,   201,   187,     0,   119,   350,   351,   186,   406,    96,
     117,   126,   113,   336,     3,     4,     5,     6,   135,   120,
     186,    45,   188,    85,   322,   140,   155,   156,   157,   116,
     489,   187,   285,     3,   434,   122,   137,   182,   187,   184,
     155,   156,   157,    94,    17,    18,   163,   164,   393,   394,
     120,    25,   190,   574,    78,   108,   189,    46,    47,    48,
     130,    85,   191,   178,   179,    71,   326,   137,    72,   120,
     121,   186,   332,   126,    80,    81,   191,   536,   329,   359,
      84,   359,   159,   160,    25,   116,   137,   485,   120,   120,
     122,   550,   188,    67,   580,     3,     4,     5,     6,    73,
      89,     3,   186,    92,     6,   137,   137,    58,    82,    83,
     596,   115,   326,    64,   187,    17,   132,   190,   332,   108,
      98,   487,   132,   323,     3,    99,    67,   116,   128,   103,
     104,   476,    73,   478,   479,    46,    47,   126,    46,    47,
      48,    82,    83,   396,   257,    86,   138,   130,   190,   262,
      58,   140,   101,   187,   187,   408,   190,   190,    99,   187,
       3,   187,   190,   104,   190,   129,   155,   156,   157,     3,
       4,     5,     6,    54,   143,   144,   145,   146,   147,   148,
     187,    89,   187,   190,    92,   190,     4,   126,   533,   178,
     179,   187,     3,   187,   190,   136,   190,   186,    87,    97,
     108,   187,   191,   187,   190,   187,   190,     3,   190,   186,
       6,     3,    46,    47,    48,    46,   190,     4,   126,     3,
       4,     5,     6,     3,     4,     5,     6,   187,   187,   187,
     190,     3,   140,   186,   186,     6,   489,    12,   583,   119,
     585,   131,     4,     4,   187,   190,    46,   155,   156,   157,
     136,   167,     3,   134,    95,    89,   117,     3,    92,    78,
     141,   123,    46,    47,    48,    17,     3,    47,    48,   117,
     178,   179,   130,   186,   108,   102,   186,   186,   186,   184,
     186,    39,    49,   191,    97,   186,    98,   190,   125,   170,
     171,   190,   126,   174,   175,    55,   177,   178,   179,   180,
     181,   182,    54,   184,   186,    89,   140,     3,    92,    89,
     186,    58,    92,   186,     3,   187,   186,   186,   125,   166,
     186,   155,   156,   157,   108,    98,   186,    79,   108,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   186,   126,   187,   178,   179,   126,   186,   186,   105,
     186,   120,   186,   105,   109,   108,   140,   191,   186,   184,
     140,   185,     3,    70,   190,    63,   165,     6,     6,     6,
       6,   155,   156,   157,   126,   155,   156,   157,     6,   108,
     125,   133,   134,   187,   187,   187,   103,   131,    82,   141,
     142,    82,    82,   103,   178,   179,     3,   131,   178,   179,
       6,   187,   186,     3,   187,   187,   186,   191,   187,   187,
     187,   191,   186,     3,   120,   167,   168,   169,   170,   171,
     188,   187,   174,   175,     0,   177,   178,   179,   180,   181,
     182,     7,   184,   187,   334,    70,     7,   186,    24,    15,
     382,   477,   330,   144,    15,   187,    22,   469,   241,   345,
      26,    22,   591,   283,   338,    26,   289,   543,   256,   542,
     268,    37,   349,    -1,    40,    41,    37,   514,    -1,    40,
      41,   104,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      11,    52,    53,    -1,    -1,    54,    -1,    63,    -1,    -1,
      66,    -1,    63,    24,    -1,    66,    -1,    -1,    29,    30,
      31,    32,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    91,    54,    -1,    -1,    95,
      91,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   105,    -1,    69,    -1,
     111,   117,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,   126,    -1,    90,
      -1,    92,    93,    -1,    -1,   134,    -1,   105,    54,    -1,
      -1,    -1,   141,   142,    -1,    -1,   107,    -1,    -1,    -1,
      -1,   112,    -1,   114,   160,   161,   162,    -1,   126,   160,
     161,   162,    -1,   124,    -1,    -1,   134,    -1,   167,   168,
     169,   170,   171,   141,   142,   174,   175,    -1,   177,   178,
     179,   180,   181,   182,    -1,   184,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   167,
     168,   169,   170,   171,    -1,    -1,   174,   175,    -1,   177,
     178,   179,   180,   181,   182,    -1,   184,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,   168,   169,   170,   171,    -1,    -1,   174,   175,
      -1,   177,   178,   179,   180,   181,   182,    -1,   184
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    37,    40,    41,    52,    53,
      63,    66,    91,    95,   111,   117,   160,   161,   162,   193,
     194,   195,   196,   200,   202,   204,   205,   209,   210,   211,
     223,   225,   228,   229,   230,   232,   235,   313,   314,    26,
       3,   302,     3,     3,   302,    72,    84,   115,    98,    98,
     102,   301,   302,    84,   186,   238,   302,    72,    84,   115,
      19,    60,     3,   315,   316,   159,   201,   201,   201,     0,
     189,   320,   117,   197,   197,    58,   238,   239,   243,     3,
     188,   186,    98,   132,   212,   212,   212,   302,     3,   206,
     302,   128,   132,   224,   238,   239,   138,    98,   138,   224,
     224,   224,   302,   130,   190,   195,   101,   129,   255,     9,
      45,    85,   240,   241,    78,   240,   251,     3,     4,     5,
       6,    92,   108,   155,   156,   157,   191,   258,   259,   287,
     288,   289,   290,   291,   292,   293,   294,   295,     4,   203,
     126,     3,   303,   302,   302,    87,   248,    97,   186,   231,
       3,   233,   234,    46,   302,   187,   187,   207,   288,   207,
     207,     3,   302,   302,   238,   316,   186,   291,    12,   244,
     236,   237,   238,   243,   119,   242,   131,   236,    55,    74,
     256,     4,     4,   187,   190,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   280,   281,   282,
      46,   136,    98,   130,   186,   231,     3,    46,    47,    48,
      89,   126,   140,   178,   179,   186,   261,   262,   263,   264,
     265,   266,   267,   268,   273,   275,   276,   277,   278,   279,
     283,   284,   285,   286,   287,   207,     3,   321,    64,   239,
     167,   190,   248,    95,   226,   227,   117,   208,   208,   208,
       3,   198,   199,   245,   257,   260,   261,   251,   240,   252,
     253,   261,   251,   261,   119,   261,   123,   308,   309,   310,
     280,   287,   302,     3,   235,     3,    27,    61,   213,   214,
     215,   222,   130,   186,   188,   186,   186,   186,   116,   261,
     274,    46,   126,   262,   184,   262,   239,   261,   120,   137,
      17,    54,    79,   105,   126,   133,   134,   141,   142,   167,
     168,   169,   170,   171,   174,   175,   177,   178,   179,   180,
     181,   182,   184,   102,   187,   190,   186,   261,   234,    39,
      49,   248,   186,   187,   190,    98,   246,   247,   190,     3,
     130,   306,   307,   256,   236,   190,    94,   121,   254,   256,
      55,    55,    63,   125,   139,   166,   311,   310,   186,    97,
      11,    24,    29,    30,    31,    32,    33,    35,    43,    69,
      90,    92,    93,   107,   112,   114,   124,   158,   216,   125,
     186,   187,   190,   235,   187,   244,     3,   179,   239,   280,
     261,   261,   274,    96,   116,   122,   186,   126,   257,   187,
     187,   261,   261,   262,   186,   262,   105,   133,   186,   108,
     126,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   291,   302,     3,   259,
     224,   206,   259,   199,   186,   296,   297,   298,   299,   300,
     302,   317,   248,   260,     3,   253,   308,   261,   261,   166,
     125,   135,   163,   164,   312,   321,   207,   186,   186,   218,
     186,   186,   186,   217,    27,    61,   108,   126,   219,   220,
     221,   186,   321,   214,   257,   187,    98,   130,   113,    96,
     122,   261,   261,   239,   185,   120,   109,   269,   262,   186,
     239,   257,   108,   185,   187,     3,   187,   235,    25,    67,
      73,    82,    83,    99,   104,   318,   190,   130,   304,   305,
     306,    70,   249,    63,   321,   165,   187,     6,     6,     6,
       6,     6,   125,   108,   221,   321,   187,   187,   261,   216,
     261,   261,   122,   113,   187,   262,   131,   251,   239,   257,
     187,   187,   187,   103,    82,    82,    82,   103,   297,     3,
     131,   312,   187,   187,   190,   187,   187,   187,   187,   187,
     187,   122,   261,   257,    71,    80,    81,   270,   271,   187,
     187,   305,   298,   297,   186,   257,     6,   187,     3,     6,
      17,   272,    86,   136,   321,    51,   250,   187,     3,     3,
     272,   186,   261,   319,   187,   261,   120,     3,   286,   272,
     187
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   192,   193,   194,   194,   195,   195,   195,   195,   195,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     197,   197,   198,   198,   199,   199,   200,   200,   200,   201,
     201,   202,   203,   204,   204,   205,   205,   206,   207,   208,
     208,   209,   209,   210,   210,   210,   211,   211,   211,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   217,   217,   218,   218,
     218,   219,   219,   220,   220,   221,   221,   221,   221,   222,
     222,   223,   223,   223,   223,   224,   224,   225,   226,   227,
     228,   229,   230,   230,   231,   231,   232,   233,   233,   234,
     235,   235,   235,   236,   236,   237,   237,   238,   238,   239,
     239,   240,   241,   241,   241,   242,   242,   243,   244,   244,
     245,   246,   246,   247,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   254,   254,   254,   255,   255,
     256,   256,   256,   256,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   261,   261,   261,   261,   261,   261,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     263,   263,   264,   264,   264,   264,   264,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   266,   266,
     267,   267,   267,   267,   268,   269,   269,   270,   270,   270,
     271,   271,   271,   272,   272,   273,   273,   273,   273,   274,
     274,   275,   275,   276,   276,   276,   276,   276,   276,   276,
     277,   277,   278,   279,   280,   280,   280,   280,   280,   280,
     281,   281,   281,   281,   281,   281,   282,   282,   283,   284,
     285,   286,   286,   286,   286,   287,   287,   287,   287,   287,
     287,   287,   288,   289,   289,   290,   290,   291,   292,   293,
     294,   294,   294,   295,   296,   296,   297,   297,   298,   298,
     299,   299,   300,   301,   302,   302,   303,   303,   304,   304,
     305,   305,   306,   306,   307,   307,   308,   308,   309,   309,
     310,   310,   311,   311,   311,   311,   312,   312,   312,   313,
     313,   314,   315,   315,   316,   317,   317,   317,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   319,   320,
     320,   321,   321
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     6,     1,     1,     3,
       0,     5,     5,     2,     3,     2,     8,     7,     6,     9,
       7,     3,     0,     1,     3,     1,     1,     3,     1,     1,
       4,     4,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     3,     0,     5,     3,
       0,     1,     0,     1,     2,     2,     1,     1,     2,     5,
       4,     4,     4,     3,     4,     2,     0,     5,     1,     4,
       4,     2,     8,     5,     3,     0,     5,     1,     3,     3,
       2,     2,     6,     1,     1,     1,     3,     3,     3,     4,
       6,     2,     1,     1,     1,     1,     0,     7,     1,     0,
       1,     1,     0,     2,     2,     0,     4,     0,     2,     0,
       3,     0,     1,     3,     2,     1,     1,     0,     2,     0,
       2,     2,     4,     2,     4,     0,     1,     3,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       5,     6,     5,     6,     7,     3,     0,     2,     5,     0,
       1,     1,     1,     2,     2,     4,     6,     3,     5,     4,
       5,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     6,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       5,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     2,     1,     1,     3,     1,     1,     1,     4,
       1,     3,     2,     1,     1,     3,     1,     0,     1,     5,
       1,     0,     2,     1,     1,     0,     1,     0,     1,     2,
       3,     5,     1,     3,     1,     2,     2,     1,     0,     1,
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
#define YYNOMEM         goto yyexhaustedlab


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


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
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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

  YYLOCATION_PRINT (yyo, yylocationp);
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
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2064 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2070 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 167 "bison_parser.y"
                { }
#line 2076 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 167 "bison_parser.y"
                { }
#line 2082 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).stmt_vec)) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2095 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2101 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2107 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2120 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2133 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2139 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2145 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2151 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2157 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2163 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2169 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 167 "bison_parser.y"
                { }
#line 2175 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2181 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 167 "bison_parser.y"
                { }
#line 2187 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2193 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2199 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2205 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 167 "bison_parser.y"
                { }
#line 2211 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).table_element_vec)) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2224 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2230 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2236 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 167 "bison_parser.y"
                { }
#line 2242 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 167 "bison_parser.y"
                { }
#line 2248 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2254 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 167 "bison_parser.y"
                { }
#line 2260 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 167 "bison_parser.y"
                { }
#line 2266 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 167 "bison_parser.y"
                { }
#line 2272 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2278 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2284 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 167 "bison_parser.y"
                { }
#line 2290 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2296 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2302 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2308 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2314 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2320 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2326 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 172 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2339 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2345 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).update_vec)) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2358 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2364 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2370 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2376 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2382 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2388 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2394 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2400 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2406 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 167 "bison_parser.y"
                { }
#line 2412 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2418 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 167 "bison_parser.y"
                { }
#line 2424 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2437 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2443 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2449 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2455 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2461 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2467 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2480 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2493 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2499 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 167 "bison_parser.y"
                { }
#line 2505 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2511 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2517 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2530 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2556 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2562 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2568 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2574 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2580 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2586 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2592 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2598 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2604 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_expr: /* window_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2610 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2623 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).frame_description)); }
#line 2629 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 167 "bison_parser.y"
                { }
#line 2635 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2641 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2647 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2653 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2659 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2665 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2671 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2677 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2683 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 167 "bison_parser.y"
                { }
#line 2689 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 167 "bison_parser.y"
                { }
#line 2695 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 167 "bison_parser.y"
                { }
#line 2701 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2707 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2713 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2719 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2725 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2731 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2737 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2743 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2749 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2755 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2761 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2767 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2773 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2779 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2785 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2791 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2797 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 181 "bison_parser.y"
                {
      if (((*yyvaluep).table_vec)) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2810 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2816 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2822 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 168 "bison_parser.y"
                {
      free( (((*yyvaluep).table_name).name) );
      free( (((*yyvaluep).table_name).schema) );
    }
#line 2831 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2837 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2843 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2849 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2855 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2861 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2867 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2873 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2879 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 167 "bison_parser.y"
                { }
#line 2885 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 167 "bison_parser.y"
                { }
#line 2891 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2897 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2903 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2909 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2915 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2921 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 167 "bison_parser.y"
                { }
#line 2927 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2933 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 172 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2946 "bison_parser.cpp"
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
/* Lookahead token kind.  */
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
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
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

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 76 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3054 "bison_parser.cpp"

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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* input: statement_list opt_semicolon  */
#line 319 "bison_parser.y"
                                     {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3283 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 338 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3294 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 344 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3305 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 351 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3314 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 355 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3323 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 359 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3329 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 360 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3335 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 361 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3341 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 363 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3347 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 364 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3353 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 365 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3359 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 366 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3365 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 367 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3371 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 368 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3377 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 369 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3383 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 370 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3389 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 371 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3395 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 372 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3401 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 378 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3407 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 379 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3413 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 381 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3422 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 385 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3431 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 390 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3440 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 394 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3450 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 404 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3456 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 405 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3462 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 406 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3468 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 414 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3478 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 422 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3487 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 426 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3497 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 437 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3508 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type opt_where  */
#line 443 "bison_parser.y"
                                                         {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
}
#line 3520 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 451 "bison_parser.y"
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
#line 3539 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 466 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3548 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 471 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3554 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 472 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3560 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 478 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3571 "bison_parser.cpp"
    break;

  case 42: /* export_statement: COPY select_with_paren TO file_path opt_file_type  */
#line 484 "bison_parser.y"
                                                    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
}
#line 3581 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW TABLES  */
#line 495 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3587 "bison_parser.cpp"
    break;

  case 44: /* show_statement: SHOW COLUMNS table_name  */
#line 496 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3597 "bison_parser.cpp"
    break;

  case 45: /* show_statement: DESCRIBE table_name  */
#line 501 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3607 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 512 "bison_parser.y"
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
#line 3625 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 525 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
  if (result->errorMsg()) {
    delete (yyval.create_stmt);
    YYERROR;
  }
}
#line 3642 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 537 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3654 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 544 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3666 "bison_parser.cpp"
    break;

  case 50: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 551 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3679 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: IF NOT EXISTS  */
#line 560 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3685 "bison_parser.cpp"
    break;

  case 52: /* opt_not_exists: %empty  */
#line 561 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3691 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem  */
#line 563 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3700 "bison_parser.cpp"
    break;

  case 54: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 567 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3709 "bison_parser.cpp"
    break;

  case 55: /* table_elem: column_def  */
#line 572 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3715 "bison_parser.cpp"
    break;

  case 56: /* table_elem: table_constraint  */
#line 573 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3721 "bison_parser.cpp"
    break;

  case 57: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 575 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3732 "bison_parser.cpp"
    break;

  case 58: /* column_type: BIGINT  */
#line 582 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3738 "bison_parser.cpp"
    break;

  case 59: /* column_type: BOOLEAN  */
#line 583 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3744 "bison_parser.cpp"
    break;

  case 60: /* column_type: CHAR '(' INTVAL ')'  */
#line 584 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3750 "bison_parser.cpp"
    break;

  case 61: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 585 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3756 "bison_parser.cpp"
    break;

  case 62: /* column_type: DATE  */
#line 586 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3762 "bison_parser.cpp"
    break;

  case 63: /* column_type: DATETIME  */
#line 587 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3768 "bison_parser.cpp"
    break;

  case 64: /* column_type: DECIMAL opt_decimal_specification  */
#line 588 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3777 "bison_parser.cpp"
    break;

  case 65: /* column_type: DOUBLE  */
#line 592 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3783 "bison_parser.cpp"
    break;

  case 66: /* column_type: FLOAT  */
#line 593 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3789 "bison_parser.cpp"
    break;

  case 67: /* column_type: INT  */
#line 594 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3795 "bison_parser.cpp"
    break;

  case 68: /* column_type: INTEGER  */
#line 595 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3801 "bison_parser.cpp"
    break;

  case 69: /* column_type: LONG  */
#line 596 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3807 "bison_parser.cpp"
    break;

  case 70: /* column_type: REAL  */
#line 597 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3813 "bison_parser.cpp"
    break;

  case 71: /* column_type: SMALLINT  */
#line 598 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3819 "bison_parser.cpp"
    break;

  case 72: /* column_type: TEXT  */
#line 599 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3825 "bison_parser.cpp"
    break;

  case 73: /* column_type: TIME opt_time_precision  */
#line 600 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3831 "bison_parser.cpp"
    break;

  case 74: /* column_type: TIMESTAMP  */
#line 601 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3837 "bison_parser.cpp"
    break;

  case 75: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 602 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3843 "bison_parser.cpp"
    break;

  case 76: /* opt_time_precision: '(' INTVAL ')'  */
#line 604 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3849 "bison_parser.cpp"
    break;

  case 77: /* opt_time_precision: %empty  */
#line 605 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3855 "bison_parser.cpp"
    break;

  case 78: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 607 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3861 "bison_parser.cpp"
    break;

  case 79: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 608 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3867 "bison_parser.cpp"
    break;

  case 80: /* opt_decimal_specification: %empty  */
#line 609 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3873 "bison_parser.cpp"
    break;

  case 81: /* opt_column_constraints: column_constraint_set  */
#line 611 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 3879 "bison_parser.cpp"
    break;

  case 82: /* opt_column_constraints: %empty  */
#line 612 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 3885 "bison_parser.cpp"
    break;

  case 83: /* column_constraint_set: column_constraint  */
#line 614 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 3894 "bison_parser.cpp"
    break;

  case 84: /* column_constraint_set: column_constraint_set column_constraint  */
#line 618 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 3903 "bison_parser.cpp"
    break;

  case 85: /* column_constraint: PRIMARY KEY  */
#line 623 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3909 "bison_parser.cpp"
    break;

  case 86: /* column_constraint: UNIQUE  */
#line 624 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3915 "bison_parser.cpp"
    break;

  case 87: /* column_constraint: NULL  */
#line 625 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3921 "bison_parser.cpp"
    break;

  case 88: /* column_constraint: NOT NULL  */
#line 626 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3927 "bison_parser.cpp"
    break;

  case 89: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 628 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3933 "bison_parser.cpp"
    break;

  case 90: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 629 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3939 "bison_parser.cpp"
    break;

  case 91: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 637 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3950 "bison_parser.cpp"
    break;

  case 92: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 643 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3961 "bison_parser.cpp"
    break;

  case 93: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 649 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3971 "bison_parser.cpp"
    break;

  case 94: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 655 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3981 "bison_parser.cpp"
    break;

  case 95: /* opt_exists: IF EXISTS  */
#line 661 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3987 "bison_parser.cpp"
    break;

  case 96: /* opt_exists: %empty  */
#line 662 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3993 "bison_parser.cpp"
    break;

  case 97: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 669 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4003 "bison_parser.cpp"
    break;

  case 98: /* alter_action: drop_action  */
#line 675 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4009 "bison_parser.cpp"
    break;

  case 99: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 677 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4018 "bison_parser.cpp"
    break;

  case 100: /* delete_statement: DELETE FROM table_name opt_where  */
#line 687 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4029 "bison_parser.cpp"
    break;

  case 101: /* truncate_statement: TRUNCATE table_name  */
#line 694 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4039 "bison_parser.cpp"
    break;

  case 102: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 705 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4051 "bison_parser.cpp"
    break;

  case 103: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 712 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4063 "bison_parser.cpp"
    break;

  case 104: /* opt_column_list: '(' ident_commalist ')'  */
#line 720 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4069 "bison_parser.cpp"
    break;

  case 105: /* opt_column_list: %empty  */
#line 721 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4075 "bison_parser.cpp"
    break;

  case 106: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 728 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4086 "bison_parser.cpp"
    break;

  case 107: /* update_clause_commalist: update_clause  */
#line 735 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4095 "bison_parser.cpp"
    break;

  case 108: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 739 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4104 "bison_parser.cpp"
    break;

  case 109: /* update_clause: IDENTIFIER '=' expr  */
#line 744 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4114 "bison_parser.cpp"
    break;

  case 110: /* select_statement: opt_with_clause select_with_paren  */
#line 754 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4123 "bison_parser.cpp"
    break;

  case 111: /* select_statement: opt_with_clause select_no_paren  */
#line 758 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4132 "bison_parser.cpp"
    break;

  case 112: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 762 "bison_parser.y"
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
#line 4148 "bison_parser.cpp"
    break;

  case 115: /* select_within_set_operation_no_parentheses: select_clause  */
#line 776 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4154 "bison_parser.cpp"
    break;

  case 116: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 777 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4167 "bison_parser.cpp"
    break;

  case 117: /* select_with_paren: '(' select_no_paren ')'  */
#line 786 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4173 "bison_parser.cpp"
    break;

  case 118: /* select_with_paren: '(' select_with_paren ')'  */
#line 787 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4179 "bison_parser.cpp"
    break;

  case 119: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 789 "bison_parser.y"
                                                                       {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit)) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec)) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4198 "bison_parser.cpp"
    break;

  case 120: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 803 "bison_parser.y"
                                                                                                {
  (yyval.select_stmt) = (yyvsp[-5].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
}
#line 4214 "bison_parser.cpp"
    break;

  case 121: /* set_operator: set_type opt_all  */
#line 815 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4223 "bison_parser.cpp"
    break;

  case 122: /* set_type: UNION  */
#line 820 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4232 "bison_parser.cpp"
    break;

  case 123: /* set_type: INTERSECT  */
#line 824 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4241 "bison_parser.cpp"
    break;

  case 124: /* set_type: EXCEPT  */
#line 828 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4250 "bison_parser.cpp"
    break;

  case 125: /* opt_all: ALL  */
#line 833 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4256 "bison_parser.cpp"
    break;

  case 126: /* opt_all: %empty  */
#line 834 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4262 "bison_parser.cpp"
    break;

  case 127: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 836 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4276 "bison_parser.cpp"
    break;

  case 128: /* opt_distinct: DISTINCT  */
#line 846 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4282 "bison_parser.cpp"
    break;

  case 129: /* opt_distinct: %empty  */
#line 847 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4288 "bison_parser.cpp"
    break;

  case 131: /* opt_from_clause: from_clause  */
#line 851 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4294 "bison_parser.cpp"
    break;

  case 132: /* opt_from_clause: %empty  */
#line 852 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4300 "bison_parser.cpp"
    break;

  case 133: /* from_clause: FROM table_ref  */
#line 854 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4306 "bison_parser.cpp"
    break;

  case 134: /* opt_where: WHERE expr  */
#line 856 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4312 "bison_parser.cpp"
    break;

  case 135: /* opt_where: %empty  */
#line 857 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4318 "bison_parser.cpp"
    break;

  case 136: /* opt_group: GROUP BY expr_list opt_having  */
#line 859 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4328 "bison_parser.cpp"
    break;

  case 137: /* opt_group: %empty  */
#line 864 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4334 "bison_parser.cpp"
    break;

  case 138: /* opt_having: HAVING expr  */
#line 866 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4340 "bison_parser.cpp"
    break;

  case 139: /* opt_having: %empty  */
#line 867 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4346 "bison_parser.cpp"
    break;

  case 140: /* opt_order: ORDER BY order_list  */
#line 869 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4352 "bison_parser.cpp"
    break;

  case 141: /* opt_order: %empty  */
#line 870 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4358 "bison_parser.cpp"
    break;

  case 142: /* order_list: order_desc  */
#line 872 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4367 "bison_parser.cpp"
    break;

  case 143: /* order_list: order_list ',' order_desc  */
#line 876 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4376 "bison_parser.cpp"
    break;

  case 144: /* order_desc: expr opt_order_type  */
#line 881 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4382 "bison_parser.cpp"
    break;

  case 145: /* opt_order_type: ASC  */
#line 883 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4388 "bison_parser.cpp"
    break;

  case 146: /* opt_order_type: DESC  */
#line 884 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4394 "bison_parser.cpp"
    break;

  case 147: /* opt_order_type: %empty  */
#line 885 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4400 "bison_parser.cpp"
    break;

  case 148: /* opt_top: TOP int_literal  */
#line 889 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4406 "bison_parser.cpp"
    break;

  case 149: /* opt_top: %empty  */
#line 890 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4412 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: LIMIT expr  */
#line 892 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4418 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: OFFSET expr  */
#line 893 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4424 "bison_parser.cpp"
    break;

  case 152: /* opt_limit: LIMIT expr OFFSET expr  */
#line 894 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4430 "bison_parser.cpp"
    break;

  case 153: /* opt_limit: LIMIT ALL  */
#line 895 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4436 "bison_parser.cpp"
    break;

  case 154: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 896 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4442 "bison_parser.cpp"
    break;

  case 155: /* opt_limit: %empty  */
#line 897 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4448 "bison_parser.cpp"
    break;

  case 156: /* expr_list: expr_alias  */
#line 902 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4457 "bison_parser.cpp"
    break;

  case 157: /* expr_list: expr_list ',' expr_alias  */
#line 906 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4466 "bison_parser.cpp"
    break;

  case 158: /* opt_literal_list: literal_list  */
#line 911 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4472 "bison_parser.cpp"
    break;

  case 159: /* opt_literal_list: %empty  */
#line 912 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4478 "bison_parser.cpp"
    break;

  case 160: /* literal_list: literal  */
#line 914 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4487 "bison_parser.cpp"
    break;

  case 161: /* literal_list: literal_list ',' literal  */
#line 918 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4496 "bison_parser.cpp"
    break;

  case 162: /* expr_alias: expr opt_alias  */
#line 923 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4508 "bison_parser.cpp"
    break;

  case 169: /* operand: '(' expr ')'  */
#line 933 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4514 "bison_parser.cpp"
    break;

  case 179: /* operand: '(' select_no_paren ')'  */
#line 935 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4522 "bison_parser.cpp"
    break;

  case 182: /* unary_expr: '-' operand  */
#line 941 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4528 "bison_parser.cpp"
    break;

  case 183: /* unary_expr: NOT operand  */
#line 942 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4534 "bison_parser.cpp"
    break;

  case 184: /* unary_expr: operand ISNULL  */
#line 943 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4540 "bison_parser.cpp"
    break;

  case 185: /* unary_expr: operand IS NULL  */
#line 944 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4546 "bison_parser.cpp"
    break;

  case 186: /* unary_expr: operand IS NOT NULL  */
#line 945 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4552 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '-' operand  */
#line 947 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4558 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand '+' operand  */
#line 948 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4564 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand '/' operand  */
#line 949 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4570 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand '*' operand  */
#line 950 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4576 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand '%' operand  */
#line 951 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4582 "bison_parser.cpp"
    break;

  case 193: /* binary_expr: operand '^' operand  */
#line 952 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4588 "bison_parser.cpp"
    break;

  case 194: /* binary_expr: operand LIKE operand  */
#line 953 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4594 "bison_parser.cpp"
    break;

  case 195: /* binary_expr: operand NOT LIKE operand  */
#line 954 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4600 "bison_parser.cpp"
    break;

  case 196: /* binary_expr: operand ILIKE operand  */
#line 955 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4606 "bison_parser.cpp"
    break;

  case 197: /* binary_expr: operand CONCAT operand  */
#line 956 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4612 "bison_parser.cpp"
    break;

  case 198: /* logic_expr: expr AND expr  */
#line 958 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4618 "bison_parser.cpp"
    break;

  case 199: /* logic_expr: expr OR expr  */
#line 959 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4624 "bison_parser.cpp"
    break;

  case 200: /* in_expr: operand IN '(' expr_list ')'  */
#line 961 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4630 "bison_parser.cpp"
    break;

  case 201: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 962 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4636 "bison_parser.cpp"
    break;

  case 202: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 963 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4642 "bison_parser.cpp"
    break;

  case 203: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 964 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4648 "bison_parser.cpp"
    break;

  case 204: /* window_expr: operand OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 968 "bison_parser.y"
                                                                            { (yyval.expr) = Expr::makeWindow((yyvsp[-6].expr), (yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4654 "bison_parser.cpp"
    break;

  case 205: /* opt_partition: PARTITION BY expr_list  */
#line 970 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4660 "bison_parser.cpp"
    break;

  case 206: /* opt_partition: %empty  */
#line 971 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4666 "bison_parser.cpp"
    break;

  case 207: /* opt_frame_clause: frame_type frame_bound  */
#line 973 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].sval), nullptr}; }
#line 4672 "bison_parser.cpp"
    break;

  case 208: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 974 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].sval), (yyvsp[0].sval)}; }
#line 4678 "bison_parser.cpp"
    break;

  case 209: /* opt_frame_clause: %empty  */
#line 975 "bison_parser.y"
              { (yyval.frame_description) = nullptr; }
#line 4684 "bison_parser.cpp"
    break;

  case 210: /* frame_type: RANGE  */
#line 977 "bison_parser.y"
                   { (yyval.frame_type) = FrameType::kRange; }
#line 4690 "bison_parser.cpp"
    break;

  case 211: /* frame_type: ROWS  */
#line 978 "bison_parser.y"
       { (yyval.frame_type) = FrameType::kRows; }
#line 4696 "bison_parser.cpp"
    break;

  case 212: /* frame_type: GROUPS  */
#line 979 "bison_parser.y"
         { (yyval.frame_type) = FrameType::kGroups; }
#line 4702 "bison_parser.cpp"
    break;

  case 213: /* frame_bound: INTVAL IDENTIFIER  */
#line 985 "bison_parser.y"
                                {
  // This is a rather ugly workaround to get a string out of the INTVAL. We cannot use IDENTIFIER because it must not
  // start with a number. STRING is also not possible because it must be in single quotes.
  std::stringstream stream;
  stream << (yyvsp[-1].ival);
  std::string temp_str = stream.str();

  // The destructor for sval (a.k.a char*) uses free(), so we have to use malloc() rather than new char. +2 for NULL
  // terminator and whitespace.
  char* char_type = static_cast<char*>(malloc(sizeof(char) * (temp_str.size() + strlen((yyvsp[0].sval)) + 2)));
  strcpy(char_type, temp_str.c_str());
  strcat(char_type, " ");
  strcat(char_type, (yyvsp[0].sval));
  free((yyvsp[0].sval));
  (yyval.sval) = char_type;
}
#line 4723 "bison_parser.cpp"
    break;

  case 214: /* frame_bound: IDENTIFIER IDENTIFIER  */
#line 1001 "bison_parser.y"
                        {
  char* char_type = static_cast<char*>(malloc(sizeof(char) * (strlen((yyvsp[-1].sval)) + strlen((yyvsp[0].sval)) + 2)));
  strcpy(char_type, (yyvsp[-1].sval));
  strcat(char_type, " ");
  strcat(char_type, (yyvsp[0].sval));
  free((yyvsp[-1].sval));
  free((yyvsp[0].sval));
  (yyval.sval) = char_type;
}
#line 4737 "bison_parser.cpp"
    break;

  case 215: /* case_expr: CASE expr case_list END  */
#line 1013 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4743 "bison_parser.cpp"
    break;

  case 216: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1014 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4749 "bison_parser.cpp"
    break;

  case 217: /* case_expr: CASE case_list END  */
#line 1015 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4755 "bison_parser.cpp"
    break;

  case 218: /* case_expr: CASE case_list ELSE expr END  */
#line 1016 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4761 "bison_parser.cpp"
    break;

  case 219: /* case_list: WHEN expr THEN expr  */
#line 1018 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4767 "bison_parser.cpp"
    break;

  case 220: /* case_list: case_list WHEN expr THEN expr  */
#line 1019 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4773 "bison_parser.cpp"
    break;

  case 221: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1021 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4779 "bison_parser.cpp"
    break;

  case 222: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1022 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4785 "bison_parser.cpp"
    break;

  case 223: /* comp_expr: operand '=' operand  */
#line 1024 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4791 "bison_parser.cpp"
    break;

  case 224: /* comp_expr: operand EQUALS operand  */
#line 1025 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4797 "bison_parser.cpp"
    break;

  case 225: /* comp_expr: operand NOTEQUALS operand  */
#line 1026 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4803 "bison_parser.cpp"
    break;

  case 226: /* comp_expr: operand '<' operand  */
#line 1027 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4809 "bison_parser.cpp"
    break;

  case 227: /* comp_expr: operand '>' operand  */
#line 1028 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4815 "bison_parser.cpp"
    break;

  case 228: /* comp_expr: operand LESSEQ operand  */
#line 1029 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4821 "bison_parser.cpp"
    break;

  case 229: /* comp_expr: operand GREATEREQ operand  */
#line 1030 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4827 "bison_parser.cpp"
    break;

  case 230: /* function_expr: IDENTIFIER '(' ')'  */
#line 1032 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4833 "bison_parser.cpp"
    break;

  case 231: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1033 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4839 "bison_parser.cpp"
    break;

  case 232: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1035 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4845 "bison_parser.cpp"
    break;

  case 233: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1037 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4851 "bison_parser.cpp"
    break;

  case 234: /* datetime_field: SECOND  */
#line 1039 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4857 "bison_parser.cpp"
    break;

  case 235: /* datetime_field: MINUTE  */
#line 1040 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4863 "bison_parser.cpp"
    break;

  case 236: /* datetime_field: HOUR  */
#line 1041 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4869 "bison_parser.cpp"
    break;

  case 237: /* datetime_field: DAY  */
#line 1042 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4875 "bison_parser.cpp"
    break;

  case 238: /* datetime_field: MONTH  */
#line 1043 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4881 "bison_parser.cpp"
    break;

  case 239: /* datetime_field: YEAR  */
#line 1044 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4887 "bison_parser.cpp"
    break;

  case 240: /* datetime_field_plural: SECONDS  */
#line 1046 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4893 "bison_parser.cpp"
    break;

  case 241: /* datetime_field_plural: MINUTES  */
#line 1047 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4899 "bison_parser.cpp"
    break;

  case 242: /* datetime_field_plural: HOURS  */
#line 1048 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4905 "bison_parser.cpp"
    break;

  case 243: /* datetime_field_plural: DAYS  */
#line 1049 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4911 "bison_parser.cpp"
    break;

  case 244: /* datetime_field_plural: MONTHS  */
#line 1050 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4917 "bison_parser.cpp"
    break;

  case 245: /* datetime_field_plural: YEARS  */
#line 1051 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4923 "bison_parser.cpp"
    break;

  case 248: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1055 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4929 "bison_parser.cpp"
    break;

  case 249: /* array_index: operand '[' int_literal ']'  */
#line 1057 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4935 "bison_parser.cpp"
    break;

  case 250: /* between_expr: operand BETWEEN operand AND operand  */
#line 1059 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4941 "bison_parser.cpp"
    break;

  case 251: /* column_name: IDENTIFIER  */
#line 1061 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4947 "bison_parser.cpp"
    break;

  case 252: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1062 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4953 "bison_parser.cpp"
    break;

  case 253: /* column_name: '*'  */
#line 1063 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4959 "bison_parser.cpp"
    break;

  case 254: /* column_name: IDENTIFIER '.' '*'  */
#line 1064 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4965 "bison_parser.cpp"
    break;

  case 262: /* string_literal: STRING  */
#line 1068 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4971 "bison_parser.cpp"
    break;

  case 263: /* bool_literal: TRUE  */
#line 1070 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4977 "bison_parser.cpp"
    break;

  case 264: /* bool_literal: FALSE  */
#line 1071 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4983 "bison_parser.cpp"
    break;

  case 265: /* num_literal: FLOATVAL  */
#line 1073 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4989 "bison_parser.cpp"
    break;

  case 267: /* int_literal: INTVAL  */
#line 1076 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4995 "bison_parser.cpp"
    break;

  case 268: /* null_literal: NULL  */
#line 1078 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5001 "bison_parser.cpp"
    break;

  case 269: /* date_literal: DATE STRING  */
#line 1080 "bison_parser.y"
                           {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 5016 "bison_parser.cpp"
    break;

  case 270: /* interval_literal: int_literal duration_field  */
#line 1091 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 5025 "bison_parser.cpp"
    break;

  case 271: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1095 "bison_parser.y"
                                 {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 5041 "bison_parser.cpp"
    break;

  case 272: /* interval_literal: INTERVAL STRING  */
#line 1106 "bison_parser.y"
                  {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 5077 "bison_parser.cpp"
    break;

  case 273: /* param_expr: '?'  */
#line 1138 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5087 "bison_parser.cpp"
    break;

  case 275: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1147 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5098 "bison_parser.cpp"
    break;

  case 279: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1156 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5109 "bison_parser.cpp"
    break;

  case 280: /* table_ref_commalist: table_ref_atomic  */
#line 1163 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5118 "bison_parser.cpp"
    break;

  case 281: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1167 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5127 "bison_parser.cpp"
    break;

  case 282: /* table_ref_name: table_name opt_table_alias  */
#line 1172 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5139 "bison_parser.cpp"
    break;

  case 283: /* table_ref_name_no_alias: table_name  */
#line 1180 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5149 "bison_parser.cpp"
    break;

  case 284: /* table_name: IDENTIFIER  */
#line 1186 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5158 "bison_parser.cpp"
    break;

  case 285: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1190 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5167 "bison_parser.cpp"
    break;

  case 286: /* opt_index_name: IDENTIFIER  */
#line 1195 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5173 "bison_parser.cpp"
    break;

  case 287: /* opt_index_name: %empty  */
#line 1196 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5179 "bison_parser.cpp"
    break;

  case 289: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1198 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5185 "bison_parser.cpp"
    break;

  case 291: /* opt_table_alias: %empty  */
#line 1200 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5191 "bison_parser.cpp"
    break;

  case 292: /* alias: AS IDENTIFIER  */
#line 1202 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5197 "bison_parser.cpp"
    break;

  case 293: /* alias: IDENTIFIER  */
#line 1203 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5203 "bison_parser.cpp"
    break;

  case 295: /* opt_alias: %empty  */
#line 1205 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5209 "bison_parser.cpp"
    break;

  case 296: /* opt_locking_clause: opt_locking_clause_list  */
#line 1211 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5215 "bison_parser.cpp"
    break;

  case 297: /* opt_locking_clause: %empty  */
#line 1212 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5221 "bison_parser.cpp"
    break;

  case 298: /* opt_locking_clause_list: locking_clause  */
#line 1214 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5230 "bison_parser.cpp"
    break;

  case 299: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1218 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5239 "bison_parser.cpp"
    break;

  case 300: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1223 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5250 "bison_parser.cpp"
    break;

  case 301: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1229 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5261 "bison_parser.cpp"
    break;

  case 302: /* row_lock_mode: UPDATE  */
#line 1236 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5267 "bison_parser.cpp"
    break;

  case 303: /* row_lock_mode: NO KEY UPDATE  */
#line 1237 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5273 "bison_parser.cpp"
    break;

  case 304: /* row_lock_mode: SHARE  */
#line 1238 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5279 "bison_parser.cpp"
    break;

  case 305: /* row_lock_mode: KEY SHARE  */
#line 1239 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5285 "bison_parser.cpp"
    break;

  case 306: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1241 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5291 "bison_parser.cpp"
    break;

  case 307: /* opt_row_lock_policy: NOWAIT  */
#line 1242 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5297 "bison_parser.cpp"
    break;

  case 308: /* opt_row_lock_policy: %empty  */
#line 1243 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5303 "bison_parser.cpp"
    break;

  case 310: /* opt_with_clause: %empty  */
#line 1249 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5309 "bison_parser.cpp"
    break;

  case 311: /* with_clause: WITH with_description_list  */
#line 1251 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5315 "bison_parser.cpp"
    break;

  case 312: /* with_description_list: with_description  */
#line 1253 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5324 "bison_parser.cpp"
    break;

  case 313: /* with_description_list: with_description_list ',' with_description  */
#line 1257 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5333 "bison_parser.cpp"
    break;

  case 314: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1262 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5343 "bison_parser.cpp"
    break;

  case 315: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1272 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5355 "bison_parser.cpp"
    break;

  case 316: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1279 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5368 "bison_parser.cpp"
    break;

  case 317: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1287 "bison_parser.y"
                                                                                 {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias) {
    left_col->alias = strdup((yyvsp[-1].expr)->alias);
  }
  if ((yyvsp[-7].table)->getName()) {
    left_col->table = strdup((yyvsp[-7].table)->getName());
  }
  auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias) {
    right_col->alias = strdup((yyvsp[-1].expr)->alias);
  }
  if ((yyvsp[-4].table)->getName()) {
    right_col->table = strdup((yyvsp[-4].table)->getName());
  }
  (yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
  delete (yyvsp[-1].expr);
}
#line 5396 "bison_parser.cpp"
    break;

  case 318: /* opt_join_type: INNER  */
#line 1311 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5402 "bison_parser.cpp"
    break;

  case 319: /* opt_join_type: LEFT OUTER  */
#line 1312 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5408 "bison_parser.cpp"
    break;

  case 320: /* opt_join_type: LEFT  */
#line 1313 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5414 "bison_parser.cpp"
    break;

  case 321: /* opt_join_type: RIGHT OUTER  */
#line 1314 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5420 "bison_parser.cpp"
    break;

  case 322: /* opt_join_type: RIGHT  */
#line 1315 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5426 "bison_parser.cpp"
    break;

  case 323: /* opt_join_type: FULL OUTER  */
#line 1316 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5432 "bison_parser.cpp"
    break;

  case 324: /* opt_join_type: OUTER  */
#line 1317 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5438 "bison_parser.cpp"
    break;

  case 325: /* opt_join_type: FULL  */
#line 1318 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5444 "bison_parser.cpp"
    break;

  case 326: /* opt_join_type: CROSS  */
#line 1319 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5450 "bison_parser.cpp"
    break;

  case 327: /* opt_join_type: %empty  */
#line 1320 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5456 "bison_parser.cpp"
    break;

  case 331: /* ident_commalist: IDENTIFIER  */
#line 1331 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5465 "bison_parser.cpp"
    break;

  case 332: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1335 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5474 "bison_parser.cpp"
    break;


#line 5478 "bison_parser.cpp"

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
          YYNOMEM;
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 1341 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
