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
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 108 "bison_parser.cpp"

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
  YYSYMBOL_INDEX = 71,                     /* INDEX  */
  YYSYMBOL_INNER = 72,                     /* INNER  */
  YYSYMBOL_LIMIT = 73,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 74,                     /* LOCAL  */
  YYSYMBOL_MERGE = 75,                     /* MERGE  */
  YYSYMBOL_MINUS = 76,                     /* MINUS  */
  YYSYMBOL_ORDER = 77,                     /* ORDER  */
  YYSYMBOL_OVER = 78,                      /* OVER  */
  YYSYMBOL_OUTER = 79,                     /* OUTER  */
  YYSYMBOL_RIGHT = 80,                     /* RIGHT  */
  YYSYMBOL_TABLE = 81,                     /* TABLE  */
  YYSYMBOL_UNION = 82,                     /* UNION  */
  YYSYMBOL_USING = 83,                     /* USING  */
  YYSYMBOL_WHERE = 84,                     /* WHERE  */
  YYSYMBOL_CALL = 85,                      /* CALL  */
  YYSYMBOL_CASE = 86,                      /* CASE  */
  YYSYMBOL_CHAR = 87,                      /* CHAR  */
  YYSYMBOL_COPY = 88,                      /* COPY  */
  YYSYMBOL_DATE = 89,                      /* DATE  */
  YYSYMBOL_DATETIME = 90,                  /* DATETIME  */
  YYSYMBOL_DESC = 91,                      /* DESC  */
  YYSYMBOL_DROP = 92,                      /* DROP  */
  YYSYMBOL_ELSE = 93,                      /* ELSE  */
  YYSYMBOL_FILE = 94,                      /* FILE  */
  YYSYMBOL_FROM = 95,                      /* FROM  */
  YYSYMBOL_FULL = 96,                      /* FULL  */
  YYSYMBOL_HASH = 97,                      /* HASH  */
  YYSYMBOL_HINT = 98,                      /* HINT  */
  YYSYMBOL_INTO = 99,                      /* INTO  */
  YYSYMBOL_JOIN = 100,                     /* JOIN  */
  YYSYMBOL_LEFT = 101,                     /* LEFT  */
  YYSYMBOL_LIKE = 102,                     /* LIKE  */
  YYSYMBOL_LOAD = 103,                     /* LOAD  */
  YYSYMBOL_LONG = 104,                     /* LONG  */
  YYSYMBOL_NULL = 105,                     /* NULL  */
  YYSYMBOL_PARTITION = 106,                /* PARTITION  */
  YYSYMBOL_PLAN = 107,                     /* PLAN  */
  YYSYMBOL_SHOW = 108,                     /* SHOW  */
  YYSYMBOL_TEXT = 109,                     /* TEXT  */
  YYSYMBOL_THEN = 110,                     /* THEN  */
  YYSYMBOL_TIME = 111,                     /* TIME  */
  YYSYMBOL_VIEW = 112,                     /* VIEW  */
  YYSYMBOL_WHEN = 113,                     /* WHEN  */
  YYSYMBOL_WITH = 114,                     /* WITH  */
  YYSYMBOL_ADD = 115,                      /* ADD  */
  YYSYMBOL_ALL = 116,                      /* ALL  */
  YYSYMBOL_AND = 117,                      /* AND  */
  YYSYMBOL_ASC = 118,                      /* ASC  */
  YYSYMBOL_END = 119,                      /* END  */
  YYSYMBOL_FOR = 120,                      /* FOR  */
  YYSYMBOL_INT = 121,                      /* INT  */
  YYSYMBOL_KEY = 122,                      /* KEY  */
  YYSYMBOL_NOT = 123,                      /* NOT  */
  YYSYMBOL_OFF = 124,                      /* OFF  */
  YYSYMBOL_SET = 125,                      /* SET  */
  YYSYMBOL_TOP = 126,                      /* TOP  */
  YYSYMBOL_AS = 127,                       /* AS  */
  YYSYMBOL_BY = 128,                       /* BY  */
  YYSYMBOL_IF = 129,                       /* IF  */
  YYSYMBOL_IN = 130,                       /* IN  */
  YYSYMBOL_IS = 131,                       /* IS  */
  YYSYMBOL_OF = 132,                       /* OF  */
  YYSYMBOL_ON = 133,                       /* ON  */
  YYSYMBOL_OR = 134,                       /* OR  */
  YYSYMBOL_TO = 135,                       /* TO  */
  YYSYMBOL_NO = 136,                       /* NO  */
  YYSYMBOL_ARRAY = 137,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 138,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 139,                    /* ILIKE  */
  YYSYMBOL_SECOND = 140,                   /* SECOND  */
  YYSYMBOL_MINUTE = 141,                   /* MINUTE  */
  YYSYMBOL_HOUR = 142,                     /* HOUR  */
  YYSYMBOL_DAY = 143,                      /* DAY  */
  YYSYMBOL_MONTH = 144,                    /* MONTH  */
  YYSYMBOL_YEAR = 145,                     /* YEAR  */
  YYSYMBOL_SECONDS = 146,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 147,                  /* MINUTES  */
  YYSYMBOL_HOURS = 148,                    /* HOURS  */
  YYSYMBOL_DAYS = 149,                     /* DAYS  */
  YYSYMBOL_MONTHS = 150,                   /* MONTHS  */
  YYSYMBOL_YEARS = 151,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 152,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 153,                     /* TRUE  */
  YYSYMBOL_FALSE = 154,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 155,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 156,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 157,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 158,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 159,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 160,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 161,                     /* SKIP  */
  YYSYMBOL_LOCKED = 162,                   /* LOCKED  */
  YYSYMBOL_SHARE = 163,                    /* SHARE  */
  YYSYMBOL_RANGE = 164,                    /* RANGE  */
  YYSYMBOL_ROWS = 165,                     /* ROWS  */
  YYSYMBOL_GROUPS = 166,                   /* GROUPS  */
  YYSYMBOL_UNBOUNDED = 167,                /* UNBOUNDED  */
  YYSYMBOL_FOLLOWING = 168,                /* FOLLOWING  */
  YYSYMBOL_PRECEDING = 169,                /* PRECEDING  */
  YYSYMBOL_CURRENT_ROW = 170,              /* CURRENT_ROW  */
  YYSYMBOL_171_ = 171,                     /* '='  */
  YYSYMBOL_EQUALS = 172,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 173,                /* NOTEQUALS  */
  YYSYMBOL_174_ = 174,                     /* '<'  */
  YYSYMBOL_175_ = 175,                     /* '>'  */
  YYSYMBOL_LESS = 176,                     /* LESS  */
  YYSYMBOL_GREATER = 177,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 178,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 179,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 180,                  /* NOTNULL  */
  YYSYMBOL_181_ = 181,                     /* '+'  */
  YYSYMBOL_182_ = 182,                     /* '-'  */
  YYSYMBOL_183_ = 183,                     /* '*'  */
  YYSYMBOL_184_ = 184,                     /* '/'  */
  YYSYMBOL_185_ = 185,                     /* '%'  */
  YYSYMBOL_186_ = 186,                     /* '^'  */
  YYSYMBOL_UMINUS = 187,                   /* UMINUS  */
  YYSYMBOL_188_ = 188,                     /* '['  */
  YYSYMBOL_189_ = 189,                     /* ']'  */
  YYSYMBOL_190_ = 190,                     /* '('  */
  YYSYMBOL_191_ = 191,                     /* ')'  */
  YYSYMBOL_192_ = 192,                     /* '.'  */
  YYSYMBOL_193_ = 193,                     /* ';'  */
  YYSYMBOL_194_ = 194,                     /* ','  */
  YYSYMBOL_195_ = 195,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 196,                 /* $accept  */
  YYSYMBOL_input = 197,                    /* input  */
  YYSYMBOL_statement_list = 198,           /* statement_list  */
  YYSYMBOL_statement = 199,                /* statement  */
  YYSYMBOL_preparable_statement = 200,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 201,                /* opt_hints  */
  YYSYMBOL_hint_list = 202,                /* hint_list  */
  YYSYMBOL_hint = 203,                     /* hint  */
  YYSYMBOL_transaction_statement = 204,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 205,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 206,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 207,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 208,        /* execute_statement  */
  YYSYMBOL_import_statement = 209,         /* import_statement  */
  YYSYMBOL_file_type = 210,                /* file_type  */
  YYSYMBOL_file_path = 211,                /* file_path  */
  YYSYMBOL_opt_file_type = 212,            /* opt_file_type  */
  YYSYMBOL_export_statement = 213,         /* export_statement  */
  YYSYMBOL_show_statement = 214,           /* show_statement  */
  YYSYMBOL_create_statement = 215,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 216,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 217,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 218,               /* table_elem  */
  YYSYMBOL_column_def = 219,               /* column_def  */
  YYSYMBOL_column_type = 220,              /* column_type  */
  YYSYMBOL_opt_time_precision = 221,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 222, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 223,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 224,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 225,        /* column_constraint  */
  YYSYMBOL_table_constraint = 226,         /* table_constraint  */
  YYSYMBOL_drop_statement = 227,           /* drop_statement  */
  YYSYMBOL_opt_exists = 228,               /* opt_exists  */
  YYSYMBOL_alter_statement = 229,          /* alter_statement  */
  YYSYMBOL_alter_action = 230,             /* alter_action  */
  YYSYMBOL_drop_action = 231,              /* drop_action  */
  YYSYMBOL_delete_statement = 232,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 233,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 234,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 235,          /* opt_column_list  */
  YYSYMBOL_update_statement = 236,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 237,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 238,            /* update_clause  */
  YYSYMBOL_select_statement = 239,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 240, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 241, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 242,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 243,          /* select_no_paren  */
  YYSYMBOL_set_operator = 244,             /* set_operator  */
  YYSYMBOL_set_type = 245,                 /* set_type  */
  YYSYMBOL_opt_all = 246,                  /* opt_all  */
  YYSYMBOL_select_clause = 247,            /* select_clause  */
  YYSYMBOL_opt_distinct = 248,             /* opt_distinct  */
  YYSYMBOL_select_list = 249,              /* select_list  */
  YYSYMBOL_opt_from_clause = 250,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 251,              /* from_clause  */
  YYSYMBOL_opt_where = 252,                /* opt_where  */
  YYSYMBOL_opt_group = 253,                /* opt_group  */
  YYSYMBOL_opt_having = 254,               /* opt_having  */
  YYSYMBOL_opt_order = 255,                /* opt_order  */
  YYSYMBOL_order_list = 256,               /* order_list  */
  YYSYMBOL_order_desc = 257,               /* order_desc  */
  YYSYMBOL_opt_order_type = 258,           /* opt_order_type  */
  YYSYMBOL_opt_top = 259,                  /* opt_top  */
  YYSYMBOL_opt_limit = 260,                /* opt_limit  */
  YYSYMBOL_expr_list = 261,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 262,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 263,             /* literal_list  */
  YYSYMBOL_expr_alias = 264,               /* expr_alias  */
  YYSYMBOL_expr = 265,                     /* expr  */
  YYSYMBOL_operand = 266,                  /* operand  */
  YYSYMBOL_scalar_expr = 267,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 268,               /* unary_expr  */
  YYSYMBOL_binary_expr = 269,              /* binary_expr  */
  YYSYMBOL_logic_expr = 270,               /* logic_expr  */
  YYSYMBOL_in_expr = 271,                  /* in_expr  */
  YYSYMBOL_window_expr = 272,              /* window_expr  */
  YYSYMBOL_opt_partition = 273,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 274,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 275,               /* frame_type  */
  YYSYMBOL_frame_bound = 276,              /* frame_bound  */
  YYSYMBOL_case_expr = 277,                /* case_expr  */
  YYSYMBOL_case_list = 278,                /* case_list  */
  YYSYMBOL_exists_expr = 279,              /* exists_expr  */
  YYSYMBOL_comp_expr = 280,                /* comp_expr  */
  YYSYMBOL_function_expr = 281,            /* function_expr  */
  YYSYMBOL_extract_expr = 282,             /* extract_expr  */
  YYSYMBOL_cast_expr = 283,                /* cast_expr  */
  YYSYMBOL_datetime_field = 284,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 285,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 286,           /* duration_field  */
  YYSYMBOL_array_expr = 287,               /* array_expr  */
  YYSYMBOL_array_index = 288,              /* array_index  */
  YYSYMBOL_between_expr = 289,             /* between_expr  */
  YYSYMBOL_column_name = 290,              /* column_name  */
  YYSYMBOL_literal = 291,                  /* literal  */
  YYSYMBOL_string_literal = 292,           /* string_literal  */
  YYSYMBOL_bool_literal = 293,             /* bool_literal  */
  YYSYMBOL_num_literal = 294,              /* num_literal  */
  YYSYMBOL_int_literal = 295,              /* int_literal  */
  YYSYMBOL_null_literal = 296,             /* null_literal  */
  YYSYMBOL_date_literal = 297,             /* date_literal  */
  YYSYMBOL_interval_literal = 298,         /* interval_literal  */
  YYSYMBOL_param_expr = 299,               /* param_expr  */
  YYSYMBOL_table_ref = 300,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 301,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 302, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 303,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 304,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 305,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 306,               /* table_name  */
  YYSYMBOL_opt_index_name = 307,           /* opt_index_name  */
  YYSYMBOL_table_alias = 308,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 309,          /* opt_table_alias  */
  YYSYMBOL_alias = 310,                    /* alias  */
  YYSYMBOL_opt_alias = 311,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 312,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 313,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 314,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 315,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 316,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 317,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 318,              /* with_clause  */
  YYSYMBOL_with_description_list = 319,    /* with_description_list  */
  YYSYMBOL_with_description = 320,         /* with_description  */
  YYSYMBOL_join_clause = 321,              /* join_clause  */
  YYSYMBOL_opt_join_type = 322,            /* opt_join_type  */
  YYSYMBOL_join_condition = 323,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 324,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 325           /* ident_commalist  */
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
#define YYLAST   887

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  196
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  335
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  604

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   433


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
       2,     2,     2,     2,     2,     2,     2,   185,     2,     2,
     190,   191,   183,   181,   194,   182,   192,   184,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   193,
     174,   171,   175,   195,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   188,     2,   189,   186,     2,     2,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   172,   173,   176,   177,
     178,   179,   180,   187
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   320,   320,   339,   345,   352,   356,   360,   361,   362,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     379,   380,   382,   386,   391,   395,   405,   406,   407,   409,
     409,   415,   421,   423,   427,   438,   444,   452,   467,   472,
     473,   479,   485,   496,   497,   502,   513,   526,   538,   545,
     552,   561,   562,   564,   568,   573,   574,   576,   583,   584,
     585,   586,   587,   588,   589,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   605,   606,   608,   609,
     610,   612,   613,   615,   619,   624,   625,   626,   627,   629,
     630,   638,   644,   650,   656,   662,   663,   670,   676,   678,
     688,   695,   706,   713,   721,   722,   729,   736,   740,   745,
     755,   759,   763,   775,   775,   777,   778,   787,   788,   790,
     804,   816,   821,   825,   829,   834,   835,   837,   847,   848,
     850,   852,   853,   855,   857,   858,   860,   865,   867,   868,
     870,   871,   873,   877,   882,   884,   885,   886,   890,   891,
     893,   894,   895,   896,   897,   898,   903,   907,   912,   913,
     915,   919,   924,   932,   932,   932,   932,   932,   932,   934,
     935,   935,   935,   935,   935,   935,   935,   935,   936,   936,
     940,   940,   942,   943,   944,   945,   946,   948,   948,   949,
     950,   951,   952,   953,   954,   955,   956,   957,   959,   960,
     962,   963,   964,   965,   969,   971,   972,   974,   975,   976,
     978,   979,   980,   982,   983,   984,   985,   986,   990,   991,
     992,   993,   995,   996,   998,   999,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1009,  1010,  1012,  1014,  1016,  1017,  1018,
    1019,  1020,  1021,  1023,  1024,  1025,  1026,  1027,  1028,  1030,
    1030,  1032,  1034,  1036,  1038,  1039,  1040,  1041,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1045,  1047,  1048,  1050,  1051,
    1053,  1055,  1057,  1068,  1072,  1083,  1115,  1124,  1124,  1131,
    1131,  1133,  1133,  1140,  1144,  1149,  1157,  1163,  1167,  1172,
    1173,  1175,  1175,  1177,  1177,  1179,  1180,  1182,  1182,  1188,
    1189,  1191,  1195,  1200,  1206,  1213,  1214,  1215,  1216,  1218,
    1219,  1220,  1226,  1226,  1228,  1230,  1234,  1239,  1249,  1256,
    1264,  1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,
    1297,  1299,  1305,  1305,  1308,  1312
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
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OVER", "OUTER", "RIGHT", "TABLE", "UNION", "USING",
  "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC",
  "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN",
  "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PARTITION", "PLAN", "SHOW",
  "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND",
  "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TOP", "AS",
  "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "NO", "ARRAY", "CONCAT",
  "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "SECONDS",
  "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS", "INTERVAL", "TRUE",
  "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK",
  "NOWAIT", "SKIP", "LOCKED", "SHARE", "RANGE", "ROWS", "GROUPS",
  "UNBOUNDED", "FOLLOWING", "PRECEDING", "CURRENT_ROW", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "transaction_statement", "opt_transaction_keyword",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path", "opt_file_type",
  "export_statement", "show_statement", "create_statement",
  "opt_not_exists", "table_elem_commalist", "table_elem", "column_def",
  "column_type", "opt_time_precision", "opt_decimal_specification",
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

#define YYPACT_NINF (-512)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-333)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     457,    51,    76,    88,   103,    76,   146,   -50,     9,   127,
      76,    75,    19,   148,    27,   105,   -10,   -10,   -10,   251,
     104,  -512,   191,  -512,   191,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,   -32,  -512,   311,
     124,  -512,   135,   259,  -512,   231,   231,   231,    76,   359,
      76,   242,  -512,   237,   -32,   238,   -37,   237,   237,   237,
      76,  -512,   247,   193,  -512,  -512,  -512,  -512,  -512,  -512,
     618,  -512,   292,  -512,  -512,   269,    47,  -512,    54,  -512,
     410,    36,   412,   294,   416,    76,    76,   336,  -512,   331,
     236,   424,   383,    76,   243,   244,   434,   434,   434,   437,
      76,    76,  -512,   253,   105,  -512,   254,   439,   435,  -512,
    -512,  -512,   -32,   330,   320,   -32,   118,  -512,  -512,  -512,
    -512,   448,  -512,   449,  -512,  -512,  -512,   263,   262,  -512,
    -512,  -512,  -512,   736,  -512,  -512,  -512,  -512,  -512,  -512,
     414,  -512,   328,   -43,   236,   332,  -512,   434,   459,   134,
     295,   -55,  -512,  -512,   371,  -512,  -512,   351,  -512,   351,
     351,  -512,  -512,  -512,  -512,  -512,   465,  -512,  -512,   332,
     390,  -512,  -512,    47,  -512,  -512,   332,   390,   332,   166,
     350,  -512,   241,  -512,    36,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,    76,   468,   362,    46,   346,  -126,   287,   288,   290,
     175,   403,   302,   427,  -512,   305,   139,   464,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,   394,  -512,   -34,   306,  -512,
     332,   424,  -512,   443,  -512,  -512,   450,  -512,   336,  -512,
     312,   101,  -512,   406,   309,  -512,    50,   118,   -32,   310,
    -512,   129,   118,   139,   451,    42,    12,  -512,   350,  -512,
    -512,  -512,   315,   413,  -512,   658,   389,   322,   102,  -512,
    -512,  -512,   362,    16,    11,   461,   241,   332,   332,   152,
     157,   327,   427,   649,   332,   116,   333,   -63,   332,   332,
     427,  -512,   335,   427,   -47,   338,    80,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   439,    76,  -512,   518,    36,   139,  -512,   237,
     359,  -512,    36,  -512,   465,    20,   336,  -512,   332,  -512,
     526,  -512,  -512,  -512,  -512,   332,  -512,  -512,  -512,   350,
     332,   332,  -512,   367,   409,  -512,   107,  -512,   459,   434,
    -512,  -512,   343,  -512,   344,  -512,  -512,   345,  -512,  -512,
     347,  -512,  -512,  -512,  -512,   348,  -512,  -512,   113,   349,
     459,  -512,    46,  -512,  -512,   332,  -512,  -512,   352,   441,
     108,   173,   213,   332,   332,  -512,   461,   442,  -113,  -512,
    -512,  -512,   429,   611,   445,   669,   427,   357,   305,  -512,
     436,   360,   669,   669,   669,   669,   687,   687,   687,   687,
     116,   116,    57,    57,    57,    -5,   363,  -512,  -512,   156,
     550,  -512,   177,  -512,   362,  -512,    65,  -512,   364,  -512,
      24,  -512,   484,  -512,  -512,  -512,  -512,   139,   139,  -512,
     496,   459,  -512,   398,  -512,   181,  -512,   555,   556,  -512,
     557,   561,   562,  -512,   447,  -512,  -512,   467,  -512,   113,
    -512,   459,   198,  -512,   205,  -512,   332,   658,   332,   332,
    -512,   196,   207,   379,  -512,   427,   446,   390,   669,   305,
     382,   209,  -512,  -512,  -512,  -512,  -512,   384,   476,  -512,
    -512,  -512,   498,   499,   503,   483,    20,   581,  -512,  -512,
    -512,   460,  -512,  -512,     3,  -512,  -512,   399,   210,   400,
     401,   405,  -512,  -512,  -512,   211,  -512,  -512,   -56,   408,
     139,   225,  -512,   332,  -512,   649,   332,   258,   415,   220,
    -512,  -512,    24,    20,  -512,  -512,  -512,    20,   297,   407,
     332,  -512,  -512,  -512,   583,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,   139,   309,  -512,  -512,  -512,   417,    26,  -512,
    -512,  -512,  -512,   161,   459,   -26,   420,  -512,    69,    32,
     106,  -512,  -512,   411,   332,   221,   332,  -512,  -512,  -512,
    -512,   487,  -512,  -512,    21,   139,  -512,  -512,   139,    32,
     421,   428,  -512,  -512
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     313,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     333,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   312,     0,
     287,   101,    33,     0,    45,    52,    52,    52,     0,     0,
       0,     0,   286,    96,     0,     0,     0,    96,    96,    96,
       0,    43,     0,   314,   315,    29,    26,    28,    27,     1,
     313,     2,     0,     6,     5,   149,   110,   111,   141,    93,
       0,   159,     0,     0,   290,     0,     0,   135,    37,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     4,     0,     0,   129,   123,
     124,   122,     0,   126,     0,     0,   155,   288,   265,   268,
     270,     0,   271,     0,   266,   267,   276,     0,   158,   160,
     258,   259,   260,   269,   261,   262,   263,   264,    32,    31,
       0,   289,     0,     0,   105,     0,   100,     0,     0,     0,
       0,   135,   107,    95,     0,   118,   117,    40,    38,    40,
      40,    94,    91,    92,   317,   316,     0,   148,   128,     0,
     141,   114,   113,   115,   125,   121,     0,   141,     0,     0,
     300,   272,   275,    34,     0,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   273,
      51,     0,     0,   313,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   134,   163,   171,   172,
     173,   165,   167,   168,   174,   166,   187,   175,   176,   177,
     178,   170,   164,   180,   181,     0,   334,     0,     0,   103,
       0,     0,   106,     0,    97,    98,     0,    42,   135,    41,
      24,     0,    22,   132,   130,   156,   298,   155,     0,   140,
     142,   147,   155,   151,   153,   150,     0,   119,   299,   301,
     274,   161,     0,     0,    48,     0,     0,     0,     0,    53,
      55,    56,   313,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   183,     0,   182,     0,     0,     0,     0,
       0,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,   109,   108,    96,
       0,    36,     0,    20,     0,     0,   135,   131,     0,   296,
       0,   297,   162,   112,   116,     0,   146,   145,   144,   300,
       0,     0,   305,     0,     0,   307,   311,   302,     0,     0,
      74,    68,     0,    70,    80,    71,    58,     0,    65,    66,
       0,    62,    63,    69,    72,    77,    67,    59,    82,     0,
       0,    47,     0,    50,   233,     0,   255,   257,     0,     0,
       0,     0,     0,     0,     0,   220,     0,     0,     0,   179,
     169,   198,   199,     0,   206,   194,     0,     0,     0,   185,
       0,   197,   196,   226,   227,   228,   229,   230,   231,   232,
     189,   188,   191,   190,   192,   193,     0,    35,   335,     0,
       0,    39,     0,    23,   313,   133,   277,   279,     0,   281,
     294,   280,   137,   157,   295,   143,   120,   154,   152,   308,
       0,     0,   310,     0,   303,     0,    46,     0,     0,    64,
       0,     0,     0,    73,     0,    86,    87,     0,    57,    81,
      83,     0,     0,    54,     0,   224,     0,     0,     0,     0,
     218,     0,     0,     0,   251,     0,     0,   141,   195,     0,
       0,     0,   186,   252,   102,    99,    25,     0,     0,   329,
     321,   327,   325,   328,   323,     0,     0,     0,   293,   285,
     291,     0,   127,   306,   311,   309,    49,     0,     0,     0,
       0,     0,    85,    88,    84,     0,    90,   234,     0,     0,
     222,     0,   221,     0,   225,   253,     0,   209,     0,     0,
     202,   200,   294,     0,   324,   326,   322,     0,   278,   295,
       0,   304,    61,    79,     0,    75,    60,    76,    89,   235,
     236,   219,   223,   205,   210,   211,   212,     0,     0,   203,
     201,   282,   318,   330,     0,   139,     0,   204,     0,     0,
       0,   217,   207,     0,     0,     0,     0,   136,    78,   216,
     214,     0,   215,   213,     0,   331,   319,   292,   138,     0,
     254,     0,   208,   320
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -512,  -512,  -512,   530,  -512,   588,  -512,   271,  -512,   267,
    -512,  -512,  -512,  -512,   277,   -78,   180,  -512,  -512,  -512,
     299,  -512,   239,  -512,   143,  -512,  -512,  -512,  -512,   154,
    -512,  -512,   -51,  -512,  -512,  -512,  -512,  -512,  -512,   480,
    -512,  -512,   385,  -200,   -71,  -512,    35,   -53,   -21,  -512,
    -512,   -76,   358,  -512,  -512,  -512,  -121,  -512,  -512,  -166,
    -512,   282,  -512,  -512,   -46,  -259,  -512,  -252,   291,  -145,
    -198,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -511,  -512,   339,  -512,  -512,  -512,  -512,  -512,  -131,  -512,
    -512,  -512,  -512,  -512,    37,   -60,   -80,  -512,  -512,   -98,
    -512,  -512,  -512,  -512,  -512,  -444,    87,  -512,  -512,  -512,
       0,  -512,  -512,    90,   378,  -512,   304,  -512,   386,  -512,
     137,  -512,  -512,  -512,   552,  -512,  -512,  -512,  -512,  -321
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   251,   252,    23,    66,
      24,   139,    25,    26,    89,   157,   247,    27,    28,    29,
      84,   278,   279,   280,   378,   463,   459,   468,   469,   470,
     281,    30,    93,    31,   244,   245,    32,    33,    34,   149,
      35,   151,   152,    36,   170,   171,   172,    77,   112,   113,
     175,    78,   169,   253,   336,   337,   146,   512,   587,   116,
     259,   260,   348,   108,   180,   254,   127,   128,   255,   256,
     217,   218,   219,   220,   221,   222,   223,   487,   567,   568,
     582,   224,   290,   225,   226,   227,   228,   229,   197,   198,
     199,   230,   231,   232,   233,   234,   130,   131,   132,   133,
     134,   135,   136,   137,   435,   436,   437,   438,   439,    51,
     440,   142,   508,   509,   510,   342,   267,   268,   269,   356,
     454,    37,    38,    63,    64,   441,   505,   596,    71,   237
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     216,    95,    41,   274,   257,    44,    99,   100,   101,   167,
      52,   262,    56,   293,   386,   295,   158,   158,   158,   159,
     160,   129,    40,    40,   600,   586,    75,   339,   168,   145,
     242,   261,   578,   263,   265,   398,   173,   455,   578,   173,
     118,   119,   120,   579,   177,    48,    60,    55,    87,   275,
      90,   270,   202,   339,   298,   406,   109,   115,    97,   472,
     102,   298,   548,   109,   283,   289,   284,   158,   591,   235,
     297,   299,    76,   276,   429,   352,   484,    39,   299,    40,
     432,   338,   383,   407,   203,   143,   144,    61,   602,    94,
     498,    42,   110,   154,   293,   327,   239,   351,    98,   110,
     162,   163,   403,   573,    49,   405,    43,   277,    62,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   271,   121,   474,   331,   400,   111,
     514,   114,   499,   307,   353,   559,   111,   500,   164,   241,
     464,   122,   390,   391,   501,   502,    65,   204,   354,   491,
     525,   507,   258,   401,   402,   389,    53,   324,    54,   298,
     325,   503,   296,   452,   453,  -330,   504,   298,   338,   206,
     118,   119,   120,   178,   465,   355,   299,   340,   206,   118,
     119,   120,   173,   322,   299,   409,   498,   344,   123,   124,
     125,   179,    75,   580,   387,   307,   581,   325,   238,   580,
     261,   272,   581,   410,   214,   447,   448,   384,   488,    54,
     434,   343,   207,   208,   209,   442,   349,    45,   466,    57,
     346,   207,   208,   209,   426,   298,    50,    46,   499,    58,
     539,   126,   388,   500,   497,   477,   467,   589,   590,   451,
     501,   502,   299,   321,   583,   322,   298,   347,   481,   482,
     393,    69,   210,   585,   307,   121,   298,   503,    47,  -283,
      59,   210,   504,   299,   121,   288,   129,   452,   453,   298,
     394,   122,   129,   299,   592,   593,   395,   563,   430,   158,
     122,   456,   264,   478,    67,    68,   299,   535,   288,   211,
     298,   575,   333,   381,   584,   334,   382,    70,   211,   318,
     319,   320,   321,   212,   322,    72,   479,   299,   206,   118,
     119,   120,   212,   298,    79,   532,    80,   533,   123,   124,
     125,   537,   498,   427,   298,    81,   394,   123,   124,   125,
     299,   528,   480,   530,   531,   206,   118,   119,   120,   248,
     249,   299,   298,   483,   561,    85,    86,   494,   213,   214,
     184,   207,   208,   209,    82,   490,   215,   213,   214,   299,
      83,   126,    88,    75,   499,   215,    92,    91,   496,   500,
     126,   184,   516,    96,   103,   325,   501,   502,   207,   208,
     209,   185,   186,   187,   188,   189,   190,   104,   562,   526,
     106,   210,   325,   503,   121,   107,   527,  -330,   504,   338,
     541,   553,   558,   338,   554,   325,   206,   118,   119,   120,
     122,   570,   597,   117,   338,   325,   138,   140,   210,   141,
     145,   121,   564,   565,   566,   147,   148,   150,   211,   153,
     206,   118,   119,   120,   155,   156,   538,   122,   118,   595,
     161,   598,   212,    54,   166,   120,   174,   168,   176,   291,
     208,   209,   181,   182,   183,   211,   184,   123,   124,   125,
     200,   201,   236,   243,     1,   246,   240,   114,   250,   212,
     266,   273,     2,   282,   208,   209,    15,   285,   286,     3,
     287,   300,   329,     4,   123,   124,   125,   213,   214,   210,
     294,  -284,   121,   323,     5,   215,   326,     6,     7,   330,
     126,   335,   332,   338,   345,   358,   350,   359,   122,     8,
       9,   379,   380,   210,   213,   214,   121,   396,   301,    75,
      10,   428,   215,    11,   399,   404,   292,   126,   408,   444,
     449,   450,   122,   457,   458,   460,   476,   461,   462,   471,
     212,   492,   302,   475,   406,    12,   298,   489,   322,    13,
     292,   486,   493,   495,   511,   123,   124,   125,   506,   513,
     515,   517,   518,   519,   212,    14,   303,   520,   521,   522,
     534,    15,   523,   540,   536,   542,   543,   544,   545,   123,
     124,   125,   546,   547,   549,   213,   214,   304,   550,   576,
     552,   555,   556,   215,   305,   306,   557,   574,   126,   560,
     105,   594,   307,   308,   599,   433,   569,   431,   577,   213,
     214,   588,    74,   284,    16,    17,    18,   215,  -332,   603,
     529,   473,   126,   524,   205,     1,   328,   445,   392,   443,
     572,   601,   571,     2,   341,   309,   310,   311,   312,   313,
       3,   385,   314,   315,     4,   316,   317,   318,   319,   320,
     321,   551,   322,   446,   357,     5,   165,     0,     6,     7,
       0,     0,     0,     0,     0,   301,     0,     0,     0,   360,
       8,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,   361,     0,    11,     0,     0,   362,   363,   364,
     365,   366,     0,   367,     0,     0,     0,     0,     0,     0,
       0,   368,     0,   301,     0,     0,    12,     0,     0,     0,
      13,     0,     0,   303,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,     0,    14,   369,   485,     0,
       0,     0,    15,     0,   397,     0,     0,     0,     0,     0,
       0,   301,   306,     0,     0,   370,     0,   371,   372,   307,
     308,   303,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,     0,     0,     0,     0,   374,     0,   375,
       0,  -333,   397,     0,     0,    16,    17,    18,     0,   376,
     306,     0,   309,   310,   311,   312,   313,   307,   308,   314,
     315,     0,   316,   317,   318,   319,   320,   321,     0,   322,
     306,     0,     0,     0,     0,     0,     0,   307,  -333,     0,
       0,     0,     0,   377,     0,     0,     0,     0,   306,     0,
     309,   310,   311,   312,   313,   307,     0,   314,   315,     0,
     316,   317,   318,   319,   320,   321,     0,   322,     0,     0,
    -333,  -333,  -333,   312,   313,     0,     0,   314,   315,     0,
     316,   317,   318,   319,   320,   321,     0,   322,     0,     0,
       0,  -333,  -333,     0,     0,  -333,  -333,     0,   316,   317,
     318,   319,   320,   321,     0,   322,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196
};

static const yytype_int16 yycheck[] =
{
     145,    54,     2,   203,   170,     5,    57,    58,    59,   107,
      10,   177,    12,   211,     3,   213,    96,    97,    98,    97,
      98,    81,     3,     3,     3,    51,    58,     3,    12,    84,
     151,   176,     6,   178,   179,   294,   112,   358,     6,   115,
       4,     5,     6,    17,   115,    95,    19,    12,    48,     3,
      50,   182,    95,     3,   117,   102,     9,    78,    95,   380,
      60,   117,   506,     9,   190,   210,   192,   147,   579,   147,
     215,   134,    37,    27,   326,    63,   189,    26,   134,     3,
     332,   194,   282,   130,   127,    85,    86,    60,   599,    54,
      25,     3,    45,    93,   292,   240,   149,    55,   135,    45,
     100,   101,   300,   547,    95,   303,     3,    61,     3,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   184,    89,   385,   248,   191,    82,
     451,    77,    67,   138,   122,   191,    82,    72,   103,   194,
      27,   105,   287,   288,    79,    80,   156,   190,   136,   408,
     471,   127,   173,   298,   299,   286,    81,   191,   190,   117,
     194,    96,   215,   160,   161,   100,   101,   117,   194,     3,
       4,     5,     6,    55,    61,   163,   134,   127,     3,     4,
       5,     6,   258,   188,   134,   105,    25,   258,   152,   153,
     154,    73,    58,   167,   183,   138,   170,   194,    64,   167,
     345,   201,   170,   123,   183,   350,   351,   191,   406,   190,
     190,   257,    46,    47,    48,   336,   262,    71,   105,    71,
      91,    46,    47,    48,   322,   117,    99,    81,    67,    81,
     489,   195,   285,    72,   434,   127,   123,   168,   169,   132,
      79,    80,   134,   186,    83,   188,   117,   118,   393,   394,
      93,     0,    86,   574,   138,    89,   117,    96,   112,   194,
     112,    86,   101,   134,    89,   113,   326,   160,   161,   117,
     113,   105,   332,   134,   168,   169,   119,   536,   329,   359,
     105,   359,   116,   110,    17,    18,   134,   485,   113,   123,
     117,   550,   191,   191,   133,   194,   194,   193,   123,   183,
     184,   185,   186,   137,   188,   114,    93,   134,     3,     4,
       5,     6,   137,   117,     3,   119,   192,   110,   152,   153,
     154,   487,    25,   323,   117,   190,   113,   152,   153,   154,
     134,   476,   119,   478,   479,     3,     4,     5,     6,   159,
     160,   134,   117,   396,   119,    46,    47,   191,   182,   183,
     194,    46,    47,    48,    95,   408,   190,   182,   183,   134,
     129,   195,     3,    58,    67,   190,   129,   125,   191,    72,
     195,   194,   191,   135,   127,   194,    79,    80,    46,    47,
      48,   140,   141,   142,   143,   144,   145,   194,   533,   191,
      98,    86,   194,    96,    89,   126,   191,   100,   101,   194,
     191,   191,   191,   194,   194,   194,     3,     4,     5,     6,
     105,   191,   191,     3,   194,   194,     4,   123,    86,     3,
      84,    89,   164,   165,   166,    94,   190,     3,   123,    46,
       3,     4,     5,     6,   191,   191,   489,   105,     4,   584,
       3,   586,   137,   190,   190,     6,   116,    12,   128,    46,
      47,    48,     4,     4,   191,   123,   194,   152,   153,   154,
      46,   133,     3,    92,     7,   114,   171,    77,     3,   137,
     120,     3,    15,   127,    47,    48,   114,   190,   190,    22,
     190,    17,    39,    26,   152,   153,   154,   182,   183,    86,
     188,   194,    89,    99,    37,   190,   190,    40,    41,    49,
     195,    95,   190,   194,   194,   190,    55,    94,   105,    52,
      53,   122,   190,    86,   182,   183,    89,   190,    54,    58,
      63,     3,   190,    66,   191,   190,   123,   195,   190,     3,
     163,   122,   105,   190,   190,   190,    95,   190,   190,   190,
     137,   105,    78,   191,   102,    88,   117,   190,   188,    92,
     123,   106,   189,     3,    70,   152,   153,   154,   194,    63,
     162,     6,     6,     6,   137,   108,   102,     6,     6,   122,
     191,   114,   105,   191,   128,   191,   100,    79,    79,   152,
     153,   154,    79,   100,     3,   182,   183,   123,   128,     6,
     191,   191,   191,   190,   130,   131,   191,   190,   195,   191,
      70,   190,   138,   139,   117,   334,   191,   330,   191,   182,
     183,   191,    24,   192,   157,   158,   159,   190,     0,   191,
     477,   382,   195,   469,   144,     7,   241,   345,   289,   338,
     543,   594,   542,    15,   256,   171,   172,   173,   174,   175,
      22,   283,   178,   179,    26,   181,   182,   183,   184,   185,
     186,   514,   188,   349,   268,    37,   104,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    11,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    24,    -1,    66,    -1,    -1,    29,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    54,    -1,    -1,    88,    -1,    -1,    -1,
      92,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,   108,    69,   117,    -1,
      -1,    -1,   114,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    54,   131,    -1,    -1,    87,    -1,    89,    90,   138,
     139,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,   102,   123,    -1,    -1,   157,   158,   159,    -1,   121,
     131,    -1,   171,   172,   173,   174,   175,   138,   139,   178,
     179,    -1,   181,   182,   183,   184,   185,   186,    -1,   188,
     131,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   131,    -1,
     171,   172,   173,   174,   175,   138,    -1,   178,   179,    -1,
     181,   182,   183,   184,   185,   186,    -1,   188,    -1,    -1,
     171,   172,   173,   174,   175,    -1,    -1,   178,   179,    -1,
     181,   182,   183,   184,   185,   186,    -1,   188,    -1,    -1,
      -1,   174,   175,    -1,    -1,   178,   179,    -1,   181,   182,
     183,   184,   185,   186,    -1,   188,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    37,    40,    41,    52,    53,
      63,    66,    88,    92,   108,   114,   157,   158,   159,   197,
     198,   199,   200,   204,   206,   208,   209,   213,   214,   215,
     227,   229,   232,   233,   234,   236,   239,   317,   318,    26,
       3,   306,     3,     3,   306,    71,    81,   112,    95,    95,
      99,   305,   306,    81,   190,   242,   306,    71,    81,   112,
      19,    60,     3,   319,   320,   156,   205,   205,   205,     0,
     193,   324,   114,   201,   201,    58,   242,   243,   247,     3,
     192,   190,    95,   129,   216,   216,   216,   306,     3,   210,
     306,   125,   129,   228,   242,   243,   135,    95,   135,   228,
     228,   228,   306,   127,   194,   199,    98,   126,   259,     9,
      45,    82,   244,   245,    77,   244,   255,     3,     4,     5,
       6,    89,   105,   152,   153,   154,   195,   262,   263,   291,
     292,   293,   294,   295,   296,   297,   298,   299,     4,   207,
     123,     3,   307,   306,   306,    84,   252,    94,   190,   235,
       3,   237,   238,    46,   306,   191,   191,   211,   292,   211,
     211,     3,   306,   306,   242,   320,   190,   295,    12,   248,
     240,   241,   242,   247,   116,   246,   128,   240,    55,    73,
     260,     4,     4,   191,   194,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   284,   285,   286,
      46,   133,    95,   127,   190,   235,     3,    46,    47,    48,
      86,   123,   137,   182,   183,   190,   265,   266,   267,   268,
     269,   270,   271,   272,   277,   279,   280,   281,   282,   283,
     287,   288,   289,   290,   291,   211,     3,   325,    64,   243,
     171,   194,   252,    92,   230,   231,   114,   212,   212,   212,
       3,   202,   203,   249,   261,   264,   265,   255,   244,   256,
     257,   265,   255,   265,   116,   265,   120,   312,   313,   314,
     284,   291,   306,     3,   239,     3,    27,    61,   217,   218,
     219,   226,   127,   190,   192,   190,   190,   190,   113,   265,
     278,    46,   123,   266,   188,   266,   243,   265,   117,   134,
      17,    54,    78,   102,   123,   130,   131,   138,   139,   171,
     172,   173,   174,   175,   178,   179,   181,   182,   183,   184,
     185,   186,   188,    99,   191,   194,   190,   265,   238,    39,
      49,   252,   190,   191,   194,    95,   250,   251,   194,     3,
     127,   310,   311,   260,   240,   194,    91,   118,   258,   260,
      55,    55,    63,   122,   136,   163,   315,   314,   190,    94,
      11,    24,    29,    30,    31,    32,    33,    35,    43,    69,
      87,    89,    90,   104,   109,   111,   121,   155,   220,   122,
     190,   191,   194,   239,   191,   248,     3,   183,   243,   284,
     265,   265,   278,    93,   113,   119,   190,   123,   261,   191,
     191,   265,   265,   266,   190,   266,   102,   130,   190,   105,
     123,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   295,   306,     3,   263,
     228,   210,   263,   203,   190,   300,   301,   302,   303,   304,
     306,   321,   252,   264,     3,   257,   312,   265,   265,   163,
     122,   132,   160,   161,   316,   325,   211,   190,   190,   222,
     190,   190,   190,   221,    27,    61,   105,   123,   223,   224,
     225,   190,   325,   218,   261,   191,    95,   127,   110,    93,
     119,   265,   265,   243,   189,   117,   106,   273,   266,   190,
     243,   261,   105,   189,   191,     3,   191,   239,    25,    67,
      72,    79,    80,    96,   101,   322,   194,   127,   308,   309,
     310,    70,   253,    63,   325,   162,   191,     6,     6,     6,
       6,     6,   122,   105,   225,   325,   191,   191,   265,   220,
     265,   265,   119,   110,   191,   266,   128,   255,   243,   261,
     191,   191,   191,   100,    79,    79,    79,   100,   301,     3,
     128,   316,   191,   191,   194,   191,   191,   191,   191,   191,
     191,   119,   265,   261,   164,   165,   166,   274,   275,   191,
     191,   309,   302,   301,   190,   261,     6,   191,     6,    17,
     167,   170,   276,    83,   133,   325,    51,   254,   191,   168,
     169,   276,   168,   169,   190,   265,   323,   191,   265,   117,
       3,   290,   276,   191
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   196,   197,   198,   198,   199,   199,   199,   199,   199,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   204,   205,
     205,   206,   207,   208,   208,   209,   209,   210,   211,   212,
     212,   213,   213,   214,   214,   214,   215,   215,   215,   215,
     215,   216,   216,   217,   217,   218,   218,   219,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   221,   221,   222,   222,
     222,   223,   223,   224,   224,   225,   225,   225,   225,   226,
     226,   227,   227,   227,   227,   228,   228,   229,   230,   231,
     232,   233,   234,   234,   235,   235,   236,   237,   237,   238,
     239,   239,   239,   240,   240,   241,   241,   242,   242,   243,
     243,   244,   245,   245,   245,   246,   246,   247,   248,   248,
     249,   250,   250,   251,   252,   252,   253,   253,   254,   254,
     255,   255,   256,   256,   257,   258,   258,   258,   259,   259,
     260,   260,   260,   260,   260,   260,   261,   261,   262,   262,
     263,   263,   264,   265,   265,   265,   265,   265,   265,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     267,   267,   268,   268,   268,   268,   268,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   270,   270,
     271,   271,   271,   271,   272,   273,   273,   274,   274,   274,
     275,   275,   275,   276,   276,   276,   276,   276,   277,   277,
     277,   277,   278,   278,   279,   279,   280,   280,   280,   280,
     280,   280,   280,   281,   281,   282,   283,   284,   284,   284,
     284,   284,   284,   285,   285,   285,   285,   285,   285,   286,
     286,   287,   288,   289,   290,   290,   290,   290,   291,   291,
     291,   291,   291,   291,   291,   292,   293,   293,   294,   294,
     295,   296,   297,   298,   298,   298,   299,   300,   300,   301,
     301,   302,   302,   303,   303,   304,   305,   306,   306,   307,
     307,   308,   308,   309,   309,   310,   310,   311,   311,   312,
     312,   313,   313,   314,   314,   315,   315,   315,   315,   316,
     316,   316,   317,   317,   318,   319,   319,   320,   321,   321,
     321,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   323,   324,   324,   325,   325
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
       1,     1,     1,     2,     2,     2,     2,     1,     4,     6,
       3,     5,     4,     5,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     6,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     2,     1,     1,     3,     1,
       1,     1,     4,     1,     3,     2,     1,     1,     3,     1,
       0,     1,     5,     1,     0,     2,     1,     1,     0,     1,
       0,     1,     2,     3,     5,     1,     3,     1,     2,     2,
       1,     0,     1,     0,     2,     1,     3,     3,     4,     6,
       8,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       0,     1,     1,     0,     1,     3
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
#line 2066 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2072 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 167 "bison_parser.y"
                { }
#line 2078 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 167 "bison_parser.y"
                { }
#line 2084 "bison_parser.cpp"
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
#line 2097 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2103 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2109 "bison_parser.cpp"
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
#line 2122 "bison_parser.cpp"
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
#line 2135 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2141 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2147 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2153 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2159 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2165 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2171 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 167 "bison_parser.y"
                { }
#line 2177 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2183 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 167 "bison_parser.y"
                { }
#line 2189 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2195 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2201 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2207 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 167 "bison_parser.y"
                { }
#line 2213 "bison_parser.cpp"
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
#line 2226 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2232 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2238 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 167 "bison_parser.y"
                { }
#line 2244 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 167 "bison_parser.y"
                { }
#line 2250 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2256 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 167 "bison_parser.y"
                { }
#line 2262 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 167 "bison_parser.y"
                { }
#line 2268 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 167 "bison_parser.y"
                { }
#line 2274 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2280 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2286 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 167 "bison_parser.y"
                { }
#line 2292 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2298 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2304 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2310 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2316 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2322 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2328 "bison_parser.cpp"
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
#line 2341 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2347 "bison_parser.cpp"
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
#line 2360 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2366 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2372 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2378 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2384 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2390 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2396 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2402 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2408 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 167 "bison_parser.y"
                { }
#line 2414 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2420 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 167 "bison_parser.y"
                { }
#line 2426 "bison_parser.cpp"
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
#line 2439 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2445 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2451 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2457 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2463 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2469 "bison_parser.cpp"
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
#line 2482 "bison_parser.cpp"
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
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2501 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 167 "bison_parser.y"
                { }
#line 2507 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2513 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2519 "bison_parser.cpp"
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
#line 2532 "bison_parser.cpp"
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
#line 2545 "bison_parser.cpp"
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
#line 2558 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2564 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2570 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2576 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2582 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2588 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2594 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2600 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2606 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_expr: /* window_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2612 "bison_parser.cpp"
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
#line 2625 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).frame_description)); }
#line 2631 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 167 "bison_parser.y"
                { }
#line 2637 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).frame_bound)); }
#line 2643 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2649 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2655 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2661 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2667 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2673 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2679 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2685 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 167 "bison_parser.y"
                { }
#line 2691 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 167 "bison_parser.y"
                { }
#line 2697 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 167 "bison_parser.y"
                { }
#line 2703 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2709 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2715 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2721 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2727 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2733 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2739 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2745 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2751 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2757 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2763 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2769 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2775 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2781 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2787 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2793 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2799 "bison_parser.cpp"
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
#line 2812 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2818 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2824 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 168 "bison_parser.y"
                {
      free( (((*yyvaluep).table_name).name) );
      free( (((*yyvaluep).table_name).schema) );
    }
#line 2833 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 180 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2839 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2845 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2851 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2857 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2863 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2869 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2875 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2881 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 167 "bison_parser.y"
                { }
#line 2887 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 167 "bison_parser.y"
                { }
#line 2893 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2899 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2905 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2911 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2917 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2923 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 167 "bison_parser.y"
                { }
#line 2929 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 189 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2935 "bison_parser.cpp"
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
#line 2948 "bison_parser.cpp"
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
#line 75 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3056 "bison_parser.cpp"

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
#line 320 "bison_parser.y"
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
#line 3285 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 339 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3296 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 345 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3307 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 352 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3316 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 356 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3325 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 360 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3331 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 361 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3337 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 362 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3343 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 364 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3349 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 365 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3355 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 366 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3361 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 367 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3367 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 368 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3373 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 369 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3379 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 370 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3385 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 371 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3391 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 372 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3397 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 373 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3403 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 379 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3409 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 380 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3415 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 382 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3424 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 386 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3433 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 391 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3442 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 395 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3452 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 405 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3458 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 406 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3464 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 407 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3470 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 415 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3480 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 423 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3489 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 427 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3499 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 438 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3510 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type opt_where  */
#line 444 "bison_parser.y"
                                                         {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
}
#line 3522 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 452 "bison_parser.y"
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
#line 3541 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 467 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3550 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 472 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3556 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 473 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3562 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 479 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3573 "bison_parser.cpp"
    break;

  case 42: /* export_statement: COPY select_with_paren TO file_path opt_file_type  */
#line 485 "bison_parser.y"
                                                    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
}
#line 3583 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW TABLES  */
#line 496 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3589 "bison_parser.cpp"
    break;

  case 44: /* show_statement: SHOW COLUMNS table_name  */
#line 497 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3599 "bison_parser.cpp"
    break;

  case 45: /* show_statement: DESCRIBE table_name  */
#line 502 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3609 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 513 "bison_parser.y"
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
#line 3627 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 526 "bison_parser.y"
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
#line 3644 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 538 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3656 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 545 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3668 "bison_parser.cpp"
    break;

  case 50: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 552 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3681 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: IF NOT EXISTS  */
#line 561 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3687 "bison_parser.cpp"
    break;

  case 52: /* opt_not_exists: %empty  */
#line 562 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3693 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem  */
#line 564 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3702 "bison_parser.cpp"
    break;

  case 54: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 568 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3711 "bison_parser.cpp"
    break;

  case 55: /* table_elem: column_def  */
#line 573 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3717 "bison_parser.cpp"
    break;

  case 56: /* table_elem: table_constraint  */
#line 574 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3723 "bison_parser.cpp"
    break;

  case 57: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 576 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3734 "bison_parser.cpp"
    break;

  case 58: /* column_type: BIGINT  */
#line 583 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3740 "bison_parser.cpp"
    break;

  case 59: /* column_type: BOOLEAN  */
#line 584 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3746 "bison_parser.cpp"
    break;

  case 60: /* column_type: CHAR '(' INTVAL ')'  */
#line 585 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3752 "bison_parser.cpp"
    break;

  case 61: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 586 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3758 "bison_parser.cpp"
    break;

  case 62: /* column_type: DATE  */
#line 587 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3764 "bison_parser.cpp"
    break;

  case 63: /* column_type: DATETIME  */
#line 588 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3770 "bison_parser.cpp"
    break;

  case 64: /* column_type: DECIMAL opt_decimal_specification  */
#line 589 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3779 "bison_parser.cpp"
    break;

  case 65: /* column_type: DOUBLE  */
#line 593 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3785 "bison_parser.cpp"
    break;

  case 66: /* column_type: FLOAT  */
#line 594 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3791 "bison_parser.cpp"
    break;

  case 67: /* column_type: INT  */
#line 595 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3797 "bison_parser.cpp"
    break;

  case 68: /* column_type: INTEGER  */
#line 596 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3803 "bison_parser.cpp"
    break;

  case 69: /* column_type: LONG  */
#line 597 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3809 "bison_parser.cpp"
    break;

  case 70: /* column_type: REAL  */
#line 598 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3815 "bison_parser.cpp"
    break;

  case 71: /* column_type: SMALLINT  */
#line 599 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3821 "bison_parser.cpp"
    break;

  case 72: /* column_type: TEXT  */
#line 600 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3827 "bison_parser.cpp"
    break;

  case 73: /* column_type: TIME opt_time_precision  */
#line 601 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3833 "bison_parser.cpp"
    break;

  case 74: /* column_type: TIMESTAMP  */
#line 602 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3839 "bison_parser.cpp"
    break;

  case 75: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 603 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3845 "bison_parser.cpp"
    break;

  case 76: /* opt_time_precision: '(' INTVAL ')'  */
#line 605 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3851 "bison_parser.cpp"
    break;

  case 77: /* opt_time_precision: %empty  */
#line 606 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3857 "bison_parser.cpp"
    break;

  case 78: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 608 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3863 "bison_parser.cpp"
    break;

  case 79: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 609 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3869 "bison_parser.cpp"
    break;

  case 80: /* opt_decimal_specification: %empty  */
#line 610 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3875 "bison_parser.cpp"
    break;

  case 81: /* opt_column_constraints: column_constraint_set  */
#line 612 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 3881 "bison_parser.cpp"
    break;

  case 82: /* opt_column_constraints: %empty  */
#line 613 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 3887 "bison_parser.cpp"
    break;

  case 83: /* column_constraint_set: column_constraint  */
#line 615 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 3896 "bison_parser.cpp"
    break;

  case 84: /* column_constraint_set: column_constraint_set column_constraint  */
#line 619 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 3905 "bison_parser.cpp"
    break;

  case 85: /* column_constraint: PRIMARY KEY  */
#line 624 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3911 "bison_parser.cpp"
    break;

  case 86: /* column_constraint: UNIQUE  */
#line 625 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3917 "bison_parser.cpp"
    break;

  case 87: /* column_constraint: NULL  */
#line 626 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3923 "bison_parser.cpp"
    break;

  case 88: /* column_constraint: NOT NULL  */
#line 627 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3929 "bison_parser.cpp"
    break;

  case 89: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 629 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3935 "bison_parser.cpp"
    break;

  case 90: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 630 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3941 "bison_parser.cpp"
    break;

  case 91: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 638 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3952 "bison_parser.cpp"
    break;

  case 92: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 644 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3963 "bison_parser.cpp"
    break;

  case 93: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 650 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3973 "bison_parser.cpp"
    break;

  case 94: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 656 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3983 "bison_parser.cpp"
    break;

  case 95: /* opt_exists: IF EXISTS  */
#line 662 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3989 "bison_parser.cpp"
    break;

  case 96: /* opt_exists: %empty  */
#line 663 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3995 "bison_parser.cpp"
    break;

  case 97: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 670 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4005 "bison_parser.cpp"
    break;

  case 98: /* alter_action: drop_action  */
#line 676 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4011 "bison_parser.cpp"
    break;

  case 99: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 678 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4020 "bison_parser.cpp"
    break;

  case 100: /* delete_statement: DELETE FROM table_name opt_where  */
#line 688 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4031 "bison_parser.cpp"
    break;

  case 101: /* truncate_statement: TRUNCATE table_name  */
#line 695 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4041 "bison_parser.cpp"
    break;

  case 102: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 706 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4053 "bison_parser.cpp"
    break;

  case 103: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 713 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4065 "bison_parser.cpp"
    break;

  case 104: /* opt_column_list: '(' ident_commalist ')'  */
#line 721 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4071 "bison_parser.cpp"
    break;

  case 105: /* opt_column_list: %empty  */
#line 722 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4077 "bison_parser.cpp"
    break;

  case 106: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 729 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4088 "bison_parser.cpp"
    break;

  case 107: /* update_clause_commalist: update_clause  */
#line 736 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4097 "bison_parser.cpp"
    break;

  case 108: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 740 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4106 "bison_parser.cpp"
    break;

  case 109: /* update_clause: IDENTIFIER '=' expr  */
#line 745 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4116 "bison_parser.cpp"
    break;

  case 110: /* select_statement: opt_with_clause select_with_paren  */
#line 755 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4125 "bison_parser.cpp"
    break;

  case 111: /* select_statement: opt_with_clause select_no_paren  */
#line 759 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4134 "bison_parser.cpp"
    break;

  case 112: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 763 "bison_parser.y"
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
#line 4150 "bison_parser.cpp"
    break;

  case 115: /* select_within_set_operation_no_parentheses: select_clause  */
#line 777 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4156 "bison_parser.cpp"
    break;

  case 116: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 778 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4169 "bison_parser.cpp"
    break;

  case 117: /* select_with_paren: '(' select_no_paren ')'  */
#line 787 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4175 "bison_parser.cpp"
    break;

  case 118: /* select_with_paren: '(' select_with_paren ')'  */
#line 788 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4181 "bison_parser.cpp"
    break;

  case 119: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 790 "bison_parser.y"
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
#line 4200 "bison_parser.cpp"
    break;

  case 120: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 804 "bison_parser.y"
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
#line 4216 "bison_parser.cpp"
    break;

  case 121: /* set_operator: set_type opt_all  */
#line 816 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4225 "bison_parser.cpp"
    break;

  case 122: /* set_type: UNION  */
#line 821 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4234 "bison_parser.cpp"
    break;

  case 123: /* set_type: INTERSECT  */
#line 825 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4243 "bison_parser.cpp"
    break;

  case 124: /* set_type: EXCEPT  */
#line 829 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4252 "bison_parser.cpp"
    break;

  case 125: /* opt_all: ALL  */
#line 834 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4258 "bison_parser.cpp"
    break;

  case 126: /* opt_all: %empty  */
#line 835 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4264 "bison_parser.cpp"
    break;

  case 127: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 837 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4278 "bison_parser.cpp"
    break;

  case 128: /* opt_distinct: DISTINCT  */
#line 847 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4284 "bison_parser.cpp"
    break;

  case 129: /* opt_distinct: %empty  */
#line 848 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4290 "bison_parser.cpp"
    break;

  case 131: /* opt_from_clause: from_clause  */
#line 852 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4296 "bison_parser.cpp"
    break;

  case 132: /* opt_from_clause: %empty  */
#line 853 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4302 "bison_parser.cpp"
    break;

  case 133: /* from_clause: FROM table_ref  */
#line 855 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4308 "bison_parser.cpp"
    break;

  case 134: /* opt_where: WHERE expr  */
#line 857 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4314 "bison_parser.cpp"
    break;

  case 135: /* opt_where: %empty  */
#line 858 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4320 "bison_parser.cpp"
    break;

  case 136: /* opt_group: GROUP BY expr_list opt_having  */
#line 860 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4330 "bison_parser.cpp"
    break;

  case 137: /* opt_group: %empty  */
#line 865 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4336 "bison_parser.cpp"
    break;

  case 138: /* opt_having: HAVING expr  */
#line 867 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4342 "bison_parser.cpp"
    break;

  case 139: /* opt_having: %empty  */
#line 868 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4348 "bison_parser.cpp"
    break;

  case 140: /* opt_order: ORDER BY order_list  */
#line 870 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4354 "bison_parser.cpp"
    break;

  case 141: /* opt_order: %empty  */
#line 871 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4360 "bison_parser.cpp"
    break;

  case 142: /* order_list: order_desc  */
#line 873 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4369 "bison_parser.cpp"
    break;

  case 143: /* order_list: order_list ',' order_desc  */
#line 877 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4378 "bison_parser.cpp"
    break;

  case 144: /* order_desc: expr opt_order_type  */
#line 882 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4384 "bison_parser.cpp"
    break;

  case 145: /* opt_order_type: ASC  */
#line 884 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4390 "bison_parser.cpp"
    break;

  case 146: /* opt_order_type: DESC  */
#line 885 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4396 "bison_parser.cpp"
    break;

  case 147: /* opt_order_type: %empty  */
#line 886 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4402 "bison_parser.cpp"
    break;

  case 148: /* opt_top: TOP int_literal  */
#line 890 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4408 "bison_parser.cpp"
    break;

  case 149: /* opt_top: %empty  */
#line 891 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4414 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: LIMIT expr  */
#line 893 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4420 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: OFFSET expr  */
#line 894 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4426 "bison_parser.cpp"
    break;

  case 152: /* opt_limit: LIMIT expr OFFSET expr  */
#line 895 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4432 "bison_parser.cpp"
    break;

  case 153: /* opt_limit: LIMIT ALL  */
#line 896 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4438 "bison_parser.cpp"
    break;

  case 154: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 897 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4444 "bison_parser.cpp"
    break;

  case 155: /* opt_limit: %empty  */
#line 898 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4450 "bison_parser.cpp"
    break;

  case 156: /* expr_list: expr_alias  */
#line 903 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4459 "bison_parser.cpp"
    break;

  case 157: /* expr_list: expr_list ',' expr_alias  */
#line 907 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4468 "bison_parser.cpp"
    break;

  case 158: /* opt_literal_list: literal_list  */
#line 912 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4474 "bison_parser.cpp"
    break;

  case 159: /* opt_literal_list: %empty  */
#line 913 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4480 "bison_parser.cpp"
    break;

  case 160: /* literal_list: literal  */
#line 915 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4489 "bison_parser.cpp"
    break;

  case 161: /* literal_list: literal_list ',' literal  */
#line 919 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4498 "bison_parser.cpp"
    break;

  case 162: /* expr_alias: expr opt_alias  */
#line 924 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4510 "bison_parser.cpp"
    break;

  case 169: /* operand: '(' expr ')'  */
#line 934 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4516 "bison_parser.cpp"
    break;

  case 179: /* operand: '(' select_no_paren ')'  */
#line 936 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4524 "bison_parser.cpp"
    break;

  case 182: /* unary_expr: '-' operand  */
#line 942 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4530 "bison_parser.cpp"
    break;

  case 183: /* unary_expr: NOT operand  */
#line 943 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4536 "bison_parser.cpp"
    break;

  case 184: /* unary_expr: operand ISNULL  */
#line 944 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4542 "bison_parser.cpp"
    break;

  case 185: /* unary_expr: operand IS NULL  */
#line 945 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4548 "bison_parser.cpp"
    break;

  case 186: /* unary_expr: operand IS NOT NULL  */
#line 946 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4554 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '-' operand  */
#line 948 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4560 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand '+' operand  */
#line 949 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4566 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand '/' operand  */
#line 950 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4572 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand '*' operand  */
#line 951 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4578 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand '%' operand  */
#line 952 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4584 "bison_parser.cpp"
    break;

  case 193: /* binary_expr: operand '^' operand  */
#line 953 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4590 "bison_parser.cpp"
    break;

  case 194: /* binary_expr: operand LIKE operand  */
#line 954 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4596 "bison_parser.cpp"
    break;

  case 195: /* binary_expr: operand NOT LIKE operand  */
#line 955 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4602 "bison_parser.cpp"
    break;

  case 196: /* binary_expr: operand ILIKE operand  */
#line 956 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4608 "bison_parser.cpp"
    break;

  case 197: /* binary_expr: operand CONCAT operand  */
#line 957 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4614 "bison_parser.cpp"
    break;

  case 198: /* logic_expr: expr AND expr  */
#line 959 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4620 "bison_parser.cpp"
    break;

  case 199: /* logic_expr: expr OR expr  */
#line 960 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4626 "bison_parser.cpp"
    break;

  case 200: /* in_expr: operand IN '(' expr_list ')'  */
#line 962 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4632 "bison_parser.cpp"
    break;

  case 201: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 963 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4638 "bison_parser.cpp"
    break;

  case 202: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 964 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4644 "bison_parser.cpp"
    break;

  case 203: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 965 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4650 "bison_parser.cpp"
    break;

  case 204: /* window_expr: operand OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 969 "bison_parser.y"
                                                                            { (yyval.expr) = Expr::makeWindow((yyvsp[-6].expr), (yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4656 "bison_parser.cpp"
    break;

  case 205: /* opt_partition: PARTITION BY expr_list  */
#line 971 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4662 "bison_parser.cpp"
    break;

  case 206: /* opt_partition: %empty  */
#line 972 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4668 "bison_parser.cpp"
    break;

  case 207: /* opt_frame_clause: frame_type frame_bound  */
#line 974 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), nullptr}; }
#line 4674 "bison_parser.cpp"
    break;

  case 208: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 975 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 4680 "bison_parser.cpp"
    break;

  case 209: /* opt_frame_clause: %empty  */
#line 976 "bison_parser.y"
              { (yyval.frame_description) = nullptr; }
#line 4686 "bison_parser.cpp"
    break;

  case 210: /* frame_type: RANGE  */
#line 978 "bison_parser.y"
                   { (yyval.frame_type) = FrameType::kRange; }
#line 4692 "bison_parser.cpp"
    break;

  case 211: /* frame_type: ROWS  */
#line 979 "bison_parser.y"
       { (yyval.frame_type) = FrameType::kRows; }
#line 4698 "bison_parser.cpp"
    break;

  case 212: /* frame_type: GROUPS  */
#line 980 "bison_parser.y"
         { (yyval.frame_type) = FrameType::kGroups; }
#line 4704 "bison_parser.cpp"
    break;

  case 213: /* frame_bound: UNBOUNDED PRECEDING  */
#line 982 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 4710 "bison_parser.cpp"
    break;

  case 214: /* frame_bound: INTVAL PRECEDING  */
#line 983 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 4716 "bison_parser.cpp"
    break;

  case 215: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 984 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 4722 "bison_parser.cpp"
    break;

  case 216: /* frame_bound: INTVAL FOLLOWING  */
#line 985 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 4728 "bison_parser.cpp"
    break;

  case 217: /* frame_bound: CURRENT_ROW  */
#line 986 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 4734 "bison_parser.cpp"
    break;

  case 218: /* case_expr: CASE expr case_list END  */
#line 990 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4740 "bison_parser.cpp"
    break;

  case 219: /* case_expr: CASE expr case_list ELSE expr END  */
#line 991 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4746 "bison_parser.cpp"
    break;

  case 220: /* case_expr: CASE case_list END  */
#line 992 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4752 "bison_parser.cpp"
    break;

  case 221: /* case_expr: CASE case_list ELSE expr END  */
#line 993 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4758 "bison_parser.cpp"
    break;

  case 222: /* case_list: WHEN expr THEN expr  */
#line 995 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4764 "bison_parser.cpp"
    break;

  case 223: /* case_list: case_list WHEN expr THEN expr  */
#line 996 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4770 "bison_parser.cpp"
    break;

  case 224: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 998 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4776 "bison_parser.cpp"
    break;

  case 225: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 999 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4782 "bison_parser.cpp"
    break;

  case 226: /* comp_expr: operand '=' operand  */
#line 1001 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4788 "bison_parser.cpp"
    break;

  case 227: /* comp_expr: operand EQUALS operand  */
#line 1002 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4794 "bison_parser.cpp"
    break;

  case 228: /* comp_expr: operand NOTEQUALS operand  */
#line 1003 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4800 "bison_parser.cpp"
    break;

  case 229: /* comp_expr: operand '<' operand  */
#line 1004 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4806 "bison_parser.cpp"
    break;

  case 230: /* comp_expr: operand '>' operand  */
#line 1005 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4812 "bison_parser.cpp"
    break;

  case 231: /* comp_expr: operand LESSEQ operand  */
#line 1006 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4818 "bison_parser.cpp"
    break;

  case 232: /* comp_expr: operand GREATEREQ operand  */
#line 1007 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4824 "bison_parser.cpp"
    break;

  case 233: /* function_expr: IDENTIFIER '(' ')'  */
#line 1009 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4830 "bison_parser.cpp"
    break;

  case 234: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1010 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4836 "bison_parser.cpp"
    break;

  case 235: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1012 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4842 "bison_parser.cpp"
    break;

  case 236: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1014 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4848 "bison_parser.cpp"
    break;

  case 237: /* datetime_field: SECOND  */
#line 1016 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4854 "bison_parser.cpp"
    break;

  case 238: /* datetime_field: MINUTE  */
#line 1017 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4860 "bison_parser.cpp"
    break;

  case 239: /* datetime_field: HOUR  */
#line 1018 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4866 "bison_parser.cpp"
    break;

  case 240: /* datetime_field: DAY  */
#line 1019 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4872 "bison_parser.cpp"
    break;

  case 241: /* datetime_field: MONTH  */
#line 1020 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4878 "bison_parser.cpp"
    break;

  case 242: /* datetime_field: YEAR  */
#line 1021 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4884 "bison_parser.cpp"
    break;

  case 243: /* datetime_field_plural: SECONDS  */
#line 1023 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4890 "bison_parser.cpp"
    break;

  case 244: /* datetime_field_plural: MINUTES  */
#line 1024 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4896 "bison_parser.cpp"
    break;

  case 245: /* datetime_field_plural: HOURS  */
#line 1025 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4902 "bison_parser.cpp"
    break;

  case 246: /* datetime_field_plural: DAYS  */
#line 1026 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4908 "bison_parser.cpp"
    break;

  case 247: /* datetime_field_plural: MONTHS  */
#line 1027 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4914 "bison_parser.cpp"
    break;

  case 248: /* datetime_field_plural: YEARS  */
#line 1028 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4920 "bison_parser.cpp"
    break;

  case 251: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1032 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4926 "bison_parser.cpp"
    break;

  case 252: /* array_index: operand '[' int_literal ']'  */
#line 1034 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4932 "bison_parser.cpp"
    break;

  case 253: /* between_expr: operand BETWEEN operand AND operand  */
#line 1036 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4938 "bison_parser.cpp"
    break;

  case 254: /* column_name: IDENTIFIER  */
#line 1038 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4944 "bison_parser.cpp"
    break;

  case 255: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1039 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4950 "bison_parser.cpp"
    break;

  case 256: /* column_name: '*'  */
#line 1040 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4956 "bison_parser.cpp"
    break;

  case 257: /* column_name: IDENTIFIER '.' '*'  */
#line 1041 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4962 "bison_parser.cpp"
    break;

  case 265: /* string_literal: STRING  */
#line 1045 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4968 "bison_parser.cpp"
    break;

  case 266: /* bool_literal: TRUE  */
#line 1047 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4974 "bison_parser.cpp"
    break;

  case 267: /* bool_literal: FALSE  */
#line 1048 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4980 "bison_parser.cpp"
    break;

  case 268: /* num_literal: FLOATVAL  */
#line 1050 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4986 "bison_parser.cpp"
    break;

  case 270: /* int_literal: INTVAL  */
#line 1053 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4992 "bison_parser.cpp"
    break;

  case 271: /* null_literal: NULL  */
#line 1055 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4998 "bison_parser.cpp"
    break;

  case 272: /* date_literal: DATE STRING  */
#line 1057 "bison_parser.y"
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
#line 5013 "bison_parser.cpp"
    break;

  case 273: /* interval_literal: int_literal duration_field  */
#line 1068 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 5022 "bison_parser.cpp"
    break;

  case 274: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1072 "bison_parser.y"
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
#line 5038 "bison_parser.cpp"
    break;

  case 275: /* interval_literal: INTERVAL STRING  */
#line 1083 "bison_parser.y"
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
#line 5074 "bison_parser.cpp"
    break;

  case 276: /* param_expr: '?'  */
#line 1115 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5084 "bison_parser.cpp"
    break;

  case 278: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1124 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5095 "bison_parser.cpp"
    break;

  case 282: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1133 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5106 "bison_parser.cpp"
    break;

  case 283: /* table_ref_commalist: table_ref_atomic  */
#line 1140 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5115 "bison_parser.cpp"
    break;

  case 284: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1144 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5124 "bison_parser.cpp"
    break;

  case 285: /* table_ref_name: table_name opt_table_alias  */
#line 1149 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5136 "bison_parser.cpp"
    break;

  case 286: /* table_ref_name_no_alias: table_name  */
#line 1157 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5146 "bison_parser.cpp"
    break;

  case 287: /* table_name: IDENTIFIER  */
#line 1163 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5155 "bison_parser.cpp"
    break;

  case 288: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1167 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5164 "bison_parser.cpp"
    break;

  case 289: /* opt_index_name: IDENTIFIER  */
#line 1172 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5170 "bison_parser.cpp"
    break;

  case 290: /* opt_index_name: %empty  */
#line 1173 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5176 "bison_parser.cpp"
    break;

  case 292: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1175 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5182 "bison_parser.cpp"
    break;

  case 294: /* opt_table_alias: %empty  */
#line 1177 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5188 "bison_parser.cpp"
    break;

  case 295: /* alias: AS IDENTIFIER  */
#line 1179 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5194 "bison_parser.cpp"
    break;

  case 296: /* alias: IDENTIFIER  */
#line 1180 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5200 "bison_parser.cpp"
    break;

  case 298: /* opt_alias: %empty  */
#line 1182 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5206 "bison_parser.cpp"
    break;

  case 299: /* opt_locking_clause: opt_locking_clause_list  */
#line 1188 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5212 "bison_parser.cpp"
    break;

  case 300: /* opt_locking_clause: %empty  */
#line 1189 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5218 "bison_parser.cpp"
    break;

  case 301: /* opt_locking_clause_list: locking_clause  */
#line 1191 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5227 "bison_parser.cpp"
    break;

  case 302: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1195 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5236 "bison_parser.cpp"
    break;

  case 303: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1200 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5247 "bison_parser.cpp"
    break;

  case 304: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1206 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5258 "bison_parser.cpp"
    break;

  case 305: /* row_lock_mode: UPDATE  */
#line 1213 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5264 "bison_parser.cpp"
    break;

  case 306: /* row_lock_mode: NO KEY UPDATE  */
#line 1214 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5270 "bison_parser.cpp"
    break;

  case 307: /* row_lock_mode: SHARE  */
#line 1215 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5276 "bison_parser.cpp"
    break;

  case 308: /* row_lock_mode: KEY SHARE  */
#line 1216 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5282 "bison_parser.cpp"
    break;

  case 309: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1218 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5288 "bison_parser.cpp"
    break;

  case 310: /* opt_row_lock_policy: NOWAIT  */
#line 1219 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5294 "bison_parser.cpp"
    break;

  case 311: /* opt_row_lock_policy: %empty  */
#line 1220 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5300 "bison_parser.cpp"
    break;

  case 313: /* opt_with_clause: %empty  */
#line 1226 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5306 "bison_parser.cpp"
    break;

  case 314: /* with_clause: WITH with_description_list  */
#line 1228 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5312 "bison_parser.cpp"
    break;

  case 315: /* with_description_list: with_description  */
#line 1230 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5321 "bison_parser.cpp"
    break;

  case 316: /* with_description_list: with_description_list ',' with_description  */
#line 1234 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5330 "bison_parser.cpp"
    break;

  case 317: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1239 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5340 "bison_parser.cpp"
    break;

  case 318: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1249 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5352 "bison_parser.cpp"
    break;

  case 319: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1256 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5365 "bison_parser.cpp"
    break;

  case 320: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1264 "bison_parser.y"
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
#line 5393 "bison_parser.cpp"
    break;

  case 321: /* opt_join_type: INNER  */
#line 1288 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5399 "bison_parser.cpp"
    break;

  case 322: /* opt_join_type: LEFT OUTER  */
#line 1289 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5405 "bison_parser.cpp"
    break;

  case 323: /* opt_join_type: LEFT  */
#line 1290 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5411 "bison_parser.cpp"
    break;

  case 324: /* opt_join_type: RIGHT OUTER  */
#line 1291 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5417 "bison_parser.cpp"
    break;

  case 325: /* opt_join_type: RIGHT  */
#line 1292 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5423 "bison_parser.cpp"
    break;

  case 326: /* opt_join_type: FULL OUTER  */
#line 1293 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5429 "bison_parser.cpp"
    break;

  case 327: /* opt_join_type: OUTER  */
#line 1294 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5435 "bison_parser.cpp"
    break;

  case 328: /* opt_join_type: FULL  */
#line 1295 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5441 "bison_parser.cpp"
    break;

  case 329: /* opt_join_type: CROSS  */
#line 1296 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5447 "bison_parser.cpp"
    break;

  case 330: /* opt_join_type: %empty  */
#line 1297 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5453 "bison_parser.cpp"
    break;

  case 334: /* ident_commalist: IDENTIFIER  */
#line 1308 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5462 "bison_parser.cpp"
    break;

  case 335: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1312 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5471 "bison_parser.cpp"
    break;


#line 5475 "bison_parser.cpp"

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

#line 1318 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
