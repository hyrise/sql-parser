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
  YYSYMBOL_OUTER = 78,                     /* OUTER  */
  YYSYMBOL_RIGHT = 79,                     /* RIGHT  */
  YYSYMBOL_TABLE = 80,                     /* TABLE  */
  YYSYMBOL_UNION = 81,                     /* UNION  */
  YYSYMBOL_USING = 82,                     /* USING  */
  YYSYMBOL_WHERE = 83,                     /* WHERE  */
  YYSYMBOL_CALL = 84,                      /* CALL  */
  YYSYMBOL_CASE = 85,                      /* CASE  */
  YYSYMBOL_CHAR = 86,                      /* CHAR  */
  YYSYMBOL_COPY = 87,                      /* COPY  */
  YYSYMBOL_DATE = 88,                      /* DATE  */
  YYSYMBOL_DATETIME = 89,                  /* DATETIME  */
  YYSYMBOL_DESC = 90,                      /* DESC  */
  YYSYMBOL_DROP = 91,                      /* DROP  */
  YYSYMBOL_ELSE = 92,                      /* ELSE  */
  YYSYMBOL_FILE = 93,                      /* FILE  */
  YYSYMBOL_FROM = 94,                      /* FROM  */
  YYSYMBOL_FULL = 95,                      /* FULL  */
  YYSYMBOL_HASH = 96,                      /* HASH  */
  YYSYMBOL_HINT = 97,                      /* HINT  */
  YYSYMBOL_INTO = 98,                      /* INTO  */
  YYSYMBOL_JOIN = 99,                      /* JOIN  */
  YYSYMBOL_LEFT = 100,                     /* LEFT  */
  YYSYMBOL_LIKE = 101,                     /* LIKE  */
  YYSYMBOL_LOAD = 102,                     /* LOAD  */
  YYSYMBOL_LONG = 103,                     /* LONG  */
  YYSYMBOL_NULL = 104,                     /* NULL  */
  YYSYMBOL_PLAN = 105,                     /* PLAN  */
  YYSYMBOL_SHOW = 106,                     /* SHOW  */
  YYSYMBOL_TEXT = 107,                     /* TEXT  */
  YYSYMBOL_THEN = 108,                     /* THEN  */
  YYSYMBOL_TIME = 109,                     /* TIME  */
  YYSYMBOL_VIEW = 110,                     /* VIEW  */
  YYSYMBOL_WHEN = 111,                     /* WHEN  */
  YYSYMBOL_WITH = 112,                     /* WITH  */
  YYSYMBOL_ADD = 113,                      /* ADD  */
  YYSYMBOL_ALL = 114,                      /* ALL  */
  YYSYMBOL_AND = 115,                      /* AND  */
  YYSYMBOL_ASC = 116,                      /* ASC  */
  YYSYMBOL_END = 117,                      /* END  */
  YYSYMBOL_FOR = 118,                      /* FOR  */
  YYSYMBOL_INT = 119,                      /* INT  */
  YYSYMBOL_KEY = 120,                      /* KEY  */
  YYSYMBOL_NOT = 121,                      /* NOT  */
  YYSYMBOL_OFF = 122,                      /* OFF  */
  YYSYMBOL_SET = 123,                      /* SET  */
  YYSYMBOL_TOP = 124,                      /* TOP  */
  YYSYMBOL_AS = 125,                       /* AS  */
  YYSYMBOL_BY = 126,                       /* BY  */
  YYSYMBOL_IF = 127,                       /* IF  */
  YYSYMBOL_IN = 128,                       /* IN  */
  YYSYMBOL_IS = 129,                       /* IS  */
  YYSYMBOL_OF = 130,                       /* OF  */
  YYSYMBOL_ON = 131,                       /* ON  */
  YYSYMBOL_OR = 132,                       /* OR  */
  YYSYMBOL_TO = 133,                       /* TO  */
  YYSYMBOL_NO = 134,                       /* NO  */
  YYSYMBOL_ARRAY = 135,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 136,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 137,                    /* ILIKE  */
  YYSYMBOL_SECOND = 138,                   /* SECOND  */
  YYSYMBOL_MINUTE = 139,                   /* MINUTE  */
  YYSYMBOL_HOUR = 140,                     /* HOUR  */
  YYSYMBOL_DAY = 141,                      /* DAY  */
  YYSYMBOL_MONTH = 142,                    /* MONTH  */
  YYSYMBOL_YEAR = 143,                     /* YEAR  */
  YYSYMBOL_SECONDS = 144,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 145,                  /* MINUTES  */
  YYSYMBOL_HOURS = 146,                    /* HOURS  */
  YYSYMBOL_DAYS = 147,                     /* DAYS  */
  YYSYMBOL_MONTHS = 148,                   /* MONTHS  */
  YYSYMBOL_YEARS = 149,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 150,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 151,                     /* TRUE  */
  YYSYMBOL_FALSE = 152,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 153,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 154,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 155,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 156,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 157,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 158,                     /* SKIP  */
  YYSYMBOL_LOCKED = 159,                   /* LOCKED  */
  YYSYMBOL_SHARE = 160,                    /* SHARE  */
  YYSYMBOL_161_ = 161,                     /* '='  */
  YYSYMBOL_EQUALS = 162,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 163,                /* NOTEQUALS  */
  YYSYMBOL_164_ = 164,                     /* '<'  */
  YYSYMBOL_165_ = 165,                     /* '>'  */
  YYSYMBOL_LESS = 166,                     /* LESS  */
  YYSYMBOL_GREATER = 167,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 168,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 169,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 170,                  /* NOTNULL  */
  YYSYMBOL_171_ = 171,                     /* '+'  */
  YYSYMBOL_172_ = 172,                     /* '-'  */
  YYSYMBOL_173_ = 173,                     /* '*'  */
  YYSYMBOL_174_ = 174,                     /* '/'  */
  YYSYMBOL_175_ = 175,                     /* '%'  */
  YYSYMBOL_176_ = 176,                     /* '^'  */
  YYSYMBOL_UMINUS = 177,                   /* UMINUS  */
  YYSYMBOL_178_ = 178,                     /* '['  */
  YYSYMBOL_179_ = 179,                     /* ']'  */
  YYSYMBOL_180_ = 180,                     /* '('  */
  YYSYMBOL_181_ = 181,                     /* ')'  */
  YYSYMBOL_182_ = 182,                     /* '.'  */
  YYSYMBOL_183_ = 183,                     /* ';'  */
  YYSYMBOL_184_ = 184,                     /* ','  */
  YYSYMBOL_185_ = 185,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 186,                 /* $accept  */
  YYSYMBOL_input = 187,                    /* input  */
  YYSYMBOL_statement_list = 188,           /* statement_list  */
  YYSYMBOL_statement = 189,                /* statement  */
  YYSYMBOL_preparable_statement = 190,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 191,                /* opt_hints  */
  YYSYMBOL_hint_list = 192,                /* hint_list  */
  YYSYMBOL_hint = 193,                     /* hint  */
  YYSYMBOL_transaction_statement = 194,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 195,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 196,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 197,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 198,        /* execute_statement  */
  YYSYMBOL_import_statement = 199,         /* import_statement  */
  YYSYMBOL_file_type = 200,                /* file_type  */
  YYSYMBOL_file_path = 201,                /* file_path  */
  YYSYMBOL_opt_file_type = 202,            /* opt_file_type  */
  YYSYMBOL_export_statement = 203,         /* export_statement  */
  YYSYMBOL_show_statement = 204,           /* show_statement  */
  YYSYMBOL_create_statement = 205,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 206,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 207,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 208,               /* table_elem  */
  YYSYMBOL_column_def = 209,               /* column_def  */
  YYSYMBOL_column_type = 210,              /* column_type  */
  YYSYMBOL_opt_time_precision = 211,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 212, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 213,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_list = 214,   /* column_constraint_list  */
  YYSYMBOL_column_constraint = 215,        /* column_constraint  */
  YYSYMBOL_table_constraint = 216,         /* table_constraint  */
  YYSYMBOL_drop_statement = 217,           /* drop_statement  */
  YYSYMBOL_opt_exists = 218,               /* opt_exists  */
  YYSYMBOL_alter_statement = 219,          /* alter_statement  */
  YYSYMBOL_alter_action = 220,             /* alter_action  */
  YYSYMBOL_drop_action = 221,              /* drop_action  */
  YYSYMBOL_delete_statement = 222,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 223,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 224,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 225,          /* opt_column_list  */
  YYSYMBOL_update_statement = 226,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 227,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 228,            /* update_clause  */
  YYSYMBOL_select_statement = 229,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 230, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 231, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 232,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 233,          /* select_no_paren  */
  YYSYMBOL_set_operator = 234,             /* set_operator  */
  YYSYMBOL_set_type = 235,                 /* set_type  */
  YYSYMBOL_opt_all = 236,                  /* opt_all  */
  YYSYMBOL_select_clause = 237,            /* select_clause  */
  YYSYMBOL_opt_distinct = 238,             /* opt_distinct  */
  YYSYMBOL_select_list = 239,              /* select_list  */
  YYSYMBOL_opt_from_clause = 240,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 241,              /* from_clause  */
  YYSYMBOL_opt_where = 242,                /* opt_where  */
  YYSYMBOL_opt_group = 243,                /* opt_group  */
  YYSYMBOL_opt_having = 244,               /* opt_having  */
  YYSYMBOL_opt_order = 245,                /* opt_order  */
  YYSYMBOL_order_list = 246,               /* order_list  */
  YYSYMBOL_order_desc = 247,               /* order_desc  */
  YYSYMBOL_opt_order_type = 248,           /* opt_order_type  */
  YYSYMBOL_opt_top = 249,                  /* opt_top  */
  YYSYMBOL_opt_limit = 250,                /* opt_limit  */
  YYSYMBOL_expr_list = 251,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 252,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 253,             /* literal_list  */
  YYSYMBOL_expr_alias = 254,               /* expr_alias  */
  YYSYMBOL_expr = 255,                     /* expr  */
  YYSYMBOL_operand = 256,                  /* operand  */
  YYSYMBOL_scalar_expr = 257,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 258,               /* unary_expr  */
  YYSYMBOL_binary_expr = 259,              /* binary_expr  */
  YYSYMBOL_logic_expr = 260,               /* logic_expr  */
  YYSYMBOL_in_expr = 261,                  /* in_expr  */
  YYSYMBOL_case_expr = 262,                /* case_expr  */
  YYSYMBOL_case_list = 263,                /* case_list  */
  YYSYMBOL_exists_expr = 264,              /* exists_expr  */
  YYSYMBOL_comp_expr = 265,                /* comp_expr  */
  YYSYMBOL_function_expr = 266,            /* function_expr  */
  YYSYMBOL_extract_expr = 267,             /* extract_expr  */
  YYSYMBOL_cast_expr = 268,                /* cast_expr  */
  YYSYMBOL_datetime_field = 269,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 270,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 271,           /* duration_field  */
  YYSYMBOL_array_expr = 272,               /* array_expr  */
  YYSYMBOL_array_index = 273,              /* array_index  */
  YYSYMBOL_between_expr = 274,             /* between_expr  */
  YYSYMBOL_column_name = 275,              /* column_name  */
  YYSYMBOL_literal = 276,                  /* literal  */
  YYSYMBOL_string_literal = 277,           /* string_literal  */
  YYSYMBOL_bool_literal = 278,             /* bool_literal  */
  YYSYMBOL_num_literal = 279,              /* num_literal  */
  YYSYMBOL_int_literal = 280,              /* int_literal  */
  YYSYMBOL_null_literal = 281,             /* null_literal  */
  YYSYMBOL_date_literal = 282,             /* date_literal  */
  YYSYMBOL_interval_literal = 283,         /* interval_literal  */
  YYSYMBOL_param_expr = 284,               /* param_expr  */
  YYSYMBOL_table_ref = 285,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 286,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 287, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 288,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 289,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 290,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 291,               /* table_name  */
  YYSYMBOL_opt_index_name = 292,           /* opt_index_name  */
  YYSYMBOL_table_alias = 293,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 294,          /* opt_table_alias  */
  YYSYMBOL_alias = 295,                    /* alias  */
  YYSYMBOL_opt_alias = 296,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 297,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 298,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 299,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 300,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 301,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 302,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 303,              /* with_clause  */
  YYSYMBOL_with_description_list = 304,    /* with_description_list  */
  YYSYMBOL_with_description = 305,         /* with_description  */
  YYSYMBOL_join_clause = 306,              /* join_clause  */
  YYSYMBOL_opt_join_type = 307,            /* opt_join_type  */
  YYSYMBOL_join_condition = 308,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 309,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 310           /* ident_commalist  */
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
#define YYLAST   910

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  186
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  318
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  572

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   423


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
       2,     2,     2,     2,     2,     2,     2,   175,     2,     2,
     180,   181,   173,   171,   184,   172,   182,   174,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   183,
     164,   161,   165,   185,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   178,     2,   179,   176,     2,     2,     2,     2,     2,
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
     155,   156,   157,   158,   159,   160,   162,   163,   166,   167,
     168,   169,   170,   177
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   304,   304,   323,   329,   336,   340,   344,   345,   346,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     363,   364,   366,   370,   375,   379,   389,   390,   391,   393,
     393,   399,   405,   407,   411,   422,   428,   435,   450,   455,
     456,   462,   474,   475,   480,   491,   504,   512,   519,   526,
     535,   536,   538,   542,   547,   548,   550,   555,   556,   557,
     558,   559,   560,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   576,   577,   579,   580,   581,   583,
     584,   586,   590,   595,   596,   597,   598,   600,   601,   609,
     615,   621,   627,   633,   634,   641,   647,   649,   659,   666,
     677,   684,   692,   693,   700,   707,   711,   716,   726,   730,
     734,   746,   746,   748,   749,   758,   759,   761,   775,   787,
     792,   796,   800,   805,   806,   808,   818,   819,   821,   823,
     824,   826,   828,   829,   831,   836,   838,   839,   841,   842,
     844,   848,   853,   855,   856,   857,   861,   862,   864,   865,
     866,   867,   868,   869,   874,   878,   883,   884,   886,   890,
     895,   903,   903,   903,   903,   903,   905,   906,   906,   906,
     906,   906,   906,   906,   906,   907,   907,   911,   911,   913,
     914,   915,   916,   917,   919,   919,   920,   921,   922,   923,
     924,   925,   926,   927,   928,   930,   931,   933,   934,   935,
     936,   940,   941,   942,   943,   945,   946,   948,   949,   951,
     952,   953,   954,   955,   956,   957,   959,   960,   962,   964,
     966,   967,   968,   969,   970,   971,   973,   974,   975,   976,
     977,   978,   980,   980,   982,   984,   986,   988,   989,   990,
     991,   993,   993,   993,   993,   993,   993,   993,   995,   997,
     998,  1000,  1001,  1003,  1005,  1007,  1018,  1022,  1033,  1065,
    1074,  1074,  1081,  1081,  1083,  1083,  1090,  1094,  1099,  1107,
    1113,  1117,  1122,  1123,  1125,  1125,  1127,  1127,  1129,  1130,
    1132,  1132,  1138,  1139,  1141,  1145,  1150,  1156,  1163,  1164,
    1165,  1166,  1168,  1169,  1170,  1176,  1176,  1178,  1180,  1184,
    1189,  1199,  1206,  1214,  1230,  1231,  1232,  1233,  1234,  1235,
    1236,  1237,  1238,  1239,  1241,  1247,  1247,  1250,  1254
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
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS",
  "MONTHS", "YEARS", "INTERVAL", "TRUE", "FALSE", "TRANSACTION", "BEGIN",
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

#define YYPACT_NINF (-325)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-316)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     639,    49,    52,    64,   116,    52,   -30,    73,    92,   128,
      52,   170,    52,    -8,   109,   211,   151,   151,   151,   265,
     125,  -325,   201,  -325,   201,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,   -32,  -325,   316,
     141,  -325,   156,   231,  -325,   202,   202,   202,    52,   327,
      52,   216,  -325,   220,    29,   220,   220,   220,    52,  -325,
     219,   164,  -325,  -325,  -325,  -325,  -325,  -325,   607,  -325,
     256,  -325,  -325,   253,   -32,   149,  -325,    53,  -325,   371,
      32,   374,   260,   377,    52,    52,   299,  -325,   290,   204,
     383,   341,    52,   384,   384,   386,    52,    52,  -325,   210,
     211,  -325,   215,   385,   387,   222,   224,  -325,  -325,  -325,
     -32,   282,   271,   -32,   163,  -325,  -325,  -325,  -325,   402,
    -325,   404,  -325,  -325,  -325,   228,   214,  -325,  -325,  -325,
    -325,   724,  -325,  -325,  -325,  -325,  -325,  -325,   367,  -325,
     283,   -24,   204,   364,  -325,   384,   412,    -4,   263,   -52,
    -325,  -325,   326,   308,  -325,   308,  -325,  -325,  -325,  -325,
    -325,   418,  -325,  -325,   364,  -325,  -325,   348,  -325,  -325,
     149,  -325,  -325,   364,   348,   364,   160,   309,  -325,   217,
    -325,    32,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,    52,   425,
     317,   154,   307,    89,   257,   258,   264,   250,   436,   255,
      39,  -325,   346,   -64,   463,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,   338,  -325,    -5,   266,  -325,   364,   383,  -325,   406,
    -325,  -325,   398,  -325,  -325,   268,    41,  -325,   349,   267,
    -325,    20,   163,   -32,   269,  -325,   -38,   163,   -64,   399,
       6,    27,  -325,   309,  -325,  -325,  -325,   275,   363,  -325,
     791,   337,   278,    50,  -325,  -325,  -325,   317,    12,    15,
     407,   217,   364,   364,   190,   121,   280,    39,   668,   364,
     110,   281,   -44,   364,   364,    39,  -325,    39,    76,   284,
     145,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,   385,    52,  -325,   460,
      32,   -64,  -325,   220,   327,    32,  -325,   418,    18,   299,
    -325,   364,  -325,   466,  -325,  -325,  -325,  -325,   364,  -325,
    -325,  -325,   309,   364,   364,  -325,   310,   351,  -325,   -84,
    -325,   412,   384,  -325,  -325,   294,  -325,   295,  -325,  -325,
     297,  -325,  -325,   298,  -325,  -325,  -325,  -325,   306,  -325,
      21,   311,   412,  -325,   154,  -325,  -325,   364,  -325,  -325,
     312,   393,   136,   112,   124,   364,   364,  -325,   407,   378,
      -9,  -325,  -325,  -325,   373,   603,   405,    39,   315,   346,
    -325,   388,   322,   405,   405,   405,   405,   683,   683,   683,
     683,   110,   110,   -97,   -97,   -97,   -78,   323,  -325,  -325,
      56,   487,  -325,   118,  -325,   317,  -325,   180,  -325,   319,
    -325,    24,  -325,   431,  -325,  -325,  -325,  -325,   -64,   -64,
    -325,   441,   412,  -325,   350,  -325,   119,  -325,   499,   501,
    -325,   502,   504,   505,  -325,   392,  -325,  -325,   409,  -325,
      21,  -325,   412,   134,  -325,   150,  -325,   364,   791,   364,
     364,  -325,   174,   155,   339,  -325,    39,   405,   346,   342,
     162,  -325,  -325,  -325,  -325,  -325,   347,   423,  -325,  -325,
    -325,   449,   451,   452,   433,    18,   530,  -325,  -325,  -325,
     413,  -325,  -325,    45,  -325,  -325,   354,   181,   357,   362,
     365,  -325,  -325,  -325,   182,  -325,  -325,    40,   366,   -64,
     175,  -325,   364,  -325,   668,   369,   191,  -325,  -325,    24,
      18,  -325,  -325,  -325,    18,   242,   368,   364,  -325,  -325,
    -325,   539,  -325,  -325,  -325,  -325,  -325,  -325,  -325,   -64,
    -325,  -325,  -325,  -325,   394,   412,   -31,   370,   372,   364,
     192,   364,  -325,  -325,    19,   -64,  -325,  -325,   -64,   376,
     375,  -325
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     296,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     316,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   295,     0,
     270,    99,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   269,    94,     0,    94,    94,    94,     0,    42,
       0,   297,   298,    29,    26,    28,    27,     1,   296,     2,
       0,     6,     5,   147,     0,   108,   109,   139,    91,     0,
     157,     0,     0,   273,     0,     0,   133,    37,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   127,     0,     0,   121,   122,   120,
       0,   124,     0,     0,   153,   271,   248,   251,   253,     0,
     254,     0,   249,   250,   259,     0,   156,   158,   241,   242,
     243,   252,   244,   245,   246,   247,    32,    31,     0,   272,
       0,     0,   103,     0,    98,     0,     0,     0,     0,   133,
     105,    93,     0,    40,    38,    40,    92,    89,    90,   300,
     299,     0,   146,   126,     0,   116,   115,   139,   112,   111,
     113,   123,   119,     0,   139,     0,     0,   283,   255,   258,
      34,     0,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   256,    50,     0,     0,
     296,     0,     0,   237,     0,     0,     0,     0,     0,     0,
       0,   239,     0,   132,   161,   168,   169,   170,   163,   165,
     171,   164,   184,   172,   173,   174,   175,   167,   162,   177,
     178,     0,   317,     0,     0,   101,     0,     0,   104,     0,
      95,    96,     0,    36,    41,    24,     0,    22,   130,   128,
     154,   281,   153,     0,   138,   140,   145,   153,   149,   151,
     148,     0,   117,   282,   284,   257,   159,     0,     0,    47,
       0,     0,     0,     0,    52,    54,    55,   296,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   180,     0,
     179,     0,     0,     0,     0,     0,   181,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
       0,   107,   106,    94,     0,     0,    20,     0,     0,   133,
     129,     0,   279,     0,   280,   160,   110,   114,     0,   144,
     143,   142,   283,     0,     0,   288,     0,     0,   290,   294,
     285,     0,     0,    72,    66,     0,    68,    78,    69,    57,
       0,    63,    64,     0,    60,    61,    67,    70,    75,    65,
      80,     0,     0,    46,     0,    49,   216,     0,   238,   240,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
       0,   176,   166,   195,   196,     0,   191,     0,     0,     0,
     182,     0,   194,   193,   209,   210,   211,   212,   213,   214,
     215,   186,   185,   188,   187,   189,   190,     0,    35,   318,
       0,     0,    39,     0,    23,   296,   131,   260,   262,     0,
     264,   277,   263,   135,   155,   278,   141,   118,   152,   150,
     291,     0,     0,   293,     0,   286,     0,    45,     0,     0,
      62,     0,     0,     0,    71,     0,    84,    85,     0,    56,
      79,    81,     0,     0,    53,     0,   207,     0,     0,     0,
       0,   201,     0,     0,     0,   234,     0,   192,     0,     0,
       0,   183,   235,   100,    97,    25,     0,     0,   312,   304,
     310,   308,   311,   306,     0,     0,     0,   276,   268,   274,
       0,   125,   289,   294,   292,    48,     0,     0,     0,     0,
       0,    83,    86,    82,     0,    88,   217,     0,     0,   205,
       0,   204,     0,   208,   236,     0,     0,   199,   197,   277,
       0,   307,   309,   305,     0,   261,   278,     0,   287,    59,
      77,     0,    73,    58,    74,    87,   218,   219,   202,   206,
     200,   198,   265,   301,   313,     0,   137,     0,     0,     0,
       0,     0,   134,    76,     0,   314,   302,   275,   136,   237,
       0,   303
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -325,  -325,  -325,   485,  -325,   531,  -325,   227,  -325,   259,
    -325,  -325,  -325,  -325,   235,   -92,   408,  -325,  -325,  -325,
     247,  -325,   186,  -325,    93,  -325,  -325,  -325,  -325,   102,
    -325,  -325,   -50,  -325,  -325,  -325,  -325,  -325,  -325,   430,
    -325,  -325,   328,  -192,   -94,  -325,    55,   -71,   -37,  -325,
    -325,   -85,   304,  -325,  -325,  -325,  -133,  -325,  -325,  -108,
    -325,   237,  -325,  -325,   -79,  -255,  -325,  -140,   254,  -143,
    -198,  -325,  -325,  -325,  -325,  -325,  -325,   305,  -325,  -325,
    -325,  -325,  -325,  -150,  -325,  -325,  -325,  -325,  -325,    26,
     -63,   -80,  -325,  -325,   -88,  -325,  -325,  -325,  -325,  -325,
    -324,    63,  -325,  -325,  -325,    -1,  -325,  -325,    65,   344,
    -325,   261,  -325,   333,  -325,    94,  -325,  -325,  -325,   498,
    -325,  -325,  -325,  -325,  -316
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   246,   247,    23,    64,
      24,   137,    25,    26,    88,   153,   243,    27,    28,    29,
      83,   273,   274,   275,   370,   454,   450,   459,   460,   461,
     276,    30,    92,    31,   240,   241,    32,    33,    34,   147,
      35,   149,   150,    36,   167,   168,   169,    76,   110,   111,
     172,    77,   164,   248,   329,   330,   144,   501,   562,   114,
     254,   255,   341,   104,   177,   249,   125,   126,   250,   251,
     214,   215,   216,   217,   218,   219,   220,   285,   221,   222,
     223,   224,   225,   194,   195,   196,   226,   227,   228,   229,
     230,   128,   129,   130,   131,   132,   133,   134,   135,   426,
     427,   428,   429,   430,    51,   431,   140,   497,   498,   499,
     335,   262,   263,   264,   349,   445,    37,    38,    61,    62,
     432,   494,   566,    69,   233
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     213,    41,   155,   106,    44,    95,    96,    97,   269,    52,
     288,    54,   290,   154,   154,   162,   238,   127,   378,   174,
     561,    40,   569,   332,   163,   170,    73,   332,   170,   265,
     256,   143,   258,   260,   390,   446,   116,   117,   118,   301,
     113,    45,   203,   116,   117,   118,   442,    86,   455,    89,
      46,   293,   339,   231,    73,    40,   463,    98,   301,   252,
     234,   344,   107,    55,   284,   154,   257,    42,   294,   292,
     199,   293,    56,   443,   444,    39,   235,   293,   340,   315,
      47,   316,   456,   141,   142,   375,   205,   206,   294,   288,
     345,   152,    75,   321,   294,   157,   158,   395,   108,   396,
     316,   200,    57,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   266,    43,
     119,   293,   465,    93,   207,   457,   503,   119,    58,   105,
     112,   381,   237,   253,   109,   293,   120,   392,   294,   382,
     383,   291,   458,   120,   480,   333,   514,   346,    74,   496,
     393,   394,   294,   331,   159,   293,   201,   270,   107,   337,
     287,   347,    94,   203,   116,   117,   118,    48,   170,    59,
     475,   535,   294,   336,   209,   331,   318,   397,   342,   319,
     420,   271,   121,   122,   123,   423,    49,   348,   379,   121,
     122,   123,   211,   376,   108,   256,   433,   267,   425,   477,
     438,   439,   443,   444,   398,   487,   204,   205,   206,   380,
     554,   210,   211,   385,    60,   272,   470,   124,   175,   212,
     469,   546,   326,   526,   124,   327,    50,   293,   417,   319,
     109,   373,   386,   486,   374,   386,   176,   483,   387,   560,
     181,   471,   472,   473,   294,   207,   301,   488,   119,   400,
      53,   293,   489,   203,   116,   117,   118,   127,   490,   491,
     447,   468,   127,   522,   120,    67,   401,   487,   294,   278,
     293,   279,   154,   421,   259,   492,    65,    66,   524,  -313,
     493,   208,   556,   312,   313,   314,   315,   294,   316,   293,
     293,   521,   548,    84,    85,   209,   204,   205,   206,   485,
     505,   283,   181,   319,    63,   293,   294,   294,    68,   488,
     121,   122,   123,    70,   489,   515,   418,   474,   319,    78,
     490,   491,   294,    79,   517,    81,   519,   520,   479,    82,
      87,   516,   210,   211,   331,   207,    80,   492,   119,    90,
     212,  -313,   493,   528,    99,   124,   331,    91,   100,   203,
     116,   117,   118,   102,   120,   182,   183,   184,   185,   186,
     187,   283,   540,   545,  -266,   541,   319,   203,   116,   117,
     118,   208,   551,   567,   115,   331,   319,   103,   136,   549,
     139,   138,   143,   145,   146,   209,   148,   151,   116,   156,
      74,   118,   204,   205,   206,   161,   171,   173,   181,   163,
     121,   122,   123,   165,    73,   166,   178,   525,   179,   180,
     204,   205,   206,   197,   198,   232,   565,   239,   568,   487,
     242,   245,   210,   211,   236,   112,  -267,   261,   268,    15,
     212,   207,   277,   289,   119,   124,   317,   280,   281,   203,
     116,   117,   118,   328,   282,   323,   320,   324,   325,   207,
     120,   331,   119,   338,   343,   351,   352,   371,   372,   296,
     388,   488,   391,   419,   399,    73,   489,   208,   120,   435,
     440,   441,   490,   491,   448,   449,   558,   451,   452,   397,
     295,   209,   286,   205,   206,   208,   453,   467,   293,   492,
     484,   462,   481,   466,   493,   478,   121,   122,   123,   209,
     316,   500,   482,   495,   502,   506,  -316,   507,   508,   504,
     509,   510,   511,   512,   121,   122,   123,   296,   210,   211,
     523,   207,   530,   527,   119,   559,   212,   531,   529,   532,
     533,   124,   534,   536,   300,   539,   210,   211,   542,   537,
     120,   301,  -316,   543,   212,   557,   544,   547,   555,   124,
     550,   563,   564,   101,   424,    72,   571,   287,   279,   422,
     464,   518,   513,   244,   297,   322,  -316,  -316,  -316,   306,
     307,   209,   202,   308,   309,   436,   310,   311,   312,   313,
     314,   315,   377,   316,   298,   434,   121,   122,   123,   384,
     570,   299,   300,   553,   552,   334,   350,   538,   160,   301,
     302,     0,     0,   437,     0,     0,     0,  -315,   210,   211,
       0,     0,     0,     0,     1,     0,   212,     0,     0,     0,
       0,   124,     2,     0,   303,   304,   305,   306,   307,     3,
       0,   308,   309,     4,   310,   311,   312,   313,   314,   315,
       0,   316,     0,     0,     5,     0,     1,     6,     7,     0,
       0,     0,     0,     0,     2,     0,     0,   296,     0,     8,
       9,     3,     0,     0,     0,     4,     0,     0,     0,     0,
      10,     0,     0,    11,     0,     0,     5,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,     0,    12,     0,     0,     0,    13,     0,
       0,     0,    10,     0,   297,    11,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,   476,    15,
       0,     0,   296,     0,   389,     0,    12,     0,     0,     0,
      13,     0,   300,     0,     0,     0,     0,   296,     0,   301,
     302,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,    17,    18,   303,   304,   305,   306,   307,   297,
       0,   308,   309,     0,   310,   311,   312,   313,   314,   315,
       0,   316,     0,     0,     0,     0,     0,     0,     0,   389,
       0,     0,     0,    16,    17,    18,     0,   300,     0,     0,
       0,     0,   353,     0,   301,   302,     0,     0,     0,     0,
       0,     0,   300,     0,     0,   354,     0,     0,     0,   301,
     355,   356,   357,   358,   359,     0,   360,     0,     0,   303,
     304,   305,   306,   307,   361,     0,   308,   309,     0,   310,
     311,   312,   313,   314,   315,     0,   316,  -316,  -316,     0,
       0,  -316,  -316,     0,   310,   311,   312,   313,   314,   315,
     362,   316,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,     0,     0,     0,   363,     0,   364,
     365,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   366,     0,     0,     0,   367,     0,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369
};

static const yytype_int16 yycheck[] =
{
     143,     2,    94,    74,     5,    55,    56,    57,   200,    10,
     208,    12,   210,    93,    94,   103,   149,    80,     3,   113,
      51,     3,     3,     3,    12,   110,    58,     3,   113,   179,
     173,    83,   175,   176,   289,   351,     4,     5,     6,   136,
      77,    71,     3,     4,     5,     6,   130,    48,    27,    50,
      80,   115,    90,   145,    58,     3,   372,    58,   136,   167,
      64,    55,     9,    71,   207,   145,   174,     3,   132,   212,
      94,   115,    80,   157,   158,    26,   147,   115,   116,   176,
     110,   178,    61,    84,    85,   277,    47,    48,   132,   287,
      63,    92,    37,   236,   132,    96,    97,   295,    45,   297,
     178,   125,   110,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   181,     3,
      88,   115,   377,    94,    85,   104,   442,    88,    19,    74,
      77,   281,   184,   170,    81,   115,   104,   181,   132,   282,
     283,   212,   121,   104,   399,   125,   462,   120,   180,   125,
     293,   294,   132,   184,    99,   115,   180,     3,     9,   253,
     121,   134,   133,     3,     4,     5,     6,    94,   253,    60,
     179,   495,   132,   252,   135,   184,   181,   101,   257,   184,
     320,    27,   150,   151,   152,   325,    94,   160,   173,   150,
     151,   152,   173,   181,    45,   338,   329,   198,   180,   397,
     343,   344,   157,   158,   128,    25,    46,    47,    48,   280,
     534,   172,   173,    92,     3,    61,    92,   185,    55,   180,
     108,   181,   181,   478,   185,   184,    98,   115,   316,   184,
      81,   181,   111,   425,   184,   111,    73,   181,   117,   555,
     184,   117,   385,   386,   132,    85,   136,    67,    88,   104,
      80,   115,    72,     3,     4,     5,     6,   320,    78,    79,
     352,   125,   325,   108,   104,     0,   121,    25,   132,   180,
     115,   182,   352,   323,   114,    95,    17,    18,   476,    99,
     100,   121,   537,   173,   174,   175,   176,   132,   178,   115,
     115,   117,   117,    46,    47,   135,    46,    47,    48,   181,
     181,   111,   184,   184,   153,   115,   132,   132,   183,    67,
     150,   151,   152,   112,    72,   181,   317,   388,   184,     3,
      78,    79,   132,   182,   467,    94,   469,   470,   399,   127,
       3,   181,   172,   173,   184,    85,   180,    95,    88,   123,
     180,    99,   100,   181,   125,   185,   184,   127,   184,     3,
       4,     5,     6,    97,   104,   138,   139,   140,   141,   142,
     143,   111,   181,   181,   184,   184,   184,     3,     4,     5,
       6,   121,   181,   181,     3,   184,   184,   124,     4,   522,
       3,   121,    83,    93,   180,   135,     3,    46,     4,     3,
     180,     6,    46,    47,    48,   180,   114,   126,   184,    12,
     150,   151,   152,   181,    58,   181,     4,   478,     4,   181,
      46,    47,    48,    46,   131,     3,   559,    91,   561,    25,
     112,     3,   172,   173,   161,    77,   184,   118,     3,   112,
     180,    85,   125,   178,    88,   185,    98,   180,   180,     3,
       4,     5,     6,    94,   180,    39,   180,    49,   180,    85,
     104,   184,    88,   184,    55,   180,    93,   120,   180,    54,
     180,    67,   181,     3,   180,    58,    72,   121,   104,     3,
     160,   120,    78,    79,   180,   180,    82,   180,   180,   101,
      17,   135,    46,    47,    48,   121,   180,    94,   115,    95,
       3,   180,   104,   181,   100,   180,   150,   151,   152,   135,
     178,    70,   179,   184,    63,     6,   101,     6,     6,   159,
       6,     6,   120,   104,   150,   151,   152,    54,   172,   173,
     181,    85,    99,   181,    88,   131,   180,    78,   181,    78,
      78,   185,    99,     3,   129,   181,   172,   173,   181,   126,
     104,   136,   137,   181,   180,     6,   181,   181,   180,   185,
     181,   181,   180,    68,   327,    24,   181,   121,   182,   324,
     374,   468,   460,   155,   101,   237,   161,   162,   163,   164,
     165,   135,   142,   168,   169,   338,   171,   172,   173,   174,
     175,   176,   278,   178,   121,   331,   150,   151,   152,   284,
     564,   128,   129,   530,   529,   251,   263,   503,   100,   136,
     137,    -1,    -1,   342,    -1,    -1,    -1,     0,   172,   173,
      -1,    -1,    -1,    -1,     7,    -1,   180,    -1,    -1,    -1,
      -1,   185,    15,    -1,   161,   162,   163,   164,   165,    22,
      -1,   168,   169,    26,   171,   172,   173,   174,   175,   176,
      -1,   178,    -1,    -1,    37,    -1,     7,    40,    41,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    54,    -1,    52,
      53,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    66,    -1,    -1,    37,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    87,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    63,    -1,   101,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   115,   112,
      -1,    -1,    54,    -1,   121,    -1,    87,    -1,    -1,    -1,
      91,    -1,   129,    -1,    -1,    -1,    -1,    54,    -1,   136,
     137,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,   155,   156,   161,   162,   163,   164,   165,   101,
      -1,   168,   169,    -1,   171,   172,   173,   174,   175,   176,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
      -1,    -1,    -1,   154,   155,   156,    -1,   129,    -1,    -1,
      -1,    -1,    11,    -1,   136,   137,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,    24,    -1,    -1,    -1,   136,
      29,    30,    31,    32,    33,    -1,    35,    -1,    -1,   161,
     162,   163,   164,   165,    43,    -1,   168,   169,    -1,   171,
     172,   173,   174,   175,   176,    -1,   178,   164,   165,    -1,
      -1,   168,   169,    -1,   171,   172,   173,   174,   175,   176,
      69,   178,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,    -1,    -1,    86,    -1,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    37,    40,    41,    52,    53,
      63,    66,    87,    91,   106,   112,   154,   155,   156,   187,
     188,   189,   190,   194,   196,   198,   199,   203,   204,   205,
     217,   219,   222,   223,   224,   226,   229,   302,   303,    26,
       3,   291,     3,     3,   291,    71,    80,   110,    94,    94,
      98,   290,   291,    80,   291,    71,    80,   110,    19,    60,
       3,   304,   305,   153,   195,   195,   195,     0,   183,   309,
     112,   191,   191,    58,   180,   232,   233,   237,     3,   182,
     180,    94,   127,   206,   206,   206,   291,     3,   200,   291,
     123,   127,   218,    94,   133,   218,   218,   218,   291,   125,
     184,   189,    97,   124,   249,   232,   233,     9,    45,    81,
     234,   235,    77,   234,   245,     3,     4,     5,     6,    88,
     104,   150,   151,   152,   185,   252,   253,   276,   277,   278,
     279,   280,   281,   282,   283,   284,     4,   197,   121,     3,
     292,   291,   291,    83,   242,    93,   180,   225,     3,   227,
     228,    46,   291,   201,   277,   201,     3,   291,   291,   232,
     305,   180,   280,    12,   238,   181,   181,   230,   231,   232,
     237,   114,   236,   126,   230,    55,    73,   250,     4,     4,
     181,   184,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   269,   270,   271,    46,   131,    94,
     125,   180,   225,     3,    46,    47,    48,    85,   121,   135,
     172,   173,   180,   255,   256,   257,   258,   259,   260,   261,
     262,   264,   265,   266,   267,   268,   272,   273,   274,   275,
     276,   201,     3,   310,    64,   233,   161,   184,   242,    91,
     220,   221,   112,   202,   202,     3,   192,   193,   239,   251,
     254,   255,   245,   234,   246,   247,   255,   245,   255,   114,
     255,   118,   297,   298,   299,   269,   276,   291,     3,   229,
       3,    27,    61,   207,   208,   209,   216,   125,   180,   182,
     180,   180,   180,   111,   255,   263,    46,   121,   256,   178,
     256,   233,   255,   115,   132,    17,    54,   101,   121,   128,
     129,   136,   137,   161,   162,   163,   164,   165,   168,   169,
     171,   172,   173,   174,   175,   176,   178,    98,   181,   184,
     180,   255,   228,    39,    49,   180,   181,   184,    94,   240,
     241,   184,     3,   125,   295,   296,   250,   230,   184,    90,
     116,   248,   250,    55,    55,    63,   120,   134,   160,   300,
     299,   180,    93,    11,    24,    29,    30,    31,    32,    33,
      35,    43,    69,    86,    88,    89,   103,   107,   109,   119,
     210,   120,   180,   181,   184,   229,   181,   238,     3,   173,
     233,   269,   255,   255,   263,    92,   111,   117,   180,   121,
     251,   181,   181,   255,   255,   256,   256,   101,   128,   180,
     104,   121,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   280,   291,     3,
     253,   218,   200,   253,   193,   180,   285,   286,   287,   288,
     289,   291,   306,   242,   254,     3,   247,   297,   255,   255,
     160,   120,   130,   157,   158,   301,   310,   201,   180,   180,
     212,   180,   180,   180,   211,    27,    61,   104,   121,   213,
     214,   215,   180,   310,   208,   251,   181,    94,   125,   108,
      92,   117,   255,   255,   233,   179,   115,   256,   180,   233,
     251,   104,   179,   181,     3,   181,   229,    25,    67,    72,
      78,    79,    95,   100,   307,   184,   125,   293,   294,   295,
      70,   243,    63,   310,   159,   181,     6,     6,     6,     6,
       6,   120,   104,   215,   310,   181,   181,   255,   210,   255,
     255,   117,   108,   181,   256,   233,   251,   181,   181,   181,
      99,    78,    78,    78,    99,   286,     3,   126,   301,   181,
     181,   184,   181,   181,   181,   181,   181,   181,   117,   255,
     181,   181,   294,   287,   286,   180,   251,     6,    82,   131,
     310,    51,   244,   181,   180,   255,   308,   181,   255,     3,
     275,   181
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   186,   187,   188,   188,   189,   189,   189,   189,   189,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     191,   191,   192,   192,   193,   193,   194,   194,   194,   195,
     195,   196,   197,   198,   198,   199,   199,   200,   201,   202,
     202,   203,   204,   204,   204,   205,   205,   205,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   211,   211,   212,   212,   212,   213,
     213,   214,   214,   215,   215,   215,   215,   216,   216,   217,
     217,   217,   217,   218,   218,   219,   220,   221,   222,   223,
     224,   224,   225,   225,   226,   227,   227,   228,   229,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   233,   234,
     235,   235,   235,   236,   236,   237,   238,   238,   239,   240,
     240,   241,   242,   242,   243,   243,   244,   244,   245,   245,
     246,   246,   247,   248,   248,   248,   249,   249,   250,   250,
     250,   250,   250,   250,   251,   251,   252,   252,   253,   253,
     254,   255,   255,   255,   255,   255,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   257,   257,   258,
     258,   258,   258,   258,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   260,   260,   261,   261,   261,
     261,   262,   262,   262,   262,   263,   263,   264,   264,   265,
     265,   265,   265,   265,   265,   265,   266,   266,   267,   268,
     269,   269,   269,   269,   269,   269,   270,   270,   270,   270,
     270,   270,   271,   271,   272,   273,   274,   275,   275,   275,
     275,   276,   276,   276,   276,   276,   276,   276,   277,   278,
     278,   279,   279,   280,   281,   282,   283,   283,   283,   284,
     285,   285,   286,   286,   287,   287,   288,   288,   289,   290,
     291,   291,   292,   292,   293,   293,   294,   294,   295,   295,
     296,   296,   297,   297,   298,   298,   299,   299,   300,   300,
     300,   300,   301,   301,   301,   302,   302,   303,   304,   304,
     305,   306,   306,   306,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   308,   309,   309,   310,   310
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
       1,     2,     1,     4,     3,     0,     5,     3,     0,     1,
       0,     1,     2,     2,     1,     1,     2,     5,     4,     4,
       4,     3,     4,     2,     0,     5,     1,     4,     4,     2,
       8,     5,     3,     0,     5,     1,     3,     3,     2,     2,
       6,     1,     1,     1,     3,     3,     3,     4,     6,     2,
       1,     1,     1,     1,     0,     7,     1,     0,     1,     1,
       0,     2,     2,     0,     4,     0,     2,     0,     3,     0,
       1,     3,     2,     1,     1,     0,     2,     0,     2,     2,
       4,     2,     4,     0,     1,     3,     1,     0,     1,     3,
       2,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     5,     6,     5,
       6,     4,     6,     3,     5,     4,     5,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     6,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     5,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     2,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     1,     0,     1,     5,     1,     0,     2,     1,
       1,     0,     1,     0,     1,     2,     3,     5,     1,     3,
       1,     2,     2,     1,     0,     1,     0,     2,     1,     3,
       3,     4,     6,     8,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 2038 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2044 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 166 "bison_parser.y"
                { }
#line 2050 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 166 "bison_parser.y"
                { }
#line 2056 "bison_parser.cpp"
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
#line 2069 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2075 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2081 "bison_parser.cpp"
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
#line 2094 "bison_parser.cpp"
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
#line 2107 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2113 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2119 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2125 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2131 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2137 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2143 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 166 "bison_parser.y"
                { }
#line 2149 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2155 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 166 "bison_parser.y"
                { }
#line 2161 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2167 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2173 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2179 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 166 "bison_parser.y"
                { }
#line 2185 "bison_parser.cpp"
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
#line 2198 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2204 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2210 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 166 "bison_parser.y"
                { }
#line 2216 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 166 "bison_parser.y"
                { }
#line 2222 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2228 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 166 "bison_parser.y"
                { }
#line 2234 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_list: /* column_constraint_list  */
#line 166 "bison_parser.y"
                { }
#line 2240 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 166 "bison_parser.y"
                { }
#line 2246 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2252 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2258 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 166 "bison_parser.y"
                { }
#line 2264 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2270 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2276 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2282 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2288 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2294 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2300 "bison_parser.cpp"
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
#line 2313 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2319 "bison_parser.cpp"
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
#line 2332 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2338 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2344 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2350 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2356 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2362 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2368 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2374 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2380 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 166 "bison_parser.y"
                { }
#line 2386 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2392 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 166 "bison_parser.y"
                { }
#line 2398 "bison_parser.cpp"
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
#line 2411 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2417 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2423 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2429 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2435 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2441 "bison_parser.cpp"
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
#line 2454 "bison_parser.cpp"
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
#line 2467 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2473 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 166 "bison_parser.y"
                { }
#line 2479 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2485 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2491 "bison_parser.cpp"
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
#line 2504 "bison_parser.cpp"
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
#line 2517 "bison_parser.cpp"
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
#line 2530 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2536 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2542 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2548 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2554 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2560 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2566 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2572 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2578 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2584 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2590 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2596 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2602 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2608 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2614 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2620 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 166 "bison_parser.y"
                { }
#line 2626 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 166 "bison_parser.y"
                { }
#line 2632 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 166 "bison_parser.y"
                { }
#line 2638 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2644 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2650 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2656 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2662 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2668 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2674 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2680 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2686 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2692 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2698 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2704 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2710 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2716 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2722 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2728 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2734 "bison_parser.cpp"
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
#line 2747 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2753 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2759 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 167 "bison_parser.y"
                { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2765 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2771 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2777 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2783 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2789 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2795 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2801 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2807 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2813 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 166 "bison_parser.y"
                { }
#line 2819 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 166 "bison_parser.y"
                { }
#line 2825 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2831 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2837 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2843 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2849 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2855 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 166 "bison_parser.y"
                { }
#line 2861 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 177 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2867 "bison_parser.cpp"
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
#line 2880 "bison_parser.cpp"
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

#line 2988 "bison_parser.cpp"

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
#line 3217 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 323 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3228 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 329 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3239 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 336 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3248 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 340 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3257 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 344 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3263 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 345 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3269 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 346 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3275 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 348 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3281 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 349 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3287 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 350 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3293 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 351 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3299 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 352 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3305 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 353 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3311 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 354 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3317 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 355 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3323 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 356 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3329 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 357 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3335 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 363 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3341 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 364 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3347 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 366 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3356 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 370 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3365 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 375 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3374 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 379 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3384 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 389 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3390 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 390 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3396 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 391 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3402 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 399 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3412 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 407 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3421 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 411 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3431 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 422 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3442 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 428 "bison_parser.y"
                                               {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3453 "bison_parser.cpp"
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
#line 3472 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 450 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3481 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 455 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3487 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 456 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3493 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 462 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3504 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 474 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3510 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 475 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3520 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 480 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3530 "bison_parser.cpp"
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
#line 3548 "bison_parser.cpp"
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
}
#line 3561 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 512 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3573 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 519 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3585 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 526 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3598 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 535 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3604 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 536 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3610 "bison_parser.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 538 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3619 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 542 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3628 "bison_parser.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 547 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3634 "bison_parser.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 548 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3640 "bison_parser.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 550 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
  (yyval.column_t)->setNullableExplicit();
}
#line 3649 "bison_parser.cpp"
    break;

  case 57: /* column_type: BIGINT  */
#line 555 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3655 "bison_parser.cpp"
    break;

  case 58: /* column_type: CHAR '(' INTVAL ')'  */
#line 556 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3661 "bison_parser.cpp"
    break;

  case 59: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 557 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3667 "bison_parser.cpp"
    break;

  case 60: /* column_type: DATE  */
#line 558 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3673 "bison_parser.cpp"
    break;

  case 61: /* column_type: DATETIME  */
#line 559 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3679 "bison_parser.cpp"
    break;

  case 62: /* column_type: DECIMAL opt_decimal_specification  */
#line 560 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3688 "bison_parser.cpp"
    break;

  case 63: /* column_type: DOUBLE  */
#line 564 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3694 "bison_parser.cpp"
    break;

  case 64: /* column_type: FLOAT  */
#line 565 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3700 "bison_parser.cpp"
    break;

  case 65: /* column_type: INT  */
#line 566 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3706 "bison_parser.cpp"
    break;

  case 66: /* column_type: INTEGER  */
#line 567 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3712 "bison_parser.cpp"
    break;

  case 67: /* column_type: LONG  */
#line 568 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3718 "bison_parser.cpp"
    break;

  case 68: /* column_type: REAL  */
#line 569 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3724 "bison_parser.cpp"
    break;

  case 69: /* column_type: SMALLINT  */
#line 570 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3730 "bison_parser.cpp"
    break;

  case 70: /* column_type: TEXT  */
#line 571 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3736 "bison_parser.cpp"
    break;

  case 71: /* column_type: TIME opt_time_precision  */
#line 572 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3742 "bison_parser.cpp"
    break;

  case 72: /* column_type: TIMESTAMP  */
#line 573 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3748 "bison_parser.cpp"
    break;

  case 73: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 574 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3754 "bison_parser.cpp"
    break;

  case 74: /* opt_time_precision: '(' INTVAL ')'  */
#line 576 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3760 "bison_parser.cpp"
    break;

  case 75: /* opt_time_precision: %empty  */
#line 577 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3766 "bison_parser.cpp"
    break;

  case 76: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 579 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3772 "bison_parser.cpp"
    break;

  case 77: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 580 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3778 "bison_parser.cpp"
    break;

  case 78: /* opt_decimal_specification: %empty  */
#line 581 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3784 "bison_parser.cpp"
    break;

  case 79: /* opt_column_constraints: column_constraint_list  */
#line 583 "bison_parser.y"
                                                { (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec); }
#line 3790 "bison_parser.cpp"
    break;

  case 80: /* opt_column_constraints: %empty  */
#line 584 "bison_parser.y"
              { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3796 "bison_parser.cpp"
    break;

  case 81: /* column_constraint_list: column_constraint  */
#line 586 "bison_parser.y"
                                           {
  (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
  (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
}
#line 3805 "bison_parser.cpp"
    break;

  case 82: /* column_constraint_list: column_constraint_list column_constraint  */
#line 590 "bison_parser.y"
                                           {
  (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec);
}
#line 3814 "bison_parser.cpp"
    break;

  case 83: /* column_constraint: PRIMARY KEY  */
#line 595 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3820 "bison_parser.cpp"
    break;

  case 84: /* column_constraint: UNIQUE  */
#line 596 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3826 "bison_parser.cpp"
    break;

  case 85: /* column_constraint: NULL  */
#line 597 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3832 "bison_parser.cpp"
    break;

  case 86: /* column_constraint: NOT NULL  */
#line 598 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3838 "bison_parser.cpp"
    break;

  case 87: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 600 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3844 "bison_parser.cpp"
    break;

  case 88: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 601 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3850 "bison_parser.cpp"
    break;

  case 89: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 609 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3861 "bison_parser.cpp"
    break;

  case 90: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 615 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3872 "bison_parser.cpp"
    break;

  case 91: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 621 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3882 "bison_parser.cpp"
    break;

  case 92: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 627 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3892 "bison_parser.cpp"
    break;

  case 93: /* opt_exists: IF EXISTS  */
#line 633 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3898 "bison_parser.cpp"
    break;

  case 94: /* opt_exists: %empty  */
#line 634 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3904 "bison_parser.cpp"
    break;

  case 95: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 641 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3914 "bison_parser.cpp"
    break;

  case 96: /* alter_action: drop_action  */
#line 647 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3920 "bison_parser.cpp"
    break;

  case 97: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 649 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3929 "bison_parser.cpp"
    break;

  case 98: /* delete_statement: DELETE FROM table_name opt_where  */
#line 659 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3940 "bison_parser.cpp"
    break;

  case 99: /* truncate_statement: TRUNCATE table_name  */
#line 666 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3950 "bison_parser.cpp"
    break;

  case 100: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 677 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 3962 "bison_parser.cpp"
    break;

  case 101: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 684 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3974 "bison_parser.cpp"
    break;

  case 102: /* opt_column_list: '(' ident_commalist ')'  */
#line 692 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3980 "bison_parser.cpp"
    break;

  case 103: /* opt_column_list: %empty  */
#line 693 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 3986 "bison_parser.cpp"
    break;

  case 104: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 700 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 3997 "bison_parser.cpp"
    break;

  case 105: /* update_clause_commalist: update_clause  */
#line 707 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4006 "bison_parser.cpp"
    break;

  case 106: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 711 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4015 "bison_parser.cpp"
    break;

  case 107: /* update_clause: IDENTIFIER '=' expr  */
#line 716 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4025 "bison_parser.cpp"
    break;

  case 108: /* select_statement: opt_with_clause select_with_paren  */
#line 726 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4034 "bison_parser.cpp"
    break;

  case 109: /* select_statement: opt_with_clause select_no_paren  */
#line 730 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4043 "bison_parser.cpp"
    break;

  case 110: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 734 "bison_parser.y"
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
#line 4059 "bison_parser.cpp"
    break;

  case 113: /* select_within_set_operation_no_parentheses: select_clause  */
#line 748 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4065 "bison_parser.cpp"
    break;

  case 114: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 749 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4078 "bison_parser.cpp"
    break;

  case 115: /* select_with_paren: '(' select_no_paren ')'  */
#line 758 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4084 "bison_parser.cpp"
    break;

  case 116: /* select_with_paren: '(' select_with_paren ')'  */
#line 759 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4090 "bison_parser.cpp"
    break;

  case 117: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 761 "bison_parser.y"
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
#line 4109 "bison_parser.cpp"
    break;

  case 118: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 775 "bison_parser.y"
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
#line 4125 "bison_parser.cpp"
    break;

  case 119: /* set_operator: set_type opt_all  */
#line 787 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4134 "bison_parser.cpp"
    break;

  case 120: /* set_type: UNION  */
#line 792 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4143 "bison_parser.cpp"
    break;

  case 121: /* set_type: INTERSECT  */
#line 796 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4152 "bison_parser.cpp"
    break;

  case 122: /* set_type: EXCEPT  */
#line 800 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4161 "bison_parser.cpp"
    break;

  case 123: /* opt_all: ALL  */
#line 805 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4167 "bison_parser.cpp"
    break;

  case 124: /* opt_all: %empty  */
#line 806 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4173 "bison_parser.cpp"
    break;

  case 125: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 808 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4187 "bison_parser.cpp"
    break;

  case 126: /* opt_distinct: DISTINCT  */
#line 818 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4193 "bison_parser.cpp"
    break;

  case 127: /* opt_distinct: %empty  */
#line 819 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4199 "bison_parser.cpp"
    break;

  case 129: /* opt_from_clause: from_clause  */
#line 823 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4205 "bison_parser.cpp"
    break;

  case 130: /* opt_from_clause: %empty  */
#line 824 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4211 "bison_parser.cpp"
    break;

  case 131: /* from_clause: FROM table_ref  */
#line 826 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4217 "bison_parser.cpp"
    break;

  case 132: /* opt_where: WHERE expr  */
#line 828 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4223 "bison_parser.cpp"
    break;

  case 133: /* opt_where: %empty  */
#line 829 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4229 "bison_parser.cpp"
    break;

  case 134: /* opt_group: GROUP BY expr_list opt_having  */
#line 831 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4239 "bison_parser.cpp"
    break;

  case 135: /* opt_group: %empty  */
#line 836 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4245 "bison_parser.cpp"
    break;

  case 136: /* opt_having: HAVING expr  */
#line 838 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4251 "bison_parser.cpp"
    break;

  case 137: /* opt_having: %empty  */
#line 839 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4257 "bison_parser.cpp"
    break;

  case 138: /* opt_order: ORDER BY order_list  */
#line 841 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4263 "bison_parser.cpp"
    break;

  case 139: /* opt_order: %empty  */
#line 842 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4269 "bison_parser.cpp"
    break;

  case 140: /* order_list: order_desc  */
#line 844 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4278 "bison_parser.cpp"
    break;

  case 141: /* order_list: order_list ',' order_desc  */
#line 848 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4287 "bison_parser.cpp"
    break;

  case 142: /* order_desc: expr opt_order_type  */
#line 853 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4293 "bison_parser.cpp"
    break;

  case 143: /* opt_order_type: ASC  */
#line 855 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4299 "bison_parser.cpp"
    break;

  case 144: /* opt_order_type: DESC  */
#line 856 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4305 "bison_parser.cpp"
    break;

  case 145: /* opt_order_type: %empty  */
#line 857 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4311 "bison_parser.cpp"
    break;

  case 146: /* opt_top: TOP int_literal  */
#line 861 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4317 "bison_parser.cpp"
    break;

  case 147: /* opt_top: %empty  */
#line 862 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4323 "bison_parser.cpp"
    break;

  case 148: /* opt_limit: LIMIT expr  */
#line 864 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4329 "bison_parser.cpp"
    break;

  case 149: /* opt_limit: OFFSET expr  */
#line 865 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4335 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: LIMIT expr OFFSET expr  */
#line 866 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4341 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: LIMIT ALL  */
#line 867 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4347 "bison_parser.cpp"
    break;

  case 152: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 868 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4353 "bison_parser.cpp"
    break;

  case 153: /* opt_limit: %empty  */
#line 869 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4359 "bison_parser.cpp"
    break;

  case 154: /* expr_list: expr_alias  */
#line 874 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4368 "bison_parser.cpp"
    break;

  case 155: /* expr_list: expr_list ',' expr_alias  */
#line 878 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4377 "bison_parser.cpp"
    break;

  case 156: /* opt_literal_list: literal_list  */
#line 883 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4383 "bison_parser.cpp"
    break;

  case 157: /* opt_literal_list: %empty  */
#line 884 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4389 "bison_parser.cpp"
    break;

  case 158: /* literal_list: literal  */
#line 886 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4398 "bison_parser.cpp"
    break;

  case 159: /* literal_list: literal_list ',' literal  */
#line 890 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4407 "bison_parser.cpp"
    break;

  case 160: /* expr_alias: expr opt_alias  */
#line 895 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4419 "bison_parser.cpp"
    break;

  case 166: /* operand: '(' expr ')'  */
#line 905 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4425 "bison_parser.cpp"
    break;

  case 176: /* operand: '(' select_no_paren ')'  */
#line 907 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4433 "bison_parser.cpp"
    break;

  case 179: /* unary_expr: '-' operand  */
#line 913 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4439 "bison_parser.cpp"
    break;

  case 180: /* unary_expr: NOT operand  */
#line 914 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4445 "bison_parser.cpp"
    break;

  case 181: /* unary_expr: operand ISNULL  */
#line 915 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4451 "bison_parser.cpp"
    break;

  case 182: /* unary_expr: operand IS NULL  */
#line 916 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4457 "bison_parser.cpp"
    break;

  case 183: /* unary_expr: operand IS NOT NULL  */
#line 917 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4463 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand '-' operand  */
#line 919 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4469 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand '+' operand  */
#line 920 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4475 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand '/' operand  */
#line 921 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4481 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '*' operand  */
#line 922 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4487 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand '%' operand  */
#line 923 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4493 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand '^' operand  */
#line 924 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4499 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand LIKE operand  */
#line 925 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4505 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand NOT LIKE operand  */
#line 926 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4511 "bison_parser.cpp"
    break;

  case 193: /* binary_expr: operand ILIKE operand  */
#line 927 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4517 "bison_parser.cpp"
    break;

  case 194: /* binary_expr: operand CONCAT operand  */
#line 928 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4523 "bison_parser.cpp"
    break;

  case 195: /* logic_expr: expr AND expr  */
#line 930 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4529 "bison_parser.cpp"
    break;

  case 196: /* logic_expr: expr OR expr  */
#line 931 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4535 "bison_parser.cpp"
    break;

  case 197: /* in_expr: operand IN '(' expr_list ')'  */
#line 933 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4541 "bison_parser.cpp"
    break;

  case 198: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 934 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4547 "bison_parser.cpp"
    break;

  case 199: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 935 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4553 "bison_parser.cpp"
    break;

  case 200: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 936 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4559 "bison_parser.cpp"
    break;

  case 201: /* case_expr: CASE expr case_list END  */
#line 940 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4565 "bison_parser.cpp"
    break;

  case 202: /* case_expr: CASE expr case_list ELSE expr END  */
#line 941 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4571 "bison_parser.cpp"
    break;

  case 203: /* case_expr: CASE case_list END  */
#line 942 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4577 "bison_parser.cpp"
    break;

  case 204: /* case_expr: CASE case_list ELSE expr END  */
#line 943 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4583 "bison_parser.cpp"
    break;

  case 205: /* case_list: WHEN expr THEN expr  */
#line 945 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4589 "bison_parser.cpp"
    break;

  case 206: /* case_list: case_list WHEN expr THEN expr  */
#line 946 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4595 "bison_parser.cpp"
    break;

  case 207: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 948 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4601 "bison_parser.cpp"
    break;

  case 208: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 949 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4607 "bison_parser.cpp"
    break;

  case 209: /* comp_expr: operand '=' operand  */
#line 951 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4613 "bison_parser.cpp"
    break;

  case 210: /* comp_expr: operand EQUALS operand  */
#line 952 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4619 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand NOTEQUALS operand  */
#line 953 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4625 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand '<' operand  */
#line 954 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4631 "bison_parser.cpp"
    break;

  case 213: /* comp_expr: operand '>' operand  */
#line 955 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4637 "bison_parser.cpp"
    break;

  case 214: /* comp_expr: operand LESSEQ operand  */
#line 956 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4643 "bison_parser.cpp"
    break;

  case 215: /* comp_expr: operand GREATEREQ operand  */
#line 957 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4649 "bison_parser.cpp"
    break;

  case 216: /* function_expr: IDENTIFIER '(' ')'  */
#line 959 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4655 "bison_parser.cpp"
    break;

  case 217: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 960 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4661 "bison_parser.cpp"
    break;

  case 218: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 962 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4667 "bison_parser.cpp"
    break;

  case 219: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 964 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4673 "bison_parser.cpp"
    break;

  case 220: /* datetime_field: SECOND  */
#line 966 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4679 "bison_parser.cpp"
    break;

  case 221: /* datetime_field: MINUTE  */
#line 967 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4685 "bison_parser.cpp"
    break;

  case 222: /* datetime_field: HOUR  */
#line 968 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4691 "bison_parser.cpp"
    break;

  case 223: /* datetime_field: DAY  */
#line 969 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4697 "bison_parser.cpp"
    break;

  case 224: /* datetime_field: MONTH  */
#line 970 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4703 "bison_parser.cpp"
    break;

  case 225: /* datetime_field: YEAR  */
#line 971 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4709 "bison_parser.cpp"
    break;

  case 226: /* datetime_field_plural: SECONDS  */
#line 973 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4715 "bison_parser.cpp"
    break;

  case 227: /* datetime_field_plural: MINUTES  */
#line 974 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4721 "bison_parser.cpp"
    break;

  case 228: /* datetime_field_plural: HOURS  */
#line 975 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4727 "bison_parser.cpp"
    break;

  case 229: /* datetime_field_plural: DAYS  */
#line 976 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4733 "bison_parser.cpp"
    break;

  case 230: /* datetime_field_plural: MONTHS  */
#line 977 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4739 "bison_parser.cpp"
    break;

  case 231: /* datetime_field_plural: YEARS  */
#line 978 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4745 "bison_parser.cpp"
    break;

  case 234: /* array_expr: ARRAY '[' expr_list ']'  */
#line 982 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4751 "bison_parser.cpp"
    break;

  case 235: /* array_index: operand '[' int_literal ']'  */
#line 984 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4757 "bison_parser.cpp"
    break;

  case 236: /* between_expr: operand BETWEEN operand AND operand  */
#line 986 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4763 "bison_parser.cpp"
    break;

  case 237: /* column_name: IDENTIFIER  */
#line 988 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4769 "bison_parser.cpp"
    break;

  case 238: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 989 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4775 "bison_parser.cpp"
    break;

  case 239: /* column_name: '*'  */
#line 990 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4781 "bison_parser.cpp"
    break;

  case 240: /* column_name: IDENTIFIER '.' '*'  */
#line 991 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4787 "bison_parser.cpp"
    break;

  case 248: /* string_literal: STRING  */
#line 995 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4793 "bison_parser.cpp"
    break;

  case 249: /* bool_literal: TRUE  */
#line 997 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4799 "bison_parser.cpp"
    break;

  case 250: /* bool_literal: FALSE  */
#line 998 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4805 "bison_parser.cpp"
    break;

  case 251: /* num_literal: FLOATVAL  */
#line 1000 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4811 "bison_parser.cpp"
    break;

  case 253: /* int_literal: INTVAL  */
#line 1003 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4817 "bison_parser.cpp"
    break;

  case 254: /* null_literal: NULL  */
#line 1005 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4823 "bison_parser.cpp"
    break;

  case 255: /* date_literal: DATE STRING  */
#line 1007 "bison_parser.y"
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
#line 4838 "bison_parser.cpp"
    break;

  case 256: /* interval_literal: int_literal duration_field  */
#line 1018 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4847 "bison_parser.cpp"
    break;

  case 257: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1022 "bison_parser.y"
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
#line 4863 "bison_parser.cpp"
    break;

  case 258: /* interval_literal: INTERVAL STRING  */
#line 1033 "bison_parser.y"
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
#line 4899 "bison_parser.cpp"
    break;

  case 259: /* param_expr: '?'  */
#line 1065 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4909 "bison_parser.cpp"
    break;

  case 261: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1074 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 4920 "bison_parser.cpp"
    break;

  case 265: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1083 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4931 "bison_parser.cpp"
    break;

  case 266: /* table_ref_commalist: table_ref_atomic  */
#line 1090 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 4940 "bison_parser.cpp"
    break;

  case 267: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1094 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 4949 "bison_parser.cpp"
    break;

  case 268: /* table_ref_name: table_name opt_table_alias  */
#line 1099 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4961 "bison_parser.cpp"
    break;

  case 269: /* table_ref_name_no_alias: table_name  */
#line 1107 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 4971 "bison_parser.cpp"
    break;

  case 270: /* table_name: IDENTIFIER  */
#line 1113 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4980 "bison_parser.cpp"
    break;

  case 271: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1117 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4989 "bison_parser.cpp"
    break;

  case 272: /* opt_index_name: IDENTIFIER  */
#line 1122 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 4995 "bison_parser.cpp"
    break;

  case 273: /* opt_index_name: %empty  */
#line 1123 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5001 "bison_parser.cpp"
    break;

  case 275: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1125 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5007 "bison_parser.cpp"
    break;

  case 277: /* opt_table_alias: %empty  */
#line 1127 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5013 "bison_parser.cpp"
    break;

  case 278: /* alias: AS IDENTIFIER  */
#line 1129 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5019 "bison_parser.cpp"
    break;

  case 279: /* alias: IDENTIFIER  */
#line 1130 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5025 "bison_parser.cpp"
    break;

  case 281: /* opt_alias: %empty  */
#line 1132 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5031 "bison_parser.cpp"
    break;

  case 282: /* opt_locking_clause: opt_locking_clause_list  */
#line 1138 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5037 "bison_parser.cpp"
    break;

  case 283: /* opt_locking_clause: %empty  */
#line 1139 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5043 "bison_parser.cpp"
    break;

  case 284: /* opt_locking_clause_list: locking_clause  */
#line 1141 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5052 "bison_parser.cpp"
    break;

  case 285: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1145 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5061 "bison_parser.cpp"
    break;

  case 286: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1150 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5072 "bison_parser.cpp"
    break;

  case 287: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1156 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5083 "bison_parser.cpp"
    break;

  case 288: /* row_lock_mode: UPDATE  */
#line 1163 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5089 "bison_parser.cpp"
    break;

  case 289: /* row_lock_mode: NO KEY UPDATE  */
#line 1164 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5095 "bison_parser.cpp"
    break;

  case 290: /* row_lock_mode: SHARE  */
#line 1165 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5101 "bison_parser.cpp"
    break;

  case 291: /* row_lock_mode: KEY SHARE  */
#line 1166 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5107 "bison_parser.cpp"
    break;

  case 292: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1168 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5113 "bison_parser.cpp"
    break;

  case 293: /* opt_row_lock_policy: NOWAIT  */
#line 1169 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5119 "bison_parser.cpp"
    break;

  case 294: /* opt_row_lock_policy: %empty  */
#line 1170 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5125 "bison_parser.cpp"
    break;

  case 296: /* opt_with_clause: %empty  */
#line 1176 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5131 "bison_parser.cpp"
    break;

  case 297: /* with_clause: WITH with_description_list  */
#line 1178 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5137 "bison_parser.cpp"
    break;

  case 298: /* with_description_list: with_description  */
#line 1180 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5146 "bison_parser.cpp"
    break;

  case 299: /* with_description_list: with_description_list ',' with_description  */
#line 1184 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5155 "bison_parser.cpp"
    break;

  case 300: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1189 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5165 "bison_parser.cpp"
    break;

  case 301: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1199 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5177 "bison_parser.cpp"
    break;

  case 302: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1206 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5190 "bison_parser.cpp"
    break;

  case 303: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1214 "bison_parser.y"
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
#line 5210 "bison_parser.cpp"
    break;

  case 304: /* opt_join_type: INNER  */
#line 1230 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5216 "bison_parser.cpp"
    break;

  case 305: /* opt_join_type: LEFT OUTER  */
#line 1231 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5222 "bison_parser.cpp"
    break;

  case 306: /* opt_join_type: LEFT  */
#line 1232 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5228 "bison_parser.cpp"
    break;

  case 307: /* opt_join_type: RIGHT OUTER  */
#line 1233 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5234 "bison_parser.cpp"
    break;

  case 308: /* opt_join_type: RIGHT  */
#line 1234 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5240 "bison_parser.cpp"
    break;

  case 309: /* opt_join_type: FULL OUTER  */
#line 1235 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5246 "bison_parser.cpp"
    break;

  case 310: /* opt_join_type: OUTER  */
#line 1236 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5252 "bison_parser.cpp"
    break;

  case 311: /* opt_join_type: FULL  */
#line 1237 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5258 "bison_parser.cpp"
    break;

  case 312: /* opt_join_type: CROSS  */
#line 1238 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5264 "bison_parser.cpp"
    break;

  case 313: /* opt_join_type: %empty  */
#line 1239 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5270 "bison_parser.cpp"
    break;

  case 317: /* ident_commalist: IDENTIFIER  */
#line 1250 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5279 "bison_parser.cpp"
    break;

  case 318: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1254 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5288 "bison_parser.cpp"
    break;


#line 5292 "bison_parser.cpp"

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

#line 1260 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
