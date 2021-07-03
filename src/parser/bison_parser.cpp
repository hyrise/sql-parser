/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

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

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 107 "bison_parser.cpp"

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
  YYSYMBOL_CHARACTER = 29,                 /* CHARACTER  */
  YYSYMBOL_VARYING = 30,                   /* VARYING  */
  YYSYMBOL_SPATIAL = 31,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 32,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 33,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 34,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 35,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 36,                    /* COLUMN  */
  YYSYMBOL_CREATE = 37,                    /* CREATE  */
  YYSYMBOL_DELETE = 38,                    /* DELETE  */
  YYSYMBOL_DIRECT = 39,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 40,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 41,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 42,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 43,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 44,                   /* EXTRACT  */
  YYSYMBOL_CAST = 45,                      /* CAST  */
  YYSYMBOL_FORMAT = 46,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 47,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 48,                    /* HAVING  */
  YYSYMBOL_IMPORT = 49,                    /* IMPORT  */
  YYSYMBOL_INSERT = 50,                    /* INSERT  */
  YYSYMBOL_ISNULL = 51,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 52,                    /* OFFSET  */
  YYSYMBOL_RENAME = 53,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 54,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 55,                    /* SELECT  */
  YYSYMBOL_SORTED = 56,                    /* SORTED  */
  YYSYMBOL_TABLES = 57,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 58,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 59,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 60,                    /* UPDATE  */
  YYSYMBOL_VALUES = 61,                    /* VALUES  */
  YYSYMBOL_AFTER = 62,                     /* AFTER  */
  YYSYMBOL_ALTER = 63,                     /* ALTER  */
  YYSYMBOL_CROSS = 64,                     /* CROSS  */
  YYSYMBOL_DELTA = 65,                     /* DELTA  */
  YYSYMBOL_FLOAT = 66,                     /* FLOAT  */
  YYSYMBOL_GROUP = 67,                     /* GROUP  */
  YYSYMBOL_INDEX = 68,                     /* INDEX  */
  YYSYMBOL_INNER = 69,                     /* INNER  */
  YYSYMBOL_LIMIT = 70,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 71,                     /* LOCAL  */
  YYSYMBOL_MERGE = 72,                     /* MERGE  */
  YYSYMBOL_MINUS = 73,                     /* MINUS  */
  YYSYMBOL_ORDER = 74,                     /* ORDER  */
  YYSYMBOL_OUTER = 75,                     /* OUTER  */
  YYSYMBOL_RIGHT = 76,                     /* RIGHT  */
  YYSYMBOL_TABLE = 77,                     /* TABLE  */
  YYSYMBOL_UNION = 78,                     /* UNION  */
  YYSYMBOL_USING = 79,                     /* USING  */
  YYSYMBOL_WHERE = 80,                     /* WHERE  */
  YYSYMBOL_CALL = 81,                      /* CALL  */
  YYSYMBOL_CASE = 82,                      /* CASE  */
  YYSYMBOL_CHAR = 83,                      /* CHAR  */
  YYSYMBOL_COPY = 84,                      /* COPY  */
  YYSYMBOL_DATE = 85,                      /* DATE  */
  YYSYMBOL_DATETIME = 86,                  /* DATETIME  */
  YYSYMBOL_DESC = 87,                      /* DESC  */
  YYSYMBOL_DROP = 88,                      /* DROP  */
  YYSYMBOL_ELSE = 89,                      /* ELSE  */
  YYSYMBOL_FILE = 90,                      /* FILE  */
  YYSYMBOL_FROM = 91,                      /* FROM  */
  YYSYMBOL_FULL = 92,                      /* FULL  */
  YYSYMBOL_HASH = 93,                      /* HASH  */
  YYSYMBOL_HINT = 94,                      /* HINT  */
  YYSYMBOL_INTO = 95,                      /* INTO  */
  YYSYMBOL_JOIN = 96,                      /* JOIN  */
  YYSYMBOL_LEFT = 97,                      /* LEFT  */
  YYSYMBOL_LIKE = 98,                      /* LIKE  */
  YYSYMBOL_LOAD = 99,                      /* LOAD  */
  YYSYMBOL_LONG = 100,                     /* LONG  */
  YYSYMBOL_NULL = 101,                     /* NULL  */
  YYSYMBOL_PLAN = 102,                     /* PLAN  */
  YYSYMBOL_SHOW = 103,                     /* SHOW  */
  YYSYMBOL_TEXT = 104,                     /* TEXT  */
  YYSYMBOL_THEN = 105,                     /* THEN  */
  YYSYMBOL_TIME = 106,                     /* TIME  */
  YYSYMBOL_VIEW = 107,                     /* VIEW  */
  YYSYMBOL_WHEN = 108,                     /* WHEN  */
  YYSYMBOL_WITH = 109,                     /* WITH  */
  YYSYMBOL_ADD = 110,                      /* ADD  */
  YYSYMBOL_ALL = 111,                      /* ALL  */
  YYSYMBOL_AND = 112,                      /* AND  */
  YYSYMBOL_ASC = 113,                      /* ASC  */
  YYSYMBOL_END = 114,                      /* END  */
  YYSYMBOL_FOR = 115,                      /* FOR  */
  YYSYMBOL_INT = 116,                      /* INT  */
  YYSYMBOL_KEY = 117,                      /* KEY  */
  YYSYMBOL_NOT = 118,                      /* NOT  */
  YYSYMBOL_OFF = 119,                      /* OFF  */
  YYSYMBOL_SET = 120,                      /* SET  */
  YYSYMBOL_TOP = 121,                      /* TOP  */
  YYSYMBOL_AS = 122,                       /* AS  */
  YYSYMBOL_BY = 123,                       /* BY  */
  YYSYMBOL_IF = 124,                       /* IF  */
  YYSYMBOL_IN = 125,                       /* IN  */
  YYSYMBOL_IS = 126,                       /* IS  */
  YYSYMBOL_OF = 127,                       /* OF  */
  YYSYMBOL_ON = 128,                       /* ON  */
  YYSYMBOL_OR = 129,                       /* OR  */
  YYSYMBOL_TO = 130,                       /* TO  */
  YYSYMBOL_ARRAY = 131,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 132,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 133,                    /* ILIKE  */
  YYSYMBOL_SECOND = 134,                   /* SECOND  */
  YYSYMBOL_MINUTE = 135,                   /* MINUTE  */
  YYSYMBOL_HOUR = 136,                     /* HOUR  */
  YYSYMBOL_DAY = 137,                      /* DAY  */
  YYSYMBOL_MONTH = 138,                    /* MONTH  */
  YYSYMBOL_YEAR = 139,                     /* YEAR  */
  YYSYMBOL_TRUE = 140,                     /* TRUE  */
  YYSYMBOL_FALSE = 141,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 142,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 143,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 144,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 145,                 /* ROLLBACK  */
  YYSYMBOL_146_ = 146,                     /* '='  */
  YYSYMBOL_EQUALS = 147,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 148,                /* NOTEQUALS  */
  YYSYMBOL_149_ = 149,                     /* '<'  */
  YYSYMBOL_150_ = 150,                     /* '>'  */
  YYSYMBOL_LESS = 151,                     /* LESS  */
  YYSYMBOL_GREATER = 152,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 153,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 154,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 155,                  /* NOTNULL  */
  YYSYMBOL_156_ = 156,                     /* '+'  */
  YYSYMBOL_157_ = 157,                     /* '-'  */
  YYSYMBOL_158_ = 158,                     /* '*'  */
  YYSYMBOL_159_ = 159,                     /* '/'  */
  YYSYMBOL_160_ = 160,                     /* '%'  */
  YYSYMBOL_161_ = 161,                     /* '^'  */
  YYSYMBOL_UMINUS = 162,                   /* UMINUS  */
  YYSYMBOL_163_ = 163,                     /* '['  */
  YYSYMBOL_164_ = 164,                     /* ']'  */
  YYSYMBOL_165_ = 165,                     /* '('  */
  YYSYMBOL_166_ = 166,                     /* ')'  */
  YYSYMBOL_167_ = 167,                     /* '.'  */
  YYSYMBOL_168_ = 168,                     /* ';'  */
  YYSYMBOL_169_ = 169,                     /* ','  */
  YYSYMBOL_170_ = 170,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 171,                 /* $accept  */
  YYSYMBOL_input = 172,                    /* input  */
  YYSYMBOL_statement_list = 173,           /* statement_list  */
  YYSYMBOL_statement = 174,                /* statement  */
  YYSYMBOL_preparable_statement = 175,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 176,                /* opt_hints  */
  YYSYMBOL_hint_list = 177,                /* hint_list  */
  YYSYMBOL_hint = 178,                     /* hint  */
  YYSYMBOL_transaction_statement = 179,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 180,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 181,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 182,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 183,        /* execute_statement  */
  YYSYMBOL_import_statement = 184,         /* import_statement  */
  YYSYMBOL_file_type = 185,                /* file_type  */
  YYSYMBOL_file_path = 186,                /* file_path  */
  YYSYMBOL_opt_file_type = 187,            /* opt_file_type  */
  YYSYMBOL_export_statement = 188,         /* export_statement  */
  YYSYMBOL_show_statement = 189,           /* show_statement  */
  YYSYMBOL_create_statement = 190,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 191,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 192,     /* column_def_commalist  */
  YYSYMBOL_column_def = 193,               /* column_def  */
  YYSYMBOL_column_type = 194,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 195,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 196,           /* drop_statement  */
  YYSYMBOL_opt_exists = 197,               /* opt_exists  */
  YYSYMBOL_delete_statement = 198,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 199,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 200,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 201,          /* opt_column_list  */
  YYSYMBOL_update_statement = 202,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 203,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 204,            /* update_clause  */
  YYSYMBOL_select_statement = 205,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 206, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 207, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 208,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 209,          /* select_no_paren  */
  YYSYMBOL_set_operator = 210,             /* set_operator  */
  YYSYMBOL_set_type = 211,                 /* set_type  */
  YYSYMBOL_opt_all = 212,                  /* opt_all  */
  YYSYMBOL_select_clause = 213,            /* select_clause  */
  YYSYMBOL_opt_distinct = 214,             /* opt_distinct  */
  YYSYMBOL_select_list = 215,              /* select_list  */
  YYSYMBOL_opt_from_clause = 216,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 217,              /* from_clause  */
  YYSYMBOL_opt_where = 218,                /* opt_where  */
  YYSYMBOL_opt_group = 219,                /* opt_group  */
  YYSYMBOL_opt_having = 220,               /* opt_having  */
  YYSYMBOL_opt_order = 221,                /* opt_order  */
  YYSYMBOL_order_list = 222,               /* order_list  */
  YYSYMBOL_order_desc = 223,               /* order_desc  */
  YYSYMBOL_opt_order_type = 224,           /* opt_order_type  */
  YYSYMBOL_opt_top = 225,                  /* opt_top  */
  YYSYMBOL_opt_limit = 226,                /* opt_limit  */
  YYSYMBOL_expr_list = 227,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 228,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 229,             /* literal_list  */
  YYSYMBOL_expr_alias = 230,               /* expr_alias  */
  YYSYMBOL_expr = 231,                     /* expr  */
  YYSYMBOL_operand = 232,                  /* operand  */
  YYSYMBOL_scalar_expr = 233,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 234,               /* unary_expr  */
  YYSYMBOL_binary_expr = 235,              /* binary_expr  */
  YYSYMBOL_logic_expr = 236,               /* logic_expr  */
  YYSYMBOL_in_expr = 237,                  /* in_expr  */
  YYSYMBOL_case_expr = 238,                /* case_expr  */
  YYSYMBOL_case_list = 239,                /* case_list  */
  YYSYMBOL_exists_expr = 240,              /* exists_expr  */
  YYSYMBOL_comp_expr = 241,                /* comp_expr  */
  YYSYMBOL_function_expr = 242,            /* function_expr  */
  YYSYMBOL_extract_expr = 243,             /* extract_expr  */
  YYSYMBOL_cast_expr = 244,                /* cast_expr  */
  YYSYMBOL_datetime_field = 245,           /* datetime_field  */
  YYSYMBOL_array_expr = 246,               /* array_expr  */
  YYSYMBOL_array_index = 247,              /* array_index  */
  YYSYMBOL_between_expr = 248,             /* between_expr  */
  YYSYMBOL_column_name = 249,              /* column_name  */
  YYSYMBOL_literal = 250,                  /* literal  */
  YYSYMBOL_string_literal = 251,           /* string_literal  */
  YYSYMBOL_bool_literal = 252,             /* bool_literal  */
  YYSYMBOL_num_literal = 253,              /* num_literal  */
  YYSYMBOL_int_literal = 254,              /* int_literal  */
  YYSYMBOL_null_literal = 255,             /* null_literal  */
  YYSYMBOL_param_expr = 256,               /* param_expr  */
  YYSYMBOL_table_ref = 257,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 258,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 259, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 260,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 261,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 262,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 263,               /* table_name  */
  YYSYMBOL_opt_index_name = 264,           /* opt_index_name  */
  YYSYMBOL_index_name = 265,               /* index_name  */
  YYSYMBOL_table_alias = 266,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 267,          /* opt_table_alias  */
  YYSYMBOL_alias = 268,                    /* alias  */
  YYSYMBOL_opt_alias = 269,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 270,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 271,              /* with_clause  */
  YYSYMBOL_with_description_list = 272,    /* with_description_list  */
  YYSYMBOL_with_description = 273,         /* with_description  */
  YYSYMBOL_join_clause = 274,              /* join_clause  */
  YYSYMBOL_opt_join_type = 275,            /* opt_join_type  */
  YYSYMBOL_join_condition = 276,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 277,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 278           /* ident_commalist  */
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
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   820

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  171
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  108
/* YYNRULES -- Number of rules.  */
#define YYNRULES  268
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  493

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   408


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
       2,     2,     2,     2,     2,     2,     2,   160,     2,     2,
     165,   166,   158,   156,   169,   157,   167,   159,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   168,
     149,   146,   150,   170,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   163,     2,   164,   161,     2,     2,     2,     2,     2,
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
     145,   147,   148,   151,   152,   153,   154,   155,   162
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   271,   271,   292,   298,   307,   311,   315,   318,   321,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   345,
     346,   351,   352,   356,   360,   372,   375,   378,   384,   385,
     392,   399,   402,   406,   420,   426,   435,   452,   456,   459,
     468,   482,   485,   490,   504,   517,   524,   531,   538,   549,
     550,   554,   555,   559,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   579,   580,   581,   591,   597,
     603,   608,   616,   617,   626,   635,   648,   655,   666,   667,
     677,   686,   687,   691,   703,   707,   711,   725,   726,   729,
     730,   741,   742,   746,   756,   769,   776,   780,   784,   791,
     794,   800,   812,   813,   817,   821,   822,   826,   831,   832,
     836,   841,   845,   846,   850,   851,   855,   856,   860,   864,
     865,   866,   872,   873,   877,   878,   879,   880,   881,   882,
     889,   890,   894,   895,   899,   900,   904,   914,   915,   916,
     917,   918,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   931,   932,   936,   937,   941,   942,   943,   944,   945,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     959,   963,   964,   968,   969,   970,   971,   977,   978,   979,
     980,   984,   985,   989,   990,   994,   995,   996,   997,   998,
     999,  1000,  1004,  1005,  1009,  1013,  1017,  1018,  1019,  1020,
    1021,  1022,  1026,  1030,  1034,  1038,  1039,  1040,  1041,  1045,
    1046,  1047,  1048,  1049,  1053,  1057,  1058,  1062,  1063,  1067,
    1071,  1075,  1087,  1088,  1098,  1099,  1103,  1104,  1113,  1114,
    1119,  1130,  1139,  1140,  1144,  1145,  1149,  1154,  1155,  1160,
    1161,  1166,  1167,  1172,  1173,  1182,  1183,  1187,  1191,  1195,
    1202,  1215,  1223,  1233,  1252,  1253,  1254,  1255,  1256,  1257,
    1258,  1259,  1260,  1261,  1266,  1275,  1276,  1281,  1282
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
  "SCHEMAS", "CHARACTER", "VARYING", "SPATIAL", "VARCHAR", "VIRTUAL",
  "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE",
  "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL",
  "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA",
  "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES",
  "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER",
  "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE",
  "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE",
  "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH",
  "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN",
  "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL",
  "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TOP",
  "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY", "CONCAT",
  "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "TRUE",
  "FALSE", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "transaction_statement", "opt_transaction_keyword",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path", "opt_file_type",
  "export_statement", "show_statement", "create_statement",
  "opt_not_exists", "column_def_commalist", "column_def", "column_type",
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
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "opt_index_name", "index_name",
  "table_alias", "opt_table_alias", "alias", "opt_alias",
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
     395,   396,   397,   398,   399,   400,    61,   401,   402,    60,
      62,   403,   404,   405,   406,   407,    43,    45,    42,    47,
      37,    94,   408,    91,    93,    40,    41,    46,    59,    44,
      63
};
#endif

#define YYPACT_NINF (-392)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-266)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     527,    91,   103,   125,   169,   103,   -10,    66,   134,   115,
     103,   103,     0,    63,   230,   -48,   -48,   -48,   243,    76,
    -392,   136,  -392,   136,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,  -392,  -392,  -392,    -1,  -392,   252,    98,  -392,
     111,   190,  -392,   286,   167,   167,   103,   294,   103,   186,
    -392,   -58,   305,   188,   188,   103,  -392,   202,   150,  -392,
    -392,  -392,  -392,  -392,  -392,   522,  -392,   231,  -392,  -392,
     215,    -1,    21,  -392,    51,  -392,   337,    13,   347,  -392,
     167,   234,   103,   103,   277,  -392,   278,   208,   382,   385,
     385,  -392,   258,   350,   103,   103,  -392,   225,   230,  -392,
     229,   389,   384,   233,   235,  -392,  -392,  -392,    -1,   289,
     279,    -1,    49,  -392,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,   237,   236,  -392,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,   276,   363,   -65,   208,   257,  -392,   385,   404,
     158,   263,   -60,  -392,   301,  -392,   301,   103,  -392,  -392,
    -392,  -392,  -392,   408,  -392,  -392,   257,  -392,  -392,   339,
    -392,  -392,    21,  -392,  -392,   257,   339,   257,   146,  -392,
    -392,    13,   103,  -392,   409,   307,   414,   297,    89,   259,
     260,   261,   191,   290,   265,   338,  -392,   197,   -51,   367,
    -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,  -392,  -392,  -392,  -392,   334,  -392,   106,   267,
    -392,   257,   382,  -392,   387,  -392,  -392,  -392,   269,   114,
    -392,   344,   268,  -392,    33,    49,    -1,   272,  -392,   -25,
      49,   -51,   386,   -31,  -392,   271,   352,  -392,   704,   141,
    -392,   307,     3,    19,   388,   242,   257,   257,   119,    78,
     280,   338,   561,   257,    48,   283,   -77,   257,   257,   338,
    -392,   338,   -61,   285,    80,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     389,   103,  -392,   441,    13,   -51,  -392,   294,    13,  -392,
     408,    11,   277,  -392,   257,  -392,   448,  -392,  -392,  -392,
    -392,   257,  -392,  -392,  -392,  -392,   257,   257,   404,   385,
    -392,   422,   288,  -392,  -392,   292,  -392,  -392,  -392,  -392,
    -392,   120,  -392,   414,  -392,  -392,   257,  -392,  -392,   293,
    -392,  -392,  -392,  -392,  -392,  -392,   370,   137,   -39,    85,
     257,   257,  -392,   388,   356,    68,  -392,  -392,  -392,   346,
     495,   599,   338,   311,   197,  -392,   361,   303,   599,   599,
     599,   599,   314,   314,   314,   314,    48,    48,    -5,    -5,
      -5,   -98,   316,  -392,  -392,   148,  -392,   152,  -392,   307,
    -392,    16,  -392,   312,  -392,    25,  -392,   415,  -392,  -392,
    -392,   -51,   -51,   160,  -392,   318,   478,   480,  -392,   390,
    -392,  -392,   161,  -392,   257,   704,   257,   257,  -392,   155,
     110,   321,  -392,   338,   599,   197,   322,   184,  -392,  -392,
    -392,  -392,   323,   394,  -392,  -392,  -392,   419,   423,   426,
     401,    11,   499,  -392,  -392,  -392,   381,  -392,  -392,   500,
     341,   343,  -392,  -392,   -43,   345,   -51,   176,  -392,   257,
    -392,   561,   353,   194,  -392,  -392,    25,    11,  -392,  -392,
    -392,    11,   154,   340,   257,   365,  -392,  -392,  -392,  -392,
    -392,   -51,  -392,  -392,  -392,  -392,   295,   404,   -23,  -392,
     368,   257,   200,   257,  -392,    20,   -51,  -392,  -392,   -51,
     351,   366,  -392
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   266,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   245,     0,   232,    75,
      32,     0,    43,   235,    50,    50,     0,     0,     0,     0,
     231,     0,     0,    73,    73,     0,    41,     0,   247,   248,
      28,    25,    27,    26,     1,   246,     2,     0,     6,     5,
     123,     0,    84,    85,   115,    70,     0,   133,     0,   234,
      50,     0,     0,     0,   109,    36,     0,    79,     0,     0,
       0,   236,     0,     0,     0,     0,    42,     0,     0,     4,
       0,     0,   103,     0,     0,    97,    98,    96,     0,   100,
       0,     0,   129,   233,   214,   217,   219,   220,   215,   216,
     221,     0,   132,   134,   209,   210,   211,   218,   212,   213,
      31,    30,     0,     0,     0,    79,     0,    74,     0,     0,
       0,     0,   109,    81,    39,    37,    39,     0,    72,    68,
      69,   250,   249,     0,   122,   102,     0,    92,    91,   115,
      88,    87,    89,    99,    95,     0,   115,     0,     0,    93,
      33,     0,     0,    49,     0,   246,     0,     0,   205,     0,
       0,     0,     0,     0,     0,     0,   207,     0,   108,   137,
     144,   145,   146,   139,   141,   147,   140,   160,   148,   149,
     150,   151,   143,   138,   153,   154,     0,   267,     0,     0,
      77,     0,     0,    80,     0,    35,    40,    71,    23,     0,
      21,   106,   104,   130,   244,   129,     0,   114,   116,   121,
     129,   125,   127,   124,   135,     0,     0,    46,     0,     0,
      51,   246,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,     0,   155,     0,     0,     0,     0,     0,
     157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    83,    82,     0,     0,    19,
       0,     0,   109,   105,     0,   242,     0,   243,   136,    86,
      90,     0,   120,   119,   118,    94,     0,     0,     0,     0,
      55,     0,     0,    58,    57,     0,    64,    63,    56,    62,
      54,    67,    45,     0,    48,   192,     0,   206,   208,     0,
     196,   197,   198,   199,   200,   201,     0,     0,     0,     0,
       0,     0,   179,     0,     0,     0,   152,   142,   171,   172,
       0,   167,     0,     0,     0,   158,     0,   170,   169,   185,
     186,   187,   188,   189,   190,   191,   162,   161,   164,   163,
     165,   166,     0,    34,   268,     0,    38,     0,    22,   246,
     107,   222,   224,     0,   226,   240,   225,   111,   131,   241,
     117,   128,   126,     0,    44,     0,     0,     0,    65,     0,
      53,    52,     0,   183,     0,     0,     0,     0,   177,     0,
       0,     0,   202,     0,   168,     0,     0,     0,   159,   203,
      76,    24,     0,     0,   262,   254,   260,   258,   261,   256,
       0,     0,     0,   239,   230,   237,     0,   101,    47,     0,
       0,     0,    66,   193,     0,     0,   181,     0,   180,     0,
     184,   204,     0,     0,   175,   173,   240,     0,   257,   259,
     255,     0,   223,   241,     0,     0,    59,    61,   194,   195,
     178,   182,   176,   174,   227,   251,   263,     0,   113,    60,
       0,     0,     0,     0,   110,     0,   264,   252,   238,   112,
     205,     0,   253
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -392,  -392,  -392,   445,  -392,   489,  -392,   245,  -392,    22,
    -392,  -392,  -392,  -392,   249,   -83,   392,  -392,  -392,  -392,
     -21,  -392,   216,   135,  -392,  -392,   487,  -392,  -392,  -392,
     410,  -392,  -392,   331,  -165,   -67,  -392,     8,   -69,   -47,
    -392,  -392,   -66,   308,  -392,  -392,  -392,  -126,  -392,  -392,
       2,  -392,   246,  -392,  -392,    28,  -252,  -392,  -100,   264,
    -136,  -135,  -392,  -392,  -392,  -392,  -392,  -392,   304,  -392,
    -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,    69,   -68,
     -85,  -392,  -392,   -93,  -392,  -392,  -392,  -391,    94,  -392,
    -392,  -392,     1,  -392,  -392,  -392,    99,   333,  -392,  -392,
    -392,  -392,   464,  -392,  -392,  -392,  -392,  -295
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    18,    19,    20,    21,    68,   219,   220,    22,    61,
      23,   131,    24,    25,    86,   144,   215,    26,    27,    28,
      82,   239,   240,   321,   400,    29,    94,    30,    31,    32,
     140,    33,   142,   143,    34,   159,   160,   161,    73,   108,
     109,   164,    74,   156,   221,   292,   293,   137,   437,   484,
     112,   227,   228,   304,   102,   169,   222,   121,   122,   223,
     224,   189,   190,   191,   192,   193,   194,   195,   249,   196,
     197,   198,   199,   200,   336,   201,   202,   203,   204,   205,
     124,   125,   126,   127,   128,   129,   380,   381,   382,   383,
     384,    49,   385,    80,    92,   433,   434,   435,   298,    35,
      36,    58,    59,   386,   430,   487,    66,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     188,   345,   104,    39,   145,   145,    42,   146,   154,   123,
     237,    50,    51,   393,    38,   155,   213,   114,   115,   116,
     136,   307,   327,   490,    83,   483,   174,   111,   295,   229,
     105,   231,   233,    89,   265,   257,   295,   352,    62,    63,
     462,   423,   162,    72,   166,   162,   248,    84,   252,    87,
     254,   256,   258,   145,    70,   206,    96,   175,    43,   132,
     105,   257,   302,   106,   353,   280,   406,    44,    52,   257,
     476,   210,    90,   257,   402,   285,   324,    53,   258,   103,
     424,   257,    55,   134,   135,   425,   258,   257,   303,   347,
     258,   426,   427,   106,    60,   149,   150,    45,   258,   107,
     176,   167,   417,   234,   258,   151,    38,    54,   428,   212,
     337,   338,  -263,   429,   117,   226,   252,    37,   255,   168,
      56,   348,   349,   468,   350,   110,   351,   265,    40,   107,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   257,   294,   432,   217,   178,
     114,   115,   116,   118,   119,   296,   279,    46,   280,   300,
     162,   225,   258,   453,    71,   229,   387,   340,   230,   325,
     391,   392,    41,   235,   407,   329,   379,   328,   186,   423,
     265,   355,   482,   120,   375,  -228,   341,   372,   377,   179,
     180,   181,   342,   341,   178,   114,   115,   116,   356,   408,
     178,   114,   115,   116,   409,   410,   276,   277,   278,   279,
      48,   280,   478,    70,   422,   449,   123,   414,   424,   209,
     123,   398,   257,   425,   145,    47,   394,   247,   182,   426,
     427,   257,   412,    57,   179,   180,   181,   294,   399,   258,
     179,   180,   181,    64,    65,    67,   428,   117,   258,   257,
    -263,   429,    70,   299,   242,    75,   243,   232,   305,   405,
     178,   114,   115,   116,   183,    76,   258,   257,   444,   448,
     446,   447,   282,   182,   411,   283,    77,   184,   451,   182,
     289,    78,   373,   290,   258,   416,   118,   119,   257,    79,
     470,    81,   117,   178,   114,   115,   116,    85,   117,   247,
     179,   180,   181,   185,   186,   258,    88,   322,    91,   183,
     323,   187,    93,   471,   420,   183,   120,   171,   421,    98,
     423,   171,   184,  -229,    97,   100,   438,   443,   184,   283,
     294,   118,   119,   250,   180,   181,   101,   118,   119,   182,
     113,   178,   114,   115,   116,   486,   452,   489,   185,   186,
     455,   130,   133,   294,   185,   186,   187,   136,   117,   424,
     473,   120,   187,   294,   425,   260,   488,   120,   138,   283,
     426,   427,   182,   139,   480,   183,   330,   331,   332,   333,
     334,   335,   180,   181,   259,   141,   147,   428,   184,   114,
      71,   117,   429,   148,   153,   116,   155,   118,   119,   157,
     163,   158,   165,   170,   172,   171,   173,   207,   251,   211,
     214,   218,   236,   110,   185,   186,    14,   238,   260,   241,
     182,   184,   187,   481,   244,   245,   246,   120,   253,   281,
     118,   119,   284,   287,   288,   291,   308,   294,   306,   117,
     264,   301,   309,    70,   374,   343,   265,   185,   186,   346,
     354,   389,   395,   396,   352,   187,   251,   397,   257,   403,
     120,   404,   418,  -266,  -266,   261,   280,  -266,  -266,   184,
     274,   275,   276,   277,   278,   279,   415,   280,   118,   119,
     419,   431,   436,   439,   440,   262,   441,   450,   454,   456,
     457,   442,   263,   264,   458,   185,   186,   461,   459,   265,
     266,   460,   463,   187,   464,   477,   465,   466,   120,   467,
      99,   469,    69,   267,   268,   269,   270,   271,   243,   472,
     272,   273,  -265,   274,   275,   276,   277,   278,   279,     1,
     280,   479,   492,   485,     1,   378,   376,     2,   216,   401,
     445,    95,     2,   286,     3,   177,   260,   390,     4,     3,
     326,   475,   339,     4,   491,   474,     5,   297,   388,     6,
       7,     5,   152,     0,     6,     7,     0,     0,     0,     0,
       0,     8,     9,     0,     0,     0,     8,     9,     0,     0,
       0,     0,    10,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,   261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,   413,     0,     0,
      12,    11,   260,   344,     0,    12,     0,     0,     0,     0,
       0,   264,     0,     0,     0,    13,     0,   265,   266,     0,
      13,    14,     0,     0,     0,     0,    14,     0,     0,     0,
       0,   267,   268,   269,   270,   271,     0,     0,   272,   273,
     260,   274,   275,   276,   277,   278,   279,     0,   280,   261,
       0,     0,     0,     0,     0,    15,    16,    17,     0,     0,
      15,    16,    17,     0,     0,     0,     0,     0,     0,   344,
       0,     0,     0,     0,     0,     0,     0,   264,     0,     0,
       0,     0,     0,   265,   266,     0,     0,  -266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,   268,   269,
     270,   271,     0,     0,   272,   273,     0,   274,   275,   276,
     277,   278,   279,     0,   280,   264,     0,     0,   310,     0,
       0,   265,  -266,   311,     0,     0,   312,     0,     0,     0,
       0,     0,     0,     0,   313,  -266,  -266,  -266,   270,   271,
       0,     0,   272,   273,     0,   274,   275,   276,   277,   278,
     279,     0,   280,     0,     0,     0,     0,     0,     0,     0,
     314,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   315,     0,   316,
     317,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   318,     0,     0,     0,   319,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     320
};

static const yytype_int16 yycheck[] =
{
     136,   253,    71,     2,    89,    90,     5,    90,   101,    77,
     175,    10,    11,   308,     3,    12,   142,     4,     5,     6,
      80,    52,     3,     3,    45,    48,    91,    74,     3,   165,
       9,   167,   168,    91,   132,   112,     3,    98,    16,    17,
     431,    25,   108,    35,   111,   111,   182,    46,   183,    48,
     185,   187,   129,   138,    55,   138,    55,   122,    68,    80,
       9,   112,    87,    42,   125,   163,   105,    77,    68,   112,
     461,   140,   130,   112,   326,   211,   241,    77,   129,    71,
      64,   112,    19,    82,    83,    69,   129,   112,   113,   166,
     129,    75,    76,    42,   142,    94,    95,   107,   129,    78,
     165,    52,   354,   171,   129,    97,     3,   107,    92,   169,
     246,   247,    96,    97,   101,   162,   251,    26,   187,    70,
      57,   257,   258,   166,   259,    74,   261,   132,     3,    78,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   112,   169,   122,   147,     3,
       4,     5,     6,   140,   141,   122,   161,    91,   163,   226,
     226,   159,   129,   415,   165,   301,   292,    89,   166,   166,
     306,   307,     3,   172,    89,   244,   165,   158,   158,    25,
     132,   101,   477,   170,   284,   169,   108,   280,   288,    43,
      44,    45,   114,   108,     3,     4,     5,     6,   118,   114,
       3,     4,     5,     6,   340,   341,   158,   159,   160,   161,
      95,   163,   464,    55,   379,   105,   284,   352,    64,    61,
     288,   101,   112,    69,   309,    91,   309,   108,    82,    75,
      76,   112,   164,     3,    43,    44,    45,   169,   118,   129,
      43,    44,    45,     0,   168,   109,    92,   101,   129,   112,
      96,    97,    55,   225,   165,     3,   167,   111,   230,   122,
       3,     4,     5,     6,   118,   167,   129,   112,   404,   114,
     406,   407,   166,    82,   343,   169,   165,   131,   413,    82,
     166,    91,   281,   169,   129,   354,   140,   141,   112,     3,
     114,   124,   101,     3,     4,     5,     6,     3,   101,   108,
      43,    44,    45,   157,   158,   129,   120,   166,     3,   118,
     169,   165,   124,   449,   166,   118,   170,   169,   166,   169,
      25,   169,   131,   169,   122,    94,   166,   166,   131,   169,
     169,   140,   141,    43,    44,    45,   121,   140,   141,    82,
       3,     3,     4,     5,     6,   481,   415,   483,   157,   158,
     166,     4,   118,   169,   157,   158,   165,    80,   101,    64,
     166,   170,   165,   169,    69,    51,   166,   170,    90,   169,
      75,    76,    82,   165,    79,   118,   134,   135,   136,   137,
     138,   139,    44,    45,    17,     3,   128,    92,   131,     4,
     165,   101,    97,    43,   165,     6,    12,   140,   141,   166,
     111,   166,   123,   166,   128,   169,    43,     3,   118,   146,
     109,     3,     3,    74,   157,   158,   109,     3,    51,   122,
      82,   131,   165,   128,   165,   165,   165,   170,   163,    95,
     140,   141,   165,    46,   165,    91,   165,   169,    52,   101,
     126,   169,    90,    55,     3,   165,   132,   157,   158,   166,
     165,     3,    30,   165,    98,   165,   118,   165,   112,   166,
     170,    91,   101,   149,   150,    98,   163,   153,   154,   131,
     156,   157,   158,   159,   160,   161,   165,   163,   140,   141,
     164,   169,    67,   165,     6,   118,     6,   166,   166,   166,
      96,   101,   125,   126,    75,   157,   158,    96,    75,   132,
     133,    75,     3,   165,   123,   165,     6,   166,   170,   166,
      65,   166,    23,   146,   147,   148,   149,   150,   167,   166,
     153,   154,     0,   156,   157,   158,   159,   160,   161,     7,
     163,   166,   166,   165,     7,   290,   287,    15,   146,   323,
     405,    54,    15,   212,    22,   135,    51,   301,    26,    22,
     242,   457,   248,    26,   485,   456,    34,   224,   294,    37,
      38,    34,    98,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,   112,    -1,    -1,
      88,    84,    51,   118,    -1,    88,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,   103,    -1,   132,   133,    -1,
     103,   109,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,   146,   147,   148,   149,   150,    -1,    -1,   153,   154,
      51,   156,   157,   158,   159,   160,   161,    -1,   163,    98,
      -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,    -1,
     143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,   132,   133,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,   147,   148,
     149,   150,    -1,    -1,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,    -1,   163,   126,    -1,    -1,    24,    -1,
      -1,   132,   133,    29,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,   146,   147,   148,   149,   150,
      -1,    -1,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    34,    37,    38,    49,    50,
      60,    84,    88,   103,   109,   143,   144,   145,   172,   173,
     174,   175,   179,   181,   183,   184,   188,   189,   190,   196,
     198,   199,   200,   202,   205,   270,   271,    26,     3,   263,
       3,     3,   263,    68,    77,   107,    91,    91,    95,   262,
     263,   263,    68,    77,   107,    19,    57,     3,   272,   273,
     142,   180,   180,   180,     0,   168,   277,   109,   176,   176,
      55,   165,   208,   209,   213,     3,   167,   165,    91,     3,
     264,   124,   191,   191,   263,     3,   185,   263,   120,    91,
     130,     3,   265,   124,   197,   197,   263,   122,   169,   174,
      94,   121,   225,   208,   209,     9,    42,    78,   210,   211,
      74,   210,   221,     3,     4,     5,     6,   101,   140,   141,
     170,   228,   229,   250,   251,   252,   253,   254,   255,   256,
       4,   182,   191,   118,   263,   263,    80,   218,    90,   165,
     201,     3,   203,   204,   186,   251,   186,   128,    43,   263,
     263,   208,   273,   165,   254,    12,   214,   166,   166,   206,
     207,   208,   213,   111,   212,   123,   206,    52,    70,   226,
     166,   169,   128,    43,    91,   122,   165,   201,     3,    43,
      44,    45,    82,   118,   131,   157,   158,   165,   231,   232,
     233,   234,   235,   236,   237,   238,   240,   241,   242,   243,
     244,   246,   247,   248,   249,   250,   186,     3,   278,    61,
     209,   146,   169,   218,   109,   187,   187,   263,     3,   177,
     178,   215,   227,   230,   231,   221,   210,   222,   223,   231,
     221,   231,   111,   231,   250,   263,     3,   205,     3,   192,
     193,   122,   165,   167,   165,   165,   165,   108,   231,   239,
      43,   118,   232,   163,   232,   209,   231,   112,   129,    17,
      51,    98,   118,   125,   126,   132,   133,   146,   147,   148,
     149,   150,   153,   154,   156,   157,   158,   159,   160,   161,
     163,    95,   166,   169,   165,   231,   204,    46,   165,   166,
     169,    91,   216,   217,   169,     3,   122,   268,   269,   226,
     206,   169,    87,   113,   224,   226,    52,    52,   165,    90,
      24,    29,    32,    40,    66,    83,    85,    86,   100,   104,
     116,   194,   166,   169,   205,   166,   214,     3,   158,   209,
     134,   135,   136,   137,   138,   139,   245,   231,   231,   239,
      89,   108,   114,   165,   118,   227,   166,   166,   231,   231,
     232,   232,    98,   125,   165,   101,   118,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   254,   263,     3,   229,   185,   229,   178,   165,
     257,   258,   259,   260,   261,   263,   274,   218,   230,     3,
     223,   231,   231,   278,   186,    30,   165,   165,   101,   118,
     195,   193,   227,   166,    91,   122,   105,    89,   114,   231,
     231,   209,   164,   112,   232,   165,   209,   227,   101,   164,
     166,   166,   205,    25,    64,    69,    75,    76,    92,    97,
     275,   169,   122,   266,   267,   268,    67,   219,   166,   165,
       6,     6,   101,   166,   231,   194,   231,   231,   114,   105,
     166,   232,   209,   227,   166,   166,   166,    96,    75,    75,
      75,    96,   258,     3,   123,     6,   166,   166,   166,   166,
     114,   231,   166,   166,   267,   259,   258,   165,   227,   166,
      79,   128,   278,    48,   220,   165,   231,   276,   166,   231,
       3,   249,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   171,   172,   173,   173,   174,   174,   174,   174,   174,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   179,   180,   180,
     181,   182,   183,   183,   184,   184,   185,   186,   187,   187,
     188,   189,   189,   189,   190,   190,   190,   190,   190,   191,
     191,   192,   192,   193,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   195,   195,   195,   196,   196,
     196,   196,   197,   197,   198,   199,   200,   200,   201,   201,
     202,   203,   203,   204,   205,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   209,   210,   211,   211,   211,   212,
     212,   213,   214,   214,   215,   216,   216,   217,   218,   218,
     219,   219,   220,   220,   221,   221,   222,   222,   223,   224,
     224,   224,   225,   225,   226,   226,   226,   226,   226,   226,
     227,   227,   228,   228,   229,   229,   230,   231,   231,   231,
     231,   231,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   233,   233,   234,   234,   234,   234,   234,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   236,   236,   237,   237,   237,   237,   238,   238,   238,
     238,   239,   239,   240,   240,   241,   241,   241,   241,   241,
     241,   241,   242,   242,   243,   244,   245,   245,   245,   245,
     245,   245,   246,   247,   248,   249,   249,   249,   249,   250,
     250,   250,   250,   250,   251,   252,   252,   253,   253,   254,
     255,   256,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   262,   263,   263,   264,   264,   265,   266,   266,   267,
     267,   268,   268,   269,   269,   270,   270,   271,   272,   272,
     273,   274,   274,   274,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   276,   277,   277,   278,   278
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     7,     6,     9,     7,     3,
       0,     1,     3,     3,     1,     1,     1,     1,     1,     4,
       5,     4,     1,     1,     1,     1,     2,     0,     4,     4,
       3,     5,     2,     0,     4,     2,     8,     5,     3,     0,
       5,     1,     3,     3,     2,     2,     6,     1,     1,     1,
       3,     3,     3,     3,     5,     2,     1,     1,     1,     1,
       0,     7,     1,     0,     1,     1,     0,     2,     2,     0,
       4,     0,     2,     0,     3,     0,     1,     3,     2,     1,
       1,     0,     2,     0,     2,     2,     4,     2,     4,     0,
       1,     3,     1,     0,     1,     3,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     2,     2,     3,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     3,     3,     5,     6,     5,     6,     4,     6,     3,
       5,     4,     5,     4,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     6,     6,     1,     1,     1,     1,
       1,     1,     4,     4,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     4,     1,     3,
       2,     1,     1,     3,     1,     0,     1,     1,     5,     1,
       0,     2,     1,     1,     0,     1,     0,     2,     1,     3,
       3,     4,     6,     8,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1942 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1948 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 147 "bison_parser.y"
            { }
#line 1954 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 147 "bison_parser.y"
            { }
#line 1960 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1973 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1979 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1985 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1998 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2011 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2017 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2023 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2029 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2035 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2041 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2047 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 147 "bison_parser.y"
            { }
#line 2053 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2059 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 147 "bison_parser.y"
            { }
#line 2065 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2071 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2077 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2083 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 147 "bison_parser.y"
            { }
#line 2089 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_commalist: /* column_def_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2102 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2108 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 147 "bison_parser.y"
            { }
#line 2114 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 147 "bison_parser.y"
            { }
#line 2120 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2126 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 147 "bison_parser.y"
            { }
#line 2132 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2138 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2144 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2150 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2163 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2169 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2182 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2188 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2194 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2200 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2206 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2212 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2218 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2224 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2230 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 147 "bison_parser.y"
            { }
#line 2236 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2242 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 147 "bison_parser.y"
            { }
#line 2248 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2261 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2267 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2273 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2279 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2285 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2291 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2304 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2317 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2323 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 147 "bison_parser.y"
            { }
#line 2329 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2335 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2341 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2354 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2367 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2380 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2386 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2392 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2398 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2404 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2410 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2416 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2422 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2428 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2434 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2440 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2446 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2452 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2458 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2464 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2470 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 147 "bison_parser.y"
            { }
#line 2476 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2482 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2488 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2494 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2500 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2506 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2512 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2518 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2524 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2530 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2536 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2542 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2548 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2554 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2560 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2573 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2579 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2585 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2591 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2597 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_name: /* index_name  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2603 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2609 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2615 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2621 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2627 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2633 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2639 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2645 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2651 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2657 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 147 "bison_parser.y"
            { }
#line 2663 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2669 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2682 "bison_parser.cpp"
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
#line 73 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2789 "bison_parser.cpp"

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
#line 3017 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 292 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3028 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 298 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3039 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 307 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3048 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 311 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3057 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 315 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3065 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 318 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3073 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 321 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3081 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3087 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3093 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 330 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3099 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 331 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3105 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 332 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3111 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 333 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3117 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 334 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3123 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: execute_statement  */
#line 335 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3129 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: transaction_statement  */
#line 336 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3135 "bison_parser.cpp"
    break;

  case 19: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 345 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3141 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: %empty  */
#line 346 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3147 "bison_parser.cpp"
    break;

  case 21: /* hint_list: hint  */
#line 351 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3153 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint_list ',' hint  */
#line 352 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3159 "bison_parser.cpp"
    break;

  case 23: /* hint: IDENTIFIER  */
#line 356 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3168 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 360 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3178 "bison_parser.cpp"
    break;

  case 25: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 372 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3186 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 375 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3194 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 378 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3202 "bison_parser.cpp"
    break;

  case 30: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 392 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3212 "bison_parser.cpp"
    break;

  case 32: /* execute_statement: EXECUTE IDENTIFIER  */
#line 402 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3221 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 406 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3231 "bison_parser.cpp"
    break;

  case 34: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 420 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3242 "bison_parser.cpp"
    break;

  case 35: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 426 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3253 "bison_parser.cpp"
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
#line 3272 "bison_parser.cpp"
    break;

  case 37: /* file_path: string_literal  */
#line 452 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3278 "bison_parser.cpp"
    break;

  case 38: /* opt_file_type: WITH FORMAT file_type  */
#line 456 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3286 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: %empty  */
#line 459 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3292 "bison_parser.cpp"
    break;

  case 40: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 468 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3303 "bison_parser.cpp"
    break;

  case 41: /* show_statement: SHOW TABLES  */
#line 482 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3311 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW COLUMNS table_name  */
#line 485 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3321 "bison_parser.cpp"
    break;

  case 43: /* show_statement: DESCRIBE table_name  */
#line 490 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3331 "bison_parser.cpp"
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
#line 3349 "bison_parser.cpp"
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
#line 3361 "bison_parser.cpp"
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
#line 3373 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE INDEX opt_index_name opt_not_exists ON table_name '(' ident_commalist ')'  */
#line 531 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-6].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3385 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 538 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3398 "bison_parser.cpp"
    break;

  case 49: /* opt_not_exists: IF NOT EXISTS  */
#line 549 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3404 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: %empty  */
#line 550 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3410 "bison_parser.cpp"
    break;

  case 51: /* column_def_commalist: column_def  */
#line 554 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3416 "bison_parser.cpp"
    break;

  case 52: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 555 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3422 "bison_parser.cpp"
    break;

  case 53: /* column_def: IDENTIFIER column_type opt_column_nullable  */
#line 559 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3430 "bison_parser.cpp"
    break;

  case 54: /* column_type: INT  */
#line 565 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3436 "bison_parser.cpp"
    break;

  case 55: /* column_type: INTEGER  */
#line 566 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3442 "bison_parser.cpp"
    break;

  case 56: /* column_type: LONG  */
#line 567 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3448 "bison_parser.cpp"
    break;

  case 57: /* column_type: FLOAT  */
#line 568 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3454 "bison_parser.cpp"
    break;

  case 58: /* column_type: DOUBLE  */
#line 569 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3460 "bison_parser.cpp"
    break;

  case 59: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 570 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3466 "bison_parser.cpp"
    break;

  case 60: /* column_type: CHARACTER VARYING '(' INTVAL ')'  */
#line 571 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3472 "bison_parser.cpp"
    break;

  case 61: /* column_type: CHAR '(' INTVAL ')'  */
#line 572 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3478 "bison_parser.cpp"
    break;

  case 62: /* column_type: TEXT  */
#line 573 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3484 "bison_parser.cpp"
    break;

  case 63: /* column_type: DATETIME  */
#line 574 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3490 "bison_parser.cpp"
    break;

  case 64: /* column_type: DATE  */
#line 575 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3496 "bison_parser.cpp"
    break;

  case 65: /* opt_column_nullable: NULL  */
#line 579 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3502 "bison_parser.cpp"
    break;

  case 66: /* opt_column_nullable: NOT NULL  */
#line 580 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3508 "bison_parser.cpp"
    break;

  case 67: /* opt_column_nullable: %empty  */
#line 581 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3514 "bison_parser.cpp"
    break;

  case 68: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 591 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3525 "bison_parser.cpp"
    break;

  case 69: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 597 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3536 "bison_parser.cpp"
    break;

  case 70: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 603 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3546 "bison_parser.cpp"
    break;

  case 71: /* drop_statement: DROP INDEX index_name ON table_name  */
#line 608 "bison_parser.y"
                                                    {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
    			(yyval.drop_stmt)->index_name = (yyvsp[-2].sval);
    		}
#line 3556 "bison_parser.cpp"
    break;

  case 72: /* opt_exists: IF EXISTS  */
#line 616 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3562 "bison_parser.cpp"
    break;

  case 73: /* opt_exists: %empty  */
#line 617 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3568 "bison_parser.cpp"
    break;

  case 74: /* delete_statement: DELETE FROM table_name opt_where  */
#line 626 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3579 "bison_parser.cpp"
    break;

  case 75: /* truncate_statement: TRUNCATE table_name  */
#line 635 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3589 "bison_parser.cpp"
    break;

  case 76: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 648 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3601 "bison_parser.cpp"
    break;

  case 77: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 655 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3613 "bison_parser.cpp"
    break;

  case 78: /* opt_column_list: '(' ident_commalist ')'  */
#line 666 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3619 "bison_parser.cpp"
    break;

  case 79: /* opt_column_list: %empty  */
#line 667 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3625 "bison_parser.cpp"
    break;

  case 80: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 677 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3636 "bison_parser.cpp"
    break;

  case 81: /* update_clause_commalist: update_clause  */
#line 686 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3642 "bison_parser.cpp"
    break;

  case 82: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 687 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3648 "bison_parser.cpp"
    break;

  case 83: /* update_clause: IDENTIFIER '=' expr  */
#line 691 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3658 "bison_parser.cpp"
    break;

  case 84: /* select_statement: opt_with_clause select_with_paren  */
#line 703 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3667 "bison_parser.cpp"
    break;

  case 85: /* select_statement: opt_with_clause select_no_paren  */
#line 707 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3676 "bison_parser.cpp"
    break;

  case 86: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 711 "bison_parser.y"
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
#line 3692 "bison_parser.cpp"
    break;

  case 89: /* select_within_set_operation_no_parentheses: select_clause  */
#line 729 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3698 "bison_parser.cpp"
    break;

  case 90: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 730 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3711 "bison_parser.cpp"
    break;

  case 91: /* select_with_paren: '(' select_no_paren ')'  */
#line 741 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3717 "bison_parser.cpp"
    break;

  case 92: /* select_with_paren: '(' select_with_paren ')'  */
#line 742 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3723 "bison_parser.cpp"
    break;

  case 93: /* select_no_paren: select_clause opt_order opt_limit  */
#line 746 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3738 "bison_parser.cpp"
    break;

  case 94: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 756 "bison_parser.y"
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
#line 3753 "bison_parser.cpp"
    break;

  case 95: /* set_operator: set_type opt_all  */
#line 769 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3762 "bison_parser.cpp"
    break;

  case 96: /* set_type: UNION  */
#line 776 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3771 "bison_parser.cpp"
    break;

  case 97: /* set_type: INTERSECT  */
#line 780 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3780 "bison_parser.cpp"
    break;

  case 98: /* set_type: EXCEPT  */
#line 784 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3789 "bison_parser.cpp"
    break;

  case 99: /* opt_all: ALL  */
#line 791 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3797 "bison_parser.cpp"
    break;

  case 100: /* opt_all: %empty  */
#line 794 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3805 "bison_parser.cpp"
    break;

  case 101: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 800 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3819 "bison_parser.cpp"
    break;

  case 102: /* opt_distinct: DISTINCT  */
#line 812 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3825 "bison_parser.cpp"
    break;

  case 103: /* opt_distinct: %empty  */
#line 813 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3831 "bison_parser.cpp"
    break;

  case 105: /* opt_from_clause: from_clause  */
#line 821 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3837 "bison_parser.cpp"
    break;

  case 106: /* opt_from_clause: %empty  */
#line 822 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3843 "bison_parser.cpp"
    break;

  case 107: /* from_clause: FROM table_ref  */
#line 826 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3849 "bison_parser.cpp"
    break;

  case 108: /* opt_where: WHERE expr  */
#line 831 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3855 "bison_parser.cpp"
    break;

  case 109: /* opt_where: %empty  */
#line 832 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3861 "bison_parser.cpp"
    break;

  case 110: /* opt_group: GROUP BY expr_list opt_having  */
#line 836 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3871 "bison_parser.cpp"
    break;

  case 111: /* opt_group: %empty  */
#line 841 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3877 "bison_parser.cpp"
    break;

  case 112: /* opt_having: HAVING expr  */
#line 845 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3883 "bison_parser.cpp"
    break;

  case 113: /* opt_having: %empty  */
#line 846 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3889 "bison_parser.cpp"
    break;

  case 114: /* opt_order: ORDER BY order_list  */
#line 850 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3895 "bison_parser.cpp"
    break;

  case 115: /* opt_order: %empty  */
#line 851 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3901 "bison_parser.cpp"
    break;

  case 116: /* order_list: order_desc  */
#line 855 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3907 "bison_parser.cpp"
    break;

  case 117: /* order_list: order_list ',' order_desc  */
#line 856 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3913 "bison_parser.cpp"
    break;

  case 118: /* order_desc: expr opt_order_type  */
#line 860 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3919 "bison_parser.cpp"
    break;

  case 119: /* opt_order_type: ASC  */
#line 864 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3925 "bison_parser.cpp"
    break;

  case 120: /* opt_order_type: DESC  */
#line 865 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3931 "bison_parser.cpp"
    break;

  case 121: /* opt_order_type: %empty  */
#line 866 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3937 "bison_parser.cpp"
    break;

  case 122: /* opt_top: TOP int_literal  */
#line 872 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3943 "bison_parser.cpp"
    break;

  case 123: /* opt_top: %empty  */
#line 873 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3949 "bison_parser.cpp"
    break;

  case 124: /* opt_limit: LIMIT expr  */
#line 877 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3955 "bison_parser.cpp"
    break;

  case 125: /* opt_limit: OFFSET expr  */
#line 878 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3961 "bison_parser.cpp"
    break;

  case 126: /* opt_limit: LIMIT expr OFFSET expr  */
#line 879 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3967 "bison_parser.cpp"
    break;

  case 127: /* opt_limit: LIMIT ALL  */
#line 880 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3973 "bison_parser.cpp"
    break;

  case 128: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 881 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3979 "bison_parser.cpp"
    break;

  case 129: /* opt_limit: %empty  */
#line 882 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3985 "bison_parser.cpp"
    break;

  case 130: /* expr_list: expr_alias  */
#line 889 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3991 "bison_parser.cpp"
    break;

  case 131: /* expr_list: expr_list ',' expr_alias  */
#line 890 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3997 "bison_parser.cpp"
    break;

  case 132: /* opt_literal_list: literal_list  */
#line 894 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4003 "bison_parser.cpp"
    break;

  case 133: /* opt_literal_list: %empty  */
#line 895 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4009 "bison_parser.cpp"
    break;

  case 134: /* literal_list: literal  */
#line 899 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4015 "bison_parser.cpp"
    break;

  case 135: /* literal_list: literal_list ',' literal  */
#line 900 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4021 "bison_parser.cpp"
    break;

  case 136: /* expr_alias: expr opt_alias  */
#line 904 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4033 "bison_parser.cpp"
    break;

  case 142: /* operand: '(' expr ')'  */
#line 922 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4039 "bison_parser.cpp"
    break;

  case 152: /* operand: '(' select_no_paren ')'  */
#line 932 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4045 "bison_parser.cpp"
    break;

  case 155: /* unary_expr: '-' operand  */
#line 941 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4051 "bison_parser.cpp"
    break;

  case 156: /* unary_expr: NOT operand  */
#line 942 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4057 "bison_parser.cpp"
    break;

  case 157: /* unary_expr: operand ISNULL  */
#line 943 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4063 "bison_parser.cpp"
    break;

  case 158: /* unary_expr: operand IS NULL  */
#line 944 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4069 "bison_parser.cpp"
    break;

  case 159: /* unary_expr: operand IS NOT NULL  */
#line 945 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4075 "bison_parser.cpp"
    break;

  case 161: /* binary_expr: operand '-' operand  */
#line 950 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4081 "bison_parser.cpp"
    break;

  case 162: /* binary_expr: operand '+' operand  */
#line 951 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4087 "bison_parser.cpp"
    break;

  case 163: /* binary_expr: operand '/' operand  */
#line 952 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4093 "bison_parser.cpp"
    break;

  case 164: /* binary_expr: operand '*' operand  */
#line 953 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4099 "bison_parser.cpp"
    break;

  case 165: /* binary_expr: operand '%' operand  */
#line 954 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4105 "bison_parser.cpp"
    break;

  case 166: /* binary_expr: operand '^' operand  */
#line 955 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4111 "bison_parser.cpp"
    break;

  case 167: /* binary_expr: operand LIKE operand  */
#line 956 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4117 "bison_parser.cpp"
    break;

  case 168: /* binary_expr: operand NOT LIKE operand  */
#line 957 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4123 "bison_parser.cpp"
    break;

  case 169: /* binary_expr: operand ILIKE operand  */
#line 958 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4129 "bison_parser.cpp"
    break;

  case 170: /* binary_expr: operand CONCAT operand  */
#line 959 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4135 "bison_parser.cpp"
    break;

  case 171: /* logic_expr: expr AND expr  */
#line 963 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4141 "bison_parser.cpp"
    break;

  case 172: /* logic_expr: expr OR expr  */
#line 964 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4147 "bison_parser.cpp"
    break;

  case 173: /* in_expr: operand IN '(' expr_list ')'  */
#line 968 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4153 "bison_parser.cpp"
    break;

  case 174: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 969 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4159 "bison_parser.cpp"
    break;

  case 175: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 970 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4165 "bison_parser.cpp"
    break;

  case 176: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 971 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4171 "bison_parser.cpp"
    break;

  case 177: /* case_expr: CASE expr case_list END  */
#line 977 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4177 "bison_parser.cpp"
    break;

  case 178: /* case_expr: CASE expr case_list ELSE expr END  */
#line 978 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4183 "bison_parser.cpp"
    break;

  case 179: /* case_expr: CASE case_list END  */
#line 979 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4189 "bison_parser.cpp"
    break;

  case 180: /* case_expr: CASE case_list ELSE expr END  */
#line 980 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4195 "bison_parser.cpp"
    break;

  case 181: /* case_list: WHEN expr THEN expr  */
#line 984 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4201 "bison_parser.cpp"
    break;

  case 182: /* case_list: case_list WHEN expr THEN expr  */
#line 985 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4207 "bison_parser.cpp"
    break;

  case 183: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 989 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4213 "bison_parser.cpp"
    break;

  case 184: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 990 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4219 "bison_parser.cpp"
    break;

  case 185: /* comp_expr: operand '=' operand  */
#line 994 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4225 "bison_parser.cpp"
    break;

  case 186: /* comp_expr: operand EQUALS operand  */
#line 995 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4231 "bison_parser.cpp"
    break;

  case 187: /* comp_expr: operand NOTEQUALS operand  */
#line 996 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4237 "bison_parser.cpp"
    break;

  case 188: /* comp_expr: operand '<' operand  */
#line 997 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4243 "bison_parser.cpp"
    break;

  case 189: /* comp_expr: operand '>' operand  */
#line 998 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4249 "bison_parser.cpp"
    break;

  case 190: /* comp_expr: operand LESSEQ operand  */
#line 999 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4255 "bison_parser.cpp"
    break;

  case 191: /* comp_expr: operand GREATEREQ operand  */
#line 1000 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4261 "bison_parser.cpp"
    break;

  case 192: /* function_expr: IDENTIFIER '(' ')'  */
#line 1004 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4267 "bison_parser.cpp"
    break;

  case 193: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1005 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4273 "bison_parser.cpp"
    break;

  case 194: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1009 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4279 "bison_parser.cpp"
    break;

  case 195: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1013 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4285 "bison_parser.cpp"
    break;

  case 196: /* datetime_field: SECOND  */
#line 1017 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4291 "bison_parser.cpp"
    break;

  case 197: /* datetime_field: MINUTE  */
#line 1018 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4297 "bison_parser.cpp"
    break;

  case 198: /* datetime_field: HOUR  */
#line 1019 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4303 "bison_parser.cpp"
    break;

  case 199: /* datetime_field: DAY  */
#line 1020 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4309 "bison_parser.cpp"
    break;

  case 200: /* datetime_field: MONTH  */
#line 1021 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4315 "bison_parser.cpp"
    break;

  case 201: /* datetime_field: YEAR  */
#line 1022 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4321 "bison_parser.cpp"
    break;

  case 202: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1026 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4327 "bison_parser.cpp"
    break;

  case 203: /* array_index: operand '[' int_literal ']'  */
#line 1030 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4333 "bison_parser.cpp"
    break;

  case 204: /* between_expr: operand BETWEEN operand AND operand  */
#line 1034 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4339 "bison_parser.cpp"
    break;

  case 205: /* column_name: IDENTIFIER  */
#line 1038 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4345 "bison_parser.cpp"
    break;

  case 206: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1039 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4351 "bison_parser.cpp"
    break;

  case 207: /* column_name: '*'  */
#line 1040 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4357 "bison_parser.cpp"
    break;

  case 208: /* column_name: IDENTIFIER '.' '*'  */
#line 1041 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4363 "bison_parser.cpp"
    break;

  case 214: /* string_literal: STRING  */
#line 1053 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4369 "bison_parser.cpp"
    break;

  case 215: /* bool_literal: TRUE  */
#line 1057 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4375 "bison_parser.cpp"
    break;

  case 216: /* bool_literal: FALSE  */
#line 1058 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4381 "bison_parser.cpp"
    break;

  case 217: /* num_literal: FLOATVAL  */
#line 1062 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4387 "bison_parser.cpp"
    break;

  case 219: /* int_literal: INTVAL  */
#line 1067 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4393 "bison_parser.cpp"
    break;

  case 220: /* null_literal: NULL  */
#line 1071 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4399 "bison_parser.cpp"
    break;

  case 221: /* param_expr: '?'  */
#line 1075 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4409 "bison_parser.cpp"
    break;

  case 223: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1088 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4420 "bison_parser.cpp"
    break;

  case 227: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1104 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4431 "bison_parser.cpp"
    break;

  case 228: /* table_ref_commalist: table_ref_atomic  */
#line 1113 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4437 "bison_parser.cpp"
    break;

  case 229: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1114 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4443 "bison_parser.cpp"
    break;

  case 230: /* table_ref_name: table_name opt_table_alias  */
#line 1119 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4455 "bison_parser.cpp"
    break;

  case 231: /* table_ref_name_no_alias: table_name  */
#line 1130 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4465 "bison_parser.cpp"
    break;

  case 232: /* table_name: IDENTIFIER  */
#line 1139 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4471 "bison_parser.cpp"
    break;

  case 233: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1140 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4477 "bison_parser.cpp"
    break;

  case 234: /* opt_index_name: IDENTIFIER  */
#line 1144 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4483 "bison_parser.cpp"
    break;

  case 235: /* opt_index_name: %empty  */
#line 1145 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4489 "bison_parser.cpp"
    break;

  case 236: /* index_name: IDENTIFIER  */
#line 1149 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4495 "bison_parser.cpp"
    break;

  case 238: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1155 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4501 "bison_parser.cpp"
    break;

  case 240: /* opt_table_alias: %empty  */
#line 1161 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4507 "bison_parser.cpp"
    break;

  case 241: /* alias: AS IDENTIFIER  */
#line 1166 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4513 "bison_parser.cpp"
    break;

  case 242: /* alias: IDENTIFIER  */
#line 1167 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4519 "bison_parser.cpp"
    break;

  case 244: /* opt_alias: %empty  */
#line 1173 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4525 "bison_parser.cpp"
    break;

  case 246: /* opt_with_clause: %empty  */
#line 1183 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4531 "bison_parser.cpp"
    break;

  case 247: /* with_clause: WITH with_description_list  */
#line 1187 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4537 "bison_parser.cpp"
    break;

  case 248: /* with_description_list: with_description  */
#line 1191 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4546 "bison_parser.cpp"
    break;

  case 249: /* with_description_list: with_description_list ',' with_description  */
#line 1195 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4555 "bison_parser.cpp"
    break;

  case 250: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1202 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4565 "bison_parser.cpp"
    break;

  case 251: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1216 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4577 "bison_parser.cpp"
    break;

  case 252: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1224 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4590 "bison_parser.cpp"
    break;

  case 253: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1234 "bison_parser.y"
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
#line 4610 "bison_parser.cpp"
    break;

  case 254: /* opt_join_type: INNER  */
#line 1252 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4616 "bison_parser.cpp"
    break;

  case 255: /* opt_join_type: LEFT OUTER  */
#line 1253 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4622 "bison_parser.cpp"
    break;

  case 256: /* opt_join_type: LEFT  */
#line 1254 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4628 "bison_parser.cpp"
    break;

  case 257: /* opt_join_type: RIGHT OUTER  */
#line 1255 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4634 "bison_parser.cpp"
    break;

  case 258: /* opt_join_type: RIGHT  */
#line 1256 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4640 "bison_parser.cpp"
    break;

  case 259: /* opt_join_type: FULL OUTER  */
#line 1257 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4646 "bison_parser.cpp"
    break;

  case 260: /* opt_join_type: OUTER  */
#line 1258 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4652 "bison_parser.cpp"
    break;

  case 261: /* opt_join_type: FULL  */
#line 1259 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4658 "bison_parser.cpp"
    break;

  case 262: /* opt_join_type: CROSS  */
#line 1260 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4664 "bison_parser.cpp"
    break;

  case 263: /* opt_join_type: %empty  */
#line 1261 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4670 "bison_parser.cpp"
    break;

  case 267: /* ident_commalist: IDENTIFIER  */
#line 1281 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4676 "bison_parser.cpp"
    break;

  case 268: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1282 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4682 "bison_parser.cpp"
    break;


#line 4686 "bison_parser.cpp"

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

#line 1285 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
