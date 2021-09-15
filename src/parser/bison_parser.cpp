/* A Bison parser, made by GNU Bison 3.7.5.  */

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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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
#line 1 "bison_parser.y"

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
#include <iostream>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


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
  YYSYMBOL_SPATIAL = 29,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 30,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 31,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 32,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 33,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 34,                    /* COLUMN  */
  YYSYMBOL_CREATE = 35,                    /* CREATE  */
  YYSYMBOL_DELETE = 36,                    /* DELETE  */
  YYSYMBOL_DIRECT = 37,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 38,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 39,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 40,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 41,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 42,                   /* EXTRACT  */
  YYSYMBOL_CAST = 43,                      /* CAST  */
  YYSYMBOL_FORMAT = 44,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 45,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 46,                    /* HAVING  */
  YYSYMBOL_IMPORT = 47,                    /* IMPORT  */
  YYSYMBOL_INSERT = 48,                    /* INSERT  */
  YYSYMBOL_ISNULL = 49,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 50,                    /* OFFSET  */
  YYSYMBOL_RENAME = 51,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 52,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 53,                    /* SELECT  */
  YYSYMBOL_SORTED = 54,                    /* SORTED  */
  YYSYMBOL_TABLES = 55,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 56,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 57,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 58,                    /* UPDATE  */
  YYSYMBOL_VALUES = 59,                    /* VALUES  */
  YYSYMBOL_AFTER = 60,                     /* AFTER  */
  YYSYMBOL_ALTER = 61,                     /* ALTER  */
  YYSYMBOL_CROSS = 62,                     /* CROSS  */
  YYSYMBOL_DELTA = 63,                     /* DELTA  */
  YYSYMBOL_FLOAT = 64,                     /* FLOAT  */
  YYSYMBOL_GROUP = 65,                     /* GROUP  */
  YYSYMBOL_INDEX = 66,                     /* INDEX  */
  YYSYMBOL_INNER = 67,                     /* INNER  */
  YYSYMBOL_LIMIT = 68,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 69,                     /* LOCAL  */
  YYSYMBOL_MERGE = 70,                     /* MERGE  */
  YYSYMBOL_MINUS = 71,                     /* MINUS  */
  YYSYMBOL_ORDER = 72,                     /* ORDER  */
  YYSYMBOL_OUTER = 73,                     /* OUTER  */
  YYSYMBOL_RIGHT = 74,                     /* RIGHT  */
  YYSYMBOL_TABLE = 75,                     /* TABLE  */
  YYSYMBOL_UNION = 76,                     /* UNION  */
  YYSYMBOL_USING = 77,                     /* USING  */
  YYSYMBOL_WHERE = 78,                     /* WHERE  */
  YYSYMBOL_CALL = 79,                      /* CALL  */
  YYSYMBOL_CASE = 80,                      /* CASE  */
  YYSYMBOL_CHAR = 81,                      /* CHAR  */
  YYSYMBOL_COPY = 82,                      /* COPY  */
  YYSYMBOL_DATE = 83,                      /* DATE  */
  YYSYMBOL_DATETIME = 84,                  /* DATETIME  */
  YYSYMBOL_DESC = 85,                      /* DESC  */
  YYSYMBOL_DROP = 86,                      /* DROP  */
  YYSYMBOL_ELSE = 87,                      /* ELSE  */
  YYSYMBOL_FILE = 88,                      /* FILE  */
  YYSYMBOL_FROM = 89,                      /* FROM  */
  YYSYMBOL_FULL = 90,                      /* FULL  */
  YYSYMBOL_HASH = 91,                      /* HASH  */
  YYSYMBOL_HINT = 92,                      /* HINT  */
  YYSYMBOL_INTO = 93,                      /* INTO  */
  YYSYMBOL_JOIN = 94,                      /* JOIN  */
  YYSYMBOL_LEFT = 95,                      /* LEFT  */
  YYSYMBOL_LIKE = 96,                      /* LIKE  */
  YYSYMBOL_LOAD = 97,                      /* LOAD  */
  YYSYMBOL_LONG = 98,                      /* LONG  */
  YYSYMBOL_NULL = 99,                      /* NULL  */
  YYSYMBOL_PLAN = 100,                     /* PLAN  */
  YYSYMBOL_SHOW = 101,                     /* SHOW  */
  YYSYMBOL_TEXT = 102,                     /* TEXT  */
  YYSYMBOL_THEN = 103,                     /* THEN  */
  YYSYMBOL_TIME = 104,                     /* TIME  */
  YYSYMBOL_VIEW = 105,                     /* VIEW  */
  YYSYMBOL_WHEN = 106,                     /* WHEN  */
  YYSYMBOL_WITH = 107,                     /* WITH  */
  YYSYMBOL_ADD = 108,                      /* ADD  */
  YYSYMBOL_ALL = 109,                      /* ALL  */
  YYSYMBOL_AND = 110,                      /* AND  */
  YYSYMBOL_ASC = 111,                      /* ASC  */
  YYSYMBOL_END = 112,                      /* END  */
  YYSYMBOL_FOR = 113,                      /* FOR  */
  YYSYMBOL_INT = 114,                      /* INT  */
  YYSYMBOL_KEY = 115,                      /* KEY  */
  YYSYMBOL_NOT = 116,                      /* NOT  */
  YYSYMBOL_OFF = 117,                      /* OFF  */
  YYSYMBOL_SET = 118,                      /* SET  */
  YYSYMBOL_TOP = 119,                      /* TOP  */
  YYSYMBOL_AS = 120,                       /* AS  */
  YYSYMBOL_BY = 121,                       /* BY  */
  YYSYMBOL_IF = 122,                       /* IF  */
  YYSYMBOL_IN = 123,                       /* IN  */
  YYSYMBOL_IS = 124,                       /* IS  */
  YYSYMBOL_OF = 125,                       /* OF  */
  YYSYMBOL_ON = 126,                       /* ON  */
  YYSYMBOL_OR = 127,                       /* OR  */
  YYSYMBOL_TO = 128,                       /* TO  */
  YYSYMBOL_ARRAY = 129,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 130,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 131,                    /* ILIKE  */
  YYSYMBOL_SECOND = 132,                   /* SECOND  */
  YYSYMBOL_MINUTE = 133,                   /* MINUTE  */
  YYSYMBOL_HOUR = 134,                     /* HOUR  */
  YYSYMBOL_DAY = 135,                      /* DAY  */
  YYSYMBOL_MONTH = 136,                    /* MONTH  */
  YYSYMBOL_YEAR = 137,                     /* YEAR  */
  YYSYMBOL_SECONDS = 138,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 139,                  /* MINUTES  */
  YYSYMBOL_HOURS = 140,                    /* HOURS  */
  YYSYMBOL_DAYS = 141,                     /* DAYS  */
  YYSYMBOL_MONTHS = 142,                   /* MONTHS  */
  YYSYMBOL_YEARS = 143,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 144,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 145,                     /* TRUE  */
  YYSYMBOL_FALSE = 146,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 147,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 148,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 149,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 150,                 /* ROLLBACK  */
  YYSYMBOL_151_ = 151,                     /* '='  */
  YYSYMBOL_EQUALS = 152,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 153,                /* NOTEQUALS  */
  YYSYMBOL_154_ = 154,                     /* '<'  */
  YYSYMBOL_155_ = 155,                     /* '>'  */
  YYSYMBOL_LESS = 156,                     /* LESS  */
  YYSYMBOL_GREATER = 157,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 158,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 159,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 160,                  /* NOTNULL  */
  YYSYMBOL_161_ = 161,                     /* '+'  */
  YYSYMBOL_162_ = 162,                     /* '-'  */
  YYSYMBOL_163_ = 163,                     /* '*'  */
  YYSYMBOL_164_ = 164,                     /* '/'  */
  YYSYMBOL_165_ = 165,                     /* '%'  */
  YYSYMBOL_166_ = 166,                     /* '^'  */
  YYSYMBOL_UMINUS = 167,                   /* UMINUS  */
  YYSYMBOL_168_ = 168,                     /* '['  */
  YYSYMBOL_169_ = 169,                     /* ']'  */
  YYSYMBOL_170_ = 170,                     /* '('  */
  YYSYMBOL_171_ = 171,                     /* ')'  */
  YYSYMBOL_172_ = 172,                     /* '.'  */
  YYSYMBOL_173_ = 173,                     /* ';'  */
  YYSYMBOL_174_ = 174,                     /* ','  */
  YYSYMBOL_175_ = 175,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 176,                 /* $accept  */
  YYSYMBOL_input = 177,                    /* input  */
  YYSYMBOL_statement_list = 178,           /* statement_list  */
  YYSYMBOL_statement = 179,                /* statement  */
  YYSYMBOL_preparable_statement = 180,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 181,                /* opt_hints  */
  YYSYMBOL_hint_list = 182,                /* hint_list  */
  YYSYMBOL_hint = 183,                     /* hint  */
  YYSYMBOL_transaction_statement = 184,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 185,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 186,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 187,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 188,        /* execute_statement  */
  YYSYMBOL_import_statement = 189,         /* import_statement  */
  YYSYMBOL_file_type = 190,                /* file_type  */
  YYSYMBOL_file_path = 191,                /* file_path  */
  YYSYMBOL_opt_file_type = 192,            /* opt_file_type  */
  YYSYMBOL_export_statement = 193,         /* export_statement  */
  YYSYMBOL_show_statement = 194,           /* show_statement  */
  YYSYMBOL_create_statement = 195,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 196,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 197,     /* column_def_commalist  */
  YYSYMBOL_column_def = 198,               /* column_def  */
  YYSYMBOL_column_type = 199,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 200,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 201,           /* drop_statement  */
  YYSYMBOL_opt_exists = 202,               /* opt_exists  */
  YYSYMBOL_delete_statement = 203,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 204,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 205,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 206,          /* opt_column_list  */
  YYSYMBOL_update_statement = 207,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 208,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 209,            /* update_clause  */
  YYSYMBOL_select_statement = 210,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 211, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 212, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 213,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 214,          /* select_no_paren  */
  YYSYMBOL_set_operator = 215,             /* set_operator  */
  YYSYMBOL_set_type = 216,                 /* set_type  */
  YYSYMBOL_opt_all = 217,                  /* opt_all  */
  YYSYMBOL_select_clause = 218,            /* select_clause  */
  YYSYMBOL_opt_distinct = 219,             /* opt_distinct  */
  YYSYMBOL_select_list = 220,              /* select_list  */
  YYSYMBOL_opt_from_clause = 221,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 222,              /* from_clause  */
  YYSYMBOL_opt_where = 223,                /* opt_where  */
  YYSYMBOL_opt_group = 224,                /* opt_group  */
  YYSYMBOL_opt_having = 225,               /* opt_having  */
  YYSYMBOL_opt_order = 226,                /* opt_order  */
  YYSYMBOL_order_list = 227,               /* order_list  */
  YYSYMBOL_order_desc = 228,               /* order_desc  */
  YYSYMBOL_opt_order_type = 229,           /* opt_order_type  */
  YYSYMBOL_opt_top = 230,                  /* opt_top  */
  YYSYMBOL_opt_limit = 231,                /* opt_limit  */
  YYSYMBOL_expr_list = 232,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 233,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 234,             /* literal_list  */
  YYSYMBOL_expr_alias = 235,               /* expr_alias  */
  YYSYMBOL_expr = 236,                     /* expr  */
  YYSYMBOL_operand = 237,                  /* operand  */
  YYSYMBOL_scalar_expr = 238,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 239,               /* unary_expr  */
  YYSYMBOL_binary_expr = 240,              /* binary_expr  */
  YYSYMBOL_logic_expr = 241,               /* logic_expr  */
  YYSYMBOL_in_expr = 242,                  /* in_expr  */
  YYSYMBOL_case_expr = 243,                /* case_expr  */
  YYSYMBOL_case_list = 244,                /* case_list  */
  YYSYMBOL_exists_expr = 245,              /* exists_expr  */
  YYSYMBOL_comp_expr = 246,                /* comp_expr  */
  YYSYMBOL_function_expr = 247,            /* function_expr  */
  YYSYMBOL_extract_expr = 248,             /* extract_expr  */
  YYSYMBOL_cast_expr = 249,                /* cast_expr  */
  YYSYMBOL_datetime_field = 250,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 251,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 252,           /* duration_field  */
  YYSYMBOL_array_expr = 253,               /* array_expr  */
  YYSYMBOL_array_index = 254,              /* array_index  */
  YYSYMBOL_between_expr = 255,             /* between_expr  */
  YYSYMBOL_column_name = 256,              /* column_name  */
  YYSYMBOL_literal = 257,                  /* literal  */
  YYSYMBOL_string_literal = 258,           /* string_literal  */
  YYSYMBOL_bool_literal = 259,             /* bool_literal  */
  YYSYMBOL_num_literal = 260,              /* num_literal  */
  YYSYMBOL_int_literal = 261,              /* int_literal  */
  YYSYMBOL_null_literal = 262,             /* null_literal  */
  YYSYMBOL_date_literal = 263,             /* date_literal  */
  YYSYMBOL_interval_literal = 264,         /* interval_literal  */
  YYSYMBOL_opt_datetime_field = 265,       /* opt_datetime_field  */
  YYSYMBOL_param_expr = 266,               /* param_expr  */
  YYSYMBOL_table_ref = 267,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 268,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 269, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 270,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 271,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 272,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 273,               /* table_name  */
  YYSYMBOL_table_alias = 274,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 275,          /* opt_table_alias  */
  YYSYMBOL_alias = 276,                    /* alias  */
  YYSYMBOL_opt_alias = 277,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 278,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 279,              /* with_clause  */
  YYSYMBOL_with_description_list = 280,    /* with_description_list  */
  YYSYMBOL_with_description = 281,         /* with_description  */
  YYSYMBOL_join_clause = 282,              /* join_clause  */
  YYSYMBOL_opt_join_type = 283,            /* opt_join_type  */
  YYSYMBOL_join_condition = 284,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 285,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 286           /* ident_commalist  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   779

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  491

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   413


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
       2,     2,     2,     2,     2,     2,     2,   165,     2,     2,
     170,   171,   163,   161,   174,   162,   172,   164,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   173,
     154,   151,   155,   175,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   168,     2,   169,   166,     2,     2,     2,     2,     2,
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
     145,   146,   147,   148,   149,   150,   152,   153,   156,   157,
     158,   159,   160,   167
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   271,   271,   292,   298,   307,   311,   315,   318,   321,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   345,
     346,   351,   352,   356,   360,   372,   375,   378,   384,   385,
     392,   399,   402,   406,   420,   426,   435,   452,   456,   459,
     468,   482,   485,   490,   504,   517,   524,   531,   542,   543,
     547,   548,   552,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   571,   572,   573,   583,   589,   595,   603,
     604,   613,   622,   635,   642,   653,   654,   664,   673,   674,
     678,   690,   694,   698,   712,   713,   716,   717,   728,   729,
     733,   743,   756,   763,   767,   771,   778,   781,   787,   799,
     800,   804,   808,   809,   813,   818,   819,   823,   828,   832,
     833,   837,   838,   842,   843,   847,   851,   852,   853,   859,
     860,   864,   865,   866,   867,   868,   869,   876,   877,   881,
     882,   886,   887,   891,   901,   902,   903,   904,   905,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     923,   924,   928,   929,   930,   931,   932,   936,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   946,   950,   951,
     955,   956,   957,   958,   964,   965,   966,   967,   971,   972,
     976,   977,   981,   982,   983,   984,   985,   986,   987,   991,
     992,   996,  1000,  1004,  1005,  1006,  1007,  1008,  1009,  1013,
    1014,  1015,  1016,  1017,  1018,  1022,  1023,  1027,  1031,  1035,
    1039,  1040,  1041,  1042,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1056,  1060,  1061,  1065,  1066,  1070,  1074,  1078,  1091,
    1092,  1130,  1131,  1135,  1147,  1148,  1158,  1159,  1163,  1164,
    1173,  1174,  1179,  1190,  1199,  1200,  1205,  1206,  1211,  1212,
    1217,  1218,  1223,  1224,  1233,  1234,  1238,  1242,  1246,  1253,
    1266,  1274,  1284,  1303,  1304,  1305,  1306,  1307,  1308,  1309,
    1310,  1311,  1312,  1317,  1326,  1327,  1332,  1333
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
  "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE",
  "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT",
  "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED",
  "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING",
  "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC",
  "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN",
  "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN",
  "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR",
  "INT", "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS",
  "OF", "ON", "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS",
  "MONTHS", "YEARS", "INTERVAL", "TRUE", "FALSE", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_within_set_operation",
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
  "date_literal", "interval_literal", "opt_datetime_field", "param_expr",
  "table_ref", "table_ref_atomic", "nonjoin_table_ref_atomic",
  "table_ref_commalist", "table_ref_name", "table_ref_name_no_alias",
  "table_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
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

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,    61,   406,   407,    60,    62,   408,   409,   410,   411,
     412,    43,    45,    42,    47,    37,    94,   413,    91,    93,
      40,    41,    46,    59,    44,    63
};
#endif

#define YYPACT_NINF (-397)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-275)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     556,    51,    80,    88,   120,    80,   -35,   -41,    35,    41,
      80,    80,   -18,    16,   157,    70,    70,    70,   147,     8,
    -397,    75,  -397,    75,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,   -32,  -397,   198,    50,  -397,
      38,   138,  -397,   125,   125,    80,   239,    80,   136,  -397,
     -56,   149,   149,    80,  -397,   140,    98,  -397,  -397,  -397,
    -397,  -397,  -397,   551,  -397,   190,  -397,  -397,   164,   -32,
      45,  -397,   111,  -397,   281,    69,   285,   175,    80,    80,
     214,  -397,   210,   133,   301,   305,   305,   269,    80,    80,
    -397,   141,   157,  -397,   150,   313,   310,   153,   154,  -397,
    -397,  -397,   -32,   218,   207,   -32,    -6,  -397,  -397,  -397,
    -397,   325,  -397,   326,  -397,  -397,  -397,   165,   163,  -397,
    -397,  -397,  -397,   394,  -397,  -397,  -397,  -397,  -397,  -397,
     297,   -53,   133,   302,  -397,   305,   337,    -4,   196,   -52,
    -397,   243,  -397,   243,  -397,  -397,  -397,  -397,  -397,   348,
    -397,  -397,   302,  -397,  -397,   280,  -397,  -397,    45,  -397,
    -397,   302,   280,   302,   124,  -397,  -397,   227,  -397,    69,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,   362,   260,   363,   248,
      76,   199,   203,   209,   151,   329,   212,   350,  -397,   259,
      34,   391,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,   288,  -397,
      61,   216,  -397,   302,   301,  -397,   340,  -397,  -397,   217,
      65,  -397,   307,   220,  -397,    22,    -6,   -32,   223,  -397,
      79,    -6,    34,   349,   -11,  -397,  -397,  -397,   312,  -397,
     293,    81,  -397,   260,     7,    10,   345,   227,   302,   302,
     -46,    97,   232,   350,   566,   302,    32,   244,   -76,   302,
     302,   350,  -397,   350,   -55,   246,   -57,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   313,    80,  -397,   411,    69,    34,  -397,   239,
      69,  -397,   348,     6,   214,  -397,   302,  -397,   414,  -397,
    -397,  -397,  -397,   302,  -397,  -397,  -397,  -397,   302,   302,
     305,  -397,   249,  -397,  -397,   250,  -397,  -397,  -397,  -397,
    -397,    54,  -397,   363,  -397,  -397,   302,  -397,  -397,   252,
     335,    23,    36,   112,   302,   302,  -397,   345,   330,  -111,
    -397,  -397,  -397,   315,   515,   592,   350,   257,   259,  -397,
     333,   267,   592,   592,   592,   592,   611,   611,   611,   611,
      32,    32,   -84,   -84,   -84,   -92,   268,  -397,  -397,    85,
    -397,    87,  -397,   260,  -397,   316,  -397,   262,  -397,    20,
    -397,   373,  -397,  -397,  -397,    34,    34,  -397,   433,   435,
    -397,   343,  -397,  -397,   103,  -397,   302,   293,   302,   302,
    -397,   118,   116,   272,  -397,   350,   592,   259,   273,   107,
    -397,  -397,  -397,  -397,   282,   357,  -397,  -397,  -397,   379,
     381,   383,   365,     6,   454,  -397,  -397,  -397,   339,  -397,
     292,   296,  -397,  -397,    31,   298,    34,   139,  -397,   302,
    -397,   566,   299,   114,  -397,  -397,    20,     6,  -397,  -397,
    -397,     6,   388,   306,   302,  -397,  -397,  -397,  -397,  -397,
      34,  -397,  -397,  -397,  -397,   523,   337,   -29,   311,   302,
     144,   302,  -397,    12,    34,  -397,  -397,    34,   308,   300,
    -397
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   275,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   254,     0,   244,    72,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   243,
       0,    70,    70,     0,    41,     0,   256,   257,    28,    25,
      27,    26,     1,   255,     2,     0,     6,     5,   120,     0,
      81,    82,   112,    68,     0,   130,     0,     0,     0,     0,
     106,    36,     0,    76,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   100,     0,     0,    94,
      95,    93,     0,    97,     0,     0,   126,   245,   221,   224,
     226,     0,   227,     0,   222,   223,   233,     0,   129,   131,
     214,   215,   216,   225,   217,   218,   219,   220,    31,    30,
       0,     0,    76,     0,    71,     0,     0,     0,     0,   106,
      78,    39,    37,    39,    69,    66,    67,   259,   258,     0,
     119,    99,     0,    89,    88,   112,    85,    84,    86,    96,
      92,     0,   112,     0,     0,    90,   228,   232,    33,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   229,    48,     0,   255,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,   212,     0,
     105,   134,   141,   142,   143,   136,   138,   144,   137,   157,
     145,   146,   147,   148,   140,   135,   150,   151,     0,   276,
       0,     0,    74,     0,     0,    77,     0,    35,    40,    23,
       0,    21,   103,   101,   127,   253,   126,     0,   111,   113,
     118,   126,   122,   124,   121,   231,   230,   132,     0,    46,
       0,     0,    50,   255,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,     0,   152,     0,     0,     0,
       0,     0,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    80,    79,     0,
       0,    19,     0,     0,   106,   102,     0,   251,     0,   252,
     133,    83,    87,     0,   117,   116,   115,    91,     0,     0,
       0,    54,     0,    57,    56,     0,    62,    61,    55,    60,
      53,    65,    45,     0,    47,   189,     0,   211,   213,     0,
       0,     0,     0,     0,     0,     0,   176,     0,     0,     0,
     149,   139,   168,   169,     0,   164,     0,     0,     0,   155,
       0,   167,   166,   182,   183,   184,   185,   186,   187,   188,
     159,   158,   161,   160,   162,   163,     0,    34,   277,     0,
      38,     0,    22,   255,   104,   234,   236,     0,   238,   249,
     237,   108,   128,   250,   114,   125,   123,    44,     0,     0,
      63,     0,    52,    51,     0,   180,     0,     0,     0,     0,
     174,     0,     0,     0,   207,     0,   165,     0,     0,     0,
     156,   208,    73,    24,     0,     0,   271,   263,   269,   267,
     270,   265,     0,     0,     0,   248,   242,   246,     0,    98,
       0,     0,    64,   190,     0,     0,   178,     0,   177,     0,
     181,   209,     0,     0,   172,   170,   249,     0,   266,   268,
     264,     0,   235,   250,     0,    58,    59,   191,   192,   175,
     179,   173,   171,   239,   260,   272,     0,   110,     0,     0,
       0,     0,   107,     0,   273,   261,   247,   109,   210,     0,
     262
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -397,  -397,  -397,   405,  -397,   461,  -397,   183,  -397,   155,
    -397,  -397,  -397,  -397,   187,   -83,   346,  -397,  -397,  -397,
     444,  -397,   160,    90,  -397,  -397,   446,  -397,  -397,  -397,
     368,  -397,  -397,   277,  -173,   -89,  -397,   100,   -68,   -40,
    -397,  -397,   -78,   251,  -397,  -397,  -397,  -127,  -397,  -397,
    -112,  -397,   189,  -397,  -397,  -144,  -243,  -397,   -80,   197,
    -133,  -177,  -397,  -397,  -397,  -397,  -397,  -397,   256,  -397,
    -397,  -397,  -397,  -397,  -138,  -397,  -397,  -397,  -397,  -397,
      25,   -71,   -79,  -397,  -397,   -87,  -397,  -397,  -397,  -397,
    -397,  -397,  -396,    49,  -397,  -397,  -397,     0,  -397,    53,
     275,  -397,  -397,  -397,  -397,   419,  -397,  -397,  -397,  -397,
      42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    18,    19,    20,    21,    66,   230,   231,    22,    59,
      23,   129,    24,    25,    82,   141,   227,    26,    27,    28,
      78,   251,   252,   331,   402,    29,    88,    30,    31,    32,
     137,    33,   139,   140,    34,   155,   156,   157,    71,   102,
     103,   160,    72,   152,   232,   304,   305,   134,   439,   482,
     106,   238,   239,   316,    96,   165,   233,   117,   118,   234,
     235,   201,   202,   203,   204,   205,   206,   207,   261,   208,
     209,   210,   211,   212,   182,   183,   184,   213,   214,   215,
     216,   217,   120,   121,   122,   123,   124,   125,   126,   246,
     127,   384,   385,   386,   387,   388,    48,   389,   435,   436,
     437,   310,    35,    36,    56,    57,   390,   432,   485,    64,
     220
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     200,    98,    39,   143,   119,    42,   142,   142,   150,    38,
      49,    50,   225,   337,   249,   488,   162,   481,   264,   151,
     266,    68,   349,   307,   158,   307,   133,   158,   240,   245,
     242,   244,   105,    85,   269,    53,   186,   462,   277,   319,
      43,   356,   359,   236,   163,    80,   277,    83,    45,    68,
     241,   270,   218,    90,    99,   221,   142,    51,   414,   360,
     259,   260,   164,   306,   269,   475,   268,   187,   357,   222,
      44,    54,    86,   108,   109,   110,   292,    37,   131,   132,
     334,   270,   291,    38,   292,   100,   264,    52,   145,   146,
     297,    40,   311,   404,   354,   351,   355,   317,   247,   269,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   419,   270,   188,   237,   340,
      99,   101,   224,    41,    46,   341,   342,   190,   108,   109,
     110,   267,   269,   269,    47,    70,   352,   353,    69,   408,
     434,   269,   308,   407,   269,   306,   269,    62,   312,   270,
     270,   100,   111,   400,   190,   108,   109,   110,   270,   158,
      55,   270,   277,   270,   314,   191,   192,   193,   112,    97,
     401,    60,    61,   338,   453,   198,   383,   391,   335,   416,
     240,    63,    65,   104,   344,   395,   396,   101,   339,   269,
     315,   147,   191,   192,   193,   288,   289,   290,   291,   409,
     292,    73,   467,   345,   194,   376,   270,   111,    75,   346,
     424,   411,   412,   113,   114,   115,   379,    58,   345,   449,
     381,   477,    74,   112,   410,   119,   269,    76,   269,   119,
     448,   194,   294,   243,   111,   295,   301,   397,   451,   302,
     195,   142,    81,   270,   116,   270,   254,    77,   255,   269,
     112,   469,   332,   196,    84,   333,   422,   259,   423,   169,
      91,   169,   190,   108,   109,   110,   270,   195,   113,   114,
     115,    87,    92,   444,   443,   446,   447,   306,   455,   413,
     196,   306,    94,    95,   107,   472,   197,   198,   306,   128,
     418,   130,   133,   377,   199,   113,   114,   115,   135,   116,
     191,   192,   193,   136,   138,   190,   108,   109,   110,   108,
     144,    69,    68,   197,   198,   486,   470,   321,   295,   110,
     149,   199,   151,   322,   153,   154,   116,   159,   161,   166,
     167,   323,   190,   108,   109,   110,   168,   169,   185,   194,
     219,   425,   111,   191,   192,   193,   484,   223,   487,   452,
     226,   229,   104,   190,   108,   109,   110,   324,   112,   170,
     171,   172,   173,   174,   175,   248,   250,    14,   253,   256,
     262,   192,   193,   257,   325,   195,   326,   327,   426,   258,
     265,   293,   194,   427,   299,   111,   296,   300,   196,   428,
     429,   328,   192,   193,   306,   329,   303,   313,    68,   318,
     320,   112,   347,   113,   114,   115,   430,   330,   271,   194,
    -272,   431,   111,   425,   378,   350,   358,   393,   195,   398,
     399,   197,   198,   405,   406,   269,   356,   417,   112,   199,
     194,   196,   420,   111,   116,   292,   433,   421,   438,   440,
     272,   441,   442,   450,   454,   263,   113,   114,   115,   112,
     426,   457,   458,   456,   459,   427,   460,   463,   196,   461,
     464,   428,   429,   465,   197,   198,   263,   466,    93,   468,
     471,   490,   199,   113,   114,   115,   476,   116,   430,   196,
     255,   483,  -272,   431,    67,   382,   380,   273,    79,   228,
    -240,   197,   198,   403,   113,   114,   115,   445,    89,   199,
     189,   298,   394,   392,   116,   336,   474,   274,   489,   473,
     309,   148,   197,   198,   275,   276,   343,     0,   480,     0,
     199,   277,   278,     0,     0,   116,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,     0,     0,
       0,     0,   279,   280,   281,   282,   283,     0,   425,   284,
     285,  -274,   286,   287,   288,   289,   290,   291,     1,   292,
       0,     0,  -241,     1,   272,     0,     2,     0,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     4,     3,     0,
       0,     0,     4,     5,     0,   426,     6,     7,     5,     0,
     427,     6,     7,     0,     0,     0,   428,   429,     8,     9,
     478,     0,     0,     8,     9,     0,     0,     0,     0,    10,
       0,   273,     0,   430,    10,   272,     0,     0,   431,     0,
       0,     0,     0,     0,     0,   415,     0,     0,     0,     0,
       0,   348,     0,    11,     0,     0,     0,    12,    11,   276,
       0,   272,    12,     0,     0,   277,   278,     0,     0,   479,
       0,     0,    13,     0,     0,     0,     0,    13,    14,     0,
     272,     0,   273,    14,     0,     0,   279,   280,   281,   282,
     283,     0,     0,   284,   285,     0,   286,   287,   288,   289,
     290,   291,   348,   292,     0,     0,     0,     0,  -275,     0,
     276,     0,     0,     0,     0,     0,   277,   278,     0,    15,
      16,    17,     0,     0,    15,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,   279,   280,   281,
     282,   283,   277,  -275,   284,   285,     0,   286,   287,   288,
     289,   290,   291,     0,   292,   276,     0,     0,     0,     0,
       0,   277,     0,  -275,  -275,  -275,   282,   283,     0,     0,
     284,   285,     0,   286,   287,   288,   289,   290,   291,     0,
     292,     0,     0,     0,     0,  -275,  -275,     0,     0,  -275,
    -275,     0,   286,   287,   288,   289,   290,   291,     0,   292
};

static const yytype_int16 yycheck[] =
{
     133,    69,     2,    86,    75,     5,    85,    86,    95,     3,
      10,    11,   139,     3,   187,     3,   105,    46,   195,    12,
     197,    53,   265,     3,   102,     3,    78,   105,   161,   167,
     163,   164,    72,    89,   110,    19,    89,   433,   130,    50,
      75,    96,    99,   155,    50,    45,   130,    47,    89,    53,
     162,   127,   135,    53,     9,    59,   135,    75,   169,   116,
     106,   194,    68,   174,   110,   461,   199,   120,   123,   137,
     105,    55,   128,     4,     5,     6,   168,    26,    78,    79,
     253,   127,   166,     3,   168,    40,   263,   105,    88,    89,
     223,     3,   236,   336,   271,   171,   273,   241,   169,   110,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   358,   127,   170,   158,   257,
       9,    76,   174,     3,    89,   258,   259,     3,     4,     5,
       6,   199,   110,   110,    93,    35,   269,   270,   170,   103,
     120,   110,   120,   120,   110,   174,   110,     0,   237,   127,
     127,    40,    83,    99,     3,     4,     5,     6,   127,   237,
       3,   127,   130,   127,    85,    41,    42,    43,    99,    69,
     116,    16,    17,   163,   417,   163,   170,   304,   171,   356,
     313,   173,   107,    72,    87,   318,   319,    76,   256,   110,
     111,    91,    41,    42,    43,   163,   164,   165,   166,    87,
     168,     3,   171,   106,    80,   292,   127,    83,   170,   112,
     383,   344,   345,   144,   145,   146,   296,   147,   106,   103,
     300,   464,   172,    99,   112,   296,   110,    89,   110,   300,
     112,    80,   171,   109,    83,   174,   171,   320,   415,   174,
     116,   320,     3,   127,   175,   127,   170,   122,   172,   110,
      99,   112,   171,   129,   118,   174,   171,   106,   171,   174,
     120,   174,     3,     4,     5,     6,   127,   116,   144,   145,
     146,   122,   174,   406,   171,   408,   409,   174,   171,   347,
     129,   174,    92,   119,     3,   171,   162,   163,   174,     4,
     358,   116,    78,   293,   170,   144,   145,   146,    88,   175,
      41,    42,    43,   170,     3,     3,     4,     5,     6,     4,
      41,   170,    53,   162,   163,   171,   449,    24,   174,     6,
     170,   170,    12,    30,   171,   171,   175,   109,   121,     4,
       4,    38,     3,     4,     5,     6,   171,   174,    41,    80,
       3,    25,    83,    41,    42,    43,   479,   151,   481,   417,
     107,     3,    72,     3,     4,     5,     6,    64,    99,   132,
     133,   134,   135,   136,   137,     3,     3,   107,   120,   170,
      41,    42,    43,   170,    81,   116,    83,    84,    62,   170,
     168,    93,    80,    67,    44,    83,   170,   170,   129,    73,
      74,    98,    42,    43,   174,   102,    89,   174,    53,    50,
      88,    99,   170,   144,   145,   146,    90,   114,    17,    80,
      94,    95,    83,    25,     3,   171,   170,     3,   116,   170,
     170,   162,   163,   171,    89,   110,    96,   170,    99,   170,
      80,   129,    99,    83,   175,   168,   174,   169,    65,     6,
      49,     6,    99,   171,   171,   116,   144,   145,   146,    99,
      62,    94,    73,   171,    73,    67,    73,     3,   129,    94,
     121,    73,    74,   171,   162,   163,   116,   171,    63,   171,
     171,   171,   170,   144,   145,   146,   170,   175,    90,   129,
     172,   170,    94,    95,    23,   302,   299,    96,    44,   143,
     174,   162,   163,   333,   144,   145,   146,   407,    52,   170,
     132,   224,   313,   306,   175,   254,   457,   116,   483,   456,
     235,    92,   162,   163,   123,   124,   260,    -1,   476,    -1,
     170,   130,   131,    -1,    -1,   175,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   151,   152,   153,   154,   155,    -1,    25,   158,
     159,     0,   161,   162,   163,   164,   165,   166,     7,   168,
      -1,    -1,   174,     7,    49,    -1,    15,    -1,    -1,    -1,
      -1,    15,    -1,    22,    -1,    -1,    -1,    26,    22,    -1,
      -1,    -1,    26,    32,    -1,    62,    35,    36,    32,    -1,
      67,    35,    36,    -1,    -1,    -1,    73,    74,    47,    48,
      77,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    58,
      -1,    96,    -1,    90,    58,    49,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    82,    -1,    -1,    -1,    86,    82,   124,
      -1,    49,    86,    -1,    -1,   130,   131,    -1,    -1,   126,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   101,   107,    -1,
      49,    -1,    96,   107,    -1,    -1,   151,   152,   153,   154,
     155,    -1,    -1,   158,   159,    -1,   161,   162,   163,   164,
     165,   166,   116,   168,    -1,    -1,    -1,    -1,    96,    -1,
     124,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,   148,
     149,   150,    -1,    -1,   148,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   151,   152,   153,
     154,   155,   130,   131,   158,   159,    -1,   161,   162,   163,
     164,   165,   166,    -1,   168,   124,    -1,    -1,    -1,    -1,
      -1,   130,    -1,   151,   152,   153,   154,   155,    -1,    -1,
     158,   159,    -1,   161,   162,   163,   164,   165,   166,    -1,
     168,    -1,    -1,    -1,    -1,   154,   155,    -1,    -1,   158,
     159,    -1,   161,   162,   163,   164,   165,   166,    -1,   168
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   101,   107,   148,   149,   150,   177,   178,
     179,   180,   184,   186,   188,   189,   193,   194,   195,   201,
     203,   204,   205,   207,   210,   278,   279,    26,     3,   273,
       3,     3,   273,    75,   105,    89,    89,    93,   272,   273,
     273,    75,   105,    19,    55,     3,   280,   281,   147,   185,
     185,   185,     0,   173,   285,   107,   181,   181,    53,   170,
     213,   214,   218,     3,   172,   170,    89,   122,   196,   196,
     273,     3,   190,   273,   118,    89,   128,   122,   202,   202,
     273,   120,   174,   179,    92,   119,   230,   213,   214,     9,
      40,    76,   215,   216,    72,   215,   226,     3,     4,     5,
       6,    83,    99,   144,   145,   146,   175,   233,   234,   257,
     258,   259,   260,   261,   262,   263,   264,   266,     4,   187,
     116,   273,   273,    78,   223,    88,   170,   206,     3,   208,
     209,   191,   258,   191,    41,   273,   273,   213,   281,   170,
     261,    12,   219,   171,   171,   211,   212,   213,   218,   109,
     217,   121,   211,    50,    68,   231,     4,     4,   171,   174,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   250,   251,   252,    41,    89,   120,   170,   206,
       3,    41,    42,    43,    80,   116,   129,   162,   163,   170,
     236,   237,   238,   239,   240,   241,   242,   243,   245,   246,
     247,   248,   249,   253,   254,   255,   256,   257,   191,     3,
     286,    59,   214,   151,   174,   223,   107,   192,   192,     3,
     182,   183,   220,   232,   235,   236,   226,   215,   227,   228,
     236,   226,   236,   109,   236,   250,   265,   257,     3,   210,
       3,   197,   198,   120,   170,   172,   170,   170,   170,   106,
     236,   244,    41,   116,   237,   168,   237,   214,   236,   110,
     127,    17,    49,    96,   116,   123,   124,   130,   131,   151,
     152,   153,   154,   155,   158,   159,   161,   162,   163,   164,
     165,   166,   168,    93,   171,   174,   170,   236,   209,    44,
     170,   171,   174,    89,   221,   222,   174,     3,   120,   276,
     277,   231,   211,   174,    85,   111,   229,   231,    50,    50,
      88,    24,    30,    38,    64,    81,    83,    84,    98,   102,
     114,   199,   171,   174,   210,   171,   219,     3,   163,   214,
     250,   236,   236,   244,    87,   106,   112,   170,   116,   232,
     171,   171,   236,   236,   237,   237,    96,   123,   170,    99,
     116,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   261,   273,     3,   234,
     190,   234,   183,   170,   267,   268,   269,   270,   271,   273,
     282,   223,   235,     3,   228,   236,   236,   191,   170,   170,
      99,   116,   200,   198,   232,   171,    89,   120,   103,    87,
     112,   236,   236,   214,   169,   110,   237,   170,   214,   232,
      99,   169,   171,   171,   210,    25,    62,    67,    73,    74,
      90,    95,   283,   174,   120,   274,   275,   276,    65,   224,
       6,     6,    99,   171,   236,   199,   236,   236,   112,   103,
     171,   237,   214,   232,   171,   171,   171,    94,    73,    73,
      73,    94,   268,     3,   121,   171,   171,   171,   171,   112,
     236,   171,   171,   275,   269,   268,   170,   232,    77,   126,
     286,    46,   225,   170,   236,   284,   171,   236,     3,   256,
     171
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   176,   177,   178,   178,   179,   179,   179,   179,   179,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   181,
     181,   182,   182,   183,   183,   184,   184,   184,   185,   185,
     186,   187,   188,   188,   189,   189,   190,   191,   192,   192,
     193,   194,   194,   194,   195,   195,   195,   195,   196,   196,
     197,   197,   198,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   200,   200,   200,   201,   201,   201,   202,
     202,   203,   204,   205,   205,   206,   206,   207,   208,   208,
     209,   210,   210,   210,   211,   211,   212,   212,   213,   213,
     214,   214,   215,   216,   216,   216,   217,   217,   218,   219,
     219,   220,   221,   221,   222,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227,   228,   229,   229,   229,   230,
     230,   231,   231,   231,   231,   231,   231,   232,   232,   233,
     233,   234,   234,   235,   236,   236,   236,   236,   236,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     238,   238,   239,   239,   239,   239,   239,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   241,   241,
     242,   242,   242,   242,   243,   243,   243,   243,   244,   244,
     245,   245,   246,   246,   246,   246,   246,   246,   246,   247,
     247,   248,   249,   250,   250,   250,   250,   250,   250,   251,
     251,   251,   251,   251,   251,   252,   252,   253,   254,   255,
     256,   256,   256,   256,   257,   257,   257,   257,   257,   257,
     257,   258,   259,   259,   260,   260,   261,   262,   263,   264,
     264,   265,   265,   266,   267,   267,   268,   268,   269,   269,
     270,   270,   271,   272,   273,   273,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   278,   279,   280,   280,   281,
     282,   282,   282,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   284,   285,   285,   286,   286
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     7,     6,     7,     3,     0,
       1,     3,     3,     1,     1,     1,     1,     1,     4,     4,
       1,     1,     1,     1,     2,     0,     4,     4,     3,     2,
       0,     4,     2,     8,     5,     3,     0,     5,     1,     3,
       3,     2,     2,     6,     1,     1,     1,     3,     3,     3,
       3,     5,     2,     1,     1,     1,     1,     0,     7,     1,
       0,     1,     1,     0,     2,     2,     0,     4,     0,     2,
       0,     3,     0,     1,     3,     2,     1,     1,     0,     2,
       0,     2,     2,     4,     2,     4,     0,     1,     3,     1,
       0,     1,     3,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       5,     6,     5,     6,     4,     6,     3,     5,     4,     5,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     6,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     5,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     1,     0,     1,     1,     3,     1,     1,     1,     4,
       1,     3,     2,     1,     1,     3,     1,     5,     1,     0,
       2,     1,     1,     0,     1,     0,     2,     1,     3,     3,
       4,     6,     8,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     0,     1,     1,     0,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

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

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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

  YY_LOCATION_PRINT (yyo, *yylocationp);
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
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1949 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1955 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 148 "bison_parser.y"
            { }
#line 1961 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 148 "bison_parser.y"
            { }
#line 1967 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1980 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1986 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1992 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2005 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2018 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2024 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2030 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2036 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2042 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2048 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2054 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 148 "bison_parser.y"
            { }
#line 2060 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2066 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 148 "bison_parser.y"
            { }
#line 2072 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2078 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2084 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2090 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 148 "bison_parser.y"
            { }
#line 2096 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_commalist: /* column_def_commalist  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2109 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2115 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 148 "bison_parser.y"
            { }
#line 2121 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 148 "bison_parser.y"
            { }
#line 2127 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2133 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 148 "bison_parser.y"
            { }
#line 2139 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2145 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2151 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2157 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2170 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2176 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2189 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2195 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2201 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2207 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2213 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2219 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2225 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2231 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2237 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 148 "bison_parser.y"
            { }
#line 2243 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2249 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 148 "bison_parser.y"
            { }
#line 2255 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2268 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2274 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2280 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2286 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2292 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2298 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2311 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 148 "bison_parser.y"
            { }
#line 2336 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2361 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2374 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2387 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2393 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2399 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2405 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2411 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2417 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2423 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2429 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2435 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2441 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2447 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2453 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2459 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2465 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2471 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2477 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 148 "bison_parser.y"
            { }
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 148 "bison_parser.y"
            { }
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 148 "bison_parser.y"
            { }
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2501 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2507 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2513 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2519 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2525 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2531 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2537 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2549 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2555 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2561 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2567 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_datetime_field: /* opt_datetime_field  */
#line 148 "bison_parser.y"
            { }
#line 2573 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2579 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2585 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2591 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2597 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2610 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2616 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2622 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2628 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2634 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2640 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2646 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2652 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2658 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2664 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2670 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2676 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2682 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 148 "bison_parser.y"
            { }
#line 2688 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2694 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2707 "bison_parser.cpp"
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
#line 74 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2814 "bison_parser.cpp"

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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
#line 271 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 3042 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 292 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3053 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 298 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3064 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 307 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3073 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 311 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3082 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 315 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3090 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 318 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3098 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 321 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3106 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3112 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3118 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 330 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3124 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 331 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3130 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 332 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3136 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 333 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3142 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 334 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3148 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: execute_statement  */
#line 335 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3154 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: transaction_statement  */
#line 336 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3160 "bison_parser.cpp"
    break;

  case 19: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 345 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3166 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: %empty  */
#line 346 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3172 "bison_parser.cpp"
    break;

  case 21: /* hint_list: hint  */
#line 351 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3178 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint_list ',' hint  */
#line 352 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3184 "bison_parser.cpp"
    break;

  case 23: /* hint: IDENTIFIER  */
#line 356 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3193 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 360 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3203 "bison_parser.cpp"
    break;

  case 25: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 372 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3211 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 375 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3219 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 378 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3227 "bison_parser.cpp"
    break;

  case 30: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 392 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3237 "bison_parser.cpp"
    break;

  case 32: /* execute_statement: EXECUTE IDENTIFIER  */
#line 402 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3246 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 406 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3256 "bison_parser.cpp"
    break;

  case 34: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 420 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3267 "bison_parser.cpp"
    break;

  case 35: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 426 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3278 "bison_parser.cpp"
    break;

  case 36: /* file_type: IDENTIFIER  */
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
#line 3297 "bison_parser.cpp"
    break;

  case 37: /* file_path: string_literal  */
#line 452 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3303 "bison_parser.cpp"
    break;

  case 38: /* opt_file_type: WITH FORMAT file_type  */
#line 456 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3311 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: %empty  */
#line 459 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3317 "bison_parser.cpp"
    break;

  case 40: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 468 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3328 "bison_parser.cpp"
    break;

  case 41: /* show_statement: SHOW TABLES  */
#line 482 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3336 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW COLUMNS table_name  */
#line 485 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3346 "bison_parser.cpp"
    break;

  case 43: /* show_statement: DESCRIBE table_name  */
#line 490 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3356 "bison_parser.cpp"
    break;

  case 44: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 504 "bison_parser.y"
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
#line 3374 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name '(' column_def_commalist ')'  */
#line 517 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3386 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 524 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3398 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 531 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3411 "bison_parser.cpp"
    break;

  case 48: /* opt_not_exists: IF NOT EXISTS  */
#line 542 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3417 "bison_parser.cpp"
    break;

  case 49: /* opt_not_exists: %empty  */
#line 543 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3423 "bison_parser.cpp"
    break;

  case 50: /* column_def_commalist: column_def  */
#line 547 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3429 "bison_parser.cpp"
    break;

  case 51: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 548 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3435 "bison_parser.cpp"
    break;

  case 52: /* column_def: IDENTIFIER column_type opt_column_nullable  */
#line 552 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3443 "bison_parser.cpp"
    break;

  case 53: /* column_type: INT  */
#line 558 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3449 "bison_parser.cpp"
    break;

  case 54: /* column_type: INTEGER  */
#line 559 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3455 "bison_parser.cpp"
    break;

  case 55: /* column_type: LONG  */
#line 560 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3461 "bison_parser.cpp"
    break;

  case 56: /* column_type: FLOAT  */
#line 561 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3467 "bison_parser.cpp"
    break;

  case 57: /* column_type: DOUBLE  */
#line 562 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3473 "bison_parser.cpp"
    break;

  case 58: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 563 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3479 "bison_parser.cpp"
    break;

  case 59: /* column_type: CHAR '(' INTVAL ')'  */
#line 564 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3485 "bison_parser.cpp"
    break;

  case 60: /* column_type: TEXT  */
#line 565 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3491 "bison_parser.cpp"
    break;

  case 61: /* column_type: DATETIME  */
#line 566 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3497 "bison_parser.cpp"
    break;

  case 62: /* column_type: DATE  */
#line 567 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3503 "bison_parser.cpp"
    break;

  case 63: /* opt_column_nullable: NULL  */
#line 571 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3509 "bison_parser.cpp"
    break;

  case 64: /* opt_column_nullable: NOT NULL  */
#line 572 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3515 "bison_parser.cpp"
    break;

  case 65: /* opt_column_nullable: %empty  */
#line 573 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3521 "bison_parser.cpp"
    break;

  case 66: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 583 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3532 "bison_parser.cpp"
    break;

  case 67: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 589 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3543 "bison_parser.cpp"
    break;

  case 68: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 595 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3553 "bison_parser.cpp"
    break;

  case 69: /* opt_exists: IF EXISTS  */
#line 603 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3559 "bison_parser.cpp"
    break;

  case 70: /* opt_exists: %empty  */
#line 604 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3565 "bison_parser.cpp"
    break;

  case 71: /* delete_statement: DELETE FROM table_name opt_where  */
#line 613 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3576 "bison_parser.cpp"
    break;

  case 72: /* truncate_statement: TRUNCATE table_name  */
#line 622 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3586 "bison_parser.cpp"
    break;

  case 73: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 635 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3598 "bison_parser.cpp"
    break;

  case 74: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 642 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3610 "bison_parser.cpp"
    break;

  case 75: /* opt_column_list: '(' ident_commalist ')'  */
#line 653 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3616 "bison_parser.cpp"
    break;

  case 76: /* opt_column_list: %empty  */
#line 654 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3622 "bison_parser.cpp"
    break;

  case 77: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 664 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3633 "bison_parser.cpp"
    break;

  case 78: /* update_clause_commalist: update_clause  */
#line 673 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3639 "bison_parser.cpp"
    break;

  case 79: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 674 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3645 "bison_parser.cpp"
    break;

  case 80: /* update_clause: IDENTIFIER '=' expr  */
#line 678 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3655 "bison_parser.cpp"
    break;

  case 81: /* select_statement: opt_with_clause select_with_paren  */
#line 690 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3664 "bison_parser.cpp"
    break;

  case 82: /* select_statement: opt_with_clause select_no_paren  */
#line 694 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3673 "bison_parser.cpp"
    break;

  case 83: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 698 "bison_parser.y"
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
#line 3689 "bison_parser.cpp"
    break;

  case 86: /* select_within_set_operation_no_parentheses: select_clause  */
#line 716 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3695 "bison_parser.cpp"
    break;

  case 87: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 717 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3708 "bison_parser.cpp"
    break;

  case 88: /* select_with_paren: '(' select_no_paren ')'  */
#line 728 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3714 "bison_parser.cpp"
    break;

  case 89: /* select_with_paren: '(' select_with_paren ')'  */
#line 729 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3720 "bison_parser.cpp"
    break;

  case 90: /* select_no_paren: select_clause opt_order opt_limit  */
#line 733 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3735 "bison_parser.cpp"
    break;

  case 91: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 743 "bison_parser.y"
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
#line 3750 "bison_parser.cpp"
    break;

  case 92: /* set_operator: set_type opt_all  */
#line 756 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3759 "bison_parser.cpp"
    break;

  case 93: /* set_type: UNION  */
#line 763 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3768 "bison_parser.cpp"
    break;

  case 94: /* set_type: INTERSECT  */
#line 767 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3777 "bison_parser.cpp"
    break;

  case 95: /* set_type: EXCEPT  */
#line 771 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3786 "bison_parser.cpp"
    break;

  case 96: /* opt_all: ALL  */
#line 778 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3794 "bison_parser.cpp"
    break;

  case 97: /* opt_all: %empty  */
#line 781 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3802 "bison_parser.cpp"
    break;

  case 98: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 787 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3816 "bison_parser.cpp"
    break;

  case 99: /* opt_distinct: DISTINCT  */
#line 799 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3822 "bison_parser.cpp"
    break;

  case 100: /* opt_distinct: %empty  */
#line 800 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3828 "bison_parser.cpp"
    break;

  case 102: /* opt_from_clause: from_clause  */
#line 808 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3834 "bison_parser.cpp"
    break;

  case 103: /* opt_from_clause: %empty  */
#line 809 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3840 "bison_parser.cpp"
    break;

  case 104: /* from_clause: FROM table_ref  */
#line 813 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3846 "bison_parser.cpp"
    break;

  case 105: /* opt_where: WHERE expr  */
#line 818 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3852 "bison_parser.cpp"
    break;

  case 106: /* opt_where: %empty  */
#line 819 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3858 "bison_parser.cpp"
    break;

  case 107: /* opt_group: GROUP BY expr_list opt_having  */
#line 823 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3868 "bison_parser.cpp"
    break;

  case 108: /* opt_group: %empty  */
#line 828 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3874 "bison_parser.cpp"
    break;

  case 109: /* opt_having: HAVING expr  */
#line 832 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3880 "bison_parser.cpp"
    break;

  case 110: /* opt_having: %empty  */
#line 833 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3886 "bison_parser.cpp"
    break;

  case 111: /* opt_order: ORDER BY order_list  */
#line 837 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3892 "bison_parser.cpp"
    break;

  case 112: /* opt_order: %empty  */
#line 838 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3898 "bison_parser.cpp"
    break;

  case 113: /* order_list: order_desc  */
#line 842 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3904 "bison_parser.cpp"
    break;

  case 114: /* order_list: order_list ',' order_desc  */
#line 843 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3910 "bison_parser.cpp"
    break;

  case 115: /* order_desc: expr opt_order_type  */
#line 847 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3916 "bison_parser.cpp"
    break;

  case 116: /* opt_order_type: ASC  */
#line 851 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3922 "bison_parser.cpp"
    break;

  case 117: /* opt_order_type: DESC  */
#line 852 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3928 "bison_parser.cpp"
    break;

  case 118: /* opt_order_type: %empty  */
#line 853 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3934 "bison_parser.cpp"
    break;

  case 119: /* opt_top: TOP int_literal  */
#line 859 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3940 "bison_parser.cpp"
    break;

  case 120: /* opt_top: %empty  */
#line 860 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3946 "bison_parser.cpp"
    break;

  case 121: /* opt_limit: LIMIT expr  */
#line 864 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3952 "bison_parser.cpp"
    break;

  case 122: /* opt_limit: OFFSET expr  */
#line 865 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3958 "bison_parser.cpp"
    break;

  case 123: /* opt_limit: LIMIT expr OFFSET expr  */
#line 866 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3964 "bison_parser.cpp"
    break;

  case 124: /* opt_limit: LIMIT ALL  */
#line 867 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3970 "bison_parser.cpp"
    break;

  case 125: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 868 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3976 "bison_parser.cpp"
    break;

  case 126: /* opt_limit: %empty  */
#line 869 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3982 "bison_parser.cpp"
    break;

  case 127: /* expr_list: expr_alias  */
#line 876 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3988 "bison_parser.cpp"
    break;

  case 128: /* expr_list: expr_list ',' expr_alias  */
#line 877 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3994 "bison_parser.cpp"
    break;

  case 129: /* opt_literal_list: literal_list  */
#line 881 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4000 "bison_parser.cpp"
    break;

  case 130: /* opt_literal_list: %empty  */
#line 882 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4006 "bison_parser.cpp"
    break;

  case 131: /* literal_list: literal  */
#line 886 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4012 "bison_parser.cpp"
    break;

  case 132: /* literal_list: literal_list ',' literal  */
#line 887 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4018 "bison_parser.cpp"
    break;

  case 133: /* expr_alias: expr opt_alias  */
#line 891 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4030 "bison_parser.cpp"
    break;

  case 139: /* operand: '(' expr ')'  */
#line 909 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4036 "bison_parser.cpp"
    break;

  case 149: /* operand: '(' select_no_paren ')'  */
#line 919 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4042 "bison_parser.cpp"
    break;

  case 152: /* unary_expr: '-' operand  */
#line 928 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4048 "bison_parser.cpp"
    break;

  case 153: /* unary_expr: NOT operand  */
#line 929 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4054 "bison_parser.cpp"
    break;

  case 154: /* unary_expr: operand ISNULL  */
#line 930 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4060 "bison_parser.cpp"
    break;

  case 155: /* unary_expr: operand IS NULL  */
#line 931 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4066 "bison_parser.cpp"
    break;

  case 156: /* unary_expr: operand IS NOT NULL  */
#line 932 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4072 "bison_parser.cpp"
    break;

  case 158: /* binary_expr: operand '-' operand  */
#line 937 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4078 "bison_parser.cpp"
    break;

  case 159: /* binary_expr: operand '+' operand  */
#line 938 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4084 "bison_parser.cpp"
    break;

  case 160: /* binary_expr: operand '/' operand  */
#line 939 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4090 "bison_parser.cpp"
    break;

  case 161: /* binary_expr: operand '*' operand  */
#line 940 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4096 "bison_parser.cpp"
    break;

  case 162: /* binary_expr: operand '%' operand  */
#line 941 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4102 "bison_parser.cpp"
    break;

  case 163: /* binary_expr: operand '^' operand  */
#line 942 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4108 "bison_parser.cpp"
    break;

  case 164: /* binary_expr: operand LIKE operand  */
#line 943 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4114 "bison_parser.cpp"
    break;

  case 165: /* binary_expr: operand NOT LIKE operand  */
#line 944 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4120 "bison_parser.cpp"
    break;

  case 166: /* binary_expr: operand ILIKE operand  */
#line 945 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4126 "bison_parser.cpp"
    break;

  case 167: /* binary_expr: operand CONCAT operand  */
#line 946 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4132 "bison_parser.cpp"
    break;

  case 168: /* logic_expr: expr AND expr  */
#line 950 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4138 "bison_parser.cpp"
    break;

  case 169: /* logic_expr: expr OR expr  */
#line 951 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4144 "bison_parser.cpp"
    break;

  case 170: /* in_expr: operand IN '(' expr_list ')'  */
#line 955 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4150 "bison_parser.cpp"
    break;

  case 171: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 956 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4156 "bison_parser.cpp"
    break;

  case 172: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 957 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4162 "bison_parser.cpp"
    break;

  case 173: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 958 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4168 "bison_parser.cpp"
    break;

  case 174: /* case_expr: CASE expr case_list END  */
#line 964 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4174 "bison_parser.cpp"
    break;

  case 175: /* case_expr: CASE expr case_list ELSE expr END  */
#line 965 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4180 "bison_parser.cpp"
    break;

  case 176: /* case_expr: CASE case_list END  */
#line 966 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4186 "bison_parser.cpp"
    break;

  case 177: /* case_expr: CASE case_list ELSE expr END  */
#line 967 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4192 "bison_parser.cpp"
    break;

  case 178: /* case_list: WHEN expr THEN expr  */
#line 971 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4198 "bison_parser.cpp"
    break;

  case 179: /* case_list: case_list WHEN expr THEN expr  */
#line 972 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4204 "bison_parser.cpp"
    break;

  case 180: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 976 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4210 "bison_parser.cpp"
    break;

  case 181: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 977 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4216 "bison_parser.cpp"
    break;

  case 182: /* comp_expr: operand '=' operand  */
#line 981 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4222 "bison_parser.cpp"
    break;

  case 183: /* comp_expr: operand EQUALS operand  */
#line 982 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4228 "bison_parser.cpp"
    break;

  case 184: /* comp_expr: operand NOTEQUALS operand  */
#line 983 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4234 "bison_parser.cpp"
    break;

  case 185: /* comp_expr: operand '<' operand  */
#line 984 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4240 "bison_parser.cpp"
    break;

  case 186: /* comp_expr: operand '>' operand  */
#line 985 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4246 "bison_parser.cpp"
    break;

  case 187: /* comp_expr: operand LESSEQ operand  */
#line 986 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4252 "bison_parser.cpp"
    break;

  case 188: /* comp_expr: operand GREATEREQ operand  */
#line 987 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4258 "bison_parser.cpp"
    break;

  case 189: /* function_expr: IDENTIFIER '(' ')'  */
#line 991 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4264 "bison_parser.cpp"
    break;

  case 190: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 992 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4270 "bison_parser.cpp"
    break;

  case 191: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 996 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4276 "bison_parser.cpp"
    break;

  case 192: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1000 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4282 "bison_parser.cpp"
    break;

  case 193: /* datetime_field: SECOND  */
#line 1004 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4288 "bison_parser.cpp"
    break;

  case 194: /* datetime_field: MINUTE  */
#line 1005 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4294 "bison_parser.cpp"
    break;

  case 195: /* datetime_field: HOUR  */
#line 1006 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4300 "bison_parser.cpp"
    break;

  case 196: /* datetime_field: DAY  */
#line 1007 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4306 "bison_parser.cpp"
    break;

  case 197: /* datetime_field: MONTH  */
#line 1008 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4312 "bison_parser.cpp"
    break;

  case 198: /* datetime_field: YEAR  */
#line 1009 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4318 "bison_parser.cpp"
    break;

  case 199: /* datetime_field_plural: SECONDS  */
#line 1013 "bison_parser.y"
                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4324 "bison_parser.cpp"
    break;

  case 200: /* datetime_field_plural: MINUTES  */
#line 1014 "bison_parser.y"
                { (yyval.datetime_field) = kDatetimeMinute; }
#line 4330 "bison_parser.cpp"
    break;

  case 201: /* datetime_field_plural: HOURS  */
#line 1015 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeHour; }
#line 4336 "bison_parser.cpp"
    break;

  case 202: /* datetime_field_plural: DAYS  */
#line 1016 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeDay; }
#line 4342 "bison_parser.cpp"
    break;

  case 203: /* datetime_field_plural: MONTHS  */
#line 1017 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMonth; }
#line 4348 "bison_parser.cpp"
    break;

  case 204: /* datetime_field_plural: YEARS  */
#line 1018 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeYear; }
#line 4354 "bison_parser.cpp"
    break;

  case 207: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1027 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4360 "bison_parser.cpp"
    break;

  case 208: /* array_index: operand '[' int_literal ']'  */
#line 1031 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4366 "bison_parser.cpp"
    break;

  case 209: /* between_expr: operand BETWEEN operand AND operand  */
#line 1035 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4372 "bison_parser.cpp"
    break;

  case 210: /* column_name: IDENTIFIER  */
#line 1039 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4378 "bison_parser.cpp"
    break;

  case 211: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1040 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4384 "bison_parser.cpp"
    break;

  case 212: /* column_name: '*'  */
#line 1041 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4390 "bison_parser.cpp"
    break;

  case 213: /* column_name: IDENTIFIER '.' '*'  */
#line 1042 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4396 "bison_parser.cpp"
    break;

  case 221: /* string_literal: STRING  */
#line 1056 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4402 "bison_parser.cpp"
    break;

  case 222: /* bool_literal: TRUE  */
#line 1060 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4408 "bison_parser.cpp"
    break;

  case 223: /* bool_literal: FALSE  */
#line 1061 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4414 "bison_parser.cpp"
    break;

  case 224: /* num_literal: FLOATVAL  */
#line 1065 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4420 "bison_parser.cpp"
    break;

  case 226: /* int_literal: INTVAL  */
#line 1070 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4426 "bison_parser.cpp"
    break;

  case 227: /* null_literal: NULL  */
#line 1074 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4432 "bison_parser.cpp"
    break;

  case 228: /* date_literal: DATE STRING  */
#line 1078 "bison_parser.y"
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
#line 4447 "bison_parser.cpp"
    break;

  case 229: /* interval_literal: int_literal duration_field  */
#line 1091 "bison_parser.y"
                                           { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field)); delete (yyvsp[-1].expr); }
#line 4453 "bison_parser.cpp"
    break;

  case 230: /* interval_literal: INTERVAL STRING opt_datetime_field  */
#line 1092 "bison_parser.y"
                                               {
			int duration{0}, chars_parsed{0};
			char unit_string[8];
			DatetimeField unit = (yyvsp[0].datetime_field);
			std::cout << unit << std::endl;
			// If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
			int num_matches = sscanf((yyvsp[-1].sval), "%d%n %7s%n", &duration, &chars_parsed, unit_string, &chars_parsed);
			bool reached_end = (yyvsp[-1].sval)[chars_parsed] == 0;
			free((yyvsp[-1].sval));

			if (num_matches < 1 || !reached_end || (num_matches > 1 && unit != kDatetimeNone) || (num_matches == 1 && unit == kDatetimeNone)) {
				yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
				YYERROR;
			}

			if (num_matches > 1) {
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
					yyerror(&yyloc, result, scanner, ("Interval qualifier '" + std::string{unit_string} + "' is unknown.").c_str());
					YYERROR;
				}
			}
			(yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
		}
#line 4493 "bison_parser.cpp"
    break;

  case 232: /* opt_datetime_field: %empty  */
#line 1131 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeNone; }
#line 4499 "bison_parser.cpp"
    break;

  case 233: /* param_expr: '?'  */
#line 1135 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4509 "bison_parser.cpp"
    break;

  case 235: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1148 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4520 "bison_parser.cpp"
    break;

  case 239: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1164 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4531 "bison_parser.cpp"
    break;

  case 240: /* table_ref_commalist: table_ref_atomic  */
#line 1173 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4537 "bison_parser.cpp"
    break;

  case 241: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1174 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4543 "bison_parser.cpp"
    break;

  case 242: /* table_ref_name: table_name opt_table_alias  */
#line 1179 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4555 "bison_parser.cpp"
    break;

  case 243: /* table_ref_name_no_alias: table_name  */
#line 1190 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4565 "bison_parser.cpp"
    break;

  case 244: /* table_name: IDENTIFIER  */
#line 1199 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4571 "bison_parser.cpp"
    break;

  case 245: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1200 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4577 "bison_parser.cpp"
    break;

  case 247: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1206 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4583 "bison_parser.cpp"
    break;

  case 249: /* opt_table_alias: %empty  */
#line 1212 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4589 "bison_parser.cpp"
    break;

  case 250: /* alias: AS IDENTIFIER  */
#line 1217 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4595 "bison_parser.cpp"
    break;

  case 251: /* alias: IDENTIFIER  */
#line 1218 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4601 "bison_parser.cpp"
    break;

  case 253: /* opt_alias: %empty  */
#line 1224 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4607 "bison_parser.cpp"
    break;

  case 255: /* opt_with_clause: %empty  */
#line 1234 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4613 "bison_parser.cpp"
    break;

  case 256: /* with_clause: WITH with_description_list  */
#line 1238 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4619 "bison_parser.cpp"
    break;

  case 257: /* with_description_list: with_description  */
#line 1242 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4628 "bison_parser.cpp"
    break;

  case 258: /* with_description_list: with_description_list ',' with_description  */
#line 1246 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4637 "bison_parser.cpp"
    break;

  case 259: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1253 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4647 "bison_parser.cpp"
    break;

  case 260: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1267 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4659 "bison_parser.cpp"
    break;

  case 261: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1275 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4672 "bison_parser.cpp"
    break;

  case 262: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1285 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
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
#line 4692 "bison_parser.cpp"
    break;

  case 263: /* opt_join_type: INNER  */
#line 1303 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4698 "bison_parser.cpp"
    break;

  case 264: /* opt_join_type: LEFT OUTER  */
#line 1304 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4704 "bison_parser.cpp"
    break;

  case 265: /* opt_join_type: LEFT  */
#line 1305 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4710 "bison_parser.cpp"
    break;

  case 266: /* opt_join_type: RIGHT OUTER  */
#line 1306 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4716 "bison_parser.cpp"
    break;

  case 267: /* opt_join_type: RIGHT  */
#line 1307 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4722 "bison_parser.cpp"
    break;

  case 268: /* opt_join_type: FULL OUTER  */
#line 1308 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4728 "bison_parser.cpp"
    break;

  case 269: /* opt_join_type: OUTER  */
#line 1309 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4734 "bison_parser.cpp"
    break;

  case 270: /* opt_join_type: FULL  */
#line 1310 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4740 "bison_parser.cpp"
    break;

  case 271: /* opt_join_type: CROSS  */
#line 1311 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4746 "bison_parser.cpp"
    break;

  case 272: /* opt_join_type: %empty  */
#line 1312 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4752 "bison_parser.cpp"
    break;

  case 276: /* ident_commalist: IDENTIFIER  */
#line 1332 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4758 "bison_parser.cpp"
    break;

  case 277: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1333 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4764 "bison_parser.cpp"
    break;


#line 4768 "bison_parser.cpp"

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
          goto yyexhaustedlab;
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 1336 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
