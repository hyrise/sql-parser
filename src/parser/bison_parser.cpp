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

// clang-format on
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
  YYSYMBOL_case_expr = 272,                /* case_expr  */
  YYSYMBOL_case_list = 273,                /* case_list  */
  YYSYMBOL_exists_expr = 274,              /* exists_expr  */
  YYSYMBOL_comp_expr = 275,                /* comp_expr  */
  YYSYMBOL_function_expr = 276,            /* function_expr  */
  YYSYMBOL_opt_window = 277,               /* opt_window  */
  YYSYMBOL_opt_partition = 278,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 279,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 280,               /* frame_type  */
  YYSYMBOL_frame_bound = 281,              /* frame_bound  */
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
#define YYLAST   888

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
       0,   325,   325,   344,   350,   357,   361,   365,   366,   367,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     384,   385,   387,   391,   396,   400,   410,   411,   412,   414,
     414,   420,   426,   428,   432,   443,   449,   457,   472,   477,
     478,   484,   490,   501,   502,   507,   518,   531,   543,   550,
     557,   566,   567,   569,   573,   578,   579,   581,   588,   589,
     590,   591,   592,   593,   594,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   610,   611,   613,   614,
     615,   617,   618,   620,   624,   629,   630,   631,   632,   634,
     635,   643,   649,   655,   661,   667,   668,   675,   681,   683,
     693,   700,   711,   718,   726,   727,   734,   741,   745,   750,
     760,   764,   768,   780,   780,   782,   783,   792,   793,   795,
     809,   821,   826,   830,   834,   839,   840,   842,   852,   853,
     855,   857,   858,   860,   862,   863,   865,   870,   872,   873,
     875,   876,   878,   882,   887,   889,   890,   891,   895,   896,
     898,   899,   900,   901,   902,   903,   908,   912,   917,   918,
     920,   924,   929,   937,   937,   937,   937,   937,   939,   940,
     940,   940,   940,   940,   940,   940,   940,   941,   941,   945,
     945,   947,   948,   949,   950,   951,   953,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,   964,   965,   967,
     968,   969,   970,   974,   975,   976,   977,   979,   980,   982,
     983,   985,   986,   987,   988,   989,   990,   991,   995,   996,
    1000,  1001,  1003,  1004,  1009,  1010,  1011,  1015,  1016,  1017,
    1019,  1020,  1021,  1022,  1023,  1025,  1027,  1029,  1030,  1031,
    1032,  1033,  1034,  1036,  1037,  1038,  1039,  1040,  1041,  1043,
    1043,  1045,  1047,  1049,  1051,  1052,  1053,  1054,  1056,  1056,
    1056,  1056,  1056,  1056,  1056,  1058,  1060,  1061,  1063,  1064,
    1066,  1068,  1070,  1081,  1085,  1096,  1128,  1137,  1137,  1144,
    1144,  1146,  1146,  1153,  1157,  1162,  1170,  1176,  1180,  1185,
    1186,  1188,  1188,  1190,  1190,  1192,  1193,  1195,  1195,  1201,
    1202,  1204,  1208,  1213,  1219,  1226,  1227,  1228,  1229,  1231,
    1232,  1233,  1239,  1239,  1241,  1243,  1247,  1252,  1262,  1269,
    1277,  1286,  1287,  1288,  1289,  1290,  1291,  1292,  1293,  1294,
    1295,  1297,  1303,  1303,  1306,  1310
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
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "opt_window", "opt_partition", "opt_frame_clause",
  "frame_type", "frame_bound", "extract_expr", "cast_expr",
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

#define YYPACT_NINF (-526)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-333)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     598,    72,   146,   157,   180,   146,   123,   -42,    38,    54,
     146,    81,    19,   147,   138,   184,    17,    17,    17,   202,
      39,  -526,   172,  -526,   172,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,   -31,  -526,   258,
      90,  -526,    83,   195,  -526,   165,   165,   165,   146,   296,
     146,   176,  -526,   177,   -31,   190,   -49,   177,   177,   177,
     146,  -526,   210,   152,  -526,  -526,  -526,  -526,  -526,  -526,
     593,  -526,   252,  -526,  -526,   206,    20,  -526,    69,  -526,
     365,    85,   369,   251,   372,   146,   146,   302,  -526,   300,
     200,   401,   363,   146,   219,   225,   420,   420,   420,   436,
     146,   146,  -526,   266,   184,  -526,   267,   456,   430,  -526,
    -526,  -526,   -31,   347,   338,   -31,   130,  -526,  -526,  -526,
    -526,   471,  -526,   472,  -526,  -526,  -526,   286,   284,  -526,
    -526,  -526,  -526,   304,  -526,  -526,  -526,  -526,  -526,  -526,
     433,  -526,   348,   -48,   200,   306,  -526,   420,   479,    94,
     314,   -53,  -526,  -526,   391,  -526,  -526,   373,  -526,   373,
     373,  -526,  -526,  -526,  -526,  -526,   483,  -526,  -526,   306,
     415,  -526,  -526,    20,  -526,  -526,   306,   415,   306,   131,
     370,  -526,   329,  -526,    85,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,   146,   490,   380,    49,   376,  -105,   307,   309,   310,
     166,   375,   316,   379,  -526,   218,   110,   413,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,   406,  -526,   111,   317,  -526,   306,
     401,  -526,   467,  -526,  -526,   459,  -526,   302,  -526,   319,
     133,  -526,   416,   323,  -526,    48,   130,   -31,   324,  -526,
     -46,   130,   110,   455,   108,    18,  -526,   370,  -526,  -526,
    -526,   330,   419,  -526,   684,   392,   331,   140,  -526,  -526,
    -526,   380,     9,    27,   461,   329,   306,   306,    82,   -39,
     332,   379,   638,   306,   159,   333,   -76,   306,   306,   379,
    -526,   379,    89,   335,   135,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     456,   146,  -526,   520,    85,   110,  -526,   177,   296,  -526,
      85,  -526,   483,    21,   302,  -526,   306,  -526,   523,  -526,
    -526,  -526,  -526,   306,  -526,  -526,  -526,   370,   306,   306,
    -526,   367,   417,  -526,    73,  -526,   479,   420,  -526,  -526,
     345,  -526,   350,  -526,  -526,   351,  -526,  -526,   355,  -526,
    -526,  -526,  -526,   356,  -526,  -526,    43,   357,   479,  -526,
      49,  -526,   460,   306,  -526,  -526,   364,   453,   161,   -35,
     150,   306,   306,  -526,   461,   452,    78,  -526,  -526,  -526,
     439,   560,   676,   379,   374,   218,  -526,   454,   384,   676,
     676,   676,   676,   700,   700,   700,   700,   159,   159,     0,
       0,     0,   -82,   371,  -526,  -526,   168,   564,  -526,   169,
    -526,   380,  -526,   297,  -526,   381,  -526,    37,  -526,   493,
    -526,  -526,  -526,  -526,   110,   110,  -526,   505,   479,  -526,
     411,  -526,   197,  -526,   570,   571,  -526,   572,   573,   574,
    -526,   468,  -526,  -526,   476,  -526,    43,  -526,   479,   205,
    -526,   393,  -526,   211,  -526,   306,   684,   306,   306,  -526,
     174,   143,   398,  -526,   379,   676,   218,   418,   212,  -526,
    -526,  -526,  -526,  -526,   421,   482,  -526,  -526,  -526,   525,
     527,   528,   502,    21,   607,  -526,  -526,  -526,   488,  -526,
    -526,  -111,  -526,  -526,   426,   223,   427,   431,   432,  -526,
    -526,  -526,   224,  -526,   515,   460,    50,   434,   110,   181,
    -526,   306,  -526,   638,   435,   234,  -526,  -526,    37,    21,
    -526,  -526,  -526,    21,   340,   437,   306,  -526,  -526,  -526,
     605,  -526,  -526,  -526,  -526,   500,   415,  -526,  -526,  -526,
    -526,   110,  -526,  -526,  -526,  -526,   470,   479,   -18,   438,
     306,  -103,   441,   306,   243,   306,  -526,  -526,   323,  -526,
    -526,  -526,   445,    22,   479,   110,  -526,  -526,   110,  -526,
     148,    26,   170,  -526,  -526,   244,  -526,  -526,   524,  -526,
    -526,  -526,    26,  -526
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
       0,     0,     0,     0,   256,     0,   134,   163,   170,   171,
     172,   165,   167,   173,   166,   186,   174,   175,   176,   177,
     169,   164,   179,   180,     0,   334,     0,     0,   103,     0,
       0,   106,     0,    97,    98,     0,    42,   135,    41,    24,
       0,    22,   132,   130,   156,   298,   155,     0,   140,   142,
     147,   155,   151,   153,   150,     0,   119,   299,   301,   274,
     161,     0,     0,    48,     0,     0,     0,     0,    53,    55,
      56,   313,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   182,     0,   181,     0,     0,     0,     0,     0,
     183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,   109,   108,    96,     0,    36,
       0,    20,     0,     0,   135,   131,     0,   296,     0,   297,
     162,   112,   116,     0,   146,   145,   144,   300,     0,     0,
     305,     0,     0,   307,   311,   302,     0,     0,    74,    68,
       0,    70,    80,    71,    58,     0,    65,    66,     0,    62,
      63,    69,    72,    77,    67,    59,    82,     0,     0,    47,
       0,    50,   221,     0,   255,   257,     0,     0,     0,     0,
       0,     0,     0,   205,     0,     0,     0,   178,   168,   197,
     198,     0,   193,     0,     0,     0,   184,     0,   196,   195,
     211,   212,   213,   214,   215,   216,   217,   188,   187,   190,
     189,   191,   192,     0,    35,   335,     0,     0,    39,     0,
      23,   313,   133,   277,   279,     0,   281,   294,   280,   137,
     157,   295,   143,   120,   154,   152,   308,     0,     0,   310,
       0,   303,     0,    46,     0,     0,    64,     0,     0,     0,
      73,     0,    86,    87,     0,    57,    81,    83,     0,     0,
      54,     0,   218,     0,   209,     0,     0,     0,     0,   203,
       0,     0,     0,   251,     0,   194,     0,     0,     0,   185,
     252,   102,    99,    25,     0,     0,   329,   321,   327,   325,
     328,   323,     0,     0,     0,   293,   285,   291,     0,   127,
     306,   311,   309,    49,     0,     0,     0,     0,     0,    85,
      88,    84,     0,    90,   223,   221,     0,     0,   207,     0,
     206,     0,   210,   253,     0,     0,   201,   199,   294,     0,
     324,   326,   322,     0,   278,   295,     0,   304,    61,    79,
       0,    75,    60,    76,    89,     0,   141,   219,   235,   236,
     204,   208,   202,   200,   282,   318,   330,     0,   139,     0,
       0,   226,     0,     0,     0,     0,   136,    78,   222,   227,
     228,   229,     0,     0,     0,   331,   319,   292,   138,   220,
       0,     0,     0,   234,   224,     0,   233,   231,     0,   232,
     230,   320,     0,   225
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -526,  -526,  -526,   562,  -526,   613,  -526,   308,  -526,   312,
    -526,  -526,  -526,  -526,   315,   -87,   198,  -526,  -526,  -526,
     320,  -526,   262,  -526,   171,  -526,  -526,  -526,  -526,   178,
    -526,  -526,   -52,  -526,  -526,  -526,  -526,  -526,  -526,   504,
    -526,  -526,   409,  -185,   -89,  -526,    47,   -54,   -30,  -526,
    -526,   -77,   378,  -526,  -526,  -526,  -108,  -526,  -526,  -169,
    -526,   311,  -526,  -526,    31,  -289,  -526,   -68,   321,  -142,
    -188,  -526,  -526,  -526,  -526,  -526,  -526,   377,  -526,  -526,
    -526,   127,  -526,  -526,  -526,  -525,  -526,  -526,  -138,  -526,
    -526,  -526,  -526,  -526,  -526,   -79,   -83,  -526,  -526,   -91,
    -526,  -526,  -526,  -526,  -526,  -434,   114,  -526,  -526,  -526,
       7,  -526,  -526,   117,   403,  -526,   322,  -526,   396,  -526,
     155,  -526,  -526,  -526,   563,  -526,  -526,  -526,  -526,  -336
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   250,   251,    23,    66,
      24,   139,    25,    26,    89,   157,   246,    27,    28,    29,
      84,   277,   278,   279,   376,   460,   456,   465,   466,   467,
     280,    30,    93,    31,   243,   244,    32,    33,    34,   149,
      35,   151,   152,    36,   170,   171,   172,    77,   112,   113,
     175,    78,   169,   252,   334,   335,   146,   509,   576,   116,
     258,   259,   346,   108,   180,   253,   127,   128,   254,   255,
     217,   218,   219,   220,   221,   222,   223,   289,   224,   225,
     226,   472,   556,   582,   583,   594,   227,   228,   197,   198,
     199,   229,   230,   231,   232,   233,   130,   131,   132,   133,
     134,   135,   136,   137,   432,   433,   434,   435,   436,    51,
     437,   142,   505,   506,   507,   340,   266,   267,   268,   354,
     451,    37,    38,    63,    64,   438,   502,   586,    71,   236
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,   256,   129,   216,   396,    99,   100,   101,   261,    41,
     159,   160,    44,   158,   158,   158,   167,    52,   273,    56,
     452,   168,    40,   292,    40,   294,   177,    75,   590,   109,
     384,   145,   590,   575,   260,   173,   262,   264,   173,   591,
     337,   297,   469,   241,   269,   344,    97,   202,   115,   449,
     450,   337,   274,    48,   391,    87,   305,    90,   298,    55,
     234,   579,   580,   581,   158,   110,   598,   102,   288,   544,
     461,   297,   345,   296,   392,   477,   275,   603,   109,   203,
     393,   350,   297,   323,    76,   282,    98,   283,   298,   118,
     119,   120,   143,   144,   473,   238,   381,   325,    39,   298,
     154,    94,   111,   292,   462,   270,   320,   162,   163,   566,
     276,   401,   511,   402,   110,   398,   488,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   522,    49,   206,   118,   119,   120,   305,   329,
     351,   240,   204,   257,   388,   389,   114,   387,   463,    40,
     164,   111,    75,    50,   352,   399,   400,    60,   237,    54,
      42,   295,    53,   349,   504,   297,   464,   297,   342,   206,
     118,   119,   120,    65,   121,   338,   336,   207,   208,   209,
     173,   353,   298,    43,   298,   178,   319,    62,   320,   592,
     122,   403,   593,   592,    45,   287,   593,   535,    61,   297,
     382,   260,    69,   179,    46,   448,   444,   445,   271,    54,
     385,   431,   207,   208,   209,   485,   298,   210,    57,   404,
     121,   206,   118,   119,   120,   297,   439,   297,    58,   423,
     386,   574,    70,   449,   450,    47,   122,   123,   124,   125,
     406,   558,   298,   478,   298,   129,   494,   263,   595,   480,
     481,   129,   210,   531,   211,   121,   426,   568,   407,    59,
     297,    79,   429,   392,   207,   208,   209,   483,   212,   479,
     453,   122,   336,    81,   158,   427,    75,   298,   297,   287,
     126,   578,    80,   123,   124,   125,    72,   341,   476,   211,
      82,   297,   347,   530,    83,   298,   533,   305,   297,    88,
     560,    91,   322,   212,   210,   323,    92,   121,   298,   206,
     118,   119,   120,   213,   214,   298,   596,   597,   123,   124,
     125,   215,   495,   122,   331,    96,   126,   332,   424,    67,
      68,   379,   107,   526,   380,   528,   529,   103,   599,   600,
     482,   211,   316,   317,   318,   319,   104,   320,   213,   214,
     106,   487,   207,   208,   209,   212,   215,   247,   248,   491,
     493,   126,   184,   184,   496,   495,    85,    86,   117,   497,
     123,   124,   125,   138,   140,   141,   498,   499,   206,   118,
     119,   120,   206,   118,   119,   120,   145,   571,   513,   561,
     148,   323,   210,   500,   147,   121,   523,  -330,   501,   323,
     213,   214,   525,   537,   150,   336,   336,   496,   215,   153,
     155,   122,   497,   126,   549,   554,   156,   550,   323,   498,
     499,   290,   208,   209,   118,   563,   208,   209,   336,   211,
     299,   585,   534,   588,   587,   601,   500,   323,   323,   161,
    -330,   501,   168,   212,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,    54,   166,   123,   124,
     125,   210,   120,   174,   121,   210,   176,   300,   121,   185,
     186,   187,   188,   189,   190,   181,   182,   183,   184,   200,
     122,   201,   235,   242,   122,   239,   249,   245,   213,   214,
     265,  -283,   114,   272,    15,   495,   215,   284,   291,   285,
     286,   126,   291,   281,   293,   321,   327,   324,   328,   330,
     348,   333,   212,   357,   377,   301,   212,   336,   343,    75,
     356,   378,   394,   425,   397,   405,   441,   123,   124,   125,
     446,   123,   124,   125,  -284,   454,   302,   496,   471,   447,
     455,   457,   497,   303,   304,   458,   459,   468,   475,   498,
     499,   305,   306,   572,   403,   474,   297,   213,   214,   489,
     490,   213,   214,   508,   486,   215,   500,   492,   510,   215,
     126,   501,   320,   512,   126,   503,   514,   515,   516,   517,
     518,   520,   539,   524,   307,   308,   309,   310,   311,   532,
     519,   312,   313,  -332,   314,   315,   316,   317,   318,   319,
       1,   320,   543,   573,   540,     1,   541,   542,     2,   536,
     545,   569,   538,     2,   300,     3,   546,   548,   551,     4,
       3,   555,   552,   553,     4,   559,   562,   567,   570,   577,
       5,   584,   105,     6,     7,     5,   589,    74,     6,     7,
     430,   602,   470,   428,   521,     8,     9,   527,   205,   326,
       8,     9,   557,   565,   442,   564,    10,   440,   339,    11,
     383,    10,   301,   355,    11,   390,   547,   165,     0,   443,
       0,     0,     0,     0,     0,     0,     0,   484,     0,     0,
       0,    12,     0,   395,     0,    13,    12,     0,     0,     0,
      13,   304,   300,     0,     0,   358,     0,     0,   305,   306,
       0,    14,     0,     0,     0,     0,    14,    15,   359,     0,
       0,     0,    15,   360,   361,   362,   363,   364,     0,   365,
       0,     0,     0,     0,     0,     0,     0,   366,     0,     0,
     300,   307,   308,   309,   310,   311,     0,     0,   312,   313,
     301,   314,   315,   316,   317,   318,   319,     0,   320,     0,
      16,    17,    18,   367,   300,    16,    17,    18,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,   304,
       0,   368,     0,   369,   370,     0,   305,   306,  -333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,   372,     0,   373,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   374,     0,   304,     0,   307,
     308,   309,   310,   311,   305,  -333,   312,   313,     0,   314,
     315,   316,   317,   318,   319,     0,   320,     0,     0,     0,
       0,   304,     0,     0,     0,     0,     0,     0,   305,   375,
       0,     0,     0,     0,     0,     0,     0,  -333,  -333,  -333,
     310,   311,     0,     0,   312,   313,     0,   314,   315,   316,
     317,   318,   319,     0,   320,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -333,  -333,     0,     0,  -333,  -333,
       0,   314,   315,   316,   317,   318,   319,     0,   320
};

static const yytype_int16 yycheck[] =
{
      54,   170,    81,   145,   293,    57,    58,    59,   177,     2,
      97,    98,     5,    96,    97,    98,   107,    10,   203,    12,
     356,    12,     3,   211,     3,   213,   115,    58,     6,     9,
       3,    84,     6,    51,   176,   112,   178,   179,   115,    17,
       3,   117,   378,   151,   182,    91,    95,    95,    78,   160,
     161,     3,     3,    95,    93,    48,   138,    50,   134,    12,
     147,   164,   165,   166,   147,    45,   591,    60,   210,   503,
      27,   117,   118,   215,   113,   110,    27,   602,     9,   127,
     119,    63,   117,   194,    37,   190,   135,   192,   134,     4,
       5,     6,    85,    86,   383,   149,   281,   239,    26,   134,
      93,    54,    82,   291,    61,   184,   188,   100,   101,   543,
      61,   299,   448,   301,    45,   191,   405,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   468,    95,     3,     4,     5,     6,   138,   247,
     122,   194,   190,   173,   286,   287,    77,   285,   105,     3,
     103,    82,    58,    99,   136,   297,   298,    19,    64,   190,
       3,   215,    81,    55,   127,   117,   123,   117,   257,     3,
       4,     5,     6,   156,    89,   127,   194,    46,    47,    48,
     257,   163,   134,     3,   134,    55,   186,     3,   188,   167,
     105,   102,   170,   167,    71,   113,   170,   486,    60,   117,
     191,   343,     0,    73,    81,   132,   348,   349,   201,   190,
     183,   190,    46,    47,    48,   403,   134,    86,    71,   130,
      89,     3,     4,     5,     6,   117,   334,   117,    81,   320,
     284,   567,   193,   160,   161,   112,   105,   152,   153,   154,
     105,   191,   134,    93,   134,   324,   431,   116,   584,   391,
     392,   330,    86,   110,   123,    89,   324,   546,   123,   112,
     117,     3,   330,   113,    46,    47,    48,   189,   137,   119,
     357,   105,   194,   190,   357,   327,    58,   134,   117,   113,
     195,   570,   192,   152,   153,   154,   114,   256,   127,   123,
      95,   117,   261,   119,   129,   134,   484,   138,   117,     3,
     119,   125,   191,   137,    86,   194,   129,    89,   134,     3,
       4,     5,     6,   182,   183,   134,   168,   169,   152,   153,
     154,   190,    25,   105,   191,   135,   195,   194,   321,    17,
      18,   191,   126,   475,   194,   477,   478,   127,   168,   169,
     394,   123,   183,   184,   185,   186,   194,   188,   182,   183,
      98,   405,    46,    47,    48,   137,   190,   159,   160,   191,
     191,   195,   194,   194,    67,    25,    46,    47,     3,    72,
     152,   153,   154,     4,   123,     3,    79,    80,     3,     4,
       5,     6,     3,     4,     5,     6,    84,   556,   191,   531,
     190,   194,    86,    96,    94,    89,   191,   100,   101,   194,
     182,   183,   191,   191,     3,   194,   194,    67,   190,    46,
     191,   105,    72,   195,   191,   191,   191,   194,   194,    79,
      80,    46,    47,    48,     4,   191,    47,    48,   194,   123,
      17,   573,   486,   575,   191,   191,    96,   194,   194,     3,
     100,   101,    12,   137,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   190,   190,   152,   153,
     154,    86,     6,   116,    89,    86,   128,    54,    89,   140,
     141,   142,   143,   144,   145,     4,     4,   191,   194,    46,
     105,   133,     3,    92,   105,   171,     3,   114,   182,   183,
     120,   194,    77,     3,   114,    25,   190,   190,   123,   190,
     190,   195,   123,   127,   188,    99,    39,   190,    49,   190,
      55,    95,   137,    94,   122,   102,   137,   194,   194,    58,
     190,   190,   190,     3,   191,   190,     3,   152,   153,   154,
     163,   152,   153,   154,   194,   190,   123,    67,    78,   122,
     190,   190,    72,   130,   131,   190,   190,   190,    95,    79,
      80,   138,   139,    83,   102,   191,   117,   182,   183,   105,
     189,   182,   183,    70,   190,   190,    96,     3,    63,   190,
     195,   101,   188,   162,   195,   194,     6,     6,     6,     6,
       6,   105,   100,   190,   171,   172,   173,   174,   175,   191,
     122,   178,   179,     0,   181,   182,   183,   184,   185,   186,
       7,   188,   100,   133,    79,     7,    79,    79,    15,   191,
       3,     6,   191,    15,    54,    22,   128,   191,   191,    26,
      22,   106,   191,   191,    26,   191,   191,   190,   128,   191,
      37,   190,    70,    40,    41,    37,   191,    24,    40,    41,
     332,   117,   380,   328,   466,    52,    53,   476,   144,   240,
      52,    53,   525,   539,   343,   538,    63,   336,   255,    66,
     282,    63,   102,   267,    66,   288,   511,   104,    -1,   347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
      -1,    88,    -1,   123,    -1,    92,    88,    -1,    -1,    -1,
      92,   131,    54,    -1,    -1,    11,    -1,    -1,   138,   139,
      -1,   108,    -1,    -1,    -1,    -1,   108,   114,    24,    -1,
      -1,    -1,   114,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      54,   171,   172,   173,   174,   175,    -1,    -1,   178,   179,
     102,   181,   182,   183,   184,   185,   186,    -1,   188,    -1,
     157,   158,   159,    69,    54,   157,   158,   159,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    87,    -1,    89,    90,    -1,   138,   139,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,    -1,   131,    -1,   171,
     172,   173,   174,   175,   138,   139,   178,   179,    -1,   181,
     182,   183,   184,   185,   186,    -1,   188,    -1,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,   138,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,   172,   173,
     174,   175,    -1,    -1,   178,   179,    -1,   181,   182,   183,
     184,   185,   186,    -1,   188,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,   175,    -1,    -1,   178,   179,
      -1,   181,   182,   183,   184,   185,   186,    -1,   188
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
     269,   270,   271,   272,   274,   275,   276,   282,   283,   287,
     288,   289,   290,   291,   211,     3,   325,    64,   243,   171,
     194,   252,    92,   230,   231,   114,   212,   212,   212,     3,
     202,   203,   249,   261,   264,   265,   255,   244,   256,   257,
     265,   255,   265,   116,   265,   120,   312,   313,   314,   284,
     291,   306,     3,   239,     3,    27,    61,   217,   218,   219,
     226,   127,   190,   192,   190,   190,   190,   113,   265,   273,
      46,   123,   266,   188,   266,   243,   265,   117,   134,    17,
      54,   102,   123,   130,   131,   138,   139,   171,   172,   173,
     174,   175,   178,   179,   181,   182,   183,   184,   185,   186,
     188,    99,   191,   194,   190,   265,   238,    39,    49,   252,
     190,   191,   194,    95,   250,   251,   194,     3,   127,   310,
     311,   260,   240,   194,    91,   118,   258,   260,    55,    55,
      63,   122,   136,   163,   315,   314,   190,    94,    11,    24,
      29,    30,    31,    32,    33,    35,    43,    69,    87,    89,
      90,   104,   109,   111,   121,   155,   220,   122,   190,   191,
     194,   239,   191,   248,     3,   183,   243,   284,   265,   265,
     273,    93,   113,   119,   190,   123,   261,   191,   191,   265,
     265,   266,   266,   102,   130,   190,   105,   123,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   295,   306,     3,   263,   228,   210,   263,
     203,   190,   300,   301,   302,   303,   304,   306,   321,   252,
     264,     3,   257,   312,   265,   265,   163,   122,   132,   160,
     161,   316,   325,   211,   190,   190,   222,   190,   190,   190,
     221,    27,    61,   105,   123,   223,   224,   225,   190,   325,
     218,    78,   277,   261,   191,    95,   127,   110,    93,   119,
     265,   265,   243,   189,   117,   266,   190,   243,   261,   105,
     189,   191,     3,   191,   239,    25,    67,    72,    79,    80,
      96,   101,   322,   194,   127,   308,   309,   310,    70,   253,
      63,   325,   162,   191,     6,     6,     6,     6,     6,   122,
     105,   225,   325,   191,   190,   191,   265,   220,   265,   265,
     119,   110,   191,   266,   243,   261,   191,   191,   191,   100,
      79,    79,    79,   100,   301,     3,   128,   316,   191,   191,
     194,   191,   191,   191,   191,   106,   278,   277,   191,   191,
     119,   265,   191,   191,   309,   302,   301,   190,   261,     6,
     128,   255,    83,   133,   325,    51,   254,   191,   261,   164,
     165,   166,   279,   280,   190,   265,   323,   191,   265,   191,
       6,    17,   167,   170,   281,   325,   168,   169,   281,   168,
     169,   191,   117,   281
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
     263,   263,   264,   265,   265,   265,   265,   265,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   267,
     267,   268,   268,   268,   268,   268,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   270,   270,   271,
     271,   271,   271,   272,   272,   272,   272,   273,   273,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   276,   276,
     277,   277,   278,   278,   279,   279,   279,   280,   280,   280,
     281,   281,   281,   281,   281,   282,   283,   284,   284,   284,
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
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     2,     3,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     3,     3,     5,
       6,     5,     6,     4,     6,     3,     5,     4,     5,     4,
       5,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       6,     0,     3,     0,     2,     5,     0,     1,     1,     1,
       2,     2,     2,     2,     1,     6,     6,     1,     1,     1,
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
#line 184 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2067 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 184 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2073 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 171 "bison_parser.y"
            { }
#line 2079 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 171 "bison_parser.y"
            { }
#line 2085 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2098 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2104 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2110 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2123 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2136 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2142 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2148 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2154 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 184 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2160 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2166 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2172 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 171 "bison_parser.y"
            { }
#line 2178 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 184 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2184 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 171 "bison_parser.y"
            { }
#line 2190 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2196 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2202 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2208 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 171 "bison_parser.y"
            { }
#line 2214 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2227 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2233 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2239 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 171 "bison_parser.y"
            { }
#line 2245 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 171 "bison_parser.y"
            { }
#line 2251 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2257 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 171 "bison_parser.y"
            { }
#line 2263 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 171 "bison_parser.y"
            { }
#line 2269 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 171 "bison_parser.y"
            { }
#line 2275 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2281 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2287 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 171 "bison_parser.y"
            { }
#line 2293 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2299 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2305 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2311 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2317 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2323 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2329 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 176 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2361 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2367 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2373 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2379 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2385 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2391 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2397 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2403 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2409 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 171 "bison_parser.y"
            { }
#line 2415 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2421 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 171 "bison_parser.y"
            { }
#line 2427 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2440 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2446 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2452 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2458 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2464 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2470 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2496 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2502 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 171 "bison_parser.y"
            { }
#line 2508 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2514 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2520 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2533 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2546 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2559 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2565 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2571 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2577 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2583 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2589 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2595 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2601 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2607 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2613 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2619 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2625 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2631 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2637 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2643 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2656 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2662 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 171 "bison_parser.y"
            { }
#line 2668 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2674 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2680 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2686 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 171 "bison_parser.y"
            { }
#line 2692 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 171 "bison_parser.y"
            { }
#line 2698 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 171 "bison_parser.y"
            { }
#line 2704 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2710 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2716 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2722 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2728 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2734 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2740 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2746 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2752 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2758 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2764 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2770 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2776 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2782 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2788 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2794 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2800 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2813 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2819 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2825 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 172 "bison_parser.y"
            {
  free( (((*yyvaluep).table_name).name) );
  free( (((*yyvaluep).table_name).schema) );
}
#line 2834 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 184 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2840 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2846 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2852 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2858 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2864 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2870 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2876 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 2882 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 171 "bison_parser.y"
            { }
#line 2888 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 171 "bison_parser.y"
            { }
#line 2894 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2900 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2906 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2912 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2918 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2924 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 171 "bison_parser.y"
            { }
#line 2930 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 193 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2936 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 176 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2949 "bison_parser.cpp"
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

#line 3057 "bison_parser.cpp"

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
#line 325 "bison_parser.y"
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
#line 3286 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 344 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3297 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 350 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3308 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 357 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3317 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 361 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3326 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 365 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3332 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 366 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3338 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 367 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3344 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 369 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3350 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 370 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3356 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 371 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3362 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 372 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3368 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 373 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3374 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 374 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3380 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 375 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3386 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 376 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3392 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 377 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3398 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 378 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3404 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 384 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3410 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 385 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3416 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 387 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3425 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 391 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3434 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 396 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3443 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 400 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3453 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 410 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3459 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 411 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3465 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 412 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3471 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 420 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3481 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 428 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3490 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 432 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3500 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 443 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3511 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type opt_where  */
#line 449 "bison_parser.y"
                                                         {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
}
#line 3523 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 457 "bison_parser.y"
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
#line 3542 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 472 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3551 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 477 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3557 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 478 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3563 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 484 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3574 "bison_parser.cpp"
    break;

  case 42: /* export_statement: COPY select_with_paren TO file_path opt_file_type  */
#line 490 "bison_parser.y"
                                                    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
}
#line 3584 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW TABLES  */
#line 501 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3590 "bison_parser.cpp"
    break;

  case 44: /* show_statement: SHOW COLUMNS table_name  */
#line 502 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3600 "bison_parser.cpp"
    break;

  case 45: /* show_statement: DESCRIBE table_name  */
#line 507 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3610 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 518 "bison_parser.y"
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
#line 3628 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 531 "bison_parser.y"
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
#line 3645 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 543 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3657 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 550 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3669 "bison_parser.cpp"
    break;

  case 50: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 557 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3682 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: IF NOT EXISTS  */
#line 566 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3688 "bison_parser.cpp"
    break;

  case 52: /* opt_not_exists: %empty  */
#line 567 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3694 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem  */
#line 569 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3703 "bison_parser.cpp"
    break;

  case 54: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 573 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3712 "bison_parser.cpp"
    break;

  case 55: /* table_elem: column_def  */
#line 578 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3718 "bison_parser.cpp"
    break;

  case 56: /* table_elem: table_constraint  */
#line 579 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3724 "bison_parser.cpp"
    break;

  case 57: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 581 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3735 "bison_parser.cpp"
    break;

  case 58: /* column_type: BIGINT  */
#line 588 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3741 "bison_parser.cpp"
    break;

  case 59: /* column_type: BOOLEAN  */
#line 589 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3747 "bison_parser.cpp"
    break;

  case 60: /* column_type: CHAR '(' INTVAL ')'  */
#line 590 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3753 "bison_parser.cpp"
    break;

  case 61: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 591 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3759 "bison_parser.cpp"
    break;

  case 62: /* column_type: DATE  */
#line 592 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3765 "bison_parser.cpp"
    break;

  case 63: /* column_type: DATETIME  */
#line 593 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3771 "bison_parser.cpp"
    break;

  case 64: /* column_type: DECIMAL opt_decimal_specification  */
#line 594 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3780 "bison_parser.cpp"
    break;

  case 65: /* column_type: DOUBLE  */
#line 598 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3786 "bison_parser.cpp"
    break;

  case 66: /* column_type: FLOAT  */
#line 599 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3792 "bison_parser.cpp"
    break;

  case 67: /* column_type: INT  */
#line 600 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3798 "bison_parser.cpp"
    break;

  case 68: /* column_type: INTEGER  */
#line 601 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3804 "bison_parser.cpp"
    break;

  case 69: /* column_type: LONG  */
#line 602 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3810 "bison_parser.cpp"
    break;

  case 70: /* column_type: REAL  */
#line 603 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3816 "bison_parser.cpp"
    break;

  case 71: /* column_type: SMALLINT  */
#line 604 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3822 "bison_parser.cpp"
    break;

  case 72: /* column_type: TEXT  */
#line 605 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3828 "bison_parser.cpp"
    break;

  case 73: /* column_type: TIME opt_time_precision  */
#line 606 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3834 "bison_parser.cpp"
    break;

  case 74: /* column_type: TIMESTAMP  */
#line 607 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3840 "bison_parser.cpp"
    break;

  case 75: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 608 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3846 "bison_parser.cpp"
    break;

  case 76: /* opt_time_precision: '(' INTVAL ')'  */
#line 610 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3852 "bison_parser.cpp"
    break;

  case 77: /* opt_time_precision: %empty  */
#line 611 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3858 "bison_parser.cpp"
    break;

  case 78: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 613 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3864 "bison_parser.cpp"
    break;

  case 79: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 614 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3870 "bison_parser.cpp"
    break;

  case 80: /* opt_decimal_specification: %empty  */
#line 615 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3876 "bison_parser.cpp"
    break;

  case 81: /* opt_column_constraints: column_constraint_set  */
#line 617 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 3882 "bison_parser.cpp"
    break;

  case 82: /* opt_column_constraints: %empty  */
#line 618 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 3888 "bison_parser.cpp"
    break;

  case 83: /* column_constraint_set: column_constraint  */
#line 620 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 3897 "bison_parser.cpp"
    break;

  case 84: /* column_constraint_set: column_constraint_set column_constraint  */
#line 624 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 3906 "bison_parser.cpp"
    break;

  case 85: /* column_constraint: PRIMARY KEY  */
#line 629 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3912 "bison_parser.cpp"
    break;

  case 86: /* column_constraint: UNIQUE  */
#line 630 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3918 "bison_parser.cpp"
    break;

  case 87: /* column_constraint: NULL  */
#line 631 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3924 "bison_parser.cpp"
    break;

  case 88: /* column_constraint: NOT NULL  */
#line 632 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3930 "bison_parser.cpp"
    break;

  case 89: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 634 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3936 "bison_parser.cpp"
    break;

  case 90: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 635 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3942 "bison_parser.cpp"
    break;

  case 91: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 643 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3953 "bison_parser.cpp"
    break;

  case 92: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 649 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3964 "bison_parser.cpp"
    break;

  case 93: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 655 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3974 "bison_parser.cpp"
    break;

  case 94: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 661 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3984 "bison_parser.cpp"
    break;

  case 95: /* opt_exists: IF EXISTS  */
#line 667 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3990 "bison_parser.cpp"
    break;

  case 96: /* opt_exists: %empty  */
#line 668 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3996 "bison_parser.cpp"
    break;

  case 97: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 675 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4006 "bison_parser.cpp"
    break;

  case 98: /* alter_action: drop_action  */
#line 681 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4012 "bison_parser.cpp"
    break;

  case 99: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 683 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4021 "bison_parser.cpp"
    break;

  case 100: /* delete_statement: DELETE FROM table_name opt_where  */
#line 693 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4032 "bison_parser.cpp"
    break;

  case 101: /* truncate_statement: TRUNCATE table_name  */
#line 700 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4042 "bison_parser.cpp"
    break;

  case 102: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 711 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4054 "bison_parser.cpp"
    break;

  case 103: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 718 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4066 "bison_parser.cpp"
    break;

  case 104: /* opt_column_list: '(' ident_commalist ')'  */
#line 726 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4072 "bison_parser.cpp"
    break;

  case 105: /* opt_column_list: %empty  */
#line 727 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4078 "bison_parser.cpp"
    break;

  case 106: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 734 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4089 "bison_parser.cpp"
    break;

  case 107: /* update_clause_commalist: update_clause  */
#line 741 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4098 "bison_parser.cpp"
    break;

  case 108: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 745 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4107 "bison_parser.cpp"
    break;

  case 109: /* update_clause: IDENTIFIER '=' expr  */
#line 750 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4117 "bison_parser.cpp"
    break;

  case 110: /* select_statement: opt_with_clause select_with_paren  */
#line 760 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4126 "bison_parser.cpp"
    break;

  case 111: /* select_statement: opt_with_clause select_no_paren  */
#line 764 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4135 "bison_parser.cpp"
    break;

  case 112: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 768 "bison_parser.y"
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
#line 4151 "bison_parser.cpp"
    break;

  case 115: /* select_within_set_operation_no_parentheses: select_clause  */
#line 782 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4157 "bison_parser.cpp"
    break;

  case 116: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 783 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4170 "bison_parser.cpp"
    break;

  case 117: /* select_with_paren: '(' select_no_paren ')'  */
#line 792 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4176 "bison_parser.cpp"
    break;

  case 118: /* select_with_paren: '(' select_with_paren ')'  */
#line 793 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4182 "bison_parser.cpp"
    break;

  case 119: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 795 "bison_parser.y"
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
#line 4201 "bison_parser.cpp"
    break;

  case 120: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 809 "bison_parser.y"
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
#line 4217 "bison_parser.cpp"
    break;

  case 121: /* set_operator: set_type opt_all  */
#line 821 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4226 "bison_parser.cpp"
    break;

  case 122: /* set_type: UNION  */
#line 826 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4235 "bison_parser.cpp"
    break;

  case 123: /* set_type: INTERSECT  */
#line 830 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4244 "bison_parser.cpp"
    break;

  case 124: /* set_type: EXCEPT  */
#line 834 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4253 "bison_parser.cpp"
    break;

  case 125: /* opt_all: ALL  */
#line 839 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4259 "bison_parser.cpp"
    break;

  case 126: /* opt_all: %empty  */
#line 840 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4265 "bison_parser.cpp"
    break;

  case 127: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 842 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4279 "bison_parser.cpp"
    break;

  case 128: /* opt_distinct: DISTINCT  */
#line 852 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4285 "bison_parser.cpp"
    break;

  case 129: /* opt_distinct: %empty  */
#line 853 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4291 "bison_parser.cpp"
    break;

  case 131: /* opt_from_clause: from_clause  */
#line 857 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4297 "bison_parser.cpp"
    break;

  case 132: /* opt_from_clause: %empty  */
#line 858 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4303 "bison_parser.cpp"
    break;

  case 133: /* from_clause: FROM table_ref  */
#line 860 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4309 "bison_parser.cpp"
    break;

  case 134: /* opt_where: WHERE expr  */
#line 862 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4315 "bison_parser.cpp"
    break;

  case 135: /* opt_where: %empty  */
#line 863 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4321 "bison_parser.cpp"
    break;

  case 136: /* opt_group: GROUP BY expr_list opt_having  */
#line 865 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4331 "bison_parser.cpp"
    break;

  case 137: /* opt_group: %empty  */
#line 870 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4337 "bison_parser.cpp"
    break;

  case 138: /* opt_having: HAVING expr  */
#line 872 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4343 "bison_parser.cpp"
    break;

  case 139: /* opt_having: %empty  */
#line 873 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4349 "bison_parser.cpp"
    break;

  case 140: /* opt_order: ORDER BY order_list  */
#line 875 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4355 "bison_parser.cpp"
    break;

  case 141: /* opt_order: %empty  */
#line 876 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4361 "bison_parser.cpp"
    break;

  case 142: /* order_list: order_desc  */
#line 878 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4370 "bison_parser.cpp"
    break;

  case 143: /* order_list: order_list ',' order_desc  */
#line 882 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4379 "bison_parser.cpp"
    break;

  case 144: /* order_desc: expr opt_order_type  */
#line 887 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4385 "bison_parser.cpp"
    break;

  case 145: /* opt_order_type: ASC  */
#line 889 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4391 "bison_parser.cpp"
    break;

  case 146: /* opt_order_type: DESC  */
#line 890 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4397 "bison_parser.cpp"
    break;

  case 147: /* opt_order_type: %empty  */
#line 891 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4403 "bison_parser.cpp"
    break;

  case 148: /* opt_top: TOP int_literal  */
#line 895 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4409 "bison_parser.cpp"
    break;

  case 149: /* opt_top: %empty  */
#line 896 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4415 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: LIMIT expr  */
#line 898 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4421 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: OFFSET expr  */
#line 899 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4427 "bison_parser.cpp"
    break;

  case 152: /* opt_limit: LIMIT expr OFFSET expr  */
#line 900 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4433 "bison_parser.cpp"
    break;

  case 153: /* opt_limit: LIMIT ALL  */
#line 901 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4439 "bison_parser.cpp"
    break;

  case 154: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 902 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4445 "bison_parser.cpp"
    break;

  case 155: /* opt_limit: %empty  */
#line 903 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4451 "bison_parser.cpp"
    break;

  case 156: /* expr_list: expr_alias  */
#line 908 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4460 "bison_parser.cpp"
    break;

  case 157: /* expr_list: expr_list ',' expr_alias  */
#line 912 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4469 "bison_parser.cpp"
    break;

  case 158: /* opt_literal_list: literal_list  */
#line 917 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4475 "bison_parser.cpp"
    break;

  case 159: /* opt_literal_list: %empty  */
#line 918 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4481 "bison_parser.cpp"
    break;

  case 160: /* literal_list: literal  */
#line 920 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4490 "bison_parser.cpp"
    break;

  case 161: /* literal_list: literal_list ',' literal  */
#line 924 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4499 "bison_parser.cpp"
    break;

  case 162: /* expr_alias: expr opt_alias  */
#line 929 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4511 "bison_parser.cpp"
    break;

  case 168: /* operand: '(' expr ')'  */
#line 939 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4517 "bison_parser.cpp"
    break;

  case 178: /* operand: '(' select_no_paren ')'  */
#line 941 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4525 "bison_parser.cpp"
    break;

  case 181: /* unary_expr: '-' operand  */
#line 947 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4531 "bison_parser.cpp"
    break;

  case 182: /* unary_expr: NOT operand  */
#line 948 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4537 "bison_parser.cpp"
    break;

  case 183: /* unary_expr: operand ISNULL  */
#line 949 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4543 "bison_parser.cpp"
    break;

  case 184: /* unary_expr: operand IS NULL  */
#line 950 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4549 "bison_parser.cpp"
    break;

  case 185: /* unary_expr: operand IS NOT NULL  */
#line 951 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4555 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand '-' operand  */
#line 953 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4561 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '+' operand  */
#line 954 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4567 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand '/' operand  */
#line 955 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4573 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand '*' operand  */
#line 956 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4579 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand '%' operand  */
#line 957 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4585 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand '^' operand  */
#line 958 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4591 "bison_parser.cpp"
    break;

  case 193: /* binary_expr: operand LIKE operand  */
#line 959 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4597 "bison_parser.cpp"
    break;

  case 194: /* binary_expr: operand NOT LIKE operand  */
#line 960 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4603 "bison_parser.cpp"
    break;

  case 195: /* binary_expr: operand ILIKE operand  */
#line 961 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4609 "bison_parser.cpp"
    break;

  case 196: /* binary_expr: operand CONCAT operand  */
#line 962 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4615 "bison_parser.cpp"
    break;

  case 197: /* logic_expr: expr AND expr  */
#line 964 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4621 "bison_parser.cpp"
    break;

  case 198: /* logic_expr: expr OR expr  */
#line 965 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4627 "bison_parser.cpp"
    break;

  case 199: /* in_expr: operand IN '(' expr_list ')'  */
#line 967 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4633 "bison_parser.cpp"
    break;

  case 200: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 968 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4639 "bison_parser.cpp"
    break;

  case 201: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 969 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4645 "bison_parser.cpp"
    break;

  case 202: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 970 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4651 "bison_parser.cpp"
    break;

  case 203: /* case_expr: CASE expr case_list END  */
#line 974 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4657 "bison_parser.cpp"
    break;

  case 204: /* case_expr: CASE expr case_list ELSE expr END  */
#line 975 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4663 "bison_parser.cpp"
    break;

  case 205: /* case_expr: CASE case_list END  */
#line 976 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4669 "bison_parser.cpp"
    break;

  case 206: /* case_expr: CASE case_list ELSE expr END  */
#line 977 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4675 "bison_parser.cpp"
    break;

  case 207: /* case_list: WHEN expr THEN expr  */
#line 979 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4681 "bison_parser.cpp"
    break;

  case 208: /* case_list: case_list WHEN expr THEN expr  */
#line 980 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4687 "bison_parser.cpp"
    break;

  case 209: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 982 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4693 "bison_parser.cpp"
    break;

  case 210: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 983 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4699 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand '=' operand  */
#line 985 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4705 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand EQUALS operand  */
#line 986 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4711 "bison_parser.cpp"
    break;

  case 213: /* comp_expr: operand NOTEQUALS operand  */
#line 987 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4717 "bison_parser.cpp"
    break;

  case 214: /* comp_expr: operand '<' operand  */
#line 988 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4723 "bison_parser.cpp"
    break;

  case 215: /* comp_expr: operand '>' operand  */
#line 989 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4729 "bison_parser.cpp"
    break;

  case 216: /* comp_expr: operand LESSEQ operand  */
#line 990 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4735 "bison_parser.cpp"
    break;

  case 217: /* comp_expr: operand GREATEREQ operand  */
#line 991 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4741 "bison_parser.cpp"
    break;

  case 218: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 995 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 4747 "bison_parser.cpp"
    break;

  case 219: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 996 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 4753 "bison_parser.cpp"
    break;

  case 220: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1000 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4759 "bison_parser.cpp"
    break;

  case 221: /* opt_window: %empty  */
#line 1001 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 4765 "bison_parser.cpp"
    break;

  case 222: /* opt_partition: PARTITION BY expr_list  */
#line 1003 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4771 "bison_parser.cpp"
    break;

  case 223: /* opt_partition: %empty  */
#line 1004 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4777 "bison_parser.cpp"
    break;

  case 224: /* opt_frame_clause: frame_type frame_bound  */
#line 1009 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 4783 "bison_parser.cpp"
    break;

  case 225: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1010 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 4789 "bison_parser.cpp"
    break;

  case 226: /* opt_frame_clause: %empty  */
#line 1011 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 4797 "bison_parser.cpp"
    break;

  case 227: /* frame_type: RANGE  */
#line 1015 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 4803 "bison_parser.cpp"
    break;

  case 228: /* frame_type: ROWS  */
#line 1016 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 4809 "bison_parser.cpp"
    break;

  case 229: /* frame_type: GROUPS  */
#line 1017 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 4815 "bison_parser.cpp"
    break;

  case 230: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1019 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 4821 "bison_parser.cpp"
    break;

  case 231: /* frame_bound: INTVAL PRECEDING  */
#line 1020 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 4827 "bison_parser.cpp"
    break;

  case 232: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1021 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 4833 "bison_parser.cpp"
    break;

  case 233: /* frame_bound: INTVAL FOLLOWING  */
#line 1022 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 4839 "bison_parser.cpp"
    break;

  case 234: /* frame_bound: CURRENT_ROW  */
#line 1023 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 4845 "bison_parser.cpp"
    break;

  case 235: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1025 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4851 "bison_parser.cpp"
    break;

  case 236: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1027 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4857 "bison_parser.cpp"
    break;

  case 237: /* datetime_field: SECOND  */
#line 1029 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4863 "bison_parser.cpp"
    break;

  case 238: /* datetime_field: MINUTE  */
#line 1030 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4869 "bison_parser.cpp"
    break;

  case 239: /* datetime_field: HOUR  */
#line 1031 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4875 "bison_parser.cpp"
    break;

  case 240: /* datetime_field: DAY  */
#line 1032 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4881 "bison_parser.cpp"
    break;

  case 241: /* datetime_field: MONTH  */
#line 1033 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4887 "bison_parser.cpp"
    break;

  case 242: /* datetime_field: YEAR  */
#line 1034 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4893 "bison_parser.cpp"
    break;

  case 243: /* datetime_field_plural: SECONDS  */
#line 1036 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4899 "bison_parser.cpp"
    break;

  case 244: /* datetime_field_plural: MINUTES  */
#line 1037 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4905 "bison_parser.cpp"
    break;

  case 245: /* datetime_field_plural: HOURS  */
#line 1038 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4911 "bison_parser.cpp"
    break;

  case 246: /* datetime_field_plural: DAYS  */
#line 1039 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4917 "bison_parser.cpp"
    break;

  case 247: /* datetime_field_plural: MONTHS  */
#line 1040 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4923 "bison_parser.cpp"
    break;

  case 248: /* datetime_field_plural: YEARS  */
#line 1041 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4929 "bison_parser.cpp"
    break;

  case 251: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1045 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4935 "bison_parser.cpp"
    break;

  case 252: /* array_index: operand '[' int_literal ']'  */
#line 1047 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4941 "bison_parser.cpp"
    break;

  case 253: /* between_expr: operand BETWEEN operand AND operand  */
#line 1049 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4947 "bison_parser.cpp"
    break;

  case 254: /* column_name: IDENTIFIER  */
#line 1051 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4953 "bison_parser.cpp"
    break;

  case 255: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1052 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4959 "bison_parser.cpp"
    break;

  case 256: /* column_name: '*'  */
#line 1053 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4965 "bison_parser.cpp"
    break;

  case 257: /* column_name: IDENTIFIER '.' '*'  */
#line 1054 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4971 "bison_parser.cpp"
    break;

  case 265: /* string_literal: STRING  */
#line 1058 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4977 "bison_parser.cpp"
    break;

  case 266: /* bool_literal: TRUE  */
#line 1060 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4983 "bison_parser.cpp"
    break;

  case 267: /* bool_literal: FALSE  */
#line 1061 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4989 "bison_parser.cpp"
    break;

  case 268: /* num_literal: FLOATVAL  */
#line 1063 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4995 "bison_parser.cpp"
    break;

  case 270: /* int_literal: INTVAL  */
#line 1066 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5001 "bison_parser.cpp"
    break;

  case 271: /* null_literal: NULL  */
#line 1068 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5007 "bison_parser.cpp"
    break;

  case 272: /* date_literal: DATE STRING  */
#line 1070 "bison_parser.y"
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
#line 5022 "bison_parser.cpp"
    break;

  case 273: /* interval_literal: int_literal duration_field  */
#line 1081 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 5031 "bison_parser.cpp"
    break;

  case 274: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1085 "bison_parser.y"
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
#line 5047 "bison_parser.cpp"
    break;

  case 275: /* interval_literal: INTERVAL STRING  */
#line 1096 "bison_parser.y"
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
#line 5083 "bison_parser.cpp"
    break;

  case 276: /* param_expr: '?'  */
#line 1128 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5093 "bison_parser.cpp"
    break;

  case 278: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1137 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5104 "bison_parser.cpp"
    break;

  case 282: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1146 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5115 "bison_parser.cpp"
    break;

  case 283: /* table_ref_commalist: table_ref_atomic  */
#line 1153 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5124 "bison_parser.cpp"
    break;

  case 284: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1157 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5133 "bison_parser.cpp"
    break;

  case 285: /* table_ref_name: table_name opt_table_alias  */
#line 1162 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5145 "bison_parser.cpp"
    break;

  case 286: /* table_ref_name_no_alias: table_name  */
#line 1170 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5155 "bison_parser.cpp"
    break;

  case 287: /* table_name: IDENTIFIER  */
#line 1176 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5164 "bison_parser.cpp"
    break;

  case 288: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1180 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5173 "bison_parser.cpp"
    break;

  case 289: /* opt_index_name: IDENTIFIER  */
#line 1185 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5179 "bison_parser.cpp"
    break;

  case 290: /* opt_index_name: %empty  */
#line 1186 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5185 "bison_parser.cpp"
    break;

  case 292: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1188 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5191 "bison_parser.cpp"
    break;

  case 294: /* opt_table_alias: %empty  */
#line 1190 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5197 "bison_parser.cpp"
    break;

  case 295: /* alias: AS IDENTIFIER  */
#line 1192 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5203 "bison_parser.cpp"
    break;

  case 296: /* alias: IDENTIFIER  */
#line 1193 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5209 "bison_parser.cpp"
    break;

  case 298: /* opt_alias: %empty  */
#line 1195 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5215 "bison_parser.cpp"
    break;

  case 299: /* opt_locking_clause: opt_locking_clause_list  */
#line 1201 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5221 "bison_parser.cpp"
    break;

  case 300: /* opt_locking_clause: %empty  */
#line 1202 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5227 "bison_parser.cpp"
    break;

  case 301: /* opt_locking_clause_list: locking_clause  */
#line 1204 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5236 "bison_parser.cpp"
    break;

  case 302: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1208 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5245 "bison_parser.cpp"
    break;

  case 303: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1213 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5256 "bison_parser.cpp"
    break;

  case 304: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1219 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5267 "bison_parser.cpp"
    break;

  case 305: /* row_lock_mode: UPDATE  */
#line 1226 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5273 "bison_parser.cpp"
    break;

  case 306: /* row_lock_mode: NO KEY UPDATE  */
#line 1227 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5279 "bison_parser.cpp"
    break;

  case 307: /* row_lock_mode: SHARE  */
#line 1228 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5285 "bison_parser.cpp"
    break;

  case 308: /* row_lock_mode: KEY SHARE  */
#line 1229 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5291 "bison_parser.cpp"
    break;

  case 309: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1231 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5297 "bison_parser.cpp"
    break;

  case 310: /* opt_row_lock_policy: NOWAIT  */
#line 1232 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5303 "bison_parser.cpp"
    break;

  case 311: /* opt_row_lock_policy: %empty  */
#line 1233 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5309 "bison_parser.cpp"
    break;

  case 313: /* opt_with_clause: %empty  */
#line 1239 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5315 "bison_parser.cpp"
    break;

  case 314: /* with_clause: WITH with_description_list  */
#line 1241 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5321 "bison_parser.cpp"
    break;

  case 315: /* with_description_list: with_description  */
#line 1243 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5330 "bison_parser.cpp"
    break;

  case 316: /* with_description_list: with_description_list ',' with_description  */
#line 1247 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5339 "bison_parser.cpp"
    break;

  case 317: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1252 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5349 "bison_parser.cpp"
    break;

  case 318: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1262 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5361 "bison_parser.cpp"
    break;

  case 319: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1269 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5374 "bison_parser.cpp"
    break;

  case 320: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1277 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5387 "bison_parser.cpp"
    break;

  case 321: /* opt_join_type: INNER  */
#line 1286 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5393 "bison_parser.cpp"
    break;

  case 322: /* opt_join_type: LEFT OUTER  */
#line 1287 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5399 "bison_parser.cpp"
    break;

  case 323: /* opt_join_type: LEFT  */
#line 1288 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5405 "bison_parser.cpp"
    break;

  case 324: /* opt_join_type: RIGHT OUTER  */
#line 1289 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5411 "bison_parser.cpp"
    break;

  case 325: /* opt_join_type: RIGHT  */
#line 1290 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5417 "bison_parser.cpp"
    break;

  case 326: /* opt_join_type: FULL OUTER  */
#line 1291 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5423 "bison_parser.cpp"
    break;

  case 327: /* opt_join_type: OUTER  */
#line 1292 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5429 "bison_parser.cpp"
    break;

  case 328: /* opt_join_type: FULL  */
#line 1293 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5435 "bison_parser.cpp"
    break;

  case 329: /* opt_join_type: CROSS  */
#line 1294 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5441 "bison_parser.cpp"
    break;

  case 330: /* opt_join_type: %empty  */
#line 1295 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5447 "bison_parser.cpp"
    break;

  case 334: /* ident_commalist: IDENTIFIER  */
#line 1306 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5456 "bison_parser.cpp"
    break;

  case 335: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1310 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5465 "bison_parser.cpp"
    break;


#line 5469 "bison_parser.cpp"

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

#line 1316 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
