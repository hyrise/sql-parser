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
  YYSYMBOL_param_expr = 265,               /* param_expr  */
  YYSYMBOL_table_ref = 266,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 267,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 268, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 269,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 270,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 271,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 272,               /* table_name  */
  YYSYMBOL_table_alias = 273,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 274,          /* opt_table_alias  */
  YYSYMBOL_alias = 275,                    /* alias  */
  YYSYMBOL_opt_alias = 276,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 277,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 278,              /* with_clause  */
  YYSYMBOL_with_description_list = 279,    /* with_description_list  */
  YYSYMBOL_with_description = 280,         /* with_description  */
  YYSYMBOL_join_clause = 281,              /* join_clause  */
  YYSYMBOL_opt_join_type = 282,            /* opt_join_type  */
  YYSYMBOL_join_condition = 283,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 284,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 285           /* ident_commalist  */
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
#define YYLAST   778

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  490

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
       0,   270,   270,   291,   297,   306,   310,   314,   317,   320,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   344,
     345,   350,   351,   355,   359,   371,   374,   377,   383,   384,
     391,   398,   401,   405,   419,   425,   434,   451,   455,   458,
     467,   481,   484,   489,   503,   516,   523,   530,   541,   542,
     546,   547,   551,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   570,   571,   572,   582,   588,   594,   602,
     603,   612,   621,   634,   641,   652,   653,   663,   672,   673,
     677,   689,   693,   697,   711,   712,   715,   716,   727,   728,
     732,   742,   755,   762,   766,   770,   777,   780,   786,   798,
     799,   803,   807,   808,   812,   817,   818,   822,   827,   831,
     832,   836,   837,   841,   842,   846,   850,   851,   852,   858,
     859,   863,   864,   865,   866,   867,   868,   875,   876,   880,
     881,   885,   886,   890,   900,   901,   902,   903,   904,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     922,   923,   927,   928,   929,   930,   931,   935,   936,   937,
     938,   939,   940,   941,   942,   943,   944,   945,   949,   950,
     954,   955,   956,   957,   963,   964,   965,   966,   970,   971,
     975,   976,   980,   981,   982,   983,   984,   985,   986,   990,
     991,   995,   999,  1003,  1004,  1005,  1006,  1007,  1008,  1012,
    1013,  1014,  1015,  1016,  1017,  1021,  1022,  1026,  1030,  1034,
    1038,  1039,  1040,  1041,  1045,  1046,  1047,  1048,  1049,  1050,
    1051,  1055,  1059,  1060,  1064,  1065,  1069,  1073,  1077,  1090,
    1091,  1102,  1136,  1148,  1149,  1159,  1160,  1164,  1165,  1174,
    1175,  1180,  1191,  1200,  1201,  1206,  1207,  1212,  1213,  1218,
    1219,  1224,  1225,  1234,  1235,  1239,  1243,  1247,  1254,  1267,
    1275,  1285,  1304,  1305,  1306,  1307,  1308,  1309,  1310,  1311,
    1312,  1313,  1318,  1327,  1328,  1333,  1334
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
  "date_literal", "interval_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
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

#define YYPACT_NINF (-378)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-274)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     555,    37,   118,   120,   130,   118,   -40,    -3,    33,    46,
     118,   118,   -37,    15,   147,    55,    55,    55,   162,    27,
    -378,   116,  -378,   116,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,   -28,  -378,   244,    76,  -378,
      95,   164,  -378,   148,   148,   118,   251,   118,   153,  -378,
     -57,   159,   159,   118,  -378,   163,   108,  -378,  -378,  -378,
    -378,  -378,  -378,   550,  -378,   196,  -378,  -378,   171,   -28,
      40,  -378,   129,  -378,   288,    68,   293,   186,   118,   118,
     225,  -378,   220,   139,   307,   310,   310,   276,   118,   118,
    -378,   149,   147,  -378,   151,   312,   311,   155,   156,  -378,
    -378,  -378,   -28,   215,   207,   -28,    -6,  -378,  -378,  -378,
    -378,   325,  -378,   331,  -378,  -378,  -378,   165,   172,  -378,
    -378,  -378,  -378,   393,  -378,  -378,  -378,  -378,  -378,  -378,
     296,   -53,   139,   301,  -378,   310,   336,    38,   198,   -59,
    -378,   243,  -378,   243,  -378,  -378,  -378,  -378,  -378,   348,
    -378,  -378,   301,  -378,  -378,   294,  -378,  -378,    40,  -378,
    -378,   301,   294,   301,   123,  -378,  -378,   226,  -378,    68,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,   361,   260,   362,   248,
     -76,   202,   208,   209,   150,   328,   212,   349,  -378,   258,
      22,   390,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   290,  -378,
    -120,   216,  -378,   301,   307,  -378,   341,  -378,  -378,   223,
     -11,  -378,   306,   222,  -378,    20,    -6,   -28,   224,  -378,
      61,    -6,    22,   347,    31,  -378,  -378,   313,  -378,   292,
      25,  -378,   260,    10,    11,   346,   226,   301,   301,    88,
     -48,   245,   349,   565,   301,    53,   242,   -51,   301,   301,
     349,  -378,   349,   -36,   246,   109,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   312,   118,  -378,   411,    68,    22,  -378,   251,    68,
    -378,   348,     6,   225,  -378,   301,  -378,   415,  -378,  -378,
    -378,  -378,   301,  -378,  -378,  -378,  -378,   301,   301,   310,
    -378,   249,  -378,  -378,   252,  -378,  -378,  -378,  -378,  -378,
     110,  -378,   362,  -378,  -378,   301,  -378,  -378,   253,   334,
     -70,    34,    83,   301,   301,  -378,   346,   329,   -17,  -378,
    -378,  -378,   316,   514,   591,   349,   261,   258,  -378,   335,
     267,   591,   591,   591,   591,   610,   610,   610,   610,    53,
      53,   -84,   -84,   -84,   -93,   268,  -378,  -378,    64,  -378,
      84,  -378,   260,  -378,   315,  -378,   262,  -378,    23,  -378,
     373,  -378,  -378,  -378,    22,    22,  -378,   434,   435,  -378,
     343,  -378,  -378,    86,  -378,   301,   292,   301,   301,  -378,
     119,   124,   272,  -378,   349,   591,   258,   279,   102,  -378,
    -378,  -378,  -378,   280,   358,  -378,  -378,  -378,   380,   382,
     383,   364,     6,   456,  -378,  -378,  -378,   345,  -378,   291,
     297,  -378,  -378,    70,   298,    22,   132,  -378,   301,  -378,
     565,   299,   106,  -378,  -378,    23,     6,  -378,  -378,  -378,
       6,   387,   305,   301,  -378,  -378,  -378,  -378,  -378,    22,
    -378,  -378,  -378,  -378,   522,   336,   -29,   309,   301,   113,
     301,  -378,    12,    22,  -378,  -378,    22,   295,   314,  -378
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   274,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   253,     0,   243,    72,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   242,
       0,    70,    70,     0,    41,     0,   255,   256,    28,    25,
      27,    26,     1,   254,     2,     0,     6,     5,   120,     0,
      81,    82,   112,    68,     0,   130,     0,     0,     0,     0,
     106,    36,     0,    76,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   100,     0,     0,    94,
      95,    93,     0,    97,     0,     0,   126,   244,   221,   224,
     226,     0,   227,     0,   222,   223,   232,     0,   129,   131,
     214,   215,   216,   225,   217,   218,   219,   220,    31,    30,
       0,     0,    76,     0,    71,     0,     0,     0,     0,   106,
      78,    39,    37,    39,    69,    66,    67,   258,   257,     0,
     119,    99,     0,    89,    88,   112,    85,    84,    86,    96,
      92,     0,   112,     0,     0,    90,   228,   231,    33,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   229,    48,     0,   254,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,   212,     0,
     105,   134,   141,   142,   143,   136,   138,   144,   137,   157,
     145,   146,   147,   148,   140,   135,   150,   151,     0,   275,
       0,     0,    74,     0,     0,    77,     0,    35,    40,    23,
       0,    21,   103,   101,   127,   252,   126,     0,   111,   113,
     118,   126,   122,   124,   121,   230,   132,     0,    46,     0,
       0,    50,   254,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   153,     0,   152,     0,     0,     0,     0,
       0,   154,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    80,    79,     0,     0,
      19,     0,     0,   106,   102,     0,   250,     0,   251,   133,
      83,    87,     0,   117,   116,   115,    91,     0,     0,     0,
      54,     0,    57,    56,     0,    62,    61,    55,    60,    53,
      65,    45,     0,    47,   189,     0,   211,   213,     0,     0,
       0,     0,     0,     0,     0,   176,     0,     0,     0,   149,
     139,   168,   169,     0,   164,     0,     0,     0,   155,     0,
     167,   166,   182,   183,   184,   185,   186,   187,   188,   159,
     158,   161,   160,   162,   163,     0,    34,   276,     0,    38,
       0,    22,   254,   104,   233,   235,     0,   237,   248,   236,
     108,   128,   249,   114,   125,   123,    44,     0,     0,    63,
       0,    52,    51,     0,   180,     0,     0,     0,     0,   174,
       0,     0,     0,   207,     0,   165,     0,     0,     0,   156,
     208,    73,    24,     0,     0,   270,   262,   268,   266,   269,
     264,     0,     0,     0,   247,   241,   245,     0,    98,     0,
       0,    64,   190,     0,     0,   178,     0,   177,     0,   181,
     209,     0,     0,   172,   170,   248,     0,   265,   267,   263,
       0,   234,   249,     0,    58,    59,   191,   192,   175,   179,
     173,   171,   238,   259,   271,     0,   110,     0,     0,     0,
       0,   107,     0,   272,   260,   246,   109,   210,     0,   261
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -378,  -378,  -378,   417,  -378,   460,  -378,   183,  -378,    26,
    -378,  -378,  -378,  -378,   189,   -83,   353,  -378,  -378,  -378,
     444,  -378,   160,    91,  -378,  -378,   447,  -378,  -378,  -378,
     368,  -378,  -378,   277,  -175,   -89,  -378,    99,   -68,   -39,
    -378,  -378,   -78,   254,  -378,  -378,  -378,  -126,  -378,  -378,
    -114,  -378,   190,  -378,  -378,     9,  -243,  -378,  -113,   199,
    -133,  -177,  -378,  -378,  -378,  -378,  -378,  -378,   250,  -378,
    -378,  -378,  -378,  -378,  -138,  -378,  -378,  -378,  -378,  -378,
      28,   -71,   -79,  -378,  -378,   -87,  -378,  -378,  -378,  -378,
    -378,  -377,    49,  -378,  -378,  -378,     0,  -378,    60,   273,
    -378,  -378,  -378,  -378,   424,  -378,  -378,  -378,  -378,    42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    18,    19,    20,    21,    66,   230,   231,    22,    59,
      23,   129,    24,    25,    82,   141,   227,    26,    27,    28,
      78,   250,   251,   330,   401,    29,    88,    30,    31,    32,
     137,    33,   139,   140,    34,   155,   156,   157,    71,   102,
     103,   160,    72,   152,   232,   303,   304,   134,   438,   481,
     106,   238,   239,   315,    96,   165,   233,   117,   118,   234,
     235,   201,   202,   203,   204,   205,   206,   207,   260,   208,
     209,   210,   211,   212,   182,   183,   184,   213,   214,   215,
     216,   217,   120,   121,   122,   123,   124,   125,   126,   127,
     383,   384,   385,   386,   387,    48,   388,   434,   435,   436,
     309,    35,    36,    56,    57,   389,   431,   484,    64,   220
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     200,    98,    39,   143,   119,    42,   142,   142,   150,    38,
      49,    50,   248,   225,   336,   487,   162,   480,   263,   133,
     265,   348,   151,   306,   158,    68,   306,   158,   240,   245,
     242,   244,    85,   105,    53,    43,   186,   276,    51,   343,
     268,   236,    60,    61,   163,    80,   276,    83,   241,    99,
     406,   293,   218,    90,   294,   461,   142,   269,   344,   268,
     355,   259,   164,    37,   345,    44,   267,   187,    52,   222,
      54,    86,   108,   109,   110,   291,   269,   333,   131,   132,
     100,   318,   290,   474,   291,   263,    45,   356,   145,   146,
     296,    68,   403,   353,   253,   354,   254,   221,   246,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   418,   224,   101,   188,   339,   237,
     350,    38,    46,    40,   340,   341,   190,   108,   109,   110,
     268,   266,   268,    41,    70,   351,   352,   407,    99,    47,
     307,   268,    69,   433,   268,   305,   313,   269,   311,   269,
      55,   111,   413,   190,   108,   109,   110,   305,   269,   158,
     300,   269,    62,   301,   191,   192,   193,   112,    97,   100,
     408,   268,   314,   452,   337,   198,   382,   390,   415,   240,
     268,   334,   378,   276,   394,   395,   380,   338,   269,   344,
     147,   191,   192,   193,   258,   409,   331,   269,   268,   332,
      63,   104,    58,   194,   375,   101,   111,   423,   358,   399,
     410,   411,   113,   114,   115,   269,   287,   288,   289,   290,
     476,   291,   112,    65,   119,   359,   400,   448,   119,   268,
     194,   447,   243,   111,   268,   421,   396,   450,   169,   195,
     142,   466,   268,   116,   468,   310,   269,    73,    74,   112,
     316,   269,   196,    76,    81,   422,   258,   442,   169,   269,
     305,   190,   108,   109,   110,    75,   195,   113,   114,   115,
      77,    84,   443,   454,   445,   446,   305,   471,   412,   196,
     305,    87,    92,    91,   485,   197,   198,   294,    94,   417,
      95,   107,   376,   199,   113,   114,   115,   128,   116,   191,
     192,   193,   130,   133,   190,   108,   109,   110,   135,   136,
     138,    68,   197,   198,   108,   469,   320,   144,   110,    69,
     199,   149,   321,   151,   159,   116,   153,   154,   161,   166,
     322,   190,   108,   109,   110,   167,   168,   185,   194,   219,
     424,   111,   191,   192,   193,   483,   169,   486,   451,   223,
     226,   229,   190,   108,   109,   110,   323,   112,   170,   171,
     172,   173,   174,   175,   247,   249,   104,    14,   252,   261,
     192,   193,   255,   324,   195,   325,   326,   425,   256,   257,
     264,   194,   426,   292,   111,   298,   295,   196,   427,   428,
     327,   192,   193,   299,   328,   302,   305,   317,   312,    68,
     112,   319,   113,   114,   115,   429,   329,   270,   194,  -271,
     430,   111,   424,   349,   377,   346,   357,   195,   392,   397,
     197,   198,   398,   405,   404,   355,   268,   112,   199,   194,
     196,   416,   111,   116,   419,   291,   432,   420,   437,   271,
     439,   440,   441,   449,   262,   113,   114,   115,   112,   425,
     453,   455,   456,   457,   426,   458,   459,   196,   460,   462,
     427,   428,   464,   197,   198,   262,   463,   254,   465,   467,
     470,   199,   113,   114,   115,   475,   116,   429,   196,   482,
      93,  -271,   430,    67,   381,   489,   272,   379,    79,  -239,
     197,   198,   402,   113,   114,   115,   228,   444,   199,    89,
     189,   297,   393,   116,   391,   473,   273,   335,   308,   342,
     488,   197,   198,   274,   275,   472,   148,   479,     0,   199,
     276,   277,     0,     0,   116,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,     0,     0,
       0,   278,   279,   280,   281,   282,     0,   424,   283,   284,
    -273,   285,   286,   287,   288,   289,   290,     1,   291,     0,
       0,  -240,     1,   271,     0,     2,     0,     0,     0,     0,
       2,     0,     3,     0,     0,     0,     4,     3,     0,     0,
       0,     4,     5,     0,   425,     6,     7,     5,     0,   426,
       6,     7,     0,     0,     0,   427,   428,     8,     9,   477,
       0,     0,     8,     9,     0,     0,     0,     0,    10,     0,
     272,     0,   429,    10,   271,     0,     0,   430,     0,     0,
       0,     0,     0,     0,   414,     0,     0,     0,     0,     0,
     347,     0,    11,     0,     0,     0,    12,    11,   275,     0,
     271,    12,     0,     0,   276,   277,     0,     0,   478,     0,
       0,    13,     0,     0,     0,     0,    13,    14,     0,   271,
       0,   272,    14,     0,     0,   278,   279,   280,   281,   282,
       0,     0,   283,   284,     0,   285,   286,   287,   288,   289,
     290,   347,   291,     0,     0,     0,     0,  -274,     0,   275,
       0,     0,     0,     0,     0,   276,   277,     0,    15,    16,
      17,     0,     0,    15,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   275,   278,   279,   280,   281,
     282,   276,  -274,   283,   284,     0,   285,   286,   287,   288,
     289,   290,     0,   291,   275,     0,     0,     0,     0,     0,
     276,     0,  -274,  -274,  -274,   281,   282,     0,     0,   283,
     284,     0,   285,   286,   287,   288,   289,   290,     0,   291,
       0,     0,     0,     0,  -274,  -274,     0,     0,  -274,  -274,
       0,   285,   286,   287,   288,   289,   290,     0,   291
};

static const yytype_int16 yycheck[] =
{
     133,    69,     2,    86,    75,     5,    85,    86,    95,     3,
      10,    11,   187,   139,     3,     3,   105,    46,   195,    78,
     197,   264,    12,     3,   102,    53,     3,   105,   161,   167,
     163,   164,    89,    72,    19,    75,    89,   130,    75,    87,
     110,   155,    16,    17,    50,    45,   130,    47,   162,     9,
     120,   171,   135,    53,   174,   432,   135,   127,   106,   110,
      96,   194,    68,    26,   112,   105,   199,   120,   105,   137,
      55,   128,     4,     5,     6,   168,   127,   252,    78,    79,
      40,    50,   166,   460,   168,   262,    89,   123,    88,    89,
     223,    53,   335,   270,   170,   272,   172,    59,   169,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   357,   174,    76,   170,   256,   158,
     171,     3,    89,     3,   257,   258,     3,     4,     5,     6,
     110,   199,   110,     3,    35,   268,   269,   103,     9,    93,
     120,   110,   170,   120,   110,   174,    85,   127,   237,   127,
       3,    83,   169,     3,     4,     5,     6,   174,   127,   237,
     171,   127,     0,   174,    41,    42,    43,    99,    69,    40,
      87,   110,   111,   416,   163,   163,   170,   303,   355,   312,
     110,   171,   295,   130,   317,   318,   299,   255,   127,   106,
      91,    41,    42,    43,   106,   112,   171,   127,   110,   174,
     173,    72,   147,    80,   291,    76,    83,   382,    99,    99,
     343,   344,   144,   145,   146,   127,   163,   164,   165,   166,
     463,   168,    99,   107,   295,   116,   116,   103,   299,   110,
      80,   112,   109,    83,   110,   171,   319,   414,   174,   116,
     319,   171,   110,   175,   112,   236,   127,     3,   172,    99,
     241,   127,   129,    89,     3,   171,   106,   171,   174,   127,
     174,     3,     4,     5,     6,   170,   116,   144,   145,   146,
     122,   118,   405,   171,   407,   408,   174,   171,   346,   129,
     174,   122,   174,   120,   171,   162,   163,   174,    92,   357,
     119,     3,   292,   170,   144,   145,   146,     4,   175,    41,
      42,    43,   116,    78,     3,     4,     5,     6,    88,   170,
       3,    53,   162,   163,     4,   448,    24,    41,     6,   170,
     170,   170,    30,    12,   109,   175,   171,   171,   121,     4,
      38,     3,     4,     5,     6,     4,   171,    41,    80,     3,
      25,    83,    41,    42,    43,   478,   174,   480,   416,   151,
     107,     3,     3,     4,     5,     6,    64,    99,   132,   133,
     134,   135,   136,   137,     3,     3,    72,   107,   120,    41,
      42,    43,   170,    81,   116,    83,    84,    62,   170,   170,
     168,    80,    67,    93,    83,    44,   170,   129,    73,    74,
      98,    42,    43,   170,   102,    89,   174,    50,   174,    53,
      99,    88,   144,   145,   146,    90,   114,    17,    80,    94,
      95,    83,    25,   171,     3,   170,   170,   116,     3,   170,
     162,   163,   170,    89,   171,    96,   110,    99,   170,    80,
     129,   170,    83,   175,    99,   168,   174,   169,    65,    49,
       6,     6,    99,   171,   116,   144,   145,   146,    99,    62,
     171,   171,    94,    73,    67,    73,    73,   129,    94,     3,
      73,    74,   171,   162,   163,   116,   121,   172,   171,   171,
     171,   170,   144,   145,   146,   170,   175,    90,   129,   170,
      63,    94,    95,    23,   301,   171,    96,   298,    44,   174,
     162,   163,   332,   144,   145,   146,   143,   406,   170,    52,
     132,   224,   312,   175,   305,   456,   116,   253,   235,   259,
     482,   162,   163,   123,   124,   455,    92,   475,    -1,   170,
     130,   131,    -1,    -1,   175,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   151,   152,   153,   154,   155,    -1,    25,   158,   159,
       0,   161,   162,   163,   164,   165,   166,     7,   168,    -1,
      -1,   174,     7,    49,    -1,    15,    -1,    -1,    -1,    -1,
      15,    -1,    22,    -1,    -1,    -1,    26,    22,    -1,    -1,
      -1,    26,    32,    -1,    62,    35,    36,    32,    -1,    67,
      35,    36,    -1,    -1,    -1,    73,    74,    47,    48,    77,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    58,    -1,
      96,    -1,    90,    58,    49,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    82,    -1,    -1,    -1,    86,    82,   124,    -1,
      49,    86,    -1,    -1,   130,   131,    -1,    -1,   126,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   101,   107,    -1,    49,
      -1,    96,   107,    -1,    -1,   151,   152,   153,   154,   155,
      -1,    -1,   158,   159,    -1,   161,   162,   163,   164,   165,
     166,   116,   168,    -1,    -1,    -1,    -1,    96,    -1,   124,
      -1,    -1,    -1,    -1,    -1,   130,   131,    -1,   148,   149,
     150,    -1,    -1,   148,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   151,   152,   153,   154,
     155,   130,   131,   158,   159,    -1,   161,   162,   163,   164,
     165,   166,    -1,   168,   124,    -1,    -1,    -1,    -1,    -1,
     130,    -1,   151,   152,   153,   154,   155,    -1,    -1,   158,
     159,    -1,   161,   162,   163,   164,   165,   166,    -1,   168,
      -1,    -1,    -1,    -1,   154,   155,    -1,    -1,   158,   159,
      -1,   161,   162,   163,   164,   165,   166,    -1,   168
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   101,   107,   148,   149,   150,   177,   178,
     179,   180,   184,   186,   188,   189,   193,   194,   195,   201,
     203,   204,   205,   207,   210,   277,   278,    26,     3,   272,
       3,     3,   272,    75,   105,    89,    89,    93,   271,   272,
     272,    75,   105,    19,    55,     3,   279,   280,   147,   185,
     185,   185,     0,   173,   284,   107,   181,   181,    53,   170,
     213,   214,   218,     3,   172,   170,    89,   122,   196,   196,
     272,     3,   190,   272,   118,    89,   128,   122,   202,   202,
     272,   120,   174,   179,    92,   119,   230,   213,   214,     9,
      40,    76,   215,   216,    72,   215,   226,     3,     4,     5,
       6,    83,    99,   144,   145,   146,   175,   233,   234,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     4,   187,
     116,   272,   272,    78,   223,    88,   170,   206,     3,   208,
     209,   191,   258,   191,    41,   272,   272,   213,   280,   170,
     261,    12,   219,   171,   171,   211,   212,   213,   218,   109,
     217,   121,   211,    50,    68,   231,     4,     4,   171,   174,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   250,   251,   252,    41,    89,   120,   170,   206,
       3,    41,    42,    43,    80,   116,   129,   162,   163,   170,
     236,   237,   238,   239,   240,   241,   242,   243,   245,   246,
     247,   248,   249,   253,   254,   255,   256,   257,   191,     3,
     285,    59,   214,   151,   174,   223,   107,   192,   192,     3,
     182,   183,   220,   232,   235,   236,   226,   215,   227,   228,
     236,   226,   236,   109,   236,   250,   257,     3,   210,     3,
     197,   198,   120,   170,   172,   170,   170,   170,   106,   236,
     244,    41,   116,   237,   168,   237,   214,   236,   110,   127,
      17,    49,    96,   116,   123,   124,   130,   131,   151,   152,
     153,   154,   155,   158,   159,   161,   162,   163,   164,   165,
     166,   168,    93,   171,   174,   170,   236,   209,    44,   170,
     171,   174,    89,   221,   222,   174,     3,   120,   275,   276,
     231,   211,   174,    85,   111,   229,   231,    50,    50,    88,
      24,    30,    38,    64,    81,    83,    84,    98,   102,   114,
     199,   171,   174,   210,   171,   219,     3,   163,   214,   250,
     236,   236,   244,    87,   106,   112,   170,   116,   232,   171,
     171,   236,   236,   237,   237,    96,   123,   170,    99,   116,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   261,   272,     3,   234,   190,
     234,   183,   170,   266,   267,   268,   269,   270,   272,   281,
     223,   235,     3,   228,   236,   236,   191,   170,   170,    99,
     116,   200,   198,   232,   171,    89,   120,   103,    87,   112,
     236,   236,   214,   169,   110,   237,   170,   214,   232,    99,
     169,   171,   171,   210,    25,    62,    67,    73,    74,    90,
      95,   282,   174,   120,   273,   274,   275,    65,   224,     6,
       6,    99,   171,   236,   199,   236,   236,   112,   103,   171,
     237,   214,   232,   171,   171,   171,    94,    73,    73,    73,
      94,   267,     3,   121,   171,   171,   171,   171,   112,   236,
     171,   171,   274,   268,   267,   170,   232,    77,   126,   285,
      46,   225,   170,   236,   283,   171,   236,     3,   256,   171
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
     264,   264,   265,   266,   266,   267,   267,   268,   268,   269,
     269,   270,   271,   272,   272,   273,   273,   274,   274,   275,
     275,   276,   276,   277,   277,   278,   279,   279,   280,   281,
     281,   281,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   283,   284,   284,   285,   285
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
       3,     2,     1,     1,     3,     1,     1,     1,     4,     1,
       3,     2,     1,     1,     3,     1,     5,     1,     0,     2,
       1,     1,     0,     1,     0,     2,     1,     3,     3,     4,
       6,     8,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     0,     1,     1,     0,     1,     3
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

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 147 "bison_parser.y"
            { }
#line 2482 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 147 "bison_parser.y"
            { }
#line 2488 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2494 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2500 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2506 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2512 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2518 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2524 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2530 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2536 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2542 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2548 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2554 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2560 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2566 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2572 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2578 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2584 "bison_parser.cpp"
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
#line 2597 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2603 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2609 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2615 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2621 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2627 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2633 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2639 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2645 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2651 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2657 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2663 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2669 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 147 "bison_parser.y"
            { }
#line 2675 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2681 "bison_parser.cpp"
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
#line 2694 "bison_parser.cpp"
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

#line 2801 "bison_parser.cpp"

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
#line 270 "bison_parser.y"
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
#line 3029 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 291 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3040 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 297 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3051 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 306 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3060 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 310 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3069 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 314 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3077 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 317 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3085 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 320 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3093 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3099 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3105 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3111 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 330 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3117 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 331 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3123 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 332 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3129 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 333 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3135 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: execute_statement  */
#line 334 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3141 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: transaction_statement  */
#line 335 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3147 "bison_parser.cpp"
    break;

  case 19: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 344 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3153 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: %empty  */
#line 345 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3159 "bison_parser.cpp"
    break;

  case 21: /* hint_list: hint  */
#line 350 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3165 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint_list ',' hint  */
#line 351 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3171 "bison_parser.cpp"
    break;

  case 23: /* hint: IDENTIFIER  */
#line 355 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3180 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 359 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3190 "bison_parser.cpp"
    break;

  case 25: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 371 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3198 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 374 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3206 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 377 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3214 "bison_parser.cpp"
    break;

  case 30: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 391 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3224 "bison_parser.cpp"
    break;

  case 32: /* execute_statement: EXECUTE IDENTIFIER  */
#line 401 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3233 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 405 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3243 "bison_parser.cpp"
    break;

  case 34: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 419 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3254 "bison_parser.cpp"
    break;

  case 35: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 425 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3265 "bison_parser.cpp"
    break;

  case 36: /* file_type: IDENTIFIER  */
#line 434 "bison_parser.y"
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
#line 3284 "bison_parser.cpp"
    break;

  case 37: /* file_path: string_literal  */
#line 451 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3290 "bison_parser.cpp"
    break;

  case 38: /* opt_file_type: WITH FORMAT file_type  */
#line 455 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3298 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: %empty  */
#line 458 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3304 "bison_parser.cpp"
    break;

  case 40: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 467 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3315 "bison_parser.cpp"
    break;

  case 41: /* show_statement: SHOW TABLES  */
#line 481 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3323 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW COLUMNS table_name  */
#line 484 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3333 "bison_parser.cpp"
    break;

  case 43: /* show_statement: DESCRIBE table_name  */
#line 489 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3343 "bison_parser.cpp"
    break;

  case 44: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 503 "bison_parser.y"
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
#line 3361 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name '(' column_def_commalist ')'  */
#line 516 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3373 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 523 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3385 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 530 "bison_parser.y"
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

  case 48: /* opt_not_exists: IF NOT EXISTS  */
#line 541 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3404 "bison_parser.cpp"
    break;

  case 49: /* opt_not_exists: %empty  */
#line 542 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3410 "bison_parser.cpp"
    break;

  case 50: /* column_def_commalist: column_def  */
#line 546 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3416 "bison_parser.cpp"
    break;

  case 51: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 547 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3422 "bison_parser.cpp"
    break;

  case 52: /* column_def: IDENTIFIER column_type opt_column_nullable  */
#line 551 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3430 "bison_parser.cpp"
    break;

  case 53: /* column_type: INT  */
#line 557 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3436 "bison_parser.cpp"
    break;

  case 54: /* column_type: INTEGER  */
#line 558 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3442 "bison_parser.cpp"
    break;

  case 55: /* column_type: LONG  */
#line 559 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3448 "bison_parser.cpp"
    break;

  case 56: /* column_type: FLOAT  */
#line 560 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3454 "bison_parser.cpp"
    break;

  case 57: /* column_type: DOUBLE  */
#line 561 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3460 "bison_parser.cpp"
    break;

  case 58: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 562 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3466 "bison_parser.cpp"
    break;

  case 59: /* column_type: CHAR '(' INTVAL ')'  */
#line 563 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3472 "bison_parser.cpp"
    break;

  case 60: /* column_type: TEXT  */
#line 564 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3478 "bison_parser.cpp"
    break;

  case 61: /* column_type: DATETIME  */
#line 565 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3484 "bison_parser.cpp"
    break;

  case 62: /* column_type: DATE  */
#line 566 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3490 "bison_parser.cpp"
    break;

  case 63: /* opt_column_nullable: NULL  */
#line 570 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3496 "bison_parser.cpp"
    break;

  case 64: /* opt_column_nullable: NOT NULL  */
#line 571 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3502 "bison_parser.cpp"
    break;

  case 65: /* opt_column_nullable: %empty  */
#line 572 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3508 "bison_parser.cpp"
    break;

  case 66: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 582 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3519 "bison_parser.cpp"
    break;

  case 67: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 588 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3530 "bison_parser.cpp"
    break;

  case 68: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 594 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3540 "bison_parser.cpp"
    break;

  case 69: /* opt_exists: IF EXISTS  */
#line 602 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3546 "bison_parser.cpp"
    break;

  case 70: /* opt_exists: %empty  */
#line 603 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3552 "bison_parser.cpp"
    break;

  case 71: /* delete_statement: DELETE FROM table_name opt_where  */
#line 612 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3563 "bison_parser.cpp"
    break;

  case 72: /* truncate_statement: TRUNCATE table_name  */
#line 621 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3573 "bison_parser.cpp"
    break;

  case 73: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 634 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3585 "bison_parser.cpp"
    break;

  case 74: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 641 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3597 "bison_parser.cpp"
    break;

  case 75: /* opt_column_list: '(' ident_commalist ')'  */
#line 652 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3603 "bison_parser.cpp"
    break;

  case 76: /* opt_column_list: %empty  */
#line 653 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3609 "bison_parser.cpp"
    break;

  case 77: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 663 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3620 "bison_parser.cpp"
    break;

  case 78: /* update_clause_commalist: update_clause  */
#line 672 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3626 "bison_parser.cpp"
    break;

  case 79: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 673 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3632 "bison_parser.cpp"
    break;

  case 80: /* update_clause: IDENTIFIER '=' expr  */
#line 677 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3642 "bison_parser.cpp"
    break;

  case 81: /* select_statement: opt_with_clause select_with_paren  */
#line 689 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3651 "bison_parser.cpp"
    break;

  case 82: /* select_statement: opt_with_clause select_no_paren  */
#line 693 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3660 "bison_parser.cpp"
    break;

  case 83: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 697 "bison_parser.y"
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
#line 3676 "bison_parser.cpp"
    break;

  case 86: /* select_within_set_operation_no_parentheses: select_clause  */
#line 715 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3682 "bison_parser.cpp"
    break;

  case 87: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 716 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3695 "bison_parser.cpp"
    break;

  case 88: /* select_with_paren: '(' select_no_paren ')'  */
#line 727 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3701 "bison_parser.cpp"
    break;

  case 89: /* select_with_paren: '(' select_with_paren ')'  */
#line 728 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3707 "bison_parser.cpp"
    break;

  case 90: /* select_no_paren: select_clause opt_order opt_limit  */
#line 732 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3722 "bison_parser.cpp"
    break;

  case 91: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 742 "bison_parser.y"
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
#line 3737 "bison_parser.cpp"
    break;

  case 92: /* set_operator: set_type opt_all  */
#line 755 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3746 "bison_parser.cpp"
    break;

  case 93: /* set_type: UNION  */
#line 762 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3755 "bison_parser.cpp"
    break;

  case 94: /* set_type: INTERSECT  */
#line 766 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3764 "bison_parser.cpp"
    break;

  case 95: /* set_type: EXCEPT  */
#line 770 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3773 "bison_parser.cpp"
    break;

  case 96: /* opt_all: ALL  */
#line 777 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3781 "bison_parser.cpp"
    break;

  case 97: /* opt_all: %empty  */
#line 780 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3789 "bison_parser.cpp"
    break;

  case 98: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 786 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3803 "bison_parser.cpp"
    break;

  case 99: /* opt_distinct: DISTINCT  */
#line 798 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3809 "bison_parser.cpp"
    break;

  case 100: /* opt_distinct: %empty  */
#line 799 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3815 "bison_parser.cpp"
    break;

  case 102: /* opt_from_clause: from_clause  */
#line 807 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3821 "bison_parser.cpp"
    break;

  case 103: /* opt_from_clause: %empty  */
#line 808 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3827 "bison_parser.cpp"
    break;

  case 104: /* from_clause: FROM table_ref  */
#line 812 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3833 "bison_parser.cpp"
    break;

  case 105: /* opt_where: WHERE expr  */
#line 817 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3839 "bison_parser.cpp"
    break;

  case 106: /* opt_where: %empty  */
#line 818 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3845 "bison_parser.cpp"
    break;

  case 107: /* opt_group: GROUP BY expr_list opt_having  */
#line 822 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3855 "bison_parser.cpp"
    break;

  case 108: /* opt_group: %empty  */
#line 827 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3861 "bison_parser.cpp"
    break;

  case 109: /* opt_having: HAVING expr  */
#line 831 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3867 "bison_parser.cpp"
    break;

  case 110: /* opt_having: %empty  */
#line 832 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3873 "bison_parser.cpp"
    break;

  case 111: /* opt_order: ORDER BY order_list  */
#line 836 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3879 "bison_parser.cpp"
    break;

  case 112: /* opt_order: %empty  */
#line 837 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3885 "bison_parser.cpp"
    break;

  case 113: /* order_list: order_desc  */
#line 841 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3891 "bison_parser.cpp"
    break;

  case 114: /* order_list: order_list ',' order_desc  */
#line 842 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3897 "bison_parser.cpp"
    break;

  case 115: /* order_desc: expr opt_order_type  */
#line 846 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3903 "bison_parser.cpp"
    break;

  case 116: /* opt_order_type: ASC  */
#line 850 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3909 "bison_parser.cpp"
    break;

  case 117: /* opt_order_type: DESC  */
#line 851 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3915 "bison_parser.cpp"
    break;

  case 118: /* opt_order_type: %empty  */
#line 852 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3921 "bison_parser.cpp"
    break;

  case 119: /* opt_top: TOP int_literal  */
#line 858 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3927 "bison_parser.cpp"
    break;

  case 120: /* opt_top: %empty  */
#line 859 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3933 "bison_parser.cpp"
    break;

  case 121: /* opt_limit: LIMIT expr  */
#line 863 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3939 "bison_parser.cpp"
    break;

  case 122: /* opt_limit: OFFSET expr  */
#line 864 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3945 "bison_parser.cpp"
    break;

  case 123: /* opt_limit: LIMIT expr OFFSET expr  */
#line 865 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3951 "bison_parser.cpp"
    break;

  case 124: /* opt_limit: LIMIT ALL  */
#line 866 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3957 "bison_parser.cpp"
    break;

  case 125: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 867 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3963 "bison_parser.cpp"
    break;

  case 126: /* opt_limit: %empty  */
#line 868 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3969 "bison_parser.cpp"
    break;

  case 127: /* expr_list: expr_alias  */
#line 875 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3975 "bison_parser.cpp"
    break;

  case 128: /* expr_list: expr_list ',' expr_alias  */
#line 876 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3981 "bison_parser.cpp"
    break;

  case 129: /* opt_literal_list: literal_list  */
#line 880 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3987 "bison_parser.cpp"
    break;

  case 130: /* opt_literal_list: %empty  */
#line 881 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 3993 "bison_parser.cpp"
    break;

  case 131: /* literal_list: literal  */
#line 885 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3999 "bison_parser.cpp"
    break;

  case 132: /* literal_list: literal_list ',' literal  */
#line 886 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4005 "bison_parser.cpp"
    break;

  case 133: /* expr_alias: expr opt_alias  */
#line 890 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4017 "bison_parser.cpp"
    break;

  case 139: /* operand: '(' expr ')'  */
#line 908 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4023 "bison_parser.cpp"
    break;

  case 149: /* operand: '(' select_no_paren ')'  */
#line 918 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4029 "bison_parser.cpp"
    break;

  case 152: /* unary_expr: '-' operand  */
#line 927 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4035 "bison_parser.cpp"
    break;

  case 153: /* unary_expr: NOT operand  */
#line 928 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4041 "bison_parser.cpp"
    break;

  case 154: /* unary_expr: operand ISNULL  */
#line 929 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4047 "bison_parser.cpp"
    break;

  case 155: /* unary_expr: operand IS NULL  */
#line 930 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4053 "bison_parser.cpp"
    break;

  case 156: /* unary_expr: operand IS NOT NULL  */
#line 931 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4059 "bison_parser.cpp"
    break;

  case 158: /* binary_expr: operand '-' operand  */
#line 936 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4065 "bison_parser.cpp"
    break;

  case 159: /* binary_expr: operand '+' operand  */
#line 937 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4071 "bison_parser.cpp"
    break;

  case 160: /* binary_expr: operand '/' operand  */
#line 938 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4077 "bison_parser.cpp"
    break;

  case 161: /* binary_expr: operand '*' operand  */
#line 939 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4083 "bison_parser.cpp"
    break;

  case 162: /* binary_expr: operand '%' operand  */
#line 940 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4089 "bison_parser.cpp"
    break;

  case 163: /* binary_expr: operand '^' operand  */
#line 941 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4095 "bison_parser.cpp"
    break;

  case 164: /* binary_expr: operand LIKE operand  */
#line 942 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4101 "bison_parser.cpp"
    break;

  case 165: /* binary_expr: operand NOT LIKE operand  */
#line 943 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4107 "bison_parser.cpp"
    break;

  case 166: /* binary_expr: operand ILIKE operand  */
#line 944 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4113 "bison_parser.cpp"
    break;

  case 167: /* binary_expr: operand CONCAT operand  */
#line 945 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4119 "bison_parser.cpp"
    break;

  case 168: /* logic_expr: expr AND expr  */
#line 949 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4125 "bison_parser.cpp"
    break;

  case 169: /* logic_expr: expr OR expr  */
#line 950 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4131 "bison_parser.cpp"
    break;

  case 170: /* in_expr: operand IN '(' expr_list ')'  */
#line 954 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4137 "bison_parser.cpp"
    break;

  case 171: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 955 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4143 "bison_parser.cpp"
    break;

  case 172: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 956 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4149 "bison_parser.cpp"
    break;

  case 173: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 957 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4155 "bison_parser.cpp"
    break;

  case 174: /* case_expr: CASE expr case_list END  */
#line 963 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4161 "bison_parser.cpp"
    break;

  case 175: /* case_expr: CASE expr case_list ELSE expr END  */
#line 964 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4167 "bison_parser.cpp"
    break;

  case 176: /* case_expr: CASE case_list END  */
#line 965 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4173 "bison_parser.cpp"
    break;

  case 177: /* case_expr: CASE case_list ELSE expr END  */
#line 966 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4179 "bison_parser.cpp"
    break;

  case 178: /* case_list: WHEN expr THEN expr  */
#line 970 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4185 "bison_parser.cpp"
    break;

  case 179: /* case_list: case_list WHEN expr THEN expr  */
#line 971 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4191 "bison_parser.cpp"
    break;

  case 180: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 975 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4197 "bison_parser.cpp"
    break;

  case 181: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 976 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4203 "bison_parser.cpp"
    break;

  case 182: /* comp_expr: operand '=' operand  */
#line 980 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4209 "bison_parser.cpp"
    break;

  case 183: /* comp_expr: operand EQUALS operand  */
#line 981 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4215 "bison_parser.cpp"
    break;

  case 184: /* comp_expr: operand NOTEQUALS operand  */
#line 982 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4221 "bison_parser.cpp"
    break;

  case 185: /* comp_expr: operand '<' operand  */
#line 983 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4227 "bison_parser.cpp"
    break;

  case 186: /* comp_expr: operand '>' operand  */
#line 984 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4233 "bison_parser.cpp"
    break;

  case 187: /* comp_expr: operand LESSEQ operand  */
#line 985 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4239 "bison_parser.cpp"
    break;

  case 188: /* comp_expr: operand GREATEREQ operand  */
#line 986 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4245 "bison_parser.cpp"
    break;

  case 189: /* function_expr: IDENTIFIER '(' ')'  */
#line 990 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4251 "bison_parser.cpp"
    break;

  case 190: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 991 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4257 "bison_parser.cpp"
    break;

  case 191: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 995 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4263 "bison_parser.cpp"
    break;

  case 192: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 999 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4269 "bison_parser.cpp"
    break;

  case 193: /* datetime_field: SECOND  */
#line 1003 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4275 "bison_parser.cpp"
    break;

  case 194: /* datetime_field: MINUTE  */
#line 1004 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4281 "bison_parser.cpp"
    break;

  case 195: /* datetime_field: HOUR  */
#line 1005 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4287 "bison_parser.cpp"
    break;

  case 196: /* datetime_field: DAY  */
#line 1006 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4293 "bison_parser.cpp"
    break;

  case 197: /* datetime_field: MONTH  */
#line 1007 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4299 "bison_parser.cpp"
    break;

  case 198: /* datetime_field: YEAR  */
#line 1008 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4305 "bison_parser.cpp"
    break;

  case 199: /* datetime_field_plural: SECONDS  */
#line 1012 "bison_parser.y"
                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4311 "bison_parser.cpp"
    break;

  case 200: /* datetime_field_plural: MINUTES  */
#line 1013 "bison_parser.y"
                { (yyval.datetime_field) = kDatetimeMinute; }
#line 4317 "bison_parser.cpp"
    break;

  case 201: /* datetime_field_plural: HOURS  */
#line 1014 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeHour; }
#line 4323 "bison_parser.cpp"
    break;

  case 202: /* datetime_field_plural: DAYS  */
#line 1015 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeDay; }
#line 4329 "bison_parser.cpp"
    break;

  case 203: /* datetime_field_plural: MONTHS  */
#line 1016 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMonth; }
#line 4335 "bison_parser.cpp"
    break;

  case 204: /* datetime_field_plural: YEARS  */
#line 1017 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeYear; }
#line 4341 "bison_parser.cpp"
    break;

  case 207: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1026 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4347 "bison_parser.cpp"
    break;

  case 208: /* array_index: operand '[' int_literal ']'  */
#line 1030 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4353 "bison_parser.cpp"
    break;

  case 209: /* between_expr: operand BETWEEN operand AND operand  */
#line 1034 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4359 "bison_parser.cpp"
    break;

  case 210: /* column_name: IDENTIFIER  */
#line 1038 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4365 "bison_parser.cpp"
    break;

  case 211: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1039 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4371 "bison_parser.cpp"
    break;

  case 212: /* column_name: '*'  */
#line 1040 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4377 "bison_parser.cpp"
    break;

  case 213: /* column_name: IDENTIFIER '.' '*'  */
#line 1041 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4383 "bison_parser.cpp"
    break;

  case 221: /* string_literal: STRING  */
#line 1055 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4389 "bison_parser.cpp"
    break;

  case 222: /* bool_literal: TRUE  */
#line 1059 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4395 "bison_parser.cpp"
    break;

  case 223: /* bool_literal: FALSE  */
#line 1060 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4401 "bison_parser.cpp"
    break;

  case 224: /* num_literal: FLOATVAL  */
#line 1064 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4407 "bison_parser.cpp"
    break;

  case 226: /* int_literal: INTVAL  */
#line 1069 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4413 "bison_parser.cpp"
    break;

  case 227: /* null_literal: NULL  */
#line 1073 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4419 "bison_parser.cpp"
    break;

  case 228: /* date_literal: DATE STRING  */
#line 1077 "bison_parser.y"
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
#line 4434 "bison_parser.cpp"
    break;

  case 229: /* interval_literal: int_literal duration_field  */
#line 1090 "bison_parser.y"
                                           { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field)); delete (yyvsp[-1].expr); }
#line 4440 "bison_parser.cpp"
    break;

  case 230: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1091 "bison_parser.y"
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
#line 4456 "bison_parser.cpp"
    break;

  case 231: /* interval_literal: INTERVAL STRING  */
#line 1102 "bison_parser.y"
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
#line 4492 "bison_parser.cpp"
    break;

  case 232: /* param_expr: '?'  */
#line 1136 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4502 "bison_parser.cpp"
    break;

  case 234: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1149 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4513 "bison_parser.cpp"
    break;

  case 238: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1165 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4524 "bison_parser.cpp"
    break;

  case 239: /* table_ref_commalist: table_ref_atomic  */
#line 1174 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4530 "bison_parser.cpp"
    break;

  case 240: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1175 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4536 "bison_parser.cpp"
    break;

  case 241: /* table_ref_name: table_name opt_table_alias  */
#line 1180 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4548 "bison_parser.cpp"
    break;

  case 242: /* table_ref_name_no_alias: table_name  */
#line 1191 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4558 "bison_parser.cpp"
    break;

  case 243: /* table_name: IDENTIFIER  */
#line 1200 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4564 "bison_parser.cpp"
    break;

  case 244: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1201 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4570 "bison_parser.cpp"
    break;

  case 246: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1207 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4576 "bison_parser.cpp"
    break;

  case 248: /* opt_table_alias: %empty  */
#line 1213 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4582 "bison_parser.cpp"
    break;

  case 249: /* alias: AS IDENTIFIER  */
#line 1218 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4588 "bison_parser.cpp"
    break;

  case 250: /* alias: IDENTIFIER  */
#line 1219 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4594 "bison_parser.cpp"
    break;

  case 252: /* opt_alias: %empty  */
#line 1225 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4600 "bison_parser.cpp"
    break;

  case 254: /* opt_with_clause: %empty  */
#line 1235 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4606 "bison_parser.cpp"
    break;

  case 255: /* with_clause: WITH with_description_list  */
#line 1239 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4612 "bison_parser.cpp"
    break;

  case 256: /* with_description_list: with_description  */
#line 1243 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4621 "bison_parser.cpp"
    break;

  case 257: /* with_description_list: with_description_list ',' with_description  */
#line 1247 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4630 "bison_parser.cpp"
    break;

  case 258: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1254 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4640 "bison_parser.cpp"
    break;

  case 259: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1268 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4652 "bison_parser.cpp"
    break;

  case 260: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1276 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4665 "bison_parser.cpp"
    break;

  case 261: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1286 "bison_parser.y"
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
#line 4685 "bison_parser.cpp"
    break;

  case 262: /* opt_join_type: INNER  */
#line 1304 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4691 "bison_parser.cpp"
    break;

  case 263: /* opt_join_type: LEFT OUTER  */
#line 1305 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4697 "bison_parser.cpp"
    break;

  case 264: /* opt_join_type: LEFT  */
#line 1306 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4703 "bison_parser.cpp"
    break;

  case 265: /* opt_join_type: RIGHT OUTER  */
#line 1307 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4709 "bison_parser.cpp"
    break;

  case 266: /* opt_join_type: RIGHT  */
#line 1308 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4715 "bison_parser.cpp"
    break;

  case 267: /* opt_join_type: FULL OUTER  */
#line 1309 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4721 "bison_parser.cpp"
    break;

  case 268: /* opt_join_type: OUTER  */
#line 1310 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4727 "bison_parser.cpp"
    break;

  case 269: /* opt_join_type: FULL  */
#line 1311 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4733 "bison_parser.cpp"
    break;

  case 270: /* opt_join_type: CROSS  */
#line 1312 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4739 "bison_parser.cpp"
    break;

  case 271: /* opt_join_type: %empty  */
#line 1313 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4745 "bison_parser.cpp"
    break;

  case 275: /* ident_commalist: IDENTIFIER  */
#line 1333 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4751 "bison_parser.cpp"
    break;

  case 276: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1334 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4757 "bison_parser.cpp"
    break;


#line 4761 "bison_parser.cpp"

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

#line 1337 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
