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
  YYSYMBOL_opt_column_constraints = 200,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint = 201,        /* column_constraint  */
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
#define YYLAST   806

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  286
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  530

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
       0,   284,   284,   305,   311,   320,   324,   328,   331,   334,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     359,   360,   365,   366,   370,   374,   386,   389,   392,   398,
     399,   406,   413,   416,   420,   434,   440,   449,   466,   470,
     473,   482,   496,   499,   504,   518,   531,   538,   545,   552,
     563,   564,   568,   569,   573,   574,   578,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   602,   603,   607,   608,   609,   613,   614,   615,   619,
     620,   621,   622,   626,   627,   638,   644,   650,   655,   663,
     664,   673,   688,   697,   710,   717,   728,   729,   739,   748,
     749,   753,   765,   769,   773,   787,   788,   791,   792,   803,
     804,   808,   818,   831,   838,   842,   846,   853,   856,   862,
     874,   875,   879,   883,   884,   888,   893,   894,   898,   903,
     907,   908,   912,   913,   917,   918,   922,   926,   927,   928,
     934,   935,   939,   940,   941,   942,   943,   944,   951,   952,
     956,   957,   961,   962,   966,   976,   977,   978,   979,   980,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   998,   999,  1003,  1004,  1005,  1006,  1007,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1025,
    1026,  1030,  1031,  1032,  1033,  1039,  1040,  1041,  1042,  1046,
    1047,  1051,  1052,  1056,  1057,  1058,  1059,  1060,  1061,  1062,
    1066,  1067,  1071,  1075,  1079,  1080,  1081,  1082,  1083,  1084,
    1088,  1092,  1096,  1100,  1101,  1102,  1103,  1107,  1108,  1109,
    1110,  1111,  1115,  1119,  1120,  1124,  1125,  1129,  1133,  1137,
    1149,  1150,  1160,  1161,  1165,  1166,  1175,  1176,  1181,  1192,
    1201,  1202,  1206,  1207,  1211,  1216,  1217,  1222,  1223,  1228,
    1229,  1234,  1235,  1244,  1245,  1249,  1253,  1257,  1264,  1277,
    1285,  1295,  1314,  1315,  1316,  1317,  1318,  1319,  1320,  1321,
    1322,  1323,  1328,  1337,  1338,  1343,  1344
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
  "opt_column_constraints", "column_constraint", "table_constraint",
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

#define YYPACT_NINF (-415)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-284)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     509,    61,    39,    55,   130,    39,   131,    72,   103,    10,
      39,   201,    39,   134,     8,   230,   144,   144,   144,   295,
     141,  -415,   208,  -415,   208,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,   -33,  -415,   329,
     165,  -415,   192,   260,  -415,   239,   239,   239,    39,   367,
      39,   250,  -415,    39,   -63,   249,   249,   249,    39,  -415,
     252,   207,  -415,  -415,  -415,  -415,  -415,  -415,   461,  -415,
     284,  -415,  -415,   259,   -33,    32,  -415,    20,  -415,   381,
      17,   385,   265,   388,    39,    39,   310,  -415,   301,   231,
     391,   307,   398,   398,   358,   401,    39,    39,  -415,   238,
     230,  -415,   240,   402,   397,   246,   247,  -415,  -415,  -415,
     -33,   305,   294,   -33,    43,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,   254,   255,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,   376,  -415,   302,   -46,   231,   257,
    -415,   398,   428,   227,   285,   -36,  -415,   396,   326,  -415,
     326,  -415,  -415,  -415,  -415,  -415,  -415,  -415,   435,  -415,
    -415,   257,  -415,  -415,   363,  -415,  -415,    32,  -415,  -415,
     257,   363,   257,    79,  -415,  -415,    17,  -415,    39,   438,
     331,   159,   319,   120,   277,   280,   281,   202,   268,   286,
     303,  -415,   253,   -51,   330,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,   352,  -415,  -100,   287,  -415,   257,   391,  -415,   249,
     404,  -415,  -415,   288,   -60,  -415,   360,   289,  -415,    37,
      43,   -33,   296,  -415,    80,    43,   -51,   405,    56,  -415,
     299,   364,  -415,   688,   353,   304,   -16,  -415,  -415,  -415,
     331,    16,    13,   416,   188,   257,   257,   104,    99,   317,
     303,   529,   257,   116,   306,   -69,   257,   257,   303,  -415,
     303,   -41,   327,   163,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   402,
      39,  -415,   474,    17,   -51,  -415,    15,   367,    17,  -415,
     435,    12,   310,  -415,   257,  -415,   493,  -415,  -415,  -415,
    -415,   257,  -415,  -415,  -415,  -415,   257,   257,   428,   398,
    -415,   468,  -415,   332,   335,  -415,  -415,   336,  -415,  -415,
    -415,  -415,   337,  -415,    71,   338,   428,  -415,   159,  -415,
    -415,   257,  -415,  -415,   339,  -415,  -415,  -415,  -415,  -415,
    -415,   413,   113,   161,   154,   257,   257,  -415,   416,   408,
      60,  -415,  -415,  -415,   395,   476,   548,   303,   344,   253,
    -415,   411,   354,   548,   548,   548,   548,   587,   587,   587,
     587,   116,   116,    90,    90,    90,   -90,   351,  -415,  -415,
      -4,   349,  -415,  -415,   149,  -415,   331,  -415,    -5,  -415,
     356,  -415,    33,  -415,   451,  -415,  -415,  -415,   -51,   -51,
     150,  -415,   361,   519,  -415,   524,   526,   527,  -415,   415,
    -415,  -415,   433,    71,  -415,   428,   162,  -415,   175,  -415,
     257,   688,   257,   257,  -415,   138,   209,   369,  -415,   303,
     548,   253,   371,   180,  -415,  -415,  -415,  -415,   372,   443,
    -415,  -415,  -415,   467,   469,   473,   454,    12,   550,  -415,
    -415,  -415,   429,  -415,  -415,   549,   186,   389,   390,   394,
    -415,  -415,  -415,   187,  -415,  -415,    57,   399,   -51,   151,
    -415,   257,  -415,   529,   400,   195,  -415,  -415,    33,    12,
    -415,  -415,  -415,    12,   444,   392,   257,   407,  -415,   557,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,   -51,  -415,  -415,
    -415,  -415,    24,   428,   -13,  -415,   409,   403,   257,   196,
     257,  -415,  -415,    15,   -51,  -415,  -415,   -51,   410,  -415
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
      40,    89,   254,    88,    85,    86,   268,   267,     0,   140,
     120,     0,   110,   109,   133,   106,   105,   107,   117,   113,
       0,   133,     0,     0,   111,    34,     0,    50,     0,     0,
     264,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,   225,     0,   126,   155,   162,   163,   164,   157,   159,
     165,   158,   178,   166,   167,   168,   169,   161,   156,   171,
     172,     0,   285,     0,     0,    95,     0,     0,    98,    90,
       0,    36,    41,    24,     0,    22,   124,   122,   148,   262,
     147,     0,   132,   134,   139,   147,   143,   145,   142,   153,
       0,     0,    47,     0,     0,     0,     0,    52,    54,    55,
     264,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   174,     0,   173,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,   101,   100,     0,     0,     0,    20,
       0,     0,   127,   123,     0,   260,     0,   261,   154,   104,
     108,     0,   138,   137,   136,   112,     0,     0,     0,     0,
      58,     0,    63,    75,     0,    62,    60,     0,    70,    69,
      59,    67,    72,    57,    78,     0,     0,    46,     0,    49,
     210,     0,   224,   226,     0,   214,   215,   216,   217,   218,
     219,     0,     0,     0,     0,     0,     0,   197,     0,     0,
       0,   170,   160,   189,   190,     0,   185,     0,     0,     0,
     176,     0,   188,   187,   203,   204,   205,   206,   207,   208,
     209,   180,   179,   182,   181,   183,   184,     0,    35,   286,
       0,   223,    91,    39,     0,    23,   264,   125,   240,   242,
       0,   244,   258,   243,   129,   149,   259,   135,   146,   144,
       0,    45,     0,     0,    61,     0,     0,     0,    68,     0,
      80,    81,     0,    56,    76,     0,     0,    53,     0,   201,
       0,     0,     0,     0,   195,     0,     0,     0,   220,     0,
     186,     0,     0,     0,   177,   221,    94,    25,     0,     0,
     280,   272,   278,   276,   279,   274,     0,     0,     0,   257,
     248,   255,     0,   119,    48,     0,     0,     0,     0,     0,
      79,    82,    77,     0,    84,   211,     0,     0,   199,     0,
     198,     0,   202,   222,     0,     0,   193,   191,   258,     0,
     275,   277,   273,     0,   241,   259,     0,     0,    74,     0,
      64,    66,    71,    83,   212,   213,   196,   200,   194,   192,
     245,   269,   281,     0,   131,    65,     0,     0,     0,     0,
       0,   128,    73,     0,   282,   270,   256,   130,     0,   271
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -415,  -415,  -415,   488,  -415,   540,  -415,   269,  -415,   224,
    -415,  -415,  -415,  -415,   276,   -85,   430,  -415,  -415,  -415,
     292,  -415,   241,  -415,   152,  -415,  -415,  -415,   142,  -415,
    -415,   -43,  -415,  -415,  -415,  -415,   446,  -415,  -415,   368,
    -176,   -75,  -415,    14,   -73,   -38,  -415,  -415,   -78,   340,
    -415,  -415,  -415,  -119,  -415,  -415,    29,  -415,   270,  -415,
    -415,   -32,  -260,  -415,    38,   282,  -139,  -138,  -415,  -415,
    -415,  -415,  -415,  -415,   341,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -293,   -70,   -87,  -415,  -415,   -92,
    -415,  -415,  -415,  -414,    98,  -415,  -415,  -415,     7,  -415,
    -415,  -415,   100,   365,  -415,  -415,  -415,  -415,   489,  -415,
    -415,  -415,  -415,  -311
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   224,   225,    23,    64,
      24,   133,    25,    26,    88,   148,   221,    27,    28,    29,
      83,   246,   247,   248,   334,   418,   414,   423,   424,   249,
      30,    95,    31,    32,    33,    34,   143,    35,   145,   146,
      36,   164,   165,   166,    76,   110,   111,   169,    77,   161,
     226,   302,   303,   140,   463,   521,   114,   232,   233,   314,
     104,   174,   227,   123,   124,   228,   229,   194,   195,   196,
     197,   198,   199,   200,   258,   201,   202,   203,   204,   205,
     351,   206,   207,   208,   209,   210,   126,   127,   128,   129,
     130,   131,   397,   398,   399,   400,   401,    51,   402,   136,
     153,   459,   460,   461,   308,    37,    38,    61,    62,   403,
     456,   525,    69,   213
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     193,   106,   360,   392,   242,   149,   149,   410,   150,    41,
     125,   159,    44,    96,    97,    40,   342,    52,   391,    54,
     449,   116,   117,   118,    73,   426,   218,    58,   160,   107,
      92,   234,   167,   236,   238,   167,   305,   520,   171,   113,
     305,   107,    40,   494,   274,   266,   139,   179,   257,   449,
     261,    75,   263,   265,   149,    86,   211,    89,    42,   367,
      91,   450,   267,   266,   108,    98,   451,    59,   291,    93,
     215,   292,   452,   453,   339,   289,   108,   294,   180,   512,
     267,   428,   183,   116,   117,   118,   368,    39,   105,   454,
     450,   137,   138,  -281,   455,   451,   112,   172,   419,   362,
     109,   452,   453,   154,   155,   517,   239,    50,   299,   443,
     317,   300,   109,   156,   473,   173,   352,   353,   454,   264,
     119,   181,   261,   455,   184,   185,   186,   363,   364,   231,
     365,   420,   366,    43,    74,   217,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   266,   337,   167,   518,   338,   310,   458,   304,   120,
     121,   306,   243,   187,   446,    48,  -246,   176,   267,   312,
     266,   266,   234,   343,   421,   191,   296,   408,   409,   396,
     344,   485,   119,   404,   340,   240,   244,   267,   267,   122,
     355,   422,   237,   230,   266,   313,    49,   387,   309,   188,
     235,    45,   519,   315,    55,   183,   116,   117,   118,   356,
      46,   267,   189,    56,   256,   357,   435,   436,   266,   245,
     448,   120,   121,   125,   274,   504,   438,   266,   125,   440,
     528,   304,   149,    60,   411,   267,   514,   431,   190,   191,
      47,    65,    66,    57,   267,   433,   192,   184,   185,   186,
     274,   122,   266,   288,   480,   289,   183,   116,   117,   118,
     183,   116,   117,   118,   356,   266,   370,   506,   432,   267,
     434,   183,   116,   117,   118,   266,   285,   286,   287,   288,
      53,   289,   267,   371,    73,   437,   187,   251,    63,   252,
     214,   476,   267,   478,   479,    67,   442,   388,   184,   185,
     186,   483,   184,   185,   186,   119,   183,   116,   117,   118,
      73,    68,   256,   259,   185,   186,   481,   447,   464,    70,
     176,   292,   188,   266,   345,   346,   347,   348,   349,   350,
     474,   390,    78,   292,    79,   189,   394,   187,    84,    85,
     267,   187,   507,   475,   120,   121,   304,   268,   487,   185,
     186,   304,   187,    81,   498,   503,   119,   499,   292,    80,
     119,   190,   191,   509,   526,    82,   304,   292,   484,   192,
      87,   119,    90,   188,   122,    94,    99,   188,   100,   524,
     102,   527,   103,   269,   115,   134,   189,   187,   260,   132,
     189,   135,   139,   141,   144,   120,   121,   147,   142,   120,
     121,   189,   116,   151,   152,    74,   119,   158,   118,   160,
     120,   121,   190,   191,   162,   163,   190,   191,   168,   170,
     192,   177,   175,   260,   192,   122,   176,   190,   191,   122,
     270,   212,   178,   216,   219,   192,   189,   220,   223,   112,
     122,   241,    15,   250,   253,   120,   121,   254,   255,   290,
     271,   262,   297,   301,   293,   298,   319,   272,   273,   316,
     304,  -283,   190,   191,   274,   275,   318,   311,     1,   449,
     192,   336,   335,    73,   361,   122,     2,   389,   276,   277,
     278,   279,   280,     3,   358,   281,   282,     4,   283,   284,
     285,   286,   287,   288,   369,   289,   406,     5,   412,   413,
       6,     7,   415,   416,   417,   425,   430,   429,   367,   266,
     450,   441,     8,     9,   444,   451,     1,   445,   252,   289,
     462,   452,   453,    10,     2,   466,    11,   457,   465,   269,
     467,     3,   468,   469,   470,     4,   471,   482,   454,   486,
     488,   489,  -281,   455,   490,     5,   491,    12,     6,     7,
     492,    13,   493,   495,   496,   497,   101,   500,   501,   513,
       8,     9,   502,   516,    72,   472,    14,   505,   508,   395,
     523,    10,    15,   393,    11,   515,   270,   522,   529,   427,
     222,   407,   269,   477,   182,   295,   405,   511,   510,   157,
     439,   341,     0,     0,   307,    12,   359,     0,   354,    13,
       0,   269,     0,     0,   273,     0,    16,    17,    18,     0,
     274,   275,     0,     0,    14,  -247,     0,     0,     0,     0,
      15,     0,     0,     0,   276,   277,   278,   279,   280,   270,
       0,   281,   282,     0,   283,   284,   285,   286,   287,   288,
     269,   289,     0,     0,     0,     0,     0,     0,  -284,   359,
       0,     0,     0,     0,    16,    17,    18,   273,     0,     0,
       0,     0,     0,   274,   275,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   273,   276,   277,   278,
     279,   280,   274,  -284,   281,   282,     0,   283,   284,   285,
     286,   287,   288,     0,   289,     0,  -284,  -284,  -284,   279,
     280,     0,     0,   281,   282,     0,   283,   284,   285,   286,
     287,   288,   320,   289,     0,   273,     0,   321,     0,   322,
     323,   274,   324,     0,     0,     0,     0,     0,     0,     0,
     325,     0,     0,     0,     0,     0,     0,     0,  -284,  -284,
       0,     0,  -284,  -284,     0,   283,   284,   285,   286,   287,
     288,     0,   289,     0,     0,     0,   326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   327,     0,   328,   329,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     330,     0,     0,     0,   331,     0,   332,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   333
};

static const yytype_int16 yycheck[] =
{
     139,    74,   262,   296,   180,    92,    93,   318,    93,     2,
      80,   103,     5,    56,    57,     3,     3,    10,     3,    12,
      25,     4,     5,     6,    57,   336,   145,    19,    12,     9,
      93,   170,   110,   172,   173,   113,     3,    50,   113,    77,
       3,     9,     3,   457,   134,   114,    82,    93,   187,    25,
     188,    37,   190,   192,   141,    48,   141,    50,     3,   100,
      53,    66,   131,   114,    44,    58,    71,    59,   168,   132,
     143,   171,    77,    78,   250,   165,    44,   216,   124,   493,
     131,   341,     3,     4,     5,     6,   127,    26,    74,    94,
      66,    84,    85,    98,    99,    71,    76,    54,    27,   168,
      80,    77,    78,    96,    97,    81,   176,    97,   168,   369,
      54,   171,    80,    99,   425,    72,   255,   256,    94,   192,
     103,   167,   260,    99,    45,    46,    47,   266,   267,   167,
     268,    60,   270,     3,   167,   171,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   114,   168,   231,   130,   171,   231,   124,   171,   142,
     143,   124,     3,    84,   168,    93,   171,   171,   131,    89,
     114,   114,   311,   160,   103,   160,   219,   316,   317,   167,
     253,   441,   103,   302,   168,   178,    27,   131,   131,   172,
      91,   120,   113,   164,   114,   115,    93,   289,   230,   120,
     171,    70,   513,   235,    70,     3,     4,     5,     6,   110,
      79,   131,   133,    79,   110,   116,   355,   356,   114,    60,
     396,   142,   143,   293,   134,   168,   166,   114,   298,   367,
     523,   171,   319,     3,   319,   131,   496,   124,   159,   160,
     109,    17,    18,   109,   131,    91,   167,    45,    46,    47,
     134,   172,   114,   163,   116,   165,     3,     4,     5,     6,
       3,     4,     5,     6,   110,   114,   103,   116,   107,   131,
     116,     3,     4,     5,     6,   114,   160,   161,   162,   163,
      79,   165,   131,   120,    57,   358,    84,   167,   144,   169,
      63,   430,   131,   432,   433,     0,   369,   290,    45,    46,
      47,   439,    45,    46,    47,   103,     3,     4,     5,     6,
      57,   170,   110,    45,    46,    47,   107,   168,   168,   111,
     171,   171,   120,   114,   136,   137,   138,   139,   140,   141,
     168,   293,     3,   171,   169,   133,   298,    84,    46,    47,
     131,    84,   481,   168,   142,   143,   171,    17,   168,    46,
      47,   171,    84,    93,   168,   168,   103,   171,   171,   167,
     103,   159,   160,   168,   168,   126,   171,   171,   441,   167,
       3,   103,   122,   120,   172,   126,   124,   120,   171,   518,
      96,   520,   123,    53,     3,   120,   133,    84,   120,     4,
     133,     3,    82,    92,     3,   142,   143,    90,   167,   142,
     143,   133,     4,    45,     3,   167,   103,   167,     6,    12,
     142,   143,   159,   160,   168,   168,   159,   160,   113,   125,
     167,    45,   168,   120,   167,   172,   171,   159,   160,   172,
     100,     3,   130,   148,    38,   167,   133,   111,     3,    76,
     172,     3,   111,   124,   167,   142,   143,   167,   167,    97,
     120,   165,    48,    93,   167,   167,    92,   127,   128,    54,
     171,     0,   159,   160,   134,   135,   167,   171,     7,    25,
     167,   167,   119,    57,   168,   172,    15,     3,   148,   149,
     150,   151,   152,    22,   167,   155,   156,    26,   158,   159,
     160,   161,   162,   163,   167,   165,     3,    36,    30,   167,
      39,    40,   167,   167,   167,   167,    93,   168,   100,   114,
      66,   167,    51,    52,   103,    71,     7,   166,   169,   165,
      69,    77,    78,    62,    15,     6,    65,   171,   167,    53,
       6,    22,     6,     6,   119,    26,   103,   168,    94,   168,
     168,    98,    98,    99,    77,    36,    77,    86,    39,    40,
      77,    90,    98,     3,   125,     6,    68,   168,   168,   167,
      51,    52,   168,     6,    24,   423,   105,   168,   168,   300,
     167,    62,   111,   297,    65,   168,   100,   168,   168,   338,
     150,   311,    53,   431,   138,   217,   304,   489,   488,   100,
     114,   251,    -1,    -1,   229,    86,   120,    -1,   257,    90,
      -1,    53,    -1,    -1,   128,    -1,   145,   146,   147,    -1,
     134,   135,    -1,    -1,   105,   171,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,   148,   149,   150,   151,   152,   100,
      -1,   155,   156,    -1,   158,   159,   160,   161,   162,   163,
      53,   165,    -1,    -1,    -1,    -1,    -1,    -1,   100,   120,
      -1,    -1,    -1,    -1,   145,   146,   147,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,   148,   149,   150,
     151,   152,   134,   135,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,   165,    -1,   148,   149,   150,   151,
     152,    -1,    -1,   155,   156,    -1,   158,   159,   160,   161,
     162,   163,    24,   165,    -1,   128,    -1,    29,    -1,    31,
      32,   134,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,   152,
      -1,    -1,   155,   156,    -1,   158,   159,   160,   161,   162,
     163,    -1,   165,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118
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
     111,   189,   189,     3,   179,   180,   223,   235,   238,   239,
     229,   218,   230,   231,   239,   229,   239,   113,   239,   258,
     271,     3,   213,     3,    27,    60,   194,   195,   196,   202,
     124,   167,   169,   167,   167,   167,   110,   239,   247,    45,
     120,   240,   165,   240,   217,   239,   114,   131,    17,    53,
     100,   120,   127,   128,   134,   135,   148,   149,   150,   151,
     152,   155,   156,   158,   159,   160,   161,   162,   163,   165,
      97,   168,   171,   167,   239,   212,   204,    48,   167,   168,
     171,    93,   224,   225,   171,     3,   124,   276,   277,   234,
     214,   171,    89,   115,   232,   234,    54,    54,   167,    92,
      24,    29,    31,    32,    34,    42,    68,    85,    87,    88,
     102,   106,   108,   118,   197,   119,   167,   168,   171,   213,
     168,   222,     3,   160,   217,   136,   137,   138,   139,   140,
     141,   253,   239,   239,   247,    91,   110,   116,   167,   120,
     235,   168,   168,   239,   239,   240,   240,   100,   127,   167,
     103,   120,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   262,   271,     3,
     237,     3,   257,   187,   237,   180,   167,   265,   266,   267,
     268,   269,   271,   282,   226,   238,     3,   231,   239,   239,
     286,   188,    30,   167,   199,   167,   167,   167,   198,    27,
      60,   103,   120,   200,   201,   167,   286,   195,   235,   168,
      93,   124,   107,    91,   116,   239,   239,   217,   166,   114,
     240,   167,   217,   235,   103,   166,   168,   168,   213,    25,
      66,    71,    77,    78,    94,    99,   283,   171,   124,   274,
     275,   276,    69,   227,   168,   167,     6,     6,     6,     6,
     119,   103,   201,   286,   168,   168,   239,   197,   239,   239,
     116,   107,   168,   240,   217,   235,   168,   168,   168,    98,
      77,    77,    77,    98,   266,     3,   125,     6,   168,   171,
     168,   168,   168,   168,   168,   168,   116,   239,   168,   168,
     275,   267,   266,   167,   235,   168,     6,    81,   130,   286,
      50,   228,   168,   167,   239,   284,   168,   239,   257,   168
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
       0,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     4,     5,     4,     1,     2,     1,
       1,     3,     0,     5,     3,     0,     1,     2,     0,     2,
       1,     1,     2,     5,     4,     4,     4,     3,     4,     2,
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
#line 155 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1967 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 155 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1973 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 153 "bison_parser.y"
            { }
#line 1979 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 153 "bison_parser.y"
            { }
#line 1985 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1998 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2004 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2010 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2023 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2036 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2042 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2048 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2054 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 155 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2060 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2066 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2072 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 153 "bison_parser.y"
            { }
#line 2078 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 155 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2084 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 153 "bison_parser.y"
            { }
#line 2090 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2096 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2102 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2108 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 153 "bison_parser.y"
            { }
#line 2114 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).table_element_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_element_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_element_vec));
}
#line 2127 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2133 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2139 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 153 "bison_parser.y"
            { }
#line 2145 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_specification: /* opt_time_specification  */
#line 153 "bison_parser.y"
            { }
#line 2151 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 153 "bison_parser.y"
            { }
#line 2157 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 153 "bison_parser.y"
            { }
#line 2163 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 153 "bison_parser.y"
            { }
#line 2169 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2175 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2181 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 153 "bison_parser.y"
            { }
#line 2187 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2193 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2199 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2205 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2211 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2224 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2230 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2243 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2249 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2255 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2261 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2267 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2273 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2279 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2285 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2291 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 153 "bison_parser.y"
            { }
#line 2297 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2303 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 153 "bison_parser.y"
            { }
#line 2309 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2322 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2328 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2334 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2340 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2346 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2352 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2365 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2378 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2384 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 153 "bison_parser.y"
            { }
#line 2390 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2396 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2402 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2415 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2428 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2441 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2447 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2453 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2459 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2465 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2471 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2477 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2501 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2507 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2513 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2519 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2525 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2531 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 153 "bison_parser.y"
            { }
#line 2537 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2549 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2555 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2561 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2567 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2573 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2579 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2585 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2591 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2597 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2603 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2609 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2615 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2621 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2634 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2640 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2646 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 154 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2652 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 155 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2658 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_name: /* index_name  */
#line 155 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2664 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2670 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2676 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2682 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2688 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2694 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2700 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2706 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2712 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2718 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 153 "bison_parser.y"
            { }
#line 2724 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 164 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2730 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 156 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2743 "bison_parser.cpp"
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

#line 2850 "bison_parser.cpp"

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
#line 284 "bison_parser.y"
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
#line 3078 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 305 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3089 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 311 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3100 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 320 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3109 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 324 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3118 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 328 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3126 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 331 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3134 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 334 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3142 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 341 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3148 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 342 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3154 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 343 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3160 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 344 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3166 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 345 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3172 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 346 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3178 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 347 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3184 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 348 "bison_parser.y"
                                { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3190 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 349 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3196 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 350 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3202 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 359 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3208 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 360 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3214 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 365 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3220 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 366 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3226 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 370 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3235 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 374 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3245 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 386 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3253 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 389 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3261 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 392 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3269 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 406 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3279 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 416 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3288 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 420 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3298 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 434 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3309 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 440 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3320 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 449 "bison_parser.y"
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
#line 3339 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 466 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3345 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 470 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3353 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 473 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3359 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 482 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3370 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 496 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3378 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 499 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3388 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 504 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3398 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 518 "bison_parser.y"
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
#line 3416 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 531 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
		}
#line 3428 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 538 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3440 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 545 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-5].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3452 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 552 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3465 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 563 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3471 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 564 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3477 "bison_parser.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 568 "bison_parser.y"
                   { (yyval.table_element_vec) = new std::vector<TableElement*>(); (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t)); }
#line 3483 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 569 "bison_parser.y"
                                            { (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t)); (yyval.table_element_vec) = (yyvsp[-2].table_element_vec); }
#line 3489 "bison_parser.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 573 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3495 "bison_parser.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 574 "bison_parser.y"
                         { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3501 "bison_parser.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 578 "bison_parser.y"
                                                             {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
			(yyval.column_t)->setNullableExplicit();
		}
#line 3510 "bison_parser.cpp"
    break;

  case 57: /* column_type: INT  */
#line 585 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3516 "bison_parser.cpp"
    break;

  case 58: /* column_type: INTEGER  */
#line 586 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3522 "bison_parser.cpp"
    break;

  case 59: /* column_type: LONG  */
#line 587 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3528 "bison_parser.cpp"
    break;

  case 60: /* column_type: FLOAT  */
#line 588 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3534 "bison_parser.cpp"
    break;

  case 61: /* column_type: DECIMAL opt_decimal_specification  */
#line 589 "bison_parser.y"
                                              { (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].column_specification_t)}; }
#line 3540 "bison_parser.cpp"
    break;

  case 62: /* column_type: DOUBLE  */
#line 590 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3546 "bison_parser.cpp"
    break;

  case 63: /* column_type: REAL  */
#line 591 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3552 "bison_parser.cpp"
    break;

  case 64: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 592 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3558 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHARACTER VARYING '(' INTVAL ')'  */
#line 593 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR_VARYING, (yyvsp[-1].ival)}; }
#line 3564 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHAR '(' INTVAL ')'  */
#line 594 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3570 "bison_parser.cpp"
    break;

  case 67: /* column_type: TEXT  */
#line 595 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3576 "bison_parser.cpp"
    break;

  case 68: /* column_type: TIME opt_time_specification  */
#line 596 "bison_parser.y"
                                        { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].column_specification_t) }; }
#line 3582 "bison_parser.cpp"
    break;

  case 69: /* column_type: DATETIME  */
#line 597 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3588 "bison_parser.cpp"
    break;

  case 70: /* column_type: DATE  */
#line 598 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3594 "bison_parser.cpp"
    break;

  case 71: /* opt_time_specification: '(' INTVAL ')'  */
#line 602 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3600 "bison_parser.cpp"
    break;

  case 72: /* opt_time_specification: %empty  */
#line 603 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3606 "bison_parser.cpp"
    break;

  case 73: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 607 "bison_parser.y"
                                  { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3612 "bison_parser.cpp"
    break;

  case 74: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 608 "bison_parser.y"
                       { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3618 "bison_parser.cpp"
    break;

  case 75: /* opt_decimal_specification: %empty  */
#line 609 "bison_parser.y"
                    { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3624 "bison_parser.cpp"
    break;

  case 76: /* opt_column_constraints: column_constraint  */
#line 613 "bison_parser.y"
                            { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t)); }
#line 3630 "bison_parser.cpp"
    break;

  case 77: /* opt_column_constraints: opt_column_constraints column_constraint  */
#line 614 "bison_parser.y"
                                                 { (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t)); (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec); }
#line 3636 "bison_parser.cpp"
    break;

  case 78: /* opt_column_constraints: %empty  */
#line 615 "bison_parser.y"
                            { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3642 "bison_parser.cpp"
    break;

  case 79: /* column_constraint: PRIMARY KEY  */
#line 619 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::PRIMARY_KEY; }
#line 3648 "bison_parser.cpp"
    break;

  case 80: /* column_constraint: UNIQUE  */
#line 620 "bison_parser.y"
               { (yyval.column_constraint_t) = ConstraintType::UNIQUE; }
#line 3654 "bison_parser.cpp"
    break;

  case 81: /* column_constraint: NULL  */
#line 621 "bison_parser.y"
             { (yyval.column_constraint_t) = ConstraintType::_NULL; }
#line 3660 "bison_parser.cpp"
    break;

  case 82: /* column_constraint: NOT NULL  */
#line 622 "bison_parser.y"
                 { (yyval.column_constraint_t) = ConstraintType::NOTNULL; }
#line 3666 "bison_parser.cpp"
    break;

  case 83: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 626 "bison_parser.y"
                                             { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PRIMARY_KEY, (yyvsp[-1].str_vec)); }
#line 3672 "bison_parser.cpp"
    break;

  case 84: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 627 "bison_parser.y"
                                        { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::UNIQUE, (yyvsp[-1].str_vec)); }
#line 3678 "bison_parser.cpp"
    break;

  case 85: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 638 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3689 "bison_parser.cpp"
    break;

  case 86: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 644 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3700 "bison_parser.cpp"
    break;

  case 87: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 650 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3710 "bison_parser.cpp"
    break;

  case 88: /* drop_statement: DROP INDEX opt_exists index_name  */
#line 655 "bison_parser.y"
                                                 {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
    			(yyval.drop_stmt)->indexName = (yyvsp[0].sval);
    		}
#line 3720 "bison_parser.cpp"
    break;

  case 89: /* opt_exists: IF EXISTS  */
#line 663 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3726 "bison_parser.cpp"
    break;

  case 90: /* opt_exists: %empty  */
#line 664 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3732 "bison_parser.cpp"
    break;

  case 91: /* alter_statement: ALTER TABLE table_name DROP COLUMN opt_exists column_name  */
#line 673 "bison_parser.y"
                                                                          {
			(yyval.alter_stmt) = new AlterStatement(kAlterDropColumn);
			(yyval.alter_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.alter_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.alter_stmt)->name = (yyvsp[-4].table_name).name;
			(yyval.alter_stmt)->columnName = (yyvsp[0].expr)->name;
		}
#line 3744 "bison_parser.cpp"
    break;

  case 92: /* delete_statement: DELETE FROM table_name opt_where  */
#line 688 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3755 "bison_parser.cpp"
    break;

  case 93: /* truncate_statement: TRUNCATE table_name  */
#line 697 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3765 "bison_parser.cpp"
    break;

  case 94: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 710 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3777 "bison_parser.cpp"
    break;

  case 95: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 717 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3789 "bison_parser.cpp"
    break;

  case 96: /* opt_column_list: '(' ident_commalist ')'  */
#line 728 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3795 "bison_parser.cpp"
    break;

  case 97: /* opt_column_list: %empty  */
#line 729 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3801 "bison_parser.cpp"
    break;

  case 98: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 739 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3812 "bison_parser.cpp"
    break;

  case 99: /* update_clause_commalist: update_clause  */
#line 748 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3818 "bison_parser.cpp"
    break;

  case 100: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 749 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3824 "bison_parser.cpp"
    break;

  case 101: /* update_clause: IDENTIFIER '=' expr  */
#line 753 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3834 "bison_parser.cpp"
    break;

  case 102: /* select_statement: opt_with_clause select_with_paren  */
#line 765 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3843 "bison_parser.cpp"
    break;

  case 103: /* select_statement: opt_with_clause select_no_paren  */
#line 769 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3852 "bison_parser.cpp"
    break;

  case 104: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 773 "bison_parser.y"
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
#line 3868 "bison_parser.cpp"
    break;

  case 107: /* select_within_set_operation_no_parentheses: select_clause  */
#line 791 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3874 "bison_parser.cpp"
    break;

  case 108: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 792 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3887 "bison_parser.cpp"
    break;

  case 109: /* select_with_paren: '(' select_no_paren ')'  */
#line 803 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3893 "bison_parser.cpp"
    break;

  case 110: /* select_with_paren: '(' select_with_paren ')'  */
#line 804 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3899 "bison_parser.cpp"
    break;

  case 111: /* select_no_paren: select_clause opt_order opt_limit  */
#line 808 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3914 "bison_parser.cpp"
    break;

  case 112: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 818 "bison_parser.y"
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
#line 3929 "bison_parser.cpp"
    break;

  case 113: /* set_operator: set_type opt_all  */
#line 831 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3938 "bison_parser.cpp"
    break;

  case 114: /* set_type: UNION  */
#line 838 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3947 "bison_parser.cpp"
    break;

  case 115: /* set_type: INTERSECT  */
#line 842 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3956 "bison_parser.cpp"
    break;

  case 116: /* set_type: EXCEPT  */
#line 846 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3965 "bison_parser.cpp"
    break;

  case 117: /* opt_all: ALL  */
#line 853 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3973 "bison_parser.cpp"
    break;

  case 118: /* opt_all: %empty  */
#line 856 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3981 "bison_parser.cpp"
    break;

  case 119: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 862 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3995 "bison_parser.cpp"
    break;

  case 120: /* opt_distinct: DISTINCT  */
#line 874 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 4001 "bison_parser.cpp"
    break;

  case 121: /* opt_distinct: %empty  */
#line 875 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4007 "bison_parser.cpp"
    break;

  case 123: /* opt_from_clause: from_clause  */
#line 883 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4013 "bison_parser.cpp"
    break;

  case 124: /* opt_from_clause: %empty  */
#line 884 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4019 "bison_parser.cpp"
    break;

  case 125: /* from_clause: FROM table_ref  */
#line 888 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4025 "bison_parser.cpp"
    break;

  case 126: /* opt_where: WHERE expr  */
#line 893 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4031 "bison_parser.cpp"
    break;

  case 127: /* opt_where: %empty  */
#line 894 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4037 "bison_parser.cpp"
    break;

  case 128: /* opt_group: GROUP BY expr_list opt_having  */
#line 898 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4047 "bison_parser.cpp"
    break;

  case 129: /* opt_group: %empty  */
#line 903 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4053 "bison_parser.cpp"
    break;

  case 130: /* opt_having: HAVING expr  */
#line 907 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4059 "bison_parser.cpp"
    break;

  case 131: /* opt_having: %empty  */
#line 908 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4065 "bison_parser.cpp"
    break;

  case 132: /* opt_order: ORDER BY order_list  */
#line 912 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4071 "bison_parser.cpp"
    break;

  case 133: /* opt_order: %empty  */
#line 913 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4077 "bison_parser.cpp"
    break;

  case 134: /* order_list: order_desc  */
#line 917 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4083 "bison_parser.cpp"
    break;

  case 135: /* order_list: order_list ',' order_desc  */
#line 918 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4089 "bison_parser.cpp"
    break;

  case 136: /* order_desc: expr opt_order_type  */
#line 922 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4095 "bison_parser.cpp"
    break;

  case 137: /* opt_order_type: ASC  */
#line 926 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4101 "bison_parser.cpp"
    break;

  case 138: /* opt_order_type: DESC  */
#line 927 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4107 "bison_parser.cpp"
    break;

  case 139: /* opt_order_type: %empty  */
#line 928 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4113 "bison_parser.cpp"
    break;

  case 140: /* opt_top: TOP int_literal  */
#line 934 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4119 "bison_parser.cpp"
    break;

  case 141: /* opt_top: %empty  */
#line 935 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4125 "bison_parser.cpp"
    break;

  case 142: /* opt_limit: LIMIT expr  */
#line 939 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4131 "bison_parser.cpp"
    break;

  case 143: /* opt_limit: OFFSET expr  */
#line 940 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4137 "bison_parser.cpp"
    break;

  case 144: /* opt_limit: LIMIT expr OFFSET expr  */
#line 941 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4143 "bison_parser.cpp"
    break;

  case 145: /* opt_limit: LIMIT ALL  */
#line 942 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4149 "bison_parser.cpp"
    break;

  case 146: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 943 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4155 "bison_parser.cpp"
    break;

  case 147: /* opt_limit: %empty  */
#line 944 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4161 "bison_parser.cpp"
    break;

  case 148: /* expr_list: expr_alias  */
#line 951 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4167 "bison_parser.cpp"
    break;

  case 149: /* expr_list: expr_list ',' expr_alias  */
#line 952 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4173 "bison_parser.cpp"
    break;

  case 150: /* opt_literal_list: literal_list  */
#line 956 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4179 "bison_parser.cpp"
    break;

  case 151: /* opt_literal_list: %empty  */
#line 957 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4185 "bison_parser.cpp"
    break;

  case 152: /* literal_list: literal  */
#line 961 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4191 "bison_parser.cpp"
    break;

  case 153: /* literal_list: literal_list ',' literal  */
#line 962 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4197 "bison_parser.cpp"
    break;

  case 154: /* expr_alias: expr opt_alias  */
#line 966 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4209 "bison_parser.cpp"
    break;

  case 160: /* operand: '(' expr ')'  */
#line 984 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4215 "bison_parser.cpp"
    break;

  case 170: /* operand: '(' select_no_paren ')'  */
#line 994 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4221 "bison_parser.cpp"
    break;

  case 173: /* unary_expr: '-' operand  */
#line 1003 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4227 "bison_parser.cpp"
    break;

  case 174: /* unary_expr: NOT operand  */
#line 1004 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4233 "bison_parser.cpp"
    break;

  case 175: /* unary_expr: operand ISNULL  */
#line 1005 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4239 "bison_parser.cpp"
    break;

  case 176: /* unary_expr: operand IS NULL  */
#line 1006 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4245 "bison_parser.cpp"
    break;

  case 177: /* unary_expr: operand IS NOT NULL  */
#line 1007 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4251 "bison_parser.cpp"
    break;

  case 179: /* binary_expr: operand '-' operand  */
#line 1012 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4257 "bison_parser.cpp"
    break;

  case 180: /* binary_expr: operand '+' operand  */
#line 1013 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4263 "bison_parser.cpp"
    break;

  case 181: /* binary_expr: operand '/' operand  */
#line 1014 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4269 "bison_parser.cpp"
    break;

  case 182: /* binary_expr: operand '*' operand  */
#line 1015 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4275 "bison_parser.cpp"
    break;

  case 183: /* binary_expr: operand '%' operand  */
#line 1016 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4281 "bison_parser.cpp"
    break;

  case 184: /* binary_expr: operand '^' operand  */
#line 1017 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4287 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand LIKE operand  */
#line 1018 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4293 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand NOT LIKE operand  */
#line 1019 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4299 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand ILIKE operand  */
#line 1020 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4305 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand CONCAT operand  */
#line 1021 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4311 "bison_parser.cpp"
    break;

  case 189: /* logic_expr: expr AND expr  */
#line 1025 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4317 "bison_parser.cpp"
    break;

  case 190: /* logic_expr: expr OR expr  */
#line 1026 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4323 "bison_parser.cpp"
    break;

  case 191: /* in_expr: operand IN '(' expr_list ')'  */
#line 1030 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4329 "bison_parser.cpp"
    break;

  case 192: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1031 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4335 "bison_parser.cpp"
    break;

  case 193: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1032 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4341 "bison_parser.cpp"
    break;

  case 194: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1033 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4347 "bison_parser.cpp"
    break;

  case 195: /* case_expr: CASE expr case_list END  */
#line 1039 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4353 "bison_parser.cpp"
    break;

  case 196: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1040 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4359 "bison_parser.cpp"
    break;

  case 197: /* case_expr: CASE case_list END  */
#line 1041 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4365 "bison_parser.cpp"
    break;

  case 198: /* case_expr: CASE case_list ELSE expr END  */
#line 1042 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4371 "bison_parser.cpp"
    break;

  case 199: /* case_list: WHEN expr THEN expr  */
#line 1046 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4377 "bison_parser.cpp"
    break;

  case 200: /* case_list: case_list WHEN expr THEN expr  */
#line 1047 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4383 "bison_parser.cpp"
    break;

  case 201: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1051 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4389 "bison_parser.cpp"
    break;

  case 202: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1052 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4395 "bison_parser.cpp"
    break;

  case 203: /* comp_expr: operand '=' operand  */
#line 1056 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4401 "bison_parser.cpp"
    break;

  case 204: /* comp_expr: operand EQUALS operand  */
#line 1057 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4407 "bison_parser.cpp"
    break;

  case 205: /* comp_expr: operand NOTEQUALS operand  */
#line 1058 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4413 "bison_parser.cpp"
    break;

  case 206: /* comp_expr: operand '<' operand  */
#line 1059 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4419 "bison_parser.cpp"
    break;

  case 207: /* comp_expr: operand '>' operand  */
#line 1060 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4425 "bison_parser.cpp"
    break;

  case 208: /* comp_expr: operand LESSEQ operand  */
#line 1061 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4431 "bison_parser.cpp"
    break;

  case 209: /* comp_expr: operand GREATEREQ operand  */
#line 1062 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4437 "bison_parser.cpp"
    break;

  case 210: /* function_expr: IDENTIFIER '(' ')'  */
#line 1066 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4443 "bison_parser.cpp"
    break;

  case 211: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1067 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4449 "bison_parser.cpp"
    break;

  case 212: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1071 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4455 "bison_parser.cpp"
    break;

  case 213: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1075 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4461 "bison_parser.cpp"
    break;

  case 214: /* datetime_field: SECOND  */
#line 1079 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4467 "bison_parser.cpp"
    break;

  case 215: /* datetime_field: MINUTE  */
#line 1080 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4473 "bison_parser.cpp"
    break;

  case 216: /* datetime_field: HOUR  */
#line 1081 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4479 "bison_parser.cpp"
    break;

  case 217: /* datetime_field: DAY  */
#line 1082 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4485 "bison_parser.cpp"
    break;

  case 218: /* datetime_field: MONTH  */
#line 1083 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4491 "bison_parser.cpp"
    break;

  case 219: /* datetime_field: YEAR  */
#line 1084 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4497 "bison_parser.cpp"
    break;

  case 220: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1088 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4503 "bison_parser.cpp"
    break;

  case 221: /* array_index: operand '[' int_literal ']'  */
#line 1092 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4509 "bison_parser.cpp"
    break;

  case 222: /* between_expr: operand BETWEEN operand AND operand  */
#line 1096 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4515 "bison_parser.cpp"
    break;

  case 223: /* column_name: IDENTIFIER  */
#line 1100 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4521 "bison_parser.cpp"
    break;

  case 224: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1101 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4527 "bison_parser.cpp"
    break;

  case 225: /* column_name: '*'  */
#line 1102 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4533 "bison_parser.cpp"
    break;

  case 226: /* column_name: IDENTIFIER '.' '*'  */
#line 1103 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4539 "bison_parser.cpp"
    break;

  case 232: /* string_literal: STRING  */
#line 1115 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4545 "bison_parser.cpp"
    break;

  case 233: /* bool_literal: TRUE  */
#line 1119 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4551 "bison_parser.cpp"
    break;

  case 234: /* bool_literal: FALSE  */
#line 1120 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4557 "bison_parser.cpp"
    break;

  case 235: /* num_literal: FLOATVAL  */
#line 1124 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4563 "bison_parser.cpp"
    break;

  case 237: /* int_literal: INTVAL  */
#line 1129 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4569 "bison_parser.cpp"
    break;

  case 238: /* null_literal: NULL  */
#line 1133 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4575 "bison_parser.cpp"
    break;

  case 239: /* param_expr: '?'  */
#line 1137 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4585 "bison_parser.cpp"
    break;

  case 241: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1150 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4596 "bison_parser.cpp"
    break;

  case 245: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1166 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4607 "bison_parser.cpp"
    break;

  case 246: /* table_ref_commalist: table_ref_atomic  */
#line 1175 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4613 "bison_parser.cpp"
    break;

  case 247: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1176 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4619 "bison_parser.cpp"
    break;

  case 248: /* table_ref_name: table_name opt_table_alias  */
#line 1181 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4631 "bison_parser.cpp"
    break;

  case 249: /* table_ref_name_no_alias: table_name  */
#line 1192 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4641 "bison_parser.cpp"
    break;

  case 250: /* table_name: IDENTIFIER  */
#line 1201 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4647 "bison_parser.cpp"
    break;

  case 251: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1202 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4653 "bison_parser.cpp"
    break;

  case 252: /* opt_index_name: IDENTIFIER  */
#line 1206 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4659 "bison_parser.cpp"
    break;

  case 253: /* opt_index_name: %empty  */
#line 1207 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4665 "bison_parser.cpp"
    break;

  case 254: /* index_name: IDENTIFIER  */
#line 1211 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4671 "bison_parser.cpp"
    break;

  case 256: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1217 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4677 "bison_parser.cpp"
    break;

  case 258: /* opt_table_alias: %empty  */
#line 1223 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4683 "bison_parser.cpp"
    break;

  case 259: /* alias: AS IDENTIFIER  */
#line 1228 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4689 "bison_parser.cpp"
    break;

  case 260: /* alias: IDENTIFIER  */
#line 1229 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4695 "bison_parser.cpp"
    break;

  case 262: /* opt_alias: %empty  */
#line 1235 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4701 "bison_parser.cpp"
    break;

  case 264: /* opt_with_clause: %empty  */
#line 1245 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4707 "bison_parser.cpp"
    break;

  case 265: /* with_clause: WITH with_description_list  */
#line 1249 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4713 "bison_parser.cpp"
    break;

  case 266: /* with_description_list: with_description  */
#line 1253 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4722 "bison_parser.cpp"
    break;

  case 267: /* with_description_list: with_description_list ',' with_description  */
#line 1257 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4731 "bison_parser.cpp"
    break;

  case 268: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1264 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4741 "bison_parser.cpp"
    break;

  case 269: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1278 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4753 "bison_parser.cpp"
    break;

  case 270: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1286 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4766 "bison_parser.cpp"
    break;

  case 271: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1296 "bison_parser.y"
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
#line 4786 "bison_parser.cpp"
    break;

  case 272: /* opt_join_type: INNER  */
#line 1314 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4792 "bison_parser.cpp"
    break;

  case 273: /* opt_join_type: LEFT OUTER  */
#line 1315 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4798 "bison_parser.cpp"
    break;

  case 274: /* opt_join_type: LEFT  */
#line 1316 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4804 "bison_parser.cpp"
    break;

  case 275: /* opt_join_type: RIGHT OUTER  */
#line 1317 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4810 "bison_parser.cpp"
    break;

  case 276: /* opt_join_type: RIGHT  */
#line 1318 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4816 "bison_parser.cpp"
    break;

  case 277: /* opt_join_type: FULL OUTER  */
#line 1319 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4822 "bison_parser.cpp"
    break;

  case 278: /* opt_join_type: OUTER  */
#line 1320 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4828 "bison_parser.cpp"
    break;

  case 279: /* opt_join_type: FULL  */
#line 1321 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4834 "bison_parser.cpp"
    break;

  case 280: /* opt_join_type: CROSS  */
#line 1322 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4840 "bison_parser.cpp"
    break;

  case 281: /* opt_join_type: %empty  */
#line 1323 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4846 "bison_parser.cpp"
    break;

  case 285: /* ident_commalist: IDENTIFIER  */
#line 1343 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4852 "bison_parser.cpp"
    break;

  case 286: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1344 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4858 "bison_parser.cpp"
    break;


#line 4862 "bison_parser.cpp"

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

#line 1347 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
