/* A Bison parser, made by GNU Bison 3.8.1.  */

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
#define YYBISON 30801

/* Bison version string.  */
#define YYBISON_VERSION "3.8.1"

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
  YYSYMBOL_column_constraint_list = 201,   /* column_constraint_list  */
  YYSYMBOL_column_constraint = 202,        /* column_constraint  */
  YYSYMBOL_table_constraint = 203,         /* table_constraint  */
  YYSYMBOL_drop_statement = 204,           /* drop_statement  */
  YYSYMBOL_opt_exists = 205,               /* opt_exists  */
  YYSYMBOL_alter_statement = 206,          /* alter_statement  */
  YYSYMBOL_alter_action = 207,             /* alter_action  */
  YYSYMBOL_drop_action = 208,              /* drop_action  */
  YYSYMBOL_delete_statement = 209,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 210,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 211,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 212,          /* opt_column_list  */
  YYSYMBOL_update_statement = 213,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 214,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 215,            /* update_clause  */
  YYSYMBOL_select_statement = 216,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 217, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 218, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 219,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 220,          /* select_no_paren  */
  YYSYMBOL_set_operator = 221,             /* set_operator  */
  YYSYMBOL_set_type = 222,                 /* set_type  */
  YYSYMBOL_opt_all = 223,                  /* opt_all  */
  YYSYMBOL_select_clause = 224,            /* select_clause  */
  YYSYMBOL_opt_distinct = 225,             /* opt_distinct  */
  YYSYMBOL_select_list = 226,              /* select_list  */
  YYSYMBOL_opt_from_clause = 227,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 228,              /* from_clause  */
  YYSYMBOL_opt_where = 229,                /* opt_where  */
  YYSYMBOL_opt_group = 230,                /* opt_group  */
  YYSYMBOL_opt_having = 231,               /* opt_having  */
  YYSYMBOL_opt_order = 232,                /* opt_order  */
  YYSYMBOL_order_list = 233,               /* order_list  */
  YYSYMBOL_order_desc = 234,               /* order_desc  */
  YYSYMBOL_opt_order_type = 235,           /* opt_order_type  */
  YYSYMBOL_opt_top = 236,                  /* opt_top  */
  YYSYMBOL_opt_limit = 237,                /* opt_limit  */
  YYSYMBOL_expr_list = 238,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 239,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 240,             /* literal_list  */
  YYSYMBOL_expr_alias = 241,               /* expr_alias  */
  YYSYMBOL_expr = 242,                     /* expr  */
  YYSYMBOL_operand = 243,                  /* operand  */
  YYSYMBOL_scalar_expr = 244,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 245,               /* unary_expr  */
  YYSYMBOL_binary_expr = 246,              /* binary_expr  */
  YYSYMBOL_logic_expr = 247,               /* logic_expr  */
  YYSYMBOL_in_expr = 248,                  /* in_expr  */
  YYSYMBOL_case_expr = 249,                /* case_expr  */
  YYSYMBOL_case_list = 250,                /* case_list  */
  YYSYMBOL_exists_expr = 251,              /* exists_expr  */
  YYSYMBOL_comp_expr = 252,                /* comp_expr  */
  YYSYMBOL_function_expr = 253,            /* function_expr  */
  YYSYMBOL_extract_expr = 254,             /* extract_expr  */
  YYSYMBOL_cast_expr = 255,                /* cast_expr  */
  YYSYMBOL_datetime_field = 256,           /* datetime_field  */
  YYSYMBOL_array_expr = 257,               /* array_expr  */
  YYSYMBOL_array_index = 258,              /* array_index  */
  YYSYMBOL_between_expr = 259,             /* between_expr  */
  YYSYMBOL_column_name = 260,              /* column_name  */
  YYSYMBOL_literal = 261,                  /* literal  */
  YYSYMBOL_string_literal = 262,           /* string_literal  */
  YYSYMBOL_bool_literal = 263,             /* bool_literal  */
  YYSYMBOL_num_literal = 264,              /* num_literal  */
  YYSYMBOL_int_literal = 265,              /* int_literal  */
  YYSYMBOL_null_literal = 266,             /* null_literal  */
  YYSYMBOL_date_literal = 267,             /* date_literal  */
  YYSYMBOL_param_expr = 268,               /* param_expr  */
  YYSYMBOL_table_ref = 269,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 270,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 271, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 272,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 273,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 274,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 275,               /* table_name  */
  YYSYMBOL_opt_index_name = 276,           /* opt_index_name  */
  YYSYMBOL_index_name = 277,               /* index_name  */
  YYSYMBOL_table_alias = 278,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 279,          /* opt_table_alias  */
  YYSYMBOL_alias = 280,                    /* alias  */
  YYSYMBOL_opt_alias = 281,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 282,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 283,              /* with_clause  */
  YYSYMBOL_with_description_list = 284,    /* with_description_list  */
  YYSYMBOL_with_description = 285,         /* with_description  */
  YYSYMBOL_join_clause = 286,              /* join_clause  */
  YYSYMBOL_opt_join_type = 287,            /* opt_join_type  */
  YYSYMBOL_join_condition = 288,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 289,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 290           /* ident_commalist  */
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
#define YYLAST   857

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  118
/* YYNRULES -- Number of rules.  */
#define YYNRULES  291
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  537

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
       0,   289,   289,   310,   316,   325,   329,   333,   336,   339,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     364,   365,   370,   371,   375,   379,   391,   394,   397,   403,
     404,   411,   418,   421,   425,   439,   445,   454,   471,   475,
     478,   487,   501,   504,   509,   523,   536,   544,   551,   558,
     569,   570,   574,   575,   579,   580,   584,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   608,   609,   613,   614,   615,   619,   620,   624,   625,
     628,   629,   630,   631,   635,   636,   647,   653,   659,   665,
     673,   674,   683,   691,   694,   706,   715,   728,   735,   746,
     747,   757,   766,   767,   771,   783,   787,   791,   805,   806,
     809,   810,   821,   822,   826,   836,   849,   856,   860,   864,
     871,   874,   880,   892,   893,   897,   901,   902,   906,   911,
     912,   916,   921,   925,   926,   930,   931,   935,   936,   940,
     944,   945,   946,   952,   953,   957,   958,   959,   960,   961,
     962,   969,   970,   974,   975,   979,   980,   984,   994,   995,
     996,   997,   998,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1016,  1017,  1021,  1022,  1023,  1024,
    1025,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1043,  1044,  1048,  1049,  1050,  1051,  1057,  1058,
    1059,  1060,  1064,  1065,  1069,  1070,  1074,  1075,  1076,  1077,
    1078,  1079,  1080,  1084,  1085,  1089,  1093,  1097,  1098,  1099,
    1100,  1101,  1102,  1106,  1110,  1114,  1118,  1119,  1120,  1121,
    1125,  1126,  1127,  1128,  1129,  1130,  1134,  1138,  1139,  1143,
    1144,  1148,  1152,  1156,  1169,  1181,  1182,  1192,  1193,  1197,
    1198,  1207,  1208,  1213,  1224,  1233,  1234,  1238,  1239,  1243,
    1248,  1249,  1254,  1255,  1260,  1261,  1266,  1267,  1276,  1277,
    1281,  1285,  1289,  1296,  1309,  1317,  1327,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1360,  1369,  1370,
    1375,  1376
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
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "index_name", "table_alias", "opt_table_alias",
  "alias", "opt_alias", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-437)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-289)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     533,    40,    67,    91,    93,    67,    33,   -19,     5,     9,
      67,    31,    67,    89,    10,   135,    53,    53,    53,   173,
      39,  -437,    96,  -437,    96,  -437,  -437,  -437,  -437,  -437,
    -437,  -437,  -437,  -437,  -437,  -437,  -437,   -35,  -437,   202,
      46,  -437,    56,   142,  -437,   139,   139,   139,    67,   225,
      67,   153,  -437,   167,   -51,   167,   167,   167,    67,  -437,
     134,   128,  -437,  -437,  -437,  -437,  -437,  -437,   502,  -437,
     206,  -437,  -437,   184,   -35,    35,  -437,    47,  -437,   308,
      71,   318,   209,   327,    67,    67,   269,  -437,   261,   203,
     356,   329,    67,   372,   372,   377,    67,    67,  -437,   208,
     135,  -437,   215,   386,   385,   233,   234,  -437,  -437,  -437,
     -35,   290,   279,   -35,   -26,  -437,  -437,  -437,  -437,   401,
    -437,  -437,  -437,  -437,   238,   237,  -437,  -437,  -437,  -437,
    -437,  -437,  -437,  -437,  -437,  -437,   364,  -437,   280,   -56,
     203,   278,  -437,   372,   410,   107,   266,   -58,  -437,  -437,
     325,   307,  -437,   307,  -437,  -437,  -437,  -437,  -437,  -437,
     416,  -437,  -437,   278,  -437,  -437,   346,  -437,  -437,    35,
    -437,  -437,   278,   346,   278,    79,  -437,  -437,  -437,    71,
    -437,    67,   420,   314,    37,   302,  -117,   260,   263,   265,
     185,   309,   271,   344,  -437,   274,   102,   371,  -437,  -437,
    -437,  -437,  -437,  -437,  -437,  -437,  -437,  -437,  -437,  -437,
    -437,  -437,  -437,  -437,   338,  -437,    95,   272,  -437,   278,
     356,  -437,   402,  -437,  -437,   395,  -437,  -437,   281,   105,
    -437,   360,   283,  -437,   113,   -26,   -35,   284,  -437,   -22,
     -26,   102,   403,   -24,  -437,   282,   366,  -437,   739,   337,
     292,   118,  -437,  -437,  -437,   314,    11,    17,   404,   196,
     278,   278,    94,   158,   293,   344,   561,   278,    92,   294,
     -88,   278,   278,   344,  -437,   344,    69,   296,    14,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   386,    67,  -437,   462,    71,   102,
    -437,   167,   225,    71,  -437,   416,    16,   269,  -437,   278,
    -437,   463,  -437,  -437,  -437,  -437,   278,  -437,  -437,  -437,
    -437,   278,   278,   410,   372,  -437,   437,  -437,   303,   306,
    -437,  -437,   311,  -437,  -437,  -437,  -437,   312,  -437,    -2,
     313,   410,  -437,    37,  -437,  -437,   278,  -437,  -437,   315,
    -437,  -437,  -437,  -437,  -437,  -437,   381,   136,    80,   194,
     278,   278,  -437,   404,   375,   -31,  -437,  -437,  -437,   368,
     508,   597,   344,   317,   274,  -437,   389,   323,   597,   597,
     597,   597,   633,   633,   633,   633,    92,    92,     2,     2,
       2,   -61,   328,  -437,  -437,   132,   486,  -437,   138,  -437,
     314,  -437,   193,  -437,   322,  -437,    36,  -437,   426,  -437,
    -437,  -437,   102,   102,   170,  -437,   334,   501,  -437,   504,
     506,   509,  -437,   406,  -437,  -437,   405,  -437,    -2,  -437,
     410,   171,  -437,   172,  -437,   278,   739,   278,   278,  -437,
     -69,    86,   367,  -437,   344,   597,   274,   369,   192,  -437,
    -437,  -437,  -437,  -437,   376,   441,  -437,  -437,  -437,   466,
     468,   469,   449,    16,   511,  -437,  -437,  -437,   425,  -437,
    -437,   545,   198,   384,   388,   390,  -437,  -437,  -437,   200,
    -437,  -437,   -66,   392,   102,   131,  -437,   278,  -437,   561,
     394,   216,  -437,  -437,    36,    16,  -437,  -437,  -437,    16,
     301,   396,   278,   397,  -437,   551,  -437,  -437,  -437,  -437,
    -437,  -437,  -437,   102,  -437,  -437,  -437,  -437,   419,   410,
      -9,  -437,   398,   407,   278,   218,   278,  -437,  -437,    18,
     102,  -437,  -437,   102,   399,   408,  -437
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     289,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   268,     0,
     255,    96,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   254,    91,     0,    91,    91,    91,     0,    42,
       0,   270,   271,    29,    26,    28,    27,     1,   269,     2,
       0,     6,     5,   144,     0,   105,   106,   136,    88,     0,
     154,     0,     0,   258,     0,     0,   130,    37,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   124,     0,     0,   118,   119,   117,
       0,   121,     0,     0,   150,   256,   236,   239,   241,     0,
     242,   237,   238,   244,     0,   153,   155,   230,   231,   232,
     240,   233,   234,   235,    32,    31,     0,   257,     0,     0,
     100,     0,    95,     0,     0,     0,     0,   130,   102,    90,
       0,    40,    38,    40,   259,    89,    86,    87,   273,   272,
       0,   143,   123,     0,   113,   112,   136,   109,   108,   110,
     120,   116,     0,   136,     0,     0,   114,   243,    34,     0,
      50,     0,     0,   269,     0,     0,   226,     0,     0,     0,
       0,     0,     0,     0,   228,     0,   129,   158,   165,   166,
     167,   160,   162,   168,   161,   181,   169,   170,   171,   172,
     164,   159,   174,   175,     0,   290,     0,     0,    98,     0,
       0,   101,     0,    92,    93,     0,    36,    41,    24,     0,
      22,   127,   125,   151,   267,   150,     0,   135,   137,   142,
     150,   146,   148,   145,   156,     0,     0,    47,     0,     0,
       0,     0,    52,    54,    55,   269,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,   176,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,   104,
     103,    91,     0,     0,    20,     0,     0,   130,   126,     0,
     265,     0,   266,   157,   107,   111,     0,   141,   140,   139,
     115,     0,     0,     0,     0,    58,     0,    63,    75,     0,
      62,    60,     0,    70,    69,    59,    67,    72,    57,    77,
       0,     0,    46,     0,    49,   213,     0,   227,   229,     0,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,   200,     0,     0,     0,   173,   163,   192,   193,
       0,   188,     0,     0,     0,   179,     0,   191,   190,   206,
     207,   208,   209,   210,   211,   212,   183,   182,   185,   184,
     186,   187,     0,    35,   291,     0,     0,    39,     0,    23,
     269,   128,   245,   247,     0,   249,   263,   248,   132,   152,
     264,   138,   149,   147,     0,    45,     0,     0,    61,     0,
       0,     0,    68,     0,    81,    82,     0,    56,    76,    78,
       0,     0,    53,     0,   204,     0,     0,     0,     0,   198,
       0,     0,     0,   223,     0,   189,     0,     0,     0,   180,
     224,    97,    94,    25,     0,     0,   285,   277,   283,   281,
     284,   279,     0,     0,     0,   262,   253,   260,     0,   122,
      48,     0,     0,     0,     0,     0,    80,    83,    79,     0,
      85,   214,     0,     0,   202,     0,   201,     0,   205,   225,
       0,     0,   196,   194,   263,     0,   280,   282,   278,     0,
     246,   264,     0,     0,    74,     0,    64,    66,    71,    84,
     215,   216,   199,   203,   197,   195,   250,   274,   286,     0,
     134,    65,     0,     0,     0,     0,     0,   131,    73,     0,
     287,   275,   261,   133,   226,     0,   276
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -437,  -437,  -437,   503,  -437,   546,  -437,   273,  -437,   154,
    -437,  -437,  -437,  -437,   275,   -83,   422,  -437,  -437,  -437,
     270,  -437,   236,  -437,   144,  -437,  -437,  -437,  -437,   155,
    -437,  -437,   -53,  -437,  -437,  -437,  -437,  -437,  -437,   442,
    -437,  -437,   361,  -166,   -95,  -437,    34,   -73,   -41,  -437,
    -437,   -75,   330,  -437,  -437,  -437,  -131,  -437,  -437,    29,
    -437,   277,  -437,  -437,   -34,  -260,  -437,   -42,   285,  -141,
    -136,  -437,  -437,  -437,  -437,  -437,  -437,   335,  -437,  -437,
    -437,  -437,  -437,  -437,  -437,  -437,  -437,    58,   -74,   -84,
    -437,  -437,   -91,  -437,  -437,  -437,  -437,  -436,   101,  -437,
    -437,  -437,     3,  -437,  -437,  -437,    97,   355,  -437,  -437,
    -437,  -437,   490,  -437,  -437,  -437,  -437,  -309
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   229,   230,    23,    64,
      24,   135,    25,    26,    88,   151,   226,    27,    28,    29,
      83,   251,   252,   253,   339,   422,   418,   427,   428,   429,
     254,    30,    92,    31,   223,   224,    32,    33,    34,   145,
      35,   147,   148,    36,   166,   167,   168,    76,   110,   111,
     171,    77,   163,   231,   307,   308,   142,   469,   527,   114,
     237,   238,   319,   104,   176,   232,   124,   125,   233,   234,
     197,   198,   199,   200,   201,   202,   203,   263,   204,   205,
     206,   207,   208,   356,   209,   210,   211,   212,   213,   127,
     128,   129,   130,   131,   132,   133,   401,   402,   403,   404,
     405,    51,   406,   138,   155,   465,   466,   467,   313,    37,
      38,    61,    62,   407,   462,   531,    69,   216
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     196,   106,    95,    96,    97,    41,   126,   365,    44,   152,
     152,   153,   161,    52,   414,    54,   221,   247,   173,    40,
     347,   534,    73,   162,   141,   423,   271,   500,   174,    58,
     322,   239,   431,   241,   243,   169,   113,   182,   169,   310,
     248,   526,    93,   272,   107,   271,   175,   486,   271,   262,
     256,    86,   257,    89,   270,   266,   107,   268,   424,   152,
     214,    98,   272,   518,   249,   272,    39,   317,   183,    59,
      40,    75,   218,   279,    48,   116,   117,   118,   299,   108,
     367,    94,   186,   116,   117,   118,   433,   139,   140,   344,
     271,   108,   271,   318,    42,   150,    43,   250,    49,   156,
     157,   425,   510,    45,   294,   244,    50,   272,   105,   272,
      53,   184,    46,   220,   448,   109,   310,   375,   426,   357,
     358,   479,   269,   112,   187,   188,   189,   109,   236,   266,
     368,   369,    74,   158,   376,   443,   279,   370,    60,   371,
     309,   315,    47,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   119,    55,
     464,   169,   309,   190,    73,   293,   119,   294,    56,   372,
     217,    65,    66,    67,   120,   239,   408,   348,   194,   345,
     412,   413,   120,   400,   245,   349,   491,   437,   186,   116,
     117,   118,   242,   487,   271,   235,   373,    63,    57,   191,
     271,   314,   240,   392,   261,    78,   320,    70,   271,    68,
     525,   272,   192,   121,   122,    79,   271,   272,   455,   440,
     441,   121,   122,    80,   126,   272,   279,   271,    87,   126,
     187,   188,   189,   272,   454,    81,   445,   311,   193,   194,
     152,   415,   520,   123,   272,   271,   195,   512,   396,   360,
     271,   123,   290,   291,   292,   293,   395,   294,    99,   456,
     436,   398,   272,   296,   457,    82,   297,   272,   361,   190,
     458,   459,   119,   304,   362,    90,   305,   186,   116,   117,
     118,   186,   116,   117,   118,   438,   342,   460,   120,   343,
     442,  -286,   461,    91,   482,   261,   484,   485,   393,   100,
     451,   447,   102,   179,   361,   191,   453,   103,   489,   179,
     439,   115,   186,   116,   117,   118,    84,    85,   192,   187,
     188,   189,   134,   187,   188,   189,   455,   121,   122,   136,
     137,    73,   350,   351,   352,   353,   354,   355,   470,   480,
     481,   297,   297,   309,   193,   194,   513,   186,   116,   117,
     118,   141,   195,   143,   264,   188,   189,   123,   190,   146,
     493,   119,   190,   309,  -251,   119,   504,   456,   509,   505,
     144,   297,   457,   490,   149,    74,   116,   120,   458,   459,
     154,   120,   160,   530,   515,   533,   532,   309,   273,   297,
     188,   189,   118,   190,   191,   460,   119,   162,   191,  -286,
     461,   164,   165,   170,   172,   177,   178,   192,   179,   180,
     181,   192,   120,   215,   219,   222,   121,   122,   225,   228,
     121,   122,   112,   246,   274,    15,   255,   258,   190,   265,
     259,   119,   260,   193,   194,   295,   267,   193,   194,   298,
     301,   195,   192,   302,   455,   195,   123,   120,   303,   323,
     123,   121,   122,   306,   309,   316,   340,   321,   324,   341,
     363,    73,   366,   374,   265,   394,   410,   416,   193,   194,
     417,   275,  -252,   419,   435,   372,   195,   192,   420,   421,
     430,   123,   271,   434,   446,   456,   121,   122,   294,   452,
     457,   276,   449,   463,   450,   468,   458,   459,   277,   278,
     523,   471,  -288,   193,   194,   279,   280,   472,   477,     1,
     473,   195,   474,   460,   501,   475,   123,     2,   461,   281,
     282,   283,   284,   285,     3,   476,   286,   287,     4,   288,
     289,   290,   291,   292,   293,   488,   294,   492,     5,   495,
       1,     6,     7,   496,   494,   497,   498,   499,     2,   524,
     502,   503,   506,     8,     9,     3,   507,   522,   508,     4,
     511,   274,   514,   519,    10,   521,   528,    11,   257,     5,
      72,   101,     6,     7,   529,   227,   536,   397,   399,   432,
     483,   300,   185,   478,     8,     9,   346,   535,    12,   312,
     159,   516,    13,   411,   409,    10,   517,   359,    11,     0,
       0,     0,     0,     0,     0,     0,     0,    14,   275,     0,
       0,     0,     0,    15,   274,     0,     0,     0,     0,    12,
       0,     0,   444,    13,     0,     0,     0,     0,   364,     0,
       0,     0,     0,     0,     0,     0,   278,     0,    14,     0,
       0,     0,   279,   280,    15,     0,     0,    16,    17,    18,
     274,     0,     0,     0,     0,     0,   281,   282,   283,   284,
     285,   275,     0,   286,   287,     0,   288,   289,   290,   291,
     292,   293,     0,   294,     0,     0,     0,     0,    16,    17,
      18,   364,     0,     0,     0,     0,   274,     0,     0,   278,
       0,     0,     0,     0,     0,   279,   280,  -289,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   281,
     282,   283,   284,   285,     0,     0,   286,   287,     0,   288,
     289,   290,   291,   292,   293,   278,   294,     0,     0,     0,
       0,   279,  -289,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -289,  -289,  -289,   284,   285,
       0,     0,   286,   287,     0,   288,   289,   290,   291,   292,
     293,   278,   294,   325,     0,     0,     0,   279,   326,     0,
     327,   328,     0,   329,     0,     0,     0,     0,     0,     0,
       0,   330,     0,     0,  -289,  -289,     0,     0,  -289,  -289,
       0,   288,   289,   290,   291,   292,   293,     0,   294,     0,
       0,     0,     0,     0,     0,     0,     0,   331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,     0,   333,   334,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,     0,     0,     0,   336,     0,   337,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338
};

static const yytype_int16 yycheck[] =
{
     141,    74,    55,    56,    57,     2,    80,   267,     5,    93,
      94,    94,   103,    10,   323,    12,   147,   183,   113,     3,
       3,     3,    57,    12,    82,    27,   114,   463,    54,    19,
      54,   172,   341,   174,   175,   110,    77,    93,   113,     3,
       3,    50,    93,   131,     9,   114,    72,   116,   114,   190,
     167,    48,   169,    50,   195,   191,     9,   193,    60,   143,
     143,    58,   131,   499,    27,   131,    26,    89,   124,    59,
       3,    37,   145,   134,    93,     4,     5,     6,   219,    44,
     168,   132,     3,     4,     5,     6,   346,    84,    85,   255,
     114,    44,   114,   115,     3,    92,     3,    60,    93,    96,
      97,   103,   168,    70,   165,   179,    97,   131,    74,   131,
      79,   167,    79,   171,   374,    80,     3,   103,   120,   260,
     261,   430,   195,    76,    45,    46,    47,    80,   169,   265,
     271,   272,   167,    99,   120,   166,   134,   273,     3,   275,
     171,   236,   109,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,    87,    70,
     124,   236,   171,    84,    57,   163,    87,   165,    79,   100,
      63,    17,    18,     0,   103,   316,   307,   160,   160,   168,
     321,   322,   103,   167,   181,   258,   446,   107,     3,     4,
       5,     6,   113,   107,   114,   166,   127,   144,   109,   120,
     114,   235,   173,   294,   110,     3,   240,   111,   114,   170,
     519,   131,   133,   142,   143,   169,   114,   131,    25,   360,
     361,   142,   143,   167,   298,   131,   134,   114,     3,   303,
      45,    46,    47,   131,   400,    93,   372,   124,   159,   160,
     324,   324,   502,   172,   131,   114,   167,   116,   301,    91,
     114,   172,   160,   161,   162,   163,   298,   165,   124,    66,
     124,   303,   131,   168,    71,   126,   171,   131,   110,    84,
      77,    78,    87,   168,   116,   122,   171,     3,     4,     5,
       6,     3,     4,     5,     6,    91,   168,    94,   103,   171,
     363,    98,    99,   126,   435,   110,   437,   438,   295,   171,
     168,   374,    96,   171,   110,   120,   168,   123,   444,   171,
     116,     3,     3,     4,     5,     6,    46,    47,   133,    45,
      46,    47,     4,    45,    46,    47,    25,   142,   143,   120,
       3,    57,   136,   137,   138,   139,   140,   141,   168,   168,
     168,   171,   171,   171,   159,   160,   487,     3,     4,     5,
       6,    82,   167,    92,    45,    46,    47,   172,    84,     3,
     168,    87,    84,   171,   171,    87,   168,    66,   168,   171,
     167,   171,    71,   446,    45,   167,     4,   103,    77,    78,
       3,   103,   167,   524,   168,   526,   168,   171,    17,   171,
      46,    47,     6,    84,   120,    94,    87,    12,   120,    98,
      99,   168,   168,   113,   125,     4,   168,   133,   171,    45,
     130,   133,   103,     3,   148,    90,   142,   143,   111,     3,
     142,   143,    76,     3,    53,   111,   124,   167,    84,   120,
     167,    87,   167,   159,   160,    97,   165,   159,   160,   167,
      38,   167,   133,    48,    25,   167,   172,   103,   167,   167,
     172,   142,   143,    93,   171,   171,   119,    54,    92,   167,
     167,    57,   168,   167,   120,     3,     3,    30,   159,   160,
     167,   100,   171,   167,    93,   100,   167,   133,   167,   167,
     167,   172,   114,   168,   167,    66,   142,   143,   165,     3,
      71,   120,   103,   171,   166,    69,    77,    78,   127,   128,
      81,   167,     0,   159,   160,   134,   135,     6,   103,     7,
       6,   167,     6,    94,     3,     6,   172,    15,    99,   148,
     149,   150,   151,   152,    22,   119,   155,   156,    26,   158,
     159,   160,   161,   162,   163,   168,   165,   168,    36,    98,
       7,    39,    40,    77,   168,    77,    77,    98,    15,   130,
     125,     6,   168,    51,    52,    22,   168,     6,   168,    26,
     168,    53,   168,   167,    62,   168,   168,    65,   169,    36,
      24,    68,    39,    40,   167,   153,   168,   302,   305,   343,
     436,   220,   140,   428,    51,    52,   256,   529,    86,   234,
     100,   494,    90,   316,   309,    62,   495,   262,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   100,    -1,
      -1,    -1,    -1,   111,    53,    -1,    -1,    -1,    -1,    86,
      -1,    -1,   114,    90,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,   105,    -1,
      -1,    -1,   134,   135,   111,    -1,    -1,   145,   146,   147,
      53,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,
     152,   100,    -1,   155,   156,    -1,   158,   159,   160,   161,
     162,   163,    -1,   165,    -1,    -1,    -1,    -1,   145,   146,
     147,   120,    -1,    -1,    -1,    -1,    53,    -1,    -1,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,   150,   151,   152,    -1,    -1,   155,   156,    -1,   158,
     159,   160,   161,   162,   163,   128,   165,    -1,    -1,    -1,
      -1,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,   152,
      -1,    -1,   155,   156,    -1,   158,   159,   160,   161,   162,
     163,   128,   165,    24,    -1,    -1,    -1,   134,    29,    -1,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,   151,   152,    -1,    -1,   155,   156,
      -1,   158,   159,   160,   161,   162,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      62,    65,    86,    90,   105,   111,   145,   146,   147,   174,
     175,   176,   177,   181,   183,   185,   186,   190,   191,   192,
     204,   206,   209,   210,   211,   213,   216,   282,   283,    26,
       3,   275,     3,     3,   275,    70,    79,   109,    93,    93,
      97,   274,   275,    79,   275,    70,    79,   109,    19,    59,
       3,   284,   285,   144,   182,   182,   182,     0,   170,   289,
     111,   178,   178,    57,   167,   219,   220,   224,     3,   169,
     167,    93,   126,   193,   193,   193,   275,     3,   187,   275,
     122,   126,   205,    93,   132,   205,   205,   205,   275,   124,
     171,   176,    96,   123,   236,   219,   220,     9,    44,    80,
     221,   222,    76,   221,   232,     3,     4,     5,     6,    87,
     103,   142,   143,   172,   239,   240,   261,   262,   263,   264,
     265,   266,   267,   268,     4,   184,   120,     3,   276,   275,
     275,    82,   229,    92,   167,   212,     3,   214,   215,    45,
     275,   188,   262,   188,     3,   277,   275,   275,   219,   285,
     167,   265,    12,   225,   168,   168,   217,   218,   219,   224,
     113,   223,   125,   217,    54,    72,   237,     4,   168,   171,
      45,   130,    93,   124,   167,   212,     3,    45,    46,    47,
      84,   120,   133,   159,   160,   167,   242,   243,   244,   245,
     246,   247,   248,   249,   251,   252,   253,   254,   255,   257,
     258,   259,   260,   261,   188,     3,   290,    63,   220,   148,
     171,   229,    90,   207,   208,   111,   189,   189,     3,   179,
     180,   226,   238,   241,   242,   232,   221,   233,   234,   242,
     232,   242,   113,   242,   261,   275,     3,   216,     3,    27,
      60,   194,   195,   196,   203,   124,   167,   169,   167,   167,
     167,   110,   242,   250,    45,   120,   243,   165,   243,   220,
     242,   114,   131,    17,    53,   100,   120,   127,   128,   134,
     135,   148,   149,   150,   151,   152,   155,   156,   158,   159,
     160,   161,   162,   163,   165,    97,   168,   171,   167,   242,
     215,    38,    48,   167,   168,   171,    93,   227,   228,   171,
       3,   124,   280,   281,   237,   217,   171,    89,   115,   235,
     237,    54,    54,   167,    92,    24,    29,    31,    32,    34,
      42,    68,    85,    87,    88,   102,   106,   108,   118,   197,
     119,   167,   168,   171,   216,   168,   225,     3,   160,   220,
     136,   137,   138,   139,   140,   141,   256,   242,   242,   250,
      91,   110,   116,   167,   120,   238,   168,   168,   242,   242,
     243,   243,   100,   127,   167,   103,   120,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   265,   275,     3,   240,   205,   187,   240,   180,
     167,   269,   270,   271,   272,   273,   275,   286,   229,   241,
       3,   234,   242,   242,   290,   188,    30,   167,   199,   167,
     167,   167,   198,    27,    60,   103,   120,   200,   201,   202,
     167,   290,   195,   238,   168,    93,   124,   107,    91,   116,
     242,   242,   220,   166,   114,   243,   167,   220,   238,   103,
     166,   168,     3,   168,   216,    25,    66,    71,    77,    78,
      94,    99,   287,   171,   124,   278,   279,   280,    69,   230,
     168,   167,     6,     6,     6,     6,   119,   103,   202,   290,
     168,   168,   242,   197,   242,   242,   116,   107,   168,   243,
     220,   238,   168,   168,   168,    98,    77,    77,    77,    98,
     270,     3,   125,     6,   168,   171,   168,   168,   168,   168,
     168,   168,   116,   242,   168,   168,   279,   271,   270,   167,
     238,   168,     6,    81,   130,   290,    50,   231,   168,   167,
     242,   288,   168,   242,     3,   260,   168
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   173,   174,   175,   175,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   181,   181,   182,
     182,   183,   184,   185,   185,   186,   186,   187,   188,   189,
     189,   190,   191,   191,   191,   192,   192,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   198,   199,   199,   199,   200,   200,   201,   201,
     202,   202,   202,   202,   203,   203,   204,   204,   204,   204,
     205,   205,   206,   207,   208,   209,   210,   211,   211,   212,
     212,   213,   214,   214,   215,   216,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   221,   222,   222,   222,
     223,   223,   224,   225,   225,   226,   227,   227,   228,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   233,   234,
     235,   235,   235,   236,   236,   237,   237,   237,   237,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   242,   242,
     242,   242,   242,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   244,   244,   245,   245,   245,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   247,   247,   248,   248,   248,   248,   249,   249,
     249,   249,   250,   250,   251,   251,   252,   252,   252,   252,
     252,   252,   252,   253,   253,   254,   255,   256,   256,   256,
     256,   256,   256,   257,   258,   259,   260,   260,   260,   260,
     261,   261,   261,   261,   261,   261,   262,   263,   263,   264,
     264,   265,   266,   267,   268,   269,   269,   270,   270,   271,
     271,   272,   272,   273,   274,   275,   275,   276,   276,   277,
     278,   278,   279,   279,   280,   280,   281,   281,   282,   282,
     283,   284,   284,   285,   286,   286,   286,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   288,   289,   289,
     290,   290
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     4,     5,     4,     1,     2,     1,
       1,     3,     0,     5,     3,     0,     1,     0,     1,     2,
       2,     1,     1,     2,     5,     4,     4,     4,     3,     4,
       2,     0,     5,     1,     4,     4,     2,     8,     5,     3,
       0,     5,     1,     3,     3,     2,     2,     6,     1,     1,
       1,     3,     3,     3,     3,     5,     2,     1,     1,     1,
       1,     0,     7,     1,     0,     1,     1,     0,     2,     2,
       0,     4,     0,     2,     0,     3,     0,     1,     3,     2,
       1,     1,     0,     2,     0,     2,     2,     4,     2,     4,
       0,     1,     3,     1,     0,     1,     3,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     5,     6,     5,     6,     4,     6,
       3,     5,     4,     5,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     6,     6,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     1,     1,     1,
       4,     1,     3,     2,     1,     1,     3,     1,     0,     1,
       1,     5,     1,     0,     2,     1,     1,     0,     1,     0,
       2,     1,     3,     3,     4,     6,     8,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     0,     1,     1,     0,
       1,     3
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
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1980 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1986 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 155 "bison_parser.y"
            { }
#line 1992 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 155 "bison_parser.y"
            { }
#line 1998 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 2011 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2017 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2023 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 158 "bison_parser.y"
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

    case YYSYMBOL_hint_list: /* hint_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2049 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2055 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2061 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2067 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2073 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2079 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2085 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 155 "bison_parser.y"
            { }
#line 2091 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2097 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 155 "bison_parser.y"
            { }
#line 2103 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2109 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2115 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2121 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 155 "bison_parser.y"
            { }
#line 2127 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).table_element_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_element_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_element_vec));
}
#line 2140 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2146 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2152 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 155 "bison_parser.y"
            { }
#line 2158 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_specification: /* opt_time_specification  */
#line 155 "bison_parser.y"
            { }
#line 2164 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 155 "bison_parser.y"
            { }
#line 2170 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 155 "bison_parser.y"
            { }
#line 2176 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_list: /* column_constraint_list  */
#line 155 "bison_parser.y"
            { }
#line 2182 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 155 "bison_parser.y"
            { }
#line 2188 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2194 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2200 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 155 "bison_parser.y"
            { }
#line 2206 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2212 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2218 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2224 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2230 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2236 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2242 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2255 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2261 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2274 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2280 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2286 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2292 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2298 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2304 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2310 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2316 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2322 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 155 "bison_parser.y"
            { }
#line 2328 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2334 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 155 "bison_parser.y"
            { }
#line 2340 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2353 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2359 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2365 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2371 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2377 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2383 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2396 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2409 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2415 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 155 "bison_parser.y"
            { }
#line 2421 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2427 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2433 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2446 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2459 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2472 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2478 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2484 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2490 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2496 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2502 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2508 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2514 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2520 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2526 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2532 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2538 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2544 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2550 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2556 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2562 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 155 "bison_parser.y"
            { }
#line 2568 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2574 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2580 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2586 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2592 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2598 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2604 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2610 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2616 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2622 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2628 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2634 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2640 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2646 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2652 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2658 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2671 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2677 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2683 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 156 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2689 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2695 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_name: /* index_name  */
#line 157 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2701 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2707 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2713 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2719 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2725 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2731 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2737 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2743 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2749 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2755 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 155 "bison_parser.y"
            { }
#line 2761 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 166 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2767 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 158 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2780 "bison_parser.cpp"
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

#line 2888 "bison_parser.cpp"

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
#line 289 "bison_parser.y"
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
#line 3117 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 310 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3128 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 316 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3139 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 325 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3148 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 329 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3157 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 333 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3165 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 336 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3173 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 339 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3181 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 346 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3187 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 347 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3193 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 348 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3199 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 349 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3205 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 350 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3211 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 351 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3217 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 352 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3223 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 353 "bison_parser.y"
                                { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3229 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 354 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3235 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 355 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3241 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 364 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3247 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 365 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3253 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 370 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3259 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 371 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3265 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 375 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3274 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 379 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3284 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 391 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3292 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 394 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3300 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 397 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3308 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 411 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3318 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 421 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3327 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 425 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3337 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 439 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3348 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 445 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3359 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 454 "bison_parser.y"
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
#line 3378 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 471 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3384 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 475 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3392 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 478 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3398 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 487 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3409 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 501 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3417 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 504 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3427 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 509 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3437 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 523 "bison_parser.y"
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
#line 3455 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 536 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
			delete (yyvsp[-1].table_element_vec);
		}
#line 3468 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 544 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3480 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 551 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-5].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3492 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 558 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3505 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 569 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3511 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 570 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3517 "bison_parser.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 574 "bison_parser.y"
                   { (yyval.table_element_vec) = new std::vector<TableElement*>(); (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t)); }
#line 3523 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 575 "bison_parser.y"
                                            { (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t)); (yyval.table_element_vec) = (yyvsp[-2].table_element_vec); }
#line 3529 "bison_parser.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 579 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3535 "bison_parser.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 580 "bison_parser.y"
                         { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3541 "bison_parser.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 584 "bison_parser.y"
                                                             {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
			(yyval.column_t)->setNullableExplicit();
		}
#line 3550 "bison_parser.cpp"
    break;

  case 57: /* column_type: INT  */
#line 591 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3556 "bison_parser.cpp"
    break;

  case 58: /* column_type: INTEGER  */
#line 592 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3562 "bison_parser.cpp"
    break;

  case 59: /* column_type: LONG  */
#line 593 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3568 "bison_parser.cpp"
    break;

  case 60: /* column_type: FLOAT  */
#line 594 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3574 "bison_parser.cpp"
    break;

  case 61: /* column_type: DECIMAL opt_decimal_specification  */
#line 595 "bison_parser.y"
                                              { (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].column_specification_t)}; }
#line 3580 "bison_parser.cpp"
    break;

  case 62: /* column_type: DOUBLE  */
#line 596 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3586 "bison_parser.cpp"
    break;

  case 63: /* column_type: REAL  */
#line 597 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3592 "bison_parser.cpp"
    break;

  case 64: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 598 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3598 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHARACTER VARYING '(' INTVAL ')'  */
#line 599 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR_VARYING, (yyvsp[-1].ival)}; }
#line 3604 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHAR '(' INTVAL ')'  */
#line 600 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3610 "bison_parser.cpp"
    break;

  case 67: /* column_type: TEXT  */
#line 601 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3616 "bison_parser.cpp"
    break;

  case 68: /* column_type: TIME opt_time_specification  */
#line 602 "bison_parser.y"
                                        { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].column_specification_t) }; }
#line 3622 "bison_parser.cpp"
    break;

  case 69: /* column_type: DATETIME  */
#line 603 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3628 "bison_parser.cpp"
    break;

  case 70: /* column_type: DATE  */
#line 604 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3634 "bison_parser.cpp"
    break;

  case 71: /* opt_time_specification: '(' INTVAL ')'  */
#line 608 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3640 "bison_parser.cpp"
    break;

  case 72: /* opt_time_specification: %empty  */
#line 609 "bison_parser.y"
                        { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3646 "bison_parser.cpp"
    break;

  case 73: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 613 "bison_parser.y"
                                  { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3652 "bison_parser.cpp"
    break;

  case 74: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 614 "bison_parser.y"
                       { (yyval.column_specification_t) = ColumnSpecification{(yyvsp[-1].ival)}; }
#line 3658 "bison_parser.cpp"
    break;

  case 75: /* opt_decimal_specification: %empty  */
#line 615 "bison_parser.y"
                    { (yyval.column_specification_t) = ColumnSpecification{}; }
#line 3664 "bison_parser.cpp"
    break;

  case 76: /* opt_column_constraints: column_constraint_list  */
#line 619 "bison_parser.y"
                                 { (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec); }
#line 3670 "bison_parser.cpp"
    break;

  case 77: /* opt_column_constraints: %empty  */
#line 620 "bison_parser.y"
                            { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3676 "bison_parser.cpp"
    break;

  case 78: /* column_constraint_list: column_constraint  */
#line 624 "bison_parser.y"
                            { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t)); }
#line 3682 "bison_parser.cpp"
    break;

  case 79: /* column_constraint_list: column_constraint_list column_constraint  */
#line 625 "bison_parser.y"
                                                 { (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t)); (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec); }
#line 3688 "bison_parser.cpp"
    break;

  case 80: /* column_constraint: PRIMARY KEY  */
#line 628 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3694 "bison_parser.cpp"
    break;

  case 81: /* column_constraint: UNIQUE  */
#line 629 "bison_parser.y"
               { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3700 "bison_parser.cpp"
    break;

  case 82: /* column_constraint: NULL  */
#line 630 "bison_parser.y"
             { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3706 "bison_parser.cpp"
    break;

  case 83: /* column_constraint: NOT NULL  */
#line 631 "bison_parser.y"
                 { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3712 "bison_parser.cpp"
    break;

  case 84: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 635 "bison_parser.y"
                                             { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3718 "bison_parser.cpp"
    break;

  case 85: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 636 "bison_parser.y"
                                        { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3724 "bison_parser.cpp"
    break;

  case 86: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 647 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3735 "bison_parser.cpp"
    break;

  case 87: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 653 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3746 "bison_parser.cpp"
    break;

  case 88: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 659 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3756 "bison_parser.cpp"
    break;

  case 89: /* drop_statement: DROP INDEX opt_exists index_name  */
#line 665 "bison_parser.y"
                                                 {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
    			(yyval.drop_stmt)->indexName = (yyvsp[0].sval);
    		}
#line 3766 "bison_parser.cpp"
    break;

  case 90: /* opt_exists: IF EXISTS  */
#line 673 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3772 "bison_parser.cpp"
    break;

  case 91: /* opt_exists: %empty  */
#line 674 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3778 "bison_parser.cpp"
    break;

  case 92: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 683 "bison_parser.y"
                                                               {
			(yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
			(yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
			(yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
		}
#line 3788 "bison_parser.cpp"
    break;

  case 93: /* alter_action: drop_action  */
#line 691 "bison_parser.y"
                    {(yyval.alter_action_t) = (yyvsp[0].drop_action_t);}
#line 3794 "bison_parser.cpp"
    break;

  case 94: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 694 "bison_parser.y"
                                          {
            (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
            (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
        }
#line 3803 "bison_parser.cpp"
    break;

  case 95: /* delete_statement: DELETE FROM table_name opt_where  */
#line 706 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3814 "bison_parser.cpp"
    break;

  case 96: /* truncate_statement: TRUNCATE table_name  */
#line 715 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3824 "bison_parser.cpp"
    break;

  case 97: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 728 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3836 "bison_parser.cpp"
    break;

  case 98: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 735 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3848 "bison_parser.cpp"
    break;

  case 99: /* opt_column_list: '(' ident_commalist ')'  */
#line 746 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3854 "bison_parser.cpp"
    break;

  case 100: /* opt_column_list: %empty  */
#line 747 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3860 "bison_parser.cpp"
    break;

  case 101: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 757 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3871 "bison_parser.cpp"
    break;

  case 102: /* update_clause_commalist: update_clause  */
#line 766 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3877 "bison_parser.cpp"
    break;

  case 103: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 767 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3883 "bison_parser.cpp"
    break;

  case 104: /* update_clause: IDENTIFIER '=' expr  */
#line 771 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3893 "bison_parser.cpp"
    break;

  case 105: /* select_statement: opt_with_clause select_with_paren  */
#line 783 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3902 "bison_parser.cpp"
    break;

  case 106: /* select_statement: opt_with_clause select_no_paren  */
#line 787 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3911 "bison_parser.cpp"
    break;

  case 107: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 791 "bison_parser.y"
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
#line 3927 "bison_parser.cpp"
    break;

  case 110: /* select_within_set_operation_no_parentheses: select_clause  */
#line 809 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3933 "bison_parser.cpp"
    break;

  case 111: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 810 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3946 "bison_parser.cpp"
    break;

  case 112: /* select_with_paren: '(' select_no_paren ')'  */
#line 821 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3952 "bison_parser.cpp"
    break;

  case 113: /* select_with_paren: '(' select_with_paren ')'  */
#line 822 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3958 "bison_parser.cpp"
    break;

  case 114: /* select_no_paren: select_clause opt_order opt_limit  */
#line 826 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3973 "bison_parser.cpp"
    break;

  case 115: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 836 "bison_parser.y"
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
#line 3988 "bison_parser.cpp"
    break;

  case 116: /* set_operator: set_type opt_all  */
#line 849 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3997 "bison_parser.cpp"
    break;

  case 117: /* set_type: UNION  */
#line 856 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 4006 "bison_parser.cpp"
    break;

  case 118: /* set_type: INTERSECT  */
#line 860 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 4015 "bison_parser.cpp"
    break;

  case 119: /* set_type: EXCEPT  */
#line 864 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 4024 "bison_parser.cpp"
    break;

  case 120: /* opt_all: ALL  */
#line 871 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 4032 "bison_parser.cpp"
    break;

  case 121: /* opt_all: %empty  */
#line 874 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 4040 "bison_parser.cpp"
    break;

  case 122: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 880 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 4054 "bison_parser.cpp"
    break;

  case 123: /* opt_distinct: DISTINCT  */
#line 892 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 4060 "bison_parser.cpp"
    break;

  case 124: /* opt_distinct: %empty  */
#line 893 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4066 "bison_parser.cpp"
    break;

  case 126: /* opt_from_clause: from_clause  */
#line 901 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4072 "bison_parser.cpp"
    break;

  case 127: /* opt_from_clause: %empty  */
#line 902 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4078 "bison_parser.cpp"
    break;

  case 128: /* from_clause: FROM table_ref  */
#line 906 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4084 "bison_parser.cpp"
    break;

  case 129: /* opt_where: WHERE expr  */
#line 911 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4090 "bison_parser.cpp"
    break;

  case 130: /* opt_where: %empty  */
#line 912 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4096 "bison_parser.cpp"
    break;

  case 131: /* opt_group: GROUP BY expr_list opt_having  */
#line 916 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4106 "bison_parser.cpp"
    break;

  case 132: /* opt_group: %empty  */
#line 921 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4112 "bison_parser.cpp"
    break;

  case 133: /* opt_having: HAVING expr  */
#line 925 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4118 "bison_parser.cpp"
    break;

  case 134: /* opt_having: %empty  */
#line 926 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4124 "bison_parser.cpp"
    break;

  case 135: /* opt_order: ORDER BY order_list  */
#line 930 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4130 "bison_parser.cpp"
    break;

  case 136: /* opt_order: %empty  */
#line 931 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4136 "bison_parser.cpp"
    break;

  case 137: /* order_list: order_desc  */
#line 935 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4142 "bison_parser.cpp"
    break;

  case 138: /* order_list: order_list ',' order_desc  */
#line 936 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4148 "bison_parser.cpp"
    break;

  case 139: /* order_desc: expr opt_order_type  */
#line 940 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4154 "bison_parser.cpp"
    break;

  case 140: /* opt_order_type: ASC  */
#line 944 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4160 "bison_parser.cpp"
    break;

  case 141: /* opt_order_type: DESC  */
#line 945 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4166 "bison_parser.cpp"
    break;

  case 142: /* opt_order_type: %empty  */
#line 946 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4172 "bison_parser.cpp"
    break;

  case 143: /* opt_top: TOP int_literal  */
#line 952 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4178 "bison_parser.cpp"
    break;

  case 144: /* opt_top: %empty  */
#line 953 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4184 "bison_parser.cpp"
    break;

  case 145: /* opt_limit: LIMIT expr  */
#line 957 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4190 "bison_parser.cpp"
    break;

  case 146: /* opt_limit: OFFSET expr  */
#line 958 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4196 "bison_parser.cpp"
    break;

  case 147: /* opt_limit: LIMIT expr OFFSET expr  */
#line 959 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4202 "bison_parser.cpp"
    break;

  case 148: /* opt_limit: LIMIT ALL  */
#line 960 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4208 "bison_parser.cpp"
    break;

  case 149: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 961 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4214 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: %empty  */
#line 962 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4220 "bison_parser.cpp"
    break;

  case 151: /* expr_list: expr_alias  */
#line 969 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4226 "bison_parser.cpp"
    break;

  case 152: /* expr_list: expr_list ',' expr_alias  */
#line 970 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4232 "bison_parser.cpp"
    break;

  case 153: /* opt_literal_list: literal_list  */
#line 974 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4238 "bison_parser.cpp"
    break;

  case 154: /* opt_literal_list: %empty  */
#line 975 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4244 "bison_parser.cpp"
    break;

  case 155: /* literal_list: literal  */
#line 979 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4250 "bison_parser.cpp"
    break;

  case 156: /* literal_list: literal_list ',' literal  */
#line 980 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4256 "bison_parser.cpp"
    break;

  case 157: /* expr_alias: expr opt_alias  */
#line 984 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4268 "bison_parser.cpp"
    break;

  case 163: /* operand: '(' expr ')'  */
#line 1002 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4274 "bison_parser.cpp"
    break;

  case 173: /* operand: '(' select_no_paren ')'  */
#line 1012 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4280 "bison_parser.cpp"
    break;

  case 176: /* unary_expr: '-' operand  */
#line 1021 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4286 "bison_parser.cpp"
    break;

  case 177: /* unary_expr: NOT operand  */
#line 1022 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4292 "bison_parser.cpp"
    break;

  case 178: /* unary_expr: operand ISNULL  */
#line 1023 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4298 "bison_parser.cpp"
    break;

  case 179: /* unary_expr: operand IS NULL  */
#line 1024 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4304 "bison_parser.cpp"
    break;

  case 180: /* unary_expr: operand IS NOT NULL  */
#line 1025 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4310 "bison_parser.cpp"
    break;

  case 182: /* binary_expr: operand '-' operand  */
#line 1030 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4316 "bison_parser.cpp"
    break;

  case 183: /* binary_expr: operand '+' operand  */
#line 1031 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4322 "bison_parser.cpp"
    break;

  case 184: /* binary_expr: operand '/' operand  */
#line 1032 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4328 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand '*' operand  */
#line 1033 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4334 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand '%' operand  */
#line 1034 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4340 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand '^' operand  */
#line 1035 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4346 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand LIKE operand  */
#line 1036 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4352 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand NOT LIKE operand  */
#line 1037 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4358 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand ILIKE operand  */
#line 1038 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4364 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand CONCAT operand  */
#line 1039 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4370 "bison_parser.cpp"
    break;

  case 192: /* logic_expr: expr AND expr  */
#line 1043 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4376 "bison_parser.cpp"
    break;

  case 193: /* logic_expr: expr OR expr  */
#line 1044 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4382 "bison_parser.cpp"
    break;

  case 194: /* in_expr: operand IN '(' expr_list ')'  */
#line 1048 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4388 "bison_parser.cpp"
    break;

  case 195: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1049 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4394 "bison_parser.cpp"
    break;

  case 196: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1050 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4400 "bison_parser.cpp"
    break;

  case 197: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1051 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4406 "bison_parser.cpp"
    break;

  case 198: /* case_expr: CASE expr case_list END  */
#line 1057 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4412 "bison_parser.cpp"
    break;

  case 199: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1058 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4418 "bison_parser.cpp"
    break;

  case 200: /* case_expr: CASE case_list END  */
#line 1059 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4424 "bison_parser.cpp"
    break;

  case 201: /* case_expr: CASE case_list ELSE expr END  */
#line 1060 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4430 "bison_parser.cpp"
    break;

  case 202: /* case_list: WHEN expr THEN expr  */
#line 1064 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4436 "bison_parser.cpp"
    break;

  case 203: /* case_list: case_list WHEN expr THEN expr  */
#line 1065 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4442 "bison_parser.cpp"
    break;

  case 204: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1069 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4448 "bison_parser.cpp"
    break;

  case 205: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1070 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4454 "bison_parser.cpp"
    break;

  case 206: /* comp_expr: operand '=' operand  */
#line 1074 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4460 "bison_parser.cpp"
    break;

  case 207: /* comp_expr: operand EQUALS operand  */
#line 1075 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4466 "bison_parser.cpp"
    break;

  case 208: /* comp_expr: operand NOTEQUALS operand  */
#line 1076 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4472 "bison_parser.cpp"
    break;

  case 209: /* comp_expr: operand '<' operand  */
#line 1077 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4478 "bison_parser.cpp"
    break;

  case 210: /* comp_expr: operand '>' operand  */
#line 1078 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4484 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand LESSEQ operand  */
#line 1079 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4490 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand GREATEREQ operand  */
#line 1080 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4496 "bison_parser.cpp"
    break;

  case 213: /* function_expr: IDENTIFIER '(' ')'  */
#line 1084 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4502 "bison_parser.cpp"
    break;

  case 214: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1085 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4508 "bison_parser.cpp"
    break;

  case 215: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1089 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4514 "bison_parser.cpp"
    break;

  case 216: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1093 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4520 "bison_parser.cpp"
    break;

  case 217: /* datetime_field: SECOND  */
#line 1097 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4526 "bison_parser.cpp"
    break;

  case 218: /* datetime_field: MINUTE  */
#line 1098 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4532 "bison_parser.cpp"
    break;

  case 219: /* datetime_field: HOUR  */
#line 1099 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4538 "bison_parser.cpp"
    break;

  case 220: /* datetime_field: DAY  */
#line 1100 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4544 "bison_parser.cpp"
    break;

  case 221: /* datetime_field: MONTH  */
#line 1101 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4550 "bison_parser.cpp"
    break;

  case 222: /* datetime_field: YEAR  */
#line 1102 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4556 "bison_parser.cpp"
    break;

  case 223: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1106 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4562 "bison_parser.cpp"
    break;

  case 224: /* array_index: operand '[' int_literal ']'  */
#line 1110 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4568 "bison_parser.cpp"
    break;

  case 225: /* between_expr: operand BETWEEN operand AND operand  */
#line 1114 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4574 "bison_parser.cpp"
    break;

  case 226: /* column_name: IDENTIFIER  */
#line 1118 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4580 "bison_parser.cpp"
    break;

  case 227: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1119 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4586 "bison_parser.cpp"
    break;

  case 228: /* column_name: '*'  */
#line 1120 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4592 "bison_parser.cpp"
    break;

  case 229: /* column_name: IDENTIFIER '.' '*'  */
#line 1121 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4598 "bison_parser.cpp"
    break;

  case 236: /* string_literal: STRING  */
#line 1134 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4604 "bison_parser.cpp"
    break;

  case 237: /* bool_literal: TRUE  */
#line 1138 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4610 "bison_parser.cpp"
    break;

  case 238: /* bool_literal: FALSE  */
#line 1139 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4616 "bison_parser.cpp"
    break;

  case 239: /* num_literal: FLOATVAL  */
#line 1143 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4622 "bison_parser.cpp"
    break;

  case 241: /* int_literal: INTVAL  */
#line 1148 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4628 "bison_parser.cpp"
    break;

  case 242: /* null_literal: NULL  */
#line 1152 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4634 "bison_parser.cpp"
    break;

  case 243: /* date_literal: DATE STRING  */
#line 1156 "bison_parser.y"
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
#line 4649 "bison_parser.cpp"
    break;

  case 244: /* param_expr: '?'  */
#line 1169 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4659 "bison_parser.cpp"
    break;

  case 246: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1182 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4670 "bison_parser.cpp"
    break;

  case 250: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1198 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4681 "bison_parser.cpp"
    break;

  case 251: /* table_ref_commalist: table_ref_atomic  */
#line 1207 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4687 "bison_parser.cpp"
    break;

  case 252: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1208 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4693 "bison_parser.cpp"
    break;

  case 253: /* table_ref_name: table_name opt_table_alias  */
#line 1213 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4705 "bison_parser.cpp"
    break;

  case 254: /* table_ref_name_no_alias: table_name  */
#line 1224 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4715 "bison_parser.cpp"
    break;

  case 255: /* table_name: IDENTIFIER  */
#line 1233 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4721 "bison_parser.cpp"
    break;

  case 256: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1234 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4727 "bison_parser.cpp"
    break;

  case 257: /* opt_index_name: IDENTIFIER  */
#line 1238 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4733 "bison_parser.cpp"
    break;

  case 258: /* opt_index_name: %empty  */
#line 1239 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4739 "bison_parser.cpp"
    break;

  case 259: /* index_name: IDENTIFIER  */
#line 1243 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4745 "bison_parser.cpp"
    break;

  case 261: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1249 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4751 "bison_parser.cpp"
    break;

  case 263: /* opt_table_alias: %empty  */
#line 1255 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4757 "bison_parser.cpp"
    break;

  case 264: /* alias: AS IDENTIFIER  */
#line 1260 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4763 "bison_parser.cpp"
    break;

  case 265: /* alias: IDENTIFIER  */
#line 1261 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4769 "bison_parser.cpp"
    break;

  case 267: /* opt_alias: %empty  */
#line 1267 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4775 "bison_parser.cpp"
    break;

  case 269: /* opt_with_clause: %empty  */
#line 1277 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4781 "bison_parser.cpp"
    break;

  case 270: /* with_clause: WITH with_description_list  */
#line 1281 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4787 "bison_parser.cpp"
    break;

  case 271: /* with_description_list: with_description  */
#line 1285 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4796 "bison_parser.cpp"
    break;

  case 272: /* with_description_list: with_description_list ',' with_description  */
#line 1289 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4805 "bison_parser.cpp"
    break;

  case 273: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1296 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4815 "bison_parser.cpp"
    break;

  case 274: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1310 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4827 "bison_parser.cpp"
    break;

  case 275: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1318 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4840 "bison_parser.cpp"
    break;

  case 276: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1328 "bison_parser.y"
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
#line 4860 "bison_parser.cpp"
    break;

  case 277: /* opt_join_type: INNER  */
#line 1346 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4866 "bison_parser.cpp"
    break;

  case 278: /* opt_join_type: LEFT OUTER  */
#line 1347 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4872 "bison_parser.cpp"
    break;

  case 279: /* opt_join_type: LEFT  */
#line 1348 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4878 "bison_parser.cpp"
    break;

  case 280: /* opt_join_type: RIGHT OUTER  */
#line 1349 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4884 "bison_parser.cpp"
    break;

  case 281: /* opt_join_type: RIGHT  */
#line 1350 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4890 "bison_parser.cpp"
    break;

  case 282: /* opt_join_type: FULL OUTER  */
#line 1351 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4896 "bison_parser.cpp"
    break;

  case 283: /* opt_join_type: OUTER  */
#line 1352 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4902 "bison_parser.cpp"
    break;

  case 284: /* opt_join_type: FULL  */
#line 1353 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4908 "bison_parser.cpp"
    break;

  case 285: /* opt_join_type: CROSS  */
#line 1354 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4914 "bison_parser.cpp"
    break;

  case 286: /* opt_join_type: %empty  */
#line 1355 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4920 "bison_parser.cpp"
    break;

  case 290: /* ident_commalist: IDENTIFIER  */
#line 1375 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4926 "bison_parser.cpp"
    break;

  case 291: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1376 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4932 "bison_parser.cpp"
    break;


#line 4936 "bison_parser.cpp"

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

#line 1379 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
