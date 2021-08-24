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
  YYSYMBOL_table_elem_commalist = 194,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 195,               /* table_elem  */
  YYSYMBOL_column_def = 196,               /* column_def  */
  YYSYMBOL_column_type = 197,              /* column_type  */
  YYSYMBOL_opt_time_specification = 198,   /* opt_time_specification  */
  YYSYMBOL_opt_decimal_specification = 199, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_nullable = 200,      /* opt_column_nullable  */
  YYSYMBOL_opt_column_constraint = 201,    /* opt_column_constraint  */
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
#define YYLAST   802

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  285
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  531

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
     471,   480,   494,   497,   502,   516,   529,   536,   543,   550,
     561,   562,   566,   567,   571,   572,   576,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   599,   600,   604,   605,   606,   610,   611,   612,   616,
     617,   618,   622,   623,   634,   640,   646,   651,   660,   661,
     670,   685,   694,   707,   714,   725,   726,   736,   745,   746,
     750,   762,   766,   770,   784,   785,   788,   789,   800,   801,
     805,   815,   828,   835,   839,   843,   850,   853,   859,   871,
     872,   876,   880,   881,   885,   890,   891,   895,   900,   904,
     905,   909,   910,   914,   915,   919,   923,   924,   925,   931,
     932,   936,   937,   938,   939,   940,   941,   948,   949,   953,
     954,   958,   959,   963,   973,   974,   975,   976,   977,   981,
     982,   983,   984,   985,   986,   987,   988,   989,   990,   991,
     995,   996,  1000,  1001,  1002,  1003,  1004,  1008,  1009,  1010,
    1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1022,  1023,
    1027,  1028,  1029,  1030,  1036,  1037,  1038,  1039,  1043,  1044,
    1048,  1049,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1063,
    1064,  1068,  1072,  1076,  1077,  1078,  1079,  1080,  1081,  1085,
    1089,  1093,  1097,  1098,  1099,  1100,  1104,  1105,  1106,  1107,
    1108,  1112,  1116,  1117,  1121,  1122,  1126,  1130,  1134,  1146,
    1147,  1157,  1158,  1162,  1163,  1172,  1173,  1178,  1189,  1198,
    1199,  1203,  1204,  1208,  1213,  1214,  1219,  1220,  1225,  1226,
    1231,  1232,  1241,  1242,  1246,  1250,  1254,  1261,  1274,  1282,
    1292,  1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,  1319,
    1320,  1325,  1334,  1335,  1340,  1341
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
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_specification", "opt_decimal_specification",
  "opt_column_nullable", "opt_column_constraint", "table_constraint",
  "drop_statement", "opt_exists", "alter_statement", "delete_statement",
  "truncate_statement", "insert_statement", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_within_set_operation",
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

#define YYPACT_NINF (-410)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-283)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     555,    17,    90,    99,   132,    90,   -33,    67,    85,   118,
      90,   108,    90,    -5,    22,   199,    81,    81,    81,   237,
      79,  -410,   136,  -410,   136,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,   -34,  -410,   260,
     106,  -410,   109,   221,  -410,   156,   156,   156,    90,   285,
      90,   193,  -410,    90,   -49,   194,   194,   194,    90,  -410,
     165,   150,  -410,  -410,  -410,  -410,  -410,  -410,   550,  -410,
     243,  -410,  -410,   218,   -34,    52,  -410,    54,  -410,   330,
      23,   349,   239,   358,    90,    90,   284,  -410,   287,   217,
     382,   296,   383,   383,   343,   389,    90,    90,  -410,   226,
     199,  -410,   227,   390,   385,   230,   231,  -410,  -410,  -410,
     -34,   282,   276,   -34,     1,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,   232,   242,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,   362,  -410,   278,   -57,   217,   344,
    -410,   383,   411,   209,   267,   -44,  -410,   378,   306,  -410,
     306,  -410,  -410,   288,  -410,  -410,  -410,  -410,   417,  -410,
    -410,   344,  -410,  -410,   345,  -410,  -410,    52,  -410,  -410,
     344,   345,   344,   158,  -410,  -410,    23,  -410,    90,   419,
     312,    37,   300,   -31,   258,   262,   272,   164,   359,   279,
     365,  -410,   299,   103,   393,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,   348,  -410,    18,   281,  -410,   344,   382,  -410,   194,
     402,  -410,  -410,    90,   286,   112,  -410,   361,   280,  -410,
      76,     1,   -34,   289,  -410,   -20,     1,   103,   398,   -28,
    -410,   290,   363,  -410,   684,   337,   294,   128,  -410,  -410,
    -410,   312,    20,    12,   406,   236,   344,   344,    83,   110,
     298,   365,   586,   344,    94,   301,    77,   344,   344,   365,
    -410,   365,   -22,   303,   126,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     390,    90,  -410,   464,    23,   103,  -410,    15,   285,  -410,
      23,  -410,   417,    10,   284,  -410,   344,  -410,   469,  -410,
    -410,  -410,  -410,   344,  -410,  -410,  -410,  -410,   344,   344,
     411,   383,  -410,   443,  -410,   307,   308,  -410,  -410,   309,
    -410,  -410,  -410,  -410,   311,  -410,   140,   313,   411,  -410,
      37,  -410,  -410,   344,  -410,  -410,   314,  -410,  -410,  -410,
    -410,  -410,  -410,   388,   138,   137,   125,   344,   344,  -410,
     406,   384,    28,  -410,  -410,  -410,   369,   529,   605,   365,
     321,   299,  -410,   386,   325,   605,   605,   605,   605,   275,
     275,   275,   275,    94,    94,    58,    58,    58,   -75,   328,
    -410,  -410,   145,   322,  -410,  -410,   151,  -410,   312,  -410,
      14,  -410,   324,  -410,    16,  -410,   427,  -410,  -410,  -410,
     103,   103,   161,  -410,   332,   491,  -410,   494,   499,   500,
    -410,  -410,   407,    39,   411,   166,  -410,   167,  -410,   344,
     684,   344,   344,  -410,   195,   163,   341,  -410,   365,   605,
     299,   346,   172,  -410,  -410,  -410,  -410,   347,   414,  -410,
    -410,  -410,   440,   445,   446,   431,    10,   527,  -410,  -410,
    -410,   408,  -410,  -410,   528,   183,   367,   368,   370,  -410,
     420,  -410,  -410,   184,  -410,  -410,    82,   372,   103,   196,
    -410,   344,  -410,   586,   379,   189,  -410,  -410,    16,    10,
    -410,  -410,  -410,    10,   187,   392,   344,   395,  -410,   540,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,   103,  -410,
    -410,  -410,  -410,    43,   411,     0,  -410,   396,   394,   344,
     210,   344,  -410,  -410,    15,   103,  -410,  -410,   103,   399,
    -410
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     263,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     283,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   262,     0,
     249,    92,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   248,     0,     0,    89,    89,    89,     0,    42,
       0,   264,   265,    29,    26,    28,    27,     1,   263,     2,
       0,     6,     5,   140,     0,   101,   102,   132,    86,     0,
     150,     0,     0,   252,     0,     0,   126,    37,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   120,     0,     0,   114,   115,   113,
       0,   117,     0,     0,   146,   250,   231,   234,   236,   237,
     232,   233,   238,     0,   149,   151,   226,   227,   228,   235,
     229,   230,    32,    31,     0,   251,     0,     0,    96,     0,
      91,     0,     0,     0,     0,   126,    98,     0,    40,    38,
      40,    88,   253,     0,    84,    85,   267,   266,     0,   139,
     119,     0,   109,   108,   132,   105,   104,   106,   116,   112,
       0,   132,     0,     0,   110,    34,     0,    50,     0,     0,
     263,     0,     0,   222,     0,     0,     0,     0,     0,     0,
       0,   224,     0,   125,   154,   161,   162,   163,   156,   158,
     164,   157,   177,   165,   166,   167,   168,   160,   155,   170,
     171,     0,   284,     0,     0,    94,     0,     0,    97,    89,
       0,    36,    41,     0,    24,     0,    22,   123,   121,   147,
     261,   146,     0,   131,   133,   138,   146,   142,   144,   141,
     152,     0,     0,    47,     0,     0,     0,     0,    52,    54,
      55,   263,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,     0,   172,     0,     0,     0,     0,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,   100,    99,     0,     0,    87,
       0,    20,     0,     0,   126,   122,     0,   259,     0,   260,
     153,   103,   107,     0,   137,   136,   135,   111,     0,     0,
       0,     0,    58,     0,    63,    75,     0,    62,    60,     0,
      70,    69,    59,    67,    72,    57,    78,     0,     0,    46,
       0,    49,   209,     0,   223,   225,     0,   213,   214,   215,
     216,   217,   218,     0,     0,     0,     0,     0,     0,   196,
       0,     0,     0,   169,   159,   188,   189,     0,   184,     0,
       0,     0,   175,     0,   187,   186,   202,   203,   204,   205,
     206,   207,   208,   179,   178,   181,   180,   182,   183,     0,
      35,   285,     0,   222,    90,    39,     0,    23,   263,   124,
     239,   241,     0,   243,   257,   242,   128,   148,   258,   134,
     145,   143,     0,    45,     0,     0,    61,     0,     0,     0,
      68,    76,     0,    81,     0,     0,    53,     0,   200,     0,
       0,     0,     0,   194,     0,     0,     0,   219,     0,   185,
       0,     0,     0,   176,   220,    93,    25,     0,     0,   279,
     271,   277,   275,   278,   273,     0,     0,     0,   256,   247,
     254,     0,   118,    48,     0,     0,     0,     0,     0,    77,
       0,    80,    56,     0,    83,   210,     0,     0,   198,     0,
     197,     0,   201,   221,     0,     0,   192,   190,   257,     0,
     274,   276,   272,     0,   240,   258,     0,     0,    74,     0,
      64,    66,    71,    79,    82,   211,   212,   195,   199,   193,
     191,   244,   268,   280,     0,   130,    65,     0,     0,     0,
       0,     0,   127,    73,     0,   281,   269,   255,   129,     0,
     270
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -410,  -410,  -410,   492,  -410,   542,  -410,   266,  -410,   105,
    -410,  -410,  -410,  -410,   271,   -85,   421,  -410,  -410,  -410,
      25,  -410,   233,  -410,   144,  -410,  -410,  -410,  -410,  -410,
    -410,   -36,  -410,  -410,  -410,  -410,   437,  -410,  -410,   366,
    -176,   -89,  -410,     8,   -73,   -42,  -410,  -410,   -88,   326,
    -410,  -410,  -410,  -128,  -410,  -410,  -122,  -410,   274,  -410,
    -410,     2,  -256,  -410,   -21,   273,  -139,  -130,  -410,  -410,
    -410,  -410,  -410,  -410,   327,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -292,   -70,   -90,  -410,  -410,   -92,
    -410,  -410,  -410,  -409,    91,  -410,  -410,  -410,     4,  -410,
    -410,  -410,    96,   373,  -410,  -410,  -410,  -410,   488,  -410,
    -410,  -410,  -410,  -308
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   225,   226,    23,    64,
      24,   133,    25,    26,    88,   148,   221,    27,    28,    29,
      83,   247,   248,   249,   336,   420,   416,   423,   472,   250,
      30,    95,    31,    32,    33,    34,   143,    35,   145,   146,
      36,   164,   165,   166,    76,   110,   111,   169,    77,   161,
     227,   304,   305,   140,   462,   522,   114,   233,   234,   316,
     104,   174,   228,   123,   124,   229,   230,   194,   195,   196,
     197,   198,   199,   200,   259,   201,   202,   203,   204,   205,
     353,   206,   207,   208,   209,   210,   126,   127,   128,   129,
     130,   131,   399,   400,   401,   402,   403,    51,   404,   136,
     153,   458,   459,   460,   310,    37,    38,    61,    62,   405,
     455,   526,    69,   213
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     193,   106,   149,   149,   243,   394,    41,   362,   150,    44,
     125,   159,   412,    40,    52,   344,    54,   218,   393,   307,
      96,    97,   167,    73,   171,   167,   319,   116,   117,   118,
     425,   235,   160,   237,   239,   113,   179,    45,   139,   448,
     244,    58,   231,    39,    92,    75,    46,   494,   258,   236,
     521,   149,    86,   266,    89,   172,   211,    91,   262,   275,
     264,   107,    98,   107,   245,    55,   470,   180,   448,   314,
     215,    84,    85,   173,    56,   341,    47,   295,   369,   307,
     449,    59,   105,    93,   513,   450,   267,   427,   137,   138,
     290,   451,   452,    40,   267,   315,   108,   246,   108,   471,
     154,   155,    42,   268,    57,   370,   240,   156,   453,   449,
     181,   268,  -280,   454,   450,   442,   473,   354,   355,   265,
     451,   452,    65,    66,   518,   232,   119,   217,   365,   366,
     112,   262,   109,    74,   109,    43,   252,   453,   253,   367,
     457,   368,   454,   312,   167,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
      48,   183,   116,   117,   118,   120,   121,   183,   116,   117,
     118,   306,   345,   519,   235,   191,   406,   398,    49,   410,
     411,   346,   241,   297,   485,  -245,   292,    53,   342,   293,
     267,   267,   275,   257,   437,   122,   267,   267,   389,   306,
     308,   357,    60,   184,   185,   186,   520,   268,   268,   184,
     185,   186,   448,   268,   268,    50,   432,   267,   434,   435,
     358,   289,   447,   290,   125,    63,   359,   299,   275,   372,
     125,   149,   529,   311,   268,   358,   413,    67,   317,   439,
     515,   433,   187,   421,   431,   364,   373,    70,   187,    68,
     505,   267,   267,   449,   286,   287,   288,   289,   450,   290,
     422,   119,   430,    78,   451,   452,    73,   119,   268,   268,
     481,   238,   214,   392,   257,    79,    80,   267,   188,   396,
     301,   453,    82,   302,   188,  -280,   454,   436,    87,    99,
     476,   189,   478,   479,   268,   390,   339,   189,   441,   340,
     120,   121,   183,   116,   117,   118,   120,   121,   483,   267,
     267,   480,   507,   445,    81,    90,   176,   190,   191,   446,
      94,   100,   176,   190,   191,   192,   268,   268,   270,   463,
     122,   192,   293,   115,   474,   475,   122,   293,   306,   102,
     487,   103,   508,   306,   184,   185,   186,   183,   116,   117,
     118,   498,   504,   132,   499,   293,    73,   510,  -246,   134,
     306,   135,   183,   116,   117,   118,   139,   484,   183,   116,
     117,   118,   347,   348,   349,   350,   351,   352,   527,   141,
     525,   293,   528,   187,   142,   144,   147,   116,   151,   184,
     185,   186,   152,    74,   158,   168,   118,   160,   162,   163,
     175,   170,   119,   274,   260,   185,   186,   177,   178,   275,
     269,   185,   186,   176,   212,   216,   219,   220,   223,   188,
     224,   112,   242,    15,   251,   254,  -283,  -283,   187,   255,
    -283,  -283,   189,   284,   285,   286,   287,   288,   289,   256,
     290,   120,   121,   187,   263,   291,   270,   119,   294,   187,
     298,   306,   318,   300,   303,   321,   337,   320,   190,   191,
     313,   338,   119,    73,   188,   360,   192,   391,   119,   363,
     371,   122,   408,   414,   415,   417,   418,   189,   419,   261,
     424,   429,   428,   267,   369,   261,   120,   121,   440,   443,
     290,   253,   189,   271,   444,   456,   461,   465,   189,   464,
     466,   120,   121,   190,   191,   467,   468,   120,   121,   482,
     469,   192,   489,   272,   486,   488,   122,   490,   190,   191,
     273,   274,   491,   492,   190,   191,   192,   275,   276,   493,
     495,   122,   192,   496,   497,   500,   501,   122,   502,   503,
     506,   277,   278,   279,   280,   281,   517,   509,   282,   283,
    -282,   284,   285,   286,   287,   288,   289,     1,   290,   514,
     101,   524,     1,   516,   523,     2,    72,   530,   397,   395,
       2,   222,     3,   426,   477,   182,     4,     3,   343,   407,
     512,     4,   270,   296,   511,   356,     5,   409,   157,     6,
       7,     5,     0,     0,     6,     7,     0,     0,     0,     0,
       0,     8,     9,   309,     0,     0,     8,     9,     0,     0,
       0,     0,    10,     0,     0,    11,     0,    10,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,   271,
       0,     0,     0,     0,     0,     0,    12,     0,     0,   270,
      13,    12,     0,   438,     0,    13,     0,     0,     0,   361,
       0,     0,     0,     0,     0,    14,     0,   274,   270,     0,
      14,    15,     0,   275,   276,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,   278,   279,
     280,   281,     0,     0,   282,   283,   271,   284,   285,   286,
     287,   288,   289,     0,   290,    16,    17,    18,     0,     0,
      16,    17,    18,     0,     0,  -283,   361,     0,   322,     0,
       0,     0,     0,   323,   274,   324,   325,     0,   326,     0,
     275,   276,     0,     0,     0,     0,   327,     0,     0,     0,
       0,     0,     0,   274,   277,   278,   279,   280,   281,   275,
    -283,   282,   283,     0,   284,   285,   286,   287,   288,   289,
       0,   290,   328,  -283,  -283,  -283,   280,   281,     0,     0,
     282,   283,     0,   284,   285,   286,   287,   288,   289,   329,
     290,   330,   331,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,     0,     0,     0,
     333,     0,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335
};

static const yytype_int16 yycheck[] =
{
     139,    74,    92,    93,   180,   297,     2,   263,    93,     5,
      80,   103,   320,     3,    10,     3,    12,   145,     3,     3,
      56,    57,   110,    57,   113,   113,    54,     4,     5,     6,
     338,   170,    12,   172,   173,    77,    93,    70,    82,    25,
       3,    19,   164,    26,    93,    37,    79,   456,   187,   171,
      50,   141,    48,   192,    50,    54,   141,    53,   188,   134,
     190,     9,    58,     9,    27,    70,    27,   124,    25,    89,
     143,    46,    47,    72,    79,   251,   109,   216,   100,     3,
      66,    59,    74,   132,   493,    71,   114,   343,    84,    85,
     165,    77,    78,     3,   114,   115,    44,    60,    44,    60,
      96,    97,     3,   131,   109,   127,   176,    99,    94,    66,
     167,   131,    98,    99,    71,   371,   424,   256,   257,   192,
      77,    78,    17,    18,    81,   167,   103,   171,   267,   268,
      76,   261,    80,   167,    80,     3,   167,    94,   169,   269,
     124,   271,    99,   232,   232,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
      93,     3,     4,     5,     6,   142,   143,     3,     4,     5,
       6,   171,   160,   130,   313,   160,   304,   167,    93,   318,
     319,   254,   178,   219,   440,   171,   168,    79,   168,   171,
     114,   114,   134,   110,   166,   172,   114,   114,   290,   171,
     124,    91,     3,    45,    46,    47,   514,   131,   131,    45,
      46,    47,    25,   131,   131,    97,    91,   114,   357,   358,
     110,   163,   398,   165,   294,   144,   116,   223,   134,   103,
     300,   321,   524,   231,   131,   110,   321,     0,   236,   369,
     496,   116,    84,   103,   107,   168,   120,   111,    84,   170,
     168,   114,   114,    66,   160,   161,   162,   163,    71,   165,
     120,   103,   124,     3,    77,    78,    57,   103,   131,   131,
     107,   113,    63,   294,   110,   169,   167,   114,   120,   300,
     168,    94,   126,   171,   120,    98,    99,   360,     3,   124,
     429,   133,   431,   432,   131,   291,   168,   133,   371,   171,
     142,   143,     3,     4,     5,     6,   142,   143,   438,   114,
     114,   116,   116,   168,    93,   122,   171,   159,   160,   168,
     126,   171,   171,   159,   160,   167,   131,   131,    53,   168,
     172,   167,   171,     3,   168,   168,   172,   171,   171,    96,
     168,   123,   481,   171,    45,    46,    47,     3,     4,     5,
       6,   168,   168,     4,   171,   171,    57,   168,   171,   120,
     171,     3,     3,     4,     5,     6,    82,   440,     3,     4,
       5,     6,   136,   137,   138,   139,   140,   141,   168,    92,
     519,   171,   521,    84,   167,     3,    90,     4,    45,    45,
      46,    47,     3,   167,   167,   113,     6,    12,   168,   168,
     168,   125,   103,   128,    45,    46,    47,    45,   130,   134,
      17,    46,    47,   171,     3,   148,    38,   111,   130,   120,
       3,    76,     3,   111,   124,   167,   151,   152,    84,   167,
     155,   156,   133,   158,   159,   160,   161,   162,   163,   167,
     165,   142,   143,    84,   165,    97,    53,   103,   167,    84,
      48,   171,    54,   167,    93,    92,   119,   167,   159,   160,
     171,   167,   103,    57,   120,   167,   167,     3,   103,   168,
     167,   172,     3,    30,   167,   167,   167,   133,   167,   120,
     167,    93,   168,   114,   100,   120,   142,   143,   167,   103,
     165,   169,   133,   100,   166,   171,    69,     6,   133,   167,
       6,   142,   143,   159,   160,     6,     6,   142,   143,   168,
     103,   167,    98,   120,   168,   168,   172,    77,   159,   160,
     127,   128,    77,    77,   159,   160,   167,   134,   135,    98,
       3,   172,   167,   125,     6,   168,   168,   172,   168,   119,
     168,   148,   149,   150,   151,   152,     6,   168,   155,   156,
       0,   158,   159,   160,   161,   162,   163,     7,   165,   167,
      68,   167,     7,   168,   168,    15,    24,   168,   302,   298,
      15,   150,    22,   340,   430,   138,    26,    22,   252,   306,
     489,    26,    53,   217,   488,   258,    36,   313,   100,    39,
      40,    36,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    51,    52,   230,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    -1,    62,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    53,
      90,    86,    -1,   114,    -1,    90,    -1,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   128,    53,    -1,
     105,   111,    -1,   134,   135,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,
     151,   152,    -1,    -1,   155,   156,   100,   158,   159,   160,
     161,   162,   163,    -1,   165,   145,   146,   147,    -1,    -1,
     145,   146,   147,    -1,    -1,   100,   120,    -1,    24,    -1,
      -1,    -1,    -1,    29,   128,    31,    32,    -1,    34,    -1,
     134,   135,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,   128,   148,   149,   150,   151,   152,   134,
     135,   155,   156,    -1,   158,   159,   160,   161,   162,   163,
      -1,   165,    68,   148,   149,   150,   151,   152,    -1,    -1,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    85,
     165,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118
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
     258,   271,     3,   213,     3,    27,    60,   194,   195,   196,
     202,   124,   167,   169,   167,   167,   167,   110,   239,   247,
      45,   120,   240,   165,   240,   217,   239,   114,   131,    17,
      53,   100,   120,   127,   128,   134,   135,   148,   149,   150,
     151,   152,   155,   156,   158,   159,   160,   161,   162,   163,
     165,    97,   168,   171,   167,   239,   212,   204,    48,   271,
     167,   168,   171,    93,   224,   225,   171,     3,   124,   276,
     277,   234,   214,   171,    89,   115,   232,   234,    54,    54,
     167,    92,    24,    29,    31,    32,    34,    42,    68,    85,
      87,    88,   102,   106,   108,   118,   197,   119,   167,   168,
     171,   213,   168,   222,     3,   160,   217,   136,   137,   138,
     139,   140,   141,   253,   239,   239,   247,    91,   110,   116,
     167,   120,   235,   168,   168,   239,   239,   240,   240,   100,
     127,   167,   103,   120,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   262,
     271,     3,   237,     3,   257,   187,   237,   180,   167,   265,
     266,   267,   268,   269,   271,   282,   226,   238,     3,   231,
     239,   239,   286,   188,    30,   167,   199,   167,   167,   167,
     198,   103,   120,   200,   167,   286,   195,   235,   168,    93,
     124,   107,    91,   116,   239,   239,   217,   166,   114,   240,
     167,   217,   235,   103,   166,   168,   168,   213,    25,    66,
      71,    77,    78,    94,    99,   283,   171,   124,   274,   275,
     276,    69,   227,   168,   167,     6,     6,     6,     6,   103,
      27,    60,   201,   286,   168,   168,   239,   197,   239,   239,
     116,   107,   168,   240,   217,   235,   168,   168,   168,    98,
      77,    77,    77,    98,   266,     3,   125,     6,   168,   171,
     168,   168,   168,   119,   168,   168,   168,   116,   239,   168,
     168,   275,   267,   266,   167,   235,   168,     6,    81,   130,
     286,    50,   228,   168,   167,   239,   284,   168,   239,   257,
     168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   173,   174,   175,   175,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   181,   181,   182,
     182,   183,   184,   185,   185,   186,   186,   187,   188,   189,
     189,   190,   191,   191,   191,   192,   192,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   198,   199,   199,   199,   200,   200,   200,   201,
     201,   201,   202,   202,   203,   203,   203,   203,   204,   204,
     205,   206,   207,   208,   208,   209,   209,   210,   211,   211,
     212,   213,   213,   213,   214,   214,   215,   215,   216,   216,
     217,   217,   218,   219,   219,   219,   220,   220,   221,   222,
     222,   223,   224,   224,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   230,   231,   232,   232,   232,   233,
     233,   234,   234,   234,   234,   234,   234,   235,   235,   236,
     236,   237,   237,   238,   239,   239,   239,   239,   239,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     241,   241,   242,   242,   242,   242,   242,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   244,   244,
     245,   245,   245,   245,   246,   246,   246,   246,   247,   247,
     248,   248,   249,   249,   249,   249,   249,   249,   249,   250,
     250,   251,   252,   253,   253,   253,   253,   253,   253,   254,
     255,   256,   257,   257,   257,   257,   258,   258,   258,   258,
     258,   259,   260,   260,   261,   261,   262,   263,   264,   265,
     265,   266,   266,   267,   267,   268,   268,   269,   270,   271,
     271,   272,   272,   273,   274,   274,   275,   275,   276,   276,
     277,   277,   278,   278,   279,   280,   280,   281,   282,   282,
     282,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   284,   285,   285,   286,   286
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     4,     1,     1,     1,
       1,     2,     1,     1,     4,     5,     4,     1,     2,     1,
       1,     3,     0,     5,     3,     0,     1,     2,     0,     2,
       1,     0,     5,     4,     4,     4,     3,     6,     2,     0,
       7,     4,     2,     8,     5,     3,     0,     5,     1,     3,
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
       5,     6,     6,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     2,     1,     1,
       3,     1,     0,     1,     1,     5,     1,     0,     2,     1,
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
#line 1970 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1976 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 152 "bison_parser.y"
            { }
#line 1982 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 152 "bison_parser.y"
            { }
#line 1988 "bison_parser.cpp"
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
#line 2001 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2007 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2013 "bison_parser.cpp"
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
#line 2026 "bison_parser.cpp"
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
#line 2039 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2045 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2051 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2057 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2063 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2069 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2075 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 152 "bison_parser.y"
            { }
#line 2081 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2087 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 152 "bison_parser.y"
            { }
#line 2093 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2099 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2105 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2111 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 152 "bison_parser.y"
            { }
#line 2117 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 155 "bison_parser.y"
            {
	if ((((*yyvaluep).table_element_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_element_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_element_vec));
}
#line 2130 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2136 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2142 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 152 "bison_parser.y"
            { }
#line 2148 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_specification: /* opt_time_specification  */
#line 152 "bison_parser.y"
            { }
#line 2154 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 152 "bison_parser.y"
            { }
#line 2160 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 152 "bison_parser.y"
            { }
#line 2166 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraint: /* opt_column_constraint  */
#line 152 "bison_parser.y"
            { }
#line 2172 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2178 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2184 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 152 "bison_parser.y"
            { }
#line 2190 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2196 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2202 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2208 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2214 "bison_parser.cpp"
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
#line 2227 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2233 "bison_parser.cpp"
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
#line 2246 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2252 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2258 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2264 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2270 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2276 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2282 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2288 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2294 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 152 "bison_parser.y"
            { }
#line 2300 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2306 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 152 "bison_parser.y"
            { }
#line 2312 "bison_parser.cpp"
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
#line 2325 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2331 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2337 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2343 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2349 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2355 "bison_parser.cpp"
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
#line 2368 "bison_parser.cpp"
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
#line 2381 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2387 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 152 "bison_parser.y"
            { }
#line 2393 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2399 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2405 "bison_parser.cpp"
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
#line 2418 "bison_parser.cpp"
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
#line 2431 "bison_parser.cpp"
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
#line 2444 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2450 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2456 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2462 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2468 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2474 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2480 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2486 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2492 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2498 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2504 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2510 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2516 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2522 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2528 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2534 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 152 "bison_parser.y"
            { }
#line 2540 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2546 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2552 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2558 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2564 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2570 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2576 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2582 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2588 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2594 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2600 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2606 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2612 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2618 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2624 "bison_parser.cpp"
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
#line 2637 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2643 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2649 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 153 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2655 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2661 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_name: /* index_name  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2667 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2673 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2679 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2685 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2691 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2697 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2703 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2709 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2715 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2721 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 152 "bison_parser.y"
            { }
#line 2727 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 163 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2733 "bison_parser.cpp"
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
#line 2746 "bison_parser.cpp"
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

#line 2853 "bison_parser.cpp"

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
#line 3081 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 303 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3092 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 309 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3103 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 318 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3112 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 322 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3121 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 326 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3129 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 329 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3137 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 332 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3145 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 339 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3151 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 340 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3157 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 341 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3163 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 342 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3169 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 343 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3175 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 344 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3181 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 345 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3187 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 346 "bison_parser.y"
                                { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3193 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 347 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3199 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 348 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3205 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 357 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3211 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 358 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3217 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 363 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3223 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 364 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3229 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 368 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3238 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 372 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3248 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 384 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3256 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 387 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3264 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 390 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3272 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 404 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3282 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 414 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3291 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 418 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3301 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 432 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3312 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 438 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3323 "bison_parser.cpp"
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
#line 3342 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 464 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3348 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 468 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3356 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 471 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3362 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 480 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3373 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 494 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3381 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 497 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3391 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 502 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3401 "bison_parser.cpp"
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
#line 3419 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 529 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
		}
#line 3431 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 536 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3443 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 543 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-5].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3455 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 550 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3468 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 561 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3474 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 562 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3480 "bison_parser.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 566 "bison_parser.y"
                   { (yyval.table_element_vec) = new std::vector<TableElement*>(); (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t)); }
#line 3486 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 567 "bison_parser.y"
                                            { (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t)); (yyval.table_element_vec) = (yyvsp[-2].table_element_vec); }
#line 3492 "bison_parser.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 571 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3498 "bison_parser.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 572 "bison_parser.y"
                         { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3504 "bison_parser.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_nullable opt_column_constraint  */
#line 576 "bison_parser.y"
                                                                                {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-3].sval), (yyvsp[-2].column_type_t), (yyvsp[-1].bval), (yyvsp[0].column_constraint_t));
		}
#line 3512 "bison_parser.cpp"
    break;

  case 57: /* column_type: INT  */
#line 582 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3518 "bison_parser.cpp"
    break;

  case 58: /* column_type: INTEGER  */
#line 583 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3524 "bison_parser.cpp"
    break;

  case 59: /* column_type: LONG  */
#line 584 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3530 "bison_parser.cpp"
    break;

  case 60: /* column_type: FLOAT  */
#line 585 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3536 "bison_parser.cpp"
    break;

  case 61: /* column_type: DECIMAL opt_decimal_specification  */
#line 586 "bison_parser.y"
                                              { (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].column_specification_t)}; }
#line 3542 "bison_parser.cpp"
    break;

  case 62: /* column_type: DOUBLE  */
#line 587 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3548 "bison_parser.cpp"
    break;

  case 63: /* column_type: REAL  */
#line 588 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3554 "bison_parser.cpp"
    break;

  case 64: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 589 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3560 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHARACTER VARYING '(' INTVAL ')'  */
#line 590 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR_VARYING, (yyvsp[-1].ival)}; }
#line 3566 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHAR '(' INTVAL ')'  */
#line 591 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3572 "bison_parser.cpp"
    break;

  case 67: /* column_type: TEXT  */
#line 592 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3578 "bison_parser.cpp"
    break;

  case 68: /* column_type: TIME opt_time_specification  */
#line 593 "bison_parser.y"
                                        { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].column_specification_t) }; }
#line 3584 "bison_parser.cpp"
    break;

  case 69: /* column_type: DATETIME  */
#line 594 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3590 "bison_parser.cpp"
    break;

  case 70: /* column_type: DATE  */
#line 595 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3596 "bison_parser.cpp"
    break;

  case 71: /* opt_time_specification: '(' INTVAL ')'  */
#line 599 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3602 "bison_parser.cpp"
    break;

  case 72: /* opt_time_specification: %empty  */
#line 600 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3608 "bison_parser.cpp"
    break;

  case 73: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 604 "bison_parser.y"
                                  { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3614 "bison_parser.cpp"
    break;

  case 74: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 605 "bison_parser.y"
                       { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3620 "bison_parser.cpp"
    break;

  case 75: /* opt_decimal_specification: %empty  */
#line 606 "bison_parser.y"
                    { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3626 "bison_parser.cpp"
    break;

  case 76: /* opt_column_nullable: NULL  */
#line 610 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3632 "bison_parser.cpp"
    break;

  case 77: /* opt_column_nullable: NOT NULL  */
#line 611 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3638 "bison_parser.cpp"
    break;

  case 78: /* opt_column_nullable: %empty  */
#line 612 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3644 "bison_parser.cpp"
    break;

  case 79: /* opt_column_constraint: PRIMARY KEY  */
#line 616 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::PRIMARY_KEY; }
#line 3650 "bison_parser.cpp"
    break;

  case 80: /* opt_column_constraint: UNIQUE  */
#line 617 "bison_parser.y"
               { (yyval.column_constraint_t) = ConstraintType::UNIQUE; }
#line 3656 "bison_parser.cpp"
    break;

  case 81: /* opt_column_constraint: %empty  */
#line 618 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::NOT_SET; }
#line 3662 "bison_parser.cpp"
    break;

  case 82: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 622 "bison_parser.y"
                                             { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PRIMARY_KEY, (yyvsp[-1].str_vec)); }
#line 3668 "bison_parser.cpp"
    break;

  case 83: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 623 "bison_parser.y"
                                        { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::UNIQUE, (yyvsp[-1].str_vec)); }
#line 3674 "bison_parser.cpp"
    break;

  case 84: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 634 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3685 "bison_parser.cpp"
    break;

  case 85: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 640 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3696 "bison_parser.cpp"
    break;

  case 86: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 646 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3706 "bison_parser.cpp"
    break;

  case 87: /* drop_statement: DROP INDEX opt_exists index_name ON table_name  */
#line 651 "bison_parser.y"
                                                               {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
    			(yyval.drop_stmt)->ifExists = (yyvsp[-3].bval);
    			(yyval.drop_stmt)->indexName = (yyvsp[-2].sval);
    		}
#line 3717 "bison_parser.cpp"
    break;

  case 88: /* opt_exists: IF EXISTS  */
#line 660 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3723 "bison_parser.cpp"
    break;

  case 89: /* opt_exists: %empty  */
#line 661 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3729 "bison_parser.cpp"
    break;

  case 90: /* alter_statement: ALTER TABLE table_name DROP COLUMN opt_exists column_name  */
#line 670 "bison_parser.y"
                                                                          {
			(yyval.alter_stmt) = new AlterStatement(kAlterDropColumn);
			(yyval.alter_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.alter_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.alter_stmt)->name = (yyvsp[-4].table_name).name;
			(yyval.alter_stmt)->columnName = (yyvsp[0].expr)->name;
		}
#line 3741 "bison_parser.cpp"
    break;

  case 91: /* delete_statement: DELETE FROM table_name opt_where  */
#line 685 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3752 "bison_parser.cpp"
    break;

  case 92: /* truncate_statement: TRUNCATE table_name  */
#line 694 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3762 "bison_parser.cpp"
    break;

  case 93: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 707 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3774 "bison_parser.cpp"
    break;

  case 94: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 714 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3786 "bison_parser.cpp"
    break;

  case 95: /* opt_column_list: '(' ident_commalist ')'  */
#line 725 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3792 "bison_parser.cpp"
    break;

  case 96: /* opt_column_list: %empty  */
#line 726 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3798 "bison_parser.cpp"
    break;

  case 97: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 736 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3809 "bison_parser.cpp"
    break;

  case 98: /* update_clause_commalist: update_clause  */
#line 745 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3815 "bison_parser.cpp"
    break;

  case 99: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 746 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3821 "bison_parser.cpp"
    break;

  case 100: /* update_clause: IDENTIFIER '=' expr  */
#line 750 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3831 "bison_parser.cpp"
    break;

  case 101: /* select_statement: opt_with_clause select_with_paren  */
#line 762 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3840 "bison_parser.cpp"
    break;

  case 102: /* select_statement: opt_with_clause select_no_paren  */
#line 766 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3849 "bison_parser.cpp"
    break;

  case 103: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 770 "bison_parser.y"
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
#line 3865 "bison_parser.cpp"
    break;

  case 106: /* select_within_set_operation_no_parentheses: select_clause  */
#line 788 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3871 "bison_parser.cpp"
    break;

  case 107: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 789 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3884 "bison_parser.cpp"
    break;

  case 108: /* select_with_paren: '(' select_no_paren ')'  */
#line 800 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3890 "bison_parser.cpp"
    break;

  case 109: /* select_with_paren: '(' select_with_paren ')'  */
#line 801 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3896 "bison_parser.cpp"
    break;

  case 110: /* select_no_paren: select_clause opt_order opt_limit  */
#line 805 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3911 "bison_parser.cpp"
    break;

  case 111: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 815 "bison_parser.y"
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
#line 3926 "bison_parser.cpp"
    break;

  case 112: /* set_operator: set_type opt_all  */
#line 828 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3935 "bison_parser.cpp"
    break;

  case 113: /* set_type: UNION  */
#line 835 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3944 "bison_parser.cpp"
    break;

  case 114: /* set_type: INTERSECT  */
#line 839 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3953 "bison_parser.cpp"
    break;

  case 115: /* set_type: EXCEPT  */
#line 843 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3962 "bison_parser.cpp"
    break;

  case 116: /* opt_all: ALL  */
#line 850 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3970 "bison_parser.cpp"
    break;

  case 117: /* opt_all: %empty  */
#line 853 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3978 "bison_parser.cpp"
    break;

  case 118: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 859 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3992 "bison_parser.cpp"
    break;

  case 119: /* opt_distinct: DISTINCT  */
#line 871 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3998 "bison_parser.cpp"
    break;

  case 120: /* opt_distinct: %empty  */
#line 872 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4004 "bison_parser.cpp"
    break;

  case 122: /* opt_from_clause: from_clause  */
#line 880 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4010 "bison_parser.cpp"
    break;

  case 123: /* opt_from_clause: %empty  */
#line 881 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4016 "bison_parser.cpp"
    break;

  case 124: /* from_clause: FROM table_ref  */
#line 885 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4022 "bison_parser.cpp"
    break;

  case 125: /* opt_where: WHERE expr  */
#line 890 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4028 "bison_parser.cpp"
    break;

  case 126: /* opt_where: %empty  */
#line 891 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4034 "bison_parser.cpp"
    break;

  case 127: /* opt_group: GROUP BY expr_list opt_having  */
#line 895 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4044 "bison_parser.cpp"
    break;

  case 128: /* opt_group: %empty  */
#line 900 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4050 "bison_parser.cpp"
    break;

  case 129: /* opt_having: HAVING expr  */
#line 904 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4056 "bison_parser.cpp"
    break;

  case 130: /* opt_having: %empty  */
#line 905 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4062 "bison_parser.cpp"
    break;

  case 131: /* opt_order: ORDER BY order_list  */
#line 909 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4068 "bison_parser.cpp"
    break;

  case 132: /* opt_order: %empty  */
#line 910 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4074 "bison_parser.cpp"
    break;

  case 133: /* order_list: order_desc  */
#line 914 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4080 "bison_parser.cpp"
    break;

  case 134: /* order_list: order_list ',' order_desc  */
#line 915 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4086 "bison_parser.cpp"
    break;

  case 135: /* order_desc: expr opt_order_type  */
#line 919 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4092 "bison_parser.cpp"
    break;

  case 136: /* opt_order_type: ASC  */
#line 923 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4098 "bison_parser.cpp"
    break;

  case 137: /* opt_order_type: DESC  */
#line 924 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4104 "bison_parser.cpp"
    break;

  case 138: /* opt_order_type: %empty  */
#line 925 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4110 "bison_parser.cpp"
    break;

  case 139: /* opt_top: TOP int_literal  */
#line 931 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4116 "bison_parser.cpp"
    break;

  case 140: /* opt_top: %empty  */
#line 932 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4122 "bison_parser.cpp"
    break;

  case 141: /* opt_limit: LIMIT expr  */
#line 936 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4128 "bison_parser.cpp"
    break;

  case 142: /* opt_limit: OFFSET expr  */
#line 937 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4134 "bison_parser.cpp"
    break;

  case 143: /* opt_limit: LIMIT expr OFFSET expr  */
#line 938 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4140 "bison_parser.cpp"
    break;

  case 144: /* opt_limit: LIMIT ALL  */
#line 939 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4146 "bison_parser.cpp"
    break;

  case 145: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 940 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4152 "bison_parser.cpp"
    break;

  case 146: /* opt_limit: %empty  */
#line 941 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4158 "bison_parser.cpp"
    break;

  case 147: /* expr_list: expr_alias  */
#line 948 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4164 "bison_parser.cpp"
    break;

  case 148: /* expr_list: expr_list ',' expr_alias  */
#line 949 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4170 "bison_parser.cpp"
    break;

  case 149: /* opt_literal_list: literal_list  */
#line 953 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4176 "bison_parser.cpp"
    break;

  case 150: /* opt_literal_list: %empty  */
#line 954 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4182 "bison_parser.cpp"
    break;

  case 151: /* literal_list: literal  */
#line 958 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4188 "bison_parser.cpp"
    break;

  case 152: /* literal_list: literal_list ',' literal  */
#line 959 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4194 "bison_parser.cpp"
    break;

  case 153: /* expr_alias: expr opt_alias  */
#line 963 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4206 "bison_parser.cpp"
    break;

  case 159: /* operand: '(' expr ')'  */
#line 981 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4212 "bison_parser.cpp"
    break;

  case 169: /* operand: '(' select_no_paren ')'  */
#line 991 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4218 "bison_parser.cpp"
    break;

  case 172: /* unary_expr: '-' operand  */
#line 1000 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4224 "bison_parser.cpp"
    break;

  case 173: /* unary_expr: NOT operand  */
#line 1001 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4230 "bison_parser.cpp"
    break;

  case 174: /* unary_expr: operand ISNULL  */
#line 1002 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4236 "bison_parser.cpp"
    break;

  case 175: /* unary_expr: operand IS NULL  */
#line 1003 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4242 "bison_parser.cpp"
    break;

  case 176: /* unary_expr: operand IS NOT NULL  */
#line 1004 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4248 "bison_parser.cpp"
    break;

  case 178: /* binary_expr: operand '-' operand  */
#line 1009 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4254 "bison_parser.cpp"
    break;

  case 179: /* binary_expr: operand '+' operand  */
#line 1010 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4260 "bison_parser.cpp"
    break;

  case 180: /* binary_expr: operand '/' operand  */
#line 1011 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4266 "bison_parser.cpp"
    break;

  case 181: /* binary_expr: operand '*' operand  */
#line 1012 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4272 "bison_parser.cpp"
    break;

  case 182: /* binary_expr: operand '%' operand  */
#line 1013 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4278 "bison_parser.cpp"
    break;

  case 183: /* binary_expr: operand '^' operand  */
#line 1014 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4284 "bison_parser.cpp"
    break;

  case 184: /* binary_expr: operand LIKE operand  */
#line 1015 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4290 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand NOT LIKE operand  */
#line 1016 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4296 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand ILIKE operand  */
#line 1017 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4302 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand CONCAT operand  */
#line 1018 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4308 "bison_parser.cpp"
    break;

  case 188: /* logic_expr: expr AND expr  */
#line 1022 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4314 "bison_parser.cpp"
    break;

  case 189: /* logic_expr: expr OR expr  */
#line 1023 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4320 "bison_parser.cpp"
    break;

  case 190: /* in_expr: operand IN '(' expr_list ')'  */
#line 1027 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4326 "bison_parser.cpp"
    break;

  case 191: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1028 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4332 "bison_parser.cpp"
    break;

  case 192: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1029 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4338 "bison_parser.cpp"
    break;

  case 193: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1030 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4344 "bison_parser.cpp"
    break;

  case 194: /* case_expr: CASE expr case_list END  */
#line 1036 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4350 "bison_parser.cpp"
    break;

  case 195: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1037 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4356 "bison_parser.cpp"
    break;

  case 196: /* case_expr: CASE case_list END  */
#line 1038 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4362 "bison_parser.cpp"
    break;

  case 197: /* case_expr: CASE case_list ELSE expr END  */
#line 1039 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4368 "bison_parser.cpp"
    break;

  case 198: /* case_list: WHEN expr THEN expr  */
#line 1043 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4374 "bison_parser.cpp"
    break;

  case 199: /* case_list: case_list WHEN expr THEN expr  */
#line 1044 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4380 "bison_parser.cpp"
    break;

  case 200: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1048 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4386 "bison_parser.cpp"
    break;

  case 201: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1049 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4392 "bison_parser.cpp"
    break;

  case 202: /* comp_expr: operand '=' operand  */
#line 1053 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4398 "bison_parser.cpp"
    break;

  case 203: /* comp_expr: operand EQUALS operand  */
#line 1054 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4404 "bison_parser.cpp"
    break;

  case 204: /* comp_expr: operand NOTEQUALS operand  */
#line 1055 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4410 "bison_parser.cpp"
    break;

  case 205: /* comp_expr: operand '<' operand  */
#line 1056 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4416 "bison_parser.cpp"
    break;

  case 206: /* comp_expr: operand '>' operand  */
#line 1057 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4422 "bison_parser.cpp"
    break;

  case 207: /* comp_expr: operand LESSEQ operand  */
#line 1058 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4428 "bison_parser.cpp"
    break;

  case 208: /* comp_expr: operand GREATEREQ operand  */
#line 1059 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4434 "bison_parser.cpp"
    break;

  case 209: /* function_expr: IDENTIFIER '(' ')'  */
#line 1063 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4440 "bison_parser.cpp"
    break;

  case 210: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1064 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4446 "bison_parser.cpp"
    break;

  case 211: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1068 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4452 "bison_parser.cpp"
    break;

  case 212: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1072 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4458 "bison_parser.cpp"
    break;

  case 213: /* datetime_field: SECOND  */
#line 1076 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4464 "bison_parser.cpp"
    break;

  case 214: /* datetime_field: MINUTE  */
#line 1077 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4470 "bison_parser.cpp"
    break;

  case 215: /* datetime_field: HOUR  */
#line 1078 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4476 "bison_parser.cpp"
    break;

  case 216: /* datetime_field: DAY  */
#line 1079 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4482 "bison_parser.cpp"
    break;

  case 217: /* datetime_field: MONTH  */
#line 1080 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4488 "bison_parser.cpp"
    break;

  case 218: /* datetime_field: YEAR  */
#line 1081 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4494 "bison_parser.cpp"
    break;

  case 219: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1085 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4500 "bison_parser.cpp"
    break;

  case 220: /* array_index: operand '[' int_literal ']'  */
#line 1089 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4506 "bison_parser.cpp"
    break;

  case 221: /* between_expr: operand BETWEEN operand AND operand  */
#line 1093 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4512 "bison_parser.cpp"
    break;

  case 222: /* column_name: IDENTIFIER  */
#line 1097 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4518 "bison_parser.cpp"
    break;

  case 223: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1098 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4524 "bison_parser.cpp"
    break;

  case 224: /* column_name: '*'  */
#line 1099 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4530 "bison_parser.cpp"
    break;

  case 225: /* column_name: IDENTIFIER '.' '*'  */
#line 1100 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4536 "bison_parser.cpp"
    break;

  case 231: /* string_literal: STRING  */
#line 1112 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4542 "bison_parser.cpp"
    break;

  case 232: /* bool_literal: TRUE  */
#line 1116 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4548 "bison_parser.cpp"
    break;

  case 233: /* bool_literal: FALSE  */
#line 1117 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4554 "bison_parser.cpp"
    break;

  case 234: /* num_literal: FLOATVAL  */
#line 1121 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4560 "bison_parser.cpp"
    break;

  case 236: /* int_literal: INTVAL  */
#line 1126 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4566 "bison_parser.cpp"
    break;

  case 237: /* null_literal: NULL  */
#line 1130 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4572 "bison_parser.cpp"
    break;

  case 238: /* param_expr: '?'  */
#line 1134 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4582 "bison_parser.cpp"
    break;

  case 240: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1147 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4593 "bison_parser.cpp"
    break;

  case 244: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1163 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4604 "bison_parser.cpp"
    break;

  case 245: /* table_ref_commalist: table_ref_atomic  */
#line 1172 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4610 "bison_parser.cpp"
    break;

  case 246: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1173 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4616 "bison_parser.cpp"
    break;

  case 247: /* table_ref_name: table_name opt_table_alias  */
#line 1178 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4628 "bison_parser.cpp"
    break;

  case 248: /* table_ref_name_no_alias: table_name  */
#line 1189 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4638 "bison_parser.cpp"
    break;

  case 249: /* table_name: IDENTIFIER  */
#line 1198 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4644 "bison_parser.cpp"
    break;

  case 250: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1199 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4650 "bison_parser.cpp"
    break;

  case 251: /* opt_index_name: IDENTIFIER  */
#line 1203 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4656 "bison_parser.cpp"
    break;

  case 252: /* opt_index_name: %empty  */
#line 1204 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4662 "bison_parser.cpp"
    break;

  case 253: /* index_name: IDENTIFIER  */
#line 1208 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4668 "bison_parser.cpp"
    break;

  case 255: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1214 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4674 "bison_parser.cpp"
    break;

  case 257: /* opt_table_alias: %empty  */
#line 1220 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4680 "bison_parser.cpp"
    break;

  case 258: /* alias: AS IDENTIFIER  */
#line 1225 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4686 "bison_parser.cpp"
    break;

  case 259: /* alias: IDENTIFIER  */
#line 1226 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4692 "bison_parser.cpp"
    break;

  case 261: /* opt_alias: %empty  */
#line 1232 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4698 "bison_parser.cpp"
    break;

  case 263: /* opt_with_clause: %empty  */
#line 1242 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4704 "bison_parser.cpp"
    break;

  case 264: /* with_clause: WITH with_description_list  */
#line 1246 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4710 "bison_parser.cpp"
    break;

  case 265: /* with_description_list: with_description  */
#line 1250 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4719 "bison_parser.cpp"
    break;

  case 266: /* with_description_list: with_description_list ',' with_description  */
#line 1254 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4728 "bison_parser.cpp"
    break;

  case 267: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1261 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4738 "bison_parser.cpp"
    break;

  case 268: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1275 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4750 "bison_parser.cpp"
    break;

  case 269: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1283 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4763 "bison_parser.cpp"
    break;

  case 270: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1293 "bison_parser.y"
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
#line 4783 "bison_parser.cpp"
    break;

  case 271: /* opt_join_type: INNER  */
#line 1311 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4789 "bison_parser.cpp"
    break;

  case 272: /* opt_join_type: LEFT OUTER  */
#line 1312 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4795 "bison_parser.cpp"
    break;

  case 273: /* opt_join_type: LEFT  */
#line 1313 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4801 "bison_parser.cpp"
    break;

  case 274: /* opt_join_type: RIGHT OUTER  */
#line 1314 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4807 "bison_parser.cpp"
    break;

  case 275: /* opt_join_type: RIGHT  */
#line 1315 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4813 "bison_parser.cpp"
    break;

  case 276: /* opt_join_type: FULL OUTER  */
#line 1316 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4819 "bison_parser.cpp"
    break;

  case 277: /* opt_join_type: OUTER  */
#line 1317 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4825 "bison_parser.cpp"
    break;

  case 278: /* opt_join_type: FULL  */
#line 1318 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4831 "bison_parser.cpp"
    break;

  case 279: /* opt_join_type: CROSS  */
#line 1319 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4837 "bison_parser.cpp"
    break;

  case 280: /* opt_join_type: %empty  */
#line 1320 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4843 "bison_parser.cpp"
    break;

  case 284: /* ident_commalist: IDENTIFIER  */
#line 1340 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4849 "bison_parser.cpp"
    break;

  case 285: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1341 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4855 "bison_parser.cpp"
    break;


#line 4859 "bison_parser.cpp"

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

#line 1344 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
