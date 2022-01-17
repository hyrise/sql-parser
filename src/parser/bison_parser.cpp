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

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char* msg) {
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
  YYSYMBOL_SPATIAL = 33,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 34,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 35,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 36,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 37,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 38,                    /* COLUMN  */
  YYSYMBOL_CREATE = 39,                    /* CREATE  */
  YYSYMBOL_DELETE = 40,                    /* DELETE  */
  YYSYMBOL_DIRECT = 41,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 42,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 43,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 44,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 45,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 46,                   /* EXTRACT  */
  YYSYMBOL_CAST = 47,                      /* CAST  */
  YYSYMBOL_FORMAT = 48,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 49,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 50,                    /* HAVING  */
  YYSYMBOL_IMPORT = 51,                    /* IMPORT  */
  YYSYMBOL_INSERT = 52,                    /* INSERT  */
  YYSYMBOL_ISNULL = 53,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 54,                    /* OFFSET  */
  YYSYMBOL_RENAME = 55,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 56,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 57,                    /* SELECT  */
  YYSYMBOL_SORTED = 58,                    /* SORTED  */
  YYSYMBOL_TABLES = 59,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 60,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 61,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 62,                    /* UPDATE  */
  YYSYMBOL_VALUES = 63,                    /* VALUES  */
  YYSYMBOL_AFTER = 64,                     /* AFTER  */
  YYSYMBOL_ALTER = 65,                     /* ALTER  */
  YYSYMBOL_CROSS = 66,                     /* CROSS  */
  YYSYMBOL_DELTA = 67,                     /* DELTA  */
  YYSYMBOL_FLOAT = 68,                     /* FLOAT  */
  YYSYMBOL_GROUP = 69,                     /* GROUP  */
  YYSYMBOL_INDEX = 70,                     /* INDEX  */
  YYSYMBOL_INNER = 71,                     /* INNER  */
  YYSYMBOL_LIMIT = 72,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 73,                     /* LOCAL  */
  YYSYMBOL_MERGE = 74,                     /* MERGE  */
  YYSYMBOL_MINUS = 75,                     /* MINUS  */
  YYSYMBOL_ORDER = 76,                     /* ORDER  */
  YYSYMBOL_OUTER = 77,                     /* OUTER  */
  YYSYMBOL_RIGHT = 78,                     /* RIGHT  */
  YYSYMBOL_TABLE = 79,                     /* TABLE  */
  YYSYMBOL_UNION = 80,                     /* UNION  */
  YYSYMBOL_USING = 81,                     /* USING  */
  YYSYMBOL_WHERE = 82,                     /* WHERE  */
  YYSYMBOL_CALL = 83,                      /* CALL  */
  YYSYMBOL_CASE = 84,                      /* CASE  */
  YYSYMBOL_CHAR = 85,                      /* CHAR  */
  YYSYMBOL_COPY = 86,                      /* COPY  */
  YYSYMBOL_DATE = 87,                      /* DATE  */
  YYSYMBOL_DATETIME = 88,                  /* DATETIME  */
  YYSYMBOL_DESC = 89,                      /* DESC  */
  YYSYMBOL_DROP = 90,                      /* DROP  */
  YYSYMBOL_ELSE = 91,                      /* ELSE  */
  YYSYMBOL_FILE = 92,                      /* FILE  */
  YYSYMBOL_FROM = 93,                      /* FROM  */
  YYSYMBOL_FULL = 94,                      /* FULL  */
  YYSYMBOL_HASH = 95,                      /* HASH  */
  YYSYMBOL_HINT = 96,                      /* HINT  */
  YYSYMBOL_INTO = 97,                      /* INTO  */
  YYSYMBOL_JOIN = 98,                      /* JOIN  */
  YYSYMBOL_LEFT = 99,                      /* LEFT  */
  YYSYMBOL_LIKE = 100,                     /* LIKE  */
  YYSYMBOL_LOAD = 101,                     /* LOAD  */
  YYSYMBOL_LONG = 102,                     /* LONG  */
  YYSYMBOL_NULL = 103,                     /* NULL  */
  YYSYMBOL_PLAN = 104,                     /* PLAN  */
  YYSYMBOL_SHOW = 105,                     /* SHOW  */
  YYSYMBOL_TEXT = 106,                     /* TEXT  */
  YYSYMBOL_THEN = 107,                     /* THEN  */
  YYSYMBOL_TIME = 108,                     /* TIME  */
  YYSYMBOL_VIEW = 109,                     /* VIEW  */
  YYSYMBOL_WHEN = 110,                     /* WHEN  */
  YYSYMBOL_WITH = 111,                     /* WITH  */
  YYSYMBOL_ADD = 112,                      /* ADD  */
  YYSYMBOL_ALL = 113,                      /* ALL  */
  YYSYMBOL_AND = 114,                      /* AND  */
  YYSYMBOL_ASC = 115,                      /* ASC  */
  YYSYMBOL_END = 116,                      /* END  */
  YYSYMBOL_FOR = 117,                      /* FOR  */
  YYSYMBOL_INT = 118,                      /* INT  */
  YYSYMBOL_KEY = 119,                      /* KEY  */
  YYSYMBOL_NOT = 120,                      /* NOT  */
  YYSYMBOL_OFF = 121,                      /* OFF  */
  YYSYMBOL_SET = 122,                      /* SET  */
  YYSYMBOL_TOP = 123,                      /* TOP  */
  YYSYMBOL_AS = 124,                       /* AS  */
  YYSYMBOL_BY = 125,                       /* BY  */
  YYSYMBOL_IF = 126,                       /* IF  */
  YYSYMBOL_IN = 127,                       /* IN  */
  YYSYMBOL_IS = 128,                       /* IS  */
  YYSYMBOL_OF = 129,                       /* OF  */
  YYSYMBOL_ON = 130,                       /* ON  */
  YYSYMBOL_OR = 131,                       /* OR  */
  YYSYMBOL_TO = 132,                       /* TO  */
  YYSYMBOL_ARRAY = 133,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 134,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 135,                    /* ILIKE  */
  YYSYMBOL_SECOND = 136,                   /* SECOND  */
  YYSYMBOL_MINUTE = 137,                   /* MINUTE  */
  YYSYMBOL_HOUR = 138,                     /* HOUR  */
  YYSYMBOL_DAY = 139,                      /* DAY  */
  YYSYMBOL_MONTH = 140,                    /* MONTH  */
  YYSYMBOL_YEAR = 141,                     /* YEAR  */
  YYSYMBOL_SECONDS = 142,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 143,                  /* MINUTES  */
  YYSYMBOL_HOURS = 144,                    /* HOURS  */
  YYSYMBOL_DAYS = 145,                     /* DAYS  */
  YYSYMBOL_MONTHS = 146,                   /* MONTHS  */
  YYSYMBOL_YEARS = 147,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 148,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 149,                     /* TRUE  */
  YYSYMBOL_FALSE = 150,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 151,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 152,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 153,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 154,                 /* ROLLBACK  */
  YYSYMBOL_155_ = 155,                     /* '='  */
  YYSYMBOL_EQUALS = 156,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 157,                /* NOTEQUALS  */
  YYSYMBOL_158_ = 158,                     /* '<'  */
  YYSYMBOL_159_ = 159,                     /* '>'  */
  YYSYMBOL_LESS = 160,                     /* LESS  */
  YYSYMBOL_GREATER = 161,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 162,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 163,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 164,                  /* NOTNULL  */
  YYSYMBOL_165_ = 165,                     /* '+'  */
  YYSYMBOL_166_ = 166,                     /* '-'  */
  YYSYMBOL_167_ = 167,                     /* '*'  */
  YYSYMBOL_168_ = 168,                     /* '/'  */
  YYSYMBOL_169_ = 169,                     /* '%'  */
  YYSYMBOL_170_ = 170,                     /* '^'  */
  YYSYMBOL_UMINUS = 171,                   /* UMINUS  */
  YYSYMBOL_172_ = 172,                     /* '['  */
  YYSYMBOL_173_ = 173,                     /* ']'  */
  YYSYMBOL_174_ = 174,                     /* '('  */
  YYSYMBOL_175_ = 175,                     /* ')'  */
  YYSYMBOL_176_ = 176,                     /* '.'  */
  YYSYMBOL_177_ = 177,                     /* ';'  */
  YYSYMBOL_178_ = 178,                     /* ','  */
  YYSYMBOL_179_ = 179,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 180,                 /* $accept  */
  YYSYMBOL_input = 181,                    /* input  */
  YYSYMBOL_statement_list = 182,           /* statement_list  */
  YYSYMBOL_statement = 183,                /* statement  */
  YYSYMBOL_preparable_statement = 184,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 185,                /* opt_hints  */
  YYSYMBOL_hint_list = 186,                /* hint_list  */
  YYSYMBOL_hint = 187,                     /* hint  */
  YYSYMBOL_transaction_statement = 188,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 189,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 190,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 191,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 192,        /* execute_statement  */
  YYSYMBOL_import_statement = 193,         /* import_statement  */
  YYSYMBOL_file_type = 194,                /* file_type  */
  YYSYMBOL_file_path = 195,                /* file_path  */
  YYSYMBOL_opt_file_type = 196,            /* opt_file_type  */
  YYSYMBOL_export_statement = 197,         /* export_statement  */
  YYSYMBOL_show_statement = 198,           /* show_statement  */
  YYSYMBOL_create_statement = 199,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 200,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 201,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 202,               /* table_elem  */
  YYSYMBOL_column_def = 203,               /* column_def  */
  YYSYMBOL_column_type = 204,              /* column_type  */
  YYSYMBOL_opt_time_precision = 205,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 206, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 207,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_list = 208,   /* column_constraint_list  */
  YYSYMBOL_column_constraint = 209,        /* column_constraint  */
  YYSYMBOL_table_constraint = 210,         /* table_constraint  */
  YYSYMBOL_drop_statement = 211,           /* drop_statement  */
  YYSYMBOL_opt_exists = 212,               /* opt_exists  */
  YYSYMBOL_alter_statement = 213,          /* alter_statement  */
  YYSYMBOL_alter_action = 214,             /* alter_action  */
  YYSYMBOL_drop_action = 215,              /* drop_action  */
  YYSYMBOL_delete_statement = 216,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 217,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 218,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 219,          /* opt_column_list  */
  YYSYMBOL_update_statement = 220,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 221,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 222,            /* update_clause  */
  YYSYMBOL_select_statement = 223,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 224, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 225, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 226,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 227,          /* select_no_paren  */
  YYSYMBOL_set_operator = 228,             /* set_operator  */
  YYSYMBOL_set_type = 229,                 /* set_type  */
  YYSYMBOL_opt_all = 230,                  /* opt_all  */
  YYSYMBOL_select_clause = 231,            /* select_clause  */
  YYSYMBOL_opt_distinct = 232,             /* opt_distinct  */
  YYSYMBOL_select_list = 233,              /* select_list  */
  YYSYMBOL_opt_from_clause = 234,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 235,              /* from_clause  */
  YYSYMBOL_opt_where = 236,                /* opt_where  */
  YYSYMBOL_opt_group = 237,                /* opt_group  */
  YYSYMBOL_opt_having = 238,               /* opt_having  */
  YYSYMBOL_opt_order = 239,                /* opt_order  */
  YYSYMBOL_order_list = 240,               /* order_list  */
  YYSYMBOL_order_desc = 241,               /* order_desc  */
  YYSYMBOL_opt_order_type = 242,           /* opt_order_type  */
  YYSYMBOL_opt_top = 243,                  /* opt_top  */
  YYSYMBOL_opt_limit = 244,                /* opt_limit  */
  YYSYMBOL_expr_list = 245,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 246,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 247,             /* literal_list  */
  YYSYMBOL_expr_alias = 248,               /* expr_alias  */
  YYSYMBOL_expr = 249,                     /* expr  */
  YYSYMBOL_operand = 250,                  /* operand  */
  YYSYMBOL_scalar_expr = 251,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 252,               /* unary_expr  */
  YYSYMBOL_binary_expr = 253,              /* binary_expr  */
  YYSYMBOL_logic_expr = 254,               /* logic_expr  */
  YYSYMBOL_in_expr = 255,                  /* in_expr  */
  YYSYMBOL_case_expr = 256,                /* case_expr  */
  YYSYMBOL_case_list = 257,                /* case_list  */
  YYSYMBOL_exists_expr = 258,              /* exists_expr  */
  YYSYMBOL_comp_expr = 259,                /* comp_expr  */
  YYSYMBOL_function_expr = 260,            /* function_expr  */
  YYSYMBOL_extract_expr = 261,             /* extract_expr  */
  YYSYMBOL_cast_expr = 262,                /* cast_expr  */
  YYSYMBOL_datetime_field = 263,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 264,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 265,           /* duration_field  */
  YYSYMBOL_array_expr = 266,               /* array_expr  */
  YYSYMBOL_array_index = 267,              /* array_index  */
  YYSYMBOL_between_expr = 268,             /* between_expr  */
  YYSYMBOL_column_name = 269,              /* column_name  */
  YYSYMBOL_literal = 270,                  /* literal  */
  YYSYMBOL_string_literal = 271,           /* string_literal  */
  YYSYMBOL_bool_literal = 272,             /* bool_literal  */
  YYSYMBOL_num_literal = 273,              /* num_literal  */
  YYSYMBOL_int_literal = 274,              /* int_literal  */
  YYSYMBOL_null_literal = 275,             /* null_literal  */
  YYSYMBOL_date_literal = 276,             /* date_literal  */
  YYSYMBOL_interval_literal = 277,         /* interval_literal  */
  YYSYMBOL_param_expr = 278,               /* param_expr  */
  YYSYMBOL_table_ref = 279,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 280,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 281, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 282,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 283,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 284,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 285,               /* table_name  */
  YYSYMBOL_opt_index_name = 286,           /* opt_index_name  */
  YYSYMBOL_table_alias = 287,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 288,          /* opt_table_alias  */
  YYSYMBOL_alias = 289,                    /* alias  */
  YYSYMBOL_opt_alias = 290,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 291,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 292,              /* with_clause  */
  YYSYMBOL_with_description_list = 293,    /* with_description_list  */
  YYSYMBOL_with_description = 294,         /* with_description  */
  YYSYMBOL_join_clause = 295,              /* join_clause  */
  YYSYMBOL_opt_join_type = 296,            /* opt_join_type  */
  YYSYMBOL_join_condition = 297,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 298,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 299           /* ident_commalist  */
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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   899

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  180
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  303
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  549

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   417


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
       2,     2,     2,     2,     2,     2,     2,   169,     2,     2,
     174,   175,   167,   165,   178,   166,   176,   168,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   177,
     158,   155,   159,   179,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   172,     2,   173,   170,     2,     2,     2,     2,     2,
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
     156,   157,   160,   161,   162,   163,   164,   171
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   294,   294,   313,   319,   326,   330,   334,   335,   336,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     353,   354,   356,   360,   365,   369,   379,   380,   381,   383,
     383,   389,   395,   397,   401,   412,   418,   425,   440,   445,
     446,   452,   464,   465,   470,   481,   494,   502,   509,   516,
     525,   526,   528,   532,   537,   538,   540,   545,   546,   547,
     548,   549,   550,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   564,   565,   567,   568,   569,   571,   572,   574,
     578,   583,   584,   585,   586,   588,   589,   597,   603,   609,
     615,   621,   622,   629,   635,   637,   647,   654,   665,   672,
     680,   681,   688,   695,   699,   704,   714,   718,   722,   734,
     734,   736,   737,   746,   747,   749,   759,   770,   775,   779,
     783,   788,   789,   791,   801,   802,   804,   806,   807,   809,
     811,   812,   814,   819,   821,   822,   824,   825,   827,   831,
     836,   838,   839,   840,   844,   845,   847,   848,   849,   850,
     851,   852,   857,   861,   866,   867,   869,   873,   878,   886,
     886,   886,   886,   886,   888,   889,   889,   889,   889,   889,
     889,   889,   889,   890,   890,   894,   894,   896,   897,   898,
     899,   900,   902,   902,   903,   904,   905,   906,   907,   908,
     909,   910,   911,   913,   914,   916,   917,   918,   919,   923,
     924,   925,   926,   928,   929,   931,   932,   934,   935,   936,
     937,   938,   939,   940,   942,   943,   945,   947,   949,   950,
     951,   952,   953,   954,   956,   957,   958,   959,   960,   961,
     963,   963,   965,   967,   969,   971,   972,   973,   974,   976,
     976,   976,   976,   976,   976,   976,   978,   980,   981,   983,
     984,   986,   988,   990,  1001,  1005,  1016,  1048,  1057,  1057,
    1064,  1064,  1066,  1066,  1073,  1077,  1082,  1090,  1096,  1100,
    1105,  1106,  1108,  1108,  1110,  1110,  1112,  1113,  1115,  1115,
    1121,  1121,  1123,  1125,  1129,  1134,  1144,  1151,  1159,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,  1186,
    1192,  1192,  1195,  1199
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
  "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "SPATIAL",
  "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE",
  "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST",
  "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET",
  "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD",
  "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP",
  "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER",
  "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR",
  "COPY", "DATE", "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH",
  "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF",
  "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO",
  "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS",
  "INTERVAL", "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT",
  "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_list", "column_constraint",
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
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "datetime_field_plural", "duration_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "date_literal", "interval_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
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

#define YYPACT_NINF (-410)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-301)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     579,    31,    44,   117,   138,    44,   -26,    70,    74,    76,
      44,   116,    44,   -14,    19,   203,    78,    78,    78,   241,
      84,  -410,   140,  -410,   140,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,   -23,  -410,   244,
      77,  -410,    91,   196,  -410,   146,   146,   146,    44,   287,
      44,   180,  -410,   185,   -57,   185,   185,   185,    44,  -410,
     182,   134,  -410,  -410,  -410,  -410,  -410,  -410,   548,  -410,
     220,  -410,  -410,   194,   -23,   204,  -410,   166,  -410,   320,
      37,   323,   218,   337,    44,    44,   267,  -410,   266,   186,
     363,   322,    44,   364,   364,   373,    44,    44,  -410,   222,
     203,  -410,   225,   371,   380,   208,   219,  -410,  -410,  -410,
     -23,   288,   277,   -23,    80,  -410,  -410,  -410,  -410,   400,
    -410,   403,  -410,  -410,  -410,   233,   235,  -410,  -410,  -410,
    -410,   714,  -410,  -410,  -410,  -410,  -410,  -410,   369,  -410,
     285,   -48,   186,   316,  -410,   364,   413,   105,   265,   -51,
    -410,  -410,   332,   312,  -410,   312,  -410,  -410,  -410,  -410,
    -410,   421,  -410,  -410,   316,  -410,  -410,   349,  -410,  -410,
     204,  -410,  -410,   316,   349,   316,   125,  -410,  -410,   375,
    -410,    37,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,    44,   423,
     318,    34,   306,  -106,   259,   261,   263,   176,   325,   268,
     385,  -410,   231,    93,   410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,   341,  -410,    27,   269,  -410,   316,   363,  -410,   404,
    -410,  -410,   393,  -410,  -410,   270,    39,  -410,   353,   272,
    -410,    24,    80,   -23,   273,  -410,   -43,    80,    93,   394,
      28,  -410,  -410,   278,   355,  -410,   781,   335,   281,    65,
    -410,  -410,  -410,   318,     9,    21,   399,   375,   316,   316,
      43,   109,   283,   385,   607,   316,    99,   284,   -52,   316,
     316,   385,  -410,   385,   -46,   286,   136,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   371,    44,  -410,   458,    37,    93,  -410,   185,
     287,    37,  -410,   421,    20,   267,  -410,   316,  -410,   459,
    -410,  -410,  -410,  -410,   316,  -410,  -410,  -410,  -410,   316,
     316,   413,   364,  -410,   293,  -410,   294,  -410,   297,  -410,
    -410,   302,  -410,  -410,  -410,  -410,   303,  -410,    98,   304,
     413,  -410,    34,  -410,  -410,   316,  -410,  -410,   305,   386,
     -65,    47,   171,   316,   316,  -410,   399,   381,    26,  -410,
    -410,  -410,   370,   554,   625,   385,   311,   231,  -410,   383,
     315,   625,   625,   625,   625,   675,   675,   675,   675,    99,
      99,   -83,   -83,   -83,   -71,   321,  -410,  -410,   119,   486,
    -410,   123,  -410,   318,  -410,    66,  -410,   319,  -410,    25,
    -410,   424,  -410,  -410,  -410,    93,    93,   157,  -410,   490,
     492,  -410,   494,   495,   496,  -410,   384,  -410,  -410,   405,
    -410,    98,  -410,   413,   158,  -410,   169,  -410,   316,   781,
     316,   316,  -410,   179,   101,   331,  -410,   385,   625,   231,
     334,   170,  -410,  -410,  -410,  -410,  -410,   342,   409,  -410,
    -410,  -410,   442,   443,   444,   425,    20,   519,  -410,  -410,
    -410,   401,  -410,  -410,   350,   181,   352,   354,   356,  -410,
    -410,  -410,   200,  -410,  -410,    52,   357,    93,   223,  -410,
     316,  -410,   607,   361,   207,  -410,  -410,    25,    20,  -410,
    -410,  -410,    20,   275,   365,   316,  -410,  -410,   518,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,    93,  -410,  -410,  -410,
    -410,   340,   413,   -28,   366,   368,   316,   209,   316,  -410,
    -410,    22,    93,  -410,  -410,    93,   367,   372,  -410
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     301,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   280,     0,
     268,    97,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   267,    92,     0,    92,    92,    92,     0,    42,
       0,   282,   283,    29,    26,    28,    27,     1,   281,     2,
       0,     6,     5,   145,     0,   106,   107,   137,    89,     0,
     155,     0,     0,   271,     0,     0,   131,    37,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   125,     0,     0,   119,   120,   118,
       0,   122,     0,     0,   151,   269,   246,   249,   251,     0,
     252,     0,   247,   248,   257,     0,   154,   156,   239,   240,
     241,   250,   242,   243,   244,   245,    32,    31,     0,   270,
       0,     0,   101,     0,    96,     0,     0,     0,     0,   131,
     103,    91,     0,    40,    38,    40,    90,    87,    88,   285,
     284,     0,   144,   124,     0,   114,   113,   137,   110,   109,
     111,   121,   117,     0,   137,     0,     0,   115,   253,   256,
      34,     0,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   254,    50,     0,     0,
     281,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   130,   159,   166,   167,   168,   161,   163,
     169,   162,   182,   170,   171,   172,   173,   165,   160,   175,
     176,     0,   302,     0,     0,    99,     0,     0,   102,     0,
      93,    94,     0,    36,    41,    24,     0,    22,   128,   126,
     152,   279,   151,     0,   136,   138,   143,   151,   147,   149,
     146,   255,   157,     0,     0,    47,     0,     0,     0,     0,
      52,    54,    55,   281,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,   177,     0,     0,     0,
       0,     0,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,   105,   104,    92,
       0,     0,    20,     0,     0,   131,   127,     0,   277,     0,
     278,   158,   108,   112,     0,   142,   141,   140,   116,     0,
       0,     0,     0,    65,     0,    67,    76,    68,     0,    63,
      64,     0,    60,    61,    66,    69,    73,    57,    78,     0,
       0,    46,     0,    49,   214,     0,   236,   238,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,     0,   174,
     164,   193,   194,     0,   189,     0,     0,     0,   180,     0,
     192,   191,   207,   208,   209,   210,   211,   212,   213,   184,
     183,   186,   185,   187,   188,     0,    35,   303,     0,     0,
      39,     0,    23,   281,   129,   258,   260,     0,   262,   275,
     261,   133,   153,   276,   139,   150,   148,     0,    45,     0,
       0,    62,     0,     0,     0,    70,     0,    82,    83,     0,
      56,    77,    79,     0,     0,    53,     0,   205,     0,     0,
       0,     0,   199,     0,     0,     0,   232,     0,   190,     0,
       0,     0,   181,   233,    98,    95,    25,     0,     0,   297,
     289,   295,   293,   296,   291,     0,     0,     0,   274,   266,
     272,     0,   123,    48,     0,     0,     0,     0,     0,    81,
      84,    80,     0,    86,   215,     0,     0,   203,     0,   202,
       0,   206,   234,     0,     0,   197,   195,   275,     0,   292,
     294,   290,     0,   259,   276,     0,    59,    75,     0,    71,
      58,    72,    85,   216,   217,   200,   204,   198,   196,   263,
     286,   298,     0,   135,     0,     0,     0,     0,     0,   132,
      74,     0,   299,   287,   273,   134,   235,     0,   288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -410,  -410,  -410,   460,  -410,   516,  -410,   226,  -410,   159,
    -410,  -410,  -410,  -410,   230,   -85,   391,  -410,  -410,  -410,
     236,  -410,   191,  -410,   107,  -410,  -410,  -410,  -410,   113,
    -410,  -410,   -49,  -410,  -410,  -410,  -410,  -410,  -410,   415,
    -410,  -410,   324,  -187,   -97,  -410,     3,   -73,   -25,  -410,
    -410,   -84,   307,  -410,  -410,  -410,  -135,  -410,  -410,   -94,
    -410,   224,  -410,  -410,    -2,  -266,  -410,   -36,   256,  -143,
    -193,  -410,  -410,  -410,  -410,  -410,  -410,   280,  -410,  -410,
    -410,  -410,  -410,  -144,  -410,  -410,  -410,  -410,  -410,    30,
     -62,   -90,  -410,  -410,   -92,  -410,  -410,  -410,  -410,  -410,
    -409,    54,  -410,  -410,  -410,     0,  -410,  -410,    82,   339,
    -410,  -410,  -410,  -410,   485,  -410,  -410,  -410,  -410,  -321
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   246,   247,    23,    64,
      24,   137,    25,    26,    88,   153,   243,    27,    28,    29,
      83,   269,   270,   271,   358,   435,   431,   440,   441,   442,
     272,    30,    92,    31,   240,   241,    32,    33,    34,   147,
      35,   149,   150,    36,   167,   168,   169,    76,   110,   111,
     172,    77,   164,   248,   325,   326,   144,   482,   539,   114,
     254,   255,   337,   104,   177,   249,   125,   126,   250,   251,
     214,   215,   216,   217,   218,   219,   220,   281,   221,   222,
     223,   224,   225,   194,   195,   196,   226,   227,   228,   229,
     230,   128,   129,   130,   131,   132,   133,   134,   135,   414,
     415,   416,   417,   418,    51,   419,   140,   478,   479,   480,
     331,    37,    38,    61,    62,   420,   475,   543,    69,   233
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     213,   106,    41,   154,   154,    44,    95,    96,    97,   155,
      52,   162,    54,   265,   238,   284,   174,   286,   127,   378,
     427,   163,   538,    40,   366,   546,   170,   328,   328,   170,
     256,   143,   258,   260,    73,   261,    93,   266,    58,   444,
      75,   116,   117,   118,    45,   199,   335,    40,    86,   289,
      89,   297,   113,    46,   385,   154,    55,    39,    98,   449,
     231,   267,   289,   297,   280,    56,   290,   513,   274,   288,
     275,   289,   336,   252,   235,    94,   200,   105,    59,   290,
     257,   386,   340,    47,   141,   142,   363,   311,   290,   312,
     284,   468,   152,   317,   268,    57,   157,   158,   383,   446,
     384,   312,   159,   531,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   262,
      42,   461,   492,   380,   119,   436,   201,   237,   203,   116,
     117,   118,   469,   369,   175,   370,   371,   470,   289,   287,
     120,    43,   289,   471,   472,   253,   381,   382,   329,   477,
     327,    74,   176,   279,   450,   290,   333,   289,   437,   290,
     473,   289,    73,    48,  -298,   474,   289,    49,   234,   170,
     204,   205,   206,    50,   290,   107,    65,    66,   290,   203,
     116,   117,   118,   290,   364,   121,   122,   123,   367,   211,
     421,   256,   458,   504,   413,    53,   425,   426,   263,   456,
     373,   438,   314,   368,   327,   315,    60,   289,   500,   207,
     108,   537,   119,   107,   322,   289,   124,   323,   439,   374,
     405,   204,   205,   206,   290,   375,   467,   523,   120,    63,
     453,   454,   290,   297,   203,   116,   117,   118,   259,   388,
     361,    67,   112,   362,  -264,   208,   109,    78,   108,   533,
     332,    70,   154,    79,   127,   338,   389,   428,   209,   127,
     207,    68,   451,   119,   502,    80,   308,   309,   310,   311,
     409,   312,    82,   121,   122,   123,   204,   205,   206,   120,
     408,   374,    84,    85,   109,   411,   279,   452,    73,    81,
      87,   210,   211,   289,   464,   499,   208,   181,   466,   212,
     468,   181,    90,   455,   124,   495,    99,   497,   498,   209,
     290,    91,   100,   406,   460,   207,   102,   103,   119,   203,
     116,   117,   118,   115,   121,   122,   123,   136,   203,   116,
     117,   118,   483,   493,   120,   315,   315,   289,   138,   525,
     139,   469,   210,   211,   494,   506,   470,   327,   327,   143,
     212,   208,   471,   472,   290,   124,   517,   526,   145,   518,
     146,   204,   205,   206,   209,   468,   148,   151,   116,   473,
     282,   205,   206,  -298,   474,   522,   156,   118,   315,   121,
     122,   123,   528,   165,   544,   327,   503,   315,   203,   116,
     117,   118,   163,   542,   166,   545,    74,   210,   211,   161,
     207,   171,   173,   119,   178,   212,   469,   179,   180,   207,
     124,   470,   119,   181,   197,   198,   232,   471,   472,   120,
     236,   535,   239,   242,   245,   112,   264,   291,   120,    15,
     273,   205,   206,   276,   473,   277,   208,   278,   313,   474,
     285,   320,   319,   316,   321,   283,   324,   342,   339,   209,
     327,   334,   341,  -265,   359,   360,    73,   376,   209,   379,
     387,   407,   423,   292,   121,   122,   123,   429,   430,   207,
     536,   432,   119,   121,   122,   123,   433,   434,   443,   448,
     447,   385,   210,   211,   289,   459,   462,   312,   120,   465,
     212,   210,   211,   481,   463,   124,   484,   476,   485,   212,
     486,   487,   488,   489,   124,   283,   501,   508,   490,   505,
     293,   182,   183,   184,   185,   186,   187,   507,   209,   509,
     510,   511,   514,   512,   534,   516,   515,   519,   101,   520,
     294,   521,   524,   121,   122,   123,   527,   295,   296,   532,
      72,   540,   541,   275,   297,   298,   244,   548,  -300,   412,
     410,   210,   211,   445,   491,     1,   496,   202,   424,   212,
     372,   318,   530,     2,   124,   299,   300,   301,   302,   303,
       3,   547,   304,   305,     4,   306,   307,   308,   309,   310,
     311,   365,   312,   422,     5,   160,     1,     6,     7,   529,
     330,     0,     0,     0,     2,     0,     0,     0,     0,     8,
       9,     3,     0,     0,     0,     4,     0,   292,     0,     0,
      10,     0,     0,    11,     0,     5,     0,     0,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,     0,     0,    12,     0,     0,     0,    13,     0,
       0,    10,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,    14,   293,     0,     0,     0,     0,    15,
     292,     0,     0,     0,     0,    12,     0,     0,   457,    13,
       0,     0,     0,     0,   377,     0,     0,     0,   292,     0,
       0,     0,   296,     0,    14,     0,     0,     0,   297,   298,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,    18,     0,     0,     0,     0,   293,     0,   299,
     300,   301,   302,   303,     0,     0,   304,   305,     0,   306,
     307,   308,   309,   310,   311,  -301,   312,   377,   292,     0,
       0,    16,    17,    18,     0,   296,     0,     0,     0,     0,
       0,   297,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,   297,
    -301,     0,   299,   300,   301,   302,   303,     0,     0,   304,
     305,     0,   306,   307,   308,   309,   310,   311,     0,   312,
    -301,  -301,  -301,   302,   303,     0,     0,   304,   305,     0,
     306,   307,   308,   309,   310,   311,     0,   312,     0,     0,
       0,     0,     0,   296,     0,   343,     0,     0,     0,   297,
     344,   345,   346,   347,     0,   348,     0,     0,     0,     0,
       0,     0,     0,   349,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -301,  -301,     0,     0,  -301,  -301,     0,
     306,   307,   308,   309,   310,   311,     0,   312,     0,   350,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,     0,     0,     0,     0,   351,     0,   352,   353,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   354,     0,     0,     0,   355,     0,   356,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   357
};

static const yytype_int16 yycheck[] =
{
     143,    74,     2,    93,    94,     5,    55,    56,    57,    94,
      10,   103,    12,   200,   149,   208,   113,   210,    80,   285,
     341,    12,    50,     3,     3,     3,   110,     3,     3,   113,
     173,    82,   175,   176,    57,   179,    93,     3,    19,   360,
      37,     4,     5,     6,    70,    93,    89,     3,    48,   114,
      50,   134,    77,    79,   100,   145,    70,    26,    58,   124,
     145,    27,   114,   134,   207,    79,   131,   476,   174,   212,
     176,   114,   115,   167,   147,   132,   124,    74,    59,   131,
     174,   127,    54,   109,    84,    85,   273,   170,   131,   172,
     283,    25,    92,   236,    60,   109,    96,    97,   291,   365,
     293,   172,    99,   512,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   181,
       3,   387,   443,   175,    87,    27,   174,   178,     3,     4,
       5,     6,    66,   277,    54,   278,   279,    71,   114,   212,
     103,     3,   114,    77,    78,   170,   289,   290,   124,   124,
     178,   174,    72,   110,   107,   131,   253,   114,    60,   131,
      94,   114,    57,    93,    98,    99,   114,    93,    63,   253,
      45,    46,    47,    97,   131,     9,    17,    18,   131,     3,
       4,     5,     6,   131,   175,   148,   149,   150,   167,   167,
     325,   334,   385,   459,   174,    79,   339,   340,   198,   173,
      91,   103,   175,   276,   178,   178,     3,   114,   107,    84,
      44,   532,    87,     9,   175,   114,   179,   178,   120,   110,
     312,    45,    46,    47,   131,   116,   413,   175,   103,   151,
     373,   374,   131,   134,     3,     4,     5,     6,   113,   103,
     175,     0,    76,   178,   178,   120,    80,     3,    44,   515,
     252,   111,   342,   176,   316,   257,   120,   342,   133,   321,
      84,   177,    91,    87,   457,   174,   167,   168,   169,   170,
     319,   172,   126,   148,   149,   150,    45,    46,    47,   103,
     316,   110,    46,    47,    80,   321,   110,   116,    57,    93,
       3,   166,   167,   114,   175,   116,   120,   178,   175,   174,
      25,   178,   122,   376,   179,   448,   124,   450,   451,   133,
     131,   126,   178,   313,   387,    84,    96,   123,    87,     3,
       4,     5,     6,     3,   148,   149,   150,     4,     3,     4,
       5,     6,   175,   175,   103,   178,   178,   114,   120,   116,
       3,    66,   166,   167,   175,   175,    71,   178,   178,    82,
     174,   120,    77,    78,   131,   179,   175,   500,    92,   178,
     174,    45,    46,    47,   133,    25,     3,    45,     4,    94,
      45,    46,    47,    98,    99,   175,     3,     6,   178,   148,
     149,   150,   175,   175,   175,   178,   459,   178,     3,     4,
       5,     6,    12,   536,   175,   538,   174,   166,   167,   174,
      84,   113,   125,    87,     4,   174,    66,     4,   175,    84,
     179,    71,    87,   178,    45,   130,     3,    77,    78,   103,
     155,    81,    90,   111,     3,    76,     3,    17,   103,   111,
     124,    46,    47,   174,    94,   174,   120,   174,    97,    99,
     172,    48,    38,   174,   174,   120,    93,    92,    54,   133,
     178,   178,   174,   178,   119,   174,    57,   174,   133,   175,
     174,     3,     3,    53,   148,   149,   150,   174,   174,    84,
     130,   174,    87,   148,   149,   150,   174,   174,   174,    93,
     175,   100,   166,   167,   114,   174,   103,   172,   103,     3,
     174,   166,   167,    69,   173,   179,     6,   178,     6,   174,
       6,     6,     6,   119,   179,   120,   175,    98,   103,   175,
     100,   136,   137,   138,   139,   140,   141,   175,   133,    77,
      77,    77,     3,    98,     6,   175,   125,   175,    68,   175,
     120,   175,   175,   148,   149,   150,   175,   127,   128,   174,
      24,   175,   174,   176,   134,   135,   155,   175,     0,   323,
     320,   166,   167,   362,   441,     7,   449,   142,   334,   174,
     280,   237,   508,    15,   179,   155,   156,   157,   158,   159,
      22,   541,   162,   163,    26,   165,   166,   167,   168,   169,
     170,   274,   172,   327,    36,   100,     7,    39,    40,   507,
     251,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    51,
      52,    22,    -1,    -1,    -1,    26,    -1,    53,    -1,    -1,
      62,    -1,    -1,    65,    -1,    36,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    86,    -1,    -1,    -1,    90,    -1,
      -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   100,    -1,    -1,    -1,    -1,   111,
      53,    -1,    -1,    -1,    -1,    86,    -1,    -1,   114,    90,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    53,    -1,
      -1,    -1,   128,    -1,   105,    -1,    -1,    -1,   134,   135,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,    -1,    -1,   100,    -1,   155,
     156,   157,   158,   159,    -1,    -1,   162,   163,    -1,   165,
     166,   167,   168,   169,   170,   100,   172,   120,    53,    -1,
      -1,   152,   153,   154,    -1,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,    -1,   155,   156,   157,   158,   159,    -1,    -1,   162,
     163,    -1,   165,   166,   167,   168,   169,   170,    -1,   172,
     155,   156,   157,   158,   159,    -1,    -1,   162,   163,    -1,
     165,   166,   167,   168,   169,   170,    -1,   172,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    24,    -1,    -1,    -1,   134,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,   159,    -1,    -1,   162,   163,    -1,
     165,   166,   167,   168,   169,   170,    -1,   172,    -1,    68,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      62,    65,    86,    90,   105,   111,   152,   153,   154,   181,
     182,   183,   184,   188,   190,   192,   193,   197,   198,   199,
     211,   213,   216,   217,   218,   220,   223,   291,   292,    26,
       3,   285,     3,     3,   285,    70,    79,   109,    93,    93,
      97,   284,   285,    79,   285,    70,    79,   109,    19,    59,
       3,   293,   294,   151,   189,   189,   189,     0,   177,   298,
     111,   185,   185,    57,   174,   226,   227,   231,     3,   176,
     174,    93,   126,   200,   200,   200,   285,     3,   194,   285,
     122,   126,   212,    93,   132,   212,   212,   212,   285,   124,
     178,   183,    96,   123,   243,   226,   227,     9,    44,    80,
     228,   229,    76,   228,   239,     3,     4,     5,     6,    87,
     103,   148,   149,   150,   179,   246,   247,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     4,   191,   120,     3,
     286,   285,   285,    82,   236,    92,   174,   219,     3,   221,
     222,    45,   285,   195,   271,   195,     3,   285,   285,   226,
     294,   174,   274,    12,   232,   175,   175,   224,   225,   226,
     231,   113,   230,   125,   224,    54,    72,   244,     4,     4,
     175,   178,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   263,   264,   265,    45,   130,    93,
     124,   174,   219,     3,    45,    46,    47,    84,   120,   133,
     166,   167,   174,   249,   250,   251,   252,   253,   254,   255,
     256,   258,   259,   260,   261,   262,   266,   267,   268,   269,
     270,   195,     3,   299,    63,   227,   155,   178,   236,    90,
     214,   215,   111,   196,   196,     3,   186,   187,   233,   245,
     248,   249,   239,   228,   240,   241,   249,   239,   249,   113,
     249,   263,   270,   285,     3,   223,     3,    27,    60,   201,
     202,   203,   210,   124,   174,   176,   174,   174,   174,   110,
     249,   257,    45,   120,   250,   172,   250,   227,   249,   114,
     131,    17,    53,   100,   120,   127,   128,   134,   135,   155,
     156,   157,   158,   159,   162,   163,   165,   166,   167,   168,
     169,   170,   172,    97,   175,   178,   174,   249,   222,    38,
      48,   174,   175,   178,    93,   234,   235,   178,     3,   124,
     289,   290,   244,   224,   178,    89,   115,   242,   244,    54,
      54,   174,    92,    24,    29,    30,    31,    32,    34,    42,
      68,    85,    87,    88,   102,   106,   108,   118,   204,   119,
     174,   175,   178,   223,   175,   232,     3,   167,   227,   263,
     249,   249,   257,    91,   110,   116,   174,   120,   245,   175,
     175,   249,   249,   250,   250,   100,   127,   174,   103,   120,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   274,   285,     3,   247,   212,
     194,   247,   187,   174,   279,   280,   281,   282,   283,   285,
     295,   236,   248,     3,   241,   249,   249,   299,   195,   174,
     174,   206,   174,   174,   174,   205,    27,    60,   103,   120,
     207,   208,   209,   174,   299,   202,   245,   175,    93,   124,
     107,    91,   116,   249,   249,   227,   173,   114,   250,   174,
     227,   245,   103,   173,   175,     3,   175,   223,    25,    66,
      71,    77,    78,    94,    99,   296,   178,   124,   287,   288,
     289,    69,   237,   175,     6,     6,     6,     6,     6,   119,
     103,   209,   299,   175,   175,   249,   204,   249,   249,   116,
     107,   175,   250,   227,   245,   175,   175,   175,    98,    77,
      77,    77,    98,   280,     3,   125,   175,   175,   178,   175,
     175,   175,   175,   175,   175,   116,   249,   175,   175,   288,
     281,   280,   174,   245,     6,    81,   130,   299,    50,   238,
     175,   174,   249,   297,   175,   249,     3,   269,   175
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   180,   181,   182,   182,   183,   183,   183,   183,   183,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     185,   185,   186,   186,   187,   187,   188,   188,   188,   189,
     189,   190,   191,   192,   192,   193,   193,   194,   195,   196,
     196,   197,   198,   198,   198,   199,   199,   199,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   205,   205,   206,   206,   206,   207,   207,   208,
     208,   209,   209,   209,   209,   210,   210,   211,   211,   211,
     211,   212,   212,   213,   214,   215,   216,   217,   218,   218,
     219,   219,   220,   221,   221,   222,   223,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   229,   229,
     229,   230,   230,   231,   232,   232,   233,   234,   234,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   240,   240,
     241,   242,   242,   242,   243,   243,   244,   244,   244,   244,
     244,   244,   245,   245,   246,   246,   247,   247,   248,   249,
     249,   249,   249,   249,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   251,   251,   252,   252,   252,
     252,   252,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   254,   254,   255,   255,   255,   255,   256,
     256,   256,   256,   257,   257,   258,   258,   259,   259,   259,
     259,   259,   259,   259,   260,   260,   261,   262,   263,   263,
     263,   263,   263,   263,   264,   264,   264,   264,   264,   264,
     265,   265,   266,   267,   268,   269,   269,   269,   269,   270,
     270,   270,   270,   270,   270,   270,   271,   272,   272,   273,
     273,   274,   275,   276,   277,   277,   277,   278,   279,   279,
     280,   280,   281,   281,   282,   282,   283,   284,   285,   285,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     291,   291,   292,   293,   293,   294,   295,   295,   295,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   297,
     298,   298,   299,   299
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     4,     4,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     0,     5,     3,     0,     1,     0,     1,
       2,     2,     1,     1,     2,     5,     4,     4,     4,     3,
       4,     2,     0,     5,     1,     4,     4,     2,     8,     5,
       3,     0,     5,     1,     3,     3,     2,     2,     6,     1,
       1,     1,     3,     3,     3,     3,     5,     2,     1,     1,
       1,     1,     0,     7,     1,     0,     1,     1,     0,     2,
       2,     0,     4,     0,     2,     0,     3,     0,     1,     3,
       2,     1,     1,     0,     2,     0,     2,     2,     4,     2,
       4,     0,     1,     3,     1,     0,     1,     3,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     2,     2,
       3,     4,     1,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     3,     3,     5,     6,     5,     6,     4,
       6,     3,     5,     4,     5,     4,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     6,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     2,     1,     1,     3,
       1,     1,     1,     4,     1,     3,     2,     1,     1,     3,
       1,     0,     1,     5,     1,     0,     2,     1,     1,     0,
       1,     0,     2,     1,     3,     3,     4,     6,     8,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     0,     1,
       1,     0,     1,     3
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
#line 163 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2006 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 163 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2012 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 161 "bison_parser.y"
                { }
#line 2018 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 161 "bison_parser.y"
                { }
#line 2024 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2037 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2043 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2049 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2062 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2075 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2081 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2087 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2093 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 163 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2099 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2105 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2111 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 161 "bison_parser.y"
                { }
#line 2117 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 163 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2123 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 161 "bison_parser.y"
                { }
#line 2129 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2135 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2141 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2147 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 161 "bison_parser.y"
                { }
#line 2153 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2166 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2172 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2178 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 161 "bison_parser.y"
                { }
#line 2184 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 161 "bison_parser.y"
                { }
#line 2190 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2196 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 161 "bison_parser.y"
                { }
#line 2202 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_list: /* column_constraint_list  */
#line 161 "bison_parser.y"
                { }
#line 2208 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 161 "bison_parser.y"
                { }
#line 2214 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2220 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2226 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 161 "bison_parser.y"
                { }
#line 2232 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2238 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2244 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2250 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2256 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2262 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2268 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2281 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2287 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2300 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2306 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2312 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2318 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2336 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 161 "bison_parser.y"
                { }
#line 2354 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2360 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 161 "bison_parser.y"
                { }
#line 2366 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2379 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2385 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2391 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2397 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2403 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2409 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2422 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2435 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2441 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 161 "bison_parser.y"
                { }
#line 2447 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2453 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2459 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2472 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2485 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2498 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2504 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2510 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2516 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2522 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2528 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2534 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2540 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2546 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2552 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2558 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2564 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2570 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2576 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2582 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2588 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 161 "bison_parser.y"
                { }
#line 2594 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 161 "bison_parser.y"
                { }
#line 2600 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 161 "bison_parser.y"
                { }
#line 2606 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2612 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2618 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2624 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2630 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2636 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2642 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2648 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2654 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2660 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2666 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2672 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2678 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2684 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2690 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2696 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2702 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2715 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2721 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2727 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 162 "bison_parser.y"
                { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2733 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 163 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2739 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2745 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2751 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2757 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2763 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2769 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2775 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2781 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2787 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2793 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 161 "bison_parser.y"
                { }
#line 2799 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 172 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2805 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 164 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2818 "bison_parser.cpp"
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
#line 77 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 2926 "bison_parser.cpp"

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
#line 294 "bison_parser.y"
                                     {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param != nullptr) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3155 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 313 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3166 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 319 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3177 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 326 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3186 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 330 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3195 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 334 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3201 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 335 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3207 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 336 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3213 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 338 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3219 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 339 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3225 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 340 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3231 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 341 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3237 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 342 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3243 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 343 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3249 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 344 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3255 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 345 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3261 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 346 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3267 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 347 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3273 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 353 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3279 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 354 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3285 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 356 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3294 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 360 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3303 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 365 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3312 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 369 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3322 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 379 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3328 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 380 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3334 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 381 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3340 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 389 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3350 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 397 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3359 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 401 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3369 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 412 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3380 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 418 "bison_parser.y"
                                               {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3391 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 425 "bison_parser.y"
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
#line 3410 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 440 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3419 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 445 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3425 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 446 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3431 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 452 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3442 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 464 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3448 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 465 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3458 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 470 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3468 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 481 "bison_parser.y"
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
#line 3486 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 494 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
}
#line 3499 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 502 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3511 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 509 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3523 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 516 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3536 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 525 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3542 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 526 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3548 "bison_parser.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 528 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3557 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 532 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3566 "bison_parser.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 537 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3572 "bison_parser.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 538 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3578 "bison_parser.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 540 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
  (yyval.column_t)->setNullableExplicit();
}
#line 3587 "bison_parser.cpp"
    break;

  case 57: /* column_type: INT  */
#line 545 "bison_parser.y"
                  { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3593 "bison_parser.cpp"
    break;

  case 58: /* column_type: CHAR '(' INTVAL ')'  */
#line 546 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3599 "bison_parser.cpp"
    break;

  case 59: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 547 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3605 "bison_parser.cpp"
    break;

  case 60: /* column_type: DATE  */
#line 548 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3611 "bison_parser.cpp"
    break;

  case 61: /* column_type: DATETIME  */
#line 549 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3617 "bison_parser.cpp"
    break;

  case 62: /* column_type: DECIMAL opt_decimal_specification  */
#line 550 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3626 "bison_parser.cpp"
    break;

  case 63: /* column_type: DOUBLE  */
#line 554 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3632 "bison_parser.cpp"
    break;

  case 64: /* column_type: FLOAT  */
#line 555 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3638 "bison_parser.cpp"
    break;

  case 65: /* column_type: INTEGER  */
#line 556 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3644 "bison_parser.cpp"
    break;

  case 66: /* column_type: LONG  */
#line 557 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3650 "bison_parser.cpp"
    break;

  case 67: /* column_type: REAL  */
#line 558 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3656 "bison_parser.cpp"
    break;

  case 68: /* column_type: SMALLINT  */
#line 559 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3662 "bison_parser.cpp"
    break;

  case 69: /* column_type: TEXT  */
#line 560 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3668 "bison_parser.cpp"
    break;

  case 70: /* column_type: TIME opt_time_precision  */
#line 561 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3674 "bison_parser.cpp"
    break;

  case 71: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 562 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3680 "bison_parser.cpp"
    break;

  case 72: /* opt_time_precision: '(' INTVAL ')'  */
#line 564 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3686 "bison_parser.cpp"
    break;

  case 73: /* opt_time_precision: %empty  */
#line 565 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3692 "bison_parser.cpp"
    break;

  case 74: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 567 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3698 "bison_parser.cpp"
    break;

  case 75: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 568 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3704 "bison_parser.cpp"
    break;

  case 76: /* opt_decimal_specification: %empty  */
#line 569 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3710 "bison_parser.cpp"
    break;

  case 77: /* opt_column_constraints: column_constraint_list  */
#line 571 "bison_parser.y"
                                                { (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec); }
#line 3716 "bison_parser.cpp"
    break;

  case 78: /* opt_column_constraints: %empty  */
#line 572 "bison_parser.y"
              { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3722 "bison_parser.cpp"
    break;

  case 79: /* column_constraint_list: column_constraint  */
#line 574 "bison_parser.y"
                                           {
  (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
  (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
}
#line 3731 "bison_parser.cpp"
    break;

  case 80: /* column_constraint_list: column_constraint_list column_constraint  */
#line 578 "bison_parser.y"
                                           {
  (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec);
}
#line 3740 "bison_parser.cpp"
    break;

  case 81: /* column_constraint: PRIMARY KEY  */
#line 583 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3746 "bison_parser.cpp"
    break;

  case 82: /* column_constraint: UNIQUE  */
#line 584 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3752 "bison_parser.cpp"
    break;

  case 83: /* column_constraint: NULL  */
#line 585 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3758 "bison_parser.cpp"
    break;

  case 84: /* column_constraint: NOT NULL  */
#line 586 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3764 "bison_parser.cpp"
    break;

  case 85: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 588 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3770 "bison_parser.cpp"
    break;

  case 86: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 589 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3776 "bison_parser.cpp"
    break;

  case 87: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 597 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3787 "bison_parser.cpp"
    break;

  case 88: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 603 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3798 "bison_parser.cpp"
    break;

  case 89: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 609 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3808 "bison_parser.cpp"
    break;

  case 90: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 615 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3818 "bison_parser.cpp"
    break;

  case 91: /* opt_exists: IF EXISTS  */
#line 621 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3824 "bison_parser.cpp"
    break;

  case 92: /* opt_exists: %empty  */
#line 622 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3830 "bison_parser.cpp"
    break;

  case 93: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 629 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3840 "bison_parser.cpp"
    break;

  case 94: /* alter_action: drop_action  */
#line 635 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3846 "bison_parser.cpp"
    break;

  case 95: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 637 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3855 "bison_parser.cpp"
    break;

  case 96: /* delete_statement: DELETE FROM table_name opt_where  */
#line 647 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3866 "bison_parser.cpp"
    break;

  case 97: /* truncate_statement: TRUNCATE table_name  */
#line 654 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3876 "bison_parser.cpp"
    break;

  case 98: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 665 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 3888 "bison_parser.cpp"
    break;

  case 99: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 672 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3900 "bison_parser.cpp"
    break;

  case 100: /* opt_column_list: '(' ident_commalist ')'  */
#line 680 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3906 "bison_parser.cpp"
    break;

  case 101: /* opt_column_list: %empty  */
#line 681 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 3912 "bison_parser.cpp"
    break;

  case 102: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 688 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 3923 "bison_parser.cpp"
    break;

  case 103: /* update_clause_commalist: update_clause  */
#line 695 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 3932 "bison_parser.cpp"
    break;

  case 104: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 699 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 3941 "bison_parser.cpp"
    break;

  case 105: /* update_clause: IDENTIFIER '=' expr  */
#line 704 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 3951 "bison_parser.cpp"
    break;

  case 106: /* select_statement: opt_with_clause select_with_paren  */
#line 714 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 3960 "bison_parser.cpp"
    break;

  case 107: /* select_statement: opt_with_clause select_no_paren  */
#line 718 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 3969 "bison_parser.cpp"
    break;

  case 108: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 722 "bison_parser.y"
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
#line 3985 "bison_parser.cpp"
    break;

  case 111: /* select_within_set_operation_no_parentheses: select_clause  */
#line 736 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3991 "bison_parser.cpp"
    break;

  case 112: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 737 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4004 "bison_parser.cpp"
    break;

  case 113: /* select_with_paren: '(' select_no_paren ')'  */
#line 746 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4010 "bison_parser.cpp"
    break;

  case 114: /* select_with_paren: '(' select_with_paren ')'  */
#line 747 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4016 "bison_parser.cpp"
    break;

  case 115: /* select_no_paren: select_clause opt_order opt_limit  */
#line 749 "bison_parser.y"
                                                    {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-1].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[0].limit) != nullptr) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[0].limit);
  }
}
#line 4031 "bison_parser.cpp"
    break;

  case 116: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 759 "bison_parser.y"
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
#line 4046 "bison_parser.cpp"
    break;

  case 117: /* set_operator: set_type opt_all  */
#line 770 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4055 "bison_parser.cpp"
    break;

  case 118: /* set_type: UNION  */
#line 775 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4064 "bison_parser.cpp"
    break;

  case 119: /* set_type: INTERSECT  */
#line 779 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4073 "bison_parser.cpp"
    break;

  case 120: /* set_type: EXCEPT  */
#line 783 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4082 "bison_parser.cpp"
    break;

  case 121: /* opt_all: ALL  */
#line 788 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4088 "bison_parser.cpp"
    break;

  case 122: /* opt_all: %empty  */
#line 789 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4094 "bison_parser.cpp"
    break;

  case 123: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 791 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4108 "bison_parser.cpp"
    break;

  case 124: /* opt_distinct: DISTINCT  */
#line 801 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4114 "bison_parser.cpp"
    break;

  case 125: /* opt_distinct: %empty  */
#line 802 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4120 "bison_parser.cpp"
    break;

  case 127: /* opt_from_clause: from_clause  */
#line 806 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4126 "bison_parser.cpp"
    break;

  case 128: /* opt_from_clause: %empty  */
#line 807 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4132 "bison_parser.cpp"
    break;

  case 129: /* from_clause: FROM table_ref  */
#line 809 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4138 "bison_parser.cpp"
    break;

  case 130: /* opt_where: WHERE expr  */
#line 811 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4144 "bison_parser.cpp"
    break;

  case 131: /* opt_where: %empty  */
#line 812 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4150 "bison_parser.cpp"
    break;

  case 132: /* opt_group: GROUP BY expr_list opt_having  */
#line 814 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4160 "bison_parser.cpp"
    break;

  case 133: /* opt_group: %empty  */
#line 819 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4166 "bison_parser.cpp"
    break;

  case 134: /* opt_having: HAVING expr  */
#line 821 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4172 "bison_parser.cpp"
    break;

  case 135: /* opt_having: %empty  */
#line 822 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4178 "bison_parser.cpp"
    break;

  case 136: /* opt_order: ORDER BY order_list  */
#line 824 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4184 "bison_parser.cpp"
    break;

  case 137: /* opt_order: %empty  */
#line 825 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4190 "bison_parser.cpp"
    break;

  case 138: /* order_list: order_desc  */
#line 827 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4199 "bison_parser.cpp"
    break;

  case 139: /* order_list: order_list ',' order_desc  */
#line 831 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4208 "bison_parser.cpp"
    break;

  case 140: /* order_desc: expr opt_order_type  */
#line 836 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4214 "bison_parser.cpp"
    break;

  case 141: /* opt_order_type: ASC  */
#line 838 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4220 "bison_parser.cpp"
    break;

  case 142: /* opt_order_type: DESC  */
#line 839 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4226 "bison_parser.cpp"
    break;

  case 143: /* opt_order_type: %empty  */
#line 840 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4232 "bison_parser.cpp"
    break;

  case 144: /* opt_top: TOP int_literal  */
#line 844 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4238 "bison_parser.cpp"
    break;

  case 145: /* opt_top: %empty  */
#line 845 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4244 "bison_parser.cpp"
    break;

  case 146: /* opt_limit: LIMIT expr  */
#line 847 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4250 "bison_parser.cpp"
    break;

  case 147: /* opt_limit: OFFSET expr  */
#line 848 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4256 "bison_parser.cpp"
    break;

  case 148: /* opt_limit: LIMIT expr OFFSET expr  */
#line 849 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4262 "bison_parser.cpp"
    break;

  case 149: /* opt_limit: LIMIT ALL  */
#line 850 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4268 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 851 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4274 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: %empty  */
#line 852 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4280 "bison_parser.cpp"
    break;

  case 152: /* expr_list: expr_alias  */
#line 857 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4289 "bison_parser.cpp"
    break;

  case 153: /* expr_list: expr_list ',' expr_alias  */
#line 861 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4298 "bison_parser.cpp"
    break;

  case 154: /* opt_literal_list: literal_list  */
#line 866 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4304 "bison_parser.cpp"
    break;

  case 155: /* opt_literal_list: %empty  */
#line 867 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4310 "bison_parser.cpp"
    break;

  case 156: /* literal_list: literal  */
#line 869 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4319 "bison_parser.cpp"
    break;

  case 157: /* literal_list: literal_list ',' literal  */
#line 873 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4328 "bison_parser.cpp"
    break;

  case 158: /* expr_alias: expr opt_alias  */
#line 878 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4340 "bison_parser.cpp"
    break;

  case 164: /* operand: '(' expr ')'  */
#line 888 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4346 "bison_parser.cpp"
    break;

  case 174: /* operand: '(' select_no_paren ')'  */
#line 890 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4354 "bison_parser.cpp"
    break;

  case 177: /* unary_expr: '-' operand  */
#line 896 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4360 "bison_parser.cpp"
    break;

  case 178: /* unary_expr: NOT operand  */
#line 897 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4366 "bison_parser.cpp"
    break;

  case 179: /* unary_expr: operand ISNULL  */
#line 898 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4372 "bison_parser.cpp"
    break;

  case 180: /* unary_expr: operand IS NULL  */
#line 899 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4378 "bison_parser.cpp"
    break;

  case 181: /* unary_expr: operand IS NOT NULL  */
#line 900 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4384 "bison_parser.cpp"
    break;

  case 183: /* binary_expr: operand '-' operand  */
#line 902 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4390 "bison_parser.cpp"
    break;

  case 184: /* binary_expr: operand '+' operand  */
#line 903 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4396 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand '/' operand  */
#line 904 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4402 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand '*' operand  */
#line 905 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4408 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand '%' operand  */
#line 906 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4414 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '^' operand  */
#line 907 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4420 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand LIKE operand  */
#line 908 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4426 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand NOT LIKE operand  */
#line 909 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4432 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand ILIKE operand  */
#line 910 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4438 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand CONCAT operand  */
#line 911 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4444 "bison_parser.cpp"
    break;

  case 193: /* logic_expr: expr AND expr  */
#line 913 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4450 "bison_parser.cpp"
    break;

  case 194: /* logic_expr: expr OR expr  */
#line 914 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4456 "bison_parser.cpp"
    break;

  case 195: /* in_expr: operand IN '(' expr_list ')'  */
#line 916 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4462 "bison_parser.cpp"
    break;

  case 196: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 917 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4468 "bison_parser.cpp"
    break;

  case 197: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 918 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4474 "bison_parser.cpp"
    break;

  case 198: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 919 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4480 "bison_parser.cpp"
    break;

  case 199: /* case_expr: CASE expr case_list END  */
#line 923 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4486 "bison_parser.cpp"
    break;

  case 200: /* case_expr: CASE expr case_list ELSE expr END  */
#line 924 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4492 "bison_parser.cpp"
    break;

  case 201: /* case_expr: CASE case_list END  */
#line 925 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4498 "bison_parser.cpp"
    break;

  case 202: /* case_expr: CASE case_list ELSE expr END  */
#line 926 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4504 "bison_parser.cpp"
    break;

  case 203: /* case_list: WHEN expr THEN expr  */
#line 928 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4510 "bison_parser.cpp"
    break;

  case 204: /* case_list: case_list WHEN expr THEN expr  */
#line 929 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4516 "bison_parser.cpp"
    break;

  case 205: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 931 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4522 "bison_parser.cpp"
    break;

  case 206: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 932 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4528 "bison_parser.cpp"
    break;

  case 207: /* comp_expr: operand '=' operand  */
#line 934 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4534 "bison_parser.cpp"
    break;

  case 208: /* comp_expr: operand EQUALS operand  */
#line 935 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4540 "bison_parser.cpp"
    break;

  case 209: /* comp_expr: operand NOTEQUALS operand  */
#line 936 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4546 "bison_parser.cpp"
    break;

  case 210: /* comp_expr: operand '<' operand  */
#line 937 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4552 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand '>' operand  */
#line 938 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4558 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand LESSEQ operand  */
#line 939 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4564 "bison_parser.cpp"
    break;

  case 213: /* comp_expr: operand GREATEREQ operand  */
#line 940 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4570 "bison_parser.cpp"
    break;

  case 214: /* function_expr: IDENTIFIER '(' ')'  */
#line 942 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4576 "bison_parser.cpp"
    break;

  case 215: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 943 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4582 "bison_parser.cpp"
    break;

  case 216: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 945 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4588 "bison_parser.cpp"
    break;

  case 217: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 947 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4594 "bison_parser.cpp"
    break;

  case 218: /* datetime_field: SECOND  */
#line 949 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4600 "bison_parser.cpp"
    break;

  case 219: /* datetime_field: MINUTE  */
#line 950 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4606 "bison_parser.cpp"
    break;

  case 220: /* datetime_field: HOUR  */
#line 951 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4612 "bison_parser.cpp"
    break;

  case 221: /* datetime_field: DAY  */
#line 952 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4618 "bison_parser.cpp"
    break;

  case 222: /* datetime_field: MONTH  */
#line 953 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4624 "bison_parser.cpp"
    break;

  case 223: /* datetime_field: YEAR  */
#line 954 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4630 "bison_parser.cpp"
    break;

  case 224: /* datetime_field_plural: SECONDS  */
#line 956 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4636 "bison_parser.cpp"
    break;

  case 225: /* datetime_field_plural: MINUTES  */
#line 957 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4642 "bison_parser.cpp"
    break;

  case 226: /* datetime_field_plural: HOURS  */
#line 958 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4648 "bison_parser.cpp"
    break;

  case 227: /* datetime_field_plural: DAYS  */
#line 959 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4654 "bison_parser.cpp"
    break;

  case 228: /* datetime_field_plural: MONTHS  */
#line 960 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4660 "bison_parser.cpp"
    break;

  case 229: /* datetime_field_plural: YEARS  */
#line 961 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4666 "bison_parser.cpp"
    break;

  case 232: /* array_expr: ARRAY '[' expr_list ']'  */
#line 965 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4672 "bison_parser.cpp"
    break;

  case 233: /* array_index: operand '[' int_literal ']'  */
#line 967 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4678 "bison_parser.cpp"
    break;

  case 234: /* between_expr: operand BETWEEN operand AND operand  */
#line 969 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4684 "bison_parser.cpp"
    break;

  case 235: /* column_name: IDENTIFIER  */
#line 971 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4690 "bison_parser.cpp"
    break;

  case 236: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 972 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4696 "bison_parser.cpp"
    break;

  case 237: /* column_name: '*'  */
#line 973 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4702 "bison_parser.cpp"
    break;

  case 238: /* column_name: IDENTIFIER '.' '*'  */
#line 974 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4708 "bison_parser.cpp"
    break;

  case 246: /* string_literal: STRING  */
#line 978 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4714 "bison_parser.cpp"
    break;

  case 247: /* bool_literal: TRUE  */
#line 980 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4720 "bison_parser.cpp"
    break;

  case 248: /* bool_literal: FALSE  */
#line 981 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4726 "bison_parser.cpp"
    break;

  case 249: /* num_literal: FLOATVAL  */
#line 983 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4732 "bison_parser.cpp"
    break;

  case 251: /* int_literal: INTVAL  */
#line 986 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4738 "bison_parser.cpp"
    break;

  case 252: /* null_literal: NULL  */
#line 988 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4744 "bison_parser.cpp"
    break;

  case 253: /* date_literal: DATE STRING  */
#line 990 "bison_parser.y"
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
#line 4759 "bison_parser.cpp"
    break;

  case 254: /* interval_literal: int_literal duration_field  */
#line 1001 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4768 "bison_parser.cpp"
    break;

  case 255: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1005 "bison_parser.y"
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
#line 4784 "bison_parser.cpp"
    break;

  case 256: /* interval_literal: INTERVAL STRING  */
#line 1016 "bison_parser.y"
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
#line 4820 "bison_parser.cpp"
    break;

  case 257: /* param_expr: '?'  */
#line 1048 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4830 "bison_parser.cpp"
    break;

  case 259: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1057 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 4841 "bison_parser.cpp"
    break;

  case 263: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1066 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4852 "bison_parser.cpp"
    break;

  case 264: /* table_ref_commalist: table_ref_atomic  */
#line 1073 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 4861 "bison_parser.cpp"
    break;

  case 265: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1077 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 4870 "bison_parser.cpp"
    break;

  case 266: /* table_ref_name: table_name opt_table_alias  */
#line 1082 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4882 "bison_parser.cpp"
    break;

  case 267: /* table_ref_name_no_alias: table_name  */
#line 1090 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 4892 "bison_parser.cpp"
    break;

  case 268: /* table_name: IDENTIFIER  */
#line 1096 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4901 "bison_parser.cpp"
    break;

  case 269: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1100 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4910 "bison_parser.cpp"
    break;

  case 270: /* opt_index_name: IDENTIFIER  */
#line 1105 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 4916 "bison_parser.cpp"
    break;

  case 271: /* opt_index_name: %empty  */
#line 1106 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 4922 "bison_parser.cpp"
    break;

  case 273: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1108 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4928 "bison_parser.cpp"
    break;

  case 275: /* opt_table_alias: %empty  */
#line 1110 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 4934 "bison_parser.cpp"
    break;

  case 276: /* alias: AS IDENTIFIER  */
#line 1112 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4940 "bison_parser.cpp"
    break;

  case 277: /* alias: IDENTIFIER  */
#line 1113 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4946 "bison_parser.cpp"
    break;

  case 279: /* opt_alias: %empty  */
#line 1115 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 4952 "bison_parser.cpp"
    break;

  case 281: /* opt_with_clause: %empty  */
#line 1121 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 4958 "bison_parser.cpp"
    break;

  case 282: /* with_clause: WITH with_description_list  */
#line 1123 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4964 "bison_parser.cpp"
    break;

  case 283: /* with_description_list: with_description  */
#line 1125 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 4973 "bison_parser.cpp"
    break;

  case 284: /* with_description_list: with_description_list ',' with_description  */
#line 1129 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 4982 "bison_parser.cpp"
    break;

  case 285: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1134 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 4992 "bison_parser.cpp"
    break;

  case 286: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1144 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5004 "bison_parser.cpp"
    break;

  case 287: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1151 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5017 "bison_parser.cpp"
    break;

  case 288: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1159 "bison_parser.y"
                                                                                 {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
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
#line 5037 "bison_parser.cpp"
    break;

  case 289: /* opt_join_type: INNER  */
#line 1175 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5043 "bison_parser.cpp"
    break;

  case 290: /* opt_join_type: LEFT OUTER  */
#line 1176 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5049 "bison_parser.cpp"
    break;

  case 291: /* opt_join_type: LEFT  */
#line 1177 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5055 "bison_parser.cpp"
    break;

  case 292: /* opt_join_type: RIGHT OUTER  */
#line 1178 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5061 "bison_parser.cpp"
    break;

  case 293: /* opt_join_type: RIGHT  */
#line 1179 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5067 "bison_parser.cpp"
    break;

  case 294: /* opt_join_type: FULL OUTER  */
#line 1180 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5073 "bison_parser.cpp"
    break;

  case 295: /* opt_join_type: OUTER  */
#line 1181 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5079 "bison_parser.cpp"
    break;

  case 296: /* opt_join_type: FULL  */
#line 1182 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5085 "bison_parser.cpp"
    break;

  case 297: /* opt_join_type: CROSS  */
#line 1183 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5091 "bison_parser.cpp"
    break;

  case 298: /* opt_join_type: %empty  */
#line 1184 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5097 "bison_parser.cpp"
    break;

  case 302: /* ident_commalist: IDENTIFIER  */
#line 1195 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5106 "bison_parser.cpp"
    break;

  case 303: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1199 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5115 "bison_parser.cpp"
    break;


#line 5119 "bison_parser.cpp"

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

#line 1205 "bison_parser.y"

// clang-format on
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
