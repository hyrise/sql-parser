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

// clang-format on
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

#line 109 "bison_parser.cpp"

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
  YYSYMBOL_ENCODING = 24,                  /* ENCODING  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 26,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 27,                   /* PREPARE  */
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
  YYSYMBOL_OVER = 77,                      /* OVER  */
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
  YYSYMBOL_PARTITION = 105,                /* PARTITION  */
  YYSYMBOL_PLAN = 106,                     /* PLAN  */
  YYSYMBOL_SHOW = 107,                     /* SHOW  */
  YYSYMBOL_TEXT = 108,                     /* TEXT  */
  YYSYMBOL_THEN = 109,                     /* THEN  */
  YYSYMBOL_TIME = 110,                     /* TIME  */
  YYSYMBOL_VIEW = 111,                     /* VIEW  */
  YYSYMBOL_WHEN = 112,                     /* WHEN  */
  YYSYMBOL_WITH = 113,                     /* WITH  */
  YYSYMBOL_ADD = 114,                      /* ADD  */
  YYSYMBOL_ALL = 115,                      /* ALL  */
  YYSYMBOL_AND = 116,                      /* AND  */
  YYSYMBOL_ASC = 117,                      /* ASC  */
  YYSYMBOL_END = 118,                      /* END  */
  YYSYMBOL_FOR = 119,                      /* FOR  */
  YYSYMBOL_INT = 120,                      /* INT  */
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
  YYSYMBOL_BOOLEAN = 153,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 154,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 155,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 156,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 157,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 158,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 159,                     /* SKIP  */
  YYSYMBOL_LOCKED = 160,                   /* LOCKED  */
  YYSYMBOL_SHARE = 161,                    /* SHARE  */
  YYSYMBOL_RANGE = 162,                    /* RANGE  */
  YYSYMBOL_ROWS = 163,                     /* ROWS  */
  YYSYMBOL_GROUPS = 164,                   /* GROUPS  */
  YYSYMBOL_UNBOUNDED = 165,                /* UNBOUNDED  */
  YYSYMBOL_FOLLOWING = 166,                /* FOLLOWING  */
  YYSYMBOL_PRECEDING = 167,                /* PRECEDING  */
  YYSYMBOL_CURRENT_ROW = 168,              /* CURRENT_ROW  */
  YYSYMBOL_UNIQUE = 169,                   /* UNIQUE  */
  YYSYMBOL_PRIMARY = 170,                  /* PRIMARY  */
  YYSYMBOL_FOREIGN = 171,                  /* FOREIGN  */
  YYSYMBOL_KEY = 172,                      /* KEY  */
  YYSYMBOL_REFERENCES = 173,               /* REFERENCES  */
  YYSYMBOL_DELIMITER = 174,                /* DELIMITER  */
  YYSYMBOL_QUOTE = 175,                    /* QUOTE  */
  YYSYMBOL_176_ = 176,                     /* '='  */
  YYSYMBOL_EQUALS = 177,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 178,                /* NOTEQUALS  */
  YYSYMBOL_179_ = 179,                     /* '<'  */
  YYSYMBOL_180_ = 180,                     /* '>'  */
  YYSYMBOL_LESS = 181,                     /* LESS  */
  YYSYMBOL_GREATER = 182,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 183,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 184,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 185,                  /* NOTNULL  */
  YYSYMBOL_186_ = 186,                     /* '+'  */
  YYSYMBOL_187_ = 187,                     /* '-'  */
  YYSYMBOL_188_ = 188,                     /* '*'  */
  YYSYMBOL_189_ = 189,                     /* '/'  */
  YYSYMBOL_190_ = 190,                     /* '%'  */
  YYSYMBOL_191_ = 191,                     /* '^'  */
  YYSYMBOL_UMINUS = 192,                   /* UMINUS  */
  YYSYMBOL_193_ = 193,                     /* '['  */
  YYSYMBOL_194_ = 194,                     /* ']'  */
  YYSYMBOL_195_ = 195,                     /* '('  */
  YYSYMBOL_196_ = 196,                     /* ')'  */
  YYSYMBOL_197_ = 197,                     /* '.'  */
  YYSYMBOL_198_ = 198,                     /* ';'  */
  YYSYMBOL_199_ = 199,                     /* ','  */
  YYSYMBOL_200_ = 200,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 201,                 /* $accept  */
  YYSYMBOL_input = 202,                    /* input  */
  YYSYMBOL_statement_list = 203,           /* statement_list  */
  YYSYMBOL_statement = 204,                /* statement  */
  YYSYMBOL_preparable_statement = 205,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 206,                /* opt_hints  */
  YYSYMBOL_hint_list = 207,                /* hint_list  */
  YYSYMBOL_hint = 208,                     /* hint  */
  YYSYMBOL_transaction_statement = 209,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 210,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 211,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 212,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 213,        /* execute_statement  */
  YYSYMBOL_import_statement = 214,         /* import_statement  */
  YYSYMBOL_file_type = 215,                /* file_type  */
  YYSYMBOL_file_path = 216,                /* file_path  */
  YYSYMBOL_opt_import_export_options = 217, /* opt_import_export_options  */
  YYSYMBOL_import_export_options = 218,    /* import_export_options  */
  YYSYMBOL_export_statement = 219,         /* export_statement  */
  YYSYMBOL_show_statement = 220,           /* show_statement  */
  YYSYMBOL_create_statement = 221,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 222,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 223,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 224,               /* table_elem  */
  YYSYMBOL_column_def = 225,               /* column_def  */
  YYSYMBOL_column_type = 226,              /* column_type  */
  YYSYMBOL_opt_time_precision = 227,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 228, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 229,   /* opt_column_constraints  */
  YYSYMBOL_column_constraints = 230,       /* column_constraints  */
  YYSYMBOL_column_constraint = 231,        /* column_constraint  */
  YYSYMBOL_table_constraint = 232,         /* table_constraint  */
  YYSYMBOL_references_spec = 233,          /* references_spec  */
  YYSYMBOL_drop_statement = 234,           /* drop_statement  */
  YYSYMBOL_opt_exists = 235,               /* opt_exists  */
  YYSYMBOL_alter_statement = 236,          /* alter_statement  */
  YYSYMBOL_alter_action = 237,             /* alter_action  */
  YYSYMBOL_drop_action = 238,              /* drop_action  */
  YYSYMBOL_delete_statement = 239,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 240,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 241,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 242,          /* opt_column_list  */
  YYSYMBOL_update_statement = 243,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 244,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 245,            /* update_clause  */
  YYSYMBOL_select_statement = 246,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 247, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 248, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 249,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 250,          /* select_no_paren  */
  YYSYMBOL_set_operator = 251,             /* set_operator  */
  YYSYMBOL_set_type = 252,                 /* set_type  */
  YYSYMBOL_opt_all = 253,                  /* opt_all  */
  YYSYMBOL_select_clause = 254,            /* select_clause  */
  YYSYMBOL_opt_distinct = 255,             /* opt_distinct  */
  YYSYMBOL_select_list = 256,              /* select_list  */
  YYSYMBOL_opt_from_clause = 257,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 258,              /* from_clause  */
  YYSYMBOL_opt_where = 259,                /* opt_where  */
  YYSYMBOL_opt_group = 260,                /* opt_group  */
  YYSYMBOL_opt_having = 261,               /* opt_having  */
  YYSYMBOL_opt_order = 262,                /* opt_order  */
  YYSYMBOL_order_list = 263,               /* order_list  */
  YYSYMBOL_order_desc = 264,               /* order_desc  */
  YYSYMBOL_opt_order_type = 265,           /* opt_order_type  */
  YYSYMBOL_opt_top = 266,                  /* opt_top  */
  YYSYMBOL_opt_limit = 267,                /* opt_limit  */
  YYSYMBOL_expr_list = 268,                /* expr_list  */
  YYSYMBOL_opt_extended_literal_list = 269, /* opt_extended_literal_list  */
  YYSYMBOL_extended_literal_list = 270,    /* extended_literal_list  */
  YYSYMBOL_casted_extended_literal = 271,  /* casted_extended_literal  */
  YYSYMBOL_extended_literal = 272,         /* extended_literal  */
  YYSYMBOL_expr_alias = 273,               /* expr_alias  */
  YYSYMBOL_expr = 274,                     /* expr  */
  YYSYMBOL_operand = 275,                  /* operand  */
  YYSYMBOL_scalar_expr = 276,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 277,               /* unary_expr  */
  YYSYMBOL_binary_expr = 278,              /* binary_expr  */
  YYSYMBOL_logic_expr = 279,               /* logic_expr  */
  YYSYMBOL_in_expr = 280,                  /* in_expr  */
  YYSYMBOL_case_expr = 281,                /* case_expr  */
  YYSYMBOL_case_list = 282,                /* case_list  */
  YYSYMBOL_exists_expr = 283,              /* exists_expr  */
  YYSYMBOL_comp_expr = 284,                /* comp_expr  */
  YYSYMBOL_function_expr = 285,            /* function_expr  */
  YYSYMBOL_opt_window = 286,               /* opt_window  */
  YYSYMBOL_opt_partition = 287,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 288,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 289,               /* frame_type  */
  YYSYMBOL_frame_bound = 290,              /* frame_bound  */
  YYSYMBOL_extract_expr = 291,             /* extract_expr  */
  YYSYMBOL_cast_expr = 292,                /* cast_expr  */
  YYSYMBOL_datetime_field = 293,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 294,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 295,           /* duration_field  */
  YYSYMBOL_array_expr = 296,               /* array_expr  */
  YYSYMBOL_array_index = 297,              /* array_index  */
  YYSYMBOL_between_expr = 298,             /* between_expr  */
  YYSYMBOL_column_name = 299,              /* column_name  */
  YYSYMBOL_literal = 300,                  /* literal  */
  YYSYMBOL_string_literal = 301,           /* string_literal  */
  YYSYMBOL_bool_literal = 302,             /* bool_literal  */
  YYSYMBOL_num_literal = 303,              /* num_literal  */
  YYSYMBOL_int_literal = 304,              /* int_literal  */
  YYSYMBOL_null_literal = 305,             /* null_literal  */
  YYSYMBOL_date_literal = 306,             /* date_literal  */
  YYSYMBOL_interval_literal = 307,         /* interval_literal  */
  YYSYMBOL_param_expr = 308,               /* param_expr  */
  YYSYMBOL_table_ref = 309,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 310,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 311, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 312,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 313,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 314,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 315,               /* table_name  */
  YYSYMBOL_opt_index_name = 316,           /* opt_index_name  */
  YYSYMBOL_table_alias = 317,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 318,          /* opt_table_alias  */
  YYSYMBOL_alias = 319,                    /* alias  */
  YYSYMBOL_opt_alias = 320,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 321,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 322,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 323,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 324,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 325,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 326,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 327,              /* with_clause  */
  YYSYMBOL_with_description_list = 328,    /* with_description_list  */
  YYSYMBOL_with_description = 329,         /* with_description  */
  YYSYMBOL_join_clause = 330,              /* join_clause  */
  YYSYMBOL_opt_join_type = 331,            /* opt_join_type  */
  YYSYMBOL_join_condition = 332,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 333,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 334           /* ident_commalist  */
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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   893

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  201
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  355
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  652

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   438


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
       2,     2,     2,     2,     2,     2,     2,   190,     2,     2,
     195,   196,   188,   186,   199,   187,   197,   189,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   198,
     179,   176,   180,   200,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   193,     2,   194,   191,     2,     2,     2,     2,     2,
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
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   177,   178,   181,   182,   183,   184,   185,   192
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   336,   336,   355,   361,   368,   372,   376,   377,   378,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     395,   396,   398,   402,   407,   411,   421,   422,   423,   425,
     425,   431,   437,   439,   443,   455,   461,   486,   501,   503,
     504,   505,   507,   516,   520,   530,   534,   544,   548,   558,
     562,   572,   582,   605,   633,   634,   639,   650,   663,   675,
     682,   689,   698,   699,   701,   705,   710,   711,   713,   721,
     722,   723,   724,   725,   726,   727,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   743,   744,   746,
     747,   748,   750,   751,   753,   757,   761,   766,   774,   775,
     776,   777,   779,   780,   781,   783,   791,   797,   803,   809,
     815,   816,   823,   829,   831,   841,   848,   859,   866,   874,
     875,   882,   889,   893,   898,   908,   912,   916,   928,   928,
     930,   931,   940,   941,   943,   957,   969,   974,   978,   982,
     987,   988,   990,  1000,  1001,  1003,  1005,  1006,  1008,  1010,
    1011,  1013,  1018,  1020,  1021,  1023,  1024,  1026,  1030,  1035,
    1037,  1038,  1039,  1043,  1044,  1046,  1047,  1048,  1049,  1050,
    1051,  1056,  1060,  1066,  1067,  1069,  1073,  1078,  1078,  1082,
    1090,  1091,  1093,  1102,  1102,  1102,  1102,  1102,  1104,  1105,
    1105,  1105,  1105,  1105,  1105,  1105,  1105,  1106,  1106,  1110,
    1110,  1112,  1113,  1114,  1115,  1116,  1118,  1118,  1119,  1120,
    1121,  1122,  1123,  1124,  1125,  1126,  1127,  1129,  1130,  1132,
    1133,  1134,  1135,  1139,  1140,  1141,  1142,  1144,  1145,  1147,
    1148,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1160,  1161,
    1165,  1166,  1168,  1169,  1174,  1175,  1176,  1180,  1181,  1182,
    1184,  1185,  1186,  1187,  1188,  1190,  1192,  1194,  1195,  1196,
    1197,  1198,  1199,  1201,  1202,  1203,  1204,  1205,  1206,  1208,
    1208,  1210,  1212,  1214,  1216,  1217,  1218,  1219,  1221,  1221,
    1221,  1221,  1221,  1221,  1221,  1223,  1225,  1226,  1228,  1229,
    1231,  1233,  1235,  1246,  1247,  1258,  1290,  1299,  1299,  1306,
    1306,  1308,  1308,  1315,  1319,  1324,  1332,  1338,  1342,  1347,
    1348,  1350,  1350,  1352,  1352,  1354,  1355,  1357,  1357,  1363,
    1364,  1366,  1370,  1375,  1381,  1388,  1389,  1390,  1391,  1393,
    1394,  1395,  1401,  1401,  1403,  1405,  1409,  1414,  1424,  1431,
    1439,  1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,
    1457,  1459,  1465,  1465,  1468,  1472
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
  "EXECUTE", "EXPLAIN", "ENCODING", "INTEGER", "NATURAL", "PREPARE",
  "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "BIGINT",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA",
  "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS",
  "ORDER", "OVER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PARTITION", "PLAN", "SHOW", "TEXT",
  "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC",
  "END", "FOR", "INT", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN",
  "IS", "OF", "ON", "OR", "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND",
  "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS",
  "DAYS", "MONTHS", "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN",
  "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED",
  "SHARE", "RANGE", "ROWS", "GROUPS", "UNBOUNDED", "FOLLOWING",
  "PRECEDING", "CURRENT_ROW", "UNIQUE", "PRIMARY", "FOREIGN", "KEY",
  "REFERENCES", "DELIMITER", "QUOTE", "'='", "EQUALS", "NOTEQUALS", "'<'",
  "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'",
  "';'", "','", "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_import_export_options",
  "import_export_options", "export_statement", "show_statement",
  "create_statement", "opt_not_exists", "table_elem_commalist",
  "table_elem", "column_def", "column_type", "opt_time_precision",
  "opt_decimal_specification", "opt_column_constraints",
  "column_constraints", "column_constraint", "table_constraint",
  "references_spec", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_extended_literal_list", "extended_literal_list",
  "casted_extended_literal", "extended_literal", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "opt_window", "opt_partition", "opt_frame_clause",
  "frame_type", "frame_bound", "extract_expr", "cast_expr",
  "datetime_field", "datetime_field_plural", "duration_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "interval_literal", "param_expr",
  "table_ref", "table_ref_atomic", "nonjoin_table_ref_atomic",
  "table_ref_commalist", "table_ref_name", "table_ref_name_no_alias",
  "table_name", "opt_index_name", "table_alias", "opt_table_alias",
  "alias", "opt_alias", "opt_locking_clause", "opt_locking_clause_list",
  "locking_clause", "row_lock_mode", "opt_row_lock_policy",
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

#define YYPACT_NINF (-459)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-353)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     614,    33,    71,    77,    86,    71,   155,   -28,    -1,   158,
      71,   191,    14,   213,    30,   135,   113,   113,   113,   275,
     149,  -459,   196,  -459,   196,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,   -17,  -459,   346,
     168,  -459,   162,   279,  -459,   239,   239,   239,    71,   378,
      71,   263,  -459,   283,   -17,   288,    69,   283,   283,   283,
      71,  -459,   300,   232,  -459,  -459,  -459,  -459,  -459,  -459,
     587,  -459,   301,  -459,  -459,   332,    79,  -459,    78,  -459,
     454,   190,   459,   350,   470,    71,    71,   397,  -459,   388,
     287,   480,   440,    71,   292,   293,   487,   487,   487,   491,
      71,    71,  -459,   303,   135,  -459,   304,   494,   492,  -459,
    -459,  -459,   -17,   390,   380,   -17,    13,  -459,  -459,  -459,
     701,   314,   506,  -459,   507,  -459,  -459,    58,  -459,   316,
     320,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,   476,  -459,   393,   -47,   287,   297,
    -459,   487,   520,    12,   349,   -44,  -459,  -459,   435,  -459,
    -459,  -459,   -63,   -63,   -63,  -459,  -459,  -459,  -459,  -459,
     524,  -459,  -459,  -459,   297,   456,  -459,  -459,    79,  -459,
    -459,   297,   456,   297,    49,   411,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,   228,  -459,   296,  -459,  -459,  -459,   190,  -459,    71,
     530,   421,    59,   412,   272,   343,   344,   345,   139,   308,
     348,   366,  -459,   200,   152,   392,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,   444,  -459,    -6,   351,  -459,   297,   480,  -459,
     504,  -459,  -459,   352,     2,  -459,   397,  -459,   353,   111,
    -459,   451,   356,  -459,    42,    13,   -17,   357,  -459,   160,
      13,   152,   495,   137,   164,  -459,   411,  -459,   424,  -459,
    -459,   362,   458,  -459,   652,   363,   387,   395,   198,  -459,
    -459,  -459,   421,    16,    22,   502,   296,   297,   297,   252,
     187,   367,   366,   644,   297,   129,   368,   -60,   297,   297,
     366,  -459,   366,   -36,   370,   151,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   494,    71,  -459,   549,   190,   152,  -459,   283,     2,
     569,   378,   570,   573,   582,   203,  -459,   190,  -459,   524,
      20,   397,  -459,   297,  -459,   585,  -459,  -459,  -459,  -459,
     297,  -459,  -459,  -459,   411,   297,   297,  -459,   418,  -459,
     430,    10,  -459,   652,   520,   487,  -459,  -459,   398,  -459,
     400,  -459,  -459,   403,  -459,  -459,   404,  -459,  -459,  -459,
    -459,   405,  -459,  -459,   271,   520,   406,   409,  -459,    59,
    -459,   515,   297,  -459,  -459,   410,   511,   251,    66,   241,
     297,   297,  -459,   502,   509,    63,  -459,  -459,  -459,   496,
     610,   675,   366,   416,   200,  -459,   503,   427,   675,   675,
     675,   675,   700,   700,   700,   700,   129,   129,    61,    61,
      61,   -54,   428,  -459,  -459,   207,   620,   208,  -459,  -459,
    -459,  -459,  -459,  -459,   107,   212,  -459,   421,  -459,   436,
    -459,   426,  -459,    40,  -459,   557,  -459,  -459,  -459,  -459,
     152,   152,   568,  -459,   520,  -459,   471,  -459,   437,   221,
    -459,   628,   632,  -459,   636,   637,   638,  -459,  -459,   541,
    -459,   474,    71,  -459,   271,  -459,  -459,   223,   520,   520,
    -459,   452,  -459,   227,  -459,   297,   652,   297,   297,  -459,
     230,   199,   457,  -459,   366,   675,   200,   460,   231,  -459,
    -459,  -459,  -459,  -459,   646,   378,   653,   654,   655,  -459,
     464,   562,  -459,  -459,  -459,   584,   591,   592,   566,    20,
     645,  -459,  -459,  -459,   545,  -459,  -459,    81,  -459,  -459,
    -459,   477,   246,   479,   484,   490,  -459,  -459,   287,  -459,
    -459,  -459,   254,   256,   567,   515,   -55,   493,   152,   273,
    -459,   297,  -459,   644,   497,   265,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,    40,    20,  -459,  -459,  -459,    20,   518,
     501,   297,  -459,  -459,  -459,   682,  -459,  -459,  -459,  -459,
    -459,   517,   565,   456,  -459,  -459,  -459,  -459,   152,  -459,
    -459,  -459,  -459,   537,   520,   -20,   508,  -459,   297,   315,
     512,   297,   269,   297,  -459,  -459,   356,  -459,  -459,  -459,
     510,    23,   520,   152,  -459,  -459,   152,  -459,     5,    15,
     120,  -459,  -459,   276,  -459,  -459,   576,  -459,  -459,  -459,
      15,  -459
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     333,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     353,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   332,     0,
     307,   116,    33,     0,    56,    63,    63,    63,     0,     0,
       0,     0,   306,   111,     0,     0,     0,   111,   111,   111,
       0,    54,     0,   334,   335,    29,    26,    28,    27,     1,
     333,     2,     0,     6,     5,   164,   125,   126,   156,   108,
       0,   174,     0,     0,   310,     0,     0,   150,    37,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     4,     0,     0,   144,   138,
     139,   137,     0,   141,     0,     0,   170,   308,   285,   288,
     290,     0,     0,   291,     0,   286,   287,     0,   296,     0,
     173,   175,   177,   179,   278,   279,   280,   289,   281,   282,
     283,   284,    32,    31,     0,   309,     0,     0,   120,     0,
     115,     0,     0,     0,     0,   150,   122,   110,     0,   133,
     132,    38,    41,    41,    41,   109,   106,   107,   337,   336,
       0,   290,   163,   143,     0,   156,   129,   128,   130,   140,
     136,     0,   156,     0,     0,   320,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     293,     0,   292,   295,   180,   181,    34,     0,    62,     0,
       0,   333,     0,     0,   274,     0,     0,     0,     0,     0,
       0,     0,   276,     0,   149,   183,   190,   191,   192,   185,
     187,   193,   186,   206,   194,   195,   196,   197,   189,   184,
     199,   200,     0,   354,     0,     0,   118,     0,     0,   121,
       0,   112,   113,     0,     0,    53,   150,    52,    24,     0,
      22,   147,   145,   171,   318,   170,     0,   155,   157,   162,
     170,   166,   168,   165,     0,   134,   319,   321,     0,   294,
     176,     0,     0,    59,     0,     0,     0,     0,     0,    64,
      66,    67,   333,   144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,   201,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,   124,   123,   111,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    20,     0,
       0,   150,   146,     0,   316,     0,   317,   182,   127,   131,
       0,   161,   160,   159,   320,     0,     0,   325,     0,   327,
       0,   331,   322,     0,     0,     0,    85,    79,     0,    81,
      91,    82,    69,     0,    76,    77,     0,    73,    74,    80,
      83,    88,    78,    70,    93,     0,     0,     0,    58,     0,
      61,   241,     0,   275,   277,     0,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,   198,   188,   217,   218,
       0,   213,     0,     0,     0,   204,     0,   216,   215,   231,
     232,   233,   234,   235,   236,   237,   208,   207,   210,   209,
     211,   212,     0,    35,   355,     0,     0,     0,    45,    43,
      49,    47,    51,    40,     0,     0,    23,   333,   148,   297,
     299,     0,   301,   314,   300,   152,   172,   315,   158,   135,
     169,   167,     0,   328,     0,   330,     0,   323,     0,     0,
      57,     0,     0,    75,     0,     0,     0,    84,   100,     0,
      99,     0,     0,    68,    92,    94,    96,     0,     0,     0,
      65,     0,   238,     0,   229,     0,     0,     0,     0,   223,
       0,     0,     0,   271,     0,   214,     0,     0,     0,   205,
     272,   117,   114,    39,     0,     0,     0,     0,     0,    25,
       0,     0,   349,   341,   347,   345,   348,   343,     0,     0,
       0,   313,   305,   311,     0,   142,   326,   331,   329,   178,
      60,     0,     0,     0,     0,     0,   101,    98,   120,    95,
      97,   103,     0,     0,   243,   241,     0,     0,   227,     0,
     226,     0,   230,   273,     0,     0,   221,   219,    44,    42,
      48,    46,    50,   314,     0,   344,   346,   342,     0,   298,
     315,     0,   324,    72,    90,     0,    86,    71,    87,   105,
     102,     0,     0,   156,   239,   255,   256,   224,   228,   222,
     220,   302,   338,   350,     0,   154,     0,   104,     0,   246,
       0,     0,     0,     0,   151,    89,   242,   247,   248,   249,
       0,     0,     0,   351,   339,   312,   153,   240,     0,     0,
       0,   254,   244,     0,   253,   251,     0,   252,   250,   340,
       0,   245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -459,  -459,  -459,   627,  -459,   678,  -459,   354,  -459,   311,
    -459,  -459,  -459,  -459,  -309,   -78,   174,   360,  -459,  -459,
    -459,   100,  -459,   309,  -459,  -340,  -459,  -459,  -459,  -459,
     215,  -459,  -452,  -459,   -43,  -459,  -459,  -459,  -459,  -459,
    -459,  -142,  -459,  -459,   462,  -187,   -85,  -459,    32,   -50,
     -21,  -459,  -459,   -77,   419,  -459,  -459,  -459,  -128,  -459,
    -459,  -170,  -459,   355,  -459,  -459,   -48,  -295,  -459,  -268,
     516,   513,   365,  -147,  -208,  -459,  -459,  -459,  -459,  -459,
    -459,   414,  -459,  -459,  -459,   154,  -459,  -459,  -459,  -419,
    -459,  -459,  -144,  -459,  -459,  -459,  -459,  -459,  -459,   -74,
    -459,  -459,   589,   -89,  -459,  -459,   595,  -459,  -459,  -458,
     140,  -459,  -459,  -459,    -2,  -459,  -459,   142,   466,  -459,
     364,  -459,   461,  -459,   185,  -459,  -459,  -459,   629,  -459,
    -459,  -459,  -459,  -373
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   259,   260,    23,    66,
      24,   143,    25,    26,    89,   162,   255,   345,    27,    28,
      29,    84,   288,   289,   290,   394,   487,   483,   493,   494,
     495,   291,   496,    30,    93,    31,   251,   252,    32,    33,
      34,   153,    35,   155,   156,    36,   175,   176,   177,    77,
     112,   113,   180,    78,   174,   261,   351,   352,   150,   545,
     624,   116,   267,   268,   363,   108,   185,   262,   129,   130,
     131,   132,   263,   264,   225,   226,   227,   228,   229,   230,
     231,   300,   232,   233,   234,   502,   603,   630,   631,   642,
     235,   236,   198,   199,   200,   237,   238,   239,   240,   241,
     134,   135,   136,   137,   138,   139,   140,   141,   458,   459,
     460,   461,   462,    51,   463,   146,   541,   542,   543,   357,
     275,   276,   277,   371,   477,    37,    38,    63,    64,   464,
     538,   634,    71,   244
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   479,   224,    44,    95,   265,   213,   133,    52,   415,
      56,   303,   270,   305,    99,   100,   101,    40,   172,   163,
     164,   638,   497,    40,   283,   403,   340,   249,   173,   638,
     182,   623,   449,   478,   269,   178,   271,   273,   178,   149,
     639,    75,   560,   354,    55,   354,    87,   210,    90,    60,
     253,   341,   214,   118,   119,   120,   308,   115,   102,   279,
      39,   308,   284,   119,   120,   422,    48,   445,   183,    76,
      75,   299,   309,   242,    40,   245,   307,   309,   211,   455,
      42,   589,   316,   147,   148,   184,    94,   109,   109,    43,
      61,   158,   423,    49,   303,   215,   216,   217,   166,   167,
     336,   547,   420,   246,   421,   400,   342,   503,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   110,   110,   562,   563,   133,   346,   518,
     613,   524,   254,   133,   218,   168,   417,   122,    62,   331,
     474,   605,   214,   118,   119,   120,    85,    86,   212,   617,
     407,   408,   406,   123,   114,   248,   525,   266,   308,   111,
     111,   418,   419,    97,   272,   540,   567,   355,   475,   476,
     219,   644,   645,   306,   309,   507,   343,   344,    54,   353,
     640,   359,   308,   641,   220,   215,   216,   217,   640,   178,
     333,   641,   366,   334,   118,   119,   120,   316,   309,   124,
     125,   126,    98,   214,   118,   119,   120,   281,   124,    54,
     404,   526,   401,   269,   515,   457,   579,   358,   470,   471,
     646,   575,   364,   465,   218,    45,   367,   122,   285,   286,
     287,   651,   118,   119,   120,    46,   221,   222,   121,   475,
     476,   622,   442,   123,   223,   405,   215,   216,   217,   128,
     361,   298,   330,   308,   331,   425,    50,   513,    75,   643,
     219,   133,   353,   510,   511,   316,    47,    65,   308,   309,
     530,    53,   426,   133,   220,    69,   308,   362,   122,   410,
     334,   527,   528,    57,   309,   218,   647,   648,   122,   124,
     125,   126,   309,    58,   123,   446,   615,   480,   368,   411,
     214,   118,   119,   120,   123,   412,   573,   348,   571,    72,
     349,   214,   118,   119,   120,   308,   122,   327,   328,   329,
     330,   219,   331,   626,    59,   369,   221,   222,    67,    68,
     443,   309,   123,   508,   223,   220,   370,   256,   257,   128,
     124,   125,   126,   215,   216,   217,   308,    70,   570,    79,
     124,   125,   126,   411,   301,   216,   217,    81,   566,   509,
     568,   569,   309,   512,   298,    80,    83,   308,   308,   214,
     118,   119,   120,    82,   517,   488,   506,   127,   124,   125,
     126,    88,   218,   309,   309,   122,    91,   221,   222,   308,
     128,   607,   489,   218,   398,   223,   122,   399,   106,   453,
     128,   123,   454,   521,   523,   309,   207,   454,   529,   310,
      92,   207,   123,   216,   217,   127,   599,   550,   219,   561,
     334,    96,   334,   565,   608,   103,   353,   577,   128,   302,
     353,   104,   220,   619,   186,   187,   188,   189,   190,   191,
     490,   491,   594,   220,   492,   595,   311,   124,   125,   126,
     600,   218,   601,   334,   122,   334,   107,   117,   124,   125,
     126,   610,   531,   142,   353,   635,   574,   293,   334,   294,
     123,   144,   649,   145,   633,   334,   636,   627,   628,   629,
     149,   151,   152,   154,   221,   222,   157,   302,   159,   160,
     558,   161,   223,   312,   165,   221,   222,   128,    54,   170,
     171,   220,   532,   223,   173,   179,   181,   533,   128,   201,
     202,   203,   206,   313,   534,   535,   124,   125,   126,   207,
     314,   315,   208,   243,   209,   247,   250,   258,   316,   317,
     274,   536,   114,   282,    15,  -350,   537,   292,   295,   296,
     297,   304,   332,   338,   531,   350,   335,   339,   347,   373,
     365,   375,   444,   221,   222,   353,   360,   374,   395,   396,
      75,   223,   413,   531,   416,   424,   128,   397,   318,   319,
     320,   321,   322,   448,   450,   323,   324,   451,   325,   326,
     327,   328,   329,   330,   532,   331,   452,  -352,   467,   533,
     472,   473,   501,   481,     1,   482,   534,   535,   484,   485,
     486,   498,     2,   532,   499,   505,   504,   519,   533,     3,
     422,   516,   308,   536,     4,   534,   535,  -350,   537,   620,
     331,     1,   520,   522,     5,   539,   544,     6,     7,     2,
     546,   548,   536,   549,   551,  -303,     3,   537,   552,     8,
       9,     4,   553,   554,   555,   556,   557,   564,   590,    10,
     578,     5,    11,   572,     6,     7,   576,   580,   581,   582,
     583,   584,   585,   376,   311,   588,     8,     9,   621,   586,
     587,   591,   602,   593,    12,   596,    10,   377,    13,    11,
     597,   378,   379,   380,   381,   382,   598,   383,   616,   606,
     492,   618,   650,   609,    14,   384,   614,   105,   311,   447,
      15,    12,    74,   456,   625,    13,   637,   632,   500,   559,
     337,   312,   402,   409,   278,   468,   204,  -304,   466,   604,
     385,    14,   205,   280,   612,   611,   514,    15,   469,   311,
     356,   414,   592,   169,     0,     0,     0,   372,   386,   315,
     387,   388,    16,    17,    18,   312,   316,   317,     0,     0,
       0,     0,     0,     0,   311,   389,     0,     0,     0,     0,
     390,     0,   391,     0,     0,   414,     0,     0,     0,    16,
      17,    18,   392,   315,     0,     0,  -353,     0,     0,     0,
     316,   317,     0,     0,     0,     0,   318,   319,   320,   321,
     322,     0,     0,   323,   324,     0,   325,   326,   327,   328,
     329,   330,     0,   331,   315,   393,     0,     0,     0,     0,
       0,   316,  -353,     0,     0,     0,     0,     0,     0,     0,
     318,   319,   320,   321,   322,     0,     0,   323,   324,   315,
     325,   326,   327,   328,   329,   330,   316,   331,     0,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,  -353,  -353,  -353,   321,   322,     0,     0,   323,   324,
       0,   325,   326,   327,   328,   329,   330,     0,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -353,
    -353,     0,     0,  -353,  -353,     0,   325,   326,   327,   328,
     329,   330,     0,   331
};

static const yytype_int16 yycheck[] =
{
       2,   374,   149,     5,    54,   175,   148,    81,    10,   304,
      12,   219,   182,   221,    57,    58,    59,     3,   107,    97,
      98,     6,   395,     3,   211,     3,    24,   155,    12,     6,
     115,    51,   341,   373,   181,   112,   183,   184,   115,    83,
      17,    58,   494,     3,    12,     3,    48,    94,    50,    19,
     113,    49,     3,     4,     5,     6,   116,    78,    60,   203,
      27,   116,     3,     5,     6,   101,    94,   335,    55,    37,
      58,   218,   132,   151,     3,    63,   223,   132,   125,   347,
       3,   539,   136,    85,    86,    72,    54,     9,     9,     3,
      60,    93,   128,    94,   302,    46,    47,    48,   100,   101,
     247,   474,   310,   153,   312,   292,   104,   402,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,    45,    45,   498,   499,   201,   256,   424,
     588,    24,   195,   207,    85,   103,   196,    88,     3,   193,
     130,   196,     3,     4,     5,     6,    46,    47,   195,   601,
     297,   298,   296,   104,    76,   199,    49,   178,   116,    81,
      81,   308,   309,    94,   115,   125,   506,   125,   158,   159,
     121,   166,   167,   223,   132,   109,   174,   175,   195,   199,
     165,   266,   116,   168,   135,    46,    47,    48,   165,   266,
     196,   168,    55,   199,     4,     5,     6,   136,   132,   150,
     151,   152,   133,     3,     4,     5,     6,   209,   150,   195,
     188,   104,   196,   360,   422,   195,   525,   265,   365,   366,
     639,   516,   270,   351,    85,    70,    62,    88,   169,   170,
     171,   650,     4,     5,     6,    80,   187,   188,    48,   158,
     159,   614,   331,   104,   195,   295,    46,    47,    48,   200,
      90,   112,   191,   116,   193,   104,    98,   194,    58,   632,
     121,   335,   199,   410,   411,   136,   111,   154,   116,   132,
     457,    80,   121,   347,   135,     0,   116,   117,    88,    92,
     199,   174,   175,    70,   132,    85,   166,   167,    88,   150,
     151,   152,   132,    80,   104,   338,   591,   375,   134,   112,
       3,     4,     5,     6,   104,   118,   514,   196,   109,   113,
     199,     3,     4,     5,     6,   116,    88,   188,   189,   190,
     191,   121,   193,   618,   111,   161,   187,   188,    17,    18,
     332,   132,   104,    92,   195,   135,   172,   163,   164,   200,
     150,   151,   152,    46,    47,    48,   116,   198,   118,     3,
     150,   151,   152,   112,    46,    47,    48,   195,   505,   118,
     507,   508,   132,   413,   112,   197,   127,   116,   116,     3,
       4,     5,     6,    94,   424,   104,   125,   187,   150,   151,
     152,     3,    85,   132,   132,    88,   123,   187,   188,   116,
     200,   118,   121,    85,   196,   195,    88,   199,    97,   196,
     200,   104,   199,   196,   196,   132,   199,   199,   196,    17,
     127,   199,   104,    47,    48,   187,   558,   196,   121,   196,
     199,   133,   199,   196,   571,   125,   199,   196,   200,   121,
     199,   199,   135,   603,   138,   139,   140,   141,   142,   143,
     169,   170,   196,   135,   173,   199,    54,   150,   151,   152,
     196,    85,   196,   199,    88,   199,   124,     3,   150,   151,
     152,   196,    26,     4,   199,   196,   516,   195,   199,   197,
     104,   121,   196,     3,   621,   199,   623,   162,   163,   164,
      83,    93,   195,     3,   187,   188,    46,   121,   196,   196,
     492,     4,   195,   101,     3,   187,   188,   200,   195,   195,
       6,   135,    66,   195,    12,   115,   126,    71,   200,   195,
       4,     4,   196,   121,    78,    79,   150,   151,   152,   199,
     128,   129,    46,     3,   131,   176,    91,     3,   136,   137,
     119,    95,    76,     3,   113,    99,   100,   125,   195,   195,
     195,   193,    98,    39,    26,    94,   195,   195,   195,   125,
      55,    93,     3,   187,   188,   199,   199,   195,   195,   172,
      58,   195,   195,    26,   196,   195,   200,   172,   176,   177,
     178,   179,   180,     4,     4,   183,   184,     4,   186,   187,
     188,   189,   190,   191,    66,   193,     4,     0,     3,    71,
     172,   161,    77,   195,     7,   195,    78,    79,   195,   195,
     195,   195,    15,    66,   195,    94,   196,   104,    71,    22,
     101,   195,   116,    95,    27,    78,    79,    99,   100,    82,
     193,     7,   194,     3,    37,   199,    69,    40,    41,    15,
      62,   160,    95,   196,     6,   199,    22,   100,     6,    52,
      53,    27,     6,     6,     6,   104,   172,   195,     3,    62,
       4,    37,    65,   196,    40,    41,   196,     4,     4,     4,
     196,    99,    78,    11,    54,    99,    52,    53,   131,    78,
      78,   126,   105,   196,    87,   196,    62,    25,    91,    65,
     196,    29,    30,    31,    32,    33,   196,    35,     6,   196,
     173,   126,   116,   196,   107,    43,   195,    70,    54,   339,
     113,    87,    24,   349,   196,    91,   196,   195,   399,   494,
     248,   101,   293,   299,   201,   360,   127,   199,   353,   565,
      68,   107,   127,   207,   584,   583,   116,   113,   364,    54,
     264,   121,   547,   104,    -1,    -1,    -1,   276,    86,   129,
      88,    89,   155,   156,   157,   101,   136,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    54,   103,    -1,    -1,    -1,    -1,
     108,    -1,   110,    -1,    -1,   121,    -1,    -1,    -1,   155,
     156,   157,   120,   129,    -1,    -1,   101,    -1,    -1,    -1,
     136,   137,    -1,    -1,    -1,    -1,   176,   177,   178,   179,
     180,    -1,    -1,   183,   184,    -1,   186,   187,   188,   189,
     190,   191,    -1,   193,   129,   153,    -1,    -1,    -1,    -1,
      -1,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,   177,   178,   179,   180,    -1,    -1,   183,   184,   129,
     186,   187,   188,   189,   190,   191,   136,   193,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   176,   177,   178,   179,   180,    -1,    -1,   183,   184,
      -1,   186,   187,   188,   189,   190,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
     180,    -1,    -1,   183,   184,    -1,   186,   187,   188,   189,
     190,   191,    -1,   193
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    27,    37,    40,    41,    52,    53,
      62,    65,    87,    91,   107,   113,   155,   156,   157,   202,
     203,   204,   205,   209,   211,   213,   214,   219,   220,   221,
     234,   236,   239,   240,   241,   243,   246,   326,   327,    27,
       3,   315,     3,     3,   315,    70,    80,   111,    94,    94,
      98,   314,   315,    80,   195,   249,   315,    70,    80,   111,
      19,    60,     3,   328,   329,   154,   210,   210,   210,     0,
     198,   333,   113,   206,   206,    58,   249,   250,   254,     3,
     197,   195,    94,   127,   222,   222,   222,   315,     3,   215,
     315,   123,   127,   235,   249,   250,   133,    94,   133,   235,
     235,   235,   315,   125,   199,   204,    97,   124,   266,     9,
      45,    81,   251,   252,    76,   251,   262,     3,     4,     5,
       6,    48,    88,   104,   150,   151,   152,   187,   200,   269,
     270,   271,   272,   300,   301,   302,   303,   304,   305,   306,
     307,   308,     4,   212,   121,     3,   316,   315,   315,    83,
     259,    93,   195,   242,     3,   244,   245,    46,   315,   196,
     196,     4,   216,   216,   216,     3,   315,   315,   249,   329,
     195,     6,   304,    12,   255,   247,   248,   249,   254,   115,
     253,   126,   247,    55,    72,   267,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   293,   294,
     295,   195,     4,     4,   303,   307,   196,   199,    46,   131,
      94,   125,   195,   242,     3,    46,    47,    48,    85,   121,
     135,   187,   188,   195,   274,   275,   276,   277,   278,   279,
     280,   281,   283,   284,   285,   291,   292,   296,   297,   298,
     299,   300,   216,     3,   334,    63,   250,   176,   199,   259,
      91,   237,   238,   113,   195,   217,   217,   217,     3,   207,
     208,   256,   268,   273,   274,   262,   251,   263,   264,   274,
     262,   274,   115,   274,   119,   321,   322,   323,   272,   293,
     271,   315,     3,   246,     3,   169,   170,   171,   223,   224,
     225,   232,   125,   195,   197,   195,   195,   195,   112,   274,
     282,    46,   121,   275,   193,   275,   250,   274,   116,   132,
      17,    54,   101,   121,   128,   129,   136,   137,   176,   177,
     178,   179,   180,   183,   184,   186,   187,   188,   189,   190,
     191,   193,    98,   196,   199,   195,   274,   245,    39,   195,
      24,    49,   104,   174,   175,   218,   259,   195,   196,   199,
      94,   257,   258,   199,     3,   125,   319,   320,   267,   247,
     199,    90,   117,   265,   267,    55,    55,    62,   134,   161,
     172,   324,   323,   125,   195,    93,    11,    25,    29,    30,
      31,    32,    33,    35,    43,    68,    86,    88,    89,   103,
     108,   110,   120,   153,   226,   195,   172,   172,   196,   199,
     246,   196,   255,     3,   188,   250,   293,   274,   274,   282,
      92,   112,   118,   195,   121,   268,   196,   196,   274,   274,
     275,   275,   101,   128,   195,   104,   121,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   304,   315,     3,   270,   235,   218,     4,   215,
       4,     4,     4,   196,   199,   270,   208,   195,   309,   310,
     311,   312,   313,   315,   330,   259,   273,     3,   264,   321,
     274,   274,   172,   161,   130,   158,   159,   325,   226,   334,
     216,   195,   195,   228,   195,   195,   195,   227,   104,   121,
     169,   170,   173,   229,   230,   231,   233,   334,   195,   195,
     224,    77,   286,   268,   196,    94,   125,   109,    92,   118,
     274,   274,   250,   194,   116,   275,   195,   250,   268,   104,
     194,   196,     3,   196,    24,    49,   104,   174,   175,   196,
     246,    26,    66,    71,    78,    79,    95,   100,   331,   199,
     125,   317,   318,   319,    69,   260,    62,   334,   160,   196,
     196,     6,     6,     6,     6,     6,   104,   172,   315,   231,
     233,   196,   334,   334,   195,   196,   274,   226,   274,   274,
     118,   109,   196,   275,   250,   268,   196,   196,     4,   215,
       4,     4,     4,   196,    99,    78,    78,    78,    99,   310,
       3,   126,   325,   196,   196,   199,   196,   196,   196,   242,
     196,   196,   105,   287,   286,   196,   196,   118,   274,   196,
     196,   318,   311,   310,   195,   268,     6,   233,   126,   262,
      82,   131,   334,    51,   261,   196,   268,   162,   163,   164,
     288,   289,   195,   274,   332,   196,   274,   196,     6,    17,
     165,   168,   290,   334,   166,   167,   290,   166,   167,   196,
     116,   290
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   201,   202,   203,   203,   204,   204,   204,   204,   204,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   209,   210,
     210,   211,   212,   213,   213,   214,   214,   215,   216,   217,
     217,   217,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   219,   219,   220,   220,   220,   221,   221,   221,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   227,   227,   228,
     228,   228,   229,   229,   230,   230,   230,   230,   231,   231,
     231,   231,   232,   232,   232,   233,   234,   234,   234,   234,
     235,   235,   236,   237,   238,   239,   240,   241,   241,   242,
     242,   243,   244,   244,   245,   246,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   250,   251,   252,   252,   252,
     253,   253,   254,   255,   255,   256,   257,   257,   258,   259,
     259,   260,   260,   261,   261,   262,   262,   263,   263,   264,
     265,   265,   265,   266,   266,   267,   267,   267,   267,   267,
     267,   268,   268,   269,   269,   270,   270,   271,   271,   272,
     272,   272,   273,   274,   274,   274,   274,   274,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   276,
     276,   277,   277,   277,   277,   277,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   279,   279,   280,
     280,   280,   280,   281,   281,   281,   281,   282,   282,   283,
     283,   284,   284,   284,   284,   284,   284,   284,   285,   285,
     286,   286,   287,   287,   288,   288,   288,   289,   289,   289,
     290,   290,   290,   290,   290,   291,   292,   293,   293,   293,
     293,   293,   293,   294,   294,   294,   294,   294,   294,   295,
     295,   296,   297,   298,   299,   299,   299,   299,   300,   300,
     300,   300,   300,   300,   300,   301,   302,   302,   303,   303,
     304,   305,   306,   307,   307,   307,   308,   309,   309,   310,
     310,   311,   311,   312,   312,   313,   314,   315,   315,   316,
     316,   317,   317,   318,   318,   319,   319,   320,   320,   321,
     321,   322,   322,   323,   323,   324,   324,   324,   324,   325,
     325,   325,   326,   326,   327,   328,   328,   329,   330,   330,
     330,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   332,   333,   333,   334,   334
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     6,     1,     1,     4,
       3,     0,     4,     2,     4,     2,     4,     2,     4,     2,
       4,     2,     5,     5,     2,     3,     2,     8,     7,     6,
       9,     7,     3,     0,     1,     3,     1,     1,     3,     1,
       1,     4,     4,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     4,     3,     0,     5,
       3,     0,     1,     0,     1,     2,     1,     2,     2,     1,
       1,     2,     5,     4,     6,     3,     4,     4,     3,     4,
       2,     0,     5,     1,     4,     4,     2,     8,     5,     3,
       0,     5,     1,     3,     3,     2,     2,     6,     1,     1,
       1,     3,     3,     3,     4,     6,     2,     1,     1,     1,
       1,     0,     7,     1,     0,     1,     1,     0,     2,     2,
       0,     4,     0,     2,     0,     3,     0,     1,     3,     2,
       1,     1,     0,     2,     0,     2,     2,     4,     2,     4,
       0,     1,     3,     1,     0,     1,     3,     1,     6,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     2,     3,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     3,     3,     5,
       6,     5,     6,     4,     6,     3,     5,     4,     5,     4,
       5,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       6,     0,     3,     0,     2,     5,     0,     1,     1,     1,
       2,     2,     2,     2,     1,     6,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     2,     1,     1,     3,     1,
       1,     1,     4,     1,     3,     2,     1,     1,     3,     1,
       0,     1,     5,     1,     0,     2,     1,     1,     0,     1,
       0,     1,     2,     3,     5,     1,     3,     1,     2,     2,
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
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2104 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2110 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 179 "bison_parser.y"
            { }
#line 2116 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 179 "bison_parser.y"
            { }
#line 2122 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2135 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2141 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2147 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2160 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2173 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2179 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2185 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2191 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2197 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2203 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2209 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 179 "bison_parser.y"
            { }
#line 2215 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2221 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_import_export_options: /* opt_import_export_options  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2227 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_export_options: /* import_export_options  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2233 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2239 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2245 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2251 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 179 "bison_parser.y"
            { }
#line 2257 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2270 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2276 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2282 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 179 "bison_parser.y"
            { }
#line 2288 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 179 "bison_parser.y"
            { }
#line 2294 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2300 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2306 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraints: /* column_constraints  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2312 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 179 "bison_parser.y"
            { }
#line 2318 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_references_spec: /* references_spec  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).references_spec_t)); }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2336 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 179 "bison_parser.y"
            { }
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2354 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2360 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2366 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2372 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2378 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 184 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2391 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2397 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2410 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2416 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2422 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2428 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2434 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2440 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2446 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2452 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2458 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 179 "bison_parser.y"
            { }
#line 2464 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2470 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 179 "bison_parser.y"
            { }
#line 2476 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2501 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2507 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2513 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2519 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2532 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2545 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2551 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 179 "bison_parser.y"
            { }
#line 2557 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2563 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2569 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2582 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_extended_literal_list: /* opt_extended_literal_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2595 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal_list: /* extended_literal_list  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2608 "bison_parser.cpp"
        break;

    case YYSYMBOL_casted_extended_literal: /* casted_extended_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2614 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal: /* extended_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2620 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2626 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2632 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2638 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2644 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2650 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2656 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2662 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2668 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2674 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2680 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2686 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2692 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2698 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2704 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2717 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2723 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 179 "bison_parser.y"
            { }
#line 2729 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2735 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2741 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2747 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 179 "bison_parser.y"
            { }
#line 2753 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 179 "bison_parser.y"
            { }
#line 2759 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 179 "bison_parser.y"
            { }
#line 2765 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2771 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2777 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2783 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2789 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2795 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2801 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2807 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2813 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2819 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2825 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2831 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2837 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2843 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2849 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2855 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2861 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 193 "bison_parser.y"
            {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2874 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2880 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2886 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 180 "bison_parser.y"
            {
  free(((*yyvaluep).table_name).name);
  free(((*yyvaluep).table_name).schema);
}
#line 2895 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2901 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2907 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2913 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2919 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2925 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2931 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2937 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 2943 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 179 "bison_parser.y"
            { }
#line 2949 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 179 "bison_parser.y"
            { }
#line 2955 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2961 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2967 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2973 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2979 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2985 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 179 "bison_parser.y"
            { }
#line 2991 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2997 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 184 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 3010 "bison_parser.cpp"
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
#line 81 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3118 "bison_parser.cpp"

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
#line 336 "bison_parser.y"
                                     {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3347 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 355 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3358 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 361 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3369 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 368 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3378 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 372 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3387 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 376 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3393 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 377 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3399 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 378 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3405 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 380 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3411 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 381 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3417 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 382 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3423 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 383 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3429 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 384 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3435 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 385 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3441 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 386 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3447 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 387 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3453 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 388 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3459 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 389 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3465 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 395 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3471 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 396 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3477 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 398 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3486 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 402 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3495 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 407 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3504 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' extended_literal_list ')'  */
#line 411 "bison_parser.y"
                                           {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3514 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 421 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3520 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 422 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3526 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 423 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3532 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 431 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3542 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 439 "bison_parser.y"
                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3551 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_extended_literal_list ')'  */
#line 443 "bison_parser.y"
                                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3561 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 455 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3572 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_import_export_options opt_where  */
#line 461 "bison_parser.y"
                                                                     {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_export_option_t)->format);
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
  if ((yyvsp[-1].import_export_option_t)->encoding) {
    (yyval.import_stmt)->encoding = (yyvsp[-1].import_export_option_t)->encoding;
    (yyvsp[-1].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[-1].import_export_option_t)->delimiter) {
    (yyval.import_stmt)->delimiter = (yyvsp[-1].import_export_option_t)->delimiter;
    (yyvsp[-1].import_export_option_t)->delimiter = nullptr;
  }
  if ((yyvsp[-1].import_export_option_t)->null) {
    (yyval.import_stmt)->null = (yyvsp[-1].import_export_option_t)->null;
    (yyvsp[-1].import_export_option_t)->null = nullptr;
  }
  if ((yyvsp[-1].import_export_option_t)->quote) {
    (yyval.import_stmt)->quote = (yyvsp[-1].import_export_option_t)->quote;
    (yyvsp[-1].import_export_option_t)->quote = nullptr;
  }
  delete (yyvsp[-1].import_export_option_t);
}
#line 3601 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 486 "bison_parser.y"
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
#line 3620 "bison_parser.cpp"
    break;

  case 38: /* file_path: STRING  */
#line 501 "bison_parser.y"
                   { (yyval.sval) = (yyvsp[0].sval); }
#line 3626 "bison_parser.cpp"
    break;

  case 39: /* opt_import_export_options: WITH '(' import_export_options ')'  */
#line 503 "bison_parser.y"
                                                               { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3632 "bison_parser.cpp"
    break;

  case 40: /* opt_import_export_options: '(' import_export_options ')'  */
#line 504 "bison_parser.y"
                                { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3638 "bison_parser.cpp"
    break;

  case 41: /* opt_import_export_options: %empty  */
#line 505 "bison_parser.y"
              { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3644 "bison_parser.cpp"
    break;

  case 42: /* import_export_options: import_export_options ',' FORMAT file_type  */
#line 507 "bison_parser.y"
                                                                   {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3658 "bison_parser.cpp"
    break;

  case 43: /* import_export_options: FORMAT file_type  */
#line 516 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3667 "bison_parser.cpp"
    break;

  case 44: /* import_export_options: import_export_options ',' ENCODING STRING  */
#line 520 "bison_parser.y"
                                            {
  if ((yyvsp[-3].import_export_option_t)->encoding) {
    delete (yyvsp[-3].import_export_option_t);
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Encoding type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->encoding = (yyvsp[0].sval);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3682 "bison_parser.cpp"
    break;

  case 45: /* import_export_options: ENCODING STRING  */
#line 530 "bison_parser.y"
                  {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3691 "bison_parser.cpp"
    break;

  case 46: /* import_export_options: import_export_options ',' DELIMITER STRING  */
#line 534 "bison_parser.y"
                                             {
  if ((yyvsp[-3].import_export_option_t)->delimiter) {
    delete (yyvsp[-3].import_export_option_t);
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Delimiter must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->delimiter = (yyvsp[0].sval);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3706 "bison_parser.cpp"
    break;

  case 47: /* import_export_options: DELIMITER STRING  */
#line 544 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->delimiter = (yyvsp[0].sval);
}
#line 3715 "bison_parser.cpp"
    break;

  case 48: /* import_export_options: import_export_options ',' NULL STRING  */
#line 548 "bison_parser.y"
                                        {
  if ((yyvsp[-3].import_export_option_t)->null) {
    delete (yyvsp[-3].import_export_option_t);
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Null string must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->null = (yyvsp[0].sval);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3730 "bison_parser.cpp"
    break;

  case 49: /* import_export_options: NULL STRING  */
#line 558 "bison_parser.y"
              {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->null = (yyvsp[0].sval);
}
#line 3739 "bison_parser.cpp"
    break;

  case 50: /* import_export_options: import_export_options ',' QUOTE STRING  */
#line 562 "bison_parser.y"
                                         {
  if ((yyvsp[-3].import_export_option_t)->quote) {
    delete (yyvsp[-3].import_export_option_t);
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Quote string must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->quote = (yyvsp[0].sval);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3754 "bison_parser.cpp"
    break;

  case 51: /* import_export_options: QUOTE STRING  */
#line 572 "bison_parser.y"
               {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->quote = (yyvsp[0].sval);
}
#line 3763 "bison_parser.cpp"
    break;

  case 52: /* export_statement: COPY table_name TO file_path opt_import_export_options  */
#line 582 "bison_parser.y"
                                                                          {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->delimiter) {
    (yyval.export_stmt)->delimiter = (yyvsp[0].import_export_option_t)->delimiter;
    (yyvsp[0].import_export_option_t)->delimiter = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->null) {
    (yyval.export_stmt)->null = (yyvsp[0].import_export_option_t)->null;
    (yyvsp[0].import_export_option_t)->null = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->quote) {
    (yyval.export_stmt)->quote = (yyvsp[0].import_export_option_t)->quote;
    (yyvsp[0].import_export_option_t)->quote = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3791 "bison_parser.cpp"
    break;

  case 53: /* export_statement: COPY select_with_paren TO file_path opt_import_export_options  */
#line 605 "bison_parser.y"
                                                                {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->delimiter) {
    (yyval.export_stmt)->delimiter = (yyvsp[0].import_export_option_t)->delimiter;
    (yyvsp[0].import_export_option_t)->delimiter = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->null) {
    (yyval.export_stmt)->null = (yyvsp[0].import_export_option_t)->null;
    (yyvsp[0].import_export_option_t)->null = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->quote) {
    (yyval.export_stmt)->quote = (yyvsp[0].import_export_option_t)->quote;
    (yyvsp[0].import_export_option_t)->quote = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3818 "bison_parser.cpp"
    break;

  case 54: /* show_statement: SHOW TABLES  */
#line 633 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3824 "bison_parser.cpp"
    break;

  case 55: /* show_statement: SHOW COLUMNS table_name  */
#line 634 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3834 "bison_parser.cpp"
    break;

  case 56: /* show_statement: DESCRIBE table_name  */
#line 639 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3844 "bison_parser.cpp"
    break;

  case 57: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 650 "bison_parser.y"
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
#line 3862 "bison_parser.cpp"
    break;

  case 58: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 663 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
  if (result->errorMsg()) {
    delete (yyval.create_stmt);
    YYERROR;
  }
}
#line 3879 "bison_parser.cpp"
    break;

  case 59: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 675 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3891 "bison_parser.cpp"
    break;

  case 60: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 682 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3903 "bison_parser.cpp"
    break;

  case 61: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 689 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3916 "bison_parser.cpp"
    break;

  case 62: /* opt_not_exists: IF NOT EXISTS  */
#line 698 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3922 "bison_parser.cpp"
    break;

  case 63: /* opt_not_exists: %empty  */
#line 699 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3928 "bison_parser.cpp"
    break;

  case 64: /* table_elem_commalist: table_elem  */
#line 701 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3937 "bison_parser.cpp"
    break;

  case 65: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 705 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3946 "bison_parser.cpp"
    break;

  case 66: /* table_elem: column_def  */
#line 710 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3952 "bison_parser.cpp"
    break;

  case 67: /* table_elem: table_constraint  */
#line 711 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3958 "bison_parser.cpp"
    break;

  case 68: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 713 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraints_t)->constraints, (yyvsp[0].column_constraints_t)->references);
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
  delete (yyvsp[0].column_constraints_t);
}
#line 3970 "bison_parser.cpp"
    break;

  case 69: /* column_type: BIGINT  */
#line 721 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3976 "bison_parser.cpp"
    break;

  case 70: /* column_type: BOOLEAN  */
#line 722 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3982 "bison_parser.cpp"
    break;

  case 71: /* column_type: CHAR '(' INTVAL ')'  */
#line 723 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3988 "bison_parser.cpp"
    break;

  case 72: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 724 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3994 "bison_parser.cpp"
    break;

  case 73: /* column_type: DATE  */
#line 725 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 4000 "bison_parser.cpp"
    break;

  case 74: /* column_type: DATETIME  */
#line 726 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4006 "bison_parser.cpp"
    break;

  case 75: /* column_type: DECIMAL opt_decimal_specification  */
#line 727 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 4015 "bison_parser.cpp"
    break;

  case 76: /* column_type: DOUBLE  */
#line 731 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 4021 "bison_parser.cpp"
    break;

  case 77: /* column_type: FLOAT  */
#line 732 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 4027 "bison_parser.cpp"
    break;

  case 78: /* column_type: INT  */
#line 733 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4033 "bison_parser.cpp"
    break;

  case 79: /* column_type: INTEGER  */
#line 734 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4039 "bison_parser.cpp"
    break;

  case 80: /* column_type: LONG  */
#line 735 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 4045 "bison_parser.cpp"
    break;

  case 81: /* column_type: REAL  */
#line 736 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 4051 "bison_parser.cpp"
    break;

  case 82: /* column_type: SMALLINT  */
#line 737 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 4057 "bison_parser.cpp"
    break;

  case 83: /* column_type: TEXT  */
#line 738 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 4063 "bison_parser.cpp"
    break;

  case 84: /* column_type: TIME opt_time_precision  */
#line 739 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 4069 "bison_parser.cpp"
    break;

  case 85: /* column_type: TIMESTAMP  */
#line 740 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4075 "bison_parser.cpp"
    break;

  case 86: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 741 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4081 "bison_parser.cpp"
    break;

  case 87: /* opt_time_precision: '(' INTVAL ')'  */
#line 743 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 4087 "bison_parser.cpp"
    break;

  case 88: /* opt_time_precision: %empty  */
#line 744 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 4093 "bison_parser.cpp"
    break;

  case 89: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 746 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4099 "bison_parser.cpp"
    break;

  case 90: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 747 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4105 "bison_parser.cpp"
    break;

  case 91: /* opt_decimal_specification: %empty  */
#line 748 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4111 "bison_parser.cpp"
    break;

  case 92: /* opt_column_constraints: column_constraints  */
#line 750 "bison_parser.y"
                                            { (yyval.column_constraints_t) = (yyvsp[0].column_constraints_t); }
#line 4117 "bison_parser.cpp"
    break;

  case 93: /* opt_column_constraints: %empty  */
#line 751 "bison_parser.y"
              { (yyval.column_constraints_t) = new ColumnConstraints(); }
#line 4123 "bison_parser.cpp"
    break;

  case 94: /* column_constraints: column_constraint  */
#line 753 "bison_parser.y"
                                       {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
}
#line 4132 "bison_parser.cpp"
    break;

  case 95: /* column_constraints: column_constraints column_constraint  */
#line 757 "bison_parser.y"
                                       {
  (yyvsp[-1].column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4141 "bison_parser.cpp"
    break;

  case 96: /* column_constraints: references_spec  */
#line 761 "bison_parser.y"
                  {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyval.column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
}
#line 4151 "bison_parser.cpp"
    break;

  case 97: /* column_constraints: column_constraints references_spec  */
#line 766 "bison_parser.y"
                                     {
  // Multiple foreign keys for the same column could be possible, so we do not raise an error in that case.
  // Think of foreign keys referenced on multiple levels (returned item references sold item references items).
  (yyvsp[-1].column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyvsp[-1].column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4163 "bison_parser.cpp"
    break;

  case 98: /* column_constraint: PRIMARY KEY  */
#line 774 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4169 "bison_parser.cpp"
    break;

  case 99: /* column_constraint: UNIQUE  */
#line 775 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4175 "bison_parser.cpp"
    break;

  case 100: /* column_constraint: NULL  */
#line 776 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4181 "bison_parser.cpp"
    break;

  case 101: /* column_constraint: NOT NULL  */
#line 777 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4187 "bison_parser.cpp"
    break;

  case 102: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 779 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4193 "bison_parser.cpp"
    break;

  case 103: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 780 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4199 "bison_parser.cpp"
    break;

  case 104: /* table_constraint: FOREIGN KEY '(' ident_commalist ')' references_spec  */
#line 781 "bison_parser.y"
                                                      { (yyval.table_constraint_t) = new ForeignKeyConstraint((yyvsp[-2].str_vec), (yyvsp[0].references_spec_t)); }
#line 4205 "bison_parser.cpp"
    break;

  case 105: /* references_spec: REFERENCES table_name opt_column_list  */
#line 783 "bison_parser.y"
                                                        { (yyval.references_spec_t) = new ReferencesSpecification((yyvsp[-1].table_name).schema, (yyvsp[-1].table_name).name, (yyvsp[0].str_vec)); }
#line 4211 "bison_parser.cpp"
    break;

  case 106: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 791 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4222 "bison_parser.cpp"
    break;

  case 107: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 797 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4233 "bison_parser.cpp"
    break;

  case 108: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 803 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4243 "bison_parser.cpp"
    break;

  case 109: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 809 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4253 "bison_parser.cpp"
    break;

  case 110: /* opt_exists: IF EXISTS  */
#line 815 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4259 "bison_parser.cpp"
    break;

  case 111: /* opt_exists: %empty  */
#line 816 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4265 "bison_parser.cpp"
    break;

  case 112: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 823 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4275 "bison_parser.cpp"
    break;

  case 113: /* alter_action: drop_action  */
#line 829 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4281 "bison_parser.cpp"
    break;

  case 114: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 831 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4290 "bison_parser.cpp"
    break;

  case 115: /* delete_statement: DELETE FROM table_name opt_where  */
#line 841 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4301 "bison_parser.cpp"
    break;

  case 116: /* truncate_statement: TRUNCATE table_name  */
#line 848 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4311 "bison_parser.cpp"
    break;

  case 117: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' extended_literal_list ')'  */
#line 859 "bison_parser.y"
                                                                                               {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4323 "bison_parser.cpp"
    break;

  case 118: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 866 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4335 "bison_parser.cpp"
    break;

  case 119: /* opt_column_list: '(' ident_commalist ')'  */
#line 874 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4341 "bison_parser.cpp"
    break;

  case 120: /* opt_column_list: %empty  */
#line 875 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4347 "bison_parser.cpp"
    break;

  case 121: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 882 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4358 "bison_parser.cpp"
    break;

  case 122: /* update_clause_commalist: update_clause  */
#line 889 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4367 "bison_parser.cpp"
    break;

  case 123: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 893 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4376 "bison_parser.cpp"
    break;

  case 124: /* update_clause: IDENTIFIER '=' expr  */
#line 898 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4386 "bison_parser.cpp"
    break;

  case 125: /* select_statement: opt_with_clause select_with_paren  */
#line 908 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4395 "bison_parser.cpp"
    break;

  case 126: /* select_statement: opt_with_clause select_no_paren  */
#line 912 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4404 "bison_parser.cpp"
    break;

  case 127: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 916 "bison_parser.y"
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
#line 4420 "bison_parser.cpp"
    break;

  case 130: /* select_within_set_operation_no_parentheses: select_clause  */
#line 930 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4426 "bison_parser.cpp"
    break;

  case 131: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 931 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4439 "bison_parser.cpp"
    break;

  case 132: /* select_with_paren: '(' select_no_paren ')'  */
#line 940 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4445 "bison_parser.cpp"
    break;

  case 133: /* select_with_paren: '(' select_with_paren ')'  */
#line 941 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4451 "bison_parser.cpp"
    break;

  case 134: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 943 "bison_parser.y"
                                                                       {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit)) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec)) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4470 "bison_parser.cpp"
    break;

  case 135: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 957 "bison_parser.y"
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
#line 4486 "bison_parser.cpp"
    break;

  case 136: /* set_operator: set_type opt_all  */
#line 969 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4495 "bison_parser.cpp"
    break;

  case 137: /* set_type: UNION  */
#line 974 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4504 "bison_parser.cpp"
    break;

  case 138: /* set_type: INTERSECT  */
#line 978 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4513 "bison_parser.cpp"
    break;

  case 139: /* set_type: EXCEPT  */
#line 982 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4522 "bison_parser.cpp"
    break;

  case 140: /* opt_all: ALL  */
#line 987 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4528 "bison_parser.cpp"
    break;

  case 141: /* opt_all: %empty  */
#line 988 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4534 "bison_parser.cpp"
    break;

  case 142: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 990 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4548 "bison_parser.cpp"
    break;

  case 143: /* opt_distinct: DISTINCT  */
#line 1000 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4554 "bison_parser.cpp"
    break;

  case 144: /* opt_distinct: %empty  */
#line 1001 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4560 "bison_parser.cpp"
    break;

  case 146: /* opt_from_clause: from_clause  */
#line 1005 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4566 "bison_parser.cpp"
    break;

  case 147: /* opt_from_clause: %empty  */
#line 1006 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4572 "bison_parser.cpp"
    break;

  case 148: /* from_clause: FROM table_ref  */
#line 1008 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4578 "bison_parser.cpp"
    break;

  case 149: /* opt_where: WHERE expr  */
#line 1010 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4584 "bison_parser.cpp"
    break;

  case 150: /* opt_where: %empty  */
#line 1011 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4590 "bison_parser.cpp"
    break;

  case 151: /* opt_group: GROUP BY expr_list opt_having  */
#line 1013 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4600 "bison_parser.cpp"
    break;

  case 152: /* opt_group: %empty  */
#line 1018 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4606 "bison_parser.cpp"
    break;

  case 153: /* opt_having: HAVING expr  */
#line 1020 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4612 "bison_parser.cpp"
    break;

  case 154: /* opt_having: %empty  */
#line 1021 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4618 "bison_parser.cpp"
    break;

  case 155: /* opt_order: ORDER BY order_list  */
#line 1023 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4624 "bison_parser.cpp"
    break;

  case 156: /* opt_order: %empty  */
#line 1024 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4630 "bison_parser.cpp"
    break;

  case 157: /* order_list: order_desc  */
#line 1026 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4639 "bison_parser.cpp"
    break;

  case 158: /* order_list: order_list ',' order_desc  */
#line 1030 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4648 "bison_parser.cpp"
    break;

  case 159: /* order_desc: expr opt_order_type  */
#line 1035 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4654 "bison_parser.cpp"
    break;

  case 160: /* opt_order_type: ASC  */
#line 1037 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4660 "bison_parser.cpp"
    break;

  case 161: /* opt_order_type: DESC  */
#line 1038 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4666 "bison_parser.cpp"
    break;

  case 162: /* opt_order_type: %empty  */
#line 1039 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4672 "bison_parser.cpp"
    break;

  case 163: /* opt_top: TOP int_literal  */
#line 1043 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4678 "bison_parser.cpp"
    break;

  case 164: /* opt_top: %empty  */
#line 1044 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4684 "bison_parser.cpp"
    break;

  case 165: /* opt_limit: LIMIT expr  */
#line 1046 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4690 "bison_parser.cpp"
    break;

  case 166: /* opt_limit: OFFSET expr  */
#line 1047 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4696 "bison_parser.cpp"
    break;

  case 167: /* opt_limit: LIMIT expr OFFSET expr  */
#line 1048 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4702 "bison_parser.cpp"
    break;

  case 168: /* opt_limit: LIMIT ALL  */
#line 1049 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4708 "bison_parser.cpp"
    break;

  case 169: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 1050 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4714 "bison_parser.cpp"
    break;

  case 170: /* opt_limit: %empty  */
#line 1051 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4720 "bison_parser.cpp"
    break;

  case 171: /* expr_list: expr_alias  */
#line 1056 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4729 "bison_parser.cpp"
    break;

  case 172: /* expr_list: expr_list ',' expr_alias  */
#line 1060 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4738 "bison_parser.cpp"
    break;

  case 173: /* opt_extended_literal_list: extended_literal_list  */
#line 1066 "bison_parser.y"
                                                  { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4744 "bison_parser.cpp"
    break;

  case 174: /* opt_extended_literal_list: %empty  */
#line 1067 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4750 "bison_parser.cpp"
    break;

  case 175: /* extended_literal_list: casted_extended_literal  */
#line 1069 "bison_parser.y"
                                                {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4759 "bison_parser.cpp"
    break;

  case 176: /* extended_literal_list: extended_literal_list ',' casted_extended_literal  */
#line 1073 "bison_parser.y"
                                                    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4768 "bison_parser.cpp"
    break;

  case 178: /* casted_extended_literal: CAST '(' extended_literal AS column_type ')'  */
#line 1078 "bison_parser.y"
                                                                                          {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4776 "bison_parser.cpp"
    break;

  case 179: /* extended_literal: literal  */
#line 1082 "bison_parser.y"
                           {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4789 "bison_parser.cpp"
    break;

  case 180: /* extended_literal: '-' num_literal  */
#line 1090 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4795 "bison_parser.cpp"
    break;

  case 181: /* extended_literal: '-' interval_literal  */
#line 1091 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4801 "bison_parser.cpp"
    break;

  case 182: /* expr_alias: expr opt_alias  */
#line 1093 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4814 "bison_parser.cpp"
    break;

  case 188: /* operand: '(' expr ')'  */
#line 1104 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4820 "bison_parser.cpp"
    break;

  case 198: /* operand: '(' select_no_paren ')'  */
#line 1106 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4828 "bison_parser.cpp"
    break;

  case 201: /* unary_expr: '-' operand  */
#line 1112 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4834 "bison_parser.cpp"
    break;

  case 202: /* unary_expr: NOT operand  */
#line 1113 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4840 "bison_parser.cpp"
    break;

  case 203: /* unary_expr: operand ISNULL  */
#line 1114 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4846 "bison_parser.cpp"
    break;

  case 204: /* unary_expr: operand IS NULL  */
#line 1115 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4852 "bison_parser.cpp"
    break;

  case 205: /* unary_expr: operand IS NOT NULL  */
#line 1116 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4858 "bison_parser.cpp"
    break;

  case 207: /* binary_expr: operand '-' operand  */
#line 1118 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4864 "bison_parser.cpp"
    break;

  case 208: /* binary_expr: operand '+' operand  */
#line 1119 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4870 "bison_parser.cpp"
    break;

  case 209: /* binary_expr: operand '/' operand  */
#line 1120 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4876 "bison_parser.cpp"
    break;

  case 210: /* binary_expr: operand '*' operand  */
#line 1121 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4882 "bison_parser.cpp"
    break;

  case 211: /* binary_expr: operand '%' operand  */
#line 1122 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4888 "bison_parser.cpp"
    break;

  case 212: /* binary_expr: operand '^' operand  */
#line 1123 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4894 "bison_parser.cpp"
    break;

  case 213: /* binary_expr: operand LIKE operand  */
#line 1124 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4900 "bison_parser.cpp"
    break;

  case 214: /* binary_expr: operand NOT LIKE operand  */
#line 1125 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4906 "bison_parser.cpp"
    break;

  case 215: /* binary_expr: operand ILIKE operand  */
#line 1126 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4912 "bison_parser.cpp"
    break;

  case 216: /* binary_expr: operand CONCAT operand  */
#line 1127 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4918 "bison_parser.cpp"
    break;

  case 217: /* logic_expr: expr AND expr  */
#line 1129 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4924 "bison_parser.cpp"
    break;

  case 218: /* logic_expr: expr OR expr  */
#line 1130 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4930 "bison_parser.cpp"
    break;

  case 219: /* in_expr: operand IN '(' expr_list ')'  */
#line 1132 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4936 "bison_parser.cpp"
    break;

  case 220: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1133 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4942 "bison_parser.cpp"
    break;

  case 221: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1134 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4948 "bison_parser.cpp"
    break;

  case 222: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1135 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4954 "bison_parser.cpp"
    break;

  case 223: /* case_expr: CASE expr case_list END  */
#line 1139 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4960 "bison_parser.cpp"
    break;

  case 224: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1140 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4966 "bison_parser.cpp"
    break;

  case 225: /* case_expr: CASE case_list END  */
#line 1141 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4972 "bison_parser.cpp"
    break;

  case 226: /* case_expr: CASE case_list ELSE expr END  */
#line 1142 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4978 "bison_parser.cpp"
    break;

  case 227: /* case_list: WHEN expr THEN expr  */
#line 1144 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4984 "bison_parser.cpp"
    break;

  case 228: /* case_list: case_list WHEN expr THEN expr  */
#line 1145 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4990 "bison_parser.cpp"
    break;

  case 229: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1147 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4996 "bison_parser.cpp"
    break;

  case 230: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1148 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 5002 "bison_parser.cpp"
    break;

  case 231: /* comp_expr: operand '=' operand  */
#line 1150 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5008 "bison_parser.cpp"
    break;

  case 232: /* comp_expr: operand EQUALS operand  */
#line 1151 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5014 "bison_parser.cpp"
    break;

  case 233: /* comp_expr: operand NOTEQUALS operand  */
#line 1152 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 5020 "bison_parser.cpp"
    break;

  case 234: /* comp_expr: operand '<' operand  */
#line 1153 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 5026 "bison_parser.cpp"
    break;

  case 235: /* comp_expr: operand '>' operand  */
#line 1154 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 5032 "bison_parser.cpp"
    break;

  case 236: /* comp_expr: operand LESSEQ operand  */
#line 1155 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 5038 "bison_parser.cpp"
    break;

  case 237: /* comp_expr: operand GREATEREQ operand  */
#line 1156 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 5044 "bison_parser.cpp"
    break;

  case 238: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1160 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5050 "bison_parser.cpp"
    break;

  case 239: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1161 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5056 "bison_parser.cpp"
    break;

  case 240: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1165 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 5062 "bison_parser.cpp"
    break;

  case 241: /* opt_window: %empty  */
#line 1166 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 5068 "bison_parser.cpp"
    break;

  case 242: /* opt_partition: PARTITION BY expr_list  */
#line 1168 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 5074 "bison_parser.cpp"
    break;

  case 243: /* opt_partition: %empty  */
#line 1169 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 5080 "bison_parser.cpp"
    break;

  case 244: /* opt_frame_clause: frame_type frame_bound  */
#line 1174 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 5086 "bison_parser.cpp"
    break;

  case 245: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1175 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 5092 "bison_parser.cpp"
    break;

  case 246: /* opt_frame_clause: %empty  */
#line 1176 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 5100 "bison_parser.cpp"
    break;

  case 247: /* frame_type: RANGE  */
#line 1180 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 5106 "bison_parser.cpp"
    break;

  case 248: /* frame_type: ROWS  */
#line 1181 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 5112 "bison_parser.cpp"
    break;

  case 249: /* frame_type: GROUPS  */
#line 1182 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 5118 "bison_parser.cpp"
    break;

  case 250: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1184 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5124 "bison_parser.cpp"
    break;

  case 251: /* frame_bound: INTVAL PRECEDING  */
#line 1185 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5130 "bison_parser.cpp"
    break;

  case 252: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1186 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5136 "bison_parser.cpp"
    break;

  case 253: /* frame_bound: INTVAL FOLLOWING  */
#line 1187 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5142 "bison_parser.cpp"
    break;

  case 254: /* frame_bound: CURRENT_ROW  */
#line 1188 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5148 "bison_parser.cpp"
    break;

  case 255: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1190 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5154 "bison_parser.cpp"
    break;

  case 256: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1192 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5160 "bison_parser.cpp"
    break;

  case 257: /* datetime_field: SECOND  */
#line 1194 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5166 "bison_parser.cpp"
    break;

  case 258: /* datetime_field: MINUTE  */
#line 1195 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5172 "bison_parser.cpp"
    break;

  case 259: /* datetime_field: HOUR  */
#line 1196 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5178 "bison_parser.cpp"
    break;

  case 260: /* datetime_field: DAY  */
#line 1197 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5184 "bison_parser.cpp"
    break;

  case 261: /* datetime_field: MONTH  */
#line 1198 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5190 "bison_parser.cpp"
    break;

  case 262: /* datetime_field: YEAR  */
#line 1199 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5196 "bison_parser.cpp"
    break;

  case 263: /* datetime_field_plural: SECONDS  */
#line 1201 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5202 "bison_parser.cpp"
    break;

  case 264: /* datetime_field_plural: MINUTES  */
#line 1202 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5208 "bison_parser.cpp"
    break;

  case 265: /* datetime_field_plural: HOURS  */
#line 1203 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5214 "bison_parser.cpp"
    break;

  case 266: /* datetime_field_plural: DAYS  */
#line 1204 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5220 "bison_parser.cpp"
    break;

  case 267: /* datetime_field_plural: MONTHS  */
#line 1205 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5226 "bison_parser.cpp"
    break;

  case 268: /* datetime_field_plural: YEARS  */
#line 1206 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5232 "bison_parser.cpp"
    break;

  case 271: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1210 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5238 "bison_parser.cpp"
    break;

  case 272: /* array_index: operand '[' int_literal ']'  */
#line 1212 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5244 "bison_parser.cpp"
    break;

  case 273: /* between_expr: operand BETWEEN operand AND operand  */
#line 1214 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5250 "bison_parser.cpp"
    break;

  case 274: /* column_name: IDENTIFIER  */
#line 1216 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5256 "bison_parser.cpp"
    break;

  case 275: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1217 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5262 "bison_parser.cpp"
    break;

  case 276: /* column_name: '*'  */
#line 1218 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5268 "bison_parser.cpp"
    break;

  case 277: /* column_name: IDENTIFIER '.' '*'  */
#line 1219 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5274 "bison_parser.cpp"
    break;

  case 285: /* string_literal: STRING  */
#line 1223 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5280 "bison_parser.cpp"
    break;

  case 286: /* bool_literal: TRUE  */
#line 1225 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5286 "bison_parser.cpp"
    break;

  case 287: /* bool_literal: FALSE  */
#line 1226 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5292 "bison_parser.cpp"
    break;

  case 288: /* num_literal: FLOATVAL  */
#line 1228 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5298 "bison_parser.cpp"
    break;

  case 290: /* int_literal: INTVAL  */
#line 1231 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5304 "bison_parser.cpp"
    break;

  case 291: /* null_literal: NULL  */
#line 1233 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5310 "bison_parser.cpp"
    break;

  case 292: /* date_literal: DATE STRING  */
#line 1235 "bison_parser.y"
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
#line 5325 "bison_parser.cpp"
    break;

  case 293: /* interval_literal: INTVAL duration_field  */
#line 1246 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5331 "bison_parser.cpp"
    break;

  case 294: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1247 "bison_parser.y"
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
#line 5347 "bison_parser.cpp"
    break;

  case 295: /* interval_literal: INTERVAL STRING  */
#line 1258 "bison_parser.y"
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
#line 5383 "bison_parser.cpp"
    break;

  case 296: /* param_expr: '?'  */
#line 1290 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5393 "bison_parser.cpp"
    break;

  case 298: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1299 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5404 "bison_parser.cpp"
    break;

  case 302: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1308 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5415 "bison_parser.cpp"
    break;

  case 303: /* table_ref_commalist: table_ref_atomic  */
#line 1315 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5424 "bison_parser.cpp"
    break;

  case 304: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1319 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5433 "bison_parser.cpp"
    break;

  case 305: /* table_ref_name: table_name opt_table_alias  */
#line 1324 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5445 "bison_parser.cpp"
    break;

  case 306: /* table_ref_name_no_alias: table_name  */
#line 1332 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5455 "bison_parser.cpp"
    break;

  case 307: /* table_name: IDENTIFIER  */
#line 1338 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5464 "bison_parser.cpp"
    break;

  case 308: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1342 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5473 "bison_parser.cpp"
    break;

  case 309: /* opt_index_name: IDENTIFIER  */
#line 1347 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5479 "bison_parser.cpp"
    break;

  case 310: /* opt_index_name: %empty  */
#line 1348 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5485 "bison_parser.cpp"
    break;

  case 312: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1350 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5491 "bison_parser.cpp"
    break;

  case 314: /* opt_table_alias: %empty  */
#line 1352 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5497 "bison_parser.cpp"
    break;

  case 315: /* alias: AS IDENTIFIER  */
#line 1354 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5503 "bison_parser.cpp"
    break;

  case 316: /* alias: IDENTIFIER  */
#line 1355 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5509 "bison_parser.cpp"
    break;

  case 318: /* opt_alias: %empty  */
#line 1357 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5515 "bison_parser.cpp"
    break;

  case 319: /* opt_locking_clause: opt_locking_clause_list  */
#line 1363 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5521 "bison_parser.cpp"
    break;

  case 320: /* opt_locking_clause: %empty  */
#line 1364 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5527 "bison_parser.cpp"
    break;

  case 321: /* opt_locking_clause_list: locking_clause  */
#line 1366 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5536 "bison_parser.cpp"
    break;

  case 322: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1370 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5545 "bison_parser.cpp"
    break;

  case 323: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1375 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5556 "bison_parser.cpp"
    break;

  case 324: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1381 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5567 "bison_parser.cpp"
    break;

  case 325: /* row_lock_mode: UPDATE  */
#line 1388 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5573 "bison_parser.cpp"
    break;

  case 326: /* row_lock_mode: NO KEY UPDATE  */
#line 1389 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5579 "bison_parser.cpp"
    break;

  case 327: /* row_lock_mode: SHARE  */
#line 1390 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5585 "bison_parser.cpp"
    break;

  case 328: /* row_lock_mode: KEY SHARE  */
#line 1391 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5591 "bison_parser.cpp"
    break;

  case 329: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1393 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5597 "bison_parser.cpp"
    break;

  case 330: /* opt_row_lock_policy: NOWAIT  */
#line 1394 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5603 "bison_parser.cpp"
    break;

  case 331: /* opt_row_lock_policy: %empty  */
#line 1395 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5609 "bison_parser.cpp"
    break;

  case 333: /* opt_with_clause: %empty  */
#line 1401 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5615 "bison_parser.cpp"
    break;

  case 334: /* with_clause: WITH with_description_list  */
#line 1403 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5621 "bison_parser.cpp"
    break;

  case 335: /* with_description_list: with_description  */
#line 1405 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5630 "bison_parser.cpp"
    break;

  case 336: /* with_description_list: with_description_list ',' with_description  */
#line 1409 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5639 "bison_parser.cpp"
    break;

  case 337: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1414 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5649 "bison_parser.cpp"
    break;

  case 338: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1424 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5661 "bison_parser.cpp"
    break;

  case 339: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1431 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5674 "bison_parser.cpp"
    break;

  case 340: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1439 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5687 "bison_parser.cpp"
    break;

  case 341: /* opt_join_type: INNER  */
#line 1448 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5693 "bison_parser.cpp"
    break;

  case 342: /* opt_join_type: LEFT OUTER  */
#line 1449 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5699 "bison_parser.cpp"
    break;

  case 343: /* opt_join_type: LEFT  */
#line 1450 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5705 "bison_parser.cpp"
    break;

  case 344: /* opt_join_type: RIGHT OUTER  */
#line 1451 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5711 "bison_parser.cpp"
    break;

  case 345: /* opt_join_type: RIGHT  */
#line 1452 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5717 "bison_parser.cpp"
    break;

  case 346: /* opt_join_type: FULL OUTER  */
#line 1453 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5723 "bison_parser.cpp"
    break;

  case 347: /* opt_join_type: OUTER  */
#line 1454 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5729 "bison_parser.cpp"
    break;

  case 348: /* opt_join_type: FULL  */
#line 1455 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5735 "bison_parser.cpp"
    break;

  case 349: /* opt_join_type: CROSS  */
#line 1456 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5741 "bison_parser.cpp"
    break;

  case 350: /* opt_join_type: %empty  */
#line 1457 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5747 "bison_parser.cpp"
    break;

  case 354: /* ident_commalist: IDENTIFIER  */
#line 1468 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5756 "bison_parser.cpp"
    break;

  case 355: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1472 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5765 "bison_parser.cpp"
    break;


#line 5769 "bison_parser.cpp"

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

#line 1478 "bison_parser.y"


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

    // clang-format on
