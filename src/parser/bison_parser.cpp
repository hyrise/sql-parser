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
  YYSYMBOL_REAL = 31,                      /* REAL  */
  YYSYMBOL_DECIMAL = 32,                   /* DECIMAL  */
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
  YYSYMBOL_TRUE = 142,                     /* TRUE  */
  YYSYMBOL_FALSE = 143,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 144,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 145,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 146,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 147,                 /* ROLLBACK  */
  YYSYMBOL_148_ = 148,                     /* '='  */
  YYSYMBOL_EQUALS = 149,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 150,                /* NOTEQUALS  */
  YYSYMBOL_151_ = 151,                     /* '<'  */
  YYSYMBOL_152_ = 152,                     /* '>'  */
  YYSYMBOL_LESS = 153,                     /* LESS  */
  YYSYMBOL_GREATER = 154,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 155,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 156,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 157,                  /* NOTNULL  */
  YYSYMBOL_158_ = 158,                     /* '+'  */
  YYSYMBOL_159_ = 159,                     /* '-'  */
  YYSYMBOL_160_ = 160,                     /* '*'  */
  YYSYMBOL_161_ = 161,                     /* '/'  */
  YYSYMBOL_162_ = 162,                     /* '%'  */
  YYSYMBOL_163_ = 163,                     /* '^'  */
  YYSYMBOL_UMINUS = 164,                   /* UMINUS  */
  YYSYMBOL_165_ = 165,                     /* '['  */
  YYSYMBOL_166_ = 166,                     /* ']'  */
  YYSYMBOL_167_ = 167,                     /* '('  */
  YYSYMBOL_168_ = 168,                     /* ')'  */
  YYSYMBOL_169_ = 169,                     /* '.'  */
  YYSYMBOL_170_ = 170,                     /* ';'  */
  YYSYMBOL_171_ = 171,                     /* ','  */
  YYSYMBOL_172_ = 172,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 173,                 /* $accept  */
  YYSYMBOL_input = 174,                    /* input  */
  YYSYMBOL_statement_list = 175,           /* statement_list  */
  YYSYMBOL_statement = 176,                /* statement  */
  YYSYMBOL_preparable_statement = 177,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 178,                /* opt_hints  */
  YYSYMBOL_hint_list = 179,                /* hint_list  */
  YYSYMBOL_hint = 180,                     /* hint  */
  YYSYMBOL_transaction_statement = 181,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 182,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 183,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 184,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 185,        /* execute_statement  */
  YYSYMBOL_import_statement = 186,         /* import_statement  */
  YYSYMBOL_file_type = 187,                /* file_type  */
  YYSYMBOL_file_path = 188,                /* file_path  */
  YYSYMBOL_opt_file_type = 189,            /* opt_file_type  */
  YYSYMBOL_export_statement = 190,         /* export_statement  */
  YYSYMBOL_show_statement = 191,           /* show_statement  */
  YYSYMBOL_create_statement = 192,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 193,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 194,     /* column_def_commalist  */
  YYSYMBOL_column_def = 195,               /* column_def  */
  YYSYMBOL_column_type = 196,              /* column_type  */
  YYSYMBOL_opt_decimal_specification = 197, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_nullable = 198,      /* opt_column_nullable  */
  YYSYMBOL_opt_column_constraint = 199,    /* opt_column_constraint  */
  YYSYMBOL_opt_table_key_constraints = 200, /* opt_table_key_constraints  */
  YYSYMBOL_table_key_constraint = 201,     /* table_key_constraint  */
  YYSYMBOL_drop_statement = 202,           /* drop_statement  */
  YYSYMBOL_opt_exists = 203,               /* opt_exists  */
  YYSYMBOL_delete_statement = 204,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 205,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 206,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 207,          /* opt_column_list  */
  YYSYMBOL_update_statement = 208,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 209,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 210,            /* update_clause  */
  YYSYMBOL_select_statement = 211,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 212, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 213, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 214,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 215,          /* select_no_paren  */
  YYSYMBOL_set_operator = 216,             /* set_operator  */
  YYSYMBOL_set_type = 217,                 /* set_type  */
  YYSYMBOL_opt_all = 218,                  /* opt_all  */
  YYSYMBOL_select_clause = 219,            /* select_clause  */
  YYSYMBOL_opt_distinct = 220,             /* opt_distinct  */
  YYSYMBOL_select_list = 221,              /* select_list  */
  YYSYMBOL_opt_from_clause = 222,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 223,              /* from_clause  */
  YYSYMBOL_opt_where = 224,                /* opt_where  */
  YYSYMBOL_opt_group = 225,                /* opt_group  */
  YYSYMBOL_opt_having = 226,               /* opt_having  */
  YYSYMBOL_opt_order = 227,                /* opt_order  */
  YYSYMBOL_order_list = 228,               /* order_list  */
  YYSYMBOL_order_desc = 229,               /* order_desc  */
  YYSYMBOL_opt_order_type = 230,           /* opt_order_type  */
  YYSYMBOL_opt_top = 231,                  /* opt_top  */
  YYSYMBOL_opt_limit = 232,                /* opt_limit  */
  YYSYMBOL_expr_list = 233,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 234,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 235,             /* literal_list  */
  YYSYMBOL_expr_alias = 236,               /* expr_alias  */
  YYSYMBOL_expr = 237,                     /* expr  */
  YYSYMBOL_operand = 238,                  /* operand  */
  YYSYMBOL_scalar_expr = 239,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 240,               /* unary_expr  */
  YYSYMBOL_binary_expr = 241,              /* binary_expr  */
  YYSYMBOL_logic_expr = 242,               /* logic_expr  */
  YYSYMBOL_in_expr = 243,                  /* in_expr  */
  YYSYMBOL_case_expr = 244,                /* case_expr  */
  YYSYMBOL_case_list = 245,                /* case_list  */
  YYSYMBOL_exists_expr = 246,              /* exists_expr  */
  YYSYMBOL_comp_expr = 247,                /* comp_expr  */
  YYSYMBOL_function_expr = 248,            /* function_expr  */
  YYSYMBOL_extract_expr = 249,             /* extract_expr  */
  YYSYMBOL_cast_expr = 250,                /* cast_expr  */
  YYSYMBOL_datetime_field = 251,           /* datetime_field  */
  YYSYMBOL_array_expr = 252,               /* array_expr  */
  YYSYMBOL_array_index = 253,              /* array_index  */
  YYSYMBOL_between_expr = 254,             /* between_expr  */
  YYSYMBOL_column_name = 255,              /* column_name  */
  YYSYMBOL_literal = 256,                  /* literal  */
  YYSYMBOL_string_literal = 257,           /* string_literal  */
  YYSYMBOL_bool_literal = 258,             /* bool_literal  */
  YYSYMBOL_num_literal = 259,              /* num_literal  */
  YYSYMBOL_int_literal = 260,              /* int_literal  */
  YYSYMBOL_null_literal = 261,             /* null_literal  */
  YYSYMBOL_param_expr = 262,               /* param_expr  */
  YYSYMBOL_table_ref = 263,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 264,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 265, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 266,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 267,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 268,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 269,               /* table_name  */
  YYSYMBOL_opt_index_name = 270,           /* opt_index_name  */
  YYSYMBOL_index_name = 271,               /* index_name  */
  YYSYMBOL_table_alias = 272,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 273,          /* opt_table_alias  */
  YYSYMBOL_alias = 274,                    /* alias  */
  YYSYMBOL_opt_alias = 275,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 276,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 277,              /* with_clause  */
  YYSYMBOL_with_description_list = 278,    /* with_description_list  */
  YYSYMBOL_with_description = 279,         /* with_description  */
  YYSYMBOL_join_clause = 280,              /* join_clause  */
  YYSYMBOL_opt_join_type = 281,            /* opt_join_type  */
  YYSYMBOL_join_condition = 282,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 283,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 284           /* ident_commalist  */
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
#define YYLAST   833

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  282
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  521

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   410


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
       2,     2,     2,     2,     2,     2,     2,   162,     2,     2,
     167,   168,   160,   158,   171,   159,   169,   161,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   170,
     151,   148,   152,   172,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   165,     2,   166,   163,     2,     2,     2,     2,     2,
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
     145,   146,   147,   149,   150,   153,   154,   155,   156,   157,
     164
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   279,   279,   300,   306,   315,   319,   323,   326,   329,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   353,
     354,   359,   360,   364,   368,   380,   383,   386,   392,   393,
     400,   407,   410,   414,   428,   434,   443,   460,   464,   467,
     476,   490,   493,   498,   512,   525,   533,   540,   547,   558,
     559,   563,   564,   568,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   591,   592,
     593,   596,   597,   598,   602,   603,   604,   608,   609,   610,
     614,   615,   623,   629,   635,   640,   649,   650,   659,   668,
     681,   688,   699,   700,   710,   719,   720,   724,   736,   740,
     744,   758,   759,   762,   763,   774,   775,   779,   789,   802,
     809,   813,   817,   824,   827,   833,   845,   846,   850,   854,
     855,   859,   864,   865,   869,   874,   878,   879,   883,   884,
     888,   889,   893,   897,   898,   899,   905,   906,   910,   911,
     912,   913,   914,   915,   922,   923,   927,   928,   932,   933,
     937,   947,   948,   949,   950,   951,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   969,   970,   974,
     975,   976,   977,   978,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   996,   997,  1001,  1002,  1003,
    1004,  1010,  1011,  1012,  1013,  1017,  1018,  1022,  1023,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1037,  1038,  1042,  1046,
    1050,  1051,  1052,  1053,  1054,  1055,  1059,  1063,  1067,  1071,
    1072,  1073,  1074,  1078,  1079,  1080,  1081,  1082,  1086,  1090,
    1091,  1095,  1096,  1100,  1104,  1108,  1120,  1121,  1131,  1132,
    1136,  1137,  1146,  1147,  1152,  1163,  1172,  1173,  1177,  1178,
    1182,  1187,  1188,  1193,  1194,  1199,  1200,  1205,  1206,  1215,
    1216,  1220,  1224,  1228,  1235,  1248,  1256,  1266,  1285,  1286,
    1287,  1288,  1289,  1290,  1291,  1292,  1293,  1294,  1299,  1308,
    1309,  1314,  1315
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
  "SCHEMAS", "CHARACTER", "VARYING", "REAL", "DECIMAL", "SPATIAL",
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
  "YEAR", "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK",
  "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_decimal_specification", "opt_column_nullable",
  "opt_column_constraint", "opt_table_key_constraints",
  "table_key_constraint", "drop_statement", "opt_exists",
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
     395,   396,   397,   398,   399,   400,   401,   402,    61,   403,
     404,    60,    62,   405,   406,   407,   408,   409,    43,    45,
      42,    47,    37,    94,   410,    91,    93,    40,    41,    46,
      59,    44,    63
};
#endif

#define YYPACT_NINF (-409)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-280)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     521,    14,   184,   190,   198,   184,    20,   158,   163,   166,
     184,   184,   133,     8,   256,   153,   153,   153,   292,   141,
    -409,   189,  -409,   189,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,   -36,  -409,   298,   134,  -409,
     150,   229,  -409,   205,   205,   205,   184,   341,   184,   223,
    -409,   -50,   228,   228,   228,   184,  -409,   226,   185,  -409,
    -409,  -409,  -409,  -409,  -409,   530,  -409,   259,  -409,  -409,
     237,   -36,    35,  -409,   173,  -409,   355,    13,   357,   245,
     363,   184,   184,   285,  -409,   279,   209,   374,   377,   377,
     333,   379,   184,   184,  -409,   216,   256,  -409,   217,   383,
     373,   222,   225,  -409,  -409,  -409,   -36,   278,   281,   -36,
     135,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,   236,
     238,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
     365,  -409,   282,   -67,   209,   302,  -409,   377,   405,   207,
     265,   -57,  -409,   307,  -409,   307,  -409,  -409,   290,  -409,
    -409,  -409,  -409,   418,  -409,  -409,   302,  -409,  -409,   347,
    -409,  -409,    35,  -409,  -409,   302,   347,   302,   115,  -409,
    -409,    13,  -409,   184,   421,   314,   424,   304,   104,   263,
     264,   266,   192,   323,   267,   391,  -409,   220,   138,   358,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,   332,  -409,   -87,   269,
    -409,   302,   374,  -409,   386,  -409,  -409,   184,   272,   -43,
    -409,   348,   271,  -409,    39,   135,   -36,   275,  -409,   119,
     135,   138,   393,   -26,  -409,   273,   356,  -409,   715,   280,
    -409,   314,    12,     9,   392,   262,   302,   302,    74,    -6,
     283,   391,   552,   302,   254,   284,   -85,   302,   302,   391,
    -409,   391,    37,   286,   126,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     383,   184,  -409,   451,    13,   138,  -409,   341,  -409,    13,
    -409,   418,    10,   285,  -409,   302,  -409,   452,  -409,  -409,
    -409,  -409,   302,  -409,  -409,  -409,  -409,   302,   302,   405,
     377,  -409,   427,  -409,   293,   296,  -409,  -409,   297,  -409,
    -409,  -409,  -409,  -409,  -409,   152,   132,   117,  -409,  -409,
    -409,   302,  -409,  -409,   291,  -409,  -409,  -409,  -409,  -409,
    -409,   375,   130,    -1,    90,   302,   302,  -409,   392,   367,
      43,  -409,  -409,  -409,   359,   495,   571,   391,   303,   220,
    -409,   368,   311,   571,   571,   571,   571,   609,   609,   609,
     609,   254,   254,   -56,   -56,   -56,  -100,   306,  -409,  -409,
     122,  -409,   123,  -409,   314,  -409,    -5,  -409,   308,  -409,
      33,  -409,   408,  -409,  -409,  -409,   138,   138,   128,  -409,
     313,   475,  -409,   478,   481,  -409,   385,     4,   370,   324,
    -409,  -409,    76,  -409,   142,  -409,   302,   715,   302,   302,
    -409,    88,   129,   328,  -409,   391,   571,   220,   329,   147,
    -409,  -409,  -409,  -409,   330,   401,  -409,  -409,  -409,   423,
     425,   426,   403,    10,   501,  -409,  -409,  -409,   380,  -409,
    -409,   506,   148,   354,   361,  -409,   396,  -409,  -409,   360,
     405,  -409,   -76,   364,   138,   131,  -409,   302,  -409,   552,
     371,   162,  -409,  -409,    33,    10,  -409,  -409,  -409,    10,
      -3,   382,   302,   372,  -409,   519,  -409,  -409,  -409,   405,
     168,  -409,  -409,  -409,   138,  -409,  -409,  -409,  -409,   243,
     405,   -13,  -409,   376,   170,  -409,   387,   302,   175,   302,
    -409,  -409,  -409,    11,   138,  -409,  -409,   138,   362,   378,
    -409
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     260,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   280,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   259,     0,   246,    89,
      32,     0,    43,    50,    50,    50,     0,     0,     0,     0,
     245,     0,    87,    87,    87,     0,    41,     0,   261,   262,
      28,    25,    27,    26,     1,   260,     2,     0,     6,     5,
     137,     0,    98,    99,   129,    84,     0,   147,     0,     0,
     249,     0,     0,   123,    36,     0,    93,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     4,     0,     0,
     117,     0,     0,   111,   112,   110,     0,   114,     0,     0,
     143,   247,   228,   231,   233,   234,   229,   230,   235,     0,
     146,   148,   223,   224,   225,   232,   226,   227,    31,    30,
       0,   248,     0,     0,    93,     0,    88,     0,     0,     0,
       0,   123,    95,    39,    37,    39,    86,   250,     0,    82,
      83,   264,   263,     0,   136,   116,     0,   106,   105,   129,
     102,   101,   103,   113,   109,     0,   129,     0,     0,   107,
      33,     0,    49,     0,     0,   260,     0,     0,   219,     0,
       0,     0,     0,     0,     0,     0,   221,     0,   122,   151,
     158,   159,   160,   153,   155,   161,   154,   174,   162,   163,
     164,   165,   157,   152,   167,   168,     0,   281,     0,     0,
      91,     0,     0,    94,     0,    35,    40,     0,    23,     0,
      21,   120,   118,   144,   258,   143,     0,   128,   130,   135,
     143,   139,   141,   138,   149,     0,     0,    46,     0,    79,
      51,   260,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,     0,   169,     0,     0,     0,     0,     0,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,    97,    96,     0,    85,     0,
      19,     0,     0,   123,   119,     0,   256,     0,   257,   150,
     100,   104,     0,   134,   133,   132,   108,     0,     0,     0,
       0,    55,     0,    60,    70,     0,    59,    57,     0,    67,
      66,    56,    64,    65,    54,    73,     0,     0,    77,    48,
     206,     0,   220,   222,     0,   210,   211,   212,   213,   214,
     215,     0,     0,     0,     0,     0,     0,   193,     0,     0,
       0,   166,   156,   185,   186,     0,   181,     0,     0,     0,
     172,     0,   184,   183,   199,   200,   201,   202,   203,   204,
     205,   176,   175,   178,   177,   179,   180,     0,    34,   282,
       0,    38,     0,    22,   260,   121,   236,   238,     0,   240,
     254,   239,   125,   145,   255,   131,   142,   140,     0,    44,
       0,     0,    58,     0,     0,    71,     0,    76,     0,     0,
      52,    45,     0,    78,     0,   197,     0,     0,     0,     0,
     191,     0,     0,     0,   216,     0,   182,     0,     0,     0,
     173,   217,    90,    24,     0,     0,   276,   268,   274,   272,
     275,   270,     0,     0,     0,   253,   244,   251,     0,   115,
      47,     0,     0,     0,     0,    72,     0,    75,    53,     0,
       0,   207,     0,     0,   195,     0,   194,     0,   198,   218,
       0,     0,   189,   187,   254,     0,   271,   273,   269,     0,
     237,   255,     0,     0,    69,     0,    61,    63,    74,     0,
       0,   208,   209,   192,   196,   190,   188,   241,   265,   277,
       0,   127,    62,     0,     0,    81,     0,     0,     0,     0,
     124,    68,    80,     0,   278,   266,   252,   126,   219,     0,
     267
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -409,  -409,  -409,   461,  -409,   512,  -409,   247,  -409,   224,
    -409,  -409,  -409,  -409,   255,   -78,   410,  -409,  -409,  -409,
     235,  -409,   215,   136,  -409,  -409,  -409,  -409,   232,  -409,
      -4,  -409,  -409,  -409,   428,  -409,  -409,   352,  -171,   -47,
    -409,     6,   -70,   -35,  -409,  -409,   -61,   325,  -409,  -409,
    -409,  -118,  -409,  -409,   -33,  -409,   274,  -409,  -409,   -39,
    -251,  -409,   -68,   270,  -135,  -127,  -409,  -409,  -409,  -409,
    -409,  -409,   320,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,    58,   -69,   -83,  -409,  -409,   -90,  -409,  -409,
    -409,  -408,    99,  -409,  -409,  -409,     5,  -409,  -409,  -409,
     101,   353,  -409,  -409,  -409,  -409,   482,  -409,  -409,  -409,
    -409,  -306
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    18,    19,    20,    21,    68,   219,   220,    22,    61,
      23,   129,    24,    25,    85,   143,   215,    26,    27,    28,
      80,   239,   240,   325,   402,   407,   458,   327,   328,    29,
      91,    30,    31,    32,   139,    33,   141,   142,    34,   159,
     160,   161,    73,   106,   107,   164,    74,   156,   221,   293,
     294,   136,   449,   510,   110,   227,   228,   305,   100,   169,
     222,   119,   120,   223,   224,   189,   190,   191,   192,   193,
     194,   195,   249,   196,   197,   198,   199,   200,   341,   201,
     202,   203,   204,   205,   122,   123,   124,   125,   126,   127,
     385,   386,   387,   388,   389,    49,   390,   132,   148,   445,
     446,   447,   299,    35,    36,    58,    59,   391,   442,   515,
      66,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     188,   102,   350,   398,   237,   144,   144,    39,   121,   154,
      42,   145,   332,    38,   518,    50,    51,   112,   113,   114,
     435,    70,   435,   213,   155,   135,   174,    55,   308,   257,
     229,   456,   231,   233,   265,   480,   296,   509,   257,   109,
      37,    72,   296,    88,   103,   162,   258,   248,   162,    92,
      93,    83,   256,    86,   144,   258,   252,   175,   254,   206,
      94,   436,   166,   436,   457,   280,   437,    56,   437,   210,
     329,   499,   438,   439,   438,   439,   285,   101,   265,   104,
     414,   282,    89,   352,   283,   345,   133,   134,   257,   440,
      43,   440,   491,  -277,   441,  -277,   441,   149,   150,    44,
     176,   151,   234,   408,   346,   258,   418,   279,   429,   280,
     347,   342,   343,   257,   212,   105,   115,   255,   178,   112,
     113,   114,   353,   354,   252,   290,   225,   226,   291,    45,
     258,    71,   355,   230,   356,   238,   409,   357,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   257,   490,   116,   117,   444,   295,   408,
     179,   180,   181,   297,   358,   162,  -242,   229,  -243,   333,
     258,   186,   396,   397,   334,   392,   471,   384,   235,   301,
     330,   419,   103,   504,   247,   118,   300,    38,   257,   167,
     377,   306,   409,    40,   508,   178,   112,   113,   114,   182,
     346,    41,   257,    52,   466,   258,   420,   168,   303,   424,
     421,   422,    53,   434,   295,   121,   380,   104,   115,   258,
     121,   382,   288,   178,   112,   113,   114,   144,   232,   360,
     426,   501,   399,   257,   304,   183,   467,   179,   180,   181,
      62,    63,    54,   257,   257,   257,   361,   493,   184,   108,
     258,    46,   257,   105,   417,   405,    47,   116,   117,    57,
     258,   258,   258,    48,    70,   179,   180,   181,   435,   258,
     209,   242,   406,   243,   185,   186,   182,    70,   423,    81,
      82,   462,   187,   464,   465,   411,   378,   118,   412,   428,
     432,   433,    64,   171,   171,   115,   450,    60,   469,   283,
      67,    75,   247,    76,   182,   178,   112,   113,   114,   436,
     461,    65,   183,   295,   437,   473,   484,    77,   295,   485,
     438,   439,    78,   115,   506,   184,   178,   112,   113,   114,
     496,    79,   494,   295,   116,   117,   505,   440,   512,   283,
     183,   283,   441,   516,    84,    87,   283,   179,   180,   181,
      95,   185,   186,   184,    90,    98,    96,   470,   111,   187,
      99,   128,   116,   117,   118,   130,   131,   135,   250,   180,
     181,   137,   514,   507,   517,   259,   138,   140,   146,   185,
     186,   112,   147,    71,   153,   155,   182,   187,   265,   114,
     157,   163,   118,   158,   178,   112,   113,   114,   335,   336,
     337,   338,   339,   340,   170,   115,   165,   182,   207,   171,
     172,   260,   173,   211,   276,   277,   278,   279,   214,   280,
     217,   218,   183,   108,   236,    14,   115,   238,   241,   281,
     244,   245,   253,   246,   287,   184,   284,   180,   181,   289,
     309,   292,   295,   251,   116,   117,   302,   307,   310,    70,
     348,   326,   351,   359,   379,   394,   184,   400,   261,   415,
     401,   185,   186,   403,   404,   116,   117,   357,   416,   187,
     427,   430,   431,   257,   118,   182,   280,   448,   262,   443,
     451,   452,   185,   186,   453,   263,   264,   454,   455,   459,
     187,   460,   265,   266,   115,   118,   468,   472,   474,   475,
     476,   479,   477,   478,   481,   482,   267,   268,   269,   270,
     271,   251,   483,   272,   273,   488,   274,   275,   276,   277,
     278,   279,   486,   280,   184,   503,    97,   489,     1,   487,
    -279,   243,   492,   116,   117,    69,     2,     1,   383,   495,
     502,   410,   381,     3,   511,     2,   520,     4,   260,   500,
     185,   186,     3,   463,   513,   216,     4,     5,   187,   413,
       6,     7,   177,   118,   286,   393,     5,   331,   344,     6,
       7,   519,     8,     9,   498,   497,   395,   298,   152,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,   261,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   260,     0,    11,     0,   425,
       0,    12,     0,     0,     0,   349,    11,     0,     0,     0,
      12,     0,     0,   264,   260,     0,    13,     0,     0,   265,
     266,     0,    14,     0,     0,    13,     0,     0,     0,     0,
       0,    14,     0,   267,   268,   269,   270,   271,     0,     0,
     272,   273,   261,   274,   275,   276,   277,   278,   279,     0,
     280,     0,   260,     0,     0,     0,    15,    16,    17,     0,
       0,  -280,   349,     0,     0,    15,    16,    17,     0,     0,
     264,     0,     0,     0,     0,     0,   265,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   264,
     267,   268,   269,   270,   271,   265,  -280,   272,   273,     0,
     274,   275,   276,   277,   278,   279,     0,   280,     0,  -280,
    -280,  -280,   270,   271,     0,     0,   272,   273,     0,   274,
     275,   276,   277,   278,   279,     0,   280,   264,     0,   311,
       0,     0,     0,   265,   312,     0,   313,   314,     0,   315,
       0,     0,     0,     0,     0,     0,     0,   316,     0,     0,
    -280,  -280,     0,     0,  -280,  -280,     0,   274,   275,   276,
     277,   278,   279,     0,   280,     0,     0,     0,     0,     0,
       0,     0,     0,   317,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,     0,   319,   320,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   321,     0,     0,
       0,   322,     0,   323,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   324
};

static const yytype_int16 yycheck[] =
{
     135,    71,   253,   309,   175,    88,    89,     2,    77,    99,
       5,    89,     3,     3,     3,    10,    11,     4,     5,     6,
      25,    57,    25,   141,    12,    82,    93,    19,    54,   114,
     165,    27,   167,   168,   134,   443,     3,    50,   114,    74,
      26,    35,     3,    93,     9,   106,   131,   182,   109,    53,
      54,    46,   187,    48,   137,   131,   183,   124,   185,   137,
      55,    66,   109,    66,    60,   165,    71,    59,    71,   139,
     241,   479,    77,    78,    77,    78,   211,    71,   134,    44,
     331,   168,   132,   168,   171,    91,    81,    82,   114,    94,
      70,    94,   168,    98,    99,    98,    99,    92,    93,    79,
     167,    95,   171,    27,   110,   131,   107,   163,   359,   165,
     116,   246,   247,   114,   171,    80,   103,   187,     3,     4,
       5,     6,   257,   258,   251,   168,   159,   162,   171,   109,
     131,   167,   259,   166,   261,     3,    60,   100,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   114,   460,   142,   143,   124,   171,    27,
      45,    46,    47,   124,   127,   226,   171,   302,   171,   160,
     131,   160,   307,   308,   244,   293,   427,   167,   173,   226,
     168,    91,     9,   489,   110,   172,   225,     3,   114,    54,
     280,   230,    60,     3,   500,     3,     4,     5,     6,    84,
     110,     3,   114,    70,   116,   131,   116,    72,    89,   166,
     345,   346,    79,   384,   171,   284,   284,    44,   103,   131,
     289,   289,   217,     3,     4,     5,     6,   310,   113,   103,
     357,   482,   310,   114,   115,   120,   107,    45,    46,    47,
      16,    17,   109,   114,   114,   114,   120,   116,   133,    76,
     131,    93,   114,    80,   124,   103,    93,   142,   143,     3,
     131,   131,   131,    97,    57,    45,    46,    47,    25,   131,
      63,   167,   120,   169,   159,   160,    84,    57,   348,    44,
      45,   416,   167,   418,   419,   168,   281,   172,   171,   359,
     168,   168,     0,   171,   171,   103,   168,   144,   425,   171,
     111,     3,   110,   169,    84,     3,     4,     5,     6,    66,
     168,   170,   120,   171,    71,   168,   168,   167,   171,   171,
      77,    78,    93,   103,    81,   133,     3,     4,     5,     6,
     168,   126,   467,   171,   142,   143,   168,    94,   168,   171,
     120,   171,    99,   168,     3,   122,   171,    45,    46,    47,
     124,   159,   160,   133,   126,    96,   171,   427,     3,   167,
     123,     4,   142,   143,   172,   120,     3,    82,    45,    46,
      47,    92,   507,   130,   509,    17,   167,     3,    45,   159,
     160,     4,     3,   167,   167,    12,    84,   167,   134,     6,
     168,   113,   172,   168,     3,     4,     5,     6,   136,   137,
     138,   139,   140,   141,   168,   103,   125,    84,     3,   171,
      45,    53,   130,   148,   160,   161,   162,   163,   111,   165,
     130,     3,   120,    76,     3,   111,   103,     3,   124,    97,
     167,   167,   165,   167,    48,   133,   167,    46,    47,   167,
     167,    93,   171,   120,   142,   143,   171,    54,    92,    57,
     167,   171,   168,   167,     3,     3,   133,    30,   100,   168,
     167,   159,   160,   167,   167,   142,   143,   100,    93,   167,
     167,   103,   166,   114,   172,    84,   165,    69,   120,   171,
     167,     6,   159,   160,     6,   127,   128,     6,   103,   119,
     167,   167,   134,   135,   103,   172,   168,   168,   168,    98,
      77,    98,    77,    77,     3,   125,   148,   149,   150,   151,
     152,   120,     6,   155,   156,   119,   158,   159,   160,   161,
     162,   163,   168,   165,   133,     6,    65,   167,     7,   168,
       0,   169,   168,   142,   143,    23,    15,     7,   291,   168,
     168,   326,   287,    22,   168,    15,   168,    26,    53,   167,
     159,   160,    22,   417,   167,   145,    26,    36,   167,   327,
      39,    40,   134,   172,   212,   295,    36,   242,   248,    39,
      40,   513,    51,    52,   475,   474,   302,   224,    96,    -1,
      -1,    51,    52,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    86,    -1,   114,
      -1,    90,    -1,    -1,    -1,   120,    86,    -1,    -1,    -1,
      90,    -1,    -1,   128,    53,    -1,   105,    -1,    -1,   134,
     135,    -1,   111,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,   111,    -1,   148,   149,   150,   151,   152,    -1,    -1,
     155,   156,   100,   158,   159,   160,   161,   162,   163,    -1,
     165,    -1,    53,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,   100,   120,    -1,    -1,   145,   146,   147,    -1,    -1,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
     148,   149,   150,   151,   152,   134,   135,   155,   156,    -1,
     158,   159,   160,   161,   162,   163,    -1,   165,    -1,   148,
     149,   150,   151,   152,    -1,    -1,   155,   156,    -1,   158,
     159,   160,   161,   162,   163,    -1,   165,   128,    -1,    24,
      -1,    -1,    -1,   134,    29,    -1,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
     151,   152,    -1,    -1,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      62,    86,    90,   105,   111,   145,   146,   147,   174,   175,
     176,   177,   181,   183,   185,   186,   190,   191,   192,   202,
     204,   205,   206,   208,   211,   276,   277,    26,     3,   269,
       3,     3,   269,    70,    79,   109,    93,    93,    97,   268,
     269,   269,    70,    79,   109,    19,    59,     3,   278,   279,
     144,   182,   182,   182,     0,   170,   283,   111,   178,   178,
      57,   167,   214,   215,   219,     3,   169,   167,    93,   126,
     193,   193,   193,   269,     3,   187,   269,   122,    93,   132,
     126,   203,   203,   203,   269,   124,   171,   176,    96,   123,
     231,   214,   215,     9,    44,    80,   216,   217,    76,   216,
     227,     3,     4,     5,     6,   103,   142,   143,   172,   234,
     235,   256,   257,   258,   259,   260,   261,   262,     4,   184,
     120,     3,   270,   269,   269,    82,   224,    92,   167,   207,
       3,   209,   210,   188,   257,   188,    45,     3,   271,   269,
     269,   214,   279,   167,   260,    12,   220,   168,   168,   212,
     213,   214,   219,   113,   218,   125,   212,    54,    72,   232,
     168,   171,    45,   130,    93,   124,   167,   207,     3,    45,
      46,    47,    84,   120,   133,   159,   160,   167,   237,   238,
     239,   240,   241,   242,   243,   244,   246,   247,   248,   249,
     250,   252,   253,   254,   255,   256,   188,     3,   284,    63,
     215,   148,   171,   224,   111,   189,   189,   130,     3,   179,
     180,   221,   233,   236,   237,   227,   216,   228,   229,   237,
     227,   237,   113,   237,   256,   269,     3,   211,     3,   194,
     195,   124,   167,   169,   167,   167,   167,   110,   237,   245,
      45,   120,   238,   165,   238,   215,   237,   114,   131,    17,
      53,   100,   120,   127,   128,   134,   135,   148,   149,   150,
     151,   152,   155,   156,   158,   159,   160,   161,   162,   163,
     165,    97,   168,   171,   167,   237,   210,    48,   269,   167,
     168,   171,    93,   222,   223,   171,     3,   124,   274,   275,
     232,   212,   171,    89,   115,   230,   232,    54,    54,   167,
      92,    24,    29,    31,    32,    34,    42,    68,    85,    87,
      88,   102,   106,   108,   118,   196,   171,   200,   201,   211,
     168,   220,     3,   160,   215,   136,   137,   138,   139,   140,
     141,   251,   237,   237,   245,    91,   110,   116,   167,   120,
     233,   168,   168,   237,   237,   238,   238,   100,   127,   167,
     103,   120,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   260,   269,     3,
     235,   187,   235,   180,   167,   263,   264,   265,   266,   267,
     269,   280,   224,   236,     3,   229,   237,   237,   284,   188,
      30,   167,   197,   167,   167,   103,   120,   198,    27,    60,
     195,   168,   171,   201,   233,   168,    93,   124,   107,    91,
     116,   237,   237,   215,   166,   114,   238,   167,   215,   233,
     103,   166,   168,   168,   211,    25,    66,    71,    77,    78,
      94,    99,   281,   171,   124,   272,   273,   274,    69,   225,
     168,   167,     6,     6,     6,   103,    27,    60,   199,   119,
     167,   168,   237,   196,   237,   237,   116,   107,   168,   238,
     215,   233,   168,   168,   168,    98,    77,    77,    77,    98,
     264,     3,   125,     6,   168,   171,   168,   168,   119,   167,
     284,   168,   168,   116,   237,   168,   168,   273,   265,   264,
     167,   233,   168,     6,   284,   168,    81,   130,   284,    50,
     226,   168,   168,   167,   237,   282,   168,   237,     3,   255,
     168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   173,   174,   175,   175,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   182,   182,
     183,   184,   185,   185,   186,   186,   187,   188,   189,   189,
     190,   191,   191,   191,   192,   192,   192,   192,   192,   193,
     193,   194,   194,   195,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   197,   197,
     197,   198,   198,   198,   199,   199,   199,   200,   200,   200,
     201,   201,   202,   202,   202,   202,   203,   203,   204,   205,
     206,   206,   207,   207,   208,   209,   209,   210,   211,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     217,   217,   217,   218,   218,   219,   220,   220,   221,   222,
     222,   223,   224,   224,   225,   225,   226,   226,   227,   227,
     228,   228,   229,   230,   230,   230,   231,   231,   232,   232,
     232,   232,   232,   232,   233,   233,   234,   234,   235,   235,
     236,   237,   237,   237,   237,   237,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   239,   239,   240,
     240,   240,   240,   240,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   242,   242,   243,   243,   243,
     243,   244,   244,   244,   244,   245,   245,   246,   246,   247,
     247,   247,   247,   247,   247,   247,   248,   248,   249,   250,
     251,   251,   251,   251,   251,   251,   252,   253,   254,   255,
     255,   255,   255,   256,   256,   256,   256,   256,   257,   258,
     258,   259,   259,   260,   261,   262,   263,   263,   264,   264,
     265,   265,   266,   266,   267,   268,   269,   269,   270,   270,
     271,   272,   272,   273,   273,   274,   274,   275,   275,   276,
     276,   277,   278,   278,   279,   280,   280,   280,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   282,   283,
     283,   284,   284
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     8,     6,     9,     7,     3,
       0,     1,     3,     4,     1,     1,     1,     1,     2,     1,
       1,     4,     5,     4,     1,     1,     1,     1,     5,     3,
       0,     1,     2,     0,     2,     1,     0,     1,     2,     0,
       6,     5,     4,     4,     3,     6,     2,     0,     4,     2,
       8,     5,     3,     0,     5,     1,     3,     3,     2,     2,
       6,     1,     1,     1,     3,     3,     3,     3,     5,     2,
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
       1,     1,     1,     1,     1,     1,     4,     4,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     4,     1,     3,     2,     1,     1,     3,     1,     0,
       1,     1,     5,     1,     0,     2,     1,     1,     0,     1,
       0,     2,     1,     3,     3,     4,     6,     8,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     0,     1,     1,
       0,     1,     3
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
#line 153 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1971 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 153 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1977 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 151 "bison_parser.y"
            { }
#line 1983 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 151 "bison_parser.y"
            { }
#line 1989 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 2002 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2008 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2014 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2027 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2040 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2046 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2052 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2058 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 153 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2064 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2070 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2076 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 151 "bison_parser.y"
            { }
#line 2082 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 153 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2088 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 151 "bison_parser.y"
            { }
#line 2094 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2100 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2106 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2112 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 151 "bison_parser.y"
            { }
#line 2118 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_commalist: /* column_def_commalist  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2131 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2137 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 151 "bison_parser.y"
            { }
#line 2143 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 151 "bison_parser.y"
            { }
#line 2149 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 151 "bison_parser.y"
            { }
#line 2155 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraint: /* opt_column_constraint  */
#line 151 "bison_parser.y"
            { }
#line 2161 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_key_constraints: /* opt_table_key_constraints  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table_key_constraint_vec)); }
#line 2167 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_key_constraint: /* table_key_constraint  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table_key_constraint_t)); }
#line 2173 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2179 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 151 "bison_parser.y"
            { }
#line 2185 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2191 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2197 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2203 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2216 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2222 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2235 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2241 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2247 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2253 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2259 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2265 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2271 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2277 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2283 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 151 "bison_parser.y"
            { }
#line 2289 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2295 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 151 "bison_parser.y"
            { }
#line 2301 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2314 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2320 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2326 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2332 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2338 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2344 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2357 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2370 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2376 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 151 "bison_parser.y"
            { }
#line 2382 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2388 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2394 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2407 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2420 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2433 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2439 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2445 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2451 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2457 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2463 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2469 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2475 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2481 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2487 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2493 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2499 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2505 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2511 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2517 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2523 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 151 "bison_parser.y"
            { }
#line 2529 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2535 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2541 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2547 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2553 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2559 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2565 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2571 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2577 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2583 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2589 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2595 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2601 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2607 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2613 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2626 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2632 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2638 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 152 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2644 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 153 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2650 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_name: /* index_name  */
#line 153 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2656 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2662 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2668 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2674 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2680 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2686 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2692 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2698 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2704 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2710 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 151 "bison_parser.y"
            { }
#line 2716 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 162 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2722 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 154 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2735 "bison_parser.cpp"
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

#line 2842 "bison_parser.cpp"

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
#line 279 "bison_parser.y"
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
#line 3070 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 300 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3081 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 306 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3092 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 315 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3101 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 319 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3110 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 323 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3118 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 326 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3126 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 329 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3134 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 336 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3140 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 337 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3146 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 338 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3152 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 339 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3158 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 340 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3164 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 341 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3170 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 342 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3176 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: execute_statement  */
#line 343 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3182 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: transaction_statement  */
#line 344 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3188 "bison_parser.cpp"
    break;

  case 19: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 353 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3194 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: %empty  */
#line 354 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3200 "bison_parser.cpp"
    break;

  case 21: /* hint_list: hint  */
#line 359 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3206 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint_list ',' hint  */
#line 360 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3212 "bison_parser.cpp"
    break;

  case 23: /* hint: IDENTIFIER  */
#line 364 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3221 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 368 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3231 "bison_parser.cpp"
    break;

  case 25: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 380 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3239 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 383 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3247 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 386 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3255 "bison_parser.cpp"
    break;

  case 30: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 400 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3265 "bison_parser.cpp"
    break;

  case 32: /* execute_statement: EXECUTE IDENTIFIER  */
#line 410 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3274 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 414 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3284 "bison_parser.cpp"
    break;

  case 34: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 428 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3295 "bison_parser.cpp"
    break;

  case 35: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 434 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3306 "bison_parser.cpp"
    break;

  case 36: /* file_type: IDENTIFIER  */
#line 443 "bison_parser.y"
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
#line 3325 "bison_parser.cpp"
    break;

  case 37: /* file_path: string_literal  */
#line 460 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3331 "bison_parser.cpp"
    break;

  case 38: /* opt_file_type: WITH FORMAT file_type  */
#line 464 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3339 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: %empty  */
#line 467 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3345 "bison_parser.cpp"
    break;

  case 40: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 476 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3356 "bison_parser.cpp"
    break;

  case 41: /* show_statement: SHOW TABLES  */
#line 490 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3364 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW COLUMNS table_name  */
#line 493 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3374 "bison_parser.cpp"
    break;

  case 43: /* show_statement: DESCRIBE table_name  */
#line 498 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3384 "bison_parser.cpp"
    break;

  case 44: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 512 "bison_parser.y"
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
#line 3402 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name '(' column_def_commalist opt_table_key_constraints ')'  */
#line 525 "bison_parser.y"
                                                                                                              {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-2].column_vec);
			(yyval.create_stmt)->tableKeyConstraints = (yyvsp[-1].table_key_constraint_vec);
		}
#line 3415 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 533 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3427 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 540 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-5].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3439 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 547 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3452 "bison_parser.cpp"
    break;

  case 49: /* opt_not_exists: IF NOT EXISTS  */
#line 558 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3458 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: %empty  */
#line 559 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3464 "bison_parser.cpp"
    break;

  case 51: /* column_def_commalist: column_def  */
#line 563 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3470 "bison_parser.cpp"
    break;

  case 52: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 564 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3476 "bison_parser.cpp"
    break;

  case 53: /* column_def: IDENTIFIER column_type opt_column_nullable opt_column_constraint  */
#line 568 "bison_parser.y"
                                                                                {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-3].sval), (yyvsp[-2].column_type_t), (yyvsp[-1].bval), (yyvsp[0].column_constraint_t));
		}
#line 3484 "bison_parser.cpp"
    break;

  case 54: /* column_type: INT  */
#line 574 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3490 "bison_parser.cpp"
    break;

  case 55: /* column_type: INTEGER  */
#line 575 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3496 "bison_parser.cpp"
    break;

  case 56: /* column_type: LONG  */
#line 576 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3502 "bison_parser.cpp"
    break;

  case 57: /* column_type: FLOAT  */
#line 577 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3508 "bison_parser.cpp"
    break;

  case 58: /* column_type: DECIMAL opt_decimal_specification  */
#line 578 "bison_parser.y"
                                              { (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].decimal_specification_t)}; }
#line 3514 "bison_parser.cpp"
    break;

  case 59: /* column_type: DOUBLE  */
#line 579 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3520 "bison_parser.cpp"
    break;

  case 60: /* column_type: REAL  */
#line 580 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3526 "bison_parser.cpp"
    break;

  case 61: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 581 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3532 "bison_parser.cpp"
    break;

  case 62: /* column_type: CHARACTER VARYING '(' INTVAL ')'  */
#line 582 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3538 "bison_parser.cpp"
    break;

  case 63: /* column_type: CHAR '(' INTVAL ')'  */
#line 583 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3544 "bison_parser.cpp"
    break;

  case 64: /* column_type: TEXT  */
#line 584 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3550 "bison_parser.cpp"
    break;

  case 65: /* column_type: TIME  */
#line 585 "bison_parser.y"
                 { (yyval.column_type_t) = ColumnType{DataType::TIME}; }
#line 3556 "bison_parser.cpp"
    break;

  case 66: /* column_type: DATETIME  */
#line 586 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3562 "bison_parser.cpp"
    break;

  case 67: /* column_type: DATE  */
#line 587 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3568 "bison_parser.cpp"
    break;

  case 68: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 591 "bison_parser.y"
                                  { (yyval.decimal_specification_t) = DecimalSpecification{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3574 "bison_parser.cpp"
    break;

  case 69: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 592 "bison_parser.y"
                       { (yyval.decimal_specification_t) = DecimalSpecification{(yyvsp[-1].ival), 0}; }
#line 3580 "bison_parser.cpp"
    break;

  case 70: /* opt_decimal_specification: %empty  */
#line 593 "bison_parser.y"
                    { (yyval.decimal_specification_t) = DecimalSpecification{0, 0}; }
#line 3586 "bison_parser.cpp"
    break;

  case 71: /* opt_column_nullable: NULL  */
#line 596 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3592 "bison_parser.cpp"
    break;

  case 72: /* opt_column_nullable: NOT NULL  */
#line 597 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3598 "bison_parser.cpp"
    break;

  case 73: /* opt_column_nullable: %empty  */
#line 598 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3604 "bison_parser.cpp"
    break;

  case 74: /* opt_column_constraint: PRIMARY KEY  */
#line 602 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::PRIMARY_KEY; }
#line 3610 "bison_parser.cpp"
    break;

  case 75: /* opt_column_constraint: UNIQUE  */
#line 603 "bison_parser.y"
               { (yyval.column_constraint_t) = ConstraintType::UNIQUE; }
#line 3616 "bison_parser.cpp"
    break;

  case 76: /* opt_column_constraint: %empty  */
#line 604 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::NOT_SET; }
#line 3622 "bison_parser.cpp"
    break;

  case 77: /* opt_table_key_constraints: table_key_constraint  */
#line 608 "bison_parser.y"
                                     {(yyval.table_key_constraint_vec) = new std::vector<TableKeyConstraint*>(); (yyval.table_key_constraint_vec)->push_back((yyvsp[0].table_key_constraint_t)); }
#line 3628 "bison_parser.cpp"
    break;

  case 78: /* opt_table_key_constraints: opt_table_key_constraints table_key_constraint  */
#line 609 "bison_parser.y"
                                                               {  (yyvsp[-1].table_key_constraint_vec)->push_back((yyvsp[0].table_key_constraint_t)); (yyval.table_key_constraint_vec) = (yyvsp[-1].table_key_constraint_vec); }
#line 3634 "bison_parser.cpp"
    break;

  case 79: /* opt_table_key_constraints: %empty  */
#line 610 "bison_parser.y"
                            {(yyval.table_key_constraint_vec) = new std::vector<TableKeyConstraint*>(); }
#line 3640 "bison_parser.cpp"
    break;

  case 80: /* table_key_constraint: ',' PRIMARY KEY '(' ident_commalist ')'  */
#line 614 "bison_parser.y"
                                                 { (yyval.table_key_constraint_t) = new TableKeyConstraint(ConstraintType::PRIMARY_KEY, (yyvsp[-1].str_vec)); }
#line 3646 "bison_parser.cpp"
    break;

  case 81: /* table_key_constraint: ',' UNIQUE '(' ident_commalist ')'  */
#line 615 "bison_parser.y"
                                            { (yyval.table_key_constraint_t) = new TableKeyConstraint(ConstraintType::UNIQUE, (yyvsp[-1].str_vec)); }
#line 3652 "bison_parser.cpp"
    break;

  case 82: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 623 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3663 "bison_parser.cpp"
    break;

  case 83: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 629 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3674 "bison_parser.cpp"
    break;

  case 84: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 635 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3684 "bison_parser.cpp"
    break;

  case 85: /* drop_statement: DROP INDEX opt_exists index_name ON table_name  */
#line 640 "bison_parser.y"
                                                               {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
    			(yyval.drop_stmt)->ifExists = (yyvsp[-3].bval);
    			(yyval.drop_stmt)->index_name = (yyvsp[-2].sval);
    		}
#line 3695 "bison_parser.cpp"
    break;

  case 86: /* opt_exists: IF EXISTS  */
#line 649 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3701 "bison_parser.cpp"
    break;

  case 87: /* opt_exists: %empty  */
#line 650 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3707 "bison_parser.cpp"
    break;

  case 88: /* delete_statement: DELETE FROM table_name opt_where  */
#line 659 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3718 "bison_parser.cpp"
    break;

  case 89: /* truncate_statement: TRUNCATE table_name  */
#line 668 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3728 "bison_parser.cpp"
    break;

  case 90: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 681 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3740 "bison_parser.cpp"
    break;

  case 91: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 688 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3752 "bison_parser.cpp"
    break;

  case 92: /* opt_column_list: '(' ident_commalist ')'  */
#line 699 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3758 "bison_parser.cpp"
    break;

  case 93: /* opt_column_list: %empty  */
#line 700 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3764 "bison_parser.cpp"
    break;

  case 94: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 710 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3775 "bison_parser.cpp"
    break;

  case 95: /* update_clause_commalist: update_clause  */
#line 719 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3781 "bison_parser.cpp"
    break;

  case 96: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 720 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3787 "bison_parser.cpp"
    break;

  case 97: /* update_clause: IDENTIFIER '=' expr  */
#line 724 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3797 "bison_parser.cpp"
    break;

  case 98: /* select_statement: opt_with_clause select_with_paren  */
#line 736 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3806 "bison_parser.cpp"
    break;

  case 99: /* select_statement: opt_with_clause select_no_paren  */
#line 740 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3815 "bison_parser.cpp"
    break;

  case 100: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 744 "bison_parser.y"
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
#line 3831 "bison_parser.cpp"
    break;

  case 103: /* select_within_set_operation_no_parentheses: select_clause  */
#line 762 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3837 "bison_parser.cpp"
    break;

  case 104: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 763 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3850 "bison_parser.cpp"
    break;

  case 105: /* select_with_paren: '(' select_no_paren ')'  */
#line 774 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3856 "bison_parser.cpp"
    break;

  case 106: /* select_with_paren: '(' select_with_paren ')'  */
#line 775 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3862 "bison_parser.cpp"
    break;

  case 107: /* select_no_paren: select_clause opt_order opt_limit  */
#line 779 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3877 "bison_parser.cpp"
    break;

  case 108: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 789 "bison_parser.y"
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
#line 3892 "bison_parser.cpp"
    break;

  case 109: /* set_operator: set_type opt_all  */
#line 802 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3901 "bison_parser.cpp"
    break;

  case 110: /* set_type: UNION  */
#line 809 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3910 "bison_parser.cpp"
    break;

  case 111: /* set_type: INTERSECT  */
#line 813 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3919 "bison_parser.cpp"
    break;

  case 112: /* set_type: EXCEPT  */
#line 817 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3928 "bison_parser.cpp"
    break;

  case 113: /* opt_all: ALL  */
#line 824 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3936 "bison_parser.cpp"
    break;

  case 114: /* opt_all: %empty  */
#line 827 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3944 "bison_parser.cpp"
    break;

  case 115: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 833 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3958 "bison_parser.cpp"
    break;

  case 116: /* opt_distinct: DISTINCT  */
#line 845 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3964 "bison_parser.cpp"
    break;

  case 117: /* opt_distinct: %empty  */
#line 846 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3970 "bison_parser.cpp"
    break;

  case 119: /* opt_from_clause: from_clause  */
#line 854 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3976 "bison_parser.cpp"
    break;

  case 120: /* opt_from_clause: %empty  */
#line 855 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3982 "bison_parser.cpp"
    break;

  case 121: /* from_clause: FROM table_ref  */
#line 859 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3988 "bison_parser.cpp"
    break;

  case 122: /* opt_where: WHERE expr  */
#line 864 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3994 "bison_parser.cpp"
    break;

  case 123: /* opt_where: %empty  */
#line 865 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4000 "bison_parser.cpp"
    break;

  case 124: /* opt_group: GROUP BY expr_list opt_having  */
#line 869 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4010 "bison_parser.cpp"
    break;

  case 125: /* opt_group: %empty  */
#line 874 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4016 "bison_parser.cpp"
    break;

  case 126: /* opt_having: HAVING expr  */
#line 878 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4022 "bison_parser.cpp"
    break;

  case 127: /* opt_having: %empty  */
#line 879 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4028 "bison_parser.cpp"
    break;

  case 128: /* opt_order: ORDER BY order_list  */
#line 883 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4034 "bison_parser.cpp"
    break;

  case 129: /* opt_order: %empty  */
#line 884 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4040 "bison_parser.cpp"
    break;

  case 130: /* order_list: order_desc  */
#line 888 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4046 "bison_parser.cpp"
    break;

  case 131: /* order_list: order_list ',' order_desc  */
#line 889 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4052 "bison_parser.cpp"
    break;

  case 132: /* order_desc: expr opt_order_type  */
#line 893 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4058 "bison_parser.cpp"
    break;

  case 133: /* opt_order_type: ASC  */
#line 897 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4064 "bison_parser.cpp"
    break;

  case 134: /* opt_order_type: DESC  */
#line 898 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4070 "bison_parser.cpp"
    break;

  case 135: /* opt_order_type: %empty  */
#line 899 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4076 "bison_parser.cpp"
    break;

  case 136: /* opt_top: TOP int_literal  */
#line 905 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4082 "bison_parser.cpp"
    break;

  case 137: /* opt_top: %empty  */
#line 906 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4088 "bison_parser.cpp"
    break;

  case 138: /* opt_limit: LIMIT expr  */
#line 910 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4094 "bison_parser.cpp"
    break;

  case 139: /* opt_limit: OFFSET expr  */
#line 911 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4100 "bison_parser.cpp"
    break;

  case 140: /* opt_limit: LIMIT expr OFFSET expr  */
#line 912 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4106 "bison_parser.cpp"
    break;

  case 141: /* opt_limit: LIMIT ALL  */
#line 913 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4112 "bison_parser.cpp"
    break;

  case 142: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 914 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4118 "bison_parser.cpp"
    break;

  case 143: /* opt_limit: %empty  */
#line 915 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4124 "bison_parser.cpp"
    break;

  case 144: /* expr_list: expr_alias  */
#line 922 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4130 "bison_parser.cpp"
    break;

  case 145: /* expr_list: expr_list ',' expr_alias  */
#line 923 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4136 "bison_parser.cpp"
    break;

  case 146: /* opt_literal_list: literal_list  */
#line 927 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4142 "bison_parser.cpp"
    break;

  case 147: /* opt_literal_list: %empty  */
#line 928 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4148 "bison_parser.cpp"
    break;

  case 148: /* literal_list: literal  */
#line 932 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4154 "bison_parser.cpp"
    break;

  case 149: /* literal_list: literal_list ',' literal  */
#line 933 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4160 "bison_parser.cpp"
    break;

  case 150: /* expr_alias: expr opt_alias  */
#line 937 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4172 "bison_parser.cpp"
    break;

  case 156: /* operand: '(' expr ')'  */
#line 955 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4178 "bison_parser.cpp"
    break;

  case 166: /* operand: '(' select_no_paren ')'  */
#line 965 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4184 "bison_parser.cpp"
    break;

  case 169: /* unary_expr: '-' operand  */
#line 974 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4190 "bison_parser.cpp"
    break;

  case 170: /* unary_expr: NOT operand  */
#line 975 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4196 "bison_parser.cpp"
    break;

  case 171: /* unary_expr: operand ISNULL  */
#line 976 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4202 "bison_parser.cpp"
    break;

  case 172: /* unary_expr: operand IS NULL  */
#line 977 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4208 "bison_parser.cpp"
    break;

  case 173: /* unary_expr: operand IS NOT NULL  */
#line 978 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4214 "bison_parser.cpp"
    break;

  case 175: /* binary_expr: operand '-' operand  */
#line 983 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4220 "bison_parser.cpp"
    break;

  case 176: /* binary_expr: operand '+' operand  */
#line 984 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4226 "bison_parser.cpp"
    break;

  case 177: /* binary_expr: operand '/' operand  */
#line 985 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4232 "bison_parser.cpp"
    break;

  case 178: /* binary_expr: operand '*' operand  */
#line 986 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4238 "bison_parser.cpp"
    break;

  case 179: /* binary_expr: operand '%' operand  */
#line 987 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4244 "bison_parser.cpp"
    break;

  case 180: /* binary_expr: operand '^' operand  */
#line 988 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4250 "bison_parser.cpp"
    break;

  case 181: /* binary_expr: operand LIKE operand  */
#line 989 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4256 "bison_parser.cpp"
    break;

  case 182: /* binary_expr: operand NOT LIKE operand  */
#line 990 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4262 "bison_parser.cpp"
    break;

  case 183: /* binary_expr: operand ILIKE operand  */
#line 991 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4268 "bison_parser.cpp"
    break;

  case 184: /* binary_expr: operand CONCAT operand  */
#line 992 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4274 "bison_parser.cpp"
    break;

  case 185: /* logic_expr: expr AND expr  */
#line 996 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4280 "bison_parser.cpp"
    break;

  case 186: /* logic_expr: expr OR expr  */
#line 997 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4286 "bison_parser.cpp"
    break;

  case 187: /* in_expr: operand IN '(' expr_list ')'  */
#line 1001 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4292 "bison_parser.cpp"
    break;

  case 188: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1002 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4298 "bison_parser.cpp"
    break;

  case 189: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1003 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4304 "bison_parser.cpp"
    break;

  case 190: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1004 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4310 "bison_parser.cpp"
    break;

  case 191: /* case_expr: CASE expr case_list END  */
#line 1010 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4316 "bison_parser.cpp"
    break;

  case 192: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1011 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4322 "bison_parser.cpp"
    break;

  case 193: /* case_expr: CASE case_list END  */
#line 1012 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4328 "bison_parser.cpp"
    break;

  case 194: /* case_expr: CASE case_list ELSE expr END  */
#line 1013 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4334 "bison_parser.cpp"
    break;

  case 195: /* case_list: WHEN expr THEN expr  */
#line 1017 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4340 "bison_parser.cpp"
    break;

  case 196: /* case_list: case_list WHEN expr THEN expr  */
#line 1018 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4346 "bison_parser.cpp"
    break;

  case 197: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1022 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4352 "bison_parser.cpp"
    break;

  case 198: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1023 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4358 "bison_parser.cpp"
    break;

  case 199: /* comp_expr: operand '=' operand  */
#line 1027 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4364 "bison_parser.cpp"
    break;

  case 200: /* comp_expr: operand EQUALS operand  */
#line 1028 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4370 "bison_parser.cpp"
    break;

  case 201: /* comp_expr: operand NOTEQUALS operand  */
#line 1029 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4376 "bison_parser.cpp"
    break;

  case 202: /* comp_expr: operand '<' operand  */
#line 1030 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4382 "bison_parser.cpp"
    break;

  case 203: /* comp_expr: operand '>' operand  */
#line 1031 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4388 "bison_parser.cpp"
    break;

  case 204: /* comp_expr: operand LESSEQ operand  */
#line 1032 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4394 "bison_parser.cpp"
    break;

  case 205: /* comp_expr: operand GREATEREQ operand  */
#line 1033 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4400 "bison_parser.cpp"
    break;

  case 206: /* function_expr: IDENTIFIER '(' ')'  */
#line 1037 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4406 "bison_parser.cpp"
    break;

  case 207: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1038 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4412 "bison_parser.cpp"
    break;

  case 208: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1042 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4418 "bison_parser.cpp"
    break;

  case 209: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1046 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4424 "bison_parser.cpp"
    break;

  case 210: /* datetime_field: SECOND  */
#line 1050 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4430 "bison_parser.cpp"
    break;

  case 211: /* datetime_field: MINUTE  */
#line 1051 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4436 "bison_parser.cpp"
    break;

  case 212: /* datetime_field: HOUR  */
#line 1052 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4442 "bison_parser.cpp"
    break;

  case 213: /* datetime_field: DAY  */
#line 1053 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4448 "bison_parser.cpp"
    break;

  case 214: /* datetime_field: MONTH  */
#line 1054 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4454 "bison_parser.cpp"
    break;

  case 215: /* datetime_field: YEAR  */
#line 1055 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4460 "bison_parser.cpp"
    break;

  case 216: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1059 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4466 "bison_parser.cpp"
    break;

  case 217: /* array_index: operand '[' int_literal ']'  */
#line 1063 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4472 "bison_parser.cpp"
    break;

  case 218: /* between_expr: operand BETWEEN operand AND operand  */
#line 1067 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4478 "bison_parser.cpp"
    break;

  case 219: /* column_name: IDENTIFIER  */
#line 1071 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4484 "bison_parser.cpp"
    break;

  case 220: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1072 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4490 "bison_parser.cpp"
    break;

  case 221: /* column_name: '*'  */
#line 1073 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4496 "bison_parser.cpp"
    break;

  case 222: /* column_name: IDENTIFIER '.' '*'  */
#line 1074 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4502 "bison_parser.cpp"
    break;

  case 228: /* string_literal: STRING  */
#line 1086 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4508 "bison_parser.cpp"
    break;

  case 229: /* bool_literal: TRUE  */
#line 1090 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4514 "bison_parser.cpp"
    break;

  case 230: /* bool_literal: FALSE  */
#line 1091 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4520 "bison_parser.cpp"
    break;

  case 231: /* num_literal: FLOATVAL  */
#line 1095 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4526 "bison_parser.cpp"
    break;

  case 233: /* int_literal: INTVAL  */
#line 1100 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4532 "bison_parser.cpp"
    break;

  case 234: /* null_literal: NULL  */
#line 1104 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4538 "bison_parser.cpp"
    break;

  case 235: /* param_expr: '?'  */
#line 1108 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4548 "bison_parser.cpp"
    break;

  case 237: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1121 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4559 "bison_parser.cpp"
    break;

  case 241: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1137 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4570 "bison_parser.cpp"
    break;

  case 242: /* table_ref_commalist: table_ref_atomic  */
#line 1146 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4576 "bison_parser.cpp"
    break;

  case 243: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1147 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4582 "bison_parser.cpp"
    break;

  case 244: /* table_ref_name: table_name opt_table_alias  */
#line 1152 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4594 "bison_parser.cpp"
    break;

  case 245: /* table_ref_name_no_alias: table_name  */
#line 1163 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4604 "bison_parser.cpp"
    break;

  case 246: /* table_name: IDENTIFIER  */
#line 1172 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4610 "bison_parser.cpp"
    break;

  case 247: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1173 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4616 "bison_parser.cpp"
    break;

  case 248: /* opt_index_name: IDENTIFIER  */
#line 1177 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4622 "bison_parser.cpp"
    break;

  case 249: /* opt_index_name: %empty  */
#line 1178 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4628 "bison_parser.cpp"
    break;

  case 250: /* index_name: IDENTIFIER  */
#line 1182 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4634 "bison_parser.cpp"
    break;

  case 252: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1188 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4640 "bison_parser.cpp"
    break;

  case 254: /* opt_table_alias: %empty  */
#line 1194 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4646 "bison_parser.cpp"
    break;

  case 255: /* alias: AS IDENTIFIER  */
#line 1199 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4652 "bison_parser.cpp"
    break;

  case 256: /* alias: IDENTIFIER  */
#line 1200 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4658 "bison_parser.cpp"
    break;

  case 258: /* opt_alias: %empty  */
#line 1206 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4664 "bison_parser.cpp"
    break;

  case 260: /* opt_with_clause: %empty  */
#line 1216 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4670 "bison_parser.cpp"
    break;

  case 261: /* with_clause: WITH with_description_list  */
#line 1220 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4676 "bison_parser.cpp"
    break;

  case 262: /* with_description_list: with_description  */
#line 1224 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4685 "bison_parser.cpp"
    break;

  case 263: /* with_description_list: with_description_list ',' with_description  */
#line 1228 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4694 "bison_parser.cpp"
    break;

  case 264: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1235 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4704 "bison_parser.cpp"
    break;

  case 265: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1249 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4716 "bison_parser.cpp"
    break;

  case 266: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1257 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4729 "bison_parser.cpp"
    break;

  case 267: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1267 "bison_parser.y"
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
#line 4749 "bison_parser.cpp"
    break;

  case 268: /* opt_join_type: INNER  */
#line 1285 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4755 "bison_parser.cpp"
    break;

  case 269: /* opt_join_type: LEFT OUTER  */
#line 1286 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4761 "bison_parser.cpp"
    break;

  case 270: /* opt_join_type: LEFT  */
#line 1287 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4767 "bison_parser.cpp"
    break;

  case 271: /* opt_join_type: RIGHT OUTER  */
#line 1288 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4773 "bison_parser.cpp"
    break;

  case 272: /* opt_join_type: RIGHT  */
#line 1289 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4779 "bison_parser.cpp"
    break;

  case 273: /* opt_join_type: FULL OUTER  */
#line 1290 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4785 "bison_parser.cpp"
    break;

  case 274: /* opt_join_type: OUTER  */
#line 1291 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4791 "bison_parser.cpp"
    break;

  case 275: /* opt_join_type: FULL  */
#line 1292 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4797 "bison_parser.cpp"
    break;

  case 276: /* opt_join_type: CROSS  */
#line 1293 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4803 "bison_parser.cpp"
    break;

  case 277: /* opt_join_type: %empty  */
#line 1294 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4809 "bison_parser.cpp"
    break;

  case 281: /* ident_commalist: IDENTIFIER  */
#line 1314 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4815 "bison_parser.cpp"
    break;

  case 282: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1315 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4821 "bison_parser.cpp"
    break;


#line 4825 "bison_parser.cpp"

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

#line 1318 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
