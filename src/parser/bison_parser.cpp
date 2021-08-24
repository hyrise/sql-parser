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
  YYSYMBOL_opt_time_specification = 197,   /* opt_time_specification  */
  YYSYMBOL_opt_decimal_specification = 198, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_nullable = 199,      /* opt_column_nullable  */
  YYSYMBOL_opt_column_constraint = 200,    /* opt_column_constraint  */
  YYSYMBOL_opt_table_constraints = 201,    /* opt_table_constraints  */
  YYSYMBOL_table_constraint = 202,         /* table_constraint  */
  YYSYMBOL_drop_statement = 203,           /* drop_statement  */
  YYSYMBOL_opt_exists = 204,               /* opt_exists  */
  YYSYMBOL_alter_statement = 205,          /* alter_statement  */
  YYSYMBOL_delete_statement = 206,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 207,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 208,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 209,          /* opt_column_list  */
  YYSYMBOL_update_statement = 210,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 211,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 212,            /* update_clause  */
  YYSYMBOL_select_statement = 213,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 214, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 215, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 216,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 217,          /* select_no_paren  */
  YYSYMBOL_set_operator = 218,             /* set_operator  */
  YYSYMBOL_set_type = 219,                 /* set_type  */
  YYSYMBOL_opt_all = 220,                  /* opt_all  */
  YYSYMBOL_select_clause = 221,            /* select_clause  */
  YYSYMBOL_opt_distinct = 222,             /* opt_distinct  */
  YYSYMBOL_select_list = 223,              /* select_list  */
  YYSYMBOL_opt_from_clause = 224,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 225,              /* from_clause  */
  YYSYMBOL_opt_where = 226,                /* opt_where  */
  YYSYMBOL_opt_group = 227,                /* opt_group  */
  YYSYMBOL_opt_having = 228,               /* opt_having  */
  YYSYMBOL_opt_order = 229,                /* opt_order  */
  YYSYMBOL_order_list = 230,               /* order_list  */
  YYSYMBOL_order_desc = 231,               /* order_desc  */
  YYSYMBOL_opt_order_type = 232,           /* opt_order_type  */
  YYSYMBOL_opt_top = 233,                  /* opt_top  */
  YYSYMBOL_opt_limit = 234,                /* opt_limit  */
  YYSYMBOL_expr_list = 235,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 236,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 237,             /* literal_list  */
  YYSYMBOL_expr_alias = 238,               /* expr_alias  */
  YYSYMBOL_expr = 239,                     /* expr  */
  YYSYMBOL_operand = 240,                  /* operand  */
  YYSYMBOL_scalar_expr = 241,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 242,               /* unary_expr  */
  YYSYMBOL_binary_expr = 243,              /* binary_expr  */
  YYSYMBOL_logic_expr = 244,               /* logic_expr  */
  YYSYMBOL_in_expr = 245,                  /* in_expr  */
  YYSYMBOL_case_expr = 246,                /* case_expr  */
  YYSYMBOL_case_list = 247,                /* case_list  */
  YYSYMBOL_exists_expr = 248,              /* exists_expr  */
  YYSYMBOL_comp_expr = 249,                /* comp_expr  */
  YYSYMBOL_function_expr = 250,            /* function_expr  */
  YYSYMBOL_extract_expr = 251,             /* extract_expr  */
  YYSYMBOL_cast_expr = 252,                /* cast_expr  */
  YYSYMBOL_datetime_field = 253,           /* datetime_field  */
  YYSYMBOL_array_expr = 254,               /* array_expr  */
  YYSYMBOL_array_index = 255,              /* array_index  */
  YYSYMBOL_between_expr = 256,             /* between_expr  */
  YYSYMBOL_column_name = 257,              /* column_name  */
  YYSYMBOL_literal = 258,                  /* literal  */
  YYSYMBOL_string_literal = 259,           /* string_literal  */
  YYSYMBOL_bool_literal = 260,             /* bool_literal  */
  YYSYMBOL_num_literal = 261,              /* num_literal  */
  YYSYMBOL_int_literal = 262,              /* int_literal  */
  YYSYMBOL_null_literal = 263,             /* null_literal  */
  YYSYMBOL_param_expr = 264,               /* param_expr  */
  YYSYMBOL_table_ref = 265,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 266,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 267, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 268,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 269,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 270,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 271,               /* table_name  */
  YYSYMBOL_opt_index_name = 272,           /* opt_index_name  */
  YYSYMBOL_index_name = 273,               /* index_name  */
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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  286
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  533

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
       0,   282,   282,   303,   309,   318,   322,   326,   329,   332,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     357,   358,   363,   364,   368,   372,   384,   387,   390,   396,
     397,   404,   411,   414,   418,   432,   438,   447,   464,   468,
     471,   480,   494,   497,   502,   516,   529,   537,   544,   551,
     562,   563,   567,   568,   572,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   595,
     596,   600,   601,   602,   606,   607,   608,   612,   613,   614,
     618,   619,   620,   624,   625,   633,   639,   645,   650,   659,
     660,   669,   684,   693,   706,   713,   724,   725,   735,   744,
     745,   749,   761,   765,   769,   783,   784,   787,   788,   799,
     800,   804,   814,   827,   834,   838,   842,   849,   852,   858,
     870,   871,   875,   879,   880,   884,   889,   890,   894,   899,
     903,   904,   908,   909,   913,   914,   918,   922,   923,   924,
     930,   931,   935,   936,   937,   938,   939,   940,   947,   948,
     952,   953,   957,   958,   962,   972,   973,   974,   975,   976,
     980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   994,   995,   999,  1000,  1001,  1002,  1003,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1021,
    1022,  1026,  1027,  1028,  1029,  1035,  1036,  1037,  1038,  1042,
    1043,  1047,  1048,  1052,  1053,  1054,  1055,  1056,  1057,  1058,
    1062,  1063,  1067,  1071,  1075,  1076,  1077,  1078,  1079,  1080,
    1084,  1088,  1092,  1096,  1097,  1098,  1099,  1103,  1104,  1105,
    1106,  1107,  1111,  1115,  1116,  1120,  1121,  1125,  1129,  1133,
    1145,  1146,  1156,  1157,  1161,  1162,  1171,  1172,  1177,  1188,
    1197,  1198,  1202,  1203,  1207,  1212,  1213,  1218,  1219,  1224,
    1225,  1230,  1231,  1240,  1241,  1245,  1249,  1253,  1260,  1273,
    1281,  1291,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,
    1318,  1319,  1324,  1333,  1334,  1339,  1340
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
  "opt_time_specification", "opt_decimal_specification",
  "opt_column_nullable", "opt_column_constraint", "opt_table_constraints",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
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

#define YYPACT_NINF (-396)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-284)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     539,   138,   171,   183,   215,   171,     9,   180,   192,   145,
     171,   213,   171,   119,    21,   291,   155,   155,   155,   304,
     139,  -396,   219,  -396,   219,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,   -37,  -396,   321,
     156,  -396,   164,   246,  -396,   218,   218,   218,   171,   353,
     171,   235,  -396,   171,   -50,   236,   236,   236,   171,  -396,
     237,   195,  -396,  -396,  -396,  -396,  -396,  -396,   508,  -396,
     277,  -396,  -396,   252,   -37,    28,  -396,    27,  -396,   381,
      12,   376,   267,   389,   171,   171,   311,  -396,   303,   230,
     393,   309,   397,   397,   357,   400,   171,   171,  -396,   239,
     291,  -396,   242,   398,   399,   244,   245,  -396,  -396,  -396,
     -37,   301,   293,   -37,    -5,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,   251,   250,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,   378,  -396,   297,   -63,   230,   200,
    -396,   397,   419,   109,   280,   -54,  -396,   391,   320,  -396,
     320,  -396,  -396,   305,  -396,  -396,  -396,  -396,   433,  -396,
    -396,   200,  -396,  -396,   363,  -396,  -396,    28,  -396,  -396,
     200,   363,   200,    89,  -396,  -396,    12,  -396,   171,   437,
     330,   439,   319,   110,   279,   281,   282,   154,   331,   285,
     342,  -396,   265,   -68,   377,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,   347,  -396,  -106,   286,  -396,   200,   393,  -396,   236,
     404,  -396,  -396,   171,   287,   -42,  -396,   354,   284,  -396,
      38,    -5,   -37,   288,  -396,    76,    -5,   -68,   402,   -25,
    -396,   290,   366,  -396,   745,   289,  -396,   330,     3,    18,
     408,   214,   200,   200,   129,    77,   294,   342,   567,   200,
      90,   298,   -48,   200,   200,   342,  -396,   342,     5,   300,
      91,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   398,   171,  -396,   465,
      12,   -68,  -396,    22,   353,  -396,    12,  -396,   433,    16,
     311,  -396,   200,  -396,   467,  -396,  -396,  -396,  -396,   200,
    -396,  -396,  -396,  -396,   200,   200,   419,   397,  -396,   441,
    -396,   312,   313,  -396,  -396,   314,  -396,  -396,  -396,  -396,
     315,  -396,   120,    24,    58,  -396,  -396,  -396,   200,  -396,
    -396,   308,  -396,  -396,  -396,  -396,  -396,  -396,   379,    -3,
      81,   125,   200,   200,  -396,   408,   383,    96,  -396,  -396,
    -396,   364,   514,   603,   342,   322,   265,  -396,   384,   323,
     603,   603,   603,   603,   639,   639,   639,   639,    90,    90,
     -89,   -89,   -89,   -87,   326,  -396,  -396,   107,   317,  -396,
    -396,   115,  -396,   330,  -396,   229,  -396,   324,  -396,    29,
    -396,   424,  -396,  -396,  -396,   -68,   -68,   130,  -396,   327,
     490,  -396,   493,   494,   500,  -396,  -396,   407,    37,   388,
     346,  -396,  -396,    42,  -396,   137,  -396,   200,   745,   200,
     200,  -396,    -4,   113,   348,  -396,   342,   603,   265,   349,
     147,  -396,  -396,  -396,  -396,   350,   421,  -396,  -396,  -396,
     443,   444,   445,   426,    16,   528,  -396,  -396,  -396,   416,
    -396,  -396,   537,   148,   382,   385,   387,  -396,   430,  -396,
    -396,   390,   419,  -396,   -46,   394,   -68,   149,  -396,   200,
    -396,   567,   395,   161,  -396,  -396,    29,    16,  -396,  -396,
    -396,    16,   292,   401,   200,   396,  -396,   545,  -396,  -396,
    -396,  -396,   419,   170,  -396,  -396,  -396,   -68,  -396,  -396,
    -396,  -396,   339,   419,   -15,  -396,   403,   203,  -396,   405,
     200,   211,   200,  -396,  -396,  -396,    22,   -68,  -396,  -396,
     -68,   406,  -396
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     264,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     284,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   263,     0,
     250,    93,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   249,     0,     0,    90,    90,    90,     0,    42,
       0,   265,   266,    29,    26,    28,    27,     1,   264,     2,
       0,     6,     5,   141,     0,   102,   103,   133,    87,     0,
     151,     0,     0,   253,     0,     0,   127,    37,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   121,     0,     0,   115,   116,   114,
       0,   118,     0,     0,   147,   251,   232,   235,   237,   238,
     233,   234,   239,     0,   150,   152,   227,   228,   229,   236,
     230,   231,    32,    31,     0,   252,     0,     0,    97,     0,
      92,     0,     0,     0,     0,   127,    99,     0,    40,    38,
      40,    89,   254,     0,    85,    86,   268,   267,     0,   140,
     120,     0,   110,   109,   133,   106,   105,   107,   117,   113,
       0,   133,     0,     0,   111,    34,     0,    50,     0,     0,
     264,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,   225,     0,   126,   155,   162,   163,   164,   157,   159,
     165,   158,   178,   166,   167,   168,   169,   161,   156,   171,
     172,     0,   285,     0,     0,    95,     0,     0,    98,    90,
       0,    36,    41,     0,    24,     0,    22,   124,   122,   148,
     262,   147,     0,   132,   134,   139,   147,   143,   145,   142,
     153,     0,     0,    47,     0,    82,    52,   264,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   174,     0,
     173,     0,     0,     0,     0,     0,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,   101,   100,     0,     0,    88,     0,    20,     0,     0,
     127,   123,     0,   260,     0,   261,   154,   104,   108,     0,
     138,   137,   136,   112,     0,     0,     0,     0,    56,     0,
      61,    73,     0,    60,    58,     0,    68,    67,    57,    65,
      70,    55,    76,     0,     0,    80,    49,   210,     0,   224,
     226,     0,   214,   215,   216,   217,   218,   219,     0,     0,
       0,     0,     0,     0,   197,     0,     0,     0,   170,   160,
     189,   190,     0,   185,     0,     0,     0,   176,     0,   188,
     187,   203,   204,   205,   206,   207,   208,   209,   180,   179,
     182,   181,   183,   184,     0,    35,   286,     0,   223,    91,
      39,     0,    23,   264,   125,   240,   242,     0,   244,   258,
     243,   129,   149,   259,   135,   146,   144,     0,    45,     0,
       0,    59,     0,     0,     0,    66,    74,     0,    79,     0,
       0,    53,    46,     0,    81,     0,   201,     0,     0,     0,
       0,   195,     0,     0,     0,   220,     0,   186,     0,     0,
       0,   177,   221,    94,    25,     0,     0,   280,   272,   278,
     276,   279,   274,     0,     0,     0,   257,   248,   255,     0,
     119,    48,     0,     0,     0,     0,     0,    75,     0,    78,
      54,     0,     0,   211,     0,     0,   199,     0,   198,     0,
     202,   222,     0,     0,   193,   191,   258,     0,   275,   277,
     273,     0,   241,   259,     0,     0,    72,     0,    62,    64,
      69,    77,     0,     0,   212,   213,   196,   200,   194,   192,
     245,   269,   281,     0,   131,    63,     0,     0,    84,     0,
       0,     0,     0,   128,    71,    83,     0,   282,   270,   256,
     130,     0,   271
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -396,  -396,  -396,   477,  -396,   532,  -396,   254,  -396,    73,
    -396,  -396,  -396,  -396,   264,   -83,   427,  -396,  -396,  -396,
     212,  -396,   233,   141,  -396,  -396,  -396,  -396,  -396,   247,
    -396,   -34,  -396,  -396,  -396,  -396,   438,  -396,  -396,   365,
    -174,   -69,  -396,     1,   -73,   -51,  -396,  -396,   -71,   332,
    -396,  -396,  -396,  -121,  -396,  -396,    46,  -396,   274,  -396,
    -396,    45,  -257,  -396,   -24,   283,  -139,  -134,  -396,  -396,
    -396,  -396,  -396,  -396,   333,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -290,   -75,   -84,  -396,  -396,   -90,
    -396,  -396,  -396,  -395,    97,  -396,  -396,  -396,     2,  -396,
    -396,  -396,   100,   358,  -396,  -396,  -396,  -396,   489,  -396,
    -396,  -396,  -396,  -305
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   225,   226,    23,    64,
      24,   133,    25,    26,    88,   148,   221,    27,    28,    29,
      83,   245,   246,   332,   415,   411,   418,   470,   334,   335,
      30,    95,    31,    32,    33,    34,   143,    35,   145,   146,
      36,   164,   165,   166,    76,   110,   111,   169,    77,   161,
     227,   300,   301,   140,   460,   523,   114,   233,   234,   312,
     104,   174,   228,   123,   124,   229,   230,   194,   195,   196,
     197,   198,   199,   200,   255,   201,   202,   203,   204,   205,
     348,   206,   207,   208,   209,   210,   126,   127,   128,   129,
     130,   131,   394,   395,   396,   397,   398,    51,   399,   136,
     153,   456,   457,   458,   306,    37,    38,    61,    62,   400,
     453,   528,    69,   213
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     193,   106,   357,   389,    41,   125,   243,    44,   149,   149,
     150,   407,    52,   159,    54,   160,   116,   117,   118,    40,
      73,   339,    96,    97,   218,   388,   113,   244,   139,   315,
     179,   235,   303,   237,   239,   522,   107,   107,    75,   167,
      58,   303,   167,    92,   171,   271,   263,   271,   254,   172,
      86,   419,    89,   262,   258,    91,   260,   149,   211,   492,
      98,   180,   288,   264,   468,   289,   263,   173,   263,   419,
     215,   108,   108,   336,   285,   105,   286,   291,   286,    45,
      59,   425,    93,   264,   420,   264,   137,   138,    46,   263,
      65,    66,   183,   116,   117,   118,   512,   469,   154,   155,
     156,   240,   420,   112,   181,   364,   264,   109,   109,   440,
     263,   263,   478,   349,   350,   119,   232,   217,    47,   261,
     359,   428,   504,   258,   360,   361,   297,   264,   264,   298,
      74,   362,   365,   363,   184,   185,   186,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   263,   455,   120,   121,   302,   183,   116,   117,
     118,   167,   304,   308,    39,   310,    73,   503,   352,   264,
     235,   337,   214,   187,    40,   405,   406,   341,   340,   401,
     241,   483,   191,   393,   122,   293,    42,   353,   429,    55,
     263,   311,   119,   354,   367,   263,   384,   517,    56,   184,
     185,   186,   238,   183,   116,   117,   118,   264,   521,   188,
     231,   368,   264,   432,   433,   125,   430,   236,    43,   445,
     479,   125,   189,   416,   271,   295,   422,   263,    57,   423,
     437,   120,   121,   149,   408,   353,   531,   514,   187,   253,
     417,   431,    50,   263,   264,   184,   185,   186,   190,   191,
     282,   283,   284,   285,   446,   286,   192,   119,    84,    85,
     264,   122,   435,   263,   253,   506,   387,   302,   183,   116,
     117,   118,   391,    48,   188,   443,   307,   248,   176,   249,
     264,   313,   434,   444,   187,    49,   176,   189,   474,   385,
     476,   477,    53,   439,    60,   447,   120,   121,   461,    63,
     448,   289,   481,   119,    67,   473,   449,   450,   302,    68,
     184,   185,   186,   190,   191,   485,   496,   446,   302,   497,
     188,   192,    73,   451,    78,    79,   122,  -281,   452,   509,
      70,    80,   302,   189,   183,   116,   117,   118,   518,    81,
     507,   289,   120,   121,    82,   183,   116,   117,   118,   187,
     342,   343,   344,   345,   346,   347,    87,    90,   447,   190,
     191,    99,    94,   448,   446,   482,   100,   192,   119,   449,
     450,   525,   122,   102,   289,   103,   256,   185,   186,   529,
     132,   527,   289,   530,   115,   188,   451,   134,   185,   186,
    -281,   452,   135,   139,   265,   141,   144,   142,   189,   147,
    -246,   116,   151,   152,   118,   447,    74,   120,   121,   158,
     448,   160,   162,   163,   168,   187,   449,   450,   170,   175,
     519,   176,   212,   177,   190,   191,   187,   178,   216,   219,
     266,   220,   192,   451,   119,   223,   224,   122,   452,   112,
     242,    15,   244,   247,   287,   119,   250,   299,   251,   252,
     259,   257,   294,   290,   296,   302,   314,   316,   317,   309,
     333,   355,   257,  -247,   189,    73,   358,   366,   386,   520,
     403,   409,   427,   120,   121,   189,   426,   267,   263,   410,
     412,   413,   414,   364,   120,   121,   249,   441,   286,   438,
     190,   191,   442,   459,   462,   454,   463,   268,   192,   464,
     465,   190,   191,   122,   269,   270,   466,   471,  -283,   192,
     467,   271,   272,   472,   122,     1,   480,   484,   486,   487,
     488,   489,   490,     2,   491,   273,   274,   275,   276,   277,
       3,   493,   278,   279,     4,   280,   281,   282,   283,   284,
     285,   494,   286,   495,     5,   101,     1,     6,     7,   501,
     498,   516,   392,   499,     2,   500,    72,   502,   390,     8,
       9,     3,   505,   508,   515,     4,   421,   266,   513,   475,
      10,   524,   526,    11,   532,     5,   182,   222,     6,     7,
     338,   424,   292,   404,   511,   402,   510,   351,   305,   157,
       8,     9,     0,     0,    12,     0,     0,     0,    13,     0,
       0,    10,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,    14,   267,     0,     0,     0,     0,    15,
     266,     0,     0,     0,     0,    12,     0,     0,   436,    13,
       0,     0,     0,     0,   356,     0,     0,     0,     0,     0,
       0,     0,   270,     0,    14,     0,     0,     0,   271,   272,
      15,     0,     0,    16,    17,    18,   266,     0,     0,     0,
       0,     0,   273,   274,   275,   276,   277,   267,     0,   278,
     279,     0,   280,   281,   282,   283,   284,   285,     0,   286,
       0,     0,     0,     0,    16,    17,    18,   356,     0,     0,
       0,     0,   266,     0,     0,   270,     0,     0,     0,     0,
       0,   271,   272,  -284,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,   274,   275,   276,   277,
       0,     0,   278,   279,     0,   280,   281,   282,   283,   284,
     285,   270,   286,     0,     0,     0,     0,   271,  -284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -284,  -284,  -284,   276,   277,     0,     0,   278,   279,
       0,   280,   281,   282,   283,   284,   285,   270,   286,   318,
       0,     0,     0,   271,   319,     0,   320,   321,     0,   322,
       0,     0,     0,     0,     0,     0,     0,   323,     0,     0,
    -284,  -284,     0,     0,  -284,  -284,     0,   280,   281,   282,
     283,   284,   285,     0,   286,     0,     0,     0,     0,     0,
       0,     0,     0,   324,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     325,     0,   326,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
       0,   329,     0,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   331
};

static const yytype_int16 yycheck[] =
{
     139,    74,   259,   293,     2,    80,   180,     5,    92,    93,
      93,   316,    10,   103,    12,    12,     4,     5,     6,     3,
      57,     3,    56,    57,   145,     3,    77,     3,    82,    54,
      93,   170,     3,   172,   173,    50,     9,     9,    37,   110,
      19,     3,   113,    93,   113,   134,   114,   134,   187,    54,
      48,    27,    50,   192,   188,    53,   190,   141,   141,   454,
      58,   124,   168,   131,    27,   171,   114,    72,   114,    27,
     143,    44,    44,   247,   163,    74,   165,   216,   165,    70,
      59,   338,   132,   131,    60,   131,    84,    85,    79,   114,
      17,    18,     3,     4,     5,     6,   491,    60,    96,    97,
      99,   176,    60,    76,   167,   100,   131,    80,    80,   366,
     114,   114,   116,   252,   253,   103,   167,   171,   109,   192,
     168,   124,   168,   257,   263,   264,   168,   131,   131,   171,
     167,   265,   127,   267,    45,    46,    47,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   114,   124,   142,   143,   171,     3,     4,     5,
       6,   232,   124,   232,    26,    89,    57,   472,    91,   131,
     309,   168,    63,    84,     3,   314,   315,   250,   160,   300,
     178,   438,   160,   167,   172,   219,     3,   110,   107,    70,
     114,   115,   103,   116,   103,   114,   286,   502,    79,    45,
      46,    47,   113,     3,     4,     5,     6,   131,   513,   120,
     164,   120,   131,   352,   353,   290,    91,   171,     3,   393,
     107,   296,   133,   103,   134,   223,   168,   114,   109,   171,
     364,   142,   143,   317,   317,   110,   526,   494,    84,   110,
     120,   116,    97,   114,   131,    45,    46,    47,   159,   160,
     160,   161,   162,   163,    25,   165,   167,   103,    46,    47,
     131,   172,   166,   114,   110,   116,   290,   171,     3,     4,
       5,     6,   296,    93,   120,   168,   231,   167,   171,   169,
     131,   236,   355,   168,    84,    93,   171,   133,   427,   287,
     429,   430,    79,   366,     3,    66,   142,   143,   168,   144,
      71,   171,   436,   103,     0,   168,    77,    78,   171,   170,
      45,    46,    47,   159,   160,   168,   168,    25,   171,   171,
     120,   167,    57,    94,     3,   169,   172,    98,    99,   168,
     111,   167,   171,   133,     3,     4,     5,     6,   168,    93,
     479,   171,   142,   143,   126,     3,     4,     5,     6,    84,
     136,   137,   138,   139,   140,   141,     3,   122,    66,   159,
     160,   124,   126,    71,    25,   438,   171,   167,   103,    77,
      78,   168,   172,    96,   171,   123,    45,    46,    47,   168,
       4,   520,   171,   522,     3,   120,    94,   120,    46,    47,
      98,    99,     3,    82,    17,    92,     3,   167,   133,    90,
     171,     4,    45,     3,     6,    66,   167,   142,   143,   167,
      71,    12,   168,   168,   113,    84,    77,    78,   125,   168,
      81,   171,     3,    45,   159,   160,    84,   130,   148,    38,
      53,   111,   167,    94,   103,   130,     3,   172,    99,    76,
       3,   111,     3,   124,    97,   103,   167,    93,   167,   167,
     165,   120,    48,   167,   167,   171,    54,   167,    92,   171,
     171,   167,   120,   171,   133,    57,   168,   167,     3,   130,
       3,    30,    93,   142,   143,   133,   168,   100,   114,   167,
     167,   167,   167,   100,   142,   143,   169,   103,   165,   167,
     159,   160,   166,    69,   167,   171,     6,   120,   167,     6,
       6,   159,   160,   172,   127,   128,     6,   119,     0,   167,
     103,   134,   135,   167,   172,     7,   168,   168,   168,    98,
      77,    77,    77,    15,    98,   148,   149,   150,   151,   152,
      22,     3,   155,   156,    26,   158,   159,   160,   161,   162,
     163,   125,   165,     6,    36,    68,     7,    39,    40,   119,
     168,     6,   298,   168,    15,   168,    24,   167,   294,    51,
      52,    22,   168,   168,   168,    26,   333,    53,   167,   428,
      62,   168,   167,    65,   168,    36,   138,   150,    39,    40,
     248,   334,   217,   309,   487,   302,   486,   254,   230,   100,
      51,    52,    -1,    -1,    86,    -1,    -1,    -1,    90,    -1,
      -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   100,    -1,    -1,    -1,    -1,   111,
      53,    -1,    -1,    -1,    -1,    86,    -1,    -1,   114,    90,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,    -1,   105,    -1,    -1,    -1,   134,   135,
     111,    -1,    -1,   145,   146,   147,    53,    -1,    -1,    -1,
      -1,    -1,   148,   149,   150,   151,   152,   100,    -1,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,    -1,   165,
      -1,    -1,    -1,    -1,   145,   146,   147,   120,    -1,    -1,
      -1,    -1,    53,    -1,    -1,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,   152,
      -1,    -1,   155,   156,    -1,   158,   159,   160,   161,   162,
     163,   128,   165,    -1,    -1,    -1,    -1,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,   150,   151,   152,    -1,    -1,   155,   156,
      -1,   158,   159,   160,   161,   162,   163,   128,   165,    24,
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
      62,    65,    86,    90,   105,   111,   145,   146,   147,   174,
     175,   176,   177,   181,   183,   185,   186,   190,   191,   192,
     203,   205,   206,   207,   208,   210,   213,   278,   279,    26,
       3,   271,     3,     3,   271,    70,    79,   109,    93,    93,
      97,   270,   271,    79,   271,    70,    79,   109,    19,    59,
       3,   280,   281,   144,   182,   182,   182,     0,   170,   285,
     111,   178,   178,    57,   167,   216,   217,   221,     3,   169,
     167,    93,   126,   193,   193,   193,   271,     3,   187,   271,
     122,   271,    93,   132,   126,   204,   204,   204,   271,   124,
     171,   176,    96,   123,   233,   216,   217,     9,    44,    80,
     218,   219,    76,   218,   229,     3,     4,     5,     6,   103,
     142,   143,   172,   236,   237,   258,   259,   260,   261,   262,
     263,   264,     4,   184,   120,     3,   272,   271,   271,    82,
     226,    92,   167,   209,     3,   211,   212,    90,   188,   259,
     188,    45,     3,   273,   271,   271,   216,   281,   167,   262,
      12,   222,   168,   168,   214,   215,   216,   221,   113,   220,
     125,   214,    54,    72,   234,   168,   171,    45,   130,    93,
     124,   167,   209,     3,    45,    46,    47,    84,   120,   133,
     159,   160,   167,   239,   240,   241,   242,   243,   244,   245,
     246,   248,   249,   250,   251,   252,   254,   255,   256,   257,
     258,   188,     3,   286,    63,   217,   148,   171,   226,    38,
     111,   189,   189,   130,     3,   179,   180,   223,   235,   238,
     239,   229,   218,   230,   231,   239,   229,   239,   113,   239,
     258,   271,     3,   213,     3,   194,   195,   124,   167,   169,
     167,   167,   167,   110,   239,   247,    45,   120,   240,   165,
     240,   217,   239,   114,   131,    17,    53,   100,   120,   127,
     128,   134,   135,   148,   149,   150,   151,   152,   155,   156,
     158,   159,   160,   161,   162,   163,   165,    97,   168,   171,
     167,   239,   212,   204,    48,   271,   167,   168,   171,    93,
     224,   225,   171,     3,   124,   276,   277,   234,   214,   171,
      89,   115,   232,   234,    54,    54,   167,    92,    24,    29,
      31,    32,    34,    42,    68,    85,    87,    88,   102,   106,
     108,   118,   196,   171,   201,   202,   213,   168,   222,     3,
     160,   217,   136,   137,   138,   139,   140,   141,   253,   239,
     239,   247,    91,   110,   116,   167,   120,   235,   168,   168,
     239,   239,   240,   240,   100,   127,   167,   103,   120,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   262,   271,     3,   237,     3,   257,
     187,   237,   180,   167,   265,   266,   267,   268,   269,   271,
     282,   226,   238,     3,   231,   239,   239,   286,   188,    30,
     167,   198,   167,   167,   167,   197,   103,   120,   199,    27,
      60,   195,   168,   171,   202,   235,   168,    93,   124,   107,
      91,   116,   239,   239,   217,   166,   114,   240,   167,   217,
     235,   103,   166,   168,   168,   213,    25,    66,    71,    77,
      78,    94,    99,   283,   171,   124,   274,   275,   276,    69,
     227,   168,   167,     6,     6,     6,     6,   103,    27,    60,
     200,   119,   167,   168,   239,   196,   239,   239,   116,   107,
     168,   240,   217,   235,   168,   168,   168,    98,    77,    77,
      77,    98,   266,     3,   125,     6,   168,   171,   168,   168,
     168,   119,   167,   286,   168,   168,   116,   239,   168,   168,
     275,   267,   266,   167,   235,   168,     6,   286,   168,    81,
     130,   286,    50,   228,   168,   168,   167,   239,   284,   168,
     239,   257,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   173,   174,   175,   175,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   181,   181,   182,
     182,   183,   184,   185,   185,   186,   186,   187,   188,   189,
     189,   190,   191,   191,   191,   192,   192,   192,   192,   192,
     193,   193,   194,   194,   195,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   197,
     197,   198,   198,   198,   199,   199,   199,   200,   200,   200,
     201,   201,   201,   202,   202,   203,   203,   203,   203,   204,
     204,   205,   206,   207,   208,   208,   209,   209,   210,   211,
     211,   212,   213,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   218,   219,   219,   219,   220,   220,   221,
     222,   222,   223,   224,   224,   225,   226,   226,   227,   227,
     228,   228,   229,   229,   230,   230,   231,   232,   232,   232,
     233,   233,   234,   234,   234,   234,   234,   234,   235,   235,
     236,   236,   237,   237,   238,   239,   239,   239,   239,   239,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   241,   241,   242,   242,   242,   242,   242,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   244,
     244,   245,   245,   245,   245,   246,   246,   246,   246,   247,
     247,   248,   248,   249,   249,   249,   249,   249,   249,   249,
     250,   250,   251,   252,   253,   253,   253,   253,   253,   253,
     254,   255,   256,   257,   257,   257,   257,   258,   258,   258,
     258,   258,   259,   260,   260,   261,   261,   262,   263,   264,
     265,   265,   266,   266,   267,   267,   268,   268,   269,   270,
     271,   271,   272,   272,   273,   274,   274,   275,   275,   276,
     276,   277,   277,   278,   278,   279,   280,   280,   281,   282,
     282,   282,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   284,   285,   285,   286,   286
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     3,     2,     8,     8,     6,     9,     7,
       3,     0,     1,     3,     4,     1,     1,     1,     1,     2,
       1,     1,     4,     5,     4,     1,     2,     1,     1,     3,
       0,     5,     3,     0,     1,     2,     0,     2,     1,     0,
       1,     2,     0,     6,     5,     4,     4,     3,     6,     2,
       0,     7,     4,     2,     8,     5,     3,     0,     5,     1,
       3,     3,     2,     2,     6,     1,     1,     1,     3,     3,
       3,     3,     5,     2,     1,     1,     1,     1,     0,     7,
       1,     0,     1,     1,     0,     2,     2,     0,     4,     0,
       2,     0,     3,     0,     1,     3,     2,     1,     1,     0,
       2,     0,     2,     2,     4,     2,     4,     0,     1,     3,
       1,     0,     1,     3,     2,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     2,     2,     2,     3,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     5,     6,     5,     6,     4,     6,     3,     5,     4,
       5,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     6,     6,     1,     1,     1,     1,     1,     1,
       4,     4,     5,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     1,     0,     1,     1,     5,     1,     0,     2,
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
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1982 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1988 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 152 "bison_parser.y"
            { }
#line 1994 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 152 "bison_parser.y"
            { }
#line 2000 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 2013 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2019 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2025 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2038 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2051 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2057 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2063 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2069 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2075 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2081 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2087 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 152 "bison_parser.y"
            { }
#line 2093 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2099 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 152 "bison_parser.y"
            { }
#line 2105 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2111 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2117 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2123 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 152 "bison_parser.y"
            { }
#line 2129 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_commalist: /* column_def_commalist  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2142 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2148 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 152 "bison_parser.y"
            { }
#line 2154 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_specification: /* opt_time_specification  */
#line 152 "bison_parser.y"
            { }
#line 2160 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 152 "bison_parser.y"
            { }
#line 2166 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 152 "bison_parser.y"
            { }
#line 2172 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraint: /* opt_column_constraint  */
#line 152 "bison_parser.y"
            { }
#line 2178 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_constraints: /* opt_table_constraints  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_vec)); }
#line 2184 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2190 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2196 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 152 "bison_parser.y"
            { }
#line 2202 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2208 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2214 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2220 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2226 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2239 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2245 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2258 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2264 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2270 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2276 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2282 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2288 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2294 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2300 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2306 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 152 "bison_parser.y"
            { }
#line 2312 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2318 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 152 "bison_parser.y"
            { }
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2337 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2343 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2349 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2355 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2361 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2367 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2380 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2393 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2399 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 152 "bison_parser.y"
            { }
#line 2405 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2411 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2417 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2430 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2443 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2456 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2462 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2468 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2474 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2480 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2486 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2492 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2498 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2504 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2510 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2516 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2522 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2528 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2534 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2540 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2546 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 152 "bison_parser.y"
            { }
#line 2552 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2558 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2564 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2570 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2576 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2582 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2588 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2594 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2600 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2606 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2612 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2618 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2624 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2630 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2636 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2649 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2655 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2661 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 153 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2667 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2673 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_name: /* index_name  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2679 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2685 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2691 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2697 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2703 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2709 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2715 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2721 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2727 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2733 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 152 "bison_parser.y"
            { }
#line 2739 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2745 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2758 "bison_parser.cpp"
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

#line 2865 "bison_parser.cpp"

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
#line 282 "bison_parser.y"
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
#line 3093 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 303 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3104 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 309 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3115 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 318 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3124 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 322 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3133 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 326 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3141 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 329 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3149 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 332 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3157 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 339 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3163 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 340 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3169 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 341 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3175 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 342 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3181 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 343 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3187 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 344 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3193 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 345 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3199 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 346 "bison_parser.y"
                                { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3205 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 347 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3211 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 348 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3217 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 357 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3223 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 358 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3229 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 363 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3235 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 364 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3241 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 368 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3250 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 372 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3260 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 384 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3268 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 387 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3276 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 390 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3284 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 404 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3294 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 414 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3303 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 418 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3313 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 432 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3324 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 438 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3335 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 447 "bison_parser.y"
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
#line 3354 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 464 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3360 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 468 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3368 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 471 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3374 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 480 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3385 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 494 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3393 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 497 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3403 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 502 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3413 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 516 "bison_parser.y"
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
#line 3431 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' column_def_commalist opt_table_constraints ')'  */
#line 529 "bison_parser.y"
                                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-2].column_vec);
			(yyval.create_stmt)->tableConstraints = (yyvsp[-1].table_constraint_vec);
		}
#line 3444 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 537 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3456 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 544 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-5].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3468 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 551 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3481 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 562 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3487 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 563 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3493 "bison_parser.cpp"
    break;

  case 52: /* column_def_commalist: column_def  */
#line 567 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3499 "bison_parser.cpp"
    break;

  case 53: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 568 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3505 "bison_parser.cpp"
    break;

  case 54: /* column_def: IDENTIFIER column_type opt_column_nullable opt_column_constraint  */
#line 572 "bison_parser.y"
                                                                                {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-3].sval), (yyvsp[-2].column_type_t), (yyvsp[-1].bval), (yyvsp[0].column_constraint_t));
		}
#line 3513 "bison_parser.cpp"
    break;

  case 55: /* column_type: INT  */
#line 578 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3519 "bison_parser.cpp"
    break;

  case 56: /* column_type: INTEGER  */
#line 579 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3525 "bison_parser.cpp"
    break;

  case 57: /* column_type: LONG  */
#line 580 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3531 "bison_parser.cpp"
    break;

  case 58: /* column_type: FLOAT  */
#line 581 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3537 "bison_parser.cpp"
    break;

  case 59: /* column_type: DECIMAL opt_decimal_specification  */
#line 582 "bison_parser.y"
                                              { (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].column_specification_t)}; }
#line 3543 "bison_parser.cpp"
    break;

  case 60: /* column_type: DOUBLE  */
#line 583 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3549 "bison_parser.cpp"
    break;

  case 61: /* column_type: REAL  */
#line 584 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3555 "bison_parser.cpp"
    break;

  case 62: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 585 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3561 "bison_parser.cpp"
    break;

  case 63: /* column_type: CHARACTER VARYING '(' INTVAL ')'  */
#line 586 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR_VARYING, (yyvsp[-1].ival)}; }
#line 3567 "bison_parser.cpp"
    break;

  case 64: /* column_type: CHAR '(' INTVAL ')'  */
#line 587 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3573 "bison_parser.cpp"
    break;

  case 65: /* column_type: TEXT  */
#line 588 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3579 "bison_parser.cpp"
    break;

  case 66: /* column_type: TIME opt_time_specification  */
#line 589 "bison_parser.y"
                                        { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].column_specification_t) }; }
#line 3585 "bison_parser.cpp"
    break;

  case 67: /* column_type: DATETIME  */
#line 590 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3591 "bison_parser.cpp"
    break;

  case 68: /* column_type: DATE  */
#line 591 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3597 "bison_parser.cpp"
    break;

  case 69: /* opt_time_specification: '(' INTVAL ')'  */
#line 595 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3603 "bison_parser.cpp"
    break;

  case 70: /* opt_time_specification: %empty  */
#line 596 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3609 "bison_parser.cpp"
    break;

  case 71: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 600 "bison_parser.y"
                                  { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3615 "bison_parser.cpp"
    break;

  case 72: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 601 "bison_parser.y"
                       { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3621 "bison_parser.cpp"
    break;

  case 73: /* opt_decimal_specification: %empty  */
#line 602 "bison_parser.y"
                    { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3627 "bison_parser.cpp"
    break;

  case 74: /* opt_column_nullable: NULL  */
#line 606 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3633 "bison_parser.cpp"
    break;

  case 75: /* opt_column_nullable: NOT NULL  */
#line 607 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3639 "bison_parser.cpp"
    break;

  case 76: /* opt_column_nullable: %empty  */
#line 608 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3645 "bison_parser.cpp"
    break;

  case 77: /* opt_column_constraint: PRIMARY KEY  */
#line 612 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::PRIMARY_KEY; }
#line 3651 "bison_parser.cpp"
    break;

  case 78: /* opt_column_constraint: UNIQUE  */
#line 613 "bison_parser.y"
               { (yyval.column_constraint_t) = ConstraintType::UNIQUE; }
#line 3657 "bison_parser.cpp"
    break;

  case 79: /* opt_column_constraint: %empty  */
#line 614 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::NOT_SET; }
#line 3663 "bison_parser.cpp"
    break;

  case 80: /* opt_table_constraints: table_constraint  */
#line 618 "bison_parser.y"
                                 {(yyval.table_constraint_vec) = new std::vector<TableConstraint*>(); (yyval.table_constraint_vec)->push_back((yyvsp[0].table_constraint_t)); }
#line 3669 "bison_parser.cpp"
    break;

  case 81: /* opt_table_constraints: opt_table_constraints table_constraint  */
#line 619 "bison_parser.y"
                                                       {  (yyvsp[-1].table_constraint_vec)->push_back((yyvsp[0].table_constraint_t)); (yyval.table_constraint_vec) = (yyvsp[-1].table_constraint_vec); }
#line 3675 "bison_parser.cpp"
    break;

  case 82: /* opt_table_constraints: %empty  */
#line 620 "bison_parser.y"
                            {(yyval.table_constraint_vec) = new std::vector<TableConstraint*>(); }
#line 3681 "bison_parser.cpp"
    break;

  case 83: /* table_constraint: ',' PRIMARY KEY '(' ident_commalist ')'  */
#line 624 "bison_parser.y"
                                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PRIMARY_KEY, (yyvsp[-1].str_vec)); }
#line 3687 "bison_parser.cpp"
    break;

  case 84: /* table_constraint: ',' UNIQUE '(' ident_commalist ')'  */
#line 625 "bison_parser.y"
                                            { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::UNIQUE, (yyvsp[-1].str_vec)); }
#line 3693 "bison_parser.cpp"
    break;

  case 85: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 633 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3704 "bison_parser.cpp"
    break;

  case 86: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 639 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3715 "bison_parser.cpp"
    break;

  case 87: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 645 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3725 "bison_parser.cpp"
    break;

  case 88: /* drop_statement: DROP INDEX opt_exists index_name ON table_name  */
#line 650 "bison_parser.y"
                                                               {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
    			(yyval.drop_stmt)->ifExists = (yyvsp[-3].bval);
    			(yyval.drop_stmt)->indexName = (yyvsp[-2].sval);
    		}
#line 3736 "bison_parser.cpp"
    break;

  case 89: /* opt_exists: IF EXISTS  */
#line 659 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3742 "bison_parser.cpp"
    break;

  case 90: /* opt_exists: %empty  */
#line 660 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3748 "bison_parser.cpp"
    break;

  case 91: /* alter_statement: ALTER TABLE table_name DROP COLUMN opt_exists column_name  */
#line 669 "bison_parser.y"
                                                                          {
			(yyval.alter_stmt) = new AlterStatement(kAlterDropColumn);
			(yyval.alter_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.alter_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.alter_stmt)->name = (yyvsp[-4].table_name).name;
			(yyval.alter_stmt)->columnName = (yyvsp[0].expr)->name;
		}
#line 3760 "bison_parser.cpp"
    break;

  case 92: /* delete_statement: DELETE FROM table_name opt_where  */
#line 684 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3771 "bison_parser.cpp"
    break;

  case 93: /* truncate_statement: TRUNCATE table_name  */
#line 693 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3781 "bison_parser.cpp"
    break;

  case 94: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 706 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3793 "bison_parser.cpp"
    break;

  case 95: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 713 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3805 "bison_parser.cpp"
    break;

  case 96: /* opt_column_list: '(' ident_commalist ')'  */
#line 724 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3811 "bison_parser.cpp"
    break;

  case 97: /* opt_column_list: %empty  */
#line 725 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3817 "bison_parser.cpp"
    break;

  case 98: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 735 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3828 "bison_parser.cpp"
    break;

  case 99: /* update_clause_commalist: update_clause  */
#line 744 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3834 "bison_parser.cpp"
    break;

  case 100: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 745 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3840 "bison_parser.cpp"
    break;

  case 101: /* update_clause: IDENTIFIER '=' expr  */
#line 749 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3850 "bison_parser.cpp"
    break;

  case 102: /* select_statement: opt_with_clause select_with_paren  */
#line 761 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3859 "bison_parser.cpp"
    break;

  case 103: /* select_statement: opt_with_clause select_no_paren  */
#line 765 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3868 "bison_parser.cpp"
    break;

  case 104: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 769 "bison_parser.y"
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
#line 3884 "bison_parser.cpp"
    break;

  case 107: /* select_within_set_operation_no_parentheses: select_clause  */
#line 787 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3890 "bison_parser.cpp"
    break;

  case 108: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 788 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3903 "bison_parser.cpp"
    break;

  case 109: /* select_with_paren: '(' select_no_paren ')'  */
#line 799 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3909 "bison_parser.cpp"
    break;

  case 110: /* select_with_paren: '(' select_with_paren ')'  */
#line 800 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3915 "bison_parser.cpp"
    break;

  case 111: /* select_no_paren: select_clause opt_order opt_limit  */
#line 804 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3930 "bison_parser.cpp"
    break;

  case 112: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 814 "bison_parser.y"
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
#line 3945 "bison_parser.cpp"
    break;

  case 113: /* set_operator: set_type opt_all  */
#line 827 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3954 "bison_parser.cpp"
    break;

  case 114: /* set_type: UNION  */
#line 834 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3963 "bison_parser.cpp"
    break;

  case 115: /* set_type: INTERSECT  */
#line 838 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3972 "bison_parser.cpp"
    break;

  case 116: /* set_type: EXCEPT  */
#line 842 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3981 "bison_parser.cpp"
    break;

  case 117: /* opt_all: ALL  */
#line 849 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3989 "bison_parser.cpp"
    break;

  case 118: /* opt_all: %empty  */
#line 852 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3997 "bison_parser.cpp"
    break;

  case 119: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 858 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 4011 "bison_parser.cpp"
    break;

  case 120: /* opt_distinct: DISTINCT  */
#line 870 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 4017 "bison_parser.cpp"
    break;

  case 121: /* opt_distinct: %empty  */
#line 871 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4023 "bison_parser.cpp"
    break;

  case 123: /* opt_from_clause: from_clause  */
#line 879 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4029 "bison_parser.cpp"
    break;

  case 124: /* opt_from_clause: %empty  */
#line 880 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4035 "bison_parser.cpp"
    break;

  case 125: /* from_clause: FROM table_ref  */
#line 884 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4041 "bison_parser.cpp"
    break;

  case 126: /* opt_where: WHERE expr  */
#line 889 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4047 "bison_parser.cpp"
    break;

  case 127: /* opt_where: %empty  */
#line 890 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4053 "bison_parser.cpp"
    break;

  case 128: /* opt_group: GROUP BY expr_list opt_having  */
#line 894 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4063 "bison_parser.cpp"
    break;

  case 129: /* opt_group: %empty  */
#line 899 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4069 "bison_parser.cpp"
    break;

  case 130: /* opt_having: HAVING expr  */
#line 903 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4075 "bison_parser.cpp"
    break;

  case 131: /* opt_having: %empty  */
#line 904 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4081 "bison_parser.cpp"
    break;

  case 132: /* opt_order: ORDER BY order_list  */
#line 908 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4087 "bison_parser.cpp"
    break;

  case 133: /* opt_order: %empty  */
#line 909 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4093 "bison_parser.cpp"
    break;

  case 134: /* order_list: order_desc  */
#line 913 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4099 "bison_parser.cpp"
    break;

  case 135: /* order_list: order_list ',' order_desc  */
#line 914 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4105 "bison_parser.cpp"
    break;

  case 136: /* order_desc: expr opt_order_type  */
#line 918 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4111 "bison_parser.cpp"
    break;

  case 137: /* opt_order_type: ASC  */
#line 922 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4117 "bison_parser.cpp"
    break;

  case 138: /* opt_order_type: DESC  */
#line 923 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4123 "bison_parser.cpp"
    break;

  case 139: /* opt_order_type: %empty  */
#line 924 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4129 "bison_parser.cpp"
    break;

  case 140: /* opt_top: TOP int_literal  */
#line 930 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4135 "bison_parser.cpp"
    break;

  case 141: /* opt_top: %empty  */
#line 931 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4141 "bison_parser.cpp"
    break;

  case 142: /* opt_limit: LIMIT expr  */
#line 935 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4147 "bison_parser.cpp"
    break;

  case 143: /* opt_limit: OFFSET expr  */
#line 936 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4153 "bison_parser.cpp"
    break;

  case 144: /* opt_limit: LIMIT expr OFFSET expr  */
#line 937 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4159 "bison_parser.cpp"
    break;

  case 145: /* opt_limit: LIMIT ALL  */
#line 938 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4165 "bison_parser.cpp"
    break;

  case 146: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 939 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4171 "bison_parser.cpp"
    break;

  case 147: /* opt_limit: %empty  */
#line 940 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4177 "bison_parser.cpp"
    break;

  case 148: /* expr_list: expr_alias  */
#line 947 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4183 "bison_parser.cpp"
    break;

  case 149: /* expr_list: expr_list ',' expr_alias  */
#line 948 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4189 "bison_parser.cpp"
    break;

  case 150: /* opt_literal_list: literal_list  */
#line 952 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4195 "bison_parser.cpp"
    break;

  case 151: /* opt_literal_list: %empty  */
#line 953 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4201 "bison_parser.cpp"
    break;

  case 152: /* literal_list: literal  */
#line 957 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4207 "bison_parser.cpp"
    break;

  case 153: /* literal_list: literal_list ',' literal  */
#line 958 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4213 "bison_parser.cpp"
    break;

  case 154: /* expr_alias: expr opt_alias  */
#line 962 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4225 "bison_parser.cpp"
    break;

  case 160: /* operand: '(' expr ')'  */
#line 980 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4231 "bison_parser.cpp"
    break;

  case 170: /* operand: '(' select_no_paren ')'  */
#line 990 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4237 "bison_parser.cpp"
    break;

  case 173: /* unary_expr: '-' operand  */
#line 999 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4243 "bison_parser.cpp"
    break;

  case 174: /* unary_expr: NOT operand  */
#line 1000 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4249 "bison_parser.cpp"
    break;

  case 175: /* unary_expr: operand ISNULL  */
#line 1001 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4255 "bison_parser.cpp"
    break;

  case 176: /* unary_expr: operand IS NULL  */
#line 1002 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4261 "bison_parser.cpp"
    break;

  case 177: /* unary_expr: operand IS NOT NULL  */
#line 1003 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4267 "bison_parser.cpp"
    break;

  case 179: /* binary_expr: operand '-' operand  */
#line 1008 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4273 "bison_parser.cpp"
    break;

  case 180: /* binary_expr: operand '+' operand  */
#line 1009 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4279 "bison_parser.cpp"
    break;

  case 181: /* binary_expr: operand '/' operand  */
#line 1010 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4285 "bison_parser.cpp"
    break;

  case 182: /* binary_expr: operand '*' operand  */
#line 1011 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4291 "bison_parser.cpp"
    break;

  case 183: /* binary_expr: operand '%' operand  */
#line 1012 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4297 "bison_parser.cpp"
    break;

  case 184: /* binary_expr: operand '^' operand  */
#line 1013 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4303 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand LIKE operand  */
#line 1014 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4309 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand NOT LIKE operand  */
#line 1015 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4315 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand ILIKE operand  */
#line 1016 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4321 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand CONCAT operand  */
#line 1017 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4327 "bison_parser.cpp"
    break;

  case 189: /* logic_expr: expr AND expr  */
#line 1021 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4333 "bison_parser.cpp"
    break;

  case 190: /* logic_expr: expr OR expr  */
#line 1022 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4339 "bison_parser.cpp"
    break;

  case 191: /* in_expr: operand IN '(' expr_list ')'  */
#line 1026 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4345 "bison_parser.cpp"
    break;

  case 192: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1027 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4351 "bison_parser.cpp"
    break;

  case 193: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1028 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4357 "bison_parser.cpp"
    break;

  case 194: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1029 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4363 "bison_parser.cpp"
    break;

  case 195: /* case_expr: CASE expr case_list END  */
#line 1035 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4369 "bison_parser.cpp"
    break;

  case 196: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1036 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4375 "bison_parser.cpp"
    break;

  case 197: /* case_expr: CASE case_list END  */
#line 1037 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4381 "bison_parser.cpp"
    break;

  case 198: /* case_expr: CASE case_list ELSE expr END  */
#line 1038 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4387 "bison_parser.cpp"
    break;

  case 199: /* case_list: WHEN expr THEN expr  */
#line 1042 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4393 "bison_parser.cpp"
    break;

  case 200: /* case_list: case_list WHEN expr THEN expr  */
#line 1043 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4399 "bison_parser.cpp"
    break;

  case 201: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1047 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4405 "bison_parser.cpp"
    break;

  case 202: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1048 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4411 "bison_parser.cpp"
    break;

  case 203: /* comp_expr: operand '=' operand  */
#line 1052 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4417 "bison_parser.cpp"
    break;

  case 204: /* comp_expr: operand EQUALS operand  */
#line 1053 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4423 "bison_parser.cpp"
    break;

  case 205: /* comp_expr: operand NOTEQUALS operand  */
#line 1054 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4429 "bison_parser.cpp"
    break;

  case 206: /* comp_expr: operand '<' operand  */
#line 1055 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4435 "bison_parser.cpp"
    break;

  case 207: /* comp_expr: operand '>' operand  */
#line 1056 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4441 "bison_parser.cpp"
    break;

  case 208: /* comp_expr: operand LESSEQ operand  */
#line 1057 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4447 "bison_parser.cpp"
    break;

  case 209: /* comp_expr: operand GREATEREQ operand  */
#line 1058 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4453 "bison_parser.cpp"
    break;

  case 210: /* function_expr: IDENTIFIER '(' ')'  */
#line 1062 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4459 "bison_parser.cpp"
    break;

  case 211: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1063 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4465 "bison_parser.cpp"
    break;

  case 212: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1067 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4471 "bison_parser.cpp"
    break;

  case 213: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1071 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4477 "bison_parser.cpp"
    break;

  case 214: /* datetime_field: SECOND  */
#line 1075 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4483 "bison_parser.cpp"
    break;

  case 215: /* datetime_field: MINUTE  */
#line 1076 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4489 "bison_parser.cpp"
    break;

  case 216: /* datetime_field: HOUR  */
#line 1077 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4495 "bison_parser.cpp"
    break;

  case 217: /* datetime_field: DAY  */
#line 1078 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4501 "bison_parser.cpp"
    break;

  case 218: /* datetime_field: MONTH  */
#line 1079 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4507 "bison_parser.cpp"
    break;

  case 219: /* datetime_field: YEAR  */
#line 1080 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4513 "bison_parser.cpp"
    break;

  case 220: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1084 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4519 "bison_parser.cpp"
    break;

  case 221: /* array_index: operand '[' int_literal ']'  */
#line 1088 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4525 "bison_parser.cpp"
    break;

  case 222: /* between_expr: operand BETWEEN operand AND operand  */
#line 1092 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4531 "bison_parser.cpp"
    break;

  case 223: /* column_name: IDENTIFIER  */
#line 1096 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4537 "bison_parser.cpp"
    break;

  case 224: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1097 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4543 "bison_parser.cpp"
    break;

  case 225: /* column_name: '*'  */
#line 1098 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4549 "bison_parser.cpp"
    break;

  case 226: /* column_name: IDENTIFIER '.' '*'  */
#line 1099 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4555 "bison_parser.cpp"
    break;

  case 232: /* string_literal: STRING  */
#line 1111 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4561 "bison_parser.cpp"
    break;

  case 233: /* bool_literal: TRUE  */
#line 1115 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4567 "bison_parser.cpp"
    break;

  case 234: /* bool_literal: FALSE  */
#line 1116 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4573 "bison_parser.cpp"
    break;

  case 235: /* num_literal: FLOATVAL  */
#line 1120 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4579 "bison_parser.cpp"
    break;

  case 237: /* int_literal: INTVAL  */
#line 1125 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4585 "bison_parser.cpp"
    break;

  case 238: /* null_literal: NULL  */
#line 1129 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4591 "bison_parser.cpp"
    break;

  case 239: /* param_expr: '?'  */
#line 1133 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4601 "bison_parser.cpp"
    break;

  case 241: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1146 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4612 "bison_parser.cpp"
    break;

  case 245: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1162 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4623 "bison_parser.cpp"
    break;

  case 246: /* table_ref_commalist: table_ref_atomic  */
#line 1171 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4629 "bison_parser.cpp"
    break;

  case 247: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1172 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4635 "bison_parser.cpp"
    break;

  case 248: /* table_ref_name: table_name opt_table_alias  */
#line 1177 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4647 "bison_parser.cpp"
    break;

  case 249: /* table_ref_name_no_alias: table_name  */
#line 1188 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4657 "bison_parser.cpp"
    break;

  case 250: /* table_name: IDENTIFIER  */
#line 1197 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4663 "bison_parser.cpp"
    break;

  case 251: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1198 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4669 "bison_parser.cpp"
    break;

  case 252: /* opt_index_name: IDENTIFIER  */
#line 1202 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4675 "bison_parser.cpp"
    break;

  case 253: /* opt_index_name: %empty  */
#line 1203 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4681 "bison_parser.cpp"
    break;

  case 254: /* index_name: IDENTIFIER  */
#line 1207 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4687 "bison_parser.cpp"
    break;

  case 256: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1213 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4693 "bison_parser.cpp"
    break;

  case 258: /* opt_table_alias: %empty  */
#line 1219 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4699 "bison_parser.cpp"
    break;

  case 259: /* alias: AS IDENTIFIER  */
#line 1224 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4705 "bison_parser.cpp"
    break;

  case 260: /* alias: IDENTIFIER  */
#line 1225 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4711 "bison_parser.cpp"
    break;

  case 262: /* opt_alias: %empty  */
#line 1231 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4717 "bison_parser.cpp"
    break;

  case 264: /* opt_with_clause: %empty  */
#line 1241 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4723 "bison_parser.cpp"
    break;

  case 265: /* with_clause: WITH with_description_list  */
#line 1245 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4729 "bison_parser.cpp"
    break;

  case 266: /* with_description_list: with_description  */
#line 1249 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4738 "bison_parser.cpp"
    break;

  case 267: /* with_description_list: with_description_list ',' with_description  */
#line 1253 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4747 "bison_parser.cpp"
    break;

  case 268: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1260 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4757 "bison_parser.cpp"
    break;

  case 269: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1274 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4769 "bison_parser.cpp"
    break;

  case 270: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1282 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4782 "bison_parser.cpp"
    break;

  case 271: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1292 "bison_parser.y"
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
#line 4802 "bison_parser.cpp"
    break;

  case 272: /* opt_join_type: INNER  */
#line 1310 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4808 "bison_parser.cpp"
    break;

  case 273: /* opt_join_type: LEFT OUTER  */
#line 1311 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4814 "bison_parser.cpp"
    break;

  case 274: /* opt_join_type: LEFT  */
#line 1312 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4820 "bison_parser.cpp"
    break;

  case 275: /* opt_join_type: RIGHT OUTER  */
#line 1313 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4826 "bison_parser.cpp"
    break;

  case 276: /* opt_join_type: RIGHT  */
#line 1314 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4832 "bison_parser.cpp"
    break;

  case 277: /* opt_join_type: FULL OUTER  */
#line 1315 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4838 "bison_parser.cpp"
    break;

  case 278: /* opt_join_type: OUTER  */
#line 1316 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4844 "bison_parser.cpp"
    break;

  case 279: /* opt_join_type: FULL  */
#line 1317 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4850 "bison_parser.cpp"
    break;

  case 280: /* opt_join_type: CROSS  */
#line 1318 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4856 "bison_parser.cpp"
    break;

  case 281: /* opt_join_type: %empty  */
#line 1319 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4862 "bison_parser.cpp"
    break;

  case 285: /* ident_commalist: IDENTIFIER  */
#line 1339 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4868 "bison_parser.cpp"
    break;

  case 286: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1340 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4874 "bison_parser.cpp"
    break;


#line 4878 "bison_parser.cpp"

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

#line 1343 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
