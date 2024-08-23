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
  YYSYMBOL_191_ = 191,                     /* '('  */
  YYSYMBOL_192_ = 192,                     /* ')'  */
  YYSYMBOL_193_ = 193,                     /* '.'  */
  YYSYMBOL_194_ = 194,                     /* ';'  */
  YYSYMBOL_195_ = 195,                     /* ','  */
  YYSYMBOL_196_ = 196,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 197,                 /* $accept  */
  YYSYMBOL_input = 198,                    /* input  */
  YYSYMBOL_statement_list = 199,           /* statement_list  */
  YYSYMBOL_statement = 200,                /* statement  */
  YYSYMBOL_preparable_statement = 201,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 202,                /* opt_hints  */
  YYSYMBOL_hint_list = 203,                /* hint_list  */
  YYSYMBOL_hint = 204,                     /* hint  */
  YYSYMBOL_transaction_statement = 205,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 206,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 207,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 208,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 209,        /* execute_statement  */
  YYSYMBOL_import_statement = 210,         /* import_statement  */
  YYSYMBOL_file_type = 211,                /* file_type  */
  YYSYMBOL_file_path = 212,                /* file_path  */
  YYSYMBOL_opt_import_export_options = 213, /* opt_import_export_options  */
  YYSYMBOL_import_export_options = 214,    /* import_export_options  */
  YYSYMBOL_export_statement = 215,         /* export_statement  */
  YYSYMBOL_show_statement = 216,           /* show_statement  */
  YYSYMBOL_create_statement = 217,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 218,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 219,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 220,               /* table_elem  */
  YYSYMBOL_column_def = 221,               /* column_def  */
  YYSYMBOL_column_type = 222,              /* column_type  */
  YYSYMBOL_opt_time_precision = 223,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 224, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 225,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 226,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 227,        /* column_constraint  */
  YYSYMBOL_table_constraint = 228,         /* table_constraint  */
  YYSYMBOL_drop_statement = 229,           /* drop_statement  */
  YYSYMBOL_opt_exists = 230,               /* opt_exists  */
  YYSYMBOL_alter_statement = 231,          /* alter_statement  */
  YYSYMBOL_alter_action = 232,             /* alter_action  */
  YYSYMBOL_drop_action = 233,              /* drop_action  */
  YYSYMBOL_delete_statement = 234,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 235,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 236,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 237,          /* opt_column_list  */
  YYSYMBOL_update_statement = 238,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 239,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 240,            /* update_clause  */
  YYSYMBOL_select_statement = 241,         /* select_statement  */
  YYSYMBOL_query_expression = 242,         /* query_expression  */
  YYSYMBOL_query_expression_body = 243,    /* query_expression_body  */
  YYSYMBOL_query_expression_parens = 244,  /* query_expression_parens  */
  YYSYMBOL_query_term = 245,               /* query_term  */
  YYSYMBOL_subquery = 246,                 /* subquery  */
  YYSYMBOL_set_operator = 247,             /* set_operator  */
  YYSYMBOL_set_type = 248,                 /* set_type  */
  YYSYMBOL_opt_all = 249,                  /* opt_all  */
  YYSYMBOL_query_primary = 250,            /* query_primary  */
  YYSYMBOL_opt_distinct = 251,             /* opt_distinct  */
  YYSYMBOL_select_list = 252,              /* select_list  */
  YYSYMBOL_opt_from_clause = 253,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 254,              /* from_clause  */
  YYSYMBOL_opt_where = 255,                /* opt_where  */
  YYSYMBOL_opt_group = 256,                /* opt_group  */
  YYSYMBOL_opt_having = 257,               /* opt_having  */
  YYSYMBOL_opt_order = 258,                /* opt_order  */
  YYSYMBOL_order_list = 259,               /* order_list  */
  YYSYMBOL_order_desc = 260,               /* order_desc  */
  YYSYMBOL_opt_order_type = 261,           /* opt_order_type  */
  YYSYMBOL_opt_top = 262,                  /* opt_top  */
  YYSYMBOL_opt_limit = 263,                /* opt_limit  */
  YYSYMBOL_expr_list = 264,                /* expr_list  */
  YYSYMBOL_opt_extended_literal_list = 265, /* opt_extended_literal_list  */
  YYSYMBOL_extended_literal_list = 266,    /* extended_literal_list  */
  YYSYMBOL_casted_extended_literal = 267,  /* casted_extended_literal  */
  YYSYMBOL_extended_literal = 268,         /* extended_literal  */
  YYSYMBOL_expr_alias = 269,               /* expr_alias  */
  YYSYMBOL_expr = 270,                     /* expr  */
  YYSYMBOL_operand = 271,                  /* operand  */
  YYSYMBOL_scalar_expr = 272,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 273,               /* unary_expr  */
  YYSYMBOL_binary_expr = 274,              /* binary_expr  */
  YYSYMBOL_logic_expr = 275,               /* logic_expr  */
  YYSYMBOL_in_expr = 276,                  /* in_expr  */
  YYSYMBOL_case_expr = 277,                /* case_expr  */
  YYSYMBOL_case_list = 278,                /* case_list  */
  YYSYMBOL_exists_expr = 279,              /* exists_expr  */
  YYSYMBOL_comp_expr = 280,                /* comp_expr  */
  YYSYMBOL_function_expr = 281,            /* function_expr  */
  YYSYMBOL_opt_window = 282,               /* opt_window  */
  YYSYMBOL_opt_partition = 283,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 284,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 285,               /* frame_type  */
  YYSYMBOL_frame_bound = 286,              /* frame_bound  */
  YYSYMBOL_extract_expr = 287,             /* extract_expr  */
  YYSYMBOL_cast_expr = 288,                /* cast_expr  */
  YYSYMBOL_datetime_field = 289,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 290,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 291,           /* duration_field  */
  YYSYMBOL_array_expr = 292,               /* array_expr  */
  YYSYMBOL_array_index = 293,              /* array_index  */
  YYSYMBOL_between_expr = 294,             /* between_expr  */
  YYSYMBOL_column_name = 295,              /* column_name  */
  YYSYMBOL_literal = 296,                  /* literal  */
  YYSYMBOL_string_literal = 297,           /* string_literal  */
  YYSYMBOL_bool_literal = 298,             /* bool_literal  */
  YYSYMBOL_num_literal = 299,              /* num_literal  */
  YYSYMBOL_int_literal = 300,              /* int_literal  */
  YYSYMBOL_null_literal = 301,             /* null_literal  */
  YYSYMBOL_date_literal = 302,             /* date_literal  */
  YYSYMBOL_interval_literal = 303,         /* interval_literal  */
  YYSYMBOL_param_expr = 304,               /* param_expr  */
  YYSYMBOL_table_ref = 305,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 306,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 307, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 308,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 309,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 310,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 311,               /* table_name  */
  YYSYMBOL_opt_index_name = 312,           /* opt_index_name  */
  YYSYMBOL_table_alias = 313,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 314,          /* opt_table_alias  */
  YYSYMBOL_alias = 315,                    /* alias  */
  YYSYMBOL_opt_alias = 316,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 317,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 318,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 319,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 320,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 321,      /* opt_row_lock_policy  */
  YYSYMBOL_with_clause = 322,              /* with_clause  */
  YYSYMBOL_with_description_list = 323,    /* with_description_list  */
  YYSYMBOL_with_description = 324,         /* with_description  */
  YYSYMBOL_join_clause = 325,              /* join_clause  */
  YYSYMBOL_opt_join_type = 326,            /* opt_join_type  */
  YYSYMBOL_join_condition = 327,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 328,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 329           /* ident_commalist  */
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
#define YYLAST   883

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  197
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  133
/* YYNRULES -- Number of rules.  */
#define YYNRULES  344
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  629

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   434


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
     191,   192,   184,   182,   195,   183,   193,   185,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   194,
     175,   172,   176,   196,     2,     2,     2,     2,     2,     2,
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
     178,   179,   180,   181,   188
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   331,   331,   350,   356,   363,   367,   371,   372,   373,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     390,   391,   393,   397,   402,   406,   416,   417,   418,   420,
     420,   426,   432,   434,   438,   450,   456,   469,   484,   488,
     489,   490,   492,   501,   505,   515,   525,   536,   552,   553,
     558,   569,   582,   594,   601,   608,   617,   618,   620,   624,
     629,   630,   632,   639,   640,   641,   642,   643,   644,   645,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   661,   662,   664,   665,   666,   668,   669,   671,   675,
     680,   681,   682,   683,   685,   686,   694,   700,   706,   712,
     718,   719,   726,   732,   734,   744,   751,   762,   769,   777,
     778,   785,   792,   796,   801,   810,   810,   812,   832,   860,
     860,   871,   882,   894,   895,   897,   899,   901,   906,   910,
     914,   919,   920,   922,   932,   933,   935,   937,   938,   940,
     942,   943,   945,   950,   952,   953,   955,   956,   958,   962,
     967,   969,   970,   971,   975,   976,   978,   979,   980,   981,
     982,   983,   988,   992,   998,   999,  1001,  1005,  1010,  1010,
    1014,  1022,  1023,  1025,  1034,  1034,  1034,  1034,  1034,  1036,
    1037,  1037,  1037,  1037,  1037,  1037,  1037,  1037,  1038,  1038,
    1042,  1042,  1044,  1045,  1046,  1047,  1048,  1050,  1050,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1061,  1062,
    1064,  1065,  1066,  1067,  1071,  1072,  1073,  1074,  1076,  1077,
    1079,  1080,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1092,
    1093,  1097,  1098,  1100,  1101,  1106,  1107,  1108,  1112,  1113,
    1114,  1116,  1117,  1118,  1119,  1120,  1122,  1124,  1126,  1127,
    1128,  1129,  1130,  1131,  1133,  1134,  1135,  1136,  1137,  1138,
    1140,  1140,  1142,  1144,  1146,  1148,  1149,  1150,  1151,  1153,
    1153,  1153,  1153,  1153,  1153,  1153,  1155,  1157,  1158,  1160,
    1161,  1163,  1165,  1167,  1178,  1179,  1190,  1222,  1231,  1231,
    1238,  1238,  1240,  1240,  1247,  1251,  1256,  1264,  1270,  1274,
    1279,  1280,  1282,  1282,  1284,  1284,  1286,  1287,  1289,  1289,
    1295,  1296,  1298,  1302,  1307,  1313,  1320,  1321,  1322,  1323,
    1325,  1326,  1327,  1333,  1335,  1339,  1344,  1360,  1367,  1375,
    1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,
    1395,  1401,  1401,  1404,  1408
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
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "transaction_statement", "opt_transaction_keyword",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path",
  "opt_import_export_options", "import_export_options", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_set", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
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

#define YYPACT_NINF (-451)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-340)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     566,    48,   176,   236,   286,   176,   185,    32,    79,   147,
     169,   176,   232,    16,   200,    44,   297,   161,   161,   161,
     -27,   338,   162,  -451,   243,  -451,   243,  -451,  -451,  -451,
    -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,
      40,    58,  -451,  -451,   -24,   360,   177,  -451,   174,   281,
    -451,   258,   258,   258,   176,   393,   176,   401,   417,   315,
    -451,   319,   -27,   314,   -54,   319,   319,   319,   176,  -451,
     323,   257,  -451,  -451,  -451,  -451,  -451,   264,    39,  -451,
     566,  -451,   358,  -451,  -451,  -451,  -451,   329,  -451,   -24,
     342,    20,   402,    40,    58,  -451,   457,   244,   458,   339,
     465,   176,   176,   384,  -451,   376,   282,  -451,  -451,  -451,
     388,   471,   429,   176,   285,   476,   476,   476,   478,   176,
     176,  -451,   291,   297,  -451,  -451,  -451,   294,   388,  -451,
    -451,  -451,  -451,   388,   178,   366,  -451,    20,  -451,  -451,
    -451,   586,   299,   484,  -451,   488,  -451,  -451,    15,  -451,
     301,   302,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,
    -451,  -451,  -451,  -451,  -451,   448,  -451,   364,   -59,   282,
     388,  -451,   476,   496,   196,  -131,   309,   310,   311,   230,
     399,   317,   461,  -451,   300,   407,   312,  -451,    22,   510,
    -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,
    -451,  -451,  -451,  -451,  -451,  -451,   332,   -56,  -451,  -451,
     415,  -451,  -451,   -76,   -76,   -76,  -451,  -451,  -451,  -451,
    -451,   508,   318,  -451,   140,   125,   459,   -25,   -11,  -451,
     366,  -451,   366,  -451,  -451,  -451,  -451,  -451,  -451,  -451,
    -451,  -451,  -451,  -451,  -451,  -451,  -451,  -451,    41,  -451,
     274,  -451,  -451,  -451,   244,  -451,   176,   511,   -27,   114,
     389,   125,   416,  -451,  -108,   327,  -451,     6,    13,   402,
     274,   388,   388,    56,   -50,   328,   461,   667,   388,   101,
     330,   -37,    37,   384,  -451,   388,  -451,   388,   517,   388,
    -451,  -451,   461,  -451,   461,    30,   334,    66,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   401,   388,   471,  -451,   481,  -451,  -451,
     337,   128,  -451,   384,  -451,   340,    59,  -451,   388,  -451,
    -451,  -451,   388,   388,  -451,   365,   409,  -451,   148,  -451,
    -451,   396,  -451,  -451,   343,   435,  -451,   676,   410,   344,
      74,  -451,  -451,  -451,   -27,   176,  -451,   533,   244,   460,
     388,  -451,  -451,   346,   449,   225,   135,   205,   388,   388,
    -451,   402,   441,   133,  -451,  -451,   -27,  -451,    -2,  -451,
     351,  -451,    23,  -451,   479,  -451,  -451,  -451,   431,   636,
     694,   461,   356,   300,  -451,   450,   368,   694,   694,   694,
     694,   485,   485,   485,   485,   101,   101,   105,   105,   105,
    -109,   369,   125,  -451,   319,   128,   551,   393,   116,  -451,
     244,  -451,   508,  -451,   125,   125,  -451,   494,   496,  -451,
     397,  -451,   676,   496,   476,  -451,  -451,   371,  -451,   372,
    -451,  -451,   373,  -451,  -451,   375,  -451,  -451,  -451,  -451,
     377,  -451,  -451,    10,   378,   496,  -451,   114,  -451,  -451,
    -451,   120,   379,  -451,   145,  -451,   388,   676,   388,   388,
    -451,   -29,   211,   382,  -451,   383,   475,  -451,  -451,  -451,
     497,   498,   500,   486,    37,   558,  -451,  -451,  -451,   462,
    -451,   461,   694,   300,   394,   172,  -451,  -451,   589,   180,
    -451,  -451,  -451,   149,   181,  -451,  -451,   102,  -451,   404,
     194,  -451,   583,   588,  -451,   591,   592,   594,  -451,   480,
    -451,  -451,   495,  -451,    10,  -451,   496,   216,  -451,  -451,
     499,   460,   -21,   413,   125,   156,  -451,   388,  -451,    23,
      37,  -451,  -451,  -451,    37,    57,   411,   388,   667,   418,
     217,  -451,  -451,  -451,  -451,   605,   393,  -451,  -451,  -451,
    -451,   419,   233,   420,   426,   430,  -451,  -451,  -451,   238,
    -451,   492,   545,  -451,  -451,  -451,  -451,   125,  -451,  -451,
     298,   496,   -30,  -451,  -451,  -451,  -451,  -451,  -451,   620,
    -451,  -451,  -451,  -451,   388,   278,   436,   388,   239,   388,
    -451,   437,   312,  -451,  -451,  -451,   439,    17,   496,   125,
    -451,  -451,   125,  -451,  -451,   -34,    21,   157,  -451,  -451,
     247,  -451,  -451,   514,  -451,  -451,  -451,    21,  -451
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,     0,    30,    30,    30,
       0,     0,   342,     3,    21,    19,    21,    18,     8,     9,
       7,    11,    16,    17,    13,    14,    12,    15,    10,   115,
     147,   116,   119,   125,     0,     0,   298,   106,    33,     0,
      50,    57,    57,    57,     0,     0,     0,     0,   135,     0,
     297,   101,     0,     0,     0,   101,   101,   101,     0,    48,
       0,   323,   324,    29,    26,    28,    27,     0,     0,     1,
     341,     2,     0,     6,     5,   129,   130,     0,   128,     0,
     132,   161,     0,   147,     0,    98,     0,   165,     0,     0,
     301,     0,     0,   141,    37,     0,   110,   281,   154,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,   124,   123,     4,     0,     0,   122,
     120,   131,   127,     0,     0,   311,   121,   161,   299,   276,
     279,   281,     0,     0,   282,     0,   277,   278,     0,   287,
       0,   164,   166,   168,   170,   269,   270,   271,   280,   272,
     273,   274,   275,    32,    31,     0,   300,     0,     0,   110,
       0,   105,     0,     0,     0,   265,     0,     0,     0,     0,
       0,     0,     0,   267,     0,   138,   136,   162,   309,   174,
     181,   182,   183,   176,   178,   184,   177,   197,   185,   186,
     187,   188,   180,   175,   190,   191,     0,   141,   112,   100,
       0,   126,    38,    41,    41,    41,    99,    96,    97,   326,
     325,     0,   146,   148,   153,   157,   159,   156,     0,   117,
     310,   312,   311,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   284,     0,   283,
     286,   171,   172,    34,     0,    56,     0,     0,     0,     0,
       0,   140,     0,   343,     0,     0,   108,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,     0,   192,
       0,     0,     0,   141,   137,     0,   307,     0,     0,     0,
     308,   173,     0,   194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   102,   103,
       0,     0,    47,   141,    46,    24,     0,    22,     0,   152,
     151,   150,     0,     0,   316,     0,     0,   318,   322,   313,
     118,     0,   285,   167,     0,     0,    53,     0,     0,     0,
       0,    58,    60,    61,     0,     0,   109,     0,     0,   232,
       0,   266,   268,     0,     0,     0,     0,     0,     0,     0,
     216,     0,     0,     0,   189,   179,     0,   139,   288,   290,
       0,   292,   305,   291,   143,   163,   208,   306,   209,     0,
     204,     0,     0,     0,   195,     0,   207,   206,   222,   223,
     224,   225,   226,   227,   228,   199,   198,   201,   200,   202,
     203,     0,   114,   113,   101,     0,     0,     0,     0,    36,
       0,    20,     0,   149,   160,   158,   319,     0,     0,   321,
       0,   314,     0,     0,     0,    79,    73,     0,    75,    85,
      76,    63,     0,    70,    71,     0,    67,    68,    74,    77,
      82,    72,    64,    87,     0,     0,    52,     0,    55,    35,
     344,     0,     0,   229,     0,   220,     0,     0,     0,     0,
     214,     0,     0,     0,   262,     0,     0,   338,   330,   336,
     334,   337,   332,     0,     0,     0,   304,   296,   302,     0,
     133,     0,   205,     0,     0,     0,   196,   263,     0,     0,
      45,    43,    40,     0,     0,    23,   317,   322,   320,     0,
       0,    51,     0,     0,    69,     0,     0,     0,    78,     0,
      91,    92,     0,    62,    86,    88,     0,     0,    59,   107,
     234,   232,     0,     0,   218,     0,   217,     0,   221,   305,
       0,   333,   335,   331,     0,   289,   306,     0,   264,     0,
       0,   212,   210,   104,    39,     0,     0,    25,   315,   169,
      54,     0,     0,     0,     0,     0,    90,    93,    89,     0,
      95,     0,   147,   230,   246,   247,   215,   219,   293,   327,
     339,     0,   145,   213,   211,    44,    42,    66,    84,     0,
      80,    65,    81,    94,     0,   237,     0,     0,     0,     0,
     142,     0,   233,   238,   239,   240,     0,     0,     0,   340,
     328,   303,   144,    83,   231,     0,     0,     0,   245,   235,
       0,   244,   242,     0,   243,   241,   329,     0,   236
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -451,  -451,  -451,   548,  -451,   609,  -451,   214,  -451,   333,
    -451,  -451,  -451,  -451,  -400,  -113,   166,   222,  -451,  -451,
    -451,   370,  -451,   182,  -451,  -359,  -451,  -451,  -451,  -451,
     119,  -451,  -451,   -57,  -451,  -451,  -451,  -451,  -451,  -451,
     469,  -451,  -451,   325,  -230,    45,   602,   218,   -31,   525,
      34,  -451,  -451,  -148,   381,  -451,  -451,  -451,  -174,  -451,
    -451,   -93,  -451,   326,  -451,  -451,   516,  -264,  -451,  -317,
     408,   403,   391,  -127,   -90,  -451,  -451,  -451,  -451,  -451,
    -451,   385,  -451,  -451,  -451,   132,  -451,  -451,  -451,  -450,
    -451,  -451,   -70,  -451,  -451,  -451,  -451,  -451,  -451,   -85,
    -451,  -451,   518,   -42,  -451,  -451,   529,  -451,  -451,  -433,
     138,  -451,  -451,  -451,     0,  -451,  -451,   117,   491,  -451,
     456,  -451,   443,  -451,   173,  -451,  -451,   575,  -451,  -451,
    -451,  -451,  -378
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,    23,    24,    83,   326,   327,    25,    74,
      26,   164,    27,    28,   105,   213,   322,   418,    29,    30,
      31,   100,   350,   351,   352,   453,   518,   514,   523,   524,
     525,   353,    32,   113,    33,   318,   319,    34,    35,    36,
     174,    37,   207,   208,    38,    39,    40,    41,    42,    63,
      92,    90,   132,    43,   110,   185,   283,   284,   171,   490,
     600,    91,   222,   223,   331,    58,   135,   186,   150,   151,
     152,   153,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   274,   196,   197,   198,   463,   572,   606,   607,   619,
     199,   200,   245,   246,   247,   201,   202,   203,   204,   205,
     155,   156,   157,   158,   159,   160,   161,   162,   377,   378,
     379,   380,   381,    59,   382,   167,   486,   487,   488,   291,
     229,   230,   231,   338,   431,    44,    71,    72,   383,   483,
     610,    81,   264
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     137,   224,    47,   214,   215,    50,   225,   227,   118,   119,
     120,    60,   154,    64,   373,   108,   361,   501,   109,    46,
     140,   141,   599,   615,   476,   286,   286,   615,   346,   170,
     298,   333,    10,   316,   616,    10,   280,   257,   519,   320,
      46,   461,   116,   261,   368,   139,   140,   141,    85,    85,
     507,   545,   273,   334,   103,   510,   106,   281,   130,   262,
     267,   136,   268,    68,   369,    77,   477,    85,   121,   258,
     370,   478,   520,   509,    89,    45,   133,   527,   479,   480,
     313,   287,   117,   476,   356,    86,    86,   357,    16,   287,
     277,   536,   279,   287,   134,   481,   464,   287,   289,  -339,
     482,   168,   169,   504,    86,    69,   289,   114,   533,   384,
     289,   580,   335,   210,   289,   321,   521,   347,    87,   217,
     218,   363,    88,    88,   458,   477,   336,    89,    54,   495,
     478,   143,   259,   391,   522,   621,   622,   479,   480,   315,
     287,    88,   348,   266,   365,   366,   475,   144,   569,   419,
     288,   485,   416,   337,   481,   375,   586,   289,  -339,   482,
     386,   392,   388,   154,    20,   285,   623,    20,   145,   154,
     272,   574,   394,   555,   287,    55,   349,   628,   417,    46,
     342,   175,   139,   140,   141,   617,   277,   412,   618,   617,
     395,   289,   618,  -294,   145,   146,   147,   362,   359,   556,
     364,   224,   389,   598,   390,   424,   425,    62,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   473,   148,   176,   177,   178,   376,   550,
     620,   125,   329,   175,   139,   140,   141,   149,    78,    48,
     298,   471,   472,   287,   298,   494,   468,    56,   139,   140,
     141,   421,  -295,   287,   422,    10,   344,    51,   287,   330,
     289,   265,    94,   429,   430,   179,   456,    52,   143,   457,
     289,   411,    65,   154,   287,   289,   576,   176,   177,   178,
      94,   428,    66,   582,   144,   309,   310,   311,   312,    49,
     313,   289,   312,   142,   313,   226,    57,   357,    53,   469,
      70,   492,   180,   175,   139,   140,   141,   129,   502,   429,
     430,   503,   529,    67,    61,   254,   181,   179,    73,   369,
     143,   511,   537,   474,   476,   470,   624,   625,   285,   287,
     602,   145,   146,   147,   143,   154,   144,   531,    79,   532,
     285,   534,   535,   287,   272,   549,   289,   176,   177,   178,
     144,    75,    76,   467,   180,   459,    80,   498,    82,    10,
     289,   182,   183,    95,   552,    97,   477,   285,   181,   184,
      96,   478,   554,   557,   149,   503,   254,    98,   479,   480,
     323,   324,   596,   145,   146,   147,   560,   179,    99,   357,
     143,   175,   139,   140,   141,   481,   104,   145,   146,   147,
     482,   548,   175,   139,   140,   141,   144,   107,   570,   584,
     577,   357,   285,   182,   183,   233,   234,   235,   236,   237,
     238,   184,   101,   102,   180,   588,   149,   148,   589,   109,
     593,   611,   597,   357,   357,   176,   177,   178,   181,   626,
     149,   111,   357,   603,   604,   605,   275,   177,   178,   112,
     115,   122,   123,   145,   146,   147,   124,   127,   128,   131,
     138,    10,   163,   165,   175,   139,   140,   141,   166,   170,
     609,   172,   612,   173,   206,   179,   209,   211,   143,   595,
     212,   216,    62,   182,   183,   221,   179,   228,   249,   143,
     248,   184,   250,   253,   144,   255,   149,   254,   256,   263,
     269,   270,   271,   282,   314,   144,   278,   285,   317,   177,
     178,   325,   180,   328,   345,   332,   355,   354,   358,   371,
     387,   414,   374,   276,   432,   393,   181,   292,   415,   426,
     434,   420,   427,   454,   433,   455,   460,   181,   465,   462,
     293,   145,   146,   147,   391,   466,   484,   493,   179,   287,
     489,   143,   145,   146,   147,   500,   496,   313,   506,   497,
     508,   546,   512,   513,   515,   293,   516,   144,   517,   526,
     530,   182,   183,     1,   538,   539,   540,   541,   542,   184,
     543,     2,   182,   183,   149,   276,   551,   544,     3,   561,
     184,   547,   553,     4,   562,   149,   559,   563,   564,   181,
     565,   567,   581,   566,     5,   575,   571,     6,     7,   585,
     583,   587,   590,   294,   145,   146,   147,   297,   591,     8,
       9,   594,   592,    87,   298,    10,   601,   608,   126,   613,
      11,   614,   627,    12,   295,    84,   505,   499,   260,   528,
     413,   296,   297,   568,   182,   183,    93,   219,   360,   298,
     299,   341,   184,   232,   423,    13,   578,   149,   367,    14,
    -340,  -340,   343,   573,  -340,  -340,   251,   307,   308,   309,
     310,   311,   312,   339,   313,    15,   385,   252,   579,   290,
     558,    16,   300,   301,   302,   303,   304,   435,   340,   305,
     306,   293,   307,   308,   309,   310,   311,   312,   220,   313,
       0,   436,     0,     0,     0,     0,   437,   438,   439,   440,
     441,     0,   442,     0,     0,     0,     0,     0,     0,     0,
     443,     0,   293,     0,    17,    18,    19,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   294,
       0,     0,     0,     0,     0,     0,   444,     0,     0,   293,
       0,     0,     0,     0,   491,     0,     0,    20,     0,     0,
     372,     0,     0,     0,   445,     0,   446,   447,   297,     0,
     294,     0,     0,     0,     0,   298,   299,     0,     0,     0,
       0,   448,     0,     0,     0,     0,   449,     0,   450,     0,
       0,   372,     0,     0,     0,     0,     0,  -340,   451,   297,
       0,     0,     0,     0,     0,     0,   298,   299,   300,   301,
     302,   303,   304,     0,     0,   305,   306,     0,   307,   308,
     309,   310,   311,   312,     0,   313,   297,     0,     0,     0,
       0,     0,   452,   298,  -340,     0,     0,     0,     0,   300,
     301,   302,   303,   304,     0,     0,   305,   306,     0,   307,
     308,   309,   310,   311,   312,     0,   313,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -340,  -340,  -340,   303,
     304,     0,     0,   305,   306,     0,   307,   308,   309,   310,
     311,   312,     0,   313
};

static const yytype_int16 yycheck[] =
{
      93,   128,     2,   116,   117,     5,   133,   134,    65,    66,
      67,    11,    97,    13,   278,    57,     3,   417,    12,     3,
       5,     6,    52,     6,    26,     3,     3,     6,   258,    85,
     139,    56,    59,   207,    17,    59,   184,    96,    28,   115,
       3,   358,    96,   170,    94,     4,     5,     6,     9,     9,
     428,   484,   179,    64,    54,   433,    56,   184,    89,   172,
     191,    92,   193,    19,   114,    20,    68,     9,    68,   128,
     120,    73,    62,   432,    40,    27,    56,   455,    80,    81,
     189,   118,   136,    26,   192,    46,    46,   195,   115,   118,
     180,   120,   182,   118,    74,    97,   360,   118,   135,   101,
     102,   101,   102,   420,    46,    61,   135,    62,   467,   283,
     135,   544,   123,   113,   135,   191,   106,     3,    78,   119,
     120,   269,    83,    83,   354,    68,   137,    93,    96,   393,
      73,    90,   191,   103,   124,   169,   170,    80,    81,   195,
     118,    83,    28,   174,   271,   272,   376,   106,   526,   323,
     128,   128,    24,   164,    97,   192,   556,   135,   101,   102,
     287,   131,   289,   248,   191,   195,   616,   191,   153,   254,
     114,   192,   106,    24,   118,    96,    62,   627,    50,     3,
     250,     3,     4,     5,     6,   168,   276,   314,   171,   168,
     124,   135,   171,   195,   153,   154,   155,   184,   192,    50,
     270,   328,   292,   581,   294,   332,   333,   191,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   371,   183,    47,    48,    49,   191,   493,
     608,   192,    92,     3,     4,     5,     6,   196,    20,     3,
     139,   368,   369,   118,   139,   393,   111,   100,     4,     5,
       6,   192,   195,   118,   195,    59,   256,    72,   118,   119,
     135,    65,    44,   161,   162,    87,   192,    82,    90,   195,
     135,   313,    72,   358,   118,   135,   120,    47,    48,    49,
      62,   133,    82,   547,   106,   184,   185,   186,   187,     3,
     189,   135,   187,    49,   189,   117,   127,   195,   113,    94,
       3,   391,   124,     3,     4,     5,     6,    89,   192,   161,
     162,   195,   192,   113,    82,   195,   138,    87,   157,   114,
      90,   434,   111,   190,    26,   120,   169,   170,   195,   118,
     594,   153,   154,   155,    90,   420,   106,   192,     0,   466,
     195,   468,   469,   118,   114,   493,   135,    47,    48,    49,
     106,    18,    19,   128,   124,   355,   194,   414,   115,    59,
     135,   183,   184,     3,   192,   191,    68,   195,   138,   191,
     193,    73,   192,   192,   196,   195,   195,    96,    80,    81,
     214,   215,    84,   153,   154,   155,   192,    87,   130,   195,
      90,     3,     4,     5,     6,    97,     3,   153,   154,   155,
     102,   491,     3,     4,     5,     6,   106,     6,   192,   192,
     537,   195,   195,   183,   184,   141,   142,   143,   144,   145,
     146,   191,    52,    53,   124,   192,   196,   183,   195,    12,
     192,   192,   134,   195,   195,    47,    48,    49,   138,   192,
     196,   126,   195,   165,   166,   167,    47,    48,    49,   130,
     136,   128,   195,   153,   154,   155,   192,    99,   129,   117,
       3,    59,     4,   124,     3,     4,     5,     6,     3,    85,
     597,    95,   599,   191,     3,    87,    47,   192,    90,   572,
       4,     3,   191,   183,   184,   191,    87,   121,     4,    90,
     191,   191,     4,   192,   106,    47,   196,   195,   134,     3,
     191,   191,   191,    96,   172,   106,   189,   195,    93,    48,
      49,     3,   124,   195,     3,    56,   100,   128,   191,   191,
       3,    40,   192,   124,   128,   191,   138,    17,   191,   164,
      95,   191,   123,   123,   191,   191,     3,   138,   192,    79,
      55,   153,   154,   155,   103,    96,   195,   191,    87,   118,
      71,    90,   153,   154,   155,     4,   106,   189,    64,   190,
     163,     3,   191,   191,   191,    55,   191,   106,   191,   191,
     191,   183,   184,     7,   192,   192,   101,    80,    80,   191,
      80,    15,   183,   184,   196,   124,   192,   101,    22,     6,
     191,   129,     3,    27,     6,   196,   192,     6,     6,   138,
       6,   106,   191,   123,    38,   192,   107,    41,    42,     4,
     192,   192,   192,   103,   153,   154,   155,   132,   192,    53,
      54,   129,   192,    78,   139,    59,     6,   191,    80,   192,
      64,   192,   118,    67,   124,    26,   422,   415,   169,   457,
     315,   131,   132,   524,   183,   184,    44,   122,   267,   139,
     140,   248,   191,   137,   328,    89,   539,   196,   273,    93,
     175,   176,   254,   531,   179,   180,   148,   182,   183,   184,
     185,   186,   187,   230,   189,   109,   285,   148,   540,   188,
     507,   115,   172,   173,   174,   175,   176,    11,   232,   179,
     180,    55,   182,   183,   184,   185,   186,   187,   123,   189,
      -1,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    55,    -1,   158,   159,   160,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    55,
      -1,    -1,    -1,    -1,   118,    -1,    -1,   191,    -1,    -1,
     124,    -1,    -1,    -1,    88,    -1,    90,    91,   132,    -1,
     103,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,   110,    -1,   112,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,   103,   122,   132,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   172,   173,
     174,   175,   176,    -1,    -1,   179,   180,    -1,   182,   183,
     184,   185,   186,   187,    -1,   189,   132,    -1,    -1,    -1,
      -1,    -1,   156,   139,   140,    -1,    -1,    -1,    -1,   172,
     173,   174,   175,   176,    -1,    -1,   179,   180,    -1,   182,
     183,   184,   185,   186,   187,    -1,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,   175,
     176,    -1,    -1,   179,   180,    -1,   182,   183,   184,   185,
     186,   187,    -1,   189
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    27,    38,    41,    42,    53,    54,
      59,    64,    67,    89,    93,   109,   115,   158,   159,   160,
     191,   198,   199,   200,   201,   205,   207,   209,   210,   215,
     216,   217,   229,   231,   234,   235,   236,   238,   241,   242,
     243,   244,   245,   250,   322,    27,     3,   311,     3,     3,
     311,    72,    82,   113,    96,    96,   100,   127,   262,   310,
     311,    82,   191,   246,   311,    72,    82,   113,    19,    61,
       3,   323,   324,   157,   206,   206,   206,   242,   244,     0,
     194,   328,   115,   202,   202,     9,    46,    78,    83,   247,
     248,   258,   247,   243,   244,     3,   193,   191,    96,   130,
     218,   218,   218,   311,     3,   211,   311,     6,   300,    12,
     251,   126,   130,   230,   242,   136,    96,   136,   230,   230,
     230,   311,   128,   195,   192,   192,   200,    99,   129,   244,
     245,   117,   249,    56,    74,   263,   245,   258,     3,     4,
       5,     6,    49,    90,   106,   153,   154,   155,   183,   196,
     265,   266,   267,   268,   296,   297,   298,   299,   300,   301,
     302,   303,   304,     4,   208,   124,     3,   312,   311,   311,
      85,   255,    95,   191,   237,     3,    47,    48,    49,    87,
     124,   138,   183,   184,   191,   252,   264,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   279,   280,   281,   287,
     288,   292,   293,   294,   295,   296,     3,   239,   240,    47,
     311,   192,     4,   212,   212,   212,     3,   311,   311,   246,
     324,   191,   259,   260,   270,   270,   117,   270,   121,   317,
     318,   319,   263,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   289,   290,   291,   191,     4,
       4,   299,   303,   192,   195,    47,   134,    96,   128,   191,
     237,   270,   212,     3,   329,    65,   245,   191,   193,   191,
     191,   191,   114,   270,   278,    47,   124,   271,   189,   271,
     250,   270,    96,   253,   254,   195,     3,   118,   128,   135,
     315,   316,    17,    55,   103,   124,   131,   132,   139,   140,
     172,   173,   174,   175,   176,   179,   180,   182,   183,   184,
     185,   186,   187,   189,   172,   195,   255,    93,   232,   233,
     115,   191,   213,   213,   213,     3,   203,   204,   195,    92,
     119,   261,    56,    56,    64,   123,   137,   164,   320,   319,
     317,   268,   289,   267,   311,     3,   241,     3,    28,    62,
     219,   220,   221,   228,   128,   100,   192,   195,   191,   192,
     251,     3,   184,   250,   289,   270,   270,   278,    94,   114,
     120,   191,   124,   264,   192,   192,   191,   305,   306,   307,
     308,   309,   311,   325,   255,   269,   270,     3,   270,   271,
     271,   103,   131,   191,   106,   124,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   300,   270,   240,    40,   191,    24,    50,   214,   255,
     191,   192,   195,   260,   270,   270,   164,   123,   133,   161,
     162,   321,   128,   191,    95,    11,    25,    30,    31,    32,
      33,    34,    36,    44,    70,    88,    90,    91,   105,   110,
     112,   122,   156,   222,   123,   191,   192,   195,   241,   311,
       3,   266,    79,   282,   264,   192,    96,   128,   111,    94,
     120,   270,   270,   250,   190,   241,    26,    68,    73,    80,
      81,    97,   102,   326,   195,   128,   313,   314,   315,    71,
     256,   118,   271,   191,   250,   264,   106,   190,   230,   214,
       4,   211,   192,   195,   266,   204,    64,   329,   163,   222,
     329,   212,   191,   191,   224,   191,   191,   191,   223,    28,
      62,   106,   124,   225,   226,   227,   191,   329,   220,   192,
     191,   192,   270,   222,   270,   270,   120,   111,   192,   192,
     101,    80,    80,    80,   101,   306,     3,   129,   271,   250,
     264,   192,   192,     3,   192,    24,    50,   192,   321,   192,
     192,     6,     6,     6,     6,     6,   123,   106,   227,   329,
     192,   107,   283,   282,   192,   192,   120,   270,   314,   307,
     306,   191,   264,   192,   192,     4,   211,   192,   192,   195,
     192,   192,   192,   192,   129,   258,    84,   134,   329,    52,
     257,     6,   264,   165,   166,   167,   284,   285,   191,   270,
     327,   192,   270,   192,   192,     6,    17,   168,   171,   286,
     329,   169,   170,   286,   169,   170,   192,   118,   286
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   197,   198,   199,   199,   200,   200,   200,   200,   200,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     202,   202,   203,   203,   204,   204,   205,   205,   205,   206,
     206,   207,   208,   209,   209,   210,   210,   211,   212,   213,
     213,   213,   214,   214,   214,   214,   215,   215,   216,   216,
     216,   217,   217,   217,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   223,   223,   224,   224,   224,   225,   225,   226,   226,
     227,   227,   227,   227,   228,   228,   229,   229,   229,   229,
     230,   230,   231,   232,   233,   234,   235,   236,   236,   237,
     237,   238,   239,   239,   240,   241,   241,   242,   242,   243,
     243,   243,   243,   244,   244,   245,   246,   247,   248,   248,
     248,   249,   249,   250,   251,   251,   252,   253,   253,   254,
     255,   255,   256,   256,   257,   257,   258,   258,   259,   259,
     260,   261,   261,   261,   262,   262,   263,   263,   263,   263,
     263,   263,   264,   264,   265,   265,   266,   266,   267,   267,
     268,   268,   268,   269,   270,   270,   270,   270,   270,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     272,   272,   273,   273,   273,   273,   273,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   275,   275,
     276,   276,   276,   276,   277,   277,   277,   277,   278,   278,
     279,   279,   280,   280,   280,   280,   280,   280,   280,   281,
     281,   282,   282,   283,   283,   284,   284,   284,   285,   285,
     285,   286,   286,   286,   286,   286,   287,   288,   289,   289,
     289,   289,   289,   289,   290,   290,   290,   290,   290,   290,
     291,   291,   292,   293,   294,   295,   295,   295,   295,   296,
     296,   296,   296,   296,   296,   296,   297,   298,   298,   299,
     299,   300,   301,   302,   303,   303,   303,   304,   305,   305,
     306,   306,   307,   307,   308,   308,   309,   310,   311,   311,
     312,   312,   313,   313,   314,   314,   315,   315,   316,   316,
     317,   317,   318,   318,   319,   319,   320,   320,   320,   320,
     321,   321,   321,   322,   323,   323,   324,   325,   325,   325,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     327,   328,   328,   329,   329
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
       3,     3,     3,     3,     3,     1,     3,     2,     1,     1,
       1,     1,     0,     7,     1,     0,     1,     1,     0,     2,
       2,     0,     4,     0,     2,     0,     3,     0,     1,     3,
       2,     1,     1,     0,     2,     0,     2,     2,     4,     2,
       4,     0,     1,     3,     1,     0,     1,     3,     1,     6,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       5,     6,     5,     6,     4,     6,     3,     5,     4,     5,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     6,     0,     3,     0,     2,     5,     0,     1,     1,
       1,     2,     2,     2,     2,     1,     6,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     2,     1,     1,     3,
       1,     1,     1,     4,     1,     3,     2,     1,     1,     3,
       1,     0,     1,     5,     1,     0,     2,     1,     1,     0,
       1,     0,     1,     2,     3,     5,     1,     3,     1,     2,
       2,     1,     0,     2,     1,     3,     3,     4,     6,     8,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     0,
       1,     1,     0,     1,     3
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
#line 2082 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2088 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 175 "bison_parser.y"
            { }
#line 2094 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 175 "bison_parser.y"
            { }
#line 2100 "bison_parser.cpp"
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
#line 2113 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2119 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2125 "bison_parser.cpp"
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
#line 2138 "bison_parser.cpp"
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
#line 2151 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2157 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2163 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2169 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2175 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2181 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2187 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 175 "bison_parser.y"
            { }
#line 2193 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2199 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_import_export_options: /* opt_import_export_options  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2205 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_export_options: /* import_export_options  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2211 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2217 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2223 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2229 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 175 "bison_parser.y"
            { }
#line 2235 "bison_parser.cpp"
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
#line 2248 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2254 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2260 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 175 "bison_parser.y"
            { }
#line 2266 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 175 "bison_parser.y"
            { }
#line 2272 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2278 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 175 "bison_parser.y"
            { }
#line 2284 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 175 "bison_parser.y"
            { }
#line 2290 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 175 "bison_parser.y"
            { }
#line 2296 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2302 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2308 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 175 "bison_parser.y"
            { }
#line 2314 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2320 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2326 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2332 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2338 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2344 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2350 "bison_parser.cpp"
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
#line 2363 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2369 "bison_parser.cpp"
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
#line 2382 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2388 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2394 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_expression: /* query_expression  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2400 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_expression_body: /* query_expression_body  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2406 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_expression_parens: /* query_expression_parens  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2412 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_term: /* query_term  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2418 "bison_parser.cpp"
        break;

    case YYSYMBOL_subquery: /* subquery  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2424 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2430 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2436 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 175 "bison_parser.y"
            { }
#line 2442 "bison_parser.cpp"
        break;

    case YYSYMBOL_query_primary: /* query_primary  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2448 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 175 "bison_parser.y"
            { }
#line 2454 "bison_parser.cpp"
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
#line 2467 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2473 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2479 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2485 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2491 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2497 "bison_parser.cpp"
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
#line 2510 "bison_parser.cpp"
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
#line 2523 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2529 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 175 "bison_parser.y"
            { }
#line 2535 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2541 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2547 "bison_parser.cpp"
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
#line 2560 "bison_parser.cpp"
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
#line 2573 "bison_parser.cpp"
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
#line 2586 "bison_parser.cpp"
        break;

    case YYSYMBOL_casted_extended_literal: /* casted_extended_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2592 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal: /* extended_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2598 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2604 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2610 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2616 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2622 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2628 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2634 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2640 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2646 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2652 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2658 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2664 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2670 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2676 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2682 "bison_parser.cpp"
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
#line 2695 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2701 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 175 "bison_parser.y"
            { }
#line 2707 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2713 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2719 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2725 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 175 "bison_parser.y"
            { }
#line 2731 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 175 "bison_parser.y"
            { }
#line 2737 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 175 "bison_parser.y"
            { }
#line 2743 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2749 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2755 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2761 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2767 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2773 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2779 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2785 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2791 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2797 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2803 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2809 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2815 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2821 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2827 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2833 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2839 "bison_parser.cpp"
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
#line 2852 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2858 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2864 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 176 "bison_parser.y"
            {
  free( (((*yyvaluep).table_name).name) );
  free( (((*yyvaluep).table_name).schema) );
}
#line 2873 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 188 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2879 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2885 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2891 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2897 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2903 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2909 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2915 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 2921 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 175 "bison_parser.y"
            { }
#line 2927 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 175 "bison_parser.y"
            { }
#line 2933 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2939 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2945 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2951 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2957 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 175 "bison_parser.y"
            { }
#line 2963 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 197 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2969 "bison_parser.cpp"
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
#line 2982 "bison_parser.cpp"
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

#line 3090 "bison_parser.cpp"

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
#line 331 "bison_parser.y"
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
#line 3319 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 350 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3330 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 356 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3341 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 363 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3350 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 367 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3359 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 371 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3365 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 372 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3371 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 373 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3377 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 375 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3383 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 376 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3389 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 377 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3395 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 378 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3401 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 379 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3407 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 380 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3413 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 381 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3419 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 382 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3425 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 383 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3431 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 384 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3437 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 390 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3443 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 391 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3449 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 393 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3458 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 397 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3467 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 402 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3476 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' extended_literal_list ')'  */
#line 406 "bison_parser.y"
                                           {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3486 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 416 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3492 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 417 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3498 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 418 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3504 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 426 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3514 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 434 "bison_parser.y"
                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3523 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_extended_literal_list ')'  */
#line 438 "bison_parser.y"
                                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3533 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 450 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3544 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_import_export_options opt_where  */
#line 456 "bison_parser.y"
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
#line 3561 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 469 "bison_parser.y"
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
#line 3580 "bison_parser.cpp"
    break;

  case 38: /* file_path: STRING  */
#line 484 "bison_parser.y"
                   {
  (yyval.sval) = (yyvsp[0].sval);
}
#line 3588 "bison_parser.cpp"
    break;

  case 39: /* opt_import_export_options: WITH '(' import_export_options ')'  */
#line 488 "bison_parser.y"
                                                               { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3594 "bison_parser.cpp"
    break;

  case 40: /* opt_import_export_options: '(' import_export_options ')'  */
#line 489 "bison_parser.y"
                                { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3600 "bison_parser.cpp"
    break;

  case 41: /* opt_import_export_options: %empty  */
#line 490 "bison_parser.y"
              { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3606 "bison_parser.cpp"
    break;

  case 42: /* import_export_options: import_export_options ',' FORMAT file_type  */
#line 492 "bison_parser.y"
                                                                   {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3620 "bison_parser.cpp"
    break;

  case 43: /* import_export_options: FORMAT file_type  */
#line 501 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3629 "bison_parser.cpp"
    break;

  case 44: /* import_export_options: import_export_options ',' ENCODING STRING  */
#line 505 "bison_parser.y"
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
#line 3644 "bison_parser.cpp"
    break;

  case 45: /* import_export_options: ENCODING STRING  */
#line 515 "bison_parser.y"
                  {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3653 "bison_parser.cpp"
    break;

  case 46: /* export_statement: COPY table_name TO file_path opt_import_export_options  */
#line 525 "bison_parser.y"
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
#line 3669 "bison_parser.cpp"
    break;

  case 47: /* export_statement: COPY subquery TO file_path opt_import_export_options  */
#line 536 "bison_parser.y"
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
#line 3684 "bison_parser.cpp"
    break;

  case 48: /* show_statement: SHOW TABLES  */
#line 552 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3690 "bison_parser.cpp"
    break;

  case 49: /* show_statement: SHOW COLUMNS table_name  */
#line 553 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3700 "bison_parser.cpp"
    break;

  case 50: /* show_statement: DESCRIBE table_name  */
#line 558 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3710 "bison_parser.cpp"
    break;

  case 51: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 569 "bison_parser.y"
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
#line 3728 "bison_parser.cpp"
    break;

  case 52: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 582 "bison_parser.y"
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
#line 3745 "bison_parser.cpp"
    break;

  case 53: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 594 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3757 "bison_parser.cpp"
    break;

  case 54: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 601 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3769 "bison_parser.cpp"
    break;

  case 55: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 608 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3782 "bison_parser.cpp"
    break;

  case 56: /* opt_not_exists: IF NOT EXISTS  */
#line 617 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3788 "bison_parser.cpp"
    break;

  case 57: /* opt_not_exists: %empty  */
#line 618 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3794 "bison_parser.cpp"
    break;

  case 58: /* table_elem_commalist: table_elem  */
#line 620 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3803 "bison_parser.cpp"
    break;

  case 59: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 624 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3812 "bison_parser.cpp"
    break;

  case 60: /* table_elem: column_def  */
#line 629 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3818 "bison_parser.cpp"
    break;

  case 61: /* table_elem: table_constraint  */
#line 630 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3824 "bison_parser.cpp"
    break;

  case 62: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 632 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3835 "bison_parser.cpp"
    break;

  case 63: /* column_type: BIGINT  */
#line 639 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3841 "bison_parser.cpp"
    break;

  case 64: /* column_type: BOOLEAN  */
#line 640 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3847 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHAR '(' INTVAL ')'  */
#line 641 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3853 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 642 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3859 "bison_parser.cpp"
    break;

  case 67: /* column_type: DATE  */
#line 643 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3865 "bison_parser.cpp"
    break;

  case 68: /* column_type: DATETIME  */
#line 644 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3871 "bison_parser.cpp"
    break;

  case 69: /* column_type: DECIMAL opt_decimal_specification  */
#line 645 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3880 "bison_parser.cpp"
    break;

  case 70: /* column_type: DOUBLE  */
#line 649 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3886 "bison_parser.cpp"
    break;

  case 71: /* column_type: FLOAT  */
#line 650 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3892 "bison_parser.cpp"
    break;

  case 72: /* column_type: INT  */
#line 651 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3898 "bison_parser.cpp"
    break;

  case 73: /* column_type: INTEGER  */
#line 652 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3904 "bison_parser.cpp"
    break;

  case 74: /* column_type: LONG  */
#line 653 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3910 "bison_parser.cpp"
    break;

  case 75: /* column_type: REAL  */
#line 654 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3916 "bison_parser.cpp"
    break;

  case 76: /* column_type: SMALLINT  */
#line 655 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3922 "bison_parser.cpp"
    break;

  case 77: /* column_type: TEXT  */
#line 656 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3928 "bison_parser.cpp"
    break;

  case 78: /* column_type: TIME opt_time_precision  */
#line 657 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3934 "bison_parser.cpp"
    break;

  case 79: /* column_type: TIMESTAMP  */
#line 658 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3940 "bison_parser.cpp"
    break;

  case 80: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 659 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3946 "bison_parser.cpp"
    break;

  case 81: /* opt_time_precision: '(' INTVAL ')'  */
#line 661 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3952 "bison_parser.cpp"
    break;

  case 82: /* opt_time_precision: %empty  */
#line 662 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3958 "bison_parser.cpp"
    break;

  case 83: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 664 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3964 "bison_parser.cpp"
    break;

  case 84: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 665 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3970 "bison_parser.cpp"
    break;

  case 85: /* opt_decimal_specification: %empty  */
#line 666 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3976 "bison_parser.cpp"
    break;

  case 86: /* opt_column_constraints: column_constraint_set  */
#line 668 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 3982 "bison_parser.cpp"
    break;

  case 87: /* opt_column_constraints: %empty  */
#line 669 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 3988 "bison_parser.cpp"
    break;

  case 88: /* column_constraint_set: column_constraint  */
#line 671 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 3997 "bison_parser.cpp"
    break;

  case 89: /* column_constraint_set: column_constraint_set column_constraint  */
#line 675 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 4006 "bison_parser.cpp"
    break;

  case 90: /* column_constraint: PRIMARY KEY  */
#line 680 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4012 "bison_parser.cpp"
    break;

  case 91: /* column_constraint: UNIQUE  */
#line 681 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4018 "bison_parser.cpp"
    break;

  case 92: /* column_constraint: NULL  */
#line 682 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4024 "bison_parser.cpp"
    break;

  case 93: /* column_constraint: NOT NULL  */
#line 683 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4030 "bison_parser.cpp"
    break;

  case 94: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 685 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4036 "bison_parser.cpp"
    break;

  case 95: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 686 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4042 "bison_parser.cpp"
    break;

  case 96: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 694 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4053 "bison_parser.cpp"
    break;

  case 97: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 700 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4064 "bison_parser.cpp"
    break;

  case 98: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 706 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4074 "bison_parser.cpp"
    break;

  case 99: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 712 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4084 "bison_parser.cpp"
    break;

  case 100: /* opt_exists: IF EXISTS  */
#line 718 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4090 "bison_parser.cpp"
    break;

  case 101: /* opt_exists: %empty  */
#line 719 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4096 "bison_parser.cpp"
    break;

  case 102: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 726 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4106 "bison_parser.cpp"
    break;

  case 103: /* alter_action: drop_action  */
#line 732 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4112 "bison_parser.cpp"
    break;

  case 104: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 734 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4121 "bison_parser.cpp"
    break;

  case 105: /* delete_statement: DELETE FROM table_name opt_where  */
#line 744 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4132 "bison_parser.cpp"
    break;

  case 106: /* truncate_statement: TRUNCATE table_name  */
#line 751 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4142 "bison_parser.cpp"
    break;

  case 107: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' extended_literal_list ')'  */
#line 762 "bison_parser.y"
                                                                                               {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4154 "bison_parser.cpp"
    break;

  case 108: /* insert_statement: INSERT INTO table_name opt_column_list query_term  */
#line 769 "bison_parser.y"
                                                    {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4166 "bison_parser.cpp"
    break;

  case 109: /* opt_column_list: '(' ident_commalist ')'  */
#line 777 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4172 "bison_parser.cpp"
    break;

  case 110: /* opt_column_list: %empty  */
#line 778 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4178 "bison_parser.cpp"
    break;

  case 111: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 785 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4189 "bison_parser.cpp"
    break;

  case 112: /* update_clause_commalist: update_clause  */
#line 792 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4198 "bison_parser.cpp"
    break;

  case 113: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 796 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4207 "bison_parser.cpp"
    break;

  case 114: /* update_clause: IDENTIFIER '=' expr  */
#line 801 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4217 "bison_parser.cpp"
    break;

  case 117: /* query_expression: query_expression_body opt_order opt_limit opt_locking_clause  */
#line 812 "bison_parser.y"
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
#line 4242 "bison_parser.cpp"
    break;

  case 118: /* query_expression: with_clause query_expression_body opt_order opt_limit opt_locking_clause  */
#line 832 "bison_parser.y"
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
#line 4268 "bison_parser.cpp"
    break;

  case 120: /* query_expression_body: query_expression_body set_operator query_term  */
#line 860 "bison_parser.y"
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
#line 4284 "bison_parser.cpp"
    break;

  case 121: /* query_expression_body: query_expression_parens set_operator query_term  */
#line 871 "bison_parser.y"
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
#line 4300 "bison_parser.cpp"
    break;

  case 122: /* query_expression_body: query_expression_body set_operator query_expression_parens  */
#line 882 "bison_parser.y"
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
#line 4316 "bison_parser.cpp"
    break;

  case 123: /* query_expression_parens: '(' query_expression_parens ')'  */
#line 894 "bison_parser.y"
                                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4322 "bison_parser.cpp"
    break;

  case 124: /* query_expression_parens: '(' query_expression ')'  */
#line 895 "bison_parser.y"
                           { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4328 "bison_parser.cpp"
    break;

  case 126: /* subquery: '(' query_expression ')'  */
#line 899 "bison_parser.y"
                                    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4334 "bison_parser.cpp"
    break;

  case 127: /* set_operator: set_type opt_all  */
#line 901 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4343 "bison_parser.cpp"
    break;

  case 128: /* set_type: UNION  */
#line 906 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4352 "bison_parser.cpp"
    break;

  case 129: /* set_type: INTERSECT  */
#line 910 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4361 "bison_parser.cpp"
    break;

  case 130: /* set_type: EXCEPT  */
#line 914 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4370 "bison_parser.cpp"
    break;

  case 131: /* opt_all: ALL  */
#line 919 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4376 "bison_parser.cpp"
    break;

  case 132: /* opt_all: %empty  */
#line 920 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4382 "bison_parser.cpp"
    break;

  case 133: /* query_primary: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 922 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4396 "bison_parser.cpp"
    break;

  case 134: /* opt_distinct: DISTINCT  */
#line 932 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4402 "bison_parser.cpp"
    break;

  case 135: /* opt_distinct: %empty  */
#line 933 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4408 "bison_parser.cpp"
    break;

  case 137: /* opt_from_clause: from_clause  */
#line 937 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4414 "bison_parser.cpp"
    break;

  case 138: /* opt_from_clause: %empty  */
#line 938 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4420 "bison_parser.cpp"
    break;

  case 139: /* from_clause: FROM table_ref  */
#line 940 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4426 "bison_parser.cpp"
    break;

  case 140: /* opt_where: WHERE expr  */
#line 942 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4432 "bison_parser.cpp"
    break;

  case 141: /* opt_where: %empty  */
#line 943 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4438 "bison_parser.cpp"
    break;

  case 142: /* opt_group: GROUP BY expr_list opt_having  */
#line 945 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4448 "bison_parser.cpp"
    break;

  case 143: /* opt_group: %empty  */
#line 950 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4454 "bison_parser.cpp"
    break;

  case 144: /* opt_having: HAVING expr  */
#line 952 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4460 "bison_parser.cpp"
    break;

  case 145: /* opt_having: %empty  */
#line 953 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4466 "bison_parser.cpp"
    break;

  case 146: /* opt_order: ORDER BY order_list  */
#line 955 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4472 "bison_parser.cpp"
    break;

  case 147: /* opt_order: %empty  */
#line 956 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4478 "bison_parser.cpp"
    break;

  case 148: /* order_list: order_desc  */
#line 958 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4487 "bison_parser.cpp"
    break;

  case 149: /* order_list: order_list ',' order_desc  */
#line 962 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4496 "bison_parser.cpp"
    break;

  case 150: /* order_desc: expr opt_order_type  */
#line 967 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4502 "bison_parser.cpp"
    break;

  case 151: /* opt_order_type: ASC  */
#line 969 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4508 "bison_parser.cpp"
    break;

  case 152: /* opt_order_type: DESC  */
#line 970 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4514 "bison_parser.cpp"
    break;

  case 153: /* opt_order_type: %empty  */
#line 971 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4520 "bison_parser.cpp"
    break;

  case 154: /* opt_top: TOP int_literal  */
#line 975 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4526 "bison_parser.cpp"
    break;

  case 155: /* opt_top: %empty  */
#line 976 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4532 "bison_parser.cpp"
    break;

  case 156: /* opt_limit: LIMIT expr  */
#line 978 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4538 "bison_parser.cpp"
    break;

  case 157: /* opt_limit: OFFSET expr  */
#line 979 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4544 "bison_parser.cpp"
    break;

  case 158: /* opt_limit: LIMIT expr OFFSET expr  */
#line 980 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4550 "bison_parser.cpp"
    break;

  case 159: /* opt_limit: LIMIT ALL  */
#line 981 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4556 "bison_parser.cpp"
    break;

  case 160: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 982 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4562 "bison_parser.cpp"
    break;

  case 161: /* opt_limit: %empty  */
#line 983 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4568 "bison_parser.cpp"
    break;

  case 162: /* expr_list: expr_alias  */
#line 988 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4577 "bison_parser.cpp"
    break;

  case 163: /* expr_list: expr_list ',' expr_alias  */
#line 992 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4586 "bison_parser.cpp"
    break;

  case 164: /* opt_extended_literal_list: extended_literal_list  */
#line 998 "bison_parser.y"
                                                  { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4592 "bison_parser.cpp"
    break;

  case 165: /* opt_extended_literal_list: %empty  */
#line 999 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4598 "bison_parser.cpp"
    break;

  case 166: /* extended_literal_list: casted_extended_literal  */
#line 1001 "bison_parser.y"
                                                {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4607 "bison_parser.cpp"
    break;

  case 167: /* extended_literal_list: extended_literal_list ',' casted_extended_literal  */
#line 1005 "bison_parser.y"
                                                    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4616 "bison_parser.cpp"
    break;

  case 169: /* casted_extended_literal: CAST '(' extended_literal AS column_type ')'  */
#line 1010 "bison_parser.y"
                                                                                          {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4624 "bison_parser.cpp"
    break;

  case 170: /* extended_literal: literal  */
#line 1014 "bison_parser.y"
                           {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4637 "bison_parser.cpp"
    break;

  case 171: /* extended_literal: '-' num_literal  */
#line 1022 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4643 "bison_parser.cpp"
    break;

  case 172: /* extended_literal: '-' interval_literal  */
#line 1023 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4649 "bison_parser.cpp"
    break;

  case 173: /* expr_alias: expr opt_alias  */
#line 1025 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4662 "bison_parser.cpp"
    break;

  case 179: /* operand: '(' expr ')'  */
#line 1036 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4668 "bison_parser.cpp"
    break;

  case 189: /* operand: '(' query_primary ')'  */
#line 1038 "bison_parser.y"
                                       {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4676 "bison_parser.cpp"
    break;

  case 192: /* unary_expr: '-' operand  */
#line 1044 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4682 "bison_parser.cpp"
    break;

  case 193: /* unary_expr: NOT operand  */
#line 1045 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4688 "bison_parser.cpp"
    break;

  case 194: /* unary_expr: operand ISNULL  */
#line 1046 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4694 "bison_parser.cpp"
    break;

  case 195: /* unary_expr: operand IS NULL  */
#line 1047 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4700 "bison_parser.cpp"
    break;

  case 196: /* unary_expr: operand IS NOT NULL  */
#line 1048 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4706 "bison_parser.cpp"
    break;

  case 198: /* binary_expr: operand '-' operand  */
#line 1050 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4712 "bison_parser.cpp"
    break;

  case 199: /* binary_expr: operand '+' operand  */
#line 1051 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4718 "bison_parser.cpp"
    break;

  case 200: /* binary_expr: operand '/' operand  */
#line 1052 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4724 "bison_parser.cpp"
    break;

  case 201: /* binary_expr: operand '*' operand  */
#line 1053 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4730 "bison_parser.cpp"
    break;

  case 202: /* binary_expr: operand '%' operand  */
#line 1054 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4736 "bison_parser.cpp"
    break;

  case 203: /* binary_expr: operand '^' operand  */
#line 1055 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4742 "bison_parser.cpp"
    break;

  case 204: /* binary_expr: operand LIKE operand  */
#line 1056 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4748 "bison_parser.cpp"
    break;

  case 205: /* binary_expr: operand NOT LIKE operand  */
#line 1057 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4754 "bison_parser.cpp"
    break;

  case 206: /* binary_expr: operand ILIKE operand  */
#line 1058 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4760 "bison_parser.cpp"
    break;

  case 207: /* binary_expr: operand CONCAT operand  */
#line 1059 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4766 "bison_parser.cpp"
    break;

  case 208: /* logic_expr: expr AND expr  */
#line 1061 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4772 "bison_parser.cpp"
    break;

  case 209: /* logic_expr: expr OR expr  */
#line 1062 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4778 "bison_parser.cpp"
    break;

  case 210: /* in_expr: operand IN '(' expr_list ')'  */
#line 1064 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4784 "bison_parser.cpp"
    break;

  case 211: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1065 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4790 "bison_parser.cpp"
    break;

  case 212: /* in_expr: operand IN '(' query_primary ')'  */
#line 1066 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4796 "bison_parser.cpp"
    break;

  case 213: /* in_expr: operand NOT IN '(' query_primary ')'  */
#line 1067 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4802 "bison_parser.cpp"
    break;

  case 214: /* case_expr: CASE expr case_list END  */
#line 1071 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4808 "bison_parser.cpp"
    break;

  case 215: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1072 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4814 "bison_parser.cpp"
    break;

  case 216: /* case_expr: CASE case_list END  */
#line 1073 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4820 "bison_parser.cpp"
    break;

  case 217: /* case_expr: CASE case_list ELSE expr END  */
#line 1074 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4826 "bison_parser.cpp"
    break;

  case 218: /* case_list: WHEN expr THEN expr  */
#line 1076 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4832 "bison_parser.cpp"
    break;

  case 219: /* case_list: case_list WHEN expr THEN expr  */
#line 1077 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4838 "bison_parser.cpp"
    break;

  case 220: /* exists_expr: EXISTS '(' query_primary ')'  */
#line 1079 "bison_parser.y"
                                           { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4844 "bison_parser.cpp"
    break;

  case 221: /* exists_expr: NOT EXISTS '(' query_primary ')'  */
#line 1080 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4850 "bison_parser.cpp"
    break;

  case 222: /* comp_expr: operand '=' operand  */
#line 1082 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4856 "bison_parser.cpp"
    break;

  case 223: /* comp_expr: operand EQUALS operand  */
#line 1083 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4862 "bison_parser.cpp"
    break;

  case 224: /* comp_expr: operand NOTEQUALS operand  */
#line 1084 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4868 "bison_parser.cpp"
    break;

  case 225: /* comp_expr: operand '<' operand  */
#line 1085 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4874 "bison_parser.cpp"
    break;

  case 226: /* comp_expr: operand '>' operand  */
#line 1086 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4880 "bison_parser.cpp"
    break;

  case 227: /* comp_expr: operand LESSEQ operand  */
#line 1087 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4886 "bison_parser.cpp"
    break;

  case 228: /* comp_expr: operand GREATEREQ operand  */
#line 1088 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4892 "bison_parser.cpp"
    break;

  case 229: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1092 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 4898 "bison_parser.cpp"
    break;

  case 230: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1093 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 4904 "bison_parser.cpp"
    break;

  case 231: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1097 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4910 "bison_parser.cpp"
    break;

  case 232: /* opt_window: %empty  */
#line 1098 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 4916 "bison_parser.cpp"
    break;

  case 233: /* opt_partition: PARTITION BY expr_list  */
#line 1100 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4922 "bison_parser.cpp"
    break;

  case 234: /* opt_partition: %empty  */
#line 1101 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4928 "bison_parser.cpp"
    break;

  case 235: /* opt_frame_clause: frame_type frame_bound  */
#line 1106 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 4934 "bison_parser.cpp"
    break;

  case 236: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1107 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 4940 "bison_parser.cpp"
    break;

  case 237: /* opt_frame_clause: %empty  */
#line 1108 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 4948 "bison_parser.cpp"
    break;

  case 238: /* frame_type: RANGE  */
#line 1112 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 4954 "bison_parser.cpp"
    break;

  case 239: /* frame_type: ROWS  */
#line 1113 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 4960 "bison_parser.cpp"
    break;

  case 240: /* frame_type: GROUPS  */
#line 1114 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 4966 "bison_parser.cpp"
    break;

  case 241: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1116 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 4972 "bison_parser.cpp"
    break;

  case 242: /* frame_bound: INTVAL PRECEDING  */
#line 1117 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 4978 "bison_parser.cpp"
    break;

  case 243: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1118 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 4984 "bison_parser.cpp"
    break;

  case 244: /* frame_bound: INTVAL FOLLOWING  */
#line 1119 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 4990 "bison_parser.cpp"
    break;

  case 245: /* frame_bound: CURRENT_ROW  */
#line 1120 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 4996 "bison_parser.cpp"
    break;

  case 246: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1122 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5002 "bison_parser.cpp"
    break;

  case 247: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1124 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5008 "bison_parser.cpp"
    break;

  case 248: /* datetime_field: SECOND  */
#line 1126 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5014 "bison_parser.cpp"
    break;

  case 249: /* datetime_field: MINUTE  */
#line 1127 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5020 "bison_parser.cpp"
    break;

  case 250: /* datetime_field: HOUR  */
#line 1128 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5026 "bison_parser.cpp"
    break;

  case 251: /* datetime_field: DAY  */
#line 1129 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5032 "bison_parser.cpp"
    break;

  case 252: /* datetime_field: MONTH  */
#line 1130 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5038 "bison_parser.cpp"
    break;

  case 253: /* datetime_field: YEAR  */
#line 1131 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5044 "bison_parser.cpp"
    break;

  case 254: /* datetime_field_plural: SECONDS  */
#line 1133 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5050 "bison_parser.cpp"
    break;

  case 255: /* datetime_field_plural: MINUTES  */
#line 1134 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5056 "bison_parser.cpp"
    break;

  case 256: /* datetime_field_plural: HOURS  */
#line 1135 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5062 "bison_parser.cpp"
    break;

  case 257: /* datetime_field_plural: DAYS  */
#line 1136 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5068 "bison_parser.cpp"
    break;

  case 258: /* datetime_field_plural: MONTHS  */
#line 1137 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5074 "bison_parser.cpp"
    break;

  case 259: /* datetime_field_plural: YEARS  */
#line 1138 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5080 "bison_parser.cpp"
    break;

  case 262: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1142 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5086 "bison_parser.cpp"
    break;

  case 263: /* array_index: operand '[' int_literal ']'  */
#line 1144 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5092 "bison_parser.cpp"
    break;

  case 264: /* between_expr: operand BETWEEN operand AND operand  */
#line 1146 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5098 "bison_parser.cpp"
    break;

  case 265: /* column_name: IDENTIFIER  */
#line 1148 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5104 "bison_parser.cpp"
    break;

  case 266: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1149 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5110 "bison_parser.cpp"
    break;

  case 267: /* column_name: '*'  */
#line 1150 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5116 "bison_parser.cpp"
    break;

  case 268: /* column_name: IDENTIFIER '.' '*'  */
#line 1151 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5122 "bison_parser.cpp"
    break;

  case 276: /* string_literal: STRING  */
#line 1155 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5128 "bison_parser.cpp"
    break;

  case 277: /* bool_literal: TRUE  */
#line 1157 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5134 "bison_parser.cpp"
    break;

  case 278: /* bool_literal: FALSE  */
#line 1158 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5140 "bison_parser.cpp"
    break;

  case 279: /* num_literal: FLOATVAL  */
#line 1160 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5146 "bison_parser.cpp"
    break;

  case 281: /* int_literal: INTVAL  */
#line 1163 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5152 "bison_parser.cpp"
    break;

  case 282: /* null_literal: NULL  */
#line 1165 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5158 "bison_parser.cpp"
    break;

  case 283: /* date_literal: DATE STRING  */
#line 1167 "bison_parser.y"
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
#line 5173 "bison_parser.cpp"
    break;

  case 284: /* interval_literal: INTVAL duration_field  */
#line 1178 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5179 "bison_parser.cpp"
    break;

  case 285: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1179 "bison_parser.y"
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
#line 5195 "bison_parser.cpp"
    break;

  case 286: /* interval_literal: INTERVAL STRING  */
#line 1190 "bison_parser.y"
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
#line 5231 "bison_parser.cpp"
    break;

  case 287: /* param_expr: '?'  */
#line 1222 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5241 "bison_parser.cpp"
    break;

  case 289: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1231 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5252 "bison_parser.cpp"
    break;

  case 293: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1240 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5263 "bison_parser.cpp"
    break;

  case 294: /* table_ref_commalist: table_ref_atomic  */
#line 1247 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5272 "bison_parser.cpp"
    break;

  case 295: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1251 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5281 "bison_parser.cpp"
    break;

  case 296: /* table_ref_name: table_name opt_table_alias  */
#line 1256 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5293 "bison_parser.cpp"
    break;

  case 297: /* table_ref_name_no_alias: table_name  */
#line 1264 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5303 "bison_parser.cpp"
    break;

  case 298: /* table_name: IDENTIFIER  */
#line 1270 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5312 "bison_parser.cpp"
    break;

  case 299: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1274 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5321 "bison_parser.cpp"
    break;

  case 300: /* opt_index_name: IDENTIFIER  */
#line 1279 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5327 "bison_parser.cpp"
    break;

  case 301: /* opt_index_name: %empty  */
#line 1280 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5333 "bison_parser.cpp"
    break;

  case 303: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1282 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5339 "bison_parser.cpp"
    break;

  case 305: /* opt_table_alias: %empty  */
#line 1284 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5345 "bison_parser.cpp"
    break;

  case 306: /* alias: AS IDENTIFIER  */
#line 1286 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5351 "bison_parser.cpp"
    break;

  case 307: /* alias: IDENTIFIER  */
#line 1287 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5357 "bison_parser.cpp"
    break;

  case 309: /* opt_alias: %empty  */
#line 1289 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5363 "bison_parser.cpp"
    break;

  case 310: /* opt_locking_clause: opt_locking_clause_list  */
#line 1295 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5369 "bison_parser.cpp"
    break;

  case 311: /* opt_locking_clause: %empty  */
#line 1296 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5375 "bison_parser.cpp"
    break;

  case 312: /* opt_locking_clause_list: locking_clause  */
#line 1298 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5384 "bison_parser.cpp"
    break;

  case 313: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1302 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5393 "bison_parser.cpp"
    break;

  case 314: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1307 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5404 "bison_parser.cpp"
    break;

  case 315: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1313 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5415 "bison_parser.cpp"
    break;

  case 316: /* row_lock_mode: UPDATE  */
#line 1320 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5421 "bison_parser.cpp"
    break;

  case 317: /* row_lock_mode: NO KEY UPDATE  */
#line 1321 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5427 "bison_parser.cpp"
    break;

  case 318: /* row_lock_mode: SHARE  */
#line 1322 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5433 "bison_parser.cpp"
    break;

  case 319: /* row_lock_mode: KEY SHARE  */
#line 1323 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5439 "bison_parser.cpp"
    break;

  case 320: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1325 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5445 "bison_parser.cpp"
    break;

  case 321: /* opt_row_lock_policy: NOWAIT  */
#line 1326 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5451 "bison_parser.cpp"
    break;

  case 322: /* opt_row_lock_policy: %empty  */
#line 1327 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5457 "bison_parser.cpp"
    break;

  case 323: /* with_clause: WITH with_description_list  */
#line 1333 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5463 "bison_parser.cpp"
    break;

  case 324: /* with_description_list: with_description  */
#line 1335 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5472 "bison_parser.cpp"
    break;

  case 325: /* with_description_list: with_description_list ',' with_description  */
#line 1339 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5481 "bison_parser.cpp"
    break;

  case 326: /* with_description: IDENTIFIER AS subquery  */
#line 1344 "bison_parser.y"
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
#line 5497 "bison_parser.cpp"
    break;

  case 327: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1360 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5509 "bison_parser.cpp"
    break;

  case 328: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1367 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5522 "bison_parser.cpp"
    break;

  case 329: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1375 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5535 "bison_parser.cpp"
    break;

  case 330: /* opt_join_type: INNER  */
#line 1384 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5541 "bison_parser.cpp"
    break;

  case 331: /* opt_join_type: LEFT OUTER  */
#line 1385 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5547 "bison_parser.cpp"
    break;

  case 332: /* opt_join_type: LEFT  */
#line 1386 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5553 "bison_parser.cpp"
    break;

  case 333: /* opt_join_type: RIGHT OUTER  */
#line 1387 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5559 "bison_parser.cpp"
    break;

  case 334: /* opt_join_type: RIGHT  */
#line 1388 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5565 "bison_parser.cpp"
    break;

  case 335: /* opt_join_type: FULL OUTER  */
#line 1389 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5571 "bison_parser.cpp"
    break;

  case 336: /* opt_join_type: OUTER  */
#line 1390 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5577 "bison_parser.cpp"
    break;

  case 337: /* opt_join_type: FULL  */
#line 1391 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5583 "bison_parser.cpp"
    break;

  case 338: /* opt_join_type: CROSS  */
#line 1392 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5589 "bison_parser.cpp"
    break;

  case 339: /* opt_join_type: %empty  */
#line 1393 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5595 "bison_parser.cpp"
    break;

  case 343: /* ident_commalist: IDENTIFIER  */
#line 1404 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5604 "bison_parser.cpp"
    break;

  case 344: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1408 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5613 "bison_parser.cpp"
    break;


#line 5617 "bison_parser.cpp"

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

#line 1414 "bison_parser.y"


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

// clang-format on
