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
  YYSYMBOL_CURRENT_TIMESTAMP = 12,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CURRENT_DATE = 13,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 14,              /* CURRENT_TIME  */
  YYSYMBOL_DISTINCT = 15,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 16,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 17,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 18,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 19,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 20,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 21,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 22,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 23,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 24,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 25,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 26,                   /* EXPLAIN  */
  YYSYMBOL_ENCODING = 27,                  /* ENCODING  */
  YYSYMBOL_INTEGER = 28,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 29,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 30,                   /* PREPARE  */
  YYSYMBOL_SCHEMAS = 31,                   /* SCHEMAS  */
  YYSYMBOL_CHARACTER_VARYING = 32,         /* CHARACTER_VARYING  */
  YYSYMBOL_REAL = 33,                      /* REAL  */
  YYSYMBOL_DECIMAL = 34,                   /* DECIMAL  */
  YYSYMBOL_SMALLINT = 35,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 36,                    /* BIGINT  */
  YYSYMBOL_SPATIAL = 37,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 38,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 39,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 40,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 41,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 42,                    /* COLUMN  */
  YYSYMBOL_CREATE = 43,                    /* CREATE  */
  YYSYMBOL_DELETE = 44,                    /* DELETE  */
  YYSYMBOL_DIRECT = 45,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 46,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 47,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 48,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 49,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 50,                   /* EXTRACT  */
  YYSYMBOL_CAST = 51,                      /* CAST  */
  YYSYMBOL_FORMAT = 52,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 53,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 54,                    /* HAVING  */
  YYSYMBOL_IMPORT = 55,                    /* IMPORT  */
  YYSYMBOL_INSERT = 56,                    /* INSERT  */
  YYSYMBOL_ISNULL = 57,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 58,                    /* OFFSET  */
  YYSYMBOL_RENAME = 59,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 60,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 61,                    /* SELECT  */
  YYSYMBOL_SORTED = 62,                    /* SORTED  */
  YYSYMBOL_TABLES = 63,                    /* TABLES  */
  YYSYMBOL_UNLOAD = 64,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 65,                    /* UPDATE  */
  YYSYMBOL_VALUES = 66,                    /* VALUES  */
  YYSYMBOL_AFTER = 67,                     /* AFTER  */
  YYSYMBOL_ALTER = 68,                     /* ALTER  */
  YYSYMBOL_CROSS = 69,                     /* CROSS  */
  YYSYMBOL_DELTA = 70,                     /* DELTA  */
  YYSYMBOL_FLOAT = 71,                     /* FLOAT  */
  YYSYMBOL_GROUP = 72,                     /* GROUP  */
  YYSYMBOL_INDEX = 73,                     /* INDEX  */
  YYSYMBOL_INNER = 74,                     /* INNER  */
  YYSYMBOL_LIMIT = 75,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 76,                     /* LOCAL  */
  YYSYMBOL_MERGE = 77,                     /* MERGE  */
  YYSYMBOL_MINUS = 78,                     /* MINUS  */
  YYSYMBOL_ORDER = 79,                     /* ORDER  */
  YYSYMBOL_OVER = 80,                      /* OVER  */
  YYSYMBOL_OUTER = 81,                     /* OUTER  */
  YYSYMBOL_RIGHT = 82,                     /* RIGHT  */
  YYSYMBOL_TABLE = 83,                     /* TABLE  */
  YYSYMBOL_UNION = 84,                     /* UNION  */
  YYSYMBOL_USING = 85,                     /* USING  */
  YYSYMBOL_WHERE = 86,                     /* WHERE  */
  YYSYMBOL_CALL = 87,                      /* CALL  */
  YYSYMBOL_CASE = 88,                      /* CASE  */
  YYSYMBOL_CHAR = 89,                      /* CHAR  */
  YYSYMBOL_COPY = 90,                      /* COPY  */
  YYSYMBOL_DATE = 91,                      /* DATE  */
  YYSYMBOL_DATETIME = 92,                  /* DATETIME  */
  YYSYMBOL_DESC = 93,                      /* DESC  */
  YYSYMBOL_DROP = 94,                      /* DROP  */
  YYSYMBOL_ELSE = 95,                      /* ELSE  */
  YYSYMBOL_FILE = 96,                      /* FILE  */
  YYSYMBOL_FROM = 97,                      /* FROM  */
  YYSYMBOL_FULL = 98,                      /* FULL  */
  YYSYMBOL_HASH = 99,                      /* HASH  */
  YYSYMBOL_HINT = 100,                     /* HINT  */
  YYSYMBOL_INTO = 101,                     /* INTO  */
  YYSYMBOL_JOIN = 102,                     /* JOIN  */
  YYSYMBOL_LEFT = 103,                     /* LEFT  */
  YYSYMBOL_LIKE = 104,                     /* LIKE  */
  YYSYMBOL_LOAD = 105,                     /* LOAD  */
  YYSYMBOL_LONG = 106,                     /* LONG  */
  YYSYMBOL_NULL = 107,                     /* NULL  */
  YYSYMBOL_PARTITION = 108,                /* PARTITION  */
  YYSYMBOL_PLAN = 109,                     /* PLAN  */
  YYSYMBOL_SHOW = 110,                     /* SHOW  */
  YYSYMBOL_TEXT = 111,                     /* TEXT  */
  YYSYMBOL_THEN = 112,                     /* THEN  */
  YYSYMBOL_TIME = 113,                     /* TIME  */
  YYSYMBOL_VIEW = 114,                     /* VIEW  */
  YYSYMBOL_WHEN = 115,                     /* WHEN  */
  YYSYMBOL_WITH = 116,                     /* WITH  */
  YYSYMBOL_ADD = 117,                      /* ADD  */
  YYSYMBOL_ALL = 118,                      /* ALL  */
  YYSYMBOL_AND = 119,                      /* AND  */
  YYSYMBOL_ASC = 120,                      /* ASC  */
  YYSYMBOL_END = 121,                      /* END  */
  YYSYMBOL_FOR = 122,                      /* FOR  */
  YYSYMBOL_INT = 123,                      /* INT  */
  YYSYMBOL_NOT = 124,                      /* NOT  */
  YYSYMBOL_OFF = 125,                      /* OFF  */
  YYSYMBOL_SET = 126,                      /* SET  */
  YYSYMBOL_TOP = 127,                      /* TOP  */
  YYSYMBOL_AS = 128,                       /* AS  */
  YYSYMBOL_BY = 129,                       /* BY  */
  YYSYMBOL_IF = 130,                       /* IF  */
  YYSYMBOL_IN = 131,                       /* IN  */
  YYSYMBOL_IS = 132,                       /* IS  */
  YYSYMBOL_OF = 133,                       /* OF  */
  YYSYMBOL_ON = 134,                       /* ON  */
  YYSYMBOL_OR = 135,                       /* OR  */
  YYSYMBOL_TO = 136,                       /* TO  */
  YYSYMBOL_NO = 137,                       /* NO  */
  YYSYMBOL_ARRAY = 138,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 139,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 140,                    /* ILIKE  */
  YYSYMBOL_SECOND = 141,                   /* SECOND  */
  YYSYMBOL_MINUTE = 142,                   /* MINUTE  */
  YYSYMBOL_HOUR = 143,                     /* HOUR  */
  YYSYMBOL_DAY = 144,                      /* DAY  */
  YYSYMBOL_MONTH = 145,                    /* MONTH  */
  YYSYMBOL_YEAR = 146,                     /* YEAR  */
  YYSYMBOL_SECONDS = 147,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 148,                  /* MINUTES  */
  YYSYMBOL_HOURS = 149,                    /* HOURS  */
  YYSYMBOL_DAYS = 150,                     /* DAYS  */
  YYSYMBOL_MONTHS = 151,                   /* MONTHS  */
  YYSYMBOL_YEARS = 152,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 153,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 154,                     /* TRUE  */
  YYSYMBOL_FALSE = 155,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 156,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 157,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 158,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 159,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 160,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 161,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 162,                     /* SKIP  */
  YYSYMBOL_LOCKED = 163,                   /* LOCKED  */
  YYSYMBOL_SHARE = 164,                    /* SHARE  */
  YYSYMBOL_RANGE = 165,                    /* RANGE  */
  YYSYMBOL_ROWS = 166,                     /* ROWS  */
  YYSYMBOL_GROUPS = 167,                   /* GROUPS  */
  YYSYMBOL_UNBOUNDED = 168,                /* UNBOUNDED  */
  YYSYMBOL_FOLLOWING = 169,                /* FOLLOWING  */
  YYSYMBOL_PRECEDING = 170,                /* PRECEDING  */
  YYSYMBOL_CURRENT_ROW = 171,              /* CURRENT_ROW  */
  YYSYMBOL_UNIQUE = 172,                   /* UNIQUE  */
  YYSYMBOL_PRIMARY = 173,                  /* PRIMARY  */
  YYSYMBOL_FOREIGN = 174,                  /* FOREIGN  */
  YYSYMBOL_KEY = 175,                      /* KEY  */
  YYSYMBOL_REFERENCES = 176,               /* REFERENCES  */
  YYSYMBOL_177_ = 177,                     /* '='  */
  YYSYMBOL_EQUALS = 178,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 179,                /* NOTEQUALS  */
  YYSYMBOL_180_ = 180,                     /* '<'  */
  YYSYMBOL_181_ = 181,                     /* '>'  */
  YYSYMBOL_LESS = 182,                     /* LESS  */
  YYSYMBOL_GREATER = 183,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 184,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 185,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 186,                  /* NOTNULL  */
  YYSYMBOL_187_ = 187,                     /* '+'  */
  YYSYMBOL_188_ = 188,                     /* '-'  */
  YYSYMBOL_189_ = 189,                     /* '*'  */
  YYSYMBOL_190_ = 190,                     /* '/'  */
  YYSYMBOL_191_ = 191,                     /* '%'  */
  YYSYMBOL_192_ = 192,                     /* '^'  */
  YYSYMBOL_UMINUS = 193,                   /* UMINUS  */
  YYSYMBOL_194_ = 194,                     /* '['  */
  YYSYMBOL_195_ = 195,                     /* ']'  */
  YYSYMBOL_196_ = 196,                     /* '('  */
  YYSYMBOL_197_ = 197,                     /* ')'  */
  YYSYMBOL_198_ = 198,                     /* '.'  */
  YYSYMBOL_199_ = 199,                     /* ';'  */
  YYSYMBOL_200_ = 200,                     /* ','  */
  YYSYMBOL_201_ = 201,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 202,                 /* $accept  */
  YYSYMBOL_input = 203,                    /* input  */
  YYSYMBOL_statement_list = 204,           /* statement_list  */
  YYSYMBOL_statement = 205,                /* statement  */
  YYSYMBOL_preparable_statement = 206,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 207,                /* opt_hints  */
  YYSYMBOL_hint_list = 208,                /* hint_list  */
  YYSYMBOL_hint = 209,                     /* hint  */
  YYSYMBOL_transaction_statement = 210,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 211,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 212,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 213,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 214,        /* execute_statement  */
  YYSYMBOL_import_statement = 215,         /* import_statement  */
  YYSYMBOL_file_type = 216,                /* file_type  */
  YYSYMBOL_file_path = 217,                /* file_path  */
  YYSYMBOL_opt_import_export_options = 218, /* opt_import_export_options  */
  YYSYMBOL_import_export_options = 219,    /* import_export_options  */
  YYSYMBOL_export_statement = 220,         /* export_statement  */
  YYSYMBOL_show_statement = 221,           /* show_statement  */
  YYSYMBOL_create_statement = 222,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 223,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 224,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 225,               /* table_elem  */
  YYSYMBOL_column_def = 226,               /* column_def  */
  YYSYMBOL_column_type = 227,              /* column_type  */
  YYSYMBOL_opt_time_precision = 228,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 229, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 230,   /* opt_column_constraints  */
  YYSYMBOL_column_constraints = 231,       /* column_constraints  */
  YYSYMBOL_column_constraint = 232,        /* column_constraint  */
  YYSYMBOL_table_constraint = 233,         /* table_constraint  */
  YYSYMBOL_references_spec = 234,          /* references_spec  */
  YYSYMBOL_drop_statement = 235,           /* drop_statement  */
  YYSYMBOL_opt_exists = 236,               /* opt_exists  */
  YYSYMBOL_alter_statement = 237,          /* alter_statement  */
  YYSYMBOL_alter_action = 238,             /* alter_action  */
  YYSYMBOL_drop_action = 239,              /* drop_action  */
  YYSYMBOL_delete_statement = 240,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 241,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 242,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 243,          /* opt_column_list  */
  YYSYMBOL_update_statement = 244,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 245,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 246,            /* update_clause  */
  YYSYMBOL_select_statement = 247,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 248, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 249, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 250,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 251,          /* select_no_paren  */
  YYSYMBOL_set_operator = 252,             /* set_operator  */
  YYSYMBOL_set_type = 253,                 /* set_type  */
  YYSYMBOL_opt_all = 254,                  /* opt_all  */
  YYSYMBOL_select_clause = 255,            /* select_clause  */
  YYSYMBOL_opt_distinct = 256,             /* opt_distinct  */
  YYSYMBOL_select_list = 257,              /* select_list  */
  YYSYMBOL_opt_from_clause = 258,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 259,              /* from_clause  */
  YYSYMBOL_opt_where = 260,                /* opt_where  */
  YYSYMBOL_opt_group = 261,                /* opt_group  */
  YYSYMBOL_opt_having = 262,               /* opt_having  */
  YYSYMBOL_opt_order = 263,                /* opt_order  */
  YYSYMBOL_order_list = 264,               /* order_list  */
  YYSYMBOL_order_desc = 265,               /* order_desc  */
  YYSYMBOL_opt_order_type = 266,           /* opt_order_type  */
  YYSYMBOL_opt_top = 267,                  /* opt_top  */
  YYSYMBOL_opt_limit = 268,                /* opt_limit  */
  YYSYMBOL_expr_list = 269,                /* expr_list  */
  YYSYMBOL_opt_extended_literal_list = 270, /* opt_extended_literal_list  */
  YYSYMBOL_extended_literal_list = 271,    /* extended_literal_list  */
  YYSYMBOL_casted_extended_literal = 272,  /* casted_extended_literal  */
  YYSYMBOL_extended_literal = 273,         /* extended_literal  */
  YYSYMBOL_expr_alias = 274,               /* expr_alias  */
  YYSYMBOL_expr = 275,                     /* expr  */
  YYSYMBOL_operand = 276,                  /* operand  */
  YYSYMBOL_scalar_expr = 277,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 278,               /* unary_expr  */
  YYSYMBOL_binary_expr = 279,              /* binary_expr  */
  YYSYMBOL_logic_expr = 280,               /* logic_expr  */
  YYSYMBOL_in_expr = 281,                  /* in_expr  */
  YYSYMBOL_case_expr = 282,                /* case_expr  */
  YYSYMBOL_case_list = 283,                /* case_list  */
  YYSYMBOL_exists_expr = 284,              /* exists_expr  */
  YYSYMBOL_comp_expr = 285,                /* comp_expr  */
  YYSYMBOL_function_expr = 286,            /* function_expr  */
  YYSYMBOL_opt_window = 287,               /* opt_window  */
  YYSYMBOL_opt_partition = 288,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 289,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 290,               /* frame_type  */
  YYSYMBOL_frame_bound = 291,              /* frame_bound  */
  YYSYMBOL_extract_expr = 292,             /* extract_expr  */
  YYSYMBOL_cast_expr = 293,                /* cast_expr  */
  YYSYMBOL_datetime_field = 294,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 295,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 296,           /* duration_field  */
  YYSYMBOL_array_expr = 297,               /* array_expr  */
  YYSYMBOL_array_index = 298,              /* array_index  */
  YYSYMBOL_between_expr = 299,             /* between_expr  */
  YYSYMBOL_column_name = 300,              /* column_name  */
  YYSYMBOL_literal = 301,                  /* literal  */
  YYSYMBOL_string_literal = 302,           /* string_literal  */
  YYSYMBOL_bool_literal = 303,             /* bool_literal  */
  YYSYMBOL_num_literal = 304,              /* num_literal  */
  YYSYMBOL_int_literal = 305,              /* int_literal  */
  YYSYMBOL_null_literal = 306,             /* null_literal  */
  YYSYMBOL_date_literal = 307,             /* date_literal  */
  YYSYMBOL_timestamp_literal = 308,        /* timestamp_literal  */
  YYSYMBOL_time_literal = 309,             /* time_literal  */
  YYSYMBOL_interval_literal = 310,         /* interval_literal  */
  YYSYMBOL_param_expr = 311,               /* param_expr  */
  YYSYMBOL_current_timestamp = 312, /* current_timestamp  */
  YYSYMBOL_current_date = 313,     /* current_date  */
  YYSYMBOL_current_time = 314,     /* current_time  */
  YYSYMBOL_table_ref = 315,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 316,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 317, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 318,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 319,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 320,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 321,               /* table_name  */
  YYSYMBOL_opt_index_name = 322,           /* opt_index_name  */
  YYSYMBOL_table_alias = 323,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 324,          /* opt_table_alias  */
  YYSYMBOL_alias = 325,                    /* alias  */
  YYSYMBOL_opt_alias = 326,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 327,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 328,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 329,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 330,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 331,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 332,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 333,              /* with_clause  */
  YYSYMBOL_with_description_list = 334,    /* with_description_list  */
  YYSYMBOL_with_description = 335,         /* with_description  */
  YYSYMBOL_join_clause = 336,              /* join_clause  */
  YYSYMBOL_opt_join_type = 337,            /* opt_join_type  */
  YYSYMBOL_join_condition = 338,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 339,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 340           /* ident_commalist  */
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
#define YYLAST   938

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  202
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  139
/* YYNRULES -- Number of rules.  */
#define YYNRULES  361
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  655

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   439


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
       2,     2,     2,     2,     2,     2,     2,   191,     2,     2,
     196,   197,   189,   187,   200,   188,   198,   190,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   199,
     180,   177,   181,   201,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   194,     2,   195,   192,     2,     2,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   178,   179,   182,   183,   184,   185,   186,   193
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   337,   337,   356,   362,   369,   373,   377,   378,   379,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     396,   397,   399,   403,   408,   412,   422,   423,   424,   426,
     426,   432,   438,   440,   444,   456,   462,   475,   490,   492,
     493,   494,   496,   505,   509,   519,   529,   540,   556,   557,
     562,   573,   586,   598,   605,   612,   621,   622,   624,   628,
     633,   634,   636,   644,   645,   646,   647,   648,   649,   650,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   667,   668,   670,   671,   672,   674,   675,   677,
     681,   685,   690,   698,   699,   700,   701,   703,   704,   705,
     707,   715,   721,   727,   733,   739,   740,   747,   753,   755,
     765,   772,   783,   790,   798,   799,   806,   813,   817,   822,
     832,   836,   840,   852,   852,   854,   855,   864,   865,   867,
     881,   893,   898,   902,   906,   911,   912,   914,   924,   925,
     927,   929,   930,   932,   934,   935,   937,   942,   944,   945,
     947,   948,   950,   954,   959,   961,   962,   963,   967,   968,
     970,   971,   972,   973,   974,   975,   980,   984,   990,   991,
     993,   997,  1002,  1002,  1006,  1014,  1015,  1017,  1026,  1026,
    1026,  1026,  1026,  1028,  1029,  1029,  1029,  1029,  1029,  1029,
    1029,  1029,  1030,  1030,  1034,  1034,  1036,  1037,  1038,  1039,
    1040,  1042,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,
    1050,  1051,  1053,  1054,  1056,  1057,  1058,  1059,  1063,  1064,
    1065,  1066,  1068,  1069,  1071,  1072,  1074,  1075,  1076,  1077,
    1078,  1079,  1080,  1084,  1085,  1089,  1090,  1092,  1093,  1098,
    1099,  1100,  1104,  1105,  1106,  1108,  1109,  1110,  1111,  1112,
    1114,  1116,  1118,  1119,  1120,  1121,  1122,  1123,  1125,  1126,
    1127,  1128,  1129,  1130,  1132,  1132,  1134,  1136,  1138,  1140,
    1141,  1142,  1143,  1145,  1145,  1145,  1145,  1145,  1145,  1145,
    1146,  1146,  1146,  1146,  1146,  1148,  1150,  1151,  1153,  1154,
    1156,  1158,  1160,  1171,  1175,  1179,  1180,  1191,  1194,  1226,
    1232,  1234,  1236,  1241,  1241,  1248,  1248,  1250,  1250,  1257,
    1261,  1266,  1274,  1280,  1284,  1289,  1290,  1292,  1292,  1294,
    1294,  1296,  1297,  1299,  1299,  1305,  1306,  1308,  1312,  1317,
    1323,  1330,  1331,  1332,  1333,  1335,  1336,  1337,  1343,  1343,
    1345,  1347,  1351,  1356,  1366,  1373,  1381,  1390,  1391,  1392,
    1393,  1394,  1395,  1396,  1397,  1398,  1399,  1401,  1407,  1407,
    1410,  1414
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
  "TEMPORARY", "TIMESTAMP", "CURRENT_TIMESTAMP", "CURRENT_DATE",
  "CURRENT_TIME", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "ENCODING", "INTEGER", "NATURAL", "PREPARE",
  "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "BIGINT",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA",
  "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS",
  "ORDER", "OVER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PARTITION", "PLAN", "SHOW", "TEXT",
  "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC",
  "END", "FOR", "INT", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN",
  "IS", "OF", "ON", "OR", "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND",
  "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS",
  "DAYS", "MONTHS", "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN",
  "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED",
  "SHARE", "RANGE", "ROWS", "GROUPS", "UNBOUNDED", "FOLLOWING",
  "PRECEDING", "CURRENT_ROW", "UNIQUE", "PRIMARY", "FOREIGN", "KEY",
  "REFERENCES", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_import_export_options",
  "import_export_options", "export_statement", "show_statement",
  "create_statement", "opt_not_exists", "table_elem_commalist",
  "table_elem", "column_def", "column_type", "opt_time_precision",
  "opt_decimal_specification", "opt_column_constraints",
  "column_constraints", "column_constraint", "table_constraint",
  "references_spec", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_extended_literal_list", "extended_literal_list",
  "casted_extended_literal", "extended_literal", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "opt_window", "opt_partition", "opt_frame_clause",
  "frame_type", "frame_bound", "extract_expr", "cast_expr",
  "datetime_field", "datetime_field_plural", "duration_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "timestamp_literal", "time_literal",
  "interval_literal", "param_expr", "current_timestamp",
  "current_date", "current_time", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
  "opt_locking_clause", "opt_locking_clause_list", "locking_clause",
  "row_lock_mode", "opt_row_lock_policy", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-542)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-359)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     687,    44,    53,    77,   110,    53,     4,    47,    80,    89,
      53,   161,    18,     9,    51,   191,    95,    95,    95,   261,
      96,  -542,   201,  -542,   201,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,   -24,  -542,   330,
     109,  -542,   151,   274,  -542,   230,   230,   230,    53,   370,
      53,   254,  -542,   268,   -24,   276,   -40,   268,   268,   268,
      53,  -542,   290,   220,  -542,  -542,  -542,  -542,  -542,  -542,
     628,  -542,   336,  -542,  -542,   303,    56,  -542,   180,  -542,
     439,   512,   440,   327,   455,    53,    53,   384,  -542,   379,
     289,   483,   438,    53,   291,   292,   490,   490,   490,   492,
      53,    53,  -542,   302,   191,  -542,   305,   491,   485,  -542,
    -542,  -542,   -24,   385,   373,   -24,    45,  -542,  -542,  -542,
     665,   504,  -542,  -542,  -542,   314,   509,  -542,   517,   320,
    -542,  -542,    26,  -542,   331,   329,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,   482,  -542,   398,   -33,   289,   352,
    -542,   490,   531,   225,   365,   -35,  -542,  -542,   453,  -542,
    -542,  -542,   -50,   -50,   -50,  -542,  -542,  -542,  -542,  -542,
     547,  -542,  -542,  -542,   352,   472,  -542,  -542,    56,  -542,
    -542,   352,   472,   352,    57,   430,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,   308,  -542,  -542,   263,   263,  -542,  -542,  -542,
     512,  -542,    53,   551,   446,    27,   428,   -12,   377,   381,
     382,   147,   442,   387,   532,  -542,   326,    68,   380,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,   474,  -542,    30,   389,  -542,
     352,   483,  -542,   534,  -542,  -542,   390,    23,  -542,   384,
    -542,   391,    75,  -542,   493,   388,  -542,    50,    45,   -24,
     393,  -542,   232,    45,    68,   536,   113,   -21,  -542,   430,
    -542,   461,  -542,  -542,  -542,   402,   503,  -542,   713,   404,
     426,   427,   111,  -542,  -542,  -542,   446,     7,    17,   543,
     263,   352,   352,   104,   -36,   409,   532,   719,   352,   203,
     410,    99,   352,   352,   532,  -542,   532,   -37,   413,    69,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   491,    53,  -542,   603,   512,
      68,  -542,   268,    23,   606,   370,   181,  -542,   512,  -542,
     547,    21,   384,  -542,   352,  -542,   608,  -542,  -542,  -542,
    -542,   352,  -542,  -542,  -542,   430,   352,   352,  -542,   441,
    -542,   450,   154,  -542,   713,   531,   490,  -542,  -542,   419,
    -542,   421,  -542,  -542,   422,  -542,  -542,   425,  -542,  -542,
    -542,  -542,   431,  -542,  -542,  -542,   173,   531,   433,   444,
    -542,    27,  -542,   542,   352,  -542,  -542,   429,   527,   155,
     131,   142,   352,   352,  -542,   543,   528,   128,  -542,  -542,
    -542,   515,   650,   744,   532,   445,   326,  -542,   529,   443,
     744,   744,   744,   744,   576,   576,   576,   576,   203,   203,
    -106,  -106,  -106,   -97,   447,  -542,  -542,   182,   641,   188,
    -542,  -542,  -542,    63,   189,  -542,   446,  -542,   196,  -542,
     448,  -542,    46,  -542,   575,  -542,  -542,  -542,  -542,    68,
      68,   584,  -542,   531,  -542,   487,  -542,   454,   213,  -542,
     646,   648,  -542,   649,   651,   653,  -542,  -542,   553,  -542,
     486,    53,  -542,   173,  -542,  -542,   219,   531,   531,  -542,
     466,  -542,   227,  -542,   352,   713,   352,   352,  -542,   112,
     215,   467,  -542,   532,   744,   326,   476,   228,  -542,  -542,
    -542,  -542,  -542,   659,   370,  -542,   477,   567,  -542,  -542,
    -542,   594,   595,   596,   577,    21,   675,  -542,  -542,  -542,
     552,  -542,  -542,    79,  -542,  -542,  -542,   494,   229,   495,
     498,   500,  -542,  -542,   289,  -542,  -542,  -542,   234,   235,
     572,   542,   107,   501,    68,   249,  -542,   352,  -542,   719,
     502,   241,  -542,  -542,  -542,  -542,    46,    21,  -542,  -542,
    -542,    21,   510,   505,   352,  -542,  -542,  -542,   676,  -542,
    -542,  -542,  -542,  -542,   513,   559,   472,  -542,  -542,  -542,
    -542,    68,  -542,  -542,  -542,  -542,   207,   531,   -20,   506,
    -542,   352,   301,   508,   352,   252,   352,  -542,  -542,   388,
    -542,  -542,  -542,   514,    20,   531,    68,  -542,  -542,    68,
    -542,   184,    37,   221,  -542,  -542,   260,  -542,  -542,   571,
    -542,  -542,  -542,    37,  -542
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     359,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   338,     0,
     313,   111,    33,     0,    50,    57,    57,    57,     0,     0,
       0,     0,   312,   106,     0,     0,     0,   106,   106,   106,
       0,    48,     0,   340,   341,    29,    26,    28,    27,     1,
     339,     2,     0,     6,     5,   159,   120,   121,   151,   103,
       0,   169,     0,     0,   316,     0,     0,   145,    37,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     4,     0,     0,   139,   133,
     134,   132,     0,   136,     0,     0,   165,   314,   285,   288,
     290,     0,   300,   301,   302,     0,     0,   291,     0,     0,
     286,   287,     0,   299,     0,   168,   170,   172,   174,   273,
     274,   275,   289,   276,   277,   280,   281,   278,   279,   282,
     283,   284,    32,    31,     0,   315,     0,     0,   115,     0,
     110,     0,     0,     0,     0,   145,   117,   105,     0,   128,
     127,    38,    41,    41,    41,   104,   101,   102,   343,   342,
       0,   290,   158,   138,     0,   151,   124,   123,   125,   135,
     131,     0,   151,     0,     0,   326,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     295,   293,     0,   292,   294,   298,     0,   175,   176,    34,
       0,    56,     0,     0,   339,     0,     0,   269,     0,     0,
       0,     0,     0,     0,     0,   271,     0,   144,   178,   185,
     186,   187,   180,   182,   188,   181,   201,   189,   190,   191,
     192,   184,   179,   194,   195,     0,   360,     0,     0,   113,
       0,     0,   116,     0,   107,   108,     0,     0,    47,   145,
      46,    24,     0,    22,   142,   140,   166,   324,   165,     0,
     150,   152,   157,   165,   161,   163,   160,     0,   129,   325,
     327,     0,   296,   297,   171,     0,     0,    53,     0,     0,
       0,     0,     0,    58,    60,    61,   339,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,     0,   196,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
     119,   118,   106,     0,     0,     0,     0,    36,     0,    20,
       0,     0,   145,   141,     0,   322,     0,   323,   177,   122,
     126,     0,   156,   155,   154,   326,     0,     0,   331,     0,
     333,     0,   337,   328,     0,     0,     0,    80,    73,     0,
      76,    86,    77,    63,     0,    70,    71,     0,    67,    68,
      75,    78,    83,    72,    74,    64,    88,     0,     0,     0,
      52,     0,    55,   236,     0,   270,   272,     0,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,   193,   183,
     212,   213,     0,   208,     0,     0,     0,   199,     0,   211,
     210,   226,   227,   228,   229,   230,   231,   232,   203,   202,
     205,   204,   206,   207,     0,    35,   361,     0,     0,     0,
      45,    43,    40,     0,     0,    23,   339,   143,   303,   305,
       0,   307,   320,   306,   147,   167,   321,   153,   130,   164,
     162,     0,   334,     0,   336,     0,   329,     0,     0,    51,
       0,     0,    69,     0,     0,     0,    79,    95,     0,    94,
       0,     0,    62,    87,    89,    91,     0,     0,     0,    59,
       0,   233,     0,   224,     0,     0,     0,     0,   218,     0,
       0,     0,   266,     0,   209,     0,     0,     0,   200,   267,
     112,   109,    39,     0,     0,    25,     0,     0,   355,   347,
     353,   351,   354,   349,     0,     0,     0,   319,   311,   317,
       0,   137,   332,   337,   335,   173,    54,     0,     0,     0,
       0,     0,    96,    93,   115,    90,    92,    98,     0,     0,
     238,   236,     0,     0,   222,     0,   221,     0,   225,   268,
       0,     0,   216,   214,    44,    42,   320,     0,   350,   352,
     348,     0,   304,   321,     0,   330,    66,    85,     0,    81,
      65,    82,   100,    97,     0,     0,   151,   234,   250,   251,
     219,   223,   217,   215,   308,   344,   356,     0,   149,     0,
      99,     0,   241,     0,     0,     0,     0,   146,    84,   237,
     242,   243,   244,     0,     0,     0,   357,   345,   318,   148,
     235,     0,     0,     0,   249,   239,     0,   248,   246,     0,
     247,   245,   346,     0,   240
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -542,  -542,  -542,   632,  -542,   682,  -542,   349,  -542,   456,
    -542,  -542,  -542,  -542,  -332,   -83,   304,   361,  -542,  -542,
    -542,   436,  -542,   312,  -542,  -349,  -542,  -542,  -542,  -542,
     216,  -542,  -431,  -542,   -46,  -542,  -542,  -542,  -542,  -542,
    -542,  -153,  -542,  -542,   464,  -217,   -70,  -542,   170,   -53,
     -26,  -542,  -542,   -87,   432,  -542,  -542,  -542,  -147,  -542,
    -542,  -183,  -542,   345,  -542,  -542,    91,  -312,  -542,  -249,
     516,   520,   362,  -155,  -205,  -542,  -542,  -542,  -542,  -542,
    -542,   416,  -542,  -542,  -542,   163,  -542,  -542,  -542,  -541,
    -542,  -542,  -161,  -542,  -542,  -542,  -542,  -542,  -542,   -65,
    -542,  -542,   605,   -90,  -542,  -542,  -542,  -542,   618,  -542,
    -542,  -542,  -542,  -542,  -498,   148,  -542,  -542,  -542,    -2,
    -542,  -542,   167,   463,  -542,   383,  -542,   473,  -542,   218,
    -542,  -542,  -542,   668,  -542,  -542,  -542,  -542,  -366
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   272,   273,    23,    66,
      24,   153,    25,    26,    89,   172,   268,   356,    27,    28,
      29,    84,   302,   303,   304,   406,   496,   492,   502,   503,
     504,   305,   505,    30,    93,    31,   264,   265,    32,    33,
      34,   163,    35,   165,   166,    36,   185,   186,   187,    77,
     112,   113,   190,    78,   184,   274,   362,   363,   160,   551,
     627,   116,   280,   281,   374,   108,   195,   275,   134,   135,
     136,   137,   276,   277,   238,   239,   240,   241,   242,   243,
     244,   314,   245,   246,   247,   511,   606,   633,   634,   645,
     248,   249,   208,   209,   210,   250,   251,   252,   253,   254,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   467,   468,   469,   470,   471,    51,   472,
     156,   547,   548,   549,   368,   288,   289,   290,   382,   486,
      37,    38,    63,    64,   473,   544,   637,    71,   257
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    95,   278,    44,   237,   226,   427,   297,    52,   283,
      56,    99,   100,   101,   173,   174,   138,   182,   262,   488,
     415,    40,   183,   461,    40,   188,   641,   317,   188,   319,
     298,   119,   120,   330,   626,   487,   282,    75,   284,   286,
     642,   506,   330,   641,   378,   192,    87,   592,    90,   365,
     354,   159,   115,   365,   292,   293,    40,    97,   102,   422,
     227,   118,   119,   120,   223,   109,   266,   434,   121,   122,
     123,   124,   566,    60,    39,   355,   313,    45,   255,   423,
      42,   321,    57,   157,   158,   424,   344,    46,   345,   412,
     533,   168,    58,   616,   435,   224,    98,   345,   176,   177,
     457,   649,   512,   193,   110,   350,   228,   229,   230,   464,
     259,   317,   654,    43,    61,   534,   379,   553,    47,   432,
     194,   433,   357,    59,   527,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     111,   568,   569,   380,    48,   231,   267,   138,   126,   418,
     227,   118,   119,   120,   381,   138,   419,   420,   121,   122,
     123,   124,   279,   225,   127,   261,   573,   430,   431,   322,
     128,   377,    54,   620,   546,   285,   437,    49,   366,   129,
     364,   232,    55,   320,   307,   323,   308,   322,   643,   109,
      50,   644,   188,   438,    62,   233,   228,   229,   230,   299,
     300,   301,   585,   323,   413,   643,   416,    76,   644,   370,
     129,   130,   131,   581,    54,   474,   282,   466,   322,   312,
     295,   479,   480,   322,    94,   537,   322,   347,   110,   524,
     348,   322,   322,   576,   323,   231,   537,   517,   126,   323,
     484,   485,   323,   516,    53,   234,   235,   323,   323,   536,
     322,   625,    65,   236,   127,   454,   417,   423,   133,   114,
     128,    69,   312,   518,   111,   538,   323,   519,   520,   646,
     539,   232,   359,   178,   322,   360,   538,   540,   541,   348,
     497,   539,   618,   515,   138,   233,    75,   483,   540,   541,
     323,   258,   623,   138,   542,    70,   429,   498,  -356,   543,
     129,   130,   131,   489,   608,   542,   458,    80,   410,   629,
     543,   411,   118,   119,   120,   484,   485,    72,   579,   121,
     122,   123,   124,   522,   215,   372,   216,   577,   364,   227,
     118,   119,   120,    79,   322,   234,   235,   121,   122,   123,
     124,   624,   330,   236,   455,   499,   500,    81,   133,   501,
     323,   322,   373,   647,   648,   227,   118,   119,   120,   572,
      83,   574,   575,   121,   122,   123,   124,   323,   322,   369,
     610,    82,   521,    88,   375,   228,   229,   230,   462,   530,
      91,   463,   220,   526,   323,   532,   535,    75,   463,   220,
     650,   651,   341,   342,   343,   344,  -309,   345,    92,   126,
     324,   228,   229,   230,   196,   197,   198,   199,   200,   201,
     556,   602,    96,   348,   231,   127,   567,   126,   103,   348,
     104,   128,   611,   622,   571,   583,   597,   364,   364,   598,
     107,   603,   604,   127,   348,   348,   106,   325,   613,   128,
     231,   364,   117,   126,   152,   227,   118,   119,   120,   638,
     232,   154,   348,   121,   122,   123,   124,   652,   155,   127,
     348,   129,   130,   131,   233,   128,   630,   631,   632,   636,
     159,   639,   580,    67,    68,   161,   232,   269,   270,   129,
     130,   131,    85,    86,   326,   162,   164,   167,   169,   170,
     233,   315,   229,   230,   171,   175,   132,   181,    54,   564,
     183,   180,   191,   189,   327,   129,   130,   131,   211,   133,
     212,   328,   329,   213,   234,   235,   118,   119,   120,   330,
     331,   214,   236,   121,   122,   123,   124,   133,   219,   220,
     231,   221,   222,   126,   256,   227,   118,   119,   120,   537,
     234,   235,   260,   121,   122,   123,   124,   263,   236,   127,
     271,   114,   287,   133,   296,   128,   306,   332,   333,   334,
     335,   336,    15,   125,   337,   338,   316,   339,   340,   341,
     342,   343,   344,   309,   345,   346,   352,   310,   311,   538,
     233,   318,   229,   230,   539,   349,   353,   358,   364,   384,
     361,   540,   541,   371,   376,   129,   130,   131,   385,   386,
     407,   408,   409,   126,    75,   425,   456,   428,   542,   436,
     460,   476,  -356,   543,   482,   490,   481,   491,   493,   127,
     231,   494,   510,   126,   514,   128,   513,   495,  -358,   507,
     234,   235,   434,   325,   322,     1,   528,   345,   236,   127,
     508,   525,   529,   133,   531,   128,     2,   550,   545,   552,
     554,   555,   557,     3,   558,   559,   316,   560,     4,   561,
     562,   563,   570,   584,   578,   129,   130,   131,     5,   587,
     233,     6,     7,   582,   586,   588,   589,   590,   593,   591,
     605,   594,   619,     8,     9,   129,   130,   131,   621,   501,
     653,   596,   599,    10,     1,   600,    11,   601,   609,   612,
     132,   617,   105,   628,   635,     2,    74,   325,   329,   465,
    -310,   640,     3,   133,   459,   330,   477,     4,    12,   565,
     234,   235,    13,   509,   387,   351,   475,     5,   236,   421,
       6,     7,   291,   133,   607,   615,   294,   217,    14,   414,
     367,   388,     8,     9,    15,   389,   390,   391,   392,   393,
     218,   394,    10,   614,   326,    11,  -359,  -359,   478,   395,
    -359,  -359,   383,   339,   340,   341,   342,   343,   344,   523,
     345,   595,   179,     0,   426,     0,   325,    12,     0,     0,
       0,    13,   329,     0,   396,     0,    16,    17,    18,   330,
     331,     0,     0,     0,     0,     0,     0,    14,     0,     0,
       0,   325,   397,    15,   398,   399,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   400,
       0,     0,     0,   326,   401,     0,   402,   332,   333,   334,
     335,   336,     0,     0,   337,   338,   403,   339,   340,   341,
     342,   343,   344,   426,   345,    16,    17,    18,  -359,     0,
       0,   329,     0,     0,     0,     0,     0,     0,   330,   331,
       0,     0,     0,     0,     0,     0,   404,     0,     0,   405,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
       0,     0,     0,   330,  -359,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,   333,   334,   335,
     336,     0,     0,   337,   338,     0,   339,   340,   341,   342,
     343,   344,     0,   345,     0,     0,     0,     0,     0,     0,
       0,  -359,  -359,  -359,   335,   336,     0,     0,   337,   338,
       0,   339,   340,   341,   342,   343,   344,     0,   345
};

static const yytype_int16 yycheck[] =
{
       2,    54,   185,     5,   159,   158,   318,   224,    10,   192,
      12,    57,    58,    59,    97,    98,    81,   107,   165,   385,
       3,     3,    15,   355,     3,   112,     6,   232,   115,   234,
       3,     5,     6,   139,    54,   384,   191,    61,   193,   194,
      20,   407,   139,     6,    65,   115,    48,   545,    50,     3,
      27,    86,    78,     3,   215,   216,     3,    97,    60,    95,
       3,     4,     5,     6,    97,     9,   116,   104,    11,    12,
      13,    14,   503,    22,    30,    52,   231,    73,   161,   115,
       3,   236,    73,    85,    86,   121,   192,    83,   194,   306,
      27,    93,    83,   591,   131,   128,   136,   194,   100,   101,
     349,   642,   414,    58,    48,   260,    49,    50,    51,   358,
     163,   316,   653,     3,    63,    52,   137,   483,   114,   324,
      75,   326,   269,   114,   436,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      84,   507,   508,   164,    97,    88,   196,   212,    91,   310,
       3,     4,     5,     6,   175,   220,   311,   312,    11,    12,
      13,    14,   188,   196,   107,   200,   515,   322,   323,   119,
     113,    58,   196,   604,   128,   118,   107,    97,   128,   153,
     200,   124,    12,   236,   196,   135,   198,   119,   168,     9,
     101,   171,   279,   124,     3,   138,    49,    50,    51,   172,
     173,   174,   534,   135,   197,   168,   189,    37,   171,   279,
     153,   154,   155,   525,   196,   362,   371,   196,   119,   115,
     222,   376,   377,   119,    54,    29,   119,   197,    48,   434,
     200,   119,   119,   121,   135,    88,    29,    95,    91,   135,
     161,   162,   135,   112,    83,   188,   189,   135,   135,   466,
     119,   617,   157,   196,   107,   345,   309,   115,   201,    79,
     113,     0,   115,   121,    84,    69,   135,   422,   423,   635,
      74,   124,   197,   103,   119,   200,    69,    81,    82,   200,
     107,    74,   594,   128,   349,   138,    61,   133,    81,    82,
     135,    66,    85,   358,    98,   199,   197,   124,   102,   103,
     153,   154,   155,   386,   197,    98,   352,   198,   197,   621,
     103,   200,     4,     5,     6,   161,   162,   116,   523,    11,
      12,    13,    14,   195,     4,    93,     6,   112,   200,     3,
       4,     5,     6,     3,   119,   188,   189,    11,    12,    13,
      14,   134,   139,   196,   346,   172,   173,   196,   201,   176,
     135,   119,   120,   169,   170,     3,     4,     5,     6,   514,
     130,   516,   517,    11,    12,    13,    14,   135,   119,   278,
     121,    97,   425,     3,   283,    49,    50,    51,   197,   197,
     126,   200,   200,   436,   135,   197,   197,    61,   200,   200,
     169,   170,   189,   190,   191,   192,   200,   194,   130,    91,
      20,    49,    50,    51,   141,   142,   143,   144,   145,   146,
     197,   564,   136,   200,    88,   107,   197,    91,   128,   200,
     200,   113,   577,   606,   197,   197,   197,   200,   200,   200,
     127,   197,   197,   107,   200,   200,   100,    57,   197,   113,
      88,   200,     3,    91,     4,     3,     4,     5,     6,   197,
     124,   124,   200,    11,    12,    13,    14,   197,     3,   107,
     200,   153,   154,   155,   138,   113,   165,   166,   167,   624,
      86,   626,   525,    17,    18,    96,   124,   173,   174,   153,
     154,   155,    46,    47,   104,   196,     3,    49,   197,   197,
     138,    49,    50,    51,     4,     3,   188,     6,   196,   501,
      15,   196,   129,   118,   124,   153,   154,   155,     4,   201,
     196,   131,   132,     4,   188,   189,     4,     5,     6,   139,
     140,     4,   196,    11,    12,    13,    14,   201,   197,   200,
      88,    49,   134,    91,     3,     3,     4,     5,     6,    29,
     188,   189,   177,    11,    12,    13,    14,    94,   196,   107,
       3,    79,   122,   201,     3,   113,   128,   177,   178,   179,
     180,   181,   116,    51,   184,   185,   124,   187,   188,   189,
     190,   191,   192,   196,   194,   101,    42,   196,   196,    69,
     138,   194,    50,    51,    74,   196,   196,   196,   200,   128,
      97,    81,    82,   200,    58,   153,   154,   155,   196,    96,
     196,   175,   175,    91,    61,   196,     3,   197,    98,   196,
       4,     3,   102,   103,   164,   196,   175,   196,   196,   107,
      88,   196,    80,    91,    97,   113,   197,   196,     0,   196,
     188,   189,   104,    57,   119,     7,   107,   194,   196,   107,
     196,   196,   195,   201,     3,   113,    18,    72,   200,    65,
     163,   197,     6,    25,     6,     6,   124,     6,    30,     6,
     107,   175,   196,     4,   197,   153,   154,   155,    40,   102,
     138,    43,    44,   197,   197,    81,    81,    81,     3,   102,
     108,   129,     6,    55,    56,   153,   154,   155,   129,   176,
     119,   197,   197,    65,     7,   197,    68,   197,   197,   197,
     188,   196,    70,   197,   196,    18,    24,    57,   132,   360,
     200,   197,    25,   201,   353,   139,   371,    30,    90,   503,
     188,   189,    94,   411,    11,   261,   364,    40,   196,   313,
      43,    44,   212,   201,   571,   587,   220,   132,   110,   307,
     277,    28,    55,    56,   116,    32,    33,    34,    35,    36,
     132,    38,    65,   586,   104,    68,   180,   181,   375,    46,
     184,   185,   289,   187,   188,   189,   190,   191,   192,   119,
     194,   553,   104,    -1,   124,    -1,    57,    90,    -1,    -1,
      -1,    94,   132,    -1,    71,    -1,   158,   159,   160,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    57,    89,   116,    91,    92,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,   106,
      -1,    -1,    -1,   104,   111,    -1,   113,   177,   178,   179,
     180,   181,    -1,    -1,   184,   185,   123,   187,   188,   189,
     190,   191,   192,   124,   194,   158,   159,   160,   104,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   177,   178,   179,   180,
     181,    -1,    -1,   184,   185,    -1,   187,   188,   189,   190,
     191,   192,    -1,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,   178,   179,   180,   181,    -1,    -1,   184,   185,
      -1,   187,   188,   189,   190,   191,   192,    -1,   194
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    18,    25,    30,    40,    43,    44,    55,    56,
      65,    68,    90,    94,   110,   116,   158,   159,   160,   203,
     204,   205,   206,   210,   212,   214,   215,   220,   221,   222,
     235,   237,   240,   241,   242,   244,   247,   332,   333,    30,
       3,   321,     3,     3,   321,    73,    83,   114,    97,    97,
     101,   320,   321,    83,   196,   250,   321,    73,    83,   114,
      22,    63,     3,   334,   335,   157,   211,   211,   211,     0,
     199,   339,   116,   207,   207,    61,   250,   251,   255,     3,
     198,   196,    97,   130,   223,   223,   223,   321,     3,   216,
     321,   126,   130,   236,   250,   251,   136,    97,   136,   236,
     236,   236,   321,   128,   200,   205,   100,   127,   267,     9,
      48,    84,   252,   253,    79,   252,   263,     3,     4,     5,
       6,    11,    12,    13,    14,    51,    91,   107,   113,   153,
     154,   155,   188,   201,   270,   271,   272,   273,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,     4,   213,   124,     3,   322,   321,   321,    86,
     260,    96,   196,   243,     3,   245,   246,    49,   321,   197,
     197,     4,   217,   217,   217,     3,   321,   321,   250,   335,
     196,     6,   305,    15,   256,   248,   249,   250,   255,   118,
     254,   129,   248,    58,    75,   268,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   294,   295,
     296,     4,   196,     4,     4,     4,     6,   304,   310,   197,
     200,    49,   134,    97,   128,   196,   243,     3,    49,    50,
      51,    88,   124,   138,   188,   189,   196,   275,   276,   277,
     278,   279,   280,   281,   282,   284,   285,   286,   292,   293,
     297,   298,   299,   300,   301,   217,     3,   340,    66,   251,
     177,   200,   260,    94,   238,   239,   116,   196,   218,   218,
     218,     3,   208,   209,   257,   269,   274,   275,   263,   252,
     264,   265,   275,   263,   275,   118,   275,   122,   327,   328,
     329,   273,   294,   294,   272,   321,     3,   247,     3,   172,
     173,   174,   224,   225,   226,   233,   128,   196,   198,   196,
     196,   196,   115,   275,   283,    49,   124,   276,   194,   276,
     251,   275,   119,   135,    20,    57,   104,   124,   131,   132,
     139,   140,   177,   178,   179,   180,   181,   184,   185,   187,
     188,   189,   190,   191,   192,   194,   101,   197,   200,   196,
     275,   246,    42,   196,    27,    52,   219,   260,   196,   197,
     200,    97,   258,   259,   200,     3,   128,   325,   326,   268,
     248,   200,    93,   120,   266,   268,    58,    58,    65,   137,
     164,   175,   330,   329,   128,   196,    96,    11,    28,    32,
      33,    34,    35,    36,    38,    46,    71,    89,    91,    92,
     106,   111,   113,   123,   153,   156,   227,   196,   175,   175,
     197,   200,   247,   197,   256,     3,   189,   251,   294,   275,
     275,   283,    95,   115,   121,   196,   124,   269,   197,   197,
     275,   275,   276,   276,   104,   131,   196,   107,   124,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   305,   321,     3,   271,   236,   219,
       4,   216,   197,   200,   271,   209,   196,   315,   316,   317,
     318,   319,   321,   336,   260,   274,     3,   265,   327,   275,
     275,   175,   164,   133,   161,   162,   331,   227,   340,   217,
     196,   196,   229,   196,   196,   196,   228,   107,   124,   172,
     173,   176,   230,   231,   232,   234,   340,   196,   196,   225,
      80,   287,   269,   197,    97,   128,   112,    95,   121,   275,
     275,   251,   195,   119,   276,   196,   251,   269,   107,   195,
     197,     3,   197,    27,    52,   197,   247,    29,    69,    74,
      81,    82,    98,   103,   337,   200,   128,   323,   324,   325,
      72,   261,    65,   340,   163,   197,   197,     6,     6,     6,
       6,     6,   107,   175,   321,   232,   234,   197,   340,   340,
     196,   197,   275,   227,   275,   275,   121,   112,   197,   276,
     251,   269,   197,   197,     4,   216,   197,   102,    81,    81,
      81,   102,   316,     3,   129,   331,   197,   197,   200,   197,
     197,   197,   243,   197,   197,   108,   288,   287,   197,   197,
     121,   275,   197,   197,   324,   317,   316,   196,   269,     6,
     234,   129,   263,    85,   134,   340,    54,   262,   197,   269,
     165,   166,   167,   289,   290,   196,   275,   338,   197,   275,
     197,     6,    20,   168,   171,   291,   340,   169,   170,   291,
     169,   170,   197,   119,   291
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   202,   203,   204,   204,   205,   205,   205,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   210,   210,   211,
     211,   212,   213,   214,   214,   215,   215,   216,   217,   218,
     218,   218,   219,   219,   219,   219,   220,   220,   221,   221,
     221,   222,   222,   222,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   228,   228,   229,   229,   229,   230,   230,   231,
     231,   231,   231,   232,   232,   232,   232,   233,   233,   233,
     234,   235,   235,   235,   235,   236,   236,   237,   238,   239,
     240,   241,   242,   242,   243,   243,   244,   245,   245,   246,
     247,   247,   247,   248,   248,   249,   249,   250,   250,   251,
     251,   252,   253,   253,   253,   254,   254,   255,   256,   256,
     257,   258,   258,   259,   260,   260,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   266,   266,   266,   267,   267,
     268,   268,   268,   268,   268,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   273,   273,   273,   274,   275,   275,
     275,   275,   275,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   277,   277,   278,   278,   278,   278,
     278,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   280,   280,   281,   281,   281,   281,   282,   282,
     282,   282,   283,   283,   284,   284,   285,   285,   285,   285,
     285,   285,   285,   286,   286,   287,   287,   288,   288,   289,
     289,   289,   290,   290,   290,   291,   291,   291,   291,   291,
     292,   293,   294,   294,   294,   294,   294,   294,   295,   295,
     295,   295,   295,   295,   296,   296,   297,   298,   299,   300,
     300,   300,   300,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   302,   303,   303,   304,   304,
     305,   306,   307,   308,   309,   310,   310,   310,   310,   311,
     312,   313,   314,   315,   315,   316,   316,   317,   317,   318,
     318,   319,   320,   321,   321,   322,   322,   323,   323,   324,
     324,   325,   325,   326,   326,   327,   327,   328,   328,   329,
     329,   330,   330,   330,   330,   331,   331,   331,   332,   332,
     333,   334,   334,   335,   336,   336,   336,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   338,   339,   339,
     340,   340
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     6,     1,     1,     4,
       3,     0,     4,     2,     4,     2,     5,     5,     2,     3,
       2,     8,     7,     6,     9,     7,     3,     0,     1,     3,
       1,     1,     3,     1,     1,     4,     4,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     4,     3,     0,     5,     3,     0,     1,     0,     1,
       2,     1,     2,     2,     1,     1,     2,     5,     4,     6,
       3,     4,     4,     3,     4,     2,     0,     5,     1,     4,
       4,     2,     8,     5,     3,     0,     5,     1,     3,     3,
       2,     2,     6,     1,     1,     1,     3,     3,     3,     4,
       6,     2,     1,     1,     1,     1,     0,     7,     1,     0,
       1,     1,     0,     2,     2,     0,     4,     0,     2,     0,
       3,     0,     1,     3,     2,     1,     1,     0,     2,     0,
       2,     2,     4,     2,     4,     0,     1,     3,     1,     0,
       1,     3,     1,     6,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     5,     6,     5,     6,     4,     6,
       3,     5,     4,     5,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     4,     6,     6,     0,     3,     0,     2,
       5,     0,     1,     1,     1,     2,     2,     2,     2,     1,
       6,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     3,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     4,     1,
       3,     2,     1,     1,     3,     1,     0,     1,     5,     1,
       0,     2,     1,     1,     0,     1,     0,     1,     2,     3,
       5,     1,     3,     1,     2,     2,     1,     0,     1,     0,
       2,     1,     3,     3,     4,     6,     8,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     0,     1,     1,     0,
       1,     3
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
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2123 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2129 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 179 "bison_parser.y"
            { }
#line 2135 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 179 "bison_parser.y"
            { }
#line 2141 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2154 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2160 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2166 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2179 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2192 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2198 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2204 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2210 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2216 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2222 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2228 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 179 "bison_parser.y"
            { }
#line 2234 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2240 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_import_export_options: /* opt_import_export_options  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2246 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_export_options: /* import_export_options  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2252 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2258 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2264 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2270 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 179 "bison_parser.y"
            { }
#line 2276 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2289 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2295 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2301 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 179 "bison_parser.y"
            { }
#line 2307 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 179 "bison_parser.y"
            { }
#line 2313 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2319 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2325 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraints: /* column_constraints  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2331 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 179 "bison_parser.y"
            { }
#line 2337 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2343 "bison_parser.cpp"
        break;

    case YYSYMBOL_references_spec: /* references_spec  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).references_spec_t)); }
#line 2349 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2355 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 179 "bison_parser.y"
            { }
#line 2361 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2367 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2373 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2379 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2385 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2391 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2397 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 184 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2410 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2416 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2429 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2435 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2441 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2447 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2453 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2459 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2465 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2471 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2477 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 179 "bison_parser.y"
            { }
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 179 "bison_parser.y"
            { }
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2508 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2514 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2520 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2526 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2532 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2538 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2551 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2564 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2570 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 179 "bison_parser.y"
            { }
#line 2576 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2582 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2588 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2601 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_extended_literal_list: /* opt_extended_literal_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2614 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal_list: /* extended_literal_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2627 "bison_parser.cpp"
        break;

    case YYSYMBOL_casted_extended_literal: /* casted_extended_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2633 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal: /* extended_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2639 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2645 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2651 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2657 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2663 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2669 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2675 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2681 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2687 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2693 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2699 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2705 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2711 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2717 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2723 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2736 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2742 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 179 "bison_parser.y"
            { }
#line 2748 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2754 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2760 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2766 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 179 "bison_parser.y"
            { }
#line 2772 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 179 "bison_parser.y"
            { }
#line 2778 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 179 "bison_parser.y"
            { }
#line 2784 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2790 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2796 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2802 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2808 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2814 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2820 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2826 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2832 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2838 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2844 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2850 "bison_parser.cpp"
        break;

    case YYSYMBOL_timestamp_literal: /* timestamp_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2856 "bison_parser.cpp"
        break;

    case YYSYMBOL_time_literal: /* time_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2862 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2868 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2874 "bison_parser.cpp"
        break;

    case YYSYMBOL_current_timestamp: /* current_timestamp  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2880 "bison_parser.cpp"
        break;

    case YYSYMBOL_current_date: /* current_date  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2886 "bison_parser.cpp"
        break;

    case YYSYMBOL_current_time: /* current_time  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2892 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2898 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2904 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2910 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2923 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2929 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2935 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 180 "bison_parser.y"
            {
  free(((*yyvaluep).table_name).name);
  free(((*yyvaluep).table_name).schema);
}
#line 2944 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2950 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2956 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2962 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2968 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2974 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2980 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2986 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 2992 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 179 "bison_parser.y"
            { }
#line 2998 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 179 "bison_parser.y"
            { }
#line 3004 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 3010 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 3016 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 3022 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 3028 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 3034 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 179 "bison_parser.y"
            { }
#line 3040 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 3046 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 184 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 3059 "bison_parser.cpp"
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
#line 81 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3167 "bison_parser.cpp"

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
#line 337 "bison_parser.y"
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
#line 3396 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 356 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3407 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 362 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3418 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 369 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3427 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 373 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3436 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 377 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3442 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 378 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3448 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 379 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3454 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 381 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3460 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 382 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3466 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 383 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3472 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 384 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3478 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 385 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3484 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 386 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3490 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 387 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3496 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 388 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3502 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 389 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3508 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 390 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3514 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 396 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3520 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 397 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3526 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 399 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3535 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 403 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3544 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 408 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3553 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' extended_literal_list ')'  */
#line 412 "bison_parser.y"
                                           {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3563 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 422 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3569 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 423 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3575 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 424 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3581 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 432 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3591 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 440 "bison_parser.y"
                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3600 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_extended_literal_list ')'  */
#line 444 "bison_parser.y"
                                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3610 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 456 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3621 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_import_export_options opt_where  */
#line 462 "bison_parser.y"
                                                                     {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_export_option_t)->format);
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
  if ((yyvsp[-1].import_export_option_t)->encoding) {
    (yyval.import_stmt)->encoding = (yyvsp[-1].import_export_option_t)->encoding;
    (yyvsp[-1].import_export_option_t)->encoding = nullptr;
  }
  delete (yyvsp[-1].import_export_option_t);
}
#line 3638 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 475 "bison_parser.y"
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
#line 3657 "bison_parser.cpp"
    break;

  case 38: /* file_path: STRING  */
#line 490 "bison_parser.y"
                   { (yyval.sval) = (yyvsp[0].sval); }
#line 3663 "bison_parser.cpp"
    break;

  case 39: /* opt_import_export_options: WITH '(' import_export_options ')'  */
#line 492 "bison_parser.y"
                                                               { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3669 "bison_parser.cpp"
    break;

  case 40: /* opt_import_export_options: '(' import_export_options ')'  */
#line 493 "bison_parser.y"
                                { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3675 "bison_parser.cpp"
    break;

  case 41: /* opt_import_export_options: %empty  */
#line 494 "bison_parser.y"
              { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3681 "bison_parser.cpp"
    break;

  case 42: /* import_export_options: import_export_options ',' FORMAT file_type  */
#line 496 "bison_parser.y"
                                                                   {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3695 "bison_parser.cpp"
    break;

  case 43: /* import_export_options: FORMAT file_type  */
#line 505 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3704 "bison_parser.cpp"
    break;

  case 44: /* import_export_options: import_export_options ',' ENCODING STRING  */
#line 509 "bison_parser.y"
                                            {
  if ((yyvsp[-3].import_export_option_t)->encoding) {
    delete (yyvsp[-3].import_export_option_t);
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Encoding type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->encoding = (yyvsp[0].sval);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3719 "bison_parser.cpp"
    break;

  case 45: /* import_export_options: ENCODING STRING  */
#line 519 "bison_parser.y"
                  {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3728 "bison_parser.cpp"
    break;

  case 46: /* export_statement: COPY table_name TO file_path opt_import_export_options  */
#line 529 "bison_parser.y"
                                                                          {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3744 "bison_parser.cpp"
    break;

  case 47: /* export_statement: COPY select_with_paren TO file_path opt_import_export_options  */
#line 540 "bison_parser.y"
                                                                {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3759 "bison_parser.cpp"
    break;

  case 48: /* show_statement: SHOW TABLES  */
#line 556 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3765 "bison_parser.cpp"
    break;

  case 49: /* show_statement: SHOW COLUMNS table_name  */
#line 557 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3775 "bison_parser.cpp"
    break;

  case 50: /* show_statement: DESCRIBE table_name  */
#line 562 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3785 "bison_parser.cpp"
    break;

  case 51: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 573 "bison_parser.y"
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
#line 3803 "bison_parser.cpp"
    break;

  case 52: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 586 "bison_parser.y"
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
#line 3820 "bison_parser.cpp"
    break;

  case 53: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 598 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3832 "bison_parser.cpp"
    break;

  case 54: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 605 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3844 "bison_parser.cpp"
    break;

  case 55: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 612 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3857 "bison_parser.cpp"
    break;

  case 56: /* opt_not_exists: IF NOT EXISTS  */
#line 621 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3863 "bison_parser.cpp"
    break;

  case 57: /* opt_not_exists: %empty  */
#line 622 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3869 "bison_parser.cpp"
    break;

  case 58: /* table_elem_commalist: table_elem  */
#line 624 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3878 "bison_parser.cpp"
    break;

  case 59: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 628 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3887 "bison_parser.cpp"
    break;

  case 60: /* table_elem: column_def  */
#line 633 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3893 "bison_parser.cpp"
    break;

  case 61: /* table_elem: table_constraint  */
#line 634 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3899 "bison_parser.cpp"
    break;

  case 62: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 636 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraints_t)->constraints, (yyvsp[0].column_constraints_t)->references);
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
  delete (yyvsp[0].column_constraints_t);
}
#line 3911 "bison_parser.cpp"
    break;

  case 63: /* column_type: BIGINT  */
#line 644 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3917 "bison_parser.cpp"
    break;

  case 64: /* column_type: BOOLEAN  */
#line 645 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3923 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHAR '(' INTVAL ')'  */
#line 646 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3929 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 647 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3935 "bison_parser.cpp"
    break;

  case 67: /* column_type: DATE  */
#line 648 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3941 "bison_parser.cpp"
    break;

  case 68: /* column_type: DATETIME  */
#line 649 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3947 "bison_parser.cpp"
    break;

  case 69: /* column_type: DECIMAL opt_decimal_specification  */
#line 650 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3956 "bison_parser.cpp"
    break;

  case 70: /* column_type: DOUBLE  */
#line 654 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3962 "bison_parser.cpp"
    break;

  case 71: /* column_type: FLOAT  */
#line 655 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3968 "bison_parser.cpp"
    break;

  case 72: /* column_type: INT  */
#line 656 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3974 "bison_parser.cpp"
    break;

  case 73: /* column_type: INTEGER  */
#line 657 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3980 "bison_parser.cpp"
    break;

  case 74: /* column_type: INTERVAL  */
#line 658 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::INTERVAL}; }
#line 3986 "bison_parser.cpp"
    break;

  case 75: /* column_type: LONG  */
#line 659 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3992 "bison_parser.cpp"
    break;

  case 76: /* column_type: REAL  */
#line 660 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3998 "bison_parser.cpp"
    break;

  case 77: /* column_type: SMALLINT  */
#line 661 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 4004 "bison_parser.cpp"
    break;

  case 78: /* column_type: TEXT  */
#line 662 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 4010 "bison_parser.cpp"
    break;

  case 79: /* column_type: TIME opt_time_precision  */
#line 663 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 4016 "bison_parser.cpp"
    break;

  case 80: /* column_type: TIMESTAMP  */
#line 664 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4022 "bison_parser.cpp"
    break;

  case 81: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 665 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4028 "bison_parser.cpp"
    break;

  case 82: /* opt_time_precision: '(' INTVAL ')'  */
#line 667 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 4034 "bison_parser.cpp"
    break;

  case 83: /* opt_time_precision: %empty  */
#line 668 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 4040 "bison_parser.cpp"
    break;

  case 84: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 670 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4046 "bison_parser.cpp"
    break;

  case 85: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 671 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4052 "bison_parser.cpp"
    break;

  case 86: /* opt_decimal_specification: %empty  */
#line 672 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4058 "bison_parser.cpp"
    break;

  case 87: /* opt_column_constraints: column_constraints  */
#line 674 "bison_parser.y"
                                            { (yyval.column_constraints_t) = (yyvsp[0].column_constraints_t); }
#line 4064 "bison_parser.cpp"
    break;

  case 88: /* opt_column_constraints: %empty  */
#line 675 "bison_parser.y"
              { (yyval.column_constraints_t) = new ColumnConstraints(); }
#line 4070 "bison_parser.cpp"
    break;

  case 89: /* column_constraints: column_constraint  */
#line 677 "bison_parser.y"
                                       {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
}
#line 4079 "bison_parser.cpp"
    break;

  case 90: /* column_constraints: column_constraints column_constraint  */
#line 681 "bison_parser.y"
                                       {
  (yyvsp[-1].column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4088 "bison_parser.cpp"
    break;

  case 91: /* column_constraints: references_spec  */
#line 685 "bison_parser.y"
                  {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyval.column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
}
#line 4098 "bison_parser.cpp"
    break;

  case 92: /* column_constraints: column_constraints references_spec  */
#line 690 "bison_parser.y"
                                     {
  // Multiple foreign keys for the same column could be possible, so we do not raise an error in that case.
  // Think of foreign keys referenced on multiple levels (returned item references sold item references items).
  (yyvsp[-1].column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyvsp[-1].column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4110 "bison_parser.cpp"
    break;

  case 93: /* column_constraint: PRIMARY KEY  */
#line 698 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4116 "bison_parser.cpp"
    break;

  case 94: /* column_constraint: UNIQUE  */
#line 699 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4122 "bison_parser.cpp"
    break;

  case 95: /* column_constraint: NULL  */
#line 700 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4128 "bison_parser.cpp"
    break;

  case 96: /* column_constraint: NOT NULL  */
#line 701 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4134 "bison_parser.cpp"
    break;

  case 97: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 703 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4140 "bison_parser.cpp"
    break;

  case 98: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 704 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4146 "bison_parser.cpp"
    break;

  case 99: /* table_constraint: FOREIGN KEY '(' ident_commalist ')' references_spec  */
#line 705 "bison_parser.y"
                                                      { (yyval.table_constraint_t) = new ForeignKeyConstraint((yyvsp[-2].str_vec), (yyvsp[0].references_spec_t)); }
#line 4152 "bison_parser.cpp"
    break;

  case 100: /* references_spec: REFERENCES table_name opt_column_list  */
#line 707 "bison_parser.y"
                                                        { (yyval.references_spec_t) = new ReferencesSpecification((yyvsp[-1].table_name).schema, (yyvsp[-1].table_name).name, (yyvsp[0].str_vec)); }
#line 4158 "bison_parser.cpp"
    break;

  case 101: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 715 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4169 "bison_parser.cpp"
    break;

  case 102: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 721 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4180 "bison_parser.cpp"
    break;

  case 103: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 727 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4190 "bison_parser.cpp"
    break;

  case 104: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 733 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4200 "bison_parser.cpp"
    break;

  case 105: /* opt_exists: IF EXISTS  */
#line 739 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4206 "bison_parser.cpp"
    break;

  case 106: /* opt_exists: %empty  */
#line 740 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4212 "bison_parser.cpp"
    break;

  case 107: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 747 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4222 "bison_parser.cpp"
    break;

  case 108: /* alter_action: drop_action  */
#line 753 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4228 "bison_parser.cpp"
    break;

  case 109: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 755 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4237 "bison_parser.cpp"
    break;

  case 110: /* delete_statement: DELETE FROM table_name opt_where  */
#line 765 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4248 "bison_parser.cpp"
    break;

  case 111: /* truncate_statement: TRUNCATE table_name  */
#line 772 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4258 "bison_parser.cpp"
    break;

  case 112: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' extended_literal_list ')'  */
#line 783 "bison_parser.y"
                                                                                               {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4270 "bison_parser.cpp"
    break;

  case 113: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 790 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4282 "bison_parser.cpp"
    break;

  case 114: /* opt_column_list: '(' ident_commalist ')'  */
#line 798 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4288 "bison_parser.cpp"
    break;

  case 115: /* opt_column_list: %empty  */
#line 799 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4294 "bison_parser.cpp"
    break;

  case 116: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 806 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4305 "bison_parser.cpp"
    break;

  case 117: /* update_clause_commalist: update_clause  */
#line 813 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4314 "bison_parser.cpp"
    break;

  case 118: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 817 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4323 "bison_parser.cpp"
    break;

  case 119: /* update_clause: IDENTIFIER '=' expr  */
#line 822 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4333 "bison_parser.cpp"
    break;

  case 120: /* select_statement: opt_with_clause select_with_paren  */
#line 832 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4342 "bison_parser.cpp"
    break;

  case 121: /* select_statement: opt_with_clause select_no_paren  */
#line 836 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4351 "bison_parser.cpp"
    break;

  case 122: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 840 "bison_parser.y"
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
#line 4367 "bison_parser.cpp"
    break;

  case 125: /* select_within_set_operation_no_parentheses: select_clause  */
#line 854 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4373 "bison_parser.cpp"
    break;

  case 126: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 855 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4386 "bison_parser.cpp"
    break;

  case 127: /* select_with_paren: '(' select_no_paren ')'  */
#line 864 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4392 "bison_parser.cpp"
    break;

  case 128: /* select_with_paren: '(' select_with_paren ')'  */
#line 865 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4398 "bison_parser.cpp"
    break;

  case 129: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 867 "bison_parser.y"
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
#line 4417 "bison_parser.cpp"
    break;

  case 130: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 881 "bison_parser.y"
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
#line 4433 "bison_parser.cpp"
    break;

  case 131: /* set_operator: set_type opt_all  */
#line 893 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4442 "bison_parser.cpp"
    break;

  case 132: /* set_type: UNION  */
#line 898 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4451 "bison_parser.cpp"
    break;

  case 133: /* set_type: INTERSECT  */
#line 902 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4460 "bison_parser.cpp"
    break;

  case 134: /* set_type: EXCEPT  */
#line 906 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4469 "bison_parser.cpp"
    break;

  case 135: /* opt_all: ALL  */
#line 911 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4475 "bison_parser.cpp"
    break;

  case 136: /* opt_all: %empty  */
#line 912 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4481 "bison_parser.cpp"
    break;

  case 137: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 914 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4495 "bison_parser.cpp"
    break;

  case 138: /* opt_distinct: DISTINCT  */
#line 924 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4501 "bison_parser.cpp"
    break;

  case 139: /* opt_distinct: %empty  */
#line 925 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4507 "bison_parser.cpp"
    break;

  case 141: /* opt_from_clause: from_clause  */
#line 929 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4513 "bison_parser.cpp"
    break;

  case 142: /* opt_from_clause: %empty  */
#line 930 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4519 "bison_parser.cpp"
    break;

  case 143: /* from_clause: FROM table_ref  */
#line 932 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4525 "bison_parser.cpp"
    break;

  case 144: /* opt_where: WHERE expr  */
#line 934 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4531 "bison_parser.cpp"
    break;

  case 145: /* opt_where: %empty  */
#line 935 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4537 "bison_parser.cpp"
    break;

  case 146: /* opt_group: GROUP BY expr_list opt_having  */
#line 937 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4547 "bison_parser.cpp"
    break;

  case 147: /* opt_group: %empty  */
#line 942 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4553 "bison_parser.cpp"
    break;

  case 148: /* opt_having: HAVING expr  */
#line 944 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4559 "bison_parser.cpp"
    break;

  case 149: /* opt_having: %empty  */
#line 945 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4565 "bison_parser.cpp"
    break;

  case 150: /* opt_order: ORDER BY order_list  */
#line 947 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4571 "bison_parser.cpp"
    break;

  case 151: /* opt_order: %empty  */
#line 948 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4577 "bison_parser.cpp"
    break;

  case 152: /* order_list: order_desc  */
#line 950 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4586 "bison_parser.cpp"
    break;

  case 153: /* order_list: order_list ',' order_desc  */
#line 954 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4595 "bison_parser.cpp"
    break;

  case 154: /* order_desc: expr opt_order_type  */
#line 959 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4601 "bison_parser.cpp"
    break;

  case 155: /* opt_order_type: ASC  */
#line 961 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4607 "bison_parser.cpp"
    break;

  case 156: /* opt_order_type: DESC  */
#line 962 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4613 "bison_parser.cpp"
    break;

  case 157: /* opt_order_type: %empty  */
#line 963 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4619 "bison_parser.cpp"
    break;

  case 158: /* opt_top: TOP int_literal  */
#line 967 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4625 "bison_parser.cpp"
    break;

  case 159: /* opt_top: %empty  */
#line 968 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4631 "bison_parser.cpp"
    break;

  case 160: /* opt_limit: LIMIT expr  */
#line 970 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4637 "bison_parser.cpp"
    break;

  case 161: /* opt_limit: OFFSET expr  */
#line 971 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4643 "bison_parser.cpp"
    break;

  case 162: /* opt_limit: LIMIT expr OFFSET expr  */
#line 972 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4649 "bison_parser.cpp"
    break;

  case 163: /* opt_limit: LIMIT ALL  */
#line 973 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4655 "bison_parser.cpp"
    break;

  case 164: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 974 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4661 "bison_parser.cpp"
    break;

  case 165: /* opt_limit: %empty  */
#line 975 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4667 "bison_parser.cpp"
    break;

  case 166: /* expr_list: expr_alias  */
#line 980 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4676 "bison_parser.cpp"
    break;

  case 167: /* expr_list: expr_list ',' expr_alias  */
#line 984 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4685 "bison_parser.cpp"
    break;

  case 168: /* opt_extended_literal_list: extended_literal_list  */
#line 990 "bison_parser.y"
                                                  { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4691 "bison_parser.cpp"
    break;

  case 169: /* opt_extended_literal_list: %empty  */
#line 991 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4697 "bison_parser.cpp"
    break;

  case 170: /* extended_literal_list: casted_extended_literal  */
#line 993 "bison_parser.y"
                                                {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4706 "bison_parser.cpp"
    break;

  case 171: /* extended_literal_list: extended_literal_list ',' casted_extended_literal  */
#line 997 "bison_parser.y"
                                                    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4715 "bison_parser.cpp"
    break;

  case 173: /* casted_extended_literal: CAST '(' extended_literal AS column_type ')'  */
#line 1002 "bison_parser.y"
                                                                                          {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4723 "bison_parser.cpp"
    break;

  case 174: /* extended_literal: literal  */
#line 1006 "bison_parser.y"
                           {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4736 "bison_parser.cpp"
    break;

  case 175: /* extended_literal: '-' num_literal  */
#line 1014 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4742 "bison_parser.cpp"
    break;

  case 176: /* extended_literal: '-' interval_literal  */
#line 1015 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4748 "bison_parser.cpp"
    break;

  case 177: /* expr_alias: expr opt_alias  */
#line 1017 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4761 "bison_parser.cpp"
    break;

  case 183: /* operand: '(' expr ')'  */
#line 1028 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4767 "bison_parser.cpp"
    break;

  case 193: /* operand: '(' select_no_paren ')'  */
#line 1030 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4775 "bison_parser.cpp"
    break;

  case 196: /* unary_expr: '-' operand  */
#line 1036 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4781 "bison_parser.cpp"
    break;

  case 197: /* unary_expr: NOT operand  */
#line 1037 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4787 "bison_parser.cpp"
    break;

  case 198: /* unary_expr: operand ISNULL  */
#line 1038 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4793 "bison_parser.cpp"
    break;

  case 199: /* unary_expr: operand IS NULL  */
#line 1039 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4799 "bison_parser.cpp"
    break;

  case 200: /* unary_expr: operand IS NOT NULL  */
#line 1040 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4805 "bison_parser.cpp"
    break;

  case 202: /* binary_expr: operand '-' operand  */
#line 1042 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4811 "bison_parser.cpp"
    break;

  case 203: /* binary_expr: operand '+' operand  */
#line 1043 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4817 "bison_parser.cpp"
    break;

  case 204: /* binary_expr: operand '/' operand  */
#line 1044 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4823 "bison_parser.cpp"
    break;

  case 205: /* binary_expr: operand '*' operand  */
#line 1045 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4829 "bison_parser.cpp"
    break;

  case 206: /* binary_expr: operand '%' operand  */
#line 1046 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4835 "bison_parser.cpp"
    break;

  case 207: /* binary_expr: operand '^' operand  */
#line 1047 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4841 "bison_parser.cpp"
    break;

  case 208: /* binary_expr: operand LIKE operand  */
#line 1048 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4847 "bison_parser.cpp"
    break;

  case 209: /* binary_expr: operand NOT LIKE operand  */
#line 1049 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4853 "bison_parser.cpp"
    break;

  case 210: /* binary_expr: operand ILIKE operand  */
#line 1050 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4859 "bison_parser.cpp"
    break;

  case 211: /* binary_expr: operand CONCAT operand  */
#line 1051 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4865 "bison_parser.cpp"
    break;

  case 212: /* logic_expr: expr AND expr  */
#line 1053 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4871 "bison_parser.cpp"
    break;

  case 213: /* logic_expr: expr OR expr  */
#line 1054 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4877 "bison_parser.cpp"
    break;

  case 214: /* in_expr: operand IN '(' expr_list ')'  */
#line 1056 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4883 "bison_parser.cpp"
    break;

  case 215: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1057 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4889 "bison_parser.cpp"
    break;

  case 216: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1058 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4895 "bison_parser.cpp"
    break;

  case 217: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1059 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4901 "bison_parser.cpp"
    break;

  case 218: /* case_expr: CASE expr case_list END  */
#line 1063 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4907 "bison_parser.cpp"
    break;

  case 219: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1064 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4913 "bison_parser.cpp"
    break;

  case 220: /* case_expr: CASE case_list END  */
#line 1065 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4919 "bison_parser.cpp"
    break;

  case 221: /* case_expr: CASE case_list ELSE expr END  */
#line 1066 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4925 "bison_parser.cpp"
    break;

  case 222: /* case_list: WHEN expr THEN expr  */
#line 1068 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4931 "bison_parser.cpp"
    break;

  case 223: /* case_list: case_list WHEN expr THEN expr  */
#line 1069 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4937 "bison_parser.cpp"
    break;

  case 224: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1071 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4943 "bison_parser.cpp"
    break;

  case 225: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1072 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4949 "bison_parser.cpp"
    break;

  case 226: /* comp_expr: operand '=' operand  */
#line 1074 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4955 "bison_parser.cpp"
    break;

  case 227: /* comp_expr: operand EQUALS operand  */
#line 1075 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4961 "bison_parser.cpp"
    break;

  case 228: /* comp_expr: operand NOTEQUALS operand  */
#line 1076 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4967 "bison_parser.cpp"
    break;

  case 229: /* comp_expr: operand '<' operand  */
#line 1077 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4973 "bison_parser.cpp"
    break;

  case 230: /* comp_expr: operand '>' operand  */
#line 1078 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4979 "bison_parser.cpp"
    break;

  case 231: /* comp_expr: operand LESSEQ operand  */
#line 1079 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4985 "bison_parser.cpp"
    break;

  case 232: /* comp_expr: operand GREATEREQ operand  */
#line 1080 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4991 "bison_parser.cpp"
    break;

  case 233: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1084 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 4997 "bison_parser.cpp"
    break;

  case 234: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1085 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5003 "bison_parser.cpp"
    break;

  case 235: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1089 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 5009 "bison_parser.cpp"
    break;

  case 236: /* opt_window: %empty  */
#line 1090 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 5015 "bison_parser.cpp"
    break;

  case 237: /* opt_partition: PARTITION BY expr_list  */
#line 1092 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 5021 "bison_parser.cpp"
    break;

  case 238: /* opt_partition: %empty  */
#line 1093 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 5027 "bison_parser.cpp"
    break;

  case 239: /* opt_frame_clause: frame_type frame_bound  */
#line 1098 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 5033 "bison_parser.cpp"
    break;

  case 240: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1099 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 5039 "bison_parser.cpp"
    break;

  case 241: /* opt_frame_clause: %empty  */
#line 1100 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 5047 "bison_parser.cpp"
    break;

  case 242: /* frame_type: RANGE  */
#line 1104 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 5053 "bison_parser.cpp"
    break;

  case 243: /* frame_type: ROWS  */
#line 1105 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 5059 "bison_parser.cpp"
    break;

  case 244: /* frame_type: GROUPS  */
#line 1106 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 5065 "bison_parser.cpp"
    break;

  case 245: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1108 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5071 "bison_parser.cpp"
    break;

  case 246: /* frame_bound: INTVAL PRECEDING  */
#line 1109 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5077 "bison_parser.cpp"
    break;

  case 247: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1110 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5083 "bison_parser.cpp"
    break;

  case 248: /* frame_bound: INTVAL FOLLOWING  */
#line 1111 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5089 "bison_parser.cpp"
    break;

  case 249: /* frame_bound: CURRENT_ROW  */
#line 1112 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5095 "bison_parser.cpp"
    break;

  case 250: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1114 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5101 "bison_parser.cpp"
    break;

  case 251: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1116 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5107 "bison_parser.cpp"
    break;

  case 252: /* datetime_field: SECOND  */
#line 1118 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5113 "bison_parser.cpp"
    break;

  case 253: /* datetime_field: MINUTE  */
#line 1119 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5119 "bison_parser.cpp"
    break;

  case 254: /* datetime_field: HOUR  */
#line 1120 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5125 "bison_parser.cpp"
    break;

  case 255: /* datetime_field: DAY  */
#line 1121 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5131 "bison_parser.cpp"
    break;

  case 256: /* datetime_field: MONTH  */
#line 1122 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5137 "bison_parser.cpp"
    break;

  case 257: /* datetime_field: YEAR  */
#line 1123 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5143 "bison_parser.cpp"
    break;

  case 258: /* datetime_field_plural: SECONDS  */
#line 1125 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5149 "bison_parser.cpp"
    break;

  case 259: /* datetime_field_plural: MINUTES  */
#line 1126 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5155 "bison_parser.cpp"
    break;

  case 260: /* datetime_field_plural: HOURS  */
#line 1127 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5161 "bison_parser.cpp"
    break;

  case 261: /* datetime_field_plural: DAYS  */
#line 1128 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5167 "bison_parser.cpp"
    break;

  case 262: /* datetime_field_plural: MONTHS  */
#line 1129 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5173 "bison_parser.cpp"
    break;

  case 263: /* datetime_field_plural: YEARS  */
#line 1130 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5179 "bison_parser.cpp"
    break;

  case 266: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1134 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5185 "bison_parser.cpp"
    break;

  case 267: /* array_index: operand '[' int_literal ']'  */
#line 1136 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5191 "bison_parser.cpp"
    break;

  case 268: /* between_expr: operand BETWEEN operand AND operand  */
#line 1138 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5197 "bison_parser.cpp"
    break;

  case 269: /* column_name: IDENTIFIER  */
#line 1140 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5203 "bison_parser.cpp"
    break;

  case 270: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1141 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5209 "bison_parser.cpp"
    break;

  case 271: /* column_name: '*'  */
#line 1142 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5215 "bison_parser.cpp"
    break;

  case 272: /* column_name: IDENTIFIER '.' '*'  */
#line 1143 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5221 "bison_parser.cpp"
    break;

  case 285: /* string_literal: STRING  */
#line 1148 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5227 "bison_parser.cpp"
    break;

  case 286: /* bool_literal: TRUE  */
#line 1150 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5233 "bison_parser.cpp"
    break;

  case 287: /* bool_literal: FALSE  */
#line 1151 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5239 "bison_parser.cpp"
    break;

  case 288: /* num_literal: FLOATVAL  */
#line 1153 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5245 "bison_parser.cpp"
    break;

  case 290: /* int_literal: INTVAL  */
#line 1156 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5251 "bison_parser.cpp"
    break;

  case 291: /* null_literal: NULL  */
#line 1158 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5257 "bison_parser.cpp"
    break;

  case 292: /* date_literal: DATE STRING  */
#line 1160 "bison_parser.y"
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
#line 5272 "bison_parser.cpp"
    break;

  case 293: /* timestamp_literal: TIMESTAMP STRING  */
#line 1171 "bison_parser.y"
                                     {
  (yyval.expr) = Expr::makeTimestampLiteral((yyvsp[0].sval));
}
#line 5280 "bison_parser.cpp"
    break;

  case 294: /* time_literal: TIME STRING  */
#line 1175 "bison_parser.y"
                           {
  (yyval.expr) = Expr::makeTimeLiteral((yyvsp[0].sval));
}
#line 5288 "bison_parser.cpp"
    break;

  case 295: /* interval_literal: INTVAL duration_field  */
#line 1179 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5294 "bison_parser.cpp"
    break;

  case 296: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1180 "bison_parser.y"
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
#line 5310 "bison_parser.cpp"
    break;

  case 297: /* interval_literal: INTERVAL INTVAL datetime_field  */
#line 1191 "bison_parser.y"
                                 {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field));
}
#line 5318 "bison_parser.cpp"
    break;

  case 298: /* interval_literal: INTERVAL STRING  */
#line 1194 "bison_parser.y"
                  {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit = kDatetimeNone;
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
#line 5354 "bison_parser.cpp"
    break;

  case 299: /* param_expr: '?'  */
#line 1226 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5364 "bison_parser.cpp"
    break;

  case 300: /* current_timestamp: CURRENT_TIMESTAMP  */
#line 1232 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeCurrentTimestamp(); }
#line 5370 "bison_parser.cpp"
    break;

  case 301: /* current_date: CURRENT_DATE  */
#line 1234 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCurrentDate(); }
#line 5376 "bison_parser.cpp"
    break;

  case 302: /* current_time: CURRENT_TIME  */
#line 1236 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCurrentTime(); }
#line 5382 "bison_parser.cpp"
    break;

  case 304: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1241 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5393 "bison_parser.cpp"
    break;

  case 308: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1250 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5404 "bison_parser.cpp"
    break;

  case 309: /* table_ref_commalist: table_ref_atomic  */
#line 1257 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5413 "bison_parser.cpp"
    break;

  case 310: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1261 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5422 "bison_parser.cpp"
    break;

  case 311: /* table_ref_name: table_name opt_table_alias  */
#line 1266 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5434 "bison_parser.cpp"
    break;

  case 312: /* table_ref_name_no_alias: table_name  */
#line 1274 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5444 "bison_parser.cpp"
    break;

  case 313: /* table_name: IDENTIFIER  */
#line 1280 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5453 "bison_parser.cpp"
    break;

  case 314: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1284 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5462 "bison_parser.cpp"
    break;

  case 315: /* opt_index_name: IDENTIFIER  */
#line 1289 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5468 "bison_parser.cpp"
    break;

  case 316: /* opt_index_name: %empty  */
#line 1290 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5474 "bison_parser.cpp"
    break;

  case 318: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1292 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5480 "bison_parser.cpp"
    break;

  case 320: /* opt_table_alias: %empty  */
#line 1294 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5486 "bison_parser.cpp"
    break;

  case 321: /* alias: AS IDENTIFIER  */
#line 1296 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5492 "bison_parser.cpp"
    break;

  case 322: /* alias: IDENTIFIER  */
#line 1297 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5498 "bison_parser.cpp"
    break;

  case 324: /* opt_alias: %empty  */
#line 1299 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5504 "bison_parser.cpp"
    break;

  case 325: /* opt_locking_clause: opt_locking_clause_list  */
#line 1305 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5510 "bison_parser.cpp"
    break;

  case 326: /* opt_locking_clause: %empty  */
#line 1306 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5516 "bison_parser.cpp"
    break;

  case 327: /* opt_locking_clause_list: locking_clause  */
#line 1308 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5525 "bison_parser.cpp"
    break;

  case 328: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1312 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5534 "bison_parser.cpp"
    break;

  case 329: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1317 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5545 "bison_parser.cpp"
    break;

  case 330: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1323 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5556 "bison_parser.cpp"
    break;

  case 331: /* row_lock_mode: UPDATE  */
#line 1330 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5562 "bison_parser.cpp"
    break;

  case 332: /* row_lock_mode: NO KEY UPDATE  */
#line 1331 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5568 "bison_parser.cpp"
    break;

  case 333: /* row_lock_mode: SHARE  */
#line 1332 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5574 "bison_parser.cpp"
    break;

  case 334: /* row_lock_mode: KEY SHARE  */
#line 1333 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5580 "bison_parser.cpp"
    break;

  case 335: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1335 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5586 "bison_parser.cpp"
    break;

  case 336: /* opt_row_lock_policy: NOWAIT  */
#line 1336 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5592 "bison_parser.cpp"
    break;

  case 337: /* opt_row_lock_policy: %empty  */
#line 1337 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5598 "bison_parser.cpp"
    break;

  case 339: /* opt_with_clause: %empty  */
#line 1343 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5604 "bison_parser.cpp"
    break;

  case 340: /* with_clause: WITH with_description_list  */
#line 1345 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5610 "bison_parser.cpp"
    break;

  case 341: /* with_description_list: with_description  */
#line 1347 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5619 "bison_parser.cpp"
    break;

  case 342: /* with_description_list: with_description_list ',' with_description  */
#line 1351 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5628 "bison_parser.cpp"
    break;

  case 343: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1356 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5638 "bison_parser.cpp"
    break;

  case 344: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1366 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5650 "bison_parser.cpp"
    break;

  case 345: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1373 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5663 "bison_parser.cpp"
    break;

  case 346: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1381 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5676 "bison_parser.cpp"
    break;

  case 347: /* opt_join_type: INNER  */
#line 1390 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5682 "bison_parser.cpp"
    break;

  case 348: /* opt_join_type: LEFT OUTER  */
#line 1391 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5688 "bison_parser.cpp"
    break;

  case 349: /* opt_join_type: LEFT  */
#line 1392 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5694 "bison_parser.cpp"
    break;

  case 350: /* opt_join_type: RIGHT OUTER  */
#line 1393 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5700 "bison_parser.cpp"
    break;

  case 351: /* opt_join_type: RIGHT  */
#line 1394 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5706 "bison_parser.cpp"
    break;

  case 352: /* opt_join_type: FULL OUTER  */
#line 1395 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5712 "bison_parser.cpp"
    break;

  case 353: /* opt_join_type: OUTER  */
#line 1396 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5718 "bison_parser.cpp"
    break;

  case 354: /* opt_join_type: FULL  */
#line 1397 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5724 "bison_parser.cpp"
    break;

  case 355: /* opt_join_type: CROSS  */
#line 1398 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5730 "bison_parser.cpp"
    break;

  case 356: /* opt_join_type: %empty  */
#line 1399 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5736 "bison_parser.cpp"
    break;

  case 360: /* ident_commalist: IDENTIFIER  */
#line 1410 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5745 "bison_parser.cpp"
    break;

  case 361: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1414 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5754 "bison_parser.cpp"
    break;


#line 5758 "bison_parser.cpp"

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

#line 1420 "bison_parser.y"


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

    // clang-format on
