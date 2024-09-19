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
#define YYSTYPE HSQL_STYPE
#define YYLTYPE HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse hsql_parse
#define yylex hsql_lex
#define yyerror hsql_error
#define yydebug hsql_debug
#define yynerrs hsql_nerrs

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

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char* msg) {
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
  YYSYMBOL_ENCODING = 24,                  /* ENCODING  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 26,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 27,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 28,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 29,                   /* SCHEMAS  */
  YYSYMBOL_CHARACTER_VARYING = 30,         /* CHARACTER_VARYING  */
  YYSYMBOL_REAL = 31,                      /* REAL  */
  YYSYMBOL_DECIMAL = 32,                   /* DECIMAL  */
  YYSYMBOL_SMALLINT = 33,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 34,                    /* BIGINT  */
  YYSYMBOL_SPATIAL = 35,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 36,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 37,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 38,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 39,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 40,                    /* COLUMN  */
  YYSYMBOL_CREATE = 41,                    /* CREATE  */
  YYSYMBOL_DELETE = 42,                    /* DELETE  */
  YYSYMBOL_DIRECT = 43,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 44,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 45,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 46,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 47,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 48,                   /* EXTRACT  */
  YYSYMBOL_CAST = 49,                      /* CAST  */
  YYSYMBOL_FORMAT = 50,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 51,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 52,                    /* HAVING  */
  YYSYMBOL_IMPORT = 53,                    /* IMPORT  */
  YYSYMBOL_INSERT = 54,                    /* INSERT  */
  YYSYMBOL_ISNULL = 55,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 56,                    /* OFFSET  */
  YYSYMBOL_RENAME = 57,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 58,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 59,                    /* SELECT  */
  YYSYMBOL_SORTED = 60,                    /* SORTED  */
  YYSYMBOL_TABLES = 61,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 62,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 63,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 64,                    /* UPDATE  */
  YYSYMBOL_VALUES = 65,                    /* VALUES  */
  YYSYMBOL_AFTER = 66,                     /* AFTER  */
  YYSYMBOL_ALTER = 67,                     /* ALTER  */
  YYSYMBOL_CROSS = 68,                     /* CROSS  */
  YYSYMBOL_DELTA = 69,                     /* DELTA  */
  YYSYMBOL_FLOAT = 70,                     /* FLOAT  */
  YYSYMBOL_GROUP = 71,                     /* GROUP  */
  YYSYMBOL_INDEX = 72,                     /* INDEX  */
  YYSYMBOL_INNER = 73,                     /* INNER  */
  YYSYMBOL_LIMIT = 74,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 75,                     /* LOCAL  */
  YYSYMBOL_MERGE = 76,                     /* MERGE  */
  YYSYMBOL_MINUS = 77,                     /* MINUS  */
  YYSYMBOL_ORDER = 78,                     /* ORDER  */
  YYSYMBOL_OVER = 79,                      /* OVER  */
  YYSYMBOL_OUTER = 80,                     /* OUTER  */
  YYSYMBOL_RIGHT = 81,                     /* RIGHT  */
  YYSYMBOL_TABLE = 82,                     /* TABLE  */
  YYSYMBOL_UNION = 83,                     /* UNION  */
  YYSYMBOL_USING = 84,                     /* USING  */
  YYSYMBOL_WHERE = 85,                     /* WHERE  */
  YYSYMBOL_CALL = 86,                      /* CALL  */
  YYSYMBOL_CASE = 87,                      /* CASE  */
  YYSYMBOL_CHAR = 88,                      /* CHAR  */
  YYSYMBOL_COPY = 89,                      /* COPY  */
  YYSYMBOL_DATE = 90,                      /* DATE  */
  YYSYMBOL_DATETIME = 91,                  /* DATETIME  */
  YYSYMBOL_DESC = 92,                      /* DESC  */
  YYSYMBOL_DROP = 93,                      /* DROP  */
  YYSYMBOL_ELSE = 94,                      /* ELSE  */
  YYSYMBOL_FILE = 95,                      /* FILE  */
  YYSYMBOL_FROM = 96,                      /* FROM  */
  YYSYMBOL_FULL = 97,                      /* FULL  */
  YYSYMBOL_HASH = 98,                      /* HASH  */
  YYSYMBOL_HINT = 99,                      /* HINT  */
  YYSYMBOL_INTO = 100,                     /* INTO  */
  YYSYMBOL_JOIN = 101,                     /* JOIN  */
  YYSYMBOL_LEFT = 102,                     /* LEFT  */
  YYSYMBOL_LIKE = 103,                     /* LIKE  */
  YYSYMBOL_LOAD = 104,                     /* LOAD  */
  YYSYMBOL_LONG = 105,                     /* LONG  */
  YYSYMBOL_NULL = 106,                     /* NULL  */
  YYSYMBOL_PARTITION = 107,                /* PARTITION  */
  YYSYMBOL_PLAN = 108,                     /* PLAN  */
  YYSYMBOL_SHOW = 109,                     /* SHOW  */
  YYSYMBOL_TEXT = 110,                     /* TEXT  */
  YYSYMBOL_THEN = 111,                     /* THEN  */
  YYSYMBOL_TIME = 112,                     /* TIME  */
  YYSYMBOL_VIEW = 113,                     /* VIEW  */
  YYSYMBOL_WHEN = 114,                     /* WHEN  */
  YYSYMBOL_WITH = 115,                     /* WITH  */
  YYSYMBOL_ADD = 116,                      /* ADD  */
  YYSYMBOL_ALL = 117,                      /* ALL  */
  YYSYMBOL_AND = 118,                      /* AND  */
  YYSYMBOL_ASC = 119,                      /* ASC  */
  YYSYMBOL_END = 120,                      /* END  */
  YYSYMBOL_FOR = 121,                      /* FOR  */
  YYSYMBOL_INT = 122,                      /* INT  */
  YYSYMBOL_KEY = 123,                      /* KEY  */
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
  YYSYMBOL_172_ = 172,                     /* '='  */
  YYSYMBOL_EQUALS = 173,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 174,                /* NOTEQUALS  */
  YYSYMBOL_175_ = 175,                     /* '<'  */
  YYSYMBOL_176_ = 176,                     /* '>'  */
  YYSYMBOL_LESS = 177,                     /* LESS  */
  YYSYMBOL_GREATER = 178,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 179,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 180,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 181,                  /* NOTNULL  */
  YYSYMBOL_182_ = 182,                     /* '+'  */
  YYSYMBOL_183_ = 183,                     /* '-'  */
  YYSYMBOL_184_ = 184,                     /* '*'  */
  YYSYMBOL_185_ = 185,                     /* '/'  */
  YYSYMBOL_186_ = 186,                     /* '%'  */
  YYSYMBOL_187_ = 187,                     /* '^'  */
  YYSYMBOL_UMINUS = 188,                   /* UMINUS  */
  YYSYMBOL_189_ = 189,                     /* '['  */
  YYSYMBOL_190_ = 190,                     /* ']'  */
  YYSYMBOL_SUBQUERY_AS_EXPR = 191,         /* SUBQUERY_AS_EXPR  */
  YYSYMBOL_192_ = 192,                     /* '('  */
  YYSYMBOL_193_ = 193,                     /* ')'  */
  YYSYMBOL_194_ = 194,                     /* '.'  */
  YYSYMBOL_195_ = 195,                     /* ';'  */
  YYSYMBOL_196_ = 196,                     /* ','  */
  YYSYMBOL_197_ = 197,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 198,                 /* $accept  */
  YYSYMBOL_input = 199,                    /* input  */
  YYSYMBOL_statement_list = 200,           /* statement_list  */
  YYSYMBOL_statement = 201,                /* statement  */
  YYSYMBOL_preparable_statement = 202,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 203,                /* opt_hints  */
  YYSYMBOL_hint_list = 204,                /* hint_list  */
  YYSYMBOL_hint = 205,                     /* hint  */
  YYSYMBOL_transaction_statement = 206,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 207,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 208,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 209,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 210,        /* execute_statement  */
  YYSYMBOL_import_statement = 211,         /* import_statement  */
  YYSYMBOL_file_type = 212,                /* file_type  */
  YYSYMBOL_file_path = 213,                /* file_path  */
  YYSYMBOL_opt_import_export_options = 214, /* opt_import_export_options  */
  YYSYMBOL_import_export_options = 215,    /* import_export_options  */
  YYSYMBOL_export_statement = 216,         /* export_statement  */
  YYSYMBOL_show_statement = 217,           /* show_statement  */
  YYSYMBOL_create_statement = 218,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 219,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 220,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 221,               /* table_elem  */
  YYSYMBOL_column_def = 222,               /* column_def  */
  YYSYMBOL_column_type = 223,              /* column_type  */
  YYSYMBOL_opt_time_precision = 224,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 225, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 226,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 227,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 228,        /* column_constraint  */
  YYSYMBOL_table_constraint = 229,         /* table_constraint  */
  YYSYMBOL_drop_statement = 230,           /* drop_statement  */
  YYSYMBOL_opt_exists = 231,               /* opt_exists  */
  YYSYMBOL_alter_statement = 232,          /* alter_statement  */
  YYSYMBOL_alter_action = 233,             /* alter_action  */
  YYSYMBOL_drop_action = 234,              /* drop_action  */
  YYSYMBOL_delete_statement = 235,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 236,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 237,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 238,          /* opt_column_list  */
  YYSYMBOL_update_statement = 239,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 240,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 241,            /* update_clause  */
  YYSYMBOL_select_statement = 242,         /* select_statement  */
  YYSYMBOL_query_expression = 243,         /* query_expression  */
  YYSYMBOL_query_expression_body = 244,    /* query_expression_body  */
  YYSYMBOL_query_expression_parens = 245,  /* query_expression_parens  */
  YYSYMBOL_query_term = 246,               /* query_term  */
  YYSYMBOL_subquery = 247,                 /* subquery  */
  YYSYMBOL_set_operator = 248,             /* set_operator  */
  YYSYMBOL_set_type = 249,                 /* set_type  */
  YYSYMBOL_opt_all = 250,                  /* opt_all  */
  YYSYMBOL_query_primary = 251,            /* query_primary  */
  YYSYMBOL_opt_distinct = 252,             /* opt_distinct  */
  YYSYMBOL_select_list = 253,              /* select_list  */
  YYSYMBOL_opt_from_clause = 254,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 255,              /* from_clause  */
  YYSYMBOL_opt_where = 256,                /* opt_where  */
  YYSYMBOL_opt_group = 257,                /* opt_group  */
  YYSYMBOL_opt_having = 258,               /* opt_having  */
  YYSYMBOL_opt_order = 259,                /* opt_order  */
  YYSYMBOL_order_list = 260,               /* order_list  */
  YYSYMBOL_order_desc = 261,               /* order_desc  */
  YYSYMBOL_opt_order_type = 262,           /* opt_order_type  */
  YYSYMBOL_opt_top = 263,                  /* opt_top  */
  YYSYMBOL_opt_limit = 264,                /* opt_limit  */
  YYSYMBOL_expr_list = 265,                /* expr_list  */
  YYSYMBOL_opt_extended_literal_list = 266, /* opt_extended_literal_list  */
  YYSYMBOL_extended_literal_list = 267,    /* extended_literal_list  */
  YYSYMBOL_casted_extended_literal = 268,  /* casted_extended_literal  */
  YYSYMBOL_extended_literal = 269,         /* extended_literal  */
  YYSYMBOL_expr_alias = 270,               /* expr_alias  */
  YYSYMBOL_expr = 271,                     /* expr  */
  YYSYMBOL_operand = 272,                  /* operand  */
  YYSYMBOL_scalar_expr = 273,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 274,               /* unary_expr  */
  YYSYMBOL_binary_expr = 275,              /* binary_expr  */
  YYSYMBOL_logic_expr = 276,               /* logic_expr  */
  YYSYMBOL_in_expr = 277,                  /* in_expr  */
  YYSYMBOL_case_expr = 278,                /* case_expr  */
  YYSYMBOL_case_list = 279,                /* case_list  */
  YYSYMBOL_exists_expr = 280,              /* exists_expr  */
  YYSYMBOL_comp_expr = 281,                /* comp_expr  */
  YYSYMBOL_function_expr = 282,            /* function_expr  */
  YYSYMBOL_opt_window = 283,               /* opt_window  */
  YYSYMBOL_opt_partition = 284,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 285,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 286,               /* frame_type  */
  YYSYMBOL_frame_bound = 287,              /* frame_bound  */
  YYSYMBOL_extract_expr = 288,             /* extract_expr  */
  YYSYMBOL_cast_expr = 289,                /* cast_expr  */
  YYSYMBOL_datetime_field = 290,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 291,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 292,           /* duration_field  */
  YYSYMBOL_array_expr = 293,               /* array_expr  */
  YYSYMBOL_array_index = 294,              /* array_index  */
  YYSYMBOL_between_expr = 295,             /* between_expr  */
  YYSYMBOL_column_name = 296,              /* column_name  */
  YYSYMBOL_literal = 297,                  /* literal  */
  YYSYMBOL_string_literal = 298,           /* string_literal  */
  YYSYMBOL_bool_literal = 299,             /* bool_literal  */
  YYSYMBOL_num_literal = 300,              /* num_literal  */
  YYSYMBOL_int_literal = 301,              /* int_literal  */
  YYSYMBOL_null_literal = 302,             /* null_literal  */
  YYSYMBOL_date_literal = 303,             /* date_literal  */
  YYSYMBOL_interval_literal = 304,         /* interval_literal  */
  YYSYMBOL_param_expr = 305,               /* param_expr  */
  YYSYMBOL_table_ref = 306,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 307,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 308, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 309,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 310,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 311,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 312,               /* table_name  */
  YYSYMBOL_opt_index_name = 313,           /* opt_index_name  */
  YYSYMBOL_table_alias = 314,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 315,          /* opt_table_alias  */
  YYSYMBOL_alias = 316,                    /* alias  */
  YYSYMBOL_opt_alias = 317,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 318,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 319,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 320,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 321,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 322,      /* opt_row_lock_policy  */
  YYSYMBOL_with_clause = 323,              /* with_clause  */
  YYSYMBOL_with_description_list = 324,    /* with_description_list  */
  YYSYMBOL_with_description = 325,         /* with_description  */
  YYSYMBOL_join_clause = 326,              /* join_clause  */
  YYSYMBOL_opt_join_type = 327,            /* opt_join_type  */
  YYSYMBOL_join_condition = 328,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 329,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 330           /* ident_commalist  */
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
#define YYFINAL  79
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   923

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  198
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  133
/* YYNRULES -- Number of rules.  */
#define YYNRULES  345
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  628

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   435


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
       2,     2,     2,     2,     2,     2,     2,   186,     2,     2,
     192,   193,   184,   182,   196,   183,   194,   185,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   195,
     175,   172,   176,   197,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   189,     2,   190,   187,     2,     2,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   173,   174,   177,
     178,   179,   180,   181,   188,   191
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   332,   332,   351,   357,   364,   368,   372,   373,   374,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     391,   392,   394,   398,   403,   407,   417,   418,   419,   421,
     421,   427,   433,   435,   439,   451,   457,   470,   485,   487,
     488,   489,   491,   500,   504,   514,   524,   535,   551,   552,
     557,   568,   581,   593,   600,   607,   616,   617,   619,   623,
     628,   629,   631,   638,   639,   640,   641,   642,   643,   644,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   660,   661,   663,   664,   665,   667,   668,   670,   674,
     679,   680,   681,   682,   684,   685,   693,   699,   705,   711,
     717,   718,   725,   731,   733,   743,   750,   761,   768,   776,
     777,   784,   791,   795,   800,   809,   809,   811,   831,   859,
     859,   870,   881,   892,   904,   905,   907,   909,   911,   916,
     920,   924,   929,   930,   932,   942,   943,   945,   947,   948,
     950,   952,   953,   955,   960,   962,   963,   965,   966,   968,
     972,   977,   979,   980,   981,   985,   986,   988,   989,   990,
     991,   992,   993,   998,  1002,  1008,  1009,  1011,  1015,  1020,
    1020,  1024,  1032,  1033,  1035,  1044,  1044,  1044,  1044,  1044,
    1046,  1047,  1047,  1047,  1047,  1047,  1047,  1047,  1047,  1048,
    1048,  1052,  1052,  1054,  1055,  1056,  1057,  1058,  1060,  1060,
    1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1071,
    1072,  1074,  1075,  1076,  1077,  1081,  1082,  1083,  1084,  1086,
    1087,  1089,  1090,  1092,  1093,  1094,  1095,  1096,  1097,  1098,
    1102,  1103,  1107,  1108,  1110,  1111,  1116,  1117,  1118,  1122,
    1123,  1124,  1126,  1127,  1128,  1129,  1130,  1132,  1134,  1136,
    1137,  1138,  1139,  1140,  1141,  1143,  1144,  1145,  1146,  1147,
    1148,  1150,  1150,  1152,  1154,  1156,  1158,  1159,  1160,  1161,
    1163,  1163,  1163,  1163,  1163,  1163,  1163,  1165,  1167,  1168,
    1170,  1171,  1173,  1175,  1177,  1188,  1189,  1200,  1232,  1241,
    1241,  1248,  1248,  1250,  1250,  1257,  1261,  1266,  1274,  1280,
    1284,  1289,  1290,  1292,  1292,  1294,  1294,  1296,  1297,  1299,
    1299,  1305,  1306,  1308,  1312,  1317,  1323,  1330,  1331,  1332,
    1333,  1335,  1336,  1337,  1343,  1345,  1349,  1354,  1370,  1377,
    1385,  1394,  1395,  1396,  1397,  1398,  1399,  1400,  1401,  1402,
    1403,  1405,  1411,  1411,  1414,  1418
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
  "EXECUTE", "EXPLAIN", "ENCODING", "INTEGER", "NATURAL", "PREPARE",
  "PRIMARY", "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT",
  "BIGINT", "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE",
  "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT",
  "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED",
  "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OVER", "OUTER", "RIGHT", "TABLE", "UNION",
  "USING", "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME",
  "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO",
  "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PARTITION", "PLAN",
  "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL",
  "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TOP",
  "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "NO", "ARRAY",
  "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR",
  "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS", "INTERVAL",
  "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK",
  "NOWAIT", "SKIP", "LOCKED", "SHARE", "RANGE", "ROWS", "GROUPS",
  "UNBOUNDED", "FOLLOWING", "PRECEDING", "CURRENT_ROW", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "SUBQUERY_AS_EXPR", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_import_export_options",
  "import_export_options", "export_statement", "show_statement",
  "create_statement", "opt_not_exists", "table_elem_commalist",
  "table_elem", "column_def", "column_type", "opt_time_precision",
  "opt_decimal_specification", "opt_column_constraints",
  "column_constraint_set", "column_constraint", "table_constraint",
  "drop_statement", "opt_exists", "alter_statement", "alter_action",
  "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "query_expression", "query_expression_body", "query_expression_parens",
  "query_term", "subquery", "set_operator", "set_type", "opt_all",
  "query_primary", "opt_distinct", "select_list", "opt_from_clause",
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
  "null_literal", "date_literal", "interval_literal", "param_expr",
  "table_ref", "table_ref_atomic", "nonjoin_table_ref_atomic",
  "table_ref_commalist", "table_ref_name", "table_ref_name_no_alias",
  "table_name", "opt_index_name", "table_alias", "opt_table_alias",
  "alias", "opt_alias", "opt_locking_clause", "opt_locking_clause_list",
  "locking_clause", "row_lock_mode", "opt_row_lock_policy", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-528)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-341)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     568,   102,   148,   156,   164,   148,   225,   105,   136,   163,
     152,   148,   231,    16,   234,    26,   305,   144,   144,   144,
     -23,   315,   145,  -528,   240,  -528,   240,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
     215,    20,  -528,  -528,   -24,   328,   166,  -528,   158,   275,
    -528,   253,   253,   253,   148,   376,   148,   375,   373,   268,
    -528,   271,  -528,   267,   -13,   271,   271,   271,   148,  -528,
     290,   232,  -528,  -528,  -528,  -528,  -528,   238,    18,  -528,
     568,  -528,   336,  -528,  -528,  -528,  -528,   307,  -528,   -24,
     310,   161,   -24,   215,    20,  -528,   439,    36,   447,   319,
     449,   148,   148,   368,  -528,   386,   279,  -528,  -528,  -528,
     408,   480,   437,   148,   481,   481,   481,   483,   148,   148,
    -528,   295,   305,  -528,  -528,  -528,   297,   408,  -528,  -528,
    -528,  -528,   408,   242,   369,  -528,  -528,   161,  -528,  -528,
    -528,   771,   300,   489,  -528,   490,  -528,  -528,    62,  -528,
     303,   301,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,   452,  -528,   366,   -65,   279,
     408,  -528,   481,   498,    79,    63,   311,   313,   314,   262,
     463,   324,   470,  -528,   190,  -528,   406,   312,  -528,    94,
     512,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,   343,   -55,  -528,
    -528,   428,  -528,   -82,   -82,   -82,  -528,  -528,  -528,  -528,
    -528,   519,   327,  -528,   134,   138,   468,   167,   -17,  -528,
     369,  -528,   369,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,    44,  -528,
     247,  -528,  -528,  -528,    36,  -528,   148,   523,   -23,    81,
     399,   138,   430,  -528,    38,   339,  -528,    11,    21,   469,
     247,   408,   408,   219,   180,   342,   470,   699,   408,   137,
      18,   -63,    17,   368,  -528,   408,  -528,   408,   532,   408,
    -528,  -528,   470,  -528,   470,    -7,   344,   -16,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   375,   408,   480,  -528,   497,  -528,  -528,
     348,    50,  -528,   368,  -528,   349,    88,  -528,   408,  -528,
    -528,  -528,   408,   408,  -528,   378,   420,  -528,   125,  -528,
    -528,   416,  -528,  -528,   353,   453,  -528,   678,   424,   357,
     124,  -528,  -528,  -528,   -23,   148,  -528,   548,    36,   473,
     408,  -528,  -528,   365,   472,   160,   216,   198,   408,   408,
    -528,   469,   456,    54,  -528,   -23,  -528,    34,  -528,   370,
    -528,    25,  -528,   493,  -528,  -528,  -528,   454,   635,   722,
     470,   379,   401,  -528,   459,   384,   722,   722,   722,   722,
     666,   666,   666,   666,   137,   137,   -50,   -50,   -50,   -96,
     387,   138,  -528,   271,    50,   570,   376,   179,  -528,    36,
    -528,   519,  -528,   138,   138,  -528,   514,   498,  -528,   417,
    -528,   678,   498,   481,  -528,  -528,   389,  -528,   390,  -528,
    -528,   394,  -528,  -528,   396,  -528,  -528,  -528,  -528,   397,
    -528,  -528,   130,   404,   498,  -528,    81,  -528,  -528,  -528,
     206,   405,  -528,   226,  -528,   408,   678,   408,   408,  -528,
     243,   235,   409,  -528,   410,   478,  -528,  -528,  -528,   524,
     527,   531,   511,    17,   596,  -528,  -528,  -528,   484,  -528,
     470,   722,   401,   421,   227,  -528,  -528,   616,   228,  -528,
    -528,  -528,   201,   236,  -528,  -528,   -85,  -528,   427,   237,
    -528,   620,   622,  -528,   623,   624,   625,  -528,   510,  -528,
    -528,   528,  -528,   130,  -528,   498,   244,  -528,  -528,   530,
     473,   -37,   445,   138,   249,  -528,   408,  -528,    25,    17,
    -528,  -528,  -528,    17,   202,   448,   408,   699,   446,   245,
    -528,  -528,  -528,  -528,   637,   376,  -528,  -528,  -528,  -528,
     455,   251,   457,   465,   466,  -528,  -528,  -528,   265,  -528,
     513,   567,  -528,  -528,  -528,  -528,   138,  -528,  -528,   436,
     498,   -34,  -528,  -528,  -528,  -528,  -528,  -528,   643,  -528,
    -528,  -528,  -528,   408,   298,   464,   408,   284,   408,  -528,
     471,   312,  -528,  -528,  -528,   475,    45,   498,   138,  -528,
    -528,   138,  -528,  -528,   -90,    32,    51,  -528,  -528,   286,
    -528,  -528,   545,  -528,  -528,  -528,    32,  -528
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,     0,     0,     0,     0,     0,     0,    30,    30,    30,
       0,     0,   343,     3,    21,    19,    21,    18,     8,     9,
       7,    11,    16,    17,    13,    14,    12,    15,    10,   115,
     148,   116,   119,   126,     0,     0,   299,   106,    33,     0,
      50,    57,    57,    57,     0,     0,     0,     0,   136,     0,
     298,   101,   127,     0,     0,   101,   101,   101,     0,    48,
       0,   324,   325,    29,    26,    28,    27,     0,     0,     1,
     342,     2,     0,     6,     5,   130,   131,     0,   129,     0,
     133,   162,     0,   148,     0,    98,     0,   166,     0,     0,
     302,     0,     0,   142,    37,     0,   110,   282,   155,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,   125,   124,     4,     0,     0,   122,   120,
     132,   128,     0,     0,   312,   123,   121,   162,   300,   277,
     280,   282,     0,     0,   283,     0,   278,   279,     0,   288,
       0,   165,   167,   169,   171,   270,   271,   272,   281,   273,
     274,   275,   276,    32,    31,     0,   301,     0,     0,   110,
       0,   105,     0,     0,     0,   266,     0,     0,     0,     0,
       0,     0,     0,   268,     0,   190,   139,   137,   163,   310,
     175,   182,   183,   184,   177,   179,   185,   178,   198,   186,
     187,   188,   189,   181,   176,   191,   192,     0,   142,   112,
     100,     0,    38,    41,    41,    41,    99,    96,    97,   327,
     326,     0,   147,   149,   154,   158,   160,   157,     0,   117,
     311,   313,   312,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   285,     0,   284,
     287,   172,   173,    34,     0,    56,     0,     0,     0,     0,
       0,   141,     0,   344,     0,     0,   108,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   194,     0,   193,
     127,     0,     0,   142,   138,     0,   308,     0,     0,     0,
     309,   174,     0,   195,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   102,   103,
       0,     0,    47,   142,    46,    24,     0,    22,     0,   153,
     152,   151,     0,     0,   317,     0,     0,   319,   323,   314,
     118,     0,   286,   168,     0,     0,    53,     0,     0,     0,
       0,    58,    60,    61,     0,     0,   109,     0,     0,   233,
       0,   267,   269,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,   180,     0,   140,   289,   291,     0,
     293,   306,   292,   144,   164,   209,   307,   210,     0,   205,
       0,     0,     0,   196,     0,   208,   207,   223,   224,   225,
     226,   227,   228,   229,   200,   199,   202,   201,   203,   204,
       0,   114,   113,   101,     0,     0,     0,     0,    36,     0,
      20,     0,   150,   161,   159,   320,     0,     0,   322,     0,
     315,     0,     0,     0,    79,    73,     0,    75,    85,    76,
      63,     0,    70,    71,     0,    67,    68,    74,    77,    82,
      72,    64,    87,     0,     0,    52,     0,    55,    35,   345,
       0,     0,   230,     0,   221,     0,     0,     0,     0,   215,
       0,     0,     0,   263,     0,     0,   339,   331,   337,   335,
     338,   333,     0,     0,     0,   305,   297,   303,     0,   134,
       0,   206,     0,     0,     0,   197,   264,     0,     0,    45,
      43,    40,     0,     0,    23,   318,   323,   321,     0,     0,
      51,     0,     0,    69,     0,     0,     0,    78,     0,    91,
      92,     0,    62,    86,    88,     0,     0,    59,   107,   235,
     233,     0,     0,   219,     0,   218,     0,   222,   306,     0,
     334,   336,   332,     0,   290,   307,     0,   265,     0,     0,
     213,   211,   104,    39,     0,     0,    25,   316,   170,    54,
       0,     0,     0,     0,     0,    90,    93,    89,     0,    95,
       0,   148,   231,   247,   248,   216,   220,   294,   328,   340,
       0,   146,   214,   212,    44,    42,    66,    84,     0,    80,
      65,    81,    94,     0,   238,     0,     0,     0,     0,   143,
       0,   234,   239,   240,   241,     0,     0,     0,   341,   329,
     304,   145,    83,   232,     0,     0,     0,   246,   236,     0,
     245,   243,     0,   244,   242,   330,     0,   237
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -528,  -528,  -528,   585,  -528,   640,  -528,   248,  -528,   317,
    -528,  -528,  -528,  -528,  -390,  -103,   150,   256,  -528,  -528,
    -528,   356,  -528,   217,  -528,  -353,  -528,  -528,  -528,  -528,
     149,  -528,  -528,   -56,  -528,  -528,  -528,  -528,  -528,  -528,
     502,  -528,  -528,   359,  -226,     1,   631,     2,   -19,    12,
     117,  -528,  -528,  -252,   411,  -528,  -528,  -528,  -171,  -528,
    -528,   -93,  -528,   351,  -528,  -528,   539,  -274,  -528,  -302,
     426,   433,   415,  -126,  -128,  -528,  -528,  -528,  -528,  -528,
    -528,   429,  -528,  -528,  -528,   174,  -528,  -528,  -528,  -527,
    -528,  -528,  -175,  -528,  -528,  -528,  -528,  -528,  -528,   -94,
    -528,  -528,   534,   -42,  -528,  -528,   557,  -528,  -528,  -418,
     154,  -528,  -528,  -528,     3,  -528,  -528,   168,   518,  -528,
     485,  -528,   486,  -528,   207,  -528,  -528,   593,  -528,  -528,
    -528,  -528,  -393
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,    23,    24,    83,   326,   327,    25,    74,
      26,   164,    27,    28,   105,   213,   322,   417,    29,    30,
      31,   100,   350,   351,   352,   452,   517,   513,   522,   523,
     524,   353,    32,   113,    33,   318,   319,    34,    35,    36,
     174,    37,   208,   209,    38,    39,    40,    62,    42,   185,
      92,    90,   131,    43,   110,   186,   283,   284,   171,   489,
     599,    91,   222,   223,   331,    58,   134,   187,   150,   151,
     152,   153,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   274,   197,   198,   199,   462,   571,   605,   606,   618,
     200,   201,   245,   246,   247,   202,   203,   204,   205,   206,
     155,   156,   157,   158,   159,   160,   161,   162,   376,   377,
     378,   379,   380,    59,   381,   167,   485,   486,   487,   291,
     229,   230,   231,   338,   430,    44,    71,    72,   382,   482,
     609,    81,   264
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     137,   224,    41,   154,   373,    47,   225,   227,    50,   117,
     118,   119,   214,   215,    60,   108,    64,   363,   598,    46,
      46,    77,    78,   109,   361,    63,   500,    85,   286,    85,
     170,   257,   346,   320,   506,    10,    10,   316,   614,   509,
     139,   140,   141,   298,   261,    68,    94,   334,   139,   140,
     141,   614,   277,   273,   279,   287,   460,   103,   281,   106,
     475,   526,   615,   258,    86,   544,    86,   140,   141,   262,
     129,   120,   289,   136,   415,   342,   428,   429,   508,   620,
     621,   287,    41,   115,   347,   142,   463,    69,   622,   298,
     393,   128,    16,   313,   135,   364,   390,   286,   289,   627,
     416,    88,   476,    88,   168,   169,   335,   477,   394,   348,
     321,   357,   383,   532,   478,   479,   211,   503,   494,   472,
     336,   217,   218,   116,   391,   579,   143,   259,   457,    45,
     374,   480,   568,   219,   143,  -340,   481,   312,    10,   313,
     493,   315,   144,   349,   265,   365,   366,   337,   277,   474,
     144,    46,   418,   484,   154,   266,   573,    89,   518,    48,
     154,   385,   285,   387,   388,   585,   389,    49,    20,    20,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,    77,   280,   597,   411,   145,
     146,   147,   519,   175,   139,   140,   141,   145,   146,   147,
     616,    54,   224,   617,   359,   362,   423,   424,    20,   375,
      89,   124,   287,   616,   619,   145,   617,   132,   549,   148,
     623,   624,   288,   333,    85,   554,   329,   148,   475,   289,
    -295,   356,    55,   149,   357,   133,   520,   176,   177,   178,
     548,   149,   470,   471,   473,   175,   139,   140,   141,    10,
     285,   555,   287,   330,   521,   267,   287,   268,   427,   344,
      41,    86,   491,    56,   154,   175,   139,   140,   141,   289,
     476,   410,   581,   289,   368,   477,   298,   179,   287,    57,
     143,   420,   478,   479,   421,   287,   428,   429,   466,   176,
     177,   178,   468,    87,   369,   289,   144,    51,    88,   480,
     370,    73,   289,  -340,   481,    16,    65,    52,    70,   176,
     177,   178,   369,    61,   180,    79,    66,   455,   469,   601,
     456,   309,   310,   311,   312,   154,   313,   467,   181,   179,
     510,    95,   143,   272,   287,    75,    76,   287,    53,   531,
      80,   533,   534,   145,   146,   147,   536,    67,   144,   179,
      97,   289,   143,   287,   289,    82,    41,   497,   458,   226,
      96,   287,   547,   535,   323,   324,   180,   287,   144,   575,
     289,    98,   501,   182,   183,   502,   272,    41,   289,   104,
     181,   107,   184,    99,   289,   109,   180,   149,   233,   234,
     235,   236,   237,   238,   111,   145,   146,   147,  -296,   528,
     181,   112,   254,   114,   175,   139,   140,   141,   101,   102,
     576,   175,   139,   140,   141,   145,   146,   147,   121,   530,
     551,   553,   285,   285,   502,   182,   183,   130,   122,   556,
     559,   123,   254,   357,   184,   126,   127,   569,   583,   149,
     357,   285,   138,   165,   587,   182,   183,   588,   176,   177,
     178,   163,   166,   170,   184,   176,   177,   178,   592,   149,
      10,   357,   475,   602,   603,   604,   175,   139,   140,   141,
     608,   173,   611,   175,   139,   140,   141,   610,   594,   625,
     357,   172,   357,   207,   210,   212,   216,    20,   179,   221,
     228,   143,   248,   249,   250,   179,   253,   254,   143,   255,
     256,   263,   282,   269,   476,   270,   271,   144,   285,   477,
     275,   177,   178,   278,   144,   314,   478,   479,   177,   178,
     595,   317,   325,   328,   332,   180,   345,   354,    10,   292,
     355,   358,   180,   480,   371,   386,   392,   413,   481,   181,
     414,   419,   425,   426,   431,   432,   181,   453,   433,   454,
     179,   459,   461,   143,   145,   146,   147,   179,   464,   390,
     143,   145,   146,   147,   488,   495,   483,   293,   465,   144,
     596,   492,   287,   313,   499,     1,   144,   496,   505,   539,
     507,   511,   512,     2,   182,   183,   514,   276,   515,   516,
       3,   182,   183,   184,   276,     4,   525,   529,   149,   545,
     184,   181,   537,   538,   540,   149,     5,   541,   181,     6,
       7,   542,   543,   546,   550,   294,   145,   146,   147,   552,
     558,     8,     9,   145,   146,   147,   560,    10,   561,   562,
     563,   564,    11,   565,   566,    12,   295,   570,   574,   582,
     580,   584,   593,   296,   297,    87,   182,   183,   586,   600,
     589,   298,   299,   182,   183,   184,   607,    13,   590,   591,
     149,    14,   184,   626,   612,   125,    84,   149,   613,   504,
     498,   260,   567,   527,   412,    93,   232,    15,   360,   422,
     343,   341,   251,    16,   300,   301,   302,   303,   304,   434,
     293,   305,   306,   578,   307,   308,   309,   310,   311,   312,
     384,   313,   367,   435,   572,   252,   577,   290,   436,   437,
     438,   439,   440,   557,   441,   220,   339,   340,     0,     0,
       0,   293,   442,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,   490,   293,     0,     0,     0,     0,   372,
      20,     0,     0,     0,     0,     0,   444,   297,   445,   446,
       0,     0,     0,     0,   298,   299,     0,   293,     0,     0,
       0,     0,     0,   447,     0,     0,     0,     0,   448,     0,
     449,     0,     0,     0,     0,     0,     0,     0,   297,     0,
     450,     0,   294,     0,     0,   298,     0,   300,   301,   302,
     303,   304,     0,     0,   305,   306,     0,   307,   308,   309,
     310,   311,   312,   372,   313,  -341,     0,     0,     0,     0,
       0,   297,     0,     0,   451,     0,     0,     0,   298,   299,
       0,  -341,  -341,     0,     0,  -341,  -341,     0,   307,   308,
     309,   310,   311,   312,   297,   313,     0,     0,     0,     0,
       0,   298,  -341,     0,     0,     0,     0,     0,     0,     0,
       0,   300,   301,   302,   303,   304,     0,     0,   305,   306,
       0,   307,   308,   309,   310,   311,   312,     0,   313,     0,
       0,     0,     0,     0,  -341,  -341,  -341,   303,   304,     0,
       0,   305,   306,     0,   307,   308,   309,   310,   311,   312,
       0,   313,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244
};

static const yytype_int16 yycheck[] =
{
      93,   127,     0,    97,   278,     2,   132,   133,     5,    65,
      66,    67,   115,   116,    11,    57,    13,   269,    52,     3,
       3,    20,    20,    12,     3,    13,   416,     9,     3,     9,
      85,    96,   258,   115,   427,    59,    59,   208,     6,   432,
       4,     5,     6,   139,   170,    19,    44,    64,     4,     5,
       6,     6,   180,   179,   182,   118,   358,    54,   184,    56,
      26,   454,    17,   128,    46,   483,    46,     5,     6,   172,
      89,    68,   135,    92,    24,   250,   161,   162,   431,   169,
     170,   118,    80,    96,     3,    49,   360,    61,   615,   139,
     106,    89,   115,   189,    92,   270,   103,     3,   135,   626,
      50,    83,    68,    83,   101,   102,   123,    73,   124,    28,
     192,   196,   283,   466,    80,    81,   113,   419,   392,   371,
     137,   118,   119,   136,   131,   543,    90,   192,   354,    27,
     193,    97,   525,   121,    90,   101,   102,   187,    59,   189,
     392,   196,   106,    62,    65,   271,   272,   164,   276,   375,
     106,     3,   323,   128,   248,   174,   193,    40,    28,     3,
     254,   287,   196,   289,   292,   555,   294,     3,   192,   192,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   184,   184,   580,   314,   153,
     154,   155,    62,     3,     4,     5,     6,   153,   154,   155,
     168,    96,   328,   171,   193,   184,   332,   333,   192,   192,
      93,   193,   118,   168,   607,   153,   171,    56,   492,   183,
     169,   170,   128,    56,     9,    24,    92,   183,    26,   135,
     196,   193,    96,   197,   196,    74,   106,    47,    48,    49,
     492,   197,   368,   369,   190,     3,     4,     5,     6,    59,
     196,    50,   118,   119,   124,   192,   118,   194,   133,   256,
     258,    46,   390,   100,   358,     3,     4,     5,     6,   135,
      68,   313,   546,   135,    94,    73,   139,    87,   118,   127,
      90,   193,    80,    81,   196,   118,   161,   162,   128,    47,
      48,    49,    94,    78,   114,   135,   106,    72,    83,    97,
     120,   157,   135,   101,   102,   115,    72,    82,     3,    47,
      48,    49,   114,    82,   124,     0,    82,   193,   120,   593,
     196,   184,   185,   186,   187,   419,   189,   111,   138,    87,
     433,     3,    90,   114,   118,    18,    19,   118,   113,   465,
     195,   467,   468,   153,   154,   155,   111,   113,   106,    87,
     192,   135,    90,   118,   135,   115,   354,   413,   355,   117,
     194,   118,   490,   120,   214,   215,   124,   118,   106,   120,
     135,    96,   193,   183,   184,   196,   114,   375,   135,     3,
     138,     6,   192,   130,   135,    12,   124,   197,   141,   142,
     143,   144,   145,   146,   126,   153,   154,   155,   196,   193,
     138,   130,   196,   136,     3,     4,     5,     6,    52,    53,
     536,     3,     4,     5,     6,   153,   154,   155,   128,   193,
     193,   193,   196,   196,   196,   183,   184,   117,   196,   193,
     193,   193,   196,   196,   192,    99,   129,   193,   193,   197,
     196,   196,     3,   124,   193,   183,   184,   196,    47,    48,
      49,     4,     3,    85,   192,    47,    48,    49,   193,   197,
      59,   196,    26,   165,   166,   167,     3,     4,     5,     6,
     596,   192,   598,     3,     4,     5,     6,   193,   571,   193,
     196,    95,   196,     3,    47,     4,     3,   192,    87,   192,
     121,    90,   192,     4,     4,    87,   193,   196,    90,    47,
     134,     3,    96,   192,    68,   192,   192,   106,   196,    73,
      47,    48,    49,   189,   106,   172,    80,    81,    48,    49,
      84,    93,     3,   196,    56,   124,     3,   128,    59,    17,
     100,   192,   124,    97,   192,     3,   192,    40,   102,   138,
     192,   192,   164,   123,   128,   192,   138,   123,    95,   192,
      87,     3,    79,    90,   153,   154,   155,    87,   193,   103,
      90,   153,   154,   155,    71,   106,   196,    55,    96,   106,
     134,   192,   118,   189,     4,     7,   106,   190,    64,   101,
     163,   192,   192,    15,   183,   184,   192,   124,   192,   192,
      22,   183,   184,   192,   124,    27,   192,   192,   197,     3,
     192,   138,   193,   193,    80,   197,    38,    80,   138,    41,
      42,    80,   101,   129,   193,   103,   153,   154,   155,     3,
     193,    53,    54,   153,   154,   155,     6,    59,     6,     6,
       6,     6,    64,   123,   106,    67,   124,   107,   193,   193,
     192,     4,   129,   131,   132,    78,   183,   184,   193,     6,
     193,   139,   140,   183,   184,   192,   192,    89,   193,   193,
     197,    93,   192,   118,   193,    80,    26,   197,   193,   421,
     414,   169,   523,   456,   315,    44,   137,   109,   267,   328,
     254,   248,   148,   115,   172,   173,   174,   175,   176,    11,
      55,   179,   180,   539,   182,   183,   184,   185,   186,   187,
     285,   189,   273,    25,   530,   148,   538,   189,    30,    31,
      32,    33,    34,   506,    36,   122,   230,   232,    -1,    -1,
      -1,    55,    44,    -1,    -1,    -1,   158,   159,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,   118,    55,    -1,    -1,    -1,    -1,   124,
     192,    -1,    -1,    -1,    -1,    -1,    88,   132,    90,    91,
      -1,    -1,    -1,    -1,   139,   140,    -1,    55,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
     122,    -1,   103,    -1,    -1,   139,    -1,   172,   173,   174,
     175,   176,    -1,    -1,   179,   180,    -1,   182,   183,   184,
     185,   186,   187,   124,   189,   103,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,   156,    -1,    -1,    -1,   139,   140,
      -1,   175,   176,    -1,    -1,   179,   180,    -1,   182,   183,
     184,   185,   186,   187,   132,   189,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,   173,   174,   175,   176,    -1,    -1,   179,   180,
      -1,   182,   183,   184,   185,   186,   187,    -1,   189,    -1,
      -1,    -1,    -1,    -1,   172,   173,   174,   175,   176,    -1,
      -1,   179,   180,    -1,   182,   183,   184,   185,   186,   187,
      -1,   189,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    27,    38,    41,    42,    53,    54,
      59,    64,    67,    89,    93,   109,   115,   158,   159,   160,
     192,   199,   200,   201,   202,   206,   208,   210,   211,   216,
     217,   218,   230,   232,   235,   236,   237,   239,   242,   243,
     244,   245,   246,   251,   323,    27,     3,   312,     3,     3,
     312,    72,    82,   113,    96,    96,   100,   127,   263,   311,
     312,    82,   245,   247,   312,    72,    82,   113,    19,    61,
       3,   324,   325,   157,   207,   207,   207,   243,   245,     0,
     195,   329,   115,   203,   203,     9,    46,    78,    83,   248,
     249,   259,   248,   244,   245,     3,   194,   192,    96,   130,
     219,   219,   219,   312,     3,   212,   312,     6,   301,    12,
     252,   126,   130,   231,   136,    96,   136,   231,   231,   231,
     312,   128,   196,   193,   193,   201,    99,   129,   245,   246,
     117,   250,    56,    74,   264,   245,   246,   259,     3,     4,
       5,     6,    49,    90,   106,   153,   154,   155,   183,   197,
     266,   267,   268,   269,   297,   298,   299,   300,   301,   302,
     303,   304,   305,     4,   209,   124,     3,   313,   312,   312,
      85,   256,    95,   192,   238,     3,    47,    48,    49,    87,
     124,   138,   183,   184,   192,   247,   253,   265,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   280,   281,   282,
     288,   289,   293,   294,   295,   296,   297,     3,   240,   241,
      47,   312,     4,   213,   213,   213,     3,   312,   312,   247,
     325,   192,   260,   261,   271,   271,   117,   271,   121,   318,
     319,   320,   264,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   290,   291,   292,   192,     4,
       4,   300,   304,   193,   196,    47,   134,    96,   128,   192,
     238,   271,   213,     3,   330,    65,   246,   192,   194,   192,
     192,   192,   114,   271,   279,    47,   124,   272,   189,   272,
     245,   271,    96,   254,   255,   196,     3,   118,   128,   135,
     316,   317,    17,    55,   103,   124,   131,   132,   139,   140,
     172,   173,   174,   175,   176,   179,   180,   182,   183,   184,
     185,   186,   187,   189,   172,   196,   256,    93,   233,   234,
     115,   192,   214,   214,   214,     3,   204,   205,   196,    92,
     119,   262,    56,    56,    64,   123,   137,   164,   321,   320,
     318,   269,   290,   268,   312,     3,   242,     3,    28,    62,
     220,   221,   222,   229,   128,   100,   193,   196,   192,   193,
     252,     3,   184,   251,   290,   271,   271,   279,    94,   114,
     120,   192,   124,   265,   193,   192,   306,   307,   308,   309,
     310,   312,   326,   256,   270,   271,     3,   271,   272,   272,
     103,   131,   192,   106,   124,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     301,   271,   241,    40,   192,    24,    50,   215,   256,   192,
     193,   196,   261,   271,   271,   164,   123,   133,   161,   162,
     322,   128,   192,    95,    11,    25,    30,    31,    32,    33,
      34,    36,    44,    70,    88,    90,    91,   105,   110,   112,
     122,   156,   223,   123,   192,   193,   196,   242,   312,     3,
     267,    79,   283,   265,   193,    96,   128,   111,    94,   120,
     271,   271,   251,   190,   242,    26,    68,    73,    80,    81,
      97,   102,   327,   196,   128,   314,   315,   316,    71,   257,
     118,   272,   192,   251,   265,   106,   190,   231,   215,     4,
     212,   193,   196,   267,   205,    64,   330,   163,   223,   330,
     213,   192,   192,   225,   192,   192,   192,   224,    28,    62,
     106,   124,   226,   227,   228,   192,   330,   221,   193,   192,
     193,   271,   223,   271,   271,   120,   111,   193,   193,   101,
      80,    80,    80,   101,   307,     3,   129,   272,   251,   265,
     193,   193,     3,   193,    24,    50,   193,   322,   193,   193,
       6,     6,     6,     6,     6,   123,   106,   228,   330,   193,
     107,   284,   283,   193,   193,   120,   271,   315,   308,   307,
     192,   265,   193,   193,     4,   212,   193,   193,   196,   193,
     193,   193,   193,   129,   259,    84,   134,   330,    52,   258,
       6,   265,   165,   166,   167,   285,   286,   192,   271,   328,
     193,   271,   193,   193,     6,    17,   168,   171,   287,   330,
     169,   170,   287,   169,   170,   193,   118,   287
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   198,   199,   200,   200,   201,   201,   201,   201,   201,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   206,   207,
     207,   208,   209,   210,   210,   211,   211,   212,   213,   214,
     214,   214,   215,   215,   215,   215,   216,   216,   217,   217,
     217,   218,   218,   218,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   224,   224,   225,   225,   225,   226,   226,   227,   227,
     228,   228,   228,   228,   229,   229,   230,   230,   230,   230,
     231,   231,   232,   233,   234,   235,   236,   237,   237,   238,
     238,   239,   240,   240,   241,   242,   242,   243,   243,   244,
     244,   244,   244,   244,   245,   245,   246,   247,   248,   249,
     249,   249,   250,   250,   251,   252,   252,   253,   254,   254,
     255,   256,   256,   257,   257,   258,   258,   259,   259,   260,
     260,   261,   262,   262,   262,   263,   263,   264,   264,   264,
     264,   264,   264,   265,   265,   266,   266,   267,   267,   268,
     268,   269,   269,   269,   270,   271,   271,   271,   271,   271,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   273,   273,   274,   274,   274,   274,   274,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   276,
     276,   277,   277,   277,   277,   278,   278,   278,   278,   279,
     279,   280,   280,   281,   281,   281,   281,   281,   281,   281,
     282,   282,   283,   283,   284,   284,   285,   285,   285,   286,
     286,   286,   287,   287,   287,   287,   287,   288,   289,   290,
     290,   290,   290,   290,   290,   291,   291,   291,   291,   291,
     291,   292,   292,   293,   294,   295,   296,   296,   296,   296,
     297,   297,   297,   297,   297,   297,   297,   298,   299,   299,
     300,   300,   301,   302,   303,   304,   304,   304,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   310,   311,   312,
     312,   313,   313,   314,   314,   315,   315,   316,   316,   317,
     317,   318,   318,   319,   319,   320,   320,   321,   321,   321,
     321,   322,   322,   322,   323,   324,   324,   325,   326,   326,
     326,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   328,   329,   329,   330,   330
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
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       4,     3,     0,     5,     3,     0,     1,     0,     1,     2,
       2,     1,     1,     2,     5,     4,     4,     4,     3,     4,
       2,     0,     5,     1,     4,     4,     2,     8,     5,     3,
       0,     5,     1,     3,     3,     1,     1,     4,     5,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     2,     1,
       1,     1,     1,     0,     7,     1,     0,     1,     1,     0,
       2,     2,     0,     4,     0,     2,     0,     3,     0,     1,
       3,     2,     1,     1,     0,     2,     0,     2,     2,     4,
       2,     4,     0,     1,     3,     1,     0,     1,     3,     1,
       6,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     3,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     5,     6,     5,     6,     4,     6,     3,     5,     4,
       5,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     6,     0,     3,     0,     2,     5,     0,     1,
       1,     1,     2,     2,     2,     2,     1,     6,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     2,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     2,     1,     1,
       3,     1,     0,     1,     5,     1,     0,     2,     1,     1,
       0,     1,     0,     1,     2,     3,     5,     1,     3,     1,
       2,     2,     1,     0,     2,     1,     3,     3,     4,     6,
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
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2092 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2098 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 175 "bison_parser.y"
            { }
#line 2104 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 175 "bison_parser.y"
            { }
#line 2110 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2123 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2129 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2135 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2148 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2161 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2167 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2173 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2179 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2185 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2191 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2197 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 175 "bison_parser.y"
            { }
#line 2203 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2209 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_import_export_options: /* opt_import_export_options  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2215 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_export_options: /* import_export_options  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2221 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2227 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2233 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2239 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 175 "bison_parser.y"
            { }
#line 2245 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2258 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2264 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2270 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 175 "bison_parser.y"
            { }
#line 2276 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 175 "bison_parser.y"
            { }
#line 2282 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2288 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 175 "bison_parser.y"
            { }
#line 2294 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 175 "bison_parser.y"
            { }
#line 2300 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 175 "bison_parser.y"
            { }
#line 2306 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2312 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2318 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 175 "bison_parser.y"
            { }
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2336 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2354 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2360 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 180 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2373 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2379 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2392 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2398 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2404 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_expression: /* query_expression  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2410 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_expression_body: /* query_expression_body  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2416 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_expression_parens: /* query_expression_parens  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2422 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_term: /* query_term  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2428 "bison_parser.cpp"
        break;

    case YYSYMBOL_subquery: /* subquery  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2434 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2440 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2446 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 175 "bison_parser.y"
            { }
#line 2452 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_primary: /* query_primary  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2458 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 175 "bison_parser.y"
            { }
#line 2464 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2477 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2501 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2507 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2520 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2533 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2539 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 175 "bison_parser.y"
            { }
#line 2545 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2551 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2557 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2570 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_extended_literal_list: /* opt_extended_literal_list  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2583 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal_list: /* extended_literal_list  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2596 "bison_parser.cpp"
        break;

    case YYSYMBOL_casted_extended_literal: /* casted_extended_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2602 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal: /* extended_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2608 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2614 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2620 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2626 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2632 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2638 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2644 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2650 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2656 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2662 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2668 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2674 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2680 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2686 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2692 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2705 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2711 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 175 "bison_parser.y"
            { }
#line 2717 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2723 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2729 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2735 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 175 "bison_parser.y"
            { }
#line 2741 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 175 "bison_parser.y"
            { }
#line 2747 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 175 "bison_parser.y"
            { }
#line 2753 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2759 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2765 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2771 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2777 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2783 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2789 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2795 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2801 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2807 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2813 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2819 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2825 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2831 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2837 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2843 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2849 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 189 "bison_parser.y"
            {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2862 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2868 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2874 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 176 "bison_parser.y"
            {
  free( (((*yyvaluep).table_name).name) );
  free( (((*yyvaluep).table_name).schema) );
}
#line 2883 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2889 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2895 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2901 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2907 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2913 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2919 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2925 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 2931 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 175 "bison_parser.y"
            { }
#line 2937 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 175 "bison_parser.y"
            { }
#line 2943 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2949 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2955 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2961 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2967 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 175 "bison_parser.y"
            { }
#line 2973 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2979 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 180 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2992 "bison_parser.cpp"
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
#line 78 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3100 "bison_parser.cpp"

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
#line 332 "bison_parser.y"
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
#line 3329 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 351 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3340 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 357 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3351 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 364 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3360 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 368 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3369 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 372 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3375 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 373 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3381 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 374 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3387 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 376 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3393 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 377 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3399 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 378 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3405 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 379 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3411 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 380 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3417 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 381 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3423 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 382 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3429 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 383 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3435 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 384 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3441 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 385 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3447 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 391 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3453 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 392 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3459 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 394 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3468 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 398 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3477 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 403 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3486 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' extended_literal_list ')'  */
#line 407 "bison_parser.y"
                                           {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3496 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 417 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3502 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 418 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3508 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 419 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3514 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 427 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3524 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 435 "bison_parser.y"
                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3533 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_extended_literal_list ')'  */
#line 439 "bison_parser.y"
                                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3543 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 451 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3554 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_import_export_options opt_where  */
#line 457 "bison_parser.y"
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
#line 3571 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 470 "bison_parser.y"
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
#line 3590 "bison_parser.cpp"
    break;

  case 38: /* file_path: STRING  */
#line 485 "bison_parser.y"
                   { (yyval.sval) = (yyvsp[0].sval); }
#line 3596 "bison_parser.cpp"
    break;

  case 39: /* opt_import_export_options: WITH '(' import_export_options ')'  */
#line 487 "bison_parser.y"
                                                               { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3602 "bison_parser.cpp"
    break;

  case 40: /* opt_import_export_options: '(' import_export_options ')'  */
#line 488 "bison_parser.y"
                                { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3608 "bison_parser.cpp"
    break;

  case 41: /* opt_import_export_options: %empty  */
#line 489 "bison_parser.y"
              { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3614 "bison_parser.cpp"
    break;

  case 42: /* import_export_options: import_export_options ',' FORMAT file_type  */
#line 491 "bison_parser.y"
                                                                   {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3628 "bison_parser.cpp"
    break;

  case 43: /* import_export_options: FORMAT file_type  */
#line 500 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3637 "bison_parser.cpp"
    break;

  case 44: /* import_export_options: import_export_options ',' ENCODING STRING  */
#line 504 "bison_parser.y"
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
#line 3652 "bison_parser.cpp"
    break;

  case 45: /* import_export_options: ENCODING STRING  */
#line 514 "bison_parser.y"
                  {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3661 "bison_parser.cpp"
    break;

  case 46: /* export_statement: COPY table_name TO file_path opt_import_export_options  */
#line 524 "bison_parser.y"
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
#line 3677 "bison_parser.cpp"
    break;

  case 47: /* export_statement: COPY subquery TO file_path opt_import_export_options  */
#line 535 "bison_parser.y"
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
#line 3692 "bison_parser.cpp"
    break;

  case 48: /* show_statement: SHOW TABLES  */
#line 551 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3698 "bison_parser.cpp"
    break;

  case 49: /* show_statement: SHOW COLUMNS table_name  */
#line 552 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3708 "bison_parser.cpp"
    break;

  case 50: /* show_statement: DESCRIBE table_name  */
#line 557 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3718 "bison_parser.cpp"
    break;

  case 51: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 568 "bison_parser.y"
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
#line 3736 "bison_parser.cpp"
    break;

  case 52: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 581 "bison_parser.y"
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
#line 3753 "bison_parser.cpp"
    break;

  case 53: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 593 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3765 "bison_parser.cpp"
    break;

  case 54: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 600 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3777 "bison_parser.cpp"
    break;

  case 55: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 607 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3790 "bison_parser.cpp"
    break;

  case 56: /* opt_not_exists: IF NOT EXISTS  */
#line 616 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3796 "bison_parser.cpp"
    break;

  case 57: /* opt_not_exists: %empty  */
#line 617 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3802 "bison_parser.cpp"
    break;

  case 58: /* table_elem_commalist: table_elem  */
#line 619 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3811 "bison_parser.cpp"
    break;

  case 59: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 623 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3820 "bison_parser.cpp"
    break;

  case 60: /* table_elem: column_def  */
#line 628 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3826 "bison_parser.cpp"
    break;

  case 61: /* table_elem: table_constraint  */
#line 629 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3832 "bison_parser.cpp"
    break;

  case 62: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 631 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3843 "bison_parser.cpp"
    break;

  case 63: /* column_type: BIGINT  */
#line 638 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3849 "bison_parser.cpp"
    break;

  case 64: /* column_type: BOOLEAN  */
#line 639 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3855 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHAR '(' INTVAL ')'  */
#line 640 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3861 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 641 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3867 "bison_parser.cpp"
    break;

  case 67: /* column_type: DATE  */
#line 642 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3873 "bison_parser.cpp"
    break;

  case 68: /* column_type: DATETIME  */
#line 643 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3879 "bison_parser.cpp"
    break;

  case 69: /* column_type: DECIMAL opt_decimal_specification  */
#line 644 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3888 "bison_parser.cpp"
    break;

  case 70: /* column_type: DOUBLE  */
#line 648 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3894 "bison_parser.cpp"
    break;

  case 71: /* column_type: FLOAT  */
#line 649 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3900 "bison_parser.cpp"
    break;

  case 72: /* column_type: INT  */
#line 650 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3906 "bison_parser.cpp"
    break;

  case 73: /* column_type: INTEGER  */
#line 651 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3912 "bison_parser.cpp"
    break;

  case 74: /* column_type: LONG  */
#line 652 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3918 "bison_parser.cpp"
    break;

  case 75: /* column_type: REAL  */
#line 653 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3924 "bison_parser.cpp"
    break;

  case 76: /* column_type: SMALLINT  */
#line 654 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3930 "bison_parser.cpp"
    break;

  case 77: /* column_type: TEXT  */
#line 655 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3936 "bison_parser.cpp"
    break;

  case 78: /* column_type: TIME opt_time_precision  */
#line 656 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3942 "bison_parser.cpp"
    break;

  case 79: /* column_type: TIMESTAMP  */
#line 657 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3948 "bison_parser.cpp"
    break;

  case 80: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 658 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3954 "bison_parser.cpp"
    break;

  case 81: /* opt_time_precision: '(' INTVAL ')'  */
#line 660 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3960 "bison_parser.cpp"
    break;

  case 82: /* opt_time_precision: %empty  */
#line 661 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3966 "bison_parser.cpp"
    break;

  case 83: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 663 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3972 "bison_parser.cpp"
    break;

  case 84: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 664 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3978 "bison_parser.cpp"
    break;

  case 85: /* opt_decimal_specification: %empty  */
#line 665 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3984 "bison_parser.cpp"
    break;

  case 86: /* opt_column_constraints: column_constraint_set  */
#line 667 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 3990 "bison_parser.cpp"
    break;

  case 87: /* opt_column_constraints: %empty  */
#line 668 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 3996 "bison_parser.cpp"
    break;

  case 88: /* column_constraint_set: column_constraint  */
#line 670 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 4005 "bison_parser.cpp"
    break;

  case 89: /* column_constraint_set: column_constraint_set column_constraint  */
#line 674 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 4014 "bison_parser.cpp"
    break;

  case 90: /* column_constraint: PRIMARY KEY  */
#line 679 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4020 "bison_parser.cpp"
    break;

  case 91: /* column_constraint: UNIQUE  */
#line 680 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4026 "bison_parser.cpp"
    break;

  case 92: /* column_constraint: NULL  */
#line 681 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4032 "bison_parser.cpp"
    break;

  case 93: /* column_constraint: NOT NULL  */
#line 682 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4038 "bison_parser.cpp"
    break;

  case 94: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 684 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4044 "bison_parser.cpp"
    break;

  case 95: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 685 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4050 "bison_parser.cpp"
    break;

  case 96: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 693 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4061 "bison_parser.cpp"
    break;

  case 97: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 699 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4072 "bison_parser.cpp"
    break;

  case 98: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 705 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4082 "bison_parser.cpp"
    break;

  case 99: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 711 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4092 "bison_parser.cpp"
    break;

  case 100: /* opt_exists: IF EXISTS  */
#line 717 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4098 "bison_parser.cpp"
    break;

  case 101: /* opt_exists: %empty  */
#line 718 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4104 "bison_parser.cpp"
    break;

  case 102: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 725 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4114 "bison_parser.cpp"
    break;

  case 103: /* alter_action: drop_action  */
#line 731 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4120 "bison_parser.cpp"
    break;

  case 104: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 733 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4129 "bison_parser.cpp"
    break;

  case 105: /* delete_statement: DELETE FROM table_name opt_where  */
#line 743 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4140 "bison_parser.cpp"
    break;

  case 106: /* truncate_statement: TRUNCATE table_name  */
#line 750 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4150 "bison_parser.cpp"
    break;

  case 107: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' extended_literal_list ')'  */
#line 761 "bison_parser.y"
                                                                                               {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4162 "bison_parser.cpp"
    break;

  case 108: /* insert_statement: INSERT INTO table_name opt_column_list query_term  */
#line 768 "bison_parser.y"
                                                    {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4174 "bison_parser.cpp"
    break;

  case 109: /* opt_column_list: '(' ident_commalist ')'  */
#line 776 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4180 "bison_parser.cpp"
    break;

  case 110: /* opt_column_list: %empty  */
#line 777 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4186 "bison_parser.cpp"
    break;

  case 111: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 784 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4197 "bison_parser.cpp"
    break;

  case 112: /* update_clause_commalist: update_clause  */
#line 791 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4206 "bison_parser.cpp"
    break;

  case 113: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 795 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4215 "bison_parser.cpp"
    break;

  case 114: /* update_clause: IDENTIFIER '=' expr  */
#line 800 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4225 "bison_parser.cpp"
    break;

  case 117: /* query_expression: query_expression_body opt_order opt_limit opt_locking_clause  */
#line 811 "bison_parser.y"
                                                                                {
  if ((yyvsp[-3].select_stmt)->setOperations == nullptr) {
    (yyvsp[-3].select_stmt)->order = (yyvsp[-2].order_vec);

    // Limit could have been set by TOP.
    if ((yyvsp[-1].limit) != nullptr) {
      delete (yyvsp[-3].select_stmt)->limit;
      (yyvsp[-3].select_stmt)->limit = (yyvsp[-1].limit);
    }

    if ((yyvsp[0].locking_clause_vec) != nullptr) {
      (yyvsp[-3].select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
    }
  } else {
    (yyvsp[-3].select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
    (yyvsp[-3].select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  }

  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
}
#line 4250 "bison_parser.cpp"
    break;

  case 118: /* query_expression: with_clause query_expression_body opt_order opt_limit opt_locking_clause  */
#line 831 "bison_parser.y"
                                                                           {
  (yyvsp[-3].select_stmt)->withDescriptions = (yyvsp[-4].with_description_vec);
  if ((yyvsp[-3].select_stmt)->setOperations == nullptr) {
    (yyvsp[-3].select_stmt)->order = (yyvsp[-2].order_vec);

    // Limit could have been set by TOP.
    if ((yyvsp[-1].limit) != nullptr) {
      delete (yyvsp[-3].select_stmt)->limit;
      (yyvsp[-3].select_stmt)->limit = (yyvsp[-1].limit);
    }

    if ((yyvsp[0].locking_clause_vec) != nullptr) {
      (yyvsp[-3].select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
    }
  } else {
    (yyvsp[-3].select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
    (yyvsp[-3].select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  }

  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
}
#line 4276 "bison_parser.cpp"
    break;

  case 120: /* query_expression_body: query_expression_body set_operator query_term  */
#line 859 "bison_parser.y"
                                                                                   {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  auto* setOperations = &(yyvsp[-2].select_stmt)->setOperations;
  while (*setOperations != nullptr) {
    setOperations = &(*setOperations)->back()->nestedSelectStatement->setOperations;
  }
  (yyvsp[-1].set_operator_t)->nestedSelectStatement = (yyvsp[0].select_stmt);
  *setOperations = new std::vector<SetOperation*>({(yyvsp[-1].set_operator_t)});

  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
}
#line 4292 "bison_parser.cpp"
    break;

  case 121: /* query_expression_body: query_expression_parens set_operator query_term  */
#line 870 "bison_parser.y"
                                                  {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  auto* setOperations = &(yyvsp[-2].select_stmt)->setOperations;
  while (*setOperations != nullptr) {
    setOperations = &(*setOperations)->back()->nestedSelectStatement->setOperations;
  }
  (yyvsp[-1].set_operator_t)->nestedSelectStatement = (yyvsp[0].select_stmt);
  *setOperations = new std::vector<SetOperation*>({(yyvsp[-1].set_operator_t)});

  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
}
#line 4308 "bison_parser.cpp"
    break;

  case 122: /* query_expression_body: query_expression_body set_operator query_expression_parens  */
#line 881 "bison_parser.y"
                                                             {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  auto* setOperations = &(yyvsp[-2].select_stmt)->setOperations;
  while (*setOperations != nullptr) {
    setOperations = &(*setOperations)->back()->nestedSelectStatement->setOperations;
  }
  (yyvsp[-1].set_operator_t)->nestedSelectStatement = (yyvsp[0].select_stmt);
  *setOperations = new std::vector<SetOperation*>({(yyvsp[-1].set_operator_t)});

  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
}
#line 4324 "bison_parser.cpp"
    break;

  case 123: /* query_expression_body: query_expression_parens set_operator query_expression_parens  */
#line 892 "bison_parser.y"
                                                               {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  auto* setOperations = &(yyvsp[-2].select_stmt)->setOperations;
  while (*setOperations != nullptr) {
    setOperations = &(*setOperations)->back()->nestedSelectStatement->setOperations;
  }
  (yyvsp[-1].set_operator_t)->nestedSelectStatement = (yyvsp[0].select_stmt);
  *setOperations = new std::vector<SetOperation*>({(yyvsp[-1].set_operator_t)});

  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
}
#line 4340 "bison_parser.cpp"
    break;

  case 124: /* query_expression_parens: '(' query_expression_parens ')'  */
#line 904 "bison_parser.y"
                                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4346 "bison_parser.cpp"
    break;

  case 125: /* query_expression_parens: '(' query_expression ')'  */
#line 905 "bison_parser.y"
                           { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4352 "bison_parser.cpp"
    break;

  case 128: /* set_operator: set_type opt_all  */
#line 911 "bison_parser.y"
                                                                         {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4361 "bison_parser.cpp"
    break;

  case 129: /* set_type: UNION  */
#line 916 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4370 "bison_parser.cpp"
    break;

  case 130: /* set_type: INTERSECT  */
#line 920 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4379 "bison_parser.cpp"
    break;

  case 131: /* set_type: EXCEPT  */
#line 924 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4388 "bison_parser.cpp"
    break;

  case 132: /* opt_all: ALL  */
#line 929 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4394 "bison_parser.cpp"
    break;

  case 133: /* opt_all: %empty  */
#line 930 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4400 "bison_parser.cpp"
    break;

  case 134: /* query_primary: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 932 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4414 "bison_parser.cpp"
    break;

  case 135: /* opt_distinct: DISTINCT  */
#line 942 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4420 "bison_parser.cpp"
    break;

  case 136: /* opt_distinct: %empty  */
#line 943 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4426 "bison_parser.cpp"
    break;

  case 138: /* opt_from_clause: from_clause  */
#line 947 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4432 "bison_parser.cpp"
    break;

  case 139: /* opt_from_clause: %empty  */
#line 948 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4438 "bison_parser.cpp"
    break;

  case 140: /* from_clause: FROM table_ref  */
#line 950 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4444 "bison_parser.cpp"
    break;

  case 141: /* opt_where: WHERE expr  */
#line 952 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4450 "bison_parser.cpp"
    break;

  case 142: /* opt_where: %empty  */
#line 953 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4456 "bison_parser.cpp"
    break;

  case 143: /* opt_group: GROUP BY expr_list opt_having  */
#line 955 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4466 "bison_parser.cpp"
    break;

  case 144: /* opt_group: %empty  */
#line 960 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4472 "bison_parser.cpp"
    break;

  case 145: /* opt_having: HAVING expr  */
#line 962 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4478 "bison_parser.cpp"
    break;

  case 146: /* opt_having: %empty  */
#line 963 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4484 "bison_parser.cpp"
    break;

  case 147: /* opt_order: ORDER BY order_list  */
#line 965 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4490 "bison_parser.cpp"
    break;

  case 148: /* opt_order: %empty  */
#line 966 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4496 "bison_parser.cpp"
    break;

  case 149: /* order_list: order_desc  */
#line 968 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4505 "bison_parser.cpp"
    break;

  case 150: /* order_list: order_list ',' order_desc  */
#line 972 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4514 "bison_parser.cpp"
    break;

  case 151: /* order_desc: expr opt_order_type  */
#line 977 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4520 "bison_parser.cpp"
    break;

  case 152: /* opt_order_type: ASC  */
#line 979 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4526 "bison_parser.cpp"
    break;

  case 153: /* opt_order_type: DESC  */
#line 980 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4532 "bison_parser.cpp"
    break;

  case 154: /* opt_order_type: %empty  */
#line 981 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4538 "bison_parser.cpp"
    break;

  case 155: /* opt_top: TOP int_literal  */
#line 985 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4544 "bison_parser.cpp"
    break;

  case 156: /* opt_top: %empty  */
#line 986 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4550 "bison_parser.cpp"
    break;

  case 157: /* opt_limit: LIMIT expr  */
#line 988 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4556 "bison_parser.cpp"
    break;

  case 158: /* opt_limit: OFFSET expr  */
#line 989 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4562 "bison_parser.cpp"
    break;

  case 159: /* opt_limit: LIMIT expr OFFSET expr  */
#line 990 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4568 "bison_parser.cpp"
    break;

  case 160: /* opt_limit: LIMIT ALL  */
#line 991 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4574 "bison_parser.cpp"
    break;

  case 161: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 992 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4580 "bison_parser.cpp"
    break;

  case 162: /* opt_limit: %empty  */
#line 993 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4586 "bison_parser.cpp"
    break;

  case 163: /* expr_list: expr_alias  */
#line 998 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4595 "bison_parser.cpp"
    break;

  case 164: /* expr_list: expr_list ',' expr_alias  */
#line 1002 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4604 "bison_parser.cpp"
    break;

  case 165: /* opt_extended_literal_list: extended_literal_list  */
#line 1008 "bison_parser.y"
                                                  { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4610 "bison_parser.cpp"
    break;

  case 166: /* opt_extended_literal_list: %empty  */
#line 1009 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4616 "bison_parser.cpp"
    break;

  case 167: /* extended_literal_list: casted_extended_literal  */
#line 1011 "bison_parser.y"
                                                {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4625 "bison_parser.cpp"
    break;

  case 168: /* extended_literal_list: extended_literal_list ',' casted_extended_literal  */
#line 1015 "bison_parser.y"
                                                    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4634 "bison_parser.cpp"
    break;

  case 170: /* casted_extended_literal: CAST '(' extended_literal AS column_type ')'  */
#line 1020 "bison_parser.y"
                                                                                          {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4642 "bison_parser.cpp"
    break;

  case 171: /* extended_literal: literal  */
#line 1024 "bison_parser.y"
                           {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4655 "bison_parser.cpp"
    break;

  case 172: /* extended_literal: '-' num_literal  */
#line 1032 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4661 "bison_parser.cpp"
    break;

  case 173: /* extended_literal: '-' interval_literal  */
#line 1033 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4667 "bison_parser.cpp"
    break;

  case 174: /* expr_alias: expr opt_alias  */
#line 1035 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4680 "bison_parser.cpp"
    break;

  case 180: /* operand: '(' expr ')'  */
#line 1046 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4686 "bison_parser.cpp"
    break;

  case 190: /* operand: subquery  */
#line 1048 "bison_parser.y"
                          {
  (yyval.expr) = Expr::makeSelect((yyvsp[0].select_stmt));
}
#line 4694 "bison_parser.cpp"
    break;

  case 193: /* unary_expr: '-' operand  */
#line 1054 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4700 "bison_parser.cpp"
    break;

  case 194: /* unary_expr: NOT operand  */
#line 1055 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4706 "bison_parser.cpp"
    break;

  case 195: /* unary_expr: operand ISNULL  */
#line 1056 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4712 "bison_parser.cpp"
    break;

  case 196: /* unary_expr: operand IS NULL  */
#line 1057 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4718 "bison_parser.cpp"
    break;

  case 197: /* unary_expr: operand IS NOT NULL  */
#line 1058 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4724 "bison_parser.cpp"
    break;

  case 199: /* binary_expr: operand '-' operand  */
#line 1060 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4730 "bison_parser.cpp"
    break;

  case 200: /* binary_expr: operand '+' operand  */
#line 1061 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4736 "bison_parser.cpp"
    break;

  case 201: /* binary_expr: operand '/' operand  */
#line 1062 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4742 "bison_parser.cpp"
    break;

  case 202: /* binary_expr: operand '*' operand  */
#line 1063 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4748 "bison_parser.cpp"
    break;

  case 203: /* binary_expr: operand '%' operand  */
#line 1064 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4754 "bison_parser.cpp"
    break;

  case 204: /* binary_expr: operand '^' operand  */
#line 1065 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4760 "bison_parser.cpp"
    break;

  case 205: /* binary_expr: operand LIKE operand  */
#line 1066 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4766 "bison_parser.cpp"
    break;

  case 206: /* binary_expr: operand NOT LIKE operand  */
#line 1067 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4772 "bison_parser.cpp"
    break;

  case 207: /* binary_expr: operand ILIKE operand  */
#line 1068 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4778 "bison_parser.cpp"
    break;

  case 208: /* binary_expr: operand CONCAT operand  */
#line 1069 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4784 "bison_parser.cpp"
    break;

  case 209: /* logic_expr: expr AND expr  */
#line 1071 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4790 "bison_parser.cpp"
    break;

  case 210: /* logic_expr: expr OR expr  */
#line 1072 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4796 "bison_parser.cpp"
    break;

  case 211: /* in_expr: operand IN '(' expr_list ')'  */
#line 1074 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4802 "bison_parser.cpp"
    break;

  case 212: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1075 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4808 "bison_parser.cpp"
    break;

  case 213: /* in_expr: operand IN '(' query_primary ')'  */
#line 1076 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4814 "bison_parser.cpp"
    break;

  case 214: /* in_expr: operand NOT IN '(' query_primary ')'  */
#line 1077 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4820 "bison_parser.cpp"
    break;

  case 215: /* case_expr: CASE expr case_list END  */
#line 1081 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4826 "bison_parser.cpp"
    break;

  case 216: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1082 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4832 "bison_parser.cpp"
    break;

  case 217: /* case_expr: CASE case_list END  */
#line 1083 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4838 "bison_parser.cpp"
    break;

  case 218: /* case_expr: CASE case_list ELSE expr END  */
#line 1084 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4844 "bison_parser.cpp"
    break;

  case 219: /* case_list: WHEN expr THEN expr  */
#line 1086 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4850 "bison_parser.cpp"
    break;

  case 220: /* case_list: case_list WHEN expr THEN expr  */
#line 1087 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4856 "bison_parser.cpp"
    break;

  case 221: /* exists_expr: EXISTS '(' query_primary ')'  */
#line 1089 "bison_parser.y"
                                           { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4862 "bison_parser.cpp"
    break;

  case 222: /* exists_expr: NOT EXISTS '(' query_primary ')'  */
#line 1090 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4868 "bison_parser.cpp"
    break;

  case 223: /* comp_expr: operand '=' operand  */
#line 1092 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4874 "bison_parser.cpp"
    break;

  case 224: /* comp_expr: operand EQUALS operand  */
#line 1093 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4880 "bison_parser.cpp"
    break;

  case 225: /* comp_expr: operand NOTEQUALS operand  */
#line 1094 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4886 "bison_parser.cpp"
    break;

  case 226: /* comp_expr: operand '<' operand  */
#line 1095 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4892 "bison_parser.cpp"
    break;

  case 227: /* comp_expr: operand '>' operand  */
#line 1096 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4898 "bison_parser.cpp"
    break;

  case 228: /* comp_expr: operand LESSEQ operand  */
#line 1097 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4904 "bison_parser.cpp"
    break;

  case 229: /* comp_expr: operand GREATEREQ operand  */
#line 1098 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4910 "bison_parser.cpp"
    break;

  case 230: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1102 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 4916 "bison_parser.cpp"
    break;

  case 231: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1103 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 4922 "bison_parser.cpp"
    break;

  case 232: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1107 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4928 "bison_parser.cpp"
    break;

  case 233: /* opt_window: %empty  */
#line 1108 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 4934 "bison_parser.cpp"
    break;

  case 234: /* opt_partition: PARTITION BY expr_list  */
#line 1110 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4940 "bison_parser.cpp"
    break;

  case 235: /* opt_partition: %empty  */
#line 1111 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4946 "bison_parser.cpp"
    break;

  case 236: /* opt_frame_clause: frame_type frame_bound  */
#line 1116 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 4952 "bison_parser.cpp"
    break;

  case 237: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1117 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 4958 "bison_parser.cpp"
    break;

  case 238: /* opt_frame_clause: %empty  */
#line 1118 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 4966 "bison_parser.cpp"
    break;

  case 239: /* frame_type: RANGE  */
#line 1122 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 4972 "bison_parser.cpp"
    break;

  case 240: /* frame_type: ROWS  */
#line 1123 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 4978 "bison_parser.cpp"
    break;

  case 241: /* frame_type: GROUPS  */
#line 1124 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 4984 "bison_parser.cpp"
    break;

  case 242: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1126 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 4990 "bison_parser.cpp"
    break;

  case 243: /* frame_bound: INTVAL PRECEDING  */
#line 1127 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 4996 "bison_parser.cpp"
    break;

  case 244: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1128 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5002 "bison_parser.cpp"
    break;

  case 245: /* frame_bound: INTVAL FOLLOWING  */
#line 1129 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5008 "bison_parser.cpp"
    break;

  case 246: /* frame_bound: CURRENT_ROW  */
#line 1130 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5014 "bison_parser.cpp"
    break;

  case 247: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1132 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5020 "bison_parser.cpp"
    break;

  case 248: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1134 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5026 "bison_parser.cpp"
    break;

  case 249: /* datetime_field: SECOND  */
#line 1136 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5032 "bison_parser.cpp"
    break;

  case 250: /* datetime_field: MINUTE  */
#line 1137 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5038 "bison_parser.cpp"
    break;

  case 251: /* datetime_field: HOUR  */
#line 1138 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5044 "bison_parser.cpp"
    break;

  case 252: /* datetime_field: DAY  */
#line 1139 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5050 "bison_parser.cpp"
    break;

  case 253: /* datetime_field: MONTH  */
#line 1140 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5056 "bison_parser.cpp"
    break;

  case 254: /* datetime_field: YEAR  */
#line 1141 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5062 "bison_parser.cpp"
    break;

  case 255: /* datetime_field_plural: SECONDS  */
#line 1143 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5068 "bison_parser.cpp"
    break;

  case 256: /* datetime_field_plural: MINUTES  */
#line 1144 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5074 "bison_parser.cpp"
    break;

  case 257: /* datetime_field_plural: HOURS  */
#line 1145 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5080 "bison_parser.cpp"
    break;

  case 258: /* datetime_field_plural: DAYS  */
#line 1146 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5086 "bison_parser.cpp"
    break;

  case 259: /* datetime_field_plural: MONTHS  */
#line 1147 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5092 "bison_parser.cpp"
    break;

  case 260: /* datetime_field_plural: YEARS  */
#line 1148 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5098 "bison_parser.cpp"
    break;

  case 263: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1152 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5104 "bison_parser.cpp"
    break;

  case 264: /* array_index: operand '[' int_literal ']'  */
#line 1154 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5110 "bison_parser.cpp"
    break;

  case 265: /* between_expr: operand BETWEEN operand AND operand  */
#line 1156 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5116 "bison_parser.cpp"
    break;

  case 266: /* column_name: IDENTIFIER  */
#line 1158 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5122 "bison_parser.cpp"
    break;

  case 267: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1159 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5128 "bison_parser.cpp"
    break;

  case 268: /* column_name: '*'  */
#line 1160 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5134 "bison_parser.cpp"
    break;

  case 269: /* column_name: IDENTIFIER '.' '*'  */
#line 1161 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5140 "bison_parser.cpp"
    break;

  case 277: /* string_literal: STRING  */
#line 1165 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5146 "bison_parser.cpp"
    break;

  case 278: /* bool_literal: TRUE  */
#line 1167 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5152 "bison_parser.cpp"
    break;

  case 279: /* bool_literal: FALSE  */
#line 1168 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5158 "bison_parser.cpp"
    break;

  case 280: /* num_literal: FLOATVAL  */
#line 1170 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5164 "bison_parser.cpp"
    break;

  case 282: /* int_literal: INTVAL  */
#line 1173 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5170 "bison_parser.cpp"
    break;

  case 283: /* null_literal: NULL  */
#line 1175 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5176 "bison_parser.cpp"
    break;

  case 284: /* date_literal: DATE STRING  */
#line 1177 "bison_parser.y"
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
#line 5191 "bison_parser.cpp"
    break;

  case 285: /* interval_literal: INTVAL duration_field  */
#line 1188 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5197 "bison_parser.cpp"
    break;

  case 286: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1189 "bison_parser.y"
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
#line 5213 "bison_parser.cpp"
    break;

  case 287: /* interval_literal: INTERVAL STRING  */
#line 1200 "bison_parser.y"
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
#line 5249 "bison_parser.cpp"
    break;

  case 288: /* param_expr: '?'  */
#line 1232 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5259 "bison_parser.cpp"
    break;

  case 290: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1241 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5270 "bison_parser.cpp"
    break;

  case 294: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1250 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5281 "bison_parser.cpp"
    break;

  case 295: /* table_ref_commalist: table_ref_atomic  */
#line 1257 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5290 "bison_parser.cpp"
    break;

  case 296: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1261 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5299 "bison_parser.cpp"
    break;

  case 297: /* table_ref_name: table_name opt_table_alias  */
#line 1266 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5311 "bison_parser.cpp"
    break;

  case 298: /* table_ref_name_no_alias: table_name  */
#line 1274 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5321 "bison_parser.cpp"
    break;

  case 299: /* table_name: IDENTIFIER  */
#line 1280 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5330 "bison_parser.cpp"
    break;

  case 300: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1284 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5339 "bison_parser.cpp"
    break;

  case 301: /* opt_index_name: IDENTIFIER  */
#line 1289 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5345 "bison_parser.cpp"
    break;

  case 302: /* opt_index_name: %empty  */
#line 1290 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5351 "bison_parser.cpp"
    break;

  case 304: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1292 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5357 "bison_parser.cpp"
    break;

  case 306: /* opt_table_alias: %empty  */
#line 1294 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5363 "bison_parser.cpp"
    break;

  case 307: /* alias: AS IDENTIFIER  */
#line 1296 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5369 "bison_parser.cpp"
    break;

  case 308: /* alias: IDENTIFIER  */
#line 1297 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5375 "bison_parser.cpp"
    break;

  case 310: /* opt_alias: %empty  */
#line 1299 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5381 "bison_parser.cpp"
    break;

  case 311: /* opt_locking_clause: opt_locking_clause_list  */
#line 1305 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5387 "bison_parser.cpp"
    break;

  case 312: /* opt_locking_clause: %empty  */
#line 1306 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5393 "bison_parser.cpp"
    break;

  case 313: /* opt_locking_clause_list: locking_clause  */
#line 1308 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5402 "bison_parser.cpp"
    break;

  case 314: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1312 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5411 "bison_parser.cpp"
    break;

  case 315: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1317 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5422 "bison_parser.cpp"
    break;

  case 316: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1323 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5433 "bison_parser.cpp"
    break;

  case 317: /* row_lock_mode: UPDATE  */
#line 1330 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5439 "bison_parser.cpp"
    break;

  case 318: /* row_lock_mode: NO KEY UPDATE  */
#line 1331 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5445 "bison_parser.cpp"
    break;

  case 319: /* row_lock_mode: SHARE  */
#line 1332 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5451 "bison_parser.cpp"
    break;

  case 320: /* row_lock_mode: KEY SHARE  */
#line 1333 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5457 "bison_parser.cpp"
    break;

  case 321: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1335 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5463 "bison_parser.cpp"
    break;

  case 322: /* opt_row_lock_policy: NOWAIT  */
#line 1336 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5469 "bison_parser.cpp"
    break;

  case 323: /* opt_row_lock_policy: %empty  */
#line 1337 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5475 "bison_parser.cpp"
    break;

  case 324: /* with_clause: WITH with_description_list  */
#line 1343 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5481 "bison_parser.cpp"
    break;

  case 325: /* with_description_list: with_description  */
#line 1345 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5490 "bison_parser.cpp"
    break;

  case 326: /* with_description_list: with_description_list ',' with_description  */
#line 1349 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5499 "bison_parser.cpp"
    break;

  case 327: /* with_description: IDENTIFIER AS subquery  */
#line 1354 "bison_parser.y"
                                          {
  if ((yyvsp[0].select_stmt)->withDescriptions != nullptr) {
    free((yyvsp[-2].sval));
    delete (yyvsp[0].select_stmt);
    yyerror(&yyloc, result, scanner, "Nested CTE is not allowed.");
    YYERROR;
  }
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5515 "bison_parser.cpp"
    break;

  case 328: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1370 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5527 "bison_parser.cpp"
    break;

  case 329: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1377 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5540 "bison_parser.cpp"
    break;

  case 330: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1385 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5553 "bison_parser.cpp"
    break;

  case 331: /* opt_join_type: INNER  */
#line 1394 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5559 "bison_parser.cpp"
    break;

  case 332: /* opt_join_type: LEFT OUTER  */
#line 1395 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5565 "bison_parser.cpp"
    break;

  case 333: /* opt_join_type: LEFT  */
#line 1396 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5571 "bison_parser.cpp"
    break;

  case 334: /* opt_join_type: RIGHT OUTER  */
#line 1397 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5577 "bison_parser.cpp"
    break;

  case 335: /* opt_join_type: RIGHT  */
#line 1398 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5583 "bison_parser.cpp"
    break;

  case 336: /* opt_join_type: FULL OUTER  */
#line 1399 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5589 "bison_parser.cpp"
    break;

  case 337: /* opt_join_type: OUTER  */
#line 1400 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5595 "bison_parser.cpp"
    break;

  case 338: /* opt_join_type: FULL  */
#line 1401 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5601 "bison_parser.cpp"
    break;

  case 339: /* opt_join_type: CROSS  */
#line 1402 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5607 "bison_parser.cpp"
    break;

  case 340: /* opt_join_type: %empty  */
#line 1403 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5613 "bison_parser.cpp"
    break;

  case 344: /* ident_commalist: IDENTIFIER  */
#line 1414 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5622 "bison_parser.cpp"
    break;

  case 345: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1418 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5631 "bison_parser.cpp"
    break;


#line 5635 "bison_parser.cpp"

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

#line 1424 "bison_parser.y"


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

// clang-format on
