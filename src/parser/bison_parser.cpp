/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

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
  YYSYMBOL_array_expr = 252,               /* array_expr  */
  YYSYMBOL_array_index = 253,              /* array_index  */
  YYSYMBOL_between_expr = 254,             /* between_expr  */
  YYSYMBOL_interval_expression = 255,      /* interval_expression  */
  YYSYMBOL_duration_field = 256,           /* duration_field  */
  YYSYMBOL_column_name = 257,              /* column_name  */
  YYSYMBOL_literal = 258,                  /* literal  */
  YYSYMBOL_string_literal = 259,           /* string_literal  */
  YYSYMBOL_bool_literal = 260,             /* bool_literal  */
  YYSYMBOL_num_literal = 261,              /* num_literal  */
  YYSYMBOL_int_literal = 262,              /* int_literal  */
  YYSYMBOL_null_literal = 263,             /* null_literal  */
  YYSYMBOL_date_literal = 264,             /* date_literal  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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
#define YYLAST   795

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
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
     919,   923,   924,   928,   929,   930,   931,   932,   936,   937,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   950,
     951,   955,   956,   957,   958,   964,   965,   966,   967,   971,
     972,   976,   977,   981,   982,   983,   984,   985,   986,   987,
     991,   992,   996,  1000,  1004,  1005,  1006,  1007,  1008,  1009,
    1013,  1014,  1015,  1016,  1017,  1018,  1022,  1026,  1030,  1034,
    1035,  1039,  1040,  1044,  1045,  1046,  1047,  1051,  1052,  1053,
    1054,  1055,  1056,  1060,  1064,  1065,  1069,  1070,  1074,  1078,
    1082,  1095,  1107,  1108,  1118,  1119,  1123,  1124,  1133,  1134,
    1139,  1150,  1159,  1160,  1165,  1166,  1171,  1172,  1177,  1178,
    1183,  1184,  1193,  1194,  1198,  1202,  1206,  1213,  1226,  1234,
    1244,  1263,  1264,  1265,  1266,  1267,  1268,  1269,  1270,  1271,
    1272,  1277,  1286,  1287,  1292,  1293
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
  "datetime_field_plural", "array_expr", "array_index", "between_expr",
  "interval_expression", "duration_field", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "param_expr", "table_ref",
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

#define YYPACT_NINF (-392)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-273)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     565,    63,   118,   124,   149,   118,     0,    78,   108,   113,
     118,   118,    26,     6,   220,    97,    97,    97,   230,    80,
    -392,   163,  -392,   163,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,  -392,  -392,  -392,   -37,  -392,   261,   107,  -392,
     102,   192,  -392,   167,   167,   118,   288,   118,   182,  -392,
     -60,   191,   191,   118,  -392,   184,   143,  -392,  -392,  -392,
    -392,  -392,  -392,   435,  -392,   234,  -392,  -392,   210,   -37,
      18,  -392,    23,  -392,   327,    30,   336,   215,   118,   118,
     264,  -392,   258,   177,   346,   348,   348,   316,   118,   118,
    -392,   189,   220,  -392,   190,   355,   356,   196,   199,  -392,
    -392,  -392,   -37,   253,   248,   -37,    35,  -392,  -392,  -392,
    -392,   368,  -392,  -392,  -392,  -392,   202,   203,  -392,  -392,
    -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,   334,   -63,
     177,   302,  -392,   348,   373,    59,   227,   -54,  -392,   272,
    -392,   272,  -392,  -392,  -392,  -392,  -392,   377,  -392,  -392,
     302,  -392,  -392,   309,  -392,  -392,    18,  -392,  -392,   302,
     309,   302,   153,  -392,  -392,  -392,    30,  -392,   380,   277,
     386,   270,    46,   224,   225,   226,   157,   350,   229,   355,
     360,  -392,   242,    44,   403,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,   615,   305,  -392,  -130,   236,  -392,   302,   346,
    -392,   363,  -392,  -392,   238,    54,  -392,   310,   235,  -392,
      81,    35,   -37,   239,  -392,   -39,    35,    44,   364,   -13,
    -392,   312,  -392,   681,    83,  -392,   277,    11,    15,   357,
     201,   302,   302,   -67,    77,   245,   360,   533,   302,   615,
     146,   250,    -2,   302,   302,   360,  -392,   360,   -44,   249,
      93,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   355,  -392,  -392,  -392,
    -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,   118,  -392,   421,    30,    44,  -392,   288,    30,
    -392,   377,     7,   264,  -392,   302,  -392,   422,  -392,  -392,
    -392,  -392,   302,  -392,  -392,  -392,  -392,   302,   302,   348,
    -392,   257,  -392,  -392,   259,  -392,  -392,  -392,  -392,  -392,
     103,  -392,   386,  -392,  -392,   302,  -392,  -392,   265,   339,
      45,   114,    98,   302,   302,  -392,   357,   341,   -91,  -392,
    -392,  -392,  -392,   322,   480,   578,   360,   268,   242,  -392,
     342,   283,   578,   578,   578,   578,   385,   385,   385,   385,
     146,   146,   -68,   -68,   -68,   -92,   276,  -392,  -392,    87,
    -392,    94,  -392,   277,  -392,    -8,  -392,   279,  -392,    12,
    -392,   389,  -392,  -392,  -392,    44,    44,  -392,   449,   450,
    -392,   359,  -392,  -392,   100,  -392,   302,   681,   302,   302,
    -392,    41,   140,   289,  -392,   360,   578,   242,   291,   116,
    -392,  -392,  -392,  -392,   292,   374,  -392,  -392,  -392,   396,
     400,   401,   384,     7,   477,  -392,  -392,  -392,   365,  -392,
     313,   314,  -392,  -392,    -1,   317,    44,   139,  -392,   302,
    -392,   533,   319,   122,  -392,  -392,    12,     7,  -392,  -392,
    -392,     7,   165,   311,   302,  -392,  -392,  -392,  -392,  -392,
      44,  -392,  -392,  -392,  -392,   349,   373,   -25,   321,   302,
     150,   302,  -392,    16,    44,  -392,  -392,    44,   315,   326,
    -392
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   273,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   252,     0,   242,    72,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   241,
       0,    70,    70,     0,    41,     0,   254,   255,    28,    25,
      27,    26,     1,   253,     2,     0,     6,     5,   120,     0,
      81,    82,   112,    68,     0,   130,     0,     0,     0,     0,
     106,    36,     0,    76,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   100,     0,     0,    94,
      95,    93,     0,    97,     0,     0,   126,   243,   223,   226,
     228,     0,   229,   224,   225,   231,     0,   129,   131,   217,
     218,   219,   227,   220,   221,   222,    31,    30,     0,     0,
      76,     0,    71,     0,     0,     0,     0,   106,    78,    39,
      37,    39,    69,    66,    67,   257,   256,     0,   119,    99,
       0,    89,    88,   112,    85,    84,    86,    96,    92,     0,
     112,     0,     0,    90,   230,    33,     0,    48,     0,   253,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
       0,   215,     0,   105,   134,   141,   142,   143,   136,   138,
     144,   137,   158,   145,   146,   147,   148,   140,   135,   149,
     151,   152,   227,     0,   274,     0,     0,    74,     0,     0,
      77,     0,    35,    40,    23,     0,    21,   103,   101,   127,
     251,   126,     0,   111,   113,   118,   126,   122,   124,   121,
     132,     0,    46,     0,     0,    50,   253,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,     0,     0,
     153,     0,     0,     0,     0,     0,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   211,
     212,   210,     0,    75,     0,     0,    80,    79,     0,     0,
      19,     0,     0,   106,   102,     0,   249,     0,   250,   133,
      83,    87,     0,   117,   116,   115,    91,     0,     0,     0,
      54,     0,    57,    56,     0,    62,    61,    55,    60,    53,
      65,    45,     0,    47,   190,     0,   214,   216,     0,     0,
       0,     0,     0,     0,     0,   177,     0,     0,     0,   209,
     150,   139,   169,   170,     0,   165,     0,     0,     0,   156,
       0,   168,   167,   183,   184,   185,   186,   187,   188,   189,
     160,   159,   162,   161,   163,   164,     0,    34,   275,     0,
      38,     0,    22,   253,   104,   232,   234,     0,   236,   247,
     235,   108,   128,   248,   114,   125,   123,    44,     0,     0,
      63,     0,    52,    51,     0,   181,     0,     0,     0,     0,
     175,     0,     0,     0,   206,     0,   166,     0,     0,     0,
     157,   207,    73,    24,     0,     0,   269,   261,   267,   265,
     268,   263,     0,     0,     0,   246,   240,   244,     0,    98,
       0,     0,    64,   191,     0,     0,   179,     0,   178,     0,
     182,   208,     0,     0,   173,   171,   247,     0,   264,   266,
     262,     0,   233,   248,     0,    58,    59,   192,   193,   176,
     180,   174,   172,   237,   258,   270,     0,   110,     0,     0,
       0,     0,   107,     0,   271,   259,   245,   109,   213,     0,
     260
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -392,  -392,  -392,   429,  -392,   475,  -392,   200,  -392,   198,
    -392,  -392,  -392,  -392,   204,   -85,   362,  -392,  -392,  -392,
     456,  -392,   175,   101,  -392,  -392,   458,  -392,  -392,  -392,
     381,  -392,  -392,   307,  -163,   -72,  -392,     5,   -66,   -52,
    -392,  -392,   -38,   281,  -392,  -392,  -392,  -123,  -392,  -392,
     -36,  -392,   212,  -392,  -392,   -33,  -243,  -392,   -88,   209,
    -131,  -127,  -392,  -392,  -392,  -392,  -392,  -392,   285,  -392,
    -392,  -392,  -392,  -392,   297,  -392,  -392,  -392,  -392,  -392,
     282,    49,   -64,   -77,  -392,  -392,   -73,  -392,  -392,  -392,
    -392,  -391,    84,  -392,  -392,  -392,     2,  -392,    82,   325,
    -392,  -392,  -392,  -392,   460,  -392,  -392,  -392,  -392,    99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   215,   216,    22,    59,
      23,   127,    24,    25,    82,   139,   212,    26,    27,    28,
      78,   234,   235,   330,   402,    29,    88,    30,    31,    32,
     135,    33,   137,   138,    34,   153,   154,   155,    71,   102,
     103,   158,    72,   150,   217,   303,   304,   132,   439,   482,
     106,   223,   224,   315,    96,   163,   218,   116,   117,   219,
     220,   184,   185,   186,   187,   188,   189,   190,   244,   191,
     192,   193,   194,   195,   289,   290,   196,   197,   198,   199,
     291,   200,   201,   119,   120,   121,   202,   123,   124,   125,
     384,   385,   386,   387,   388,    48,   389,   435,   436,   437,
     309,    35,    36,    56,    57,   390,   432,   485,    64,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     183,   141,   122,    98,    39,   348,   232,    42,   140,   140,
      38,   118,    49,    50,   210,   306,    68,   425,   336,   488,
     105,   481,   148,   149,   131,    53,   168,    99,   225,    85,
     227,   229,    99,   160,   108,   109,   110,   318,   261,   242,
      70,   293,   462,   253,   294,   243,   313,    80,   203,    83,
     247,   252,   356,   250,   426,    90,   140,   169,   100,   427,
     254,    54,   261,   100,   156,   428,   429,   156,    86,   207,
     475,   253,   314,   333,    97,    43,   276,   296,   414,   357,
     129,   130,   430,   305,   306,   161,  -270,   431,   254,    37,
     143,   144,   404,   122,   101,   104,   145,   253,   275,   101,
     276,    51,   230,   162,   222,    44,   249,   170,   253,   253,
     340,   341,    68,   111,   254,   419,   251,   221,   206,   247,
     209,    38,   352,   353,   226,   254,   254,    40,   354,   112,
     355,    52,   434,    69,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   305,
     311,   253,    41,   448,   253,   253,   172,   108,   109,   110,
     172,   108,   109,   110,   343,   407,  -238,    45,   254,   351,
     467,   254,   254,   338,   453,   113,   114,   383,   337,   181,
     391,   225,   334,   344,   156,   409,   395,   396,   310,   345,
     425,   253,   359,   316,   173,   174,   175,    46,   173,   174,
     175,   307,   400,   376,   344,   115,    47,   379,   254,   360,
     410,   381,   411,   412,    60,    61,   237,   408,   238,   401,
     424,   477,   122,    55,   253,   300,   122,   426,   301,   416,
      62,   118,   427,   176,   397,   118,   111,   176,   428,   429,
     111,   254,   140,   449,    58,   172,   108,   109,   110,   253,
     253,   469,   112,    63,   331,   430,   112,   332,   422,  -270,
     431,   166,   228,   242,    73,   423,   254,   254,   166,   177,
      65,   443,    75,   177,   305,   444,   261,   446,   447,    74,
     413,    76,   178,   173,   174,   175,   178,   455,   451,    77,
     305,    81,   418,   472,   377,    68,   305,   179,   113,   114,
      84,   179,   113,   114,    91,   172,   108,   109,   110,   272,
     273,   274,   275,    87,   276,   180,   181,    92,   470,   180,
     181,   486,   176,   182,   294,   111,    94,   182,   115,    95,
     107,   128,   115,   277,   278,   279,   280,   281,   282,  -239,
     126,   112,   131,   173,   174,   175,   133,   134,   484,   136,
     487,   452,   108,   172,   108,   109,   110,   142,   177,    69,
     147,   110,   157,   172,   108,   109,   110,   151,   149,   159,
     152,   178,   164,   165,   425,   167,   204,   166,   208,   211,
     214,   104,   176,   231,    14,   111,   179,   113,   114,   233,
     236,   245,   174,   175,   239,   240,   241,   248,   292,   302,
     319,   112,   174,   175,   180,   181,   295,   298,   299,   305,
      68,   426,   182,   312,   317,   346,   427,   115,   177,   358,
     255,   350,   428,   429,   378,   393,   478,   398,   406,   399,
     176,   178,   253,   111,   256,  -272,   405,   356,   417,   430,
     176,   420,     1,   111,   431,   421,   179,   113,   114,   112,
       2,   276,   256,   433,   438,   440,   441,     3,   442,   112,
     450,     4,   454,   456,   180,   181,   246,     5,   457,   458,
       6,     7,   182,   459,   460,   479,   246,   115,   461,   178,
     463,   476,     8,     9,   465,   466,   464,   238,   468,   178,
     471,   483,    93,    10,   179,   113,   114,   490,    67,   257,
      79,   382,   380,   213,   179,   113,   114,   403,   445,   260,
      89,   171,   180,   181,   392,   261,   297,    11,   335,   258,
     182,    12,   180,   181,   394,   115,   259,   260,   342,   256,
     182,   349,   489,   261,   262,   115,    13,   339,   473,  -273,
    -273,   474,    14,  -273,  -273,   308,   270,   271,   272,   273,
     274,   275,   146,   276,   263,   264,   265,   266,   267,     0,
       0,   268,   269,     0,   270,   271,   272,   273,   274,   275,
       0,   276,     1,     0,     0,   480,   257,     0,     0,     0,
       2,     0,   256,    15,    16,    17,     0,     3,     0,     0,
     415,     4,     0,     0,     0,     0,   347,     5,     0,     0,
       6,     7,     0,     0,   260,     0,     0,     0,     0,     0,
     261,   262,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,   256,     0,   257,
       0,   263,   264,   265,   266,   267,     0,     0,   268,   269,
       0,   270,   271,   272,   273,   274,   275,    11,   276,   347,
       0,    12,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,   261,   262,     0,    13,     0,     0,     0,
       0,     0,    14,     0,  -273,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,   264,   265,   266,   267,     0,
       0,   268,   269,     0,   270,   271,   272,   273,   274,   275,
       0,   276,   260,     0,     0,   320,     0,     0,   261,  -273,
       0,   321,     0,    15,    16,    17,     0,     0,     0,   322,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -273,
    -273,  -273,   266,   267,     0,     0,   268,   269,     0,   270,
     271,   272,   273,   274,   275,   323,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   324,     0,   325,   326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
       0,     0,     0,   328,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   329
};

static const yytype_int16 yycheck[] =
{
     131,    86,    75,    69,     2,   248,   169,     5,    85,    86,
       3,    75,    10,    11,   137,     3,    53,    25,     3,     3,
      72,    46,    95,    12,    78,    19,    89,     9,   159,    89,
     161,   162,     9,   105,     4,     5,     6,    50,   130,   106,
      35,   171,   433,   110,   174,   176,    85,    45,   133,    47,
     177,   182,    96,   180,    62,    53,   133,   120,    40,    67,
     127,    55,   130,    40,   102,    73,    74,   105,   128,   135,
     461,   110,   111,   236,    69,    75,   168,   208,   169,   123,
      78,    79,    90,   174,     3,    50,    94,    95,   127,    26,
      88,    89,   335,   166,    76,    72,    91,   110,   166,    76,
     168,    75,   166,    68,   156,   105,   179,   170,   110,   110,
     241,   242,    53,    83,   127,   358,   182,   153,    59,   246,
     174,     3,   253,   254,   160,   127,   127,     3,   255,    99,
     257,   105,   120,   170,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   174,
     222,   110,     3,   112,   110,   110,     3,     4,     5,     6,
       3,     4,     5,     6,    87,   120,   174,    89,   127,   171,
     171,   127,   127,   239,   417,   145,   146,   170,   163,   163,
     303,   312,   171,   106,   222,    87,   317,   318,   221,   112,
      25,   110,    99,   226,    41,    42,    43,    89,    41,    42,
      43,   120,    99,   276,   106,   175,    93,   295,   127,   116,
     112,   299,   343,   344,    16,    17,   170,   103,   172,   116,
     383,   464,   295,     3,   110,   171,   299,    62,   174,   356,
       0,   295,    67,    80,   319,   299,    83,    80,    73,    74,
      83,   127,   319,   103,   147,     3,     4,     5,     6,   110,
     110,   112,    99,   173,   171,    90,    99,   174,   171,    94,
      95,   174,   109,   106,     3,   171,   127,   127,   174,   116,
     107,   171,   170,   116,   174,   406,   130,   408,   409,   172,
     346,    89,   129,    41,    42,    43,   129,   171,   415,   122,
     174,     3,   358,   171,   292,    53,   174,   144,   145,   146,
     118,   144,   145,   146,   120,     3,     4,     5,     6,   163,
     164,   165,   166,   122,   168,   162,   163,   174,   449,   162,
     163,   171,    80,   170,   174,    83,    92,   170,   175,   119,
       3,   116,   175,   132,   133,   134,   135,   136,   137,   174,
       4,    99,    78,    41,    42,    43,    88,   170,   479,     3,
     481,   417,     4,     3,     4,     5,     6,    41,   116,   170,
     170,     6,   109,     3,     4,     5,     6,   171,    12,   121,
     171,   129,     4,   171,    25,    41,     3,   174,   151,   107,
       3,    72,    80,     3,   107,    83,   144,   145,   146,     3,
     120,    41,    42,    43,   170,   170,   170,   168,    93,    89,
      88,    99,    42,    43,   162,   163,   170,    44,   170,   174,
      53,    62,   170,   174,    50,   170,    67,   175,   116,   170,
      17,   171,    73,    74,     3,     3,    77,   170,    89,   170,
      80,   129,   110,    83,    49,     0,   171,    96,   170,    90,
      80,    99,     7,    83,    95,   169,   144,   145,   146,    99,
      15,   168,    49,   174,    65,     6,     6,    22,    99,    99,
     171,    26,   171,   171,   162,   163,   116,    32,    94,    73,
      35,    36,   170,    73,    73,   126,   116,   175,    94,   129,
       3,   170,    47,    48,   171,   171,   121,   172,   171,   129,
     171,   170,    63,    58,   144,   145,   146,   171,    23,    96,
      44,   301,   298,   141,   144,   145,   146,   332,   407,   124,
      52,   130,   162,   163,   305,   130,   209,    82,   237,   116,
     170,    86,   162,   163,   312,   175,   123,   124,   243,    49,
     170,   249,   483,   130,   131,   175,   101,   240,   456,   154,
     155,   457,   107,   158,   159,   220,   161,   162,   163,   164,
     165,   166,    92,   168,   151,   152,   153,   154,   155,    -1,
      -1,   158,   159,    -1,   161,   162,   163,   164,   165,   166,
      -1,   168,     7,    -1,    -1,   476,    96,    -1,    -1,    -1,
      15,    -1,    49,   148,   149,   150,    -1,    22,    -1,    -1,
     110,    26,    -1,    -1,    -1,    -1,   116,    32,    -1,    -1,
      35,    36,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
     130,   131,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    49,    -1,    96,
      -1,   151,   152,   153,   154,   155,    -1,    -1,   158,   159,
      -1,   161,   162,   163,   164,   165,   166,    82,   168,   116,
      -1,    86,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,   130,   131,    -1,   101,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,   152,   153,   154,   155,    -1,
      -1,   158,   159,    -1,   161,   162,   163,   164,   165,   166,
      -1,   168,   124,    -1,    -1,    24,    -1,    -1,   130,   131,
      -1,    30,    -1,   148,   149,   150,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
     152,   153,   154,   155,    -1,    -1,   158,   159,    -1,   161,
     162,   163,   164,   165,   166,    64,   168,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    81,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114
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
       6,    83,    99,   145,   146,   175,   233,   234,   258,   259,
     260,   261,   262,   263,   264,   265,     4,   187,   116,   272,
     272,    78,   223,    88,   170,   206,     3,   208,   209,   191,
     259,   191,    41,   272,   272,   213,   280,   170,   262,    12,
     219,   171,   171,   211,   212,   213,   218,   109,   217,   121,
     211,    50,    68,   231,     4,   171,   174,    41,    89,   120,
     170,   206,     3,    41,    42,    43,    80,   116,   129,   144,
     162,   163,   170,   236,   237,   238,   239,   240,   241,   242,
     243,   245,   246,   247,   248,   249,   252,   253,   254,   255,
     257,   258,   262,   191,     3,   285,    59,   214,   151,   174,
     223,   107,   192,   192,     3,   182,   183,   220,   232,   235,
     236,   226,   215,   227,   228,   236,   226,   236,   109,   236,
     258,     3,   210,     3,   197,   198,   120,   170,   172,   170,
     170,   170,   106,   236,   244,    41,   116,   237,   168,   262,
     237,   214,   236,   110,   127,    17,    49,    96,   116,   123,
     124,   130,   131,   151,   152,   153,   154,   155,   158,   159,
     161,   162,   163,   164,   165,   166,   168,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   250,
     251,   256,    93,   171,   174,   170,   236,   209,    44,   170,
     171,   174,    89,   221,   222,   174,     3,   120,   275,   276,
     231,   211,   174,    85,   111,   229,   231,    50,    50,    88,
      24,    30,    38,    64,    81,    83,    84,    98,   102,   114,
     199,   171,   174,   210,   171,   219,     3,   163,   214,   250,
     236,   236,   244,    87,   106,   112,   170,   116,   232,   256,
     171,   171,   236,   236,   237,   237,    96,   123,   170,    99,
     116,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   262,   272,     3,   234,
     190,   234,   183,   170,   266,   267,   268,   269,   270,   272,
     281,   223,   235,     3,   228,   236,   236,   191,   170,   170,
      99,   116,   200,   198,   232,   171,    89,   120,   103,    87,
     112,   236,   236,   214,   169,   110,   237,   170,   214,   232,
      99,   169,   171,   171,   210,    25,    62,    67,    73,    74,
      90,    95,   282,   174,   120,   273,   274,   275,    65,   224,
       6,     6,    99,   171,   236,   199,   236,   236,   112,   103,
     171,   237,   214,   232,   171,   171,   171,    94,    73,    73,
      73,    94,   267,     3,   121,   171,   171,   171,   171,   112,
     236,   171,   171,   274,   268,   267,   170,   232,    77,   126,
     285,    46,   225,   170,   236,   283,   171,   236,     3,   257,
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
     237,   238,   238,   239,   239,   239,   239,   239,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   241,
     241,   242,   242,   242,   242,   243,   243,   243,   243,   244,
     244,   245,   245,   246,   246,   246,   246,   246,   246,   246,
     247,   247,   248,   249,   250,   250,   250,   250,   250,   250,
     251,   251,   251,   251,   251,   251,   252,   253,   254,   255,
     255,   256,   256,   257,   257,   257,   257,   258,   258,   258,
     258,   258,   258,   259,   260,   260,   261,   261,   262,   263,
     264,   265,   266,   266,   267,   267,   268,   268,   269,   269,
     270,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   279,   279,   280,   281,   281,
     281,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   283,   284,   284,   285,   285
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     2,     2,     2,     3,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     5,     6,     5,     6,     4,     6,     3,     5,     4,
       5,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     6,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     3,
       2,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     1,     1,     4,     1,     3,
       2,     1,     1,     3,     1,     5,     1,     0,     2,     1,
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
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1937 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1943 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 147 "bison_parser.y"
            { }
#line 1949 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 147 "bison_parser.y"
            { }
#line 1955 "bison_parser.cpp"
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
#line 1968 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1974 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1980 "bison_parser.cpp"
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
#line 1993 "bison_parser.cpp"
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
#line 2006 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2012 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2018 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2024 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2030 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2036 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2042 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 147 "bison_parser.y"
            { }
#line 2048 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2054 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 147 "bison_parser.y"
            { }
#line 2060 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2066 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2072 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2078 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 147 "bison_parser.y"
            { }
#line 2084 "bison_parser.cpp"
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
#line 2097 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2103 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 147 "bison_parser.y"
            { }
#line 2109 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 147 "bison_parser.y"
            { }
#line 2115 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2121 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 147 "bison_parser.y"
            { }
#line 2127 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2133 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2139 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2145 "bison_parser.cpp"
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
#line 2158 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2164 "bison_parser.cpp"
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
#line 2177 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2183 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2189 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2195 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2201 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2207 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2213 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2219 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2225 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 147 "bison_parser.y"
            { }
#line 2231 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2237 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 147 "bison_parser.y"
            { }
#line 2243 "bison_parser.cpp"
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
#line 2256 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2262 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2268 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2274 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2280 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2286 "bison_parser.cpp"
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
#line 2299 "bison_parser.cpp"
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
#line 2312 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2318 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 147 "bison_parser.y"
            { }
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2336 "bison_parser.cpp"
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
#line 2349 "bison_parser.cpp"
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
#line 2362 "bison_parser.cpp"
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
#line 2375 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2381 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2387 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2393 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2399 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2405 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2411 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2417 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2423 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2429 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2435 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2441 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2447 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2453 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2459 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2465 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 147 "bison_parser.y"
            { }
#line 2471 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 147 "bison_parser.y"
            { }
#line 2477 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_expression: /* interval_expression  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2501 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 147 "bison_parser.y"
            { }
#line 2507 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2513 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2519 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2525 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2531 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2537 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2549 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2555 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2561 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2567 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2573 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2579 "bison_parser.cpp"
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
#line 2592 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2598 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2604 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2610 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2616 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2622 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2628 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2634 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2640 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2646 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2652 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2658 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2664 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 147 "bison_parser.y"
            { }
#line 2670 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2676 "bison_parser.cpp"
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
#line 2689 "bison_parser.cpp"
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

#line 2796 "bison_parser.cpp"

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
#line 3024 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 291 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3035 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 297 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3046 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 306 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3055 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 310 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3064 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 314 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3072 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 317 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3080 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 320 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3088 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3094 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3100 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3106 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 330 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3112 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 331 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3118 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 332 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3124 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 333 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3130 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: execute_statement  */
#line 334 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3136 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: transaction_statement  */
#line 335 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3142 "bison_parser.cpp"
    break;

  case 19: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 344 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3148 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: %empty  */
#line 345 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3154 "bison_parser.cpp"
    break;

  case 21: /* hint_list: hint  */
#line 350 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3160 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint_list ',' hint  */
#line 351 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3166 "bison_parser.cpp"
    break;

  case 23: /* hint: IDENTIFIER  */
#line 355 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3175 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 359 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3185 "bison_parser.cpp"
    break;

  case 25: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 371 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3193 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 374 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3201 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 377 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3209 "bison_parser.cpp"
    break;

  case 30: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 391 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3219 "bison_parser.cpp"
    break;

  case 32: /* execute_statement: EXECUTE IDENTIFIER  */
#line 401 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3228 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 405 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3238 "bison_parser.cpp"
    break;

  case 34: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 419 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3249 "bison_parser.cpp"
    break;

  case 35: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 425 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3260 "bison_parser.cpp"
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
#line 3279 "bison_parser.cpp"
    break;

  case 37: /* file_path: string_literal  */
#line 451 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3285 "bison_parser.cpp"
    break;

  case 38: /* opt_file_type: WITH FORMAT file_type  */
#line 455 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3293 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: %empty  */
#line 458 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3299 "bison_parser.cpp"
    break;

  case 40: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 467 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3310 "bison_parser.cpp"
    break;

  case 41: /* show_statement: SHOW TABLES  */
#line 481 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3318 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW COLUMNS table_name  */
#line 484 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3328 "bison_parser.cpp"
    break;

  case 43: /* show_statement: DESCRIBE table_name  */
#line 489 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3338 "bison_parser.cpp"
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
#line 3356 "bison_parser.cpp"
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
#line 3368 "bison_parser.cpp"
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
#line 3380 "bison_parser.cpp"
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
#line 3393 "bison_parser.cpp"
    break;

  case 48: /* opt_not_exists: IF NOT EXISTS  */
#line 541 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3399 "bison_parser.cpp"
    break;

  case 49: /* opt_not_exists: %empty  */
#line 542 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3405 "bison_parser.cpp"
    break;

  case 50: /* column_def_commalist: column_def  */
#line 546 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3411 "bison_parser.cpp"
    break;

  case 51: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 547 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3417 "bison_parser.cpp"
    break;

  case 52: /* column_def: IDENTIFIER column_type opt_column_nullable  */
#line 551 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3425 "bison_parser.cpp"
    break;

  case 53: /* column_type: INT  */
#line 557 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3431 "bison_parser.cpp"
    break;

  case 54: /* column_type: INTEGER  */
#line 558 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3437 "bison_parser.cpp"
    break;

  case 55: /* column_type: LONG  */
#line 559 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3443 "bison_parser.cpp"
    break;

  case 56: /* column_type: FLOAT  */
#line 560 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3449 "bison_parser.cpp"
    break;

  case 57: /* column_type: DOUBLE  */
#line 561 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3455 "bison_parser.cpp"
    break;

  case 58: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 562 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3461 "bison_parser.cpp"
    break;

  case 59: /* column_type: CHAR '(' INTVAL ')'  */
#line 563 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3467 "bison_parser.cpp"
    break;

  case 60: /* column_type: TEXT  */
#line 564 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3473 "bison_parser.cpp"
    break;

  case 61: /* column_type: DATETIME  */
#line 565 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3479 "bison_parser.cpp"
    break;

  case 62: /* column_type: DATE  */
#line 566 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3485 "bison_parser.cpp"
    break;

  case 63: /* opt_column_nullable: NULL  */
#line 570 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3491 "bison_parser.cpp"
    break;

  case 64: /* opt_column_nullable: NOT NULL  */
#line 571 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3497 "bison_parser.cpp"
    break;

  case 65: /* opt_column_nullable: %empty  */
#line 572 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3503 "bison_parser.cpp"
    break;

  case 66: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 582 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3514 "bison_parser.cpp"
    break;

  case 67: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 588 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3525 "bison_parser.cpp"
    break;

  case 68: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 594 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3535 "bison_parser.cpp"
    break;

  case 69: /* opt_exists: IF EXISTS  */
#line 602 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3541 "bison_parser.cpp"
    break;

  case 70: /* opt_exists: %empty  */
#line 603 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3547 "bison_parser.cpp"
    break;

  case 71: /* delete_statement: DELETE FROM table_name opt_where  */
#line 612 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3558 "bison_parser.cpp"
    break;

  case 72: /* truncate_statement: TRUNCATE table_name  */
#line 621 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3568 "bison_parser.cpp"
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
#line 3580 "bison_parser.cpp"
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
#line 3592 "bison_parser.cpp"
    break;

  case 75: /* opt_column_list: '(' ident_commalist ')'  */
#line 652 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3598 "bison_parser.cpp"
    break;

  case 76: /* opt_column_list: %empty  */
#line 653 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3604 "bison_parser.cpp"
    break;

  case 77: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 663 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3615 "bison_parser.cpp"
    break;

  case 78: /* update_clause_commalist: update_clause  */
#line 672 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3621 "bison_parser.cpp"
    break;

  case 79: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 673 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3627 "bison_parser.cpp"
    break;

  case 80: /* update_clause: IDENTIFIER '=' expr  */
#line 677 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3637 "bison_parser.cpp"
    break;

  case 81: /* select_statement: opt_with_clause select_with_paren  */
#line 689 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3646 "bison_parser.cpp"
    break;

  case 82: /* select_statement: opt_with_clause select_no_paren  */
#line 693 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3655 "bison_parser.cpp"
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
#line 3671 "bison_parser.cpp"
    break;

  case 86: /* select_within_set_operation_no_parentheses: select_clause  */
#line 715 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3677 "bison_parser.cpp"
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
#line 3690 "bison_parser.cpp"
    break;

  case 88: /* select_with_paren: '(' select_no_paren ')'  */
#line 727 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3696 "bison_parser.cpp"
    break;

  case 89: /* select_with_paren: '(' select_with_paren ')'  */
#line 728 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3702 "bison_parser.cpp"
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
#line 3717 "bison_parser.cpp"
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
#line 3732 "bison_parser.cpp"
    break;

  case 92: /* set_operator: set_type opt_all  */
#line 755 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3741 "bison_parser.cpp"
    break;

  case 93: /* set_type: UNION  */
#line 762 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3750 "bison_parser.cpp"
    break;

  case 94: /* set_type: INTERSECT  */
#line 766 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3759 "bison_parser.cpp"
    break;

  case 95: /* set_type: EXCEPT  */
#line 770 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3768 "bison_parser.cpp"
    break;

  case 96: /* opt_all: ALL  */
#line 777 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3776 "bison_parser.cpp"
    break;

  case 97: /* opt_all: %empty  */
#line 780 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3784 "bison_parser.cpp"
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
#line 3798 "bison_parser.cpp"
    break;

  case 99: /* opt_distinct: DISTINCT  */
#line 798 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3804 "bison_parser.cpp"
    break;

  case 100: /* opt_distinct: %empty  */
#line 799 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3810 "bison_parser.cpp"
    break;

  case 102: /* opt_from_clause: from_clause  */
#line 807 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3816 "bison_parser.cpp"
    break;

  case 103: /* opt_from_clause: %empty  */
#line 808 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3822 "bison_parser.cpp"
    break;

  case 104: /* from_clause: FROM table_ref  */
#line 812 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3828 "bison_parser.cpp"
    break;

  case 105: /* opt_where: WHERE expr  */
#line 817 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3834 "bison_parser.cpp"
    break;

  case 106: /* opt_where: %empty  */
#line 818 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3840 "bison_parser.cpp"
    break;

  case 107: /* opt_group: GROUP BY expr_list opt_having  */
#line 822 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3850 "bison_parser.cpp"
    break;

  case 108: /* opt_group: %empty  */
#line 827 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3856 "bison_parser.cpp"
    break;

  case 109: /* opt_having: HAVING expr  */
#line 831 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3862 "bison_parser.cpp"
    break;

  case 110: /* opt_having: %empty  */
#line 832 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3868 "bison_parser.cpp"
    break;

  case 111: /* opt_order: ORDER BY order_list  */
#line 836 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3874 "bison_parser.cpp"
    break;

  case 112: /* opt_order: %empty  */
#line 837 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3880 "bison_parser.cpp"
    break;

  case 113: /* order_list: order_desc  */
#line 841 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3886 "bison_parser.cpp"
    break;

  case 114: /* order_list: order_list ',' order_desc  */
#line 842 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3892 "bison_parser.cpp"
    break;

  case 115: /* order_desc: expr opt_order_type  */
#line 846 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3898 "bison_parser.cpp"
    break;

  case 116: /* opt_order_type: ASC  */
#line 850 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3904 "bison_parser.cpp"
    break;

  case 117: /* opt_order_type: DESC  */
#line 851 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3910 "bison_parser.cpp"
    break;

  case 118: /* opt_order_type: %empty  */
#line 852 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3916 "bison_parser.cpp"
    break;

  case 119: /* opt_top: TOP int_literal  */
#line 858 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3922 "bison_parser.cpp"
    break;

  case 120: /* opt_top: %empty  */
#line 859 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3928 "bison_parser.cpp"
    break;

  case 121: /* opt_limit: LIMIT expr  */
#line 863 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3934 "bison_parser.cpp"
    break;

  case 122: /* opt_limit: OFFSET expr  */
#line 864 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3940 "bison_parser.cpp"
    break;

  case 123: /* opt_limit: LIMIT expr OFFSET expr  */
#line 865 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3946 "bison_parser.cpp"
    break;

  case 124: /* opt_limit: LIMIT ALL  */
#line 866 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3952 "bison_parser.cpp"
    break;

  case 125: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 867 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3958 "bison_parser.cpp"
    break;

  case 126: /* opt_limit: %empty  */
#line 868 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3964 "bison_parser.cpp"
    break;

  case 127: /* expr_list: expr_alias  */
#line 875 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3970 "bison_parser.cpp"
    break;

  case 128: /* expr_list: expr_list ',' expr_alias  */
#line 876 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3976 "bison_parser.cpp"
    break;

  case 129: /* opt_literal_list: literal_list  */
#line 880 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3982 "bison_parser.cpp"
    break;

  case 130: /* opt_literal_list: %empty  */
#line 881 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 3988 "bison_parser.cpp"
    break;

  case 131: /* literal_list: literal  */
#line 885 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3994 "bison_parser.cpp"
    break;

  case 132: /* literal_list: literal_list ',' literal  */
#line 886 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4000 "bison_parser.cpp"
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
#line 4012 "bison_parser.cpp"
    break;

  case 139: /* operand: '(' expr ')'  */
#line 908 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4018 "bison_parser.cpp"
    break;

  case 150: /* operand: '(' select_no_paren ')'  */
#line 919 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4024 "bison_parser.cpp"
    break;

  case 153: /* unary_expr: '-' operand  */
#line 928 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4030 "bison_parser.cpp"
    break;

  case 154: /* unary_expr: NOT operand  */
#line 929 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4036 "bison_parser.cpp"
    break;

  case 155: /* unary_expr: operand ISNULL  */
#line 930 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4042 "bison_parser.cpp"
    break;

  case 156: /* unary_expr: operand IS NULL  */
#line 931 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4048 "bison_parser.cpp"
    break;

  case 157: /* unary_expr: operand IS NOT NULL  */
#line 932 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4054 "bison_parser.cpp"
    break;

  case 159: /* binary_expr: operand '-' operand  */
#line 937 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4060 "bison_parser.cpp"
    break;

  case 160: /* binary_expr: operand '+' operand  */
#line 938 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4066 "bison_parser.cpp"
    break;

  case 161: /* binary_expr: operand '/' operand  */
#line 939 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4072 "bison_parser.cpp"
    break;

  case 162: /* binary_expr: operand '*' operand  */
#line 940 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4078 "bison_parser.cpp"
    break;

  case 163: /* binary_expr: operand '%' operand  */
#line 941 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4084 "bison_parser.cpp"
    break;

  case 164: /* binary_expr: operand '^' operand  */
#line 942 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4090 "bison_parser.cpp"
    break;

  case 165: /* binary_expr: operand LIKE operand  */
#line 943 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4096 "bison_parser.cpp"
    break;

  case 166: /* binary_expr: operand NOT LIKE operand  */
#line 944 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4102 "bison_parser.cpp"
    break;

  case 167: /* binary_expr: operand ILIKE operand  */
#line 945 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4108 "bison_parser.cpp"
    break;

  case 168: /* binary_expr: operand CONCAT operand  */
#line 946 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4114 "bison_parser.cpp"
    break;

  case 169: /* logic_expr: expr AND expr  */
#line 950 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4120 "bison_parser.cpp"
    break;

  case 170: /* logic_expr: expr OR expr  */
#line 951 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4126 "bison_parser.cpp"
    break;

  case 171: /* in_expr: operand IN '(' expr_list ')'  */
#line 955 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4132 "bison_parser.cpp"
    break;

  case 172: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 956 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4138 "bison_parser.cpp"
    break;

  case 173: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 957 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4144 "bison_parser.cpp"
    break;

  case 174: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 958 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4150 "bison_parser.cpp"
    break;

  case 175: /* case_expr: CASE expr case_list END  */
#line 964 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4156 "bison_parser.cpp"
    break;

  case 176: /* case_expr: CASE expr case_list ELSE expr END  */
#line 965 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4162 "bison_parser.cpp"
    break;

  case 177: /* case_expr: CASE case_list END  */
#line 966 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4168 "bison_parser.cpp"
    break;

  case 178: /* case_expr: CASE case_list ELSE expr END  */
#line 967 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4174 "bison_parser.cpp"
    break;

  case 179: /* case_list: WHEN expr THEN expr  */
#line 971 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4180 "bison_parser.cpp"
    break;

  case 180: /* case_list: case_list WHEN expr THEN expr  */
#line 972 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4186 "bison_parser.cpp"
    break;

  case 181: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 976 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4192 "bison_parser.cpp"
    break;

  case 182: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 977 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4198 "bison_parser.cpp"
    break;

  case 183: /* comp_expr: operand '=' operand  */
#line 981 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4204 "bison_parser.cpp"
    break;

  case 184: /* comp_expr: operand EQUALS operand  */
#line 982 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4210 "bison_parser.cpp"
    break;

  case 185: /* comp_expr: operand NOTEQUALS operand  */
#line 983 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4216 "bison_parser.cpp"
    break;

  case 186: /* comp_expr: operand '<' operand  */
#line 984 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4222 "bison_parser.cpp"
    break;

  case 187: /* comp_expr: operand '>' operand  */
#line 985 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4228 "bison_parser.cpp"
    break;

  case 188: /* comp_expr: operand LESSEQ operand  */
#line 986 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4234 "bison_parser.cpp"
    break;

  case 189: /* comp_expr: operand GREATEREQ operand  */
#line 987 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4240 "bison_parser.cpp"
    break;

  case 190: /* function_expr: IDENTIFIER '(' ')'  */
#line 991 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4246 "bison_parser.cpp"
    break;

  case 191: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 992 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4252 "bison_parser.cpp"
    break;

  case 192: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 996 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4258 "bison_parser.cpp"
    break;

  case 193: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1000 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4264 "bison_parser.cpp"
    break;

  case 194: /* datetime_field: SECOND  */
#line 1004 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4270 "bison_parser.cpp"
    break;

  case 195: /* datetime_field: MINUTE  */
#line 1005 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4276 "bison_parser.cpp"
    break;

  case 196: /* datetime_field: HOUR  */
#line 1006 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4282 "bison_parser.cpp"
    break;

  case 197: /* datetime_field: DAY  */
#line 1007 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4288 "bison_parser.cpp"
    break;

  case 198: /* datetime_field: MONTH  */
#line 1008 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4294 "bison_parser.cpp"
    break;

  case 199: /* datetime_field: YEAR  */
#line 1009 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4300 "bison_parser.cpp"
    break;

  case 200: /* datetime_field_plural: SECONDS  */
#line 1013 "bison_parser.y"
                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4306 "bison_parser.cpp"
    break;

  case 201: /* datetime_field_plural: MINUTES  */
#line 1014 "bison_parser.y"
                { (yyval.datetime_field) = kDatetimeMinute; }
#line 4312 "bison_parser.cpp"
    break;

  case 202: /* datetime_field_plural: HOURS  */
#line 1015 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeHour; }
#line 4318 "bison_parser.cpp"
    break;

  case 203: /* datetime_field_plural: DAYS  */
#line 1016 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeDay; }
#line 4324 "bison_parser.cpp"
    break;

  case 204: /* datetime_field_plural: MONTHS  */
#line 1017 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMonth; }
#line 4330 "bison_parser.cpp"
    break;

  case 205: /* datetime_field_plural: YEARS  */
#line 1018 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeYear; }
#line 4336 "bison_parser.cpp"
    break;

  case 206: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1022 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4342 "bison_parser.cpp"
    break;

  case 207: /* array_index: operand '[' int_literal ']'  */
#line 1026 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4348 "bison_parser.cpp"
    break;

  case 208: /* between_expr: operand BETWEEN operand AND operand  */
#line 1030 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4354 "bison_parser.cpp"
    break;

  case 209: /* interval_expression: INTERVAL int_literal duration_field  */
#line 1034 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeInterval((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field)); delete (yyvsp[-1].expr); }
#line 4360 "bison_parser.cpp"
    break;

  case 210: /* interval_expression: int_literal duration_field  */
#line 1035 "bison_parser.y"
                                           { (yyval.expr) = Expr::makeInterval((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field)); delete (yyvsp[-1].expr); }
#line 4366 "bison_parser.cpp"
    break;

  case 213: /* column_name: IDENTIFIER  */
#line 1044 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4372 "bison_parser.cpp"
    break;

  case 214: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1045 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4378 "bison_parser.cpp"
    break;

  case 215: /* column_name: '*'  */
#line 1046 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4384 "bison_parser.cpp"
    break;

  case 216: /* column_name: IDENTIFIER '.' '*'  */
#line 1047 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4390 "bison_parser.cpp"
    break;

  case 223: /* string_literal: STRING  */
#line 1060 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4396 "bison_parser.cpp"
    break;

  case 224: /* bool_literal: TRUE  */
#line 1064 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4402 "bison_parser.cpp"
    break;

  case 225: /* bool_literal: FALSE  */
#line 1065 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4408 "bison_parser.cpp"
    break;

  case 226: /* num_literal: FLOATVAL  */
#line 1069 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4414 "bison_parser.cpp"
    break;

  case 228: /* int_literal: INTVAL  */
#line 1074 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4420 "bison_parser.cpp"
    break;

  case 229: /* null_literal: NULL  */
#line 1078 "bison_parser.y"
                 { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4426 "bison_parser.cpp"
    break;

  case 230: /* date_literal: DATE STRING  */
#line 1082 "bison_parser.y"
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
#line 4441 "bison_parser.cpp"
    break;

  case 231: /* param_expr: '?'  */
#line 1095 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4451 "bison_parser.cpp"
    break;

  case 233: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1108 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4462 "bison_parser.cpp"
    break;

  case 237: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1124 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4473 "bison_parser.cpp"
    break;

  case 238: /* table_ref_commalist: table_ref_atomic  */
#line 1133 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4479 "bison_parser.cpp"
    break;

  case 239: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1134 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4485 "bison_parser.cpp"
    break;

  case 240: /* table_ref_name: table_name opt_table_alias  */
#line 1139 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4497 "bison_parser.cpp"
    break;

  case 241: /* table_ref_name_no_alias: table_name  */
#line 1150 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4507 "bison_parser.cpp"
    break;

  case 242: /* table_name: IDENTIFIER  */
#line 1159 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4513 "bison_parser.cpp"
    break;

  case 243: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1160 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4519 "bison_parser.cpp"
    break;

  case 245: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1166 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4525 "bison_parser.cpp"
    break;

  case 247: /* opt_table_alias: %empty  */
#line 1172 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4531 "bison_parser.cpp"
    break;

  case 248: /* alias: AS IDENTIFIER  */
#line 1177 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4537 "bison_parser.cpp"
    break;

  case 249: /* alias: IDENTIFIER  */
#line 1178 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4543 "bison_parser.cpp"
    break;

  case 251: /* opt_alias: %empty  */
#line 1184 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4549 "bison_parser.cpp"
    break;

  case 253: /* opt_with_clause: %empty  */
#line 1194 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4555 "bison_parser.cpp"
    break;

  case 254: /* with_clause: WITH with_description_list  */
#line 1198 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4561 "bison_parser.cpp"
    break;

  case 255: /* with_description_list: with_description  */
#line 1202 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4570 "bison_parser.cpp"
    break;

  case 256: /* with_description_list: with_description_list ',' with_description  */
#line 1206 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4579 "bison_parser.cpp"
    break;

  case 257: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1213 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4589 "bison_parser.cpp"
    break;

  case 258: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1227 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4601 "bison_parser.cpp"
    break;

  case 259: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1235 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4614 "bison_parser.cpp"
    break;

  case 260: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1245 "bison_parser.y"
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
#line 4634 "bison_parser.cpp"
    break;

  case 261: /* opt_join_type: INNER  */
#line 1263 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4640 "bison_parser.cpp"
    break;

  case 262: /* opt_join_type: LEFT OUTER  */
#line 1264 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4646 "bison_parser.cpp"
    break;

  case 263: /* opt_join_type: LEFT  */
#line 1265 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4652 "bison_parser.cpp"
    break;

  case 264: /* opt_join_type: RIGHT OUTER  */
#line 1266 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4658 "bison_parser.cpp"
    break;

  case 265: /* opt_join_type: RIGHT  */
#line 1267 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4664 "bison_parser.cpp"
    break;

  case 266: /* opt_join_type: FULL OUTER  */
#line 1268 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4670 "bison_parser.cpp"
    break;

  case 267: /* opt_join_type: OUTER  */
#line 1269 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4676 "bison_parser.cpp"
    break;

  case 268: /* opt_join_type: FULL  */
#line 1270 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4682 "bison_parser.cpp"
    break;

  case 269: /* opt_join_type: CROSS  */
#line 1271 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4688 "bison_parser.cpp"
    break;

  case 270: /* opt_join_type: %empty  */
#line 1272 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4694 "bison_parser.cpp"
    break;

  case 274: /* ident_commalist: IDENTIFIER  */
#line 1292 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4700 "bison_parser.cpp"
    break;

  case 275: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1293 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4706 "bison_parser.cpp"
    break;


#line 4710 "bison_parser.cpp"

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

#line 1296 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
