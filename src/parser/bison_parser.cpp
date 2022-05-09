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
  YYSYMBOL_NO = 133,                       /* NO  */
  YYSYMBOL_ARRAY = 134,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 135,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 136,                    /* ILIKE  */
  YYSYMBOL_SECOND = 137,                   /* SECOND  */
  YYSYMBOL_MINUTE = 138,                   /* MINUTE  */
  YYSYMBOL_HOUR = 139,                     /* HOUR  */
  YYSYMBOL_DAY = 140,                      /* DAY  */
  YYSYMBOL_MONTH = 141,                    /* MONTH  */
  YYSYMBOL_YEAR = 142,                     /* YEAR  */
  YYSYMBOL_SECONDS = 143,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 144,                  /* MINUTES  */
  YYSYMBOL_HOURS = 145,                    /* HOURS  */
  YYSYMBOL_DAYS = 146,                     /* DAYS  */
  YYSYMBOL_MONTHS = 147,                   /* MONTHS  */
  YYSYMBOL_YEARS = 148,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 149,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 150,                     /* TRUE  */
  YYSYMBOL_FALSE = 151,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 152,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 153,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 154,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 155,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 156,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 157,                     /* SKIP  */
  YYSYMBOL_LOCKED = 158,                   /* LOCKED  */
  YYSYMBOL_SHARE = 159,                    /* SHARE  */
  YYSYMBOL_160_ = 160,                     /* '='  */
  YYSYMBOL_EQUALS = 161,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 162,                /* NOTEQUALS  */
  YYSYMBOL_163_ = 163,                     /* '<'  */
  YYSYMBOL_164_ = 164,                     /* '>'  */
  YYSYMBOL_LESS = 165,                     /* LESS  */
  YYSYMBOL_GREATER = 166,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 167,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 168,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 169,                  /* NOTNULL  */
  YYSYMBOL_170_ = 170,                     /* '+'  */
  YYSYMBOL_171_ = 171,                     /* '-'  */
  YYSYMBOL_172_ = 172,                     /* '*'  */
  YYSYMBOL_173_ = 173,                     /* '/'  */
  YYSYMBOL_174_ = 174,                     /* '%'  */
  YYSYMBOL_175_ = 175,                     /* '^'  */
  YYSYMBOL_UMINUS = 176,                   /* UMINUS  */
  YYSYMBOL_177_ = 177,                     /* '['  */
  YYSYMBOL_178_ = 178,                     /* ']'  */
  YYSYMBOL_179_ = 179,                     /* '('  */
  YYSYMBOL_180_ = 180,                     /* ')'  */
  YYSYMBOL_181_ = 181,                     /* '.'  */
  YYSYMBOL_182_ = 182,                     /* ';'  */
  YYSYMBOL_183_ = 183,                     /* ','  */
  YYSYMBOL_184_ = 184,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 185,                 /* $accept  */
  YYSYMBOL_input = 186,                    /* input  */
  YYSYMBOL_statement_list = 187,           /* statement_list  */
  YYSYMBOL_statement = 188,                /* statement  */
  YYSYMBOL_preparable_statement = 189,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 190,                /* opt_hints  */
  YYSYMBOL_hint_list = 191,                /* hint_list  */
  YYSYMBOL_hint = 192,                     /* hint  */
  YYSYMBOL_transaction_statement = 193,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 194,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 195,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 196,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 197,        /* execute_statement  */
  YYSYMBOL_import_statement = 198,         /* import_statement  */
  YYSYMBOL_file_type = 199,                /* file_type  */
  YYSYMBOL_file_path = 200,                /* file_path  */
  YYSYMBOL_opt_file_type = 201,            /* opt_file_type  */
  YYSYMBOL_export_statement = 202,         /* export_statement  */
  YYSYMBOL_show_statement = 203,           /* show_statement  */
  YYSYMBOL_create_statement = 204,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 205,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 206,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 207,               /* table_elem  */
  YYSYMBOL_column_def = 208,               /* column_def  */
  YYSYMBOL_column_type = 209,              /* column_type  */
  YYSYMBOL_opt_time_precision = 210,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 211, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 212,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_list = 213,   /* column_constraint_list  */
  YYSYMBOL_column_constraint = 214,        /* column_constraint  */
  YYSYMBOL_table_constraint = 215,         /* table_constraint  */
  YYSYMBOL_drop_statement = 216,           /* drop_statement  */
  YYSYMBOL_opt_exists = 217,               /* opt_exists  */
  YYSYMBOL_alter_statement = 218,          /* alter_statement  */
  YYSYMBOL_alter_action = 219,             /* alter_action  */
  YYSYMBOL_drop_action = 220,              /* drop_action  */
  YYSYMBOL_delete_statement = 221,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 222,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 223,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 224,          /* opt_column_list  */
  YYSYMBOL_update_statement = 225,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 226,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 227,            /* update_clause  */
  YYSYMBOL_select_statement = 228,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 229, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 230, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 231,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 232,          /* select_no_paren  */
  YYSYMBOL_set_operator = 233,             /* set_operator  */
  YYSYMBOL_set_type = 234,                 /* set_type  */
  YYSYMBOL_opt_all = 235,                  /* opt_all  */
  YYSYMBOL_select_clause = 236,            /* select_clause  */
  YYSYMBOL_opt_distinct = 237,             /* opt_distinct  */
  YYSYMBOL_select_list = 238,              /* select_list  */
  YYSYMBOL_opt_from_clause = 239,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 240,              /* from_clause  */
  YYSYMBOL_opt_where = 241,                /* opt_where  */
  YYSYMBOL_opt_group = 242,                /* opt_group  */
  YYSYMBOL_opt_having = 243,               /* opt_having  */
  YYSYMBOL_opt_order = 244,                /* opt_order  */
  YYSYMBOL_order_list = 245,               /* order_list  */
  YYSYMBOL_order_desc = 246,               /* order_desc  */
  YYSYMBOL_opt_order_type = 247,           /* opt_order_type  */
  YYSYMBOL_opt_top = 248,                  /* opt_top  */
  YYSYMBOL_opt_limit = 249,                /* opt_limit  */
  YYSYMBOL_expr_list = 250,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 251,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 252,             /* literal_list  */
  YYSYMBOL_expr_alias = 253,               /* expr_alias  */
  YYSYMBOL_expr = 254,                     /* expr  */
  YYSYMBOL_operand = 255,                  /* operand  */
  YYSYMBOL_scalar_expr = 256,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 257,               /* unary_expr  */
  YYSYMBOL_binary_expr = 258,              /* binary_expr  */
  YYSYMBOL_logic_expr = 259,               /* logic_expr  */
  YYSYMBOL_in_expr = 260,                  /* in_expr  */
  YYSYMBOL_case_expr = 261,                /* case_expr  */
  YYSYMBOL_case_list = 262,                /* case_list  */
  YYSYMBOL_exists_expr = 263,              /* exists_expr  */
  YYSYMBOL_comp_expr = 264,                /* comp_expr  */
  YYSYMBOL_function_expr = 265,            /* function_expr  */
  YYSYMBOL_extract_expr = 266,             /* extract_expr  */
  YYSYMBOL_cast_expr = 267,                /* cast_expr  */
  YYSYMBOL_datetime_field = 268,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 269,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 270,           /* duration_field  */
  YYSYMBOL_array_expr = 271,               /* array_expr  */
  YYSYMBOL_array_index = 272,              /* array_index  */
  YYSYMBOL_between_expr = 273,             /* between_expr  */
  YYSYMBOL_column_name = 274,              /* column_name  */
  YYSYMBOL_literal = 275,                  /* literal  */
  YYSYMBOL_string_literal = 276,           /* string_literal  */
  YYSYMBOL_bool_literal = 277,             /* bool_literal  */
  YYSYMBOL_num_literal = 278,              /* num_literal  */
  YYSYMBOL_int_literal = 279,              /* int_literal  */
  YYSYMBOL_null_literal = 280,             /* null_literal  */
  YYSYMBOL_date_literal = 281,             /* date_literal  */
  YYSYMBOL_interval_literal = 282,         /* interval_literal  */
  YYSYMBOL_param_expr = 283,               /* param_expr  */
  YYSYMBOL_table_ref = 284,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 285,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 286, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 287,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 288,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 289,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 290,               /* table_name  */
  YYSYMBOL_opt_index_name = 291,           /* opt_index_name  */
  YYSYMBOL_table_alias = 292,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 293,          /* opt_table_alias  */
  YYSYMBOL_alias = 294,                    /* alias  */
  YYSYMBOL_opt_alias = 295,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 296,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 297,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 298,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 299,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 300,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 301,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 302,              /* with_clause  */
  YYSYMBOL_with_description_list = 303,    /* with_description_list  */
  YYSYMBOL_with_description = 304,         /* with_description  */
  YYSYMBOL_join_clause = 305,              /* join_clause  */
  YYSYMBOL_opt_join_type = 306,            /* opt_join_type  */
  YYSYMBOL_join_condition = 307,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 308,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 309           /* ident_commalist  */
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
#define YYLAST   946

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  185
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  316
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  570

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   422


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
       2,     2,     2,     2,     2,     2,     2,   174,     2,     2,
     179,   180,   172,   170,   183,   171,   181,   173,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   182,
     163,   160,   164,   184,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   177,     2,   178,   175,     2,     2,     2,     2,     2,
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
     155,   156,   157,   158,   159,   161,   162,   165,   166,   167,
     168,   169,   176
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   304,   304,   323,   329,   336,   340,   344,   345,   346,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     363,   364,   366,   370,   375,   379,   389,   390,   391,   393,
     393,   399,   405,   407,   411,   422,   428,   435,   450,   455,
     456,   462,   474,   475,   480,   491,   504,   515,   522,   529,
     538,   539,   541,   545,   550,   551,   553,   560,   561,   562,
     563,   564,   565,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   579,   580,   582,   583,   584,   586,   587,   589,
     593,   598,   599,   600,   601,   603,   604,   612,   618,   624,
     630,   636,   637,   644,   650,   652,   662,   669,   680,   687,
     695,   696,   703,   710,   714,   719,   729,   733,   737,   749,
     749,   751,   752,   761,   762,   764,   778,   790,   795,   799,
     803,   808,   809,   811,   821,   822,   824,   826,   827,   829,
     831,   832,   834,   839,   841,   842,   844,   845,   847,   851,
     856,   858,   859,   860,   864,   865,   867,   868,   869,   870,
     871,   872,   877,   881,   886,   887,   889,   893,   898,   906,
     906,   906,   906,   906,   908,   909,   909,   909,   909,   909,
     909,   909,   909,   910,   910,   914,   914,   916,   917,   918,
     919,   920,   922,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   933,   934,   936,   937,   938,   939,   943,
     944,   945,   946,   948,   949,   951,   952,   954,   955,   956,
     957,   958,   959,   960,   962,   963,   965,   967,   969,   970,
     971,   972,   973,   974,   976,   977,   978,   979,   980,   981,
     983,   983,   985,   987,   989,   991,   992,   993,   994,   996,
     996,   996,   996,   996,   996,   996,   998,  1000,  1001,  1003,
    1004,  1006,  1008,  1010,  1021,  1025,  1036,  1068,  1077,  1077,
    1084,  1084,  1086,  1086,  1093,  1097,  1102,  1110,  1116,  1120,
    1125,  1126,  1128,  1128,  1130,  1130,  1132,  1133,  1135,  1135,
    1141,  1142,  1144,  1148,  1153,  1159,  1166,  1167,  1168,  1169,
    1171,  1172,  1173,  1179,  1179,  1181,  1183,  1187,  1192,  1202,
    1209,  1217,  1233,  1234,  1235,  1236,  1237,  1238,  1239,  1240,
    1241,  1242,  1244,  1250,  1250,  1253,  1257
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
  "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "NO",
  "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS",
  "INTERVAL", "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT",
  "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE", "'='", "EQUALS",
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

#define YYPACT_NINF (-456)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-314)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     619,    16,    48,    72,   123,    48,   -11,   -38,    78,    87,
      48,   109,    48,   102,    33,   196,    51,    51,    51,   217,
      46,  -456,   132,  -456,   132,  -456,  -456,  -456,  -456,  -456,
    -456,  -456,  -456,  -456,  -456,  -456,  -456,   -31,  -456,   241,
      74,  -456,    82,   164,  -456,   142,   142,   142,    48,   273,
      48,   167,  -456,   170,   -59,   170,   170,   170,    48,  -456,
     178,   112,  -456,  -456,  -456,  -456,  -456,  -456,   614,  -456,
     207,  -456,  -456,   187,   -31,    57,  -456,   138,  -456,   306,
      75,   307,   192,   318,    48,    48,   246,  -456,   231,   154,
     332,   310,    48,   367,   367,   369,    48,    48,  -456,   195,
     196,  -456,   197,   376,   363,   204,   206,  -456,  -456,  -456,
     -31,   270,   262,   -31,   -10,  -456,  -456,  -456,  -456,   385,
    -456,   390,  -456,  -456,  -456,   215,   216,  -456,  -456,  -456,
    -456,   300,  -456,  -456,  -456,  -456,  -456,  -456,   355,  -456,
     271,   -54,   154,   333,  -456,   367,   399,    43,   248,   -53,
    -456,  -456,   316,   296,  -456,   296,  -456,  -456,  -456,  -456,
    -456,   406,  -456,  -456,   333,  -456,  -456,   334,  -456,  -456,
      57,  -456,  -456,   333,   334,   333,   129,   294,  -456,   203,
    -456,    75,  -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,
    -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,    48,   409,
     302,   150,   291,    96,   249,   250,   251,   247,   387,   272,
     419,  -456,   301,   -64,   445,  -456,  -456,  -456,  -456,  -456,
    -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,
    -456,   330,  -456,    47,   275,  -456,   333,   332,  -456,   417,
    -456,  -456,   408,  -456,  -456,   278,   137,  -456,   365,   276,
    -456,    42,   -10,   -31,   277,  -456,   -43,   -10,   -64,   407,
      24,    27,  -456,   294,  -456,  -456,  -456,   284,   372,  -456,
     828,   349,   290,   147,  -456,  -456,  -456,   302,    11,    13,
     413,   203,   333,   333,   156,    77,   297,   419,   655,   333,
      61,   295,   -83,   333,   333,   419,  -456,   419,    52,   299,
     -17,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   376,    48,  -456,   476,
      75,   -64,  -456,   170,   273,    75,  -456,   406,    15,   246,
    -456,   333,  -456,   478,  -456,  -456,  -456,  -456,   333,  -456,
    -456,  -456,   294,   333,   333,  -456,   327,   368,  -456,    90,
    -456,   399,   367,  -456,   309,  -456,   312,  -456,   313,  -456,
    -456,   314,  -456,  -456,  -456,  -456,   315,  -456,   101,   317,
     399,  -456,   150,  -456,  -456,   333,  -456,  -456,   319,   396,
      84,    76,   148,   333,   333,  -456,   413,   395,    91,  -456,
    -456,  -456,   383,   575,   676,   419,   321,   301,  -456,   398,
     325,   676,   676,   676,   676,   625,   625,   625,   625,    61,
      61,    45,    45,    45,   -95,   331,  -456,  -456,   149,   505,
    -456,   169,  -456,   302,  -456,    65,  -456,   328,  -456,    25,
    -456,   441,  -456,  -456,  -456,  -456,   -64,   -64,  -456,   451,
     399,  -456,   356,  -456,   171,  -456,   509,   510,  -456,   513,
     514,   518,  -456,   412,  -456,  -456,   422,  -456,   101,  -456,
     399,   173,  -456,   179,  -456,   333,   828,   333,   333,  -456,
     140,    98,   346,  -456,   419,   676,   301,   347,   180,  -456,
    -456,  -456,  -456,  -456,   348,   434,  -456,  -456,  -456,   457,
     458,   463,   443,    15,   539,  -456,  -456,  -456,   418,  -456,
    -456,   -96,  -456,  -456,   364,   181,   370,   374,   375,  -456,
    -456,  -456,   185,  -456,  -456,   -73,   377,   -64,   168,  -456,
     333,  -456,   655,   380,   186,  -456,  -456,    25,    15,  -456,
    -456,  -456,    15,   220,   373,   333,  -456,  -456,  -456,   541,
    -456,  -456,  -456,  -456,  -456,  -456,  -456,   -64,  -456,  -456,
    -456,  -456,   452,   399,   -29,   381,   384,   333,   190,   333,
    -456,  -456,    17,   -64,  -456,  -456,   -64,   386,   382,  -456
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     294,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     314,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   293,     0,
     268,    97,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   267,    92,     0,    92,    92,    92,     0,    42,
       0,   295,   296,    29,    26,    28,    27,     1,   294,     2,
       0,     6,     5,   145,     0,   106,   107,   137,    89,     0,
     155,     0,     0,   271,     0,     0,   131,    37,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   125,     0,     0,   119,   120,   118,
       0,   122,     0,     0,   151,   269,   246,   249,   251,     0,
     252,     0,   247,   248,   257,     0,   154,   156,   239,   240,
     241,   250,   242,   243,   244,   245,    32,    31,     0,   270,
       0,     0,   101,     0,    96,     0,     0,     0,     0,   131,
     103,    91,     0,    40,    38,    40,    90,    87,    88,   298,
     297,     0,   144,   124,     0,   114,   113,   137,   110,   109,
     111,   121,   117,     0,   137,     0,     0,   281,   253,   256,
      34,     0,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   254,    50,     0,     0,
     294,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   130,   159,   166,   167,   168,   161,   163,
     169,   162,   182,   170,   171,   172,   173,   165,   160,   175,
     176,     0,   315,     0,     0,    99,     0,     0,   102,     0,
      93,    94,     0,    36,    41,    24,     0,    22,   128,   126,
     152,   279,   151,     0,   136,   138,   143,   151,   147,   149,
     146,     0,   115,   280,   282,   255,   157,     0,     0,    47,
       0,     0,     0,     0,    52,    54,    55,   294,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
     177,     0,     0,     0,     0,     0,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,   105,   104,    92,     0,     0,    20,     0,     0,   131,
     127,     0,   277,     0,   278,   158,   108,   112,     0,   142,
     141,   140,   281,     0,     0,   286,     0,     0,   288,   292,
     283,     0,     0,    65,     0,    67,    76,    68,     0,    63,
      64,     0,    60,    61,    66,    69,    73,    57,    78,     0,
       0,    46,     0,    49,   214,     0,   236,   238,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,     0,   174,
     164,   193,   194,     0,   189,     0,     0,     0,   180,     0,
     192,   191,   207,   208,   209,   210,   211,   212,   213,   184,
     183,   186,   185,   187,   188,     0,    35,   316,     0,     0,
      39,     0,    23,   294,   129,   258,   260,     0,   262,   275,
     261,   133,   153,   276,   139,   116,   150,   148,   289,     0,
       0,   291,     0,   284,     0,    45,     0,     0,    62,     0,
       0,     0,    70,     0,    82,    83,     0,    56,    77,    79,
       0,     0,    53,     0,   205,     0,     0,     0,     0,   199,
       0,     0,     0,   232,     0,   190,     0,     0,     0,   181,
     233,    98,    95,    25,     0,     0,   310,   302,   308,   306,
     309,   304,     0,     0,     0,   274,   266,   272,     0,   123,
     287,   292,   290,    48,     0,     0,     0,     0,     0,    81,
      84,    80,     0,    86,   215,     0,     0,   203,     0,   202,
       0,   206,   234,     0,     0,   197,   195,   275,     0,   305,
     307,   303,     0,   259,   276,     0,   285,    59,    75,     0,
      71,    58,    72,    85,   216,   217,   200,   204,   198,   196,
     263,   299,   311,     0,   135,     0,     0,     0,     0,     0,
     132,    74,     0,   312,   300,   273,   134,   235,     0,   301
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -456,  -456,  -456,   480,  -456,   525,  -456,   229,  -456,   152,
    -456,  -456,  -456,  -456,   240,   -92,   420,  -456,  -456,  -456,
     111,  -456,   202,  -456,   110,  -456,  -456,  -456,  -456,   119,
    -456,  -456,   -50,  -456,  -456,  -456,  -456,  -456,  -456,   436,
    -456,  -456,   342,  -192,   -88,  -456,     0,   -71,   -41,  -456,
    -456,   -86,   305,  -456,  -456,  -456,  -137,  -456,  -456,  -111,
    -456,   254,  -456,  -456,    31,  -270,  -456,   -35,   253,  -143,
    -193,  -456,  -456,  -456,  -456,  -456,  -456,   303,  -456,  -456,
    -456,  -456,  -456,  -136,  -456,  -456,  -456,  -456,  -456,    23,
     -58,   -80,  -456,  -456,   -93,  -456,  -456,  -456,  -456,  -456,
    -455,    58,  -456,  -456,  -456,    -1,  -456,  -456,    62,   337,
    -456,   252,  -456,   336,  -456,    92,  -456,  -456,  -456,   495,
    -456,  -456,  -456,  -456,  -316
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   246,   247,    23,    64,
      24,   137,    25,    26,    88,   153,   243,    27,    28,    29,
      83,   273,   274,   275,   368,   452,   448,   457,   458,   459,
     276,    30,    92,    31,   240,   241,    32,    33,    34,   147,
      35,   149,   150,    36,   167,   168,   169,    76,   110,   111,
     172,    77,   164,   248,   329,   330,   144,   499,   560,   114,
     254,   255,   341,   104,   177,   249,   125,   126,   250,   251,
     214,   215,   216,   217,   218,   219,   220,   285,   221,   222,
     223,   224,   225,   194,   195,   196,   226,   227,   228,   229,
     230,   128,   129,   130,   131,   132,   133,   134,   135,   424,
     425,   426,   427,   428,    51,   429,   140,   495,   496,   497,
     335,   262,   263,   264,   349,   443,    37,    38,    61,    62,
     430,   492,   564,    69,   233
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     213,    41,   155,   106,    44,    95,    96,    97,   269,    52,
     162,    54,   238,   154,   154,   288,   376,   290,    40,   388,
     567,   559,   127,   163,   170,   174,    73,   170,   332,   143,
     256,   293,   258,   260,    93,   444,   113,    75,   533,   199,
     301,   293,    39,   265,   175,   332,   339,    86,   294,    89,
     293,    40,    58,   231,   461,    48,   252,    98,   294,    45,
     441,   442,   176,   257,   284,   154,   107,   294,    46,   292,
     200,   293,   340,    94,   105,    42,   235,   552,   344,   116,
     117,   118,   316,   141,   142,   373,   398,   319,   294,   345,
     485,   152,    59,   321,   288,   157,   158,   390,    47,   159,
      73,   108,   393,   399,   394,   463,   234,   544,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   266,   501,   201,    43,   478,   453,   253,
     237,   486,   203,   116,   117,   118,   487,   109,   293,   380,
     381,   291,   488,   489,   512,   379,   346,   107,    74,   494,
     391,   392,   395,   270,   331,   294,   293,    84,    85,   490,
     347,   454,   119,  -311,   491,   337,   333,   170,   383,    65,
      66,    49,    55,   294,   204,   205,   206,   271,   120,   396,
     301,    56,   108,   467,    50,   377,   348,   384,    53,   211,
     293,   374,   431,   385,   423,   256,   301,   267,   293,    60,
     436,   437,   475,    63,   455,   520,   524,   294,   466,   378,
     272,    57,   293,   207,   112,   294,   119,    67,   109,   440,
     315,   456,   316,   415,   121,   122,   123,   318,    68,   294,
     319,   484,   120,   312,   313,   314,   315,   558,   316,   468,
     470,   471,   259,    70,    78,   485,   441,   442,  -264,   208,
     203,   116,   117,   118,   293,    79,   519,    81,   384,   124,
     445,    80,   127,   209,   469,   554,   283,   127,    82,   473,
     293,   294,   154,   419,   331,   278,    87,   279,   121,   122,
     123,   522,   293,   336,   546,   418,   486,   294,   342,    90,
     421,   487,   204,   205,   206,   100,    91,   488,   489,   294,
     210,   211,    99,   102,   203,   116,   117,   118,   212,   115,
     103,   136,   138,   124,   490,   472,   416,   326,  -311,   491,
     327,   139,   515,   145,   517,   518,   477,   371,   143,   481,
     372,   207,   181,   146,   119,   148,   203,   116,   117,   118,
     182,   183,   184,   185,   186,   187,   204,   205,   206,   483,
     120,   503,   181,   513,   319,   151,   319,   283,    73,   514,
     526,   538,   331,   331,   539,   543,   549,   208,   319,   331,
     565,   116,   156,   319,    74,   163,   161,   547,   204,   205,
     206,   209,   118,   171,   165,   207,   166,   173,   119,   178,
     203,   116,   117,   118,   179,   180,   121,   122,   123,   181,
     197,   198,   232,  -265,   120,   523,   239,   242,   236,   245,
     112,   261,   268,    15,   563,   277,   566,   207,   210,   211,
     119,   208,   203,   116,   117,   118,   212,   317,   280,   281,
     282,   124,   286,   205,   206,   209,   120,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   289,
     121,   122,   123,   208,   320,   323,   324,   325,   328,   331,
     338,   343,   295,   351,   352,   205,   206,   209,   369,   370,
      73,   207,   210,   211,   119,   389,   386,   485,   397,   417,
     212,   433,   121,   122,   123,   124,   438,   439,   446,   465,
     120,   447,   449,   450,   451,   395,   460,   293,   296,   464,
     476,   479,   316,   207,   210,   211,   119,   287,   482,   480,
     498,   493,   212,   500,   502,   504,   505,   124,   486,   506,
     507,   209,   120,   487,   508,   510,   521,   525,   527,   488,
     489,   509,   528,   556,   529,   530,   121,   122,   123,   287,
     531,   532,   534,   535,   537,   297,   490,   555,   101,    72,
     540,   491,   553,   209,   541,   542,   422,   545,   210,   211,
     548,   561,   569,   562,   420,   298,   212,   279,   121,   122,
     123,   124,   299,   300,   462,   244,   516,   511,   202,   322,
     301,   302,   557,   375,   432,   568,   551,   382,   334,   550,
     210,   211,   434,   536,   435,   160,     0,     0,   212,   350,
       0,     0,     0,   124,     0,   303,   304,   305,   306,   307,
       0,     0,   308,   309,  -313,   310,   311,   312,   313,   314,
     315,     1,   316,     0,     0,     0,     1,     0,   296,     2,
       0,     0,     0,     0,     2,     0,     3,     0,     0,     0,
       4,     3,     0,     0,     0,     4,     0,     0,     0,     0,
       5,     0,     0,     6,     7,     5,     0,     0,     6,     7,
       0,     0,     0,     0,     0,     8,     9,     0,     0,     0,
       8,     9,     0,     0,     0,   297,    10,     0,   296,    11,
       0,    10,     0,     0,    11,     0,     0,     0,     0,   474,
       0,     0,     0,     0,     0,   387,     0,     0,     0,     0,
      12,     0,     0,   300,    13,    12,     0,     0,   296,    13,
     301,   302,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,     0,     0,    14,    15,     0,     0,     0,   296,
      15,     0,     0,     0,     0,   303,   304,   305,   306,   307,
       0,     0,   308,   309,     0,   310,   311,   312,   313,   314,
     315,     0,   316,   300,     0,   297,     0,     0,     0,     0,
     301,     0,     0,     0,     0,     0,     0,    16,    17,    18,
       0,     0,    16,    17,    18,   387,  -314,     0,     0,     0,
       0,     0,     0,   300,     0,     0,     0,     0,  -314,  -314,
     301,   302,  -314,  -314,     0,   310,   311,   312,   313,   314,
     315,     0,   316,     0,   300,     0,     0,     0,     0,     0,
       0,   301,  -314,     0,     0,   303,   304,   305,   306,   307,
       0,     0,   308,   309,     0,   310,   311,   312,   313,   314,
     315,     0,   316,     0,     0,     0,  -314,  -314,  -314,   306,
     307,     0,     0,   308,   309,     0,   310,   311,   312,   313,
     314,   315,   353,   316,     0,     0,     0,   354,   355,   356,
     357,     0,   358,     0,     0,     0,     0,     0,     0,     0,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   361,     0,   362,   363,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     364,     0,     0,     0,   365,     0,   366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367
};

static const yytype_int16 yycheck[] =
{
     143,     2,    94,    74,     5,    55,    56,    57,   200,    10,
     103,    12,   149,    93,    94,   208,     3,   210,     3,   289,
       3,    50,    80,    12,   110,   113,    57,   113,     3,    82,
     173,   114,   175,   176,    93,   351,    77,    37,   493,    93,
     135,   114,    26,   179,    54,     3,    89,    48,   131,    50,
     114,     3,    19,   145,   370,    93,   167,    58,   131,    70,
     156,   157,    72,   174,   207,   145,     9,   131,    79,   212,
     124,   114,   115,   132,    74,     3,   147,   532,    54,     4,
       5,     6,   177,    84,    85,   277,   103,   183,   131,    62,
      25,    92,    59,   236,   287,    96,    97,   180,   109,    99,
      57,    44,   295,   120,   297,   375,    63,   180,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   181,   440,   179,     3,   397,    27,   170,
     183,    66,     3,     4,     5,     6,    71,    80,   114,   282,
     283,   212,    77,    78,   460,   281,   119,     9,   179,   124,
     293,   294,   100,     3,   183,   131,   114,    46,    47,    94,
     133,    60,    87,    98,    99,   253,   124,   253,    91,    17,
      18,    93,    70,   131,    45,    46,    47,    27,   103,   127,
     135,    79,    44,   107,    97,   172,   159,   110,    79,   172,
     114,   180,   329,   116,   179,   338,   135,   198,   114,     3,
     343,   344,   395,   152,   103,   107,   476,   131,   124,   280,
      60,   109,   114,    84,    76,   131,    87,     0,    80,   129,
     175,   120,   177,   316,   149,   150,   151,   180,   182,   131,
     183,   423,   103,   172,   173,   174,   175,   553,   177,    91,
     383,   384,   113,   111,     3,    25,   156,   157,   183,   120,
       3,     4,     5,     6,   114,   181,   116,    93,   110,   184,
     352,   179,   320,   134,   116,   535,   110,   325,   126,   178,
     114,   131,   352,   323,   183,   179,     3,   181,   149,   150,
     151,   474,   114,   252,   116,   320,    66,   131,   257,   122,
     325,    71,    45,    46,    47,   183,   126,    77,    78,   131,
     171,   172,   124,    96,     3,     4,     5,     6,   179,     3,
     123,     4,   120,   184,    94,   386,   317,   180,    98,    99,
     183,     3,   465,    92,   467,   468,   397,   180,    82,   180,
     183,    84,   183,   179,    87,     3,     3,     4,     5,     6,
     137,   138,   139,   140,   141,   142,    45,    46,    47,   180,
     103,   180,   183,   180,   183,    45,   183,   110,    57,   180,
     180,   180,   183,   183,   183,   180,   180,   120,   183,   183,
     180,     4,     3,   183,   179,    12,   179,   520,    45,    46,
      47,   134,     6,   113,   180,    84,   180,   125,    87,     4,
       3,     4,     5,     6,     4,   180,   149,   150,   151,   183,
      45,   130,     3,   183,   103,   476,    90,   111,   160,     3,
      76,   117,     3,   111,   557,   124,   559,    84,   171,   172,
      87,   120,     3,     4,     5,     6,   179,    97,   179,   179,
     179,   184,    45,    46,    47,   134,   103,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   177,
     149,   150,   151,   120,   179,    38,    48,   179,    93,   183,
     183,    54,    17,   179,    92,    46,    47,   134,   119,   179,
      57,    84,   171,   172,    87,   180,   179,    25,   179,     3,
     179,     3,   149,   150,   151,   184,   159,   119,   179,    93,
     103,   179,   179,   179,   179,   100,   179,   114,    53,   180,
     179,   103,   177,    84,   171,   172,    87,   120,     3,   178,
      69,   183,   179,    62,   158,     6,     6,   184,    66,     6,
       6,   134,   103,    71,     6,   103,   180,   180,   180,    77,
      78,   119,    98,    81,    77,    77,   149,   150,   151,   120,
      77,    98,     3,   125,   180,   100,    94,     6,    68,    24,
     180,    99,   179,   134,   180,   180,   327,   180,   171,   172,
     180,   180,   180,   179,   324,   120,   179,   181,   149,   150,
     151,   184,   127,   128,   372,   155,   466,   458,   142,   237,
     135,   136,   130,   278,   331,   562,   528,   284,   251,   527,
     171,   172,   338,   501,   342,   100,    -1,    -1,   179,   263,
      -1,    -1,    -1,   184,    -1,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,     0,   170,   171,   172,   173,   174,
     175,     7,   177,    -1,    -1,    -1,     7,    -1,    53,    15,
      -1,    -1,    -1,    -1,    15,    -1,    22,    -1,    -1,    -1,
      26,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    39,    40,    36,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,   100,    62,    -1,    53,    65,
      -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      86,    -1,    -1,   128,    90,    86,    -1,    -1,    53,    90,
     135,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   105,   111,    -1,    -1,    -1,    53,
     111,    -1,    -1,    -1,    -1,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,    -1,   170,   171,   172,   173,   174,
     175,    -1,   177,   128,    -1,   100,    -1,    -1,    -1,    -1,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   153,   154,   155,
      -1,    -1,   153,   154,   155,   120,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,   163,   164,
     135,   136,   167,   168,    -1,   170,   171,   172,   173,   174,
     175,    -1,   177,    -1,   128,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,    -1,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,    -1,   170,   171,   172,   173,   174,
     175,    -1,   177,    -1,    -1,    -1,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,    -1,   170,   171,   172,   173,
     174,   175,    24,   177,    -1,    -1,    -1,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      62,    65,    86,    90,   105,   111,   153,   154,   155,   186,
     187,   188,   189,   193,   195,   197,   198,   202,   203,   204,
     216,   218,   221,   222,   223,   225,   228,   301,   302,    26,
       3,   290,     3,     3,   290,    70,    79,   109,    93,    93,
      97,   289,   290,    79,   290,    70,    79,   109,    19,    59,
       3,   303,   304,   152,   194,   194,   194,     0,   182,   308,
     111,   190,   190,    57,   179,   231,   232,   236,     3,   181,
     179,    93,   126,   205,   205,   205,   290,     3,   199,   290,
     122,   126,   217,    93,   132,   217,   217,   217,   290,   124,
     183,   188,    96,   123,   248,   231,   232,     9,    44,    80,
     233,   234,    76,   233,   244,     3,     4,     5,     6,    87,
     103,   149,   150,   151,   184,   251,   252,   275,   276,   277,
     278,   279,   280,   281,   282,   283,     4,   196,   120,     3,
     291,   290,   290,    82,   241,    92,   179,   224,     3,   226,
     227,    45,   290,   200,   276,   200,     3,   290,   290,   231,
     304,   179,   279,    12,   237,   180,   180,   229,   230,   231,
     236,   113,   235,   125,   229,    54,    72,   249,     4,     4,
     180,   183,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   268,   269,   270,    45,   130,    93,
     124,   179,   224,     3,    45,    46,    47,    84,   120,   134,
     171,   172,   179,   254,   255,   256,   257,   258,   259,   260,
     261,   263,   264,   265,   266,   267,   271,   272,   273,   274,
     275,   200,     3,   309,    63,   232,   160,   183,   241,    90,
     219,   220,   111,   201,   201,     3,   191,   192,   238,   250,
     253,   254,   244,   233,   245,   246,   254,   244,   254,   113,
     254,   117,   296,   297,   298,   268,   275,   290,     3,   228,
       3,    27,    60,   206,   207,   208,   215,   124,   179,   181,
     179,   179,   179,   110,   254,   262,    45,   120,   255,   177,
     255,   232,   254,   114,   131,    17,    53,   100,   120,   127,
     128,   135,   136,   160,   161,   162,   163,   164,   167,   168,
     170,   171,   172,   173,   174,   175,   177,    97,   180,   183,
     179,   254,   227,    38,    48,   179,   180,   183,    93,   239,
     240,   183,     3,   124,   294,   295,   249,   229,   183,    89,
     115,   247,   249,    54,    54,    62,   119,   133,   159,   299,
     298,   179,    92,    24,    29,    30,    31,    32,    34,    42,
      68,    85,    87,    88,   102,   106,   108,   118,   209,   119,
     179,   180,   183,   228,   180,   237,     3,   172,   232,   268,
     254,   254,   262,    91,   110,   116,   179,   120,   250,   180,
     180,   254,   254,   255,   255,   100,   127,   179,   103,   120,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   279,   290,     3,   252,   217,
     199,   252,   192,   179,   284,   285,   286,   287,   288,   290,
     305,   241,   253,     3,   246,   296,   254,   254,   159,   119,
     129,   156,   157,   300,   309,   200,   179,   179,   211,   179,
     179,   179,   210,    27,    60,   103,   120,   212,   213,   214,
     179,   309,   207,   250,   180,    93,   124,   107,    91,   116,
     254,   254,   232,   178,   114,   255,   179,   232,   250,   103,
     178,   180,     3,   180,   228,    25,    66,    71,    77,    78,
      94,    99,   306,   183,   124,   292,   293,   294,    69,   242,
      62,   309,   158,   180,     6,     6,     6,     6,     6,   119,
     103,   214,   309,   180,   180,   254,   209,   254,   254,   116,
     107,   180,   255,   232,   250,   180,   180,   180,    98,    77,
      77,    77,    98,   285,     3,   125,   300,   180,   180,   183,
     180,   180,   180,   180,   180,   180,   116,   254,   180,   180,
     293,   286,   285,   179,   250,     6,    81,   130,   309,    50,
     243,   180,   179,   254,   307,   180,   254,     3,   274,   180
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   185,   186,   187,   187,   188,   188,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   193,   193,   194,
     194,   195,   196,   197,   197,   198,   198,   199,   200,   201,
     201,   202,   203,   203,   203,   204,   204,   204,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   210,   210,   211,   211,   211,   212,   212,   213,
     213,   214,   214,   214,   214,   215,   215,   216,   216,   216,
     216,   217,   217,   218,   219,   220,   221,   222,   223,   223,
     224,   224,   225,   226,   226,   227,   228,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   234,   234,
     234,   235,   235,   236,   237,   237,   238,   239,   239,   240,
     241,   241,   242,   242,   243,   243,   244,   244,   245,   245,
     246,   247,   247,   247,   248,   248,   249,   249,   249,   249,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   254,
     254,   254,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   256,   256,   257,   257,   257,
     257,   257,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   259,   259,   260,   260,   260,   260,   261,
     261,   261,   261,   262,   262,   263,   263,   264,   264,   264,
     264,   264,   264,   264,   265,   265,   266,   267,   268,   268,
     268,   268,   268,   268,   269,   269,   269,   269,   269,   269,
     270,   270,   271,   272,   273,   274,   274,   274,   274,   275,
     275,   275,   275,   275,   275,   275,   276,   277,   277,   278,
     278,   279,   280,   281,   282,   282,   282,   283,   284,   284,
     285,   285,   286,   286,   287,   287,   288,   289,   290,   290,
     291,   291,   292,   292,   293,   293,   294,   294,   295,   295,
     296,   296,   297,   297,   298,   298,   299,   299,   299,   299,
     300,   300,   300,   301,   301,   302,   303,   303,   304,   305,
     305,   305,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   307,   308,   308,   309,   309
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
       1,     1,     3,     3,     3,     4,     6,     2,     1,     1,
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
       1,     0,     1,     2,     3,     5,     1,     3,     1,     2,
       2,     1,     0,     1,     0,     2,     1,     3,     3,     4,
       6,     8,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     0,     1,     1,     0,     1,     3
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
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2039 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2045 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 166 "bison_parser.y"
                { }
#line 2051 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 166 "bison_parser.y"
                { }
#line 2057 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2070 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2076 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2082 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2095 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2108 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2114 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2120 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2126 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2132 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2138 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2144 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 166 "bison_parser.y"
                { }
#line 2150 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2156 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 166 "bison_parser.y"
                { }
#line 2162 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2168 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2174 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2180 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 166 "bison_parser.y"
                { }
#line 2186 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2199 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2205 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2211 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 166 "bison_parser.y"
                { }
#line 2217 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 166 "bison_parser.y"
                { }
#line 2223 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2229 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 166 "bison_parser.y"
                { }
#line 2235 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_list: /* column_constraint_list  */
#line 166 "bison_parser.y"
                { }
#line 2241 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 166 "bison_parser.y"
                { }
#line 2247 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2253 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2259 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 166 "bison_parser.y"
                { }
#line 2265 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2271 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2277 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2283 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2289 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2295 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2301 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2314 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2320 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2333 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2339 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2345 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2351 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2357 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2363 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2369 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2375 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2381 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 166 "bison_parser.y"
                { }
#line 2387 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2393 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 166 "bison_parser.y"
                { }
#line 2399 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2412 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2418 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2424 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2430 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2436 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2442 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2455 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2468 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2474 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 166 "bison_parser.y"
                { }
#line 2480 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2486 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2492 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2505 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2518 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2531 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2537 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2549 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2555 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2561 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2567 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2573 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2579 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2585 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2591 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2597 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2603 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2609 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2615 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2621 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 166 "bison_parser.y"
                { }
#line 2627 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 166 "bison_parser.y"
                { }
#line 2633 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 166 "bison_parser.y"
                { }
#line 2639 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2645 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2651 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2657 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2663 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2669 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2675 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2681 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2687 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2693 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2699 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2705 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2711 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2717 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2723 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2729 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2735 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2748 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2754 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2760 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 167 "bison_parser.y"
                { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2766 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2772 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2778 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2784 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2790 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2796 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2802 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2808 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2814 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 166 "bison_parser.y"
                { }
#line 2820 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 166 "bison_parser.y"
                { }
#line 2826 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2832 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2838 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2844 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2850 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2856 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 166 "bison_parser.y"
                { }
#line 2862 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2868 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 169 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2881 "bison_parser.cpp"
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

#line 2989 "bison_parser.cpp"

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
#line 304 "bison_parser.y"
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
#line 3218 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 323 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3229 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 329 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3240 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 336 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3249 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 340 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3258 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 344 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3264 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 345 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3270 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 346 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3276 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 348 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3282 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 349 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3288 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 350 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3294 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 351 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3300 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 352 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3306 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 353 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3312 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 354 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3318 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 355 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3324 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 356 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3330 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 357 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3336 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 363 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3342 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 364 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3348 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 366 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3357 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 370 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3366 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 375 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3375 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 379 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3385 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 389 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3391 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 390 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3397 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 391 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3403 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 399 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3413 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 407 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3422 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 411 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3432 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 422 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3443 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 428 "bison_parser.y"
                                               {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3454 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 435 "bison_parser.y"
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
#line 3473 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 450 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3482 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 455 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3488 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 456 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3494 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 462 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3505 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 474 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3511 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 475 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3521 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 480 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3531 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 491 "bison_parser.y"
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
#line 3549 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 504 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
  if (result->errorMsg()) {
    YYERROR;
  }
}
#line 3565 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 515 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3577 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 522 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3589 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 529 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3602 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 538 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3608 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 539 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3614 "bison_parser.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 541 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3623 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 545 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3632 "bison_parser.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 550 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3638 "bison_parser.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 551 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3644 "bison_parser.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 553 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Mismatching nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3655 "bison_parser.cpp"
    break;

  case 57: /* column_type: INT  */
#line 560 "bison_parser.y"
                  { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3661 "bison_parser.cpp"
    break;

  case 58: /* column_type: CHAR '(' INTVAL ')'  */
#line 561 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3667 "bison_parser.cpp"
    break;

  case 59: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 562 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3673 "bison_parser.cpp"
    break;

  case 60: /* column_type: DATE  */
#line 563 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3679 "bison_parser.cpp"
    break;

  case 61: /* column_type: DATETIME  */
#line 564 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3685 "bison_parser.cpp"
    break;

  case 62: /* column_type: DECIMAL opt_decimal_specification  */
#line 565 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3694 "bison_parser.cpp"
    break;

  case 63: /* column_type: DOUBLE  */
#line 569 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3700 "bison_parser.cpp"
    break;

  case 64: /* column_type: FLOAT  */
#line 570 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3706 "bison_parser.cpp"
    break;

  case 65: /* column_type: INTEGER  */
#line 571 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3712 "bison_parser.cpp"
    break;

  case 66: /* column_type: LONG  */
#line 572 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3718 "bison_parser.cpp"
    break;

  case 67: /* column_type: REAL  */
#line 573 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3724 "bison_parser.cpp"
    break;

  case 68: /* column_type: SMALLINT  */
#line 574 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3730 "bison_parser.cpp"
    break;

  case 69: /* column_type: TEXT  */
#line 575 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3736 "bison_parser.cpp"
    break;

  case 70: /* column_type: TIME opt_time_precision  */
#line 576 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3742 "bison_parser.cpp"
    break;

  case 71: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 577 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3748 "bison_parser.cpp"
    break;

  case 72: /* opt_time_precision: '(' INTVAL ')'  */
#line 579 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3754 "bison_parser.cpp"
    break;

  case 73: /* opt_time_precision: %empty  */
#line 580 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3760 "bison_parser.cpp"
    break;

  case 74: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 582 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3766 "bison_parser.cpp"
    break;

  case 75: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 583 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3772 "bison_parser.cpp"
    break;

  case 76: /* opt_decimal_specification: %empty  */
#line 584 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3778 "bison_parser.cpp"
    break;

  case 77: /* opt_column_constraints: column_constraint_list  */
#line 586 "bison_parser.y"
                                                { (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec); }
#line 3784 "bison_parser.cpp"
    break;

  case 78: /* opt_column_constraints: %empty  */
#line 587 "bison_parser.y"
              { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3790 "bison_parser.cpp"
    break;

  case 79: /* column_constraint_list: column_constraint  */
#line 589 "bison_parser.y"
                                           {
  (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
  (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
}
#line 3799 "bison_parser.cpp"
    break;

  case 80: /* column_constraint_list: column_constraint_list column_constraint  */
#line 593 "bison_parser.y"
                                           {
  (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec);
}
#line 3808 "bison_parser.cpp"
    break;

  case 81: /* column_constraint: PRIMARY KEY  */
#line 598 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3814 "bison_parser.cpp"
    break;

  case 82: /* column_constraint: UNIQUE  */
#line 599 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3820 "bison_parser.cpp"
    break;

  case 83: /* column_constraint: NULL  */
#line 600 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3826 "bison_parser.cpp"
    break;

  case 84: /* column_constraint: NOT NULL  */
#line 601 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3832 "bison_parser.cpp"
    break;

  case 85: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 603 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3838 "bison_parser.cpp"
    break;

  case 86: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 604 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3844 "bison_parser.cpp"
    break;

  case 87: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 612 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3855 "bison_parser.cpp"
    break;

  case 88: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 618 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3866 "bison_parser.cpp"
    break;

  case 89: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 624 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3876 "bison_parser.cpp"
    break;

  case 90: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 630 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3886 "bison_parser.cpp"
    break;

  case 91: /* opt_exists: IF EXISTS  */
#line 636 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3892 "bison_parser.cpp"
    break;

  case 92: /* opt_exists: %empty  */
#line 637 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3898 "bison_parser.cpp"
    break;

  case 93: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 644 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3908 "bison_parser.cpp"
    break;

  case 94: /* alter_action: drop_action  */
#line 650 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3914 "bison_parser.cpp"
    break;

  case 95: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 652 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3923 "bison_parser.cpp"
    break;

  case 96: /* delete_statement: DELETE FROM table_name opt_where  */
#line 662 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3934 "bison_parser.cpp"
    break;

  case 97: /* truncate_statement: TRUNCATE table_name  */
#line 669 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3944 "bison_parser.cpp"
    break;

  case 98: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 680 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 3956 "bison_parser.cpp"
    break;

  case 99: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 687 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3968 "bison_parser.cpp"
    break;

  case 100: /* opt_column_list: '(' ident_commalist ')'  */
#line 695 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3974 "bison_parser.cpp"
    break;

  case 101: /* opt_column_list: %empty  */
#line 696 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 3980 "bison_parser.cpp"
    break;

  case 102: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 703 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 3991 "bison_parser.cpp"
    break;

  case 103: /* update_clause_commalist: update_clause  */
#line 710 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4000 "bison_parser.cpp"
    break;

  case 104: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 714 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4009 "bison_parser.cpp"
    break;

  case 105: /* update_clause: IDENTIFIER '=' expr  */
#line 719 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4019 "bison_parser.cpp"
    break;

  case 106: /* select_statement: opt_with_clause select_with_paren  */
#line 729 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4028 "bison_parser.cpp"
    break;

  case 107: /* select_statement: opt_with_clause select_no_paren  */
#line 733 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4037 "bison_parser.cpp"
    break;

  case 108: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 737 "bison_parser.y"
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
#line 4053 "bison_parser.cpp"
    break;

  case 111: /* select_within_set_operation_no_parentheses: select_clause  */
#line 751 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4059 "bison_parser.cpp"
    break;

  case 112: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 752 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4072 "bison_parser.cpp"
    break;

  case 113: /* select_with_paren: '(' select_no_paren ')'  */
#line 761 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4078 "bison_parser.cpp"
    break;

  case 114: /* select_with_paren: '(' select_with_paren ')'  */
#line 762 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4084 "bison_parser.cpp"
    break;

  case 115: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 764 "bison_parser.y"
                                                                       {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit) != nullptr) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec) != nullptr) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4103 "bison_parser.cpp"
    break;

  case 116: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 778 "bison_parser.y"
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
#line 4119 "bison_parser.cpp"
    break;

  case 117: /* set_operator: set_type opt_all  */
#line 790 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4128 "bison_parser.cpp"
    break;

  case 118: /* set_type: UNION  */
#line 795 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4137 "bison_parser.cpp"
    break;

  case 119: /* set_type: INTERSECT  */
#line 799 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4146 "bison_parser.cpp"
    break;

  case 120: /* set_type: EXCEPT  */
#line 803 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4155 "bison_parser.cpp"
    break;

  case 121: /* opt_all: ALL  */
#line 808 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4161 "bison_parser.cpp"
    break;

  case 122: /* opt_all: %empty  */
#line 809 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4167 "bison_parser.cpp"
    break;

  case 123: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 811 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4181 "bison_parser.cpp"
    break;

  case 124: /* opt_distinct: DISTINCT  */
#line 821 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4187 "bison_parser.cpp"
    break;

  case 125: /* opt_distinct: %empty  */
#line 822 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4193 "bison_parser.cpp"
    break;

  case 127: /* opt_from_clause: from_clause  */
#line 826 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4199 "bison_parser.cpp"
    break;

  case 128: /* opt_from_clause: %empty  */
#line 827 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4205 "bison_parser.cpp"
    break;

  case 129: /* from_clause: FROM table_ref  */
#line 829 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4211 "bison_parser.cpp"
    break;

  case 130: /* opt_where: WHERE expr  */
#line 831 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4217 "bison_parser.cpp"
    break;

  case 131: /* opt_where: %empty  */
#line 832 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4223 "bison_parser.cpp"
    break;

  case 132: /* opt_group: GROUP BY expr_list opt_having  */
#line 834 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4233 "bison_parser.cpp"
    break;

  case 133: /* opt_group: %empty  */
#line 839 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4239 "bison_parser.cpp"
    break;

  case 134: /* opt_having: HAVING expr  */
#line 841 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4245 "bison_parser.cpp"
    break;

  case 135: /* opt_having: %empty  */
#line 842 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4251 "bison_parser.cpp"
    break;

  case 136: /* opt_order: ORDER BY order_list  */
#line 844 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4257 "bison_parser.cpp"
    break;

  case 137: /* opt_order: %empty  */
#line 845 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4263 "bison_parser.cpp"
    break;

  case 138: /* order_list: order_desc  */
#line 847 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4272 "bison_parser.cpp"
    break;

  case 139: /* order_list: order_list ',' order_desc  */
#line 851 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4281 "bison_parser.cpp"
    break;

  case 140: /* order_desc: expr opt_order_type  */
#line 856 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4287 "bison_parser.cpp"
    break;

  case 141: /* opt_order_type: ASC  */
#line 858 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4293 "bison_parser.cpp"
    break;

  case 142: /* opt_order_type: DESC  */
#line 859 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4299 "bison_parser.cpp"
    break;

  case 143: /* opt_order_type: %empty  */
#line 860 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4305 "bison_parser.cpp"
    break;

  case 144: /* opt_top: TOP int_literal  */
#line 864 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4311 "bison_parser.cpp"
    break;

  case 145: /* opt_top: %empty  */
#line 865 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4317 "bison_parser.cpp"
    break;

  case 146: /* opt_limit: LIMIT expr  */
#line 867 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4323 "bison_parser.cpp"
    break;

  case 147: /* opt_limit: OFFSET expr  */
#line 868 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4329 "bison_parser.cpp"
    break;

  case 148: /* opt_limit: LIMIT expr OFFSET expr  */
#line 869 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4335 "bison_parser.cpp"
    break;

  case 149: /* opt_limit: LIMIT ALL  */
#line 870 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4341 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 871 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4347 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: %empty  */
#line 872 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4353 "bison_parser.cpp"
    break;

  case 152: /* expr_list: expr_alias  */
#line 877 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4362 "bison_parser.cpp"
    break;

  case 153: /* expr_list: expr_list ',' expr_alias  */
#line 881 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4371 "bison_parser.cpp"
    break;

  case 154: /* opt_literal_list: literal_list  */
#line 886 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4377 "bison_parser.cpp"
    break;

  case 155: /* opt_literal_list: %empty  */
#line 887 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4383 "bison_parser.cpp"
    break;

  case 156: /* literal_list: literal  */
#line 889 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4392 "bison_parser.cpp"
    break;

  case 157: /* literal_list: literal_list ',' literal  */
#line 893 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4401 "bison_parser.cpp"
    break;

  case 158: /* expr_alias: expr opt_alias  */
#line 898 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4413 "bison_parser.cpp"
    break;

  case 164: /* operand: '(' expr ')'  */
#line 908 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4419 "bison_parser.cpp"
    break;

  case 174: /* operand: '(' select_no_paren ')'  */
#line 910 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4427 "bison_parser.cpp"
    break;

  case 177: /* unary_expr: '-' operand  */
#line 916 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4433 "bison_parser.cpp"
    break;

  case 178: /* unary_expr: NOT operand  */
#line 917 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4439 "bison_parser.cpp"
    break;

  case 179: /* unary_expr: operand ISNULL  */
#line 918 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4445 "bison_parser.cpp"
    break;

  case 180: /* unary_expr: operand IS NULL  */
#line 919 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4451 "bison_parser.cpp"
    break;

  case 181: /* unary_expr: operand IS NOT NULL  */
#line 920 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4457 "bison_parser.cpp"
    break;

  case 183: /* binary_expr: operand '-' operand  */
#line 922 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4463 "bison_parser.cpp"
    break;

  case 184: /* binary_expr: operand '+' operand  */
#line 923 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4469 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand '/' operand  */
#line 924 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4475 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand '*' operand  */
#line 925 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4481 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand '%' operand  */
#line 926 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4487 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '^' operand  */
#line 927 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4493 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand LIKE operand  */
#line 928 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4499 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand NOT LIKE operand  */
#line 929 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4505 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand ILIKE operand  */
#line 930 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4511 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand CONCAT operand  */
#line 931 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4517 "bison_parser.cpp"
    break;

  case 193: /* logic_expr: expr AND expr  */
#line 933 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4523 "bison_parser.cpp"
    break;

  case 194: /* logic_expr: expr OR expr  */
#line 934 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4529 "bison_parser.cpp"
    break;

  case 195: /* in_expr: operand IN '(' expr_list ')'  */
#line 936 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4535 "bison_parser.cpp"
    break;

  case 196: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 937 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4541 "bison_parser.cpp"
    break;

  case 197: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 938 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4547 "bison_parser.cpp"
    break;

  case 198: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 939 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4553 "bison_parser.cpp"
    break;

  case 199: /* case_expr: CASE expr case_list END  */
#line 943 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4559 "bison_parser.cpp"
    break;

  case 200: /* case_expr: CASE expr case_list ELSE expr END  */
#line 944 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4565 "bison_parser.cpp"
    break;

  case 201: /* case_expr: CASE case_list END  */
#line 945 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4571 "bison_parser.cpp"
    break;

  case 202: /* case_expr: CASE case_list ELSE expr END  */
#line 946 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4577 "bison_parser.cpp"
    break;

  case 203: /* case_list: WHEN expr THEN expr  */
#line 948 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4583 "bison_parser.cpp"
    break;

  case 204: /* case_list: case_list WHEN expr THEN expr  */
#line 949 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4589 "bison_parser.cpp"
    break;

  case 205: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 951 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4595 "bison_parser.cpp"
    break;

  case 206: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 952 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4601 "bison_parser.cpp"
    break;

  case 207: /* comp_expr: operand '=' operand  */
#line 954 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4607 "bison_parser.cpp"
    break;

  case 208: /* comp_expr: operand EQUALS operand  */
#line 955 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4613 "bison_parser.cpp"
    break;

  case 209: /* comp_expr: operand NOTEQUALS operand  */
#line 956 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4619 "bison_parser.cpp"
    break;

  case 210: /* comp_expr: operand '<' operand  */
#line 957 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4625 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand '>' operand  */
#line 958 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4631 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand LESSEQ operand  */
#line 959 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4637 "bison_parser.cpp"
    break;

  case 213: /* comp_expr: operand GREATEREQ operand  */
#line 960 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4643 "bison_parser.cpp"
    break;

  case 214: /* function_expr: IDENTIFIER '(' ')'  */
#line 962 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4649 "bison_parser.cpp"
    break;

  case 215: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 963 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4655 "bison_parser.cpp"
    break;

  case 216: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 965 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4661 "bison_parser.cpp"
    break;

  case 217: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 967 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4667 "bison_parser.cpp"
    break;

  case 218: /* datetime_field: SECOND  */
#line 969 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4673 "bison_parser.cpp"
    break;

  case 219: /* datetime_field: MINUTE  */
#line 970 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4679 "bison_parser.cpp"
    break;

  case 220: /* datetime_field: HOUR  */
#line 971 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4685 "bison_parser.cpp"
    break;

  case 221: /* datetime_field: DAY  */
#line 972 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4691 "bison_parser.cpp"
    break;

  case 222: /* datetime_field: MONTH  */
#line 973 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4697 "bison_parser.cpp"
    break;

  case 223: /* datetime_field: YEAR  */
#line 974 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4703 "bison_parser.cpp"
    break;

  case 224: /* datetime_field_plural: SECONDS  */
#line 976 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4709 "bison_parser.cpp"
    break;

  case 225: /* datetime_field_plural: MINUTES  */
#line 977 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4715 "bison_parser.cpp"
    break;

  case 226: /* datetime_field_plural: HOURS  */
#line 978 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4721 "bison_parser.cpp"
    break;

  case 227: /* datetime_field_plural: DAYS  */
#line 979 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4727 "bison_parser.cpp"
    break;

  case 228: /* datetime_field_plural: MONTHS  */
#line 980 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4733 "bison_parser.cpp"
    break;

  case 229: /* datetime_field_plural: YEARS  */
#line 981 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4739 "bison_parser.cpp"
    break;

  case 232: /* array_expr: ARRAY '[' expr_list ']'  */
#line 985 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4745 "bison_parser.cpp"
    break;

  case 233: /* array_index: operand '[' int_literal ']'  */
#line 987 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4751 "bison_parser.cpp"
    break;

  case 234: /* between_expr: operand BETWEEN operand AND operand  */
#line 989 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4757 "bison_parser.cpp"
    break;

  case 235: /* column_name: IDENTIFIER  */
#line 991 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4763 "bison_parser.cpp"
    break;

  case 236: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 992 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4769 "bison_parser.cpp"
    break;

  case 237: /* column_name: '*'  */
#line 993 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4775 "bison_parser.cpp"
    break;

  case 238: /* column_name: IDENTIFIER '.' '*'  */
#line 994 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4781 "bison_parser.cpp"
    break;

  case 246: /* string_literal: STRING  */
#line 998 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4787 "bison_parser.cpp"
    break;

  case 247: /* bool_literal: TRUE  */
#line 1000 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4793 "bison_parser.cpp"
    break;

  case 248: /* bool_literal: FALSE  */
#line 1001 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4799 "bison_parser.cpp"
    break;

  case 249: /* num_literal: FLOATVAL  */
#line 1003 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4805 "bison_parser.cpp"
    break;

  case 251: /* int_literal: INTVAL  */
#line 1006 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4811 "bison_parser.cpp"
    break;

  case 252: /* null_literal: NULL  */
#line 1008 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4817 "bison_parser.cpp"
    break;

  case 253: /* date_literal: DATE STRING  */
#line 1010 "bison_parser.y"
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
#line 4832 "bison_parser.cpp"
    break;

  case 254: /* interval_literal: int_literal duration_field  */
#line 1021 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4841 "bison_parser.cpp"
    break;

  case 255: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1025 "bison_parser.y"
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
#line 4857 "bison_parser.cpp"
    break;

  case 256: /* interval_literal: INTERVAL STRING  */
#line 1036 "bison_parser.y"
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
#line 4893 "bison_parser.cpp"
    break;

  case 257: /* param_expr: '?'  */
#line 1068 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4903 "bison_parser.cpp"
    break;

  case 259: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1077 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 4914 "bison_parser.cpp"
    break;

  case 263: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1086 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4925 "bison_parser.cpp"
    break;

  case 264: /* table_ref_commalist: table_ref_atomic  */
#line 1093 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 4934 "bison_parser.cpp"
    break;

  case 265: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1097 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 4943 "bison_parser.cpp"
    break;

  case 266: /* table_ref_name: table_name opt_table_alias  */
#line 1102 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4955 "bison_parser.cpp"
    break;

  case 267: /* table_ref_name_no_alias: table_name  */
#line 1110 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 4965 "bison_parser.cpp"
    break;

  case 268: /* table_name: IDENTIFIER  */
#line 1116 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4974 "bison_parser.cpp"
    break;

  case 269: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1120 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4983 "bison_parser.cpp"
    break;

  case 270: /* opt_index_name: IDENTIFIER  */
#line 1125 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 4989 "bison_parser.cpp"
    break;

  case 271: /* opt_index_name: %empty  */
#line 1126 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 4995 "bison_parser.cpp"
    break;

  case 273: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1128 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5001 "bison_parser.cpp"
    break;

  case 275: /* opt_table_alias: %empty  */
#line 1130 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5007 "bison_parser.cpp"
    break;

  case 276: /* alias: AS IDENTIFIER  */
#line 1132 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5013 "bison_parser.cpp"
    break;

  case 277: /* alias: IDENTIFIER  */
#line 1133 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5019 "bison_parser.cpp"
    break;

  case 279: /* opt_alias: %empty  */
#line 1135 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5025 "bison_parser.cpp"
    break;

  case 280: /* opt_locking_clause: opt_locking_clause_list  */
#line 1141 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5031 "bison_parser.cpp"
    break;

  case 281: /* opt_locking_clause: %empty  */
#line 1142 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5037 "bison_parser.cpp"
    break;

  case 282: /* opt_locking_clause_list: locking_clause  */
#line 1144 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5046 "bison_parser.cpp"
    break;

  case 283: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1148 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5055 "bison_parser.cpp"
    break;

  case 284: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1153 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5066 "bison_parser.cpp"
    break;

  case 285: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1159 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5077 "bison_parser.cpp"
    break;

  case 286: /* row_lock_mode: UPDATE  */
#line 1166 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5083 "bison_parser.cpp"
    break;

  case 287: /* row_lock_mode: NO KEY UPDATE  */
#line 1167 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5089 "bison_parser.cpp"
    break;

  case 288: /* row_lock_mode: SHARE  */
#line 1168 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5095 "bison_parser.cpp"
    break;

  case 289: /* row_lock_mode: KEY SHARE  */
#line 1169 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5101 "bison_parser.cpp"
    break;

  case 290: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1171 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5107 "bison_parser.cpp"
    break;

  case 291: /* opt_row_lock_policy: NOWAIT  */
#line 1172 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5113 "bison_parser.cpp"
    break;

  case 292: /* opt_row_lock_policy: %empty  */
#line 1173 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5119 "bison_parser.cpp"
    break;

  case 294: /* opt_with_clause: %empty  */
#line 1179 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5125 "bison_parser.cpp"
    break;

  case 295: /* with_clause: WITH with_description_list  */
#line 1181 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5131 "bison_parser.cpp"
    break;

  case 296: /* with_description_list: with_description  */
#line 1183 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5140 "bison_parser.cpp"
    break;

  case 297: /* with_description_list: with_description_list ',' with_description  */
#line 1187 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5149 "bison_parser.cpp"
    break;

  case 298: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1192 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5159 "bison_parser.cpp"
    break;

  case 299: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1202 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5171 "bison_parser.cpp"
    break;

  case 300: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1209 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5184 "bison_parser.cpp"
    break;

  case 301: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1217 "bison_parser.y"
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
#line 5204 "bison_parser.cpp"
    break;

  case 302: /* opt_join_type: INNER  */
#line 1233 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5210 "bison_parser.cpp"
    break;

  case 303: /* opt_join_type: LEFT OUTER  */
#line 1234 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5216 "bison_parser.cpp"
    break;

  case 304: /* opt_join_type: LEFT  */
#line 1235 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5222 "bison_parser.cpp"
    break;

  case 305: /* opt_join_type: RIGHT OUTER  */
#line 1236 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5228 "bison_parser.cpp"
    break;

  case 306: /* opt_join_type: RIGHT  */
#line 1237 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5234 "bison_parser.cpp"
    break;

  case 307: /* opt_join_type: FULL OUTER  */
#line 1238 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5240 "bison_parser.cpp"
    break;

  case 308: /* opt_join_type: OUTER  */
#line 1239 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5246 "bison_parser.cpp"
    break;

  case 309: /* opt_join_type: FULL  */
#line 1240 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5252 "bison_parser.cpp"
    break;

  case 310: /* opt_join_type: CROSS  */
#line 1241 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5258 "bison_parser.cpp"
    break;

  case 311: /* opt_join_type: %empty  */
#line 1242 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5264 "bison_parser.cpp"
    break;

  case 315: /* ident_commalist: IDENTIFIER  */
#line 1253 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5273 "bison_parser.cpp"
    break;

  case 316: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1257 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5282 "bison_parser.cpp"
    break;


#line 5286 "bison_parser.cpp"

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

#line 1263 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
