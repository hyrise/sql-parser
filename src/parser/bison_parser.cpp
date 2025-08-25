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
  YYSYMBOL_174_ = 174,                     /* '='  */
  YYSYMBOL_EQUALS = 175,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 176,                /* NOTEQUALS  */
  YYSYMBOL_177_ = 177,                     /* '<'  */
  YYSYMBOL_178_ = 178,                     /* '>'  */
  YYSYMBOL_LESS = 179,                     /* LESS  */
  YYSYMBOL_GREATER = 180,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 181,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 182,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 183,                  /* NOTNULL  */
  YYSYMBOL_184_ = 184,                     /* '+'  */
  YYSYMBOL_185_ = 185,                     /* '-'  */
  YYSYMBOL_186_ = 186,                     /* '*'  */
  YYSYMBOL_187_ = 187,                     /* '/'  */
  YYSYMBOL_188_ = 188,                     /* '%'  */
  YYSYMBOL_189_ = 189,                     /* '^'  */
  YYSYMBOL_UMINUS = 190,                   /* UMINUS  */
  YYSYMBOL_191_ = 191,                     /* '['  */
  YYSYMBOL_192_ = 192,                     /* ']'  */
  YYSYMBOL_193_ = 193,                     /* '('  */
  YYSYMBOL_194_ = 194,                     /* ')'  */
  YYSYMBOL_195_ = 195,                     /* '.'  */
  YYSYMBOL_196_ = 196,                     /* ';'  */
  YYSYMBOL_197_ = 197,                     /* ','  */
  YYSYMBOL_198_ = 198,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 199,                 /* $accept  */
  YYSYMBOL_input = 200,                    /* input  */
  YYSYMBOL_statement_list = 201,           /* statement_list  */
  YYSYMBOL_statement = 202,                /* statement  */
  YYSYMBOL_preparable_statement = 203,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 204,                /* opt_hints  */
  YYSYMBOL_hint_list = 205,                /* hint_list  */
  YYSYMBOL_hint = 206,                     /* hint  */
  YYSYMBOL_transaction_statement = 207,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 208,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 209,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 210,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 211,        /* execute_statement  */
  YYSYMBOL_import_statement = 212,         /* import_statement  */
  YYSYMBOL_file_type = 213,                /* file_type  */
  YYSYMBOL_file_path = 214,                /* file_path  */
  YYSYMBOL_opt_import_export_options = 215, /* opt_import_export_options  */
  YYSYMBOL_import_export_options = 216,    /* import_export_options  */
  YYSYMBOL_csv_option = 217,               /* csv_option  */
  YYSYMBOL_export_statement = 218,         /* export_statement  */
  YYSYMBOL_show_statement = 219,           /* show_statement  */
  YYSYMBOL_create_statement = 220,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 221,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 222,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 223,               /* table_elem  */
  YYSYMBOL_column_def = 224,               /* column_def  */
  YYSYMBOL_column_type = 225,              /* column_type  */
  YYSYMBOL_opt_time_precision = 226,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 227, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 228,   /* opt_column_constraints  */
  YYSYMBOL_column_constraints = 229,       /* column_constraints  */
  YYSYMBOL_column_constraint = 230,        /* column_constraint  */
  YYSYMBOL_table_constraint = 231,         /* table_constraint  */
  YYSYMBOL_references_spec = 232,          /* references_spec  */
  YYSYMBOL_drop_statement = 233,           /* drop_statement  */
  YYSYMBOL_opt_exists = 234,               /* opt_exists  */
  YYSYMBOL_alter_statement = 235,          /* alter_statement  */
  YYSYMBOL_alter_action = 236,             /* alter_action  */
  YYSYMBOL_drop_action = 237,              /* drop_action  */
  YYSYMBOL_delete_statement = 238,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 239,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 240,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 241,          /* opt_column_list  */
  YYSYMBOL_update_statement = 242,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 243,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 244,            /* update_clause  */
  YYSYMBOL_select_statement = 245,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 246, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 247, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 248,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 249,          /* select_no_paren  */
  YYSYMBOL_set_operator = 250,             /* set_operator  */
  YYSYMBOL_set_type = 251,                 /* set_type  */
  YYSYMBOL_opt_all = 252,                  /* opt_all  */
  YYSYMBOL_select_clause = 253,            /* select_clause  */
  YYSYMBOL_opt_distinct = 254,             /* opt_distinct  */
  YYSYMBOL_select_list = 255,              /* select_list  */
  YYSYMBOL_opt_from_clause = 256,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 257,              /* from_clause  */
  YYSYMBOL_opt_where = 258,                /* opt_where  */
  YYSYMBOL_opt_group = 259,                /* opt_group  */
  YYSYMBOL_opt_having = 260,               /* opt_having  */
  YYSYMBOL_opt_order = 261,                /* opt_order  */
  YYSYMBOL_order_list = 262,               /* order_list  */
  YYSYMBOL_order_desc = 263,               /* order_desc  */
  YYSYMBOL_opt_order_type = 264,           /* opt_order_type  */
  YYSYMBOL_opt_top = 265,                  /* opt_top  */
  YYSYMBOL_opt_limit = 266,                /* opt_limit  */
  YYSYMBOL_expr_list = 267,                /* expr_list  */
  YYSYMBOL_opt_extended_literal_list = 268, /* opt_extended_literal_list  */
  YYSYMBOL_extended_literal_list = 269,    /* extended_literal_list  */
  YYSYMBOL_casted_extended_literal = 270,  /* casted_extended_literal  */
  YYSYMBOL_extended_literal = 271,         /* extended_literal  */
  YYSYMBOL_expr_alias = 272,               /* expr_alias  */
  YYSYMBOL_expr = 273,                     /* expr  */
  YYSYMBOL_operand = 274,                  /* operand  */
  YYSYMBOL_scalar_expr = 275,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 276,               /* unary_expr  */
  YYSYMBOL_binary_expr = 277,              /* binary_expr  */
  YYSYMBOL_logic_expr = 278,               /* logic_expr  */
  YYSYMBOL_in_expr = 279,                  /* in_expr  */
  YYSYMBOL_case_expr = 280,                /* case_expr  */
  YYSYMBOL_case_list = 281,                /* case_list  */
  YYSYMBOL_exists_expr = 282,              /* exists_expr  */
  YYSYMBOL_comp_expr = 283,                /* comp_expr  */
  YYSYMBOL_function_expr = 284,            /* function_expr  */
  YYSYMBOL_opt_window = 285,               /* opt_window  */
  YYSYMBOL_opt_partition = 286,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 287,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 288,               /* frame_type  */
  YYSYMBOL_frame_bound = 289,              /* frame_bound  */
  YYSYMBOL_extract_expr = 290,             /* extract_expr  */
  YYSYMBOL_cast_expr = 291,                /* cast_expr  */
  YYSYMBOL_datetime_field = 292,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 293,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 294,           /* duration_field  */
  YYSYMBOL_array_expr = 295,               /* array_expr  */
  YYSYMBOL_array_index = 296,              /* array_index  */
  YYSYMBOL_between_expr = 297,             /* between_expr  */
  YYSYMBOL_column_name = 298,              /* column_name  */
  YYSYMBOL_literal = 299,                  /* literal  */
  YYSYMBOL_string_literal = 300,           /* string_literal  */
  YYSYMBOL_bool_literal = 301,             /* bool_literal  */
  YYSYMBOL_num_literal = 302,              /* num_literal  */
  YYSYMBOL_int_literal = 303,              /* int_literal  */
  YYSYMBOL_null_literal = 304,             /* null_literal  */
  YYSYMBOL_date_literal = 305,             /* date_literal  */
  YYSYMBOL_interval_literal = 306,         /* interval_literal  */
  YYSYMBOL_param_expr = 307,               /* param_expr  */
  YYSYMBOL_table_ref = 308,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 309,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 310, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 311,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 312,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 313,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 314,               /* table_name  */
  YYSYMBOL_opt_index_name = 315,           /* opt_index_name  */
  YYSYMBOL_table_alias = 316,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 317,          /* opt_table_alias  */
  YYSYMBOL_alias = 318,                    /* alias  */
  YYSYMBOL_opt_alias = 319,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 320,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 321,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 322,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 323,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 324,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 325,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 326,              /* with_clause  */
  YYSYMBOL_with_description_list = 327,    /* with_description_list  */
  YYSYMBOL_with_description = 328,         /* with_description  */
  YYSYMBOL_join_clause = 329,              /* join_clause  */
  YYSYMBOL_opt_join_type = 330,            /* opt_join_type  */
  YYSYMBOL_join_condition = 331,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 332,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 333           /* ident_commalist  */
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
#define YYLAST   864

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  199
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  353
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  646

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   436


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
       2,     2,     2,     2,     2,     2,     2,   188,     2,     2,
     193,   194,   186,   184,   197,   185,   195,   187,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   196,
     177,   174,   178,   198,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   191,     2,   192,   189,     2,     2,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   173,   175,
     176,   179,   180,   181,   182,   183,   190
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   338,   338,   357,   363,   370,   374,   378,   379,   380,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     397,   398,   400,   404,   409,   413,   423,   424,   425,   427,
     427,   433,   439,   441,   445,   457,   463,   480,   495,   497,
     498,   499,   501,   515,   519,   529,   533,   584,   609,   622,
     629,   644,   664,   665,   670,   681,   694,   706,   713,   720,
     729,   730,   732,   736,   741,   742,   744,   752,   753,   754,
     755,   756,   757,   758,   762,   763,   764,   765,   766,   767,
     768,   769,   770,   771,   772,   774,   775,   777,   778,   779,
     781,   782,   784,   788,   792,   797,   805,   806,   807,   808,
     810,   811,   812,   814,   822,   828,   834,   840,   846,   847,
     854,   860,   862,   872,   879,   890,   897,   905,   906,   913,
     920,   924,   929,   939,   943,   947,   959,   959,   961,   962,
     971,   972,   974,   988,  1000,  1005,  1009,  1013,  1018,  1019,
    1021,  1031,  1032,  1034,  1036,  1037,  1039,  1041,  1042,  1044,
    1049,  1051,  1052,  1054,  1055,  1057,  1061,  1066,  1068,  1069,
    1070,  1074,  1075,  1077,  1078,  1079,  1080,  1081,  1082,  1087,
    1091,  1097,  1098,  1100,  1104,  1109,  1109,  1113,  1121,  1122,
    1124,  1133,  1133,  1133,  1133,  1133,  1135,  1136,  1136,  1136,
    1136,  1136,  1136,  1136,  1136,  1137,  1137,  1141,  1141,  1143,
    1144,  1145,  1146,  1147,  1149,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,  1158,  1160,  1161,  1163,  1164,  1165,
    1166,  1170,  1171,  1172,  1173,  1175,  1176,  1178,  1179,  1181,
    1182,  1183,  1184,  1185,  1186,  1187,  1191,  1192,  1196,  1197,
    1199,  1200,  1205,  1206,  1207,  1211,  1212,  1213,  1215,  1216,
    1217,  1218,  1219,  1221,  1223,  1225,  1226,  1227,  1228,  1229,
    1230,  1232,  1233,  1234,  1235,  1236,  1237,  1239,  1239,  1241,
    1243,  1245,  1247,  1248,  1249,  1250,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1254,  1256,  1257,  1259,  1260,  1262,  1264,
    1266,  1277,  1278,  1289,  1321,  1330,  1330,  1337,  1337,  1339,
    1339,  1346,  1350,  1355,  1363,  1369,  1373,  1378,  1379,  1381,
    1381,  1383,  1383,  1385,  1386,  1388,  1388,  1394,  1395,  1397,
    1401,  1406,  1412,  1419,  1420,  1421,  1422,  1424,  1425,  1426,
    1432,  1432,  1434,  1436,  1440,  1445,  1455,  1462,  1470,  1479,
    1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,  1488,  1490,
    1496,  1496,  1499,  1503
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
  "REFERENCES", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_import_export_options",
  "import_export_options", "csv_option", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraints", "column_constraint",
  "table_constraint", "references_spec", "drop_statement", "opt_exists",
  "alter_statement", "alter_action", "drop_action", "delete_statement",
  "truncate_statement", "insert_statement", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_within_set_operation",
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

#define YYPACT_NINF (-566)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-351)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     615,   111,    57,    85,   127,    57,   182,    84,   102,    54,
      57,   128,    19,   186,   146,   240,   106,   106,   106,   229,
      78,  -566,   169,  -566,   169,  -566,  -566,  -566,  -566,  -566,
    -566,  -566,  -566,  -566,  -566,  -566,  -566,   -17,  -566,   289,
     117,  -566,   110,   222,  -566,   197,   197,   197,    57,   326,
      57,   213,  -566,   214,   -17,   225,    -1,   214,   214,   214,
      57,  -566,   239,   174,  -566,  -566,  -566,  -566,  -566,  -566,
     598,  -566,   250,  -566,  -566,   242,    61,  -566,   147,  -566,
     379,   302,   387,   303,   427,    57,    57,   352,  -566,   354,
     258,   452,   425,    57,   278,   284,   478,   478,   478,   504,
      57,    57,  -566,   315,   240,  -566,   316,   505,   501,  -566,
    -566,  -566,   -17,   403,   394,   -17,   125,  -566,  -566,  -566,
     423,   328,   519,  -566,   524,  -566,  -566,    33,  -566,   335,
     333,  -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,
    -566,  -566,  -566,  -566,   485,  -566,   404,   -38,   258,   329,
    -566,   478,   531,    96,   368,   -39,  -566,  -566,   446,  -566,
    -566,  -566,   -62,   -62,   -62,  -566,  -566,  -566,  -566,  -566,
     542,  -566,  -566,  -566,   329,   470,  -566,  -566,    61,  -566,
    -566,   329,   470,   329,    49,   428,  -566,  -566,  -566,  -566,
    -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,
    -566,   334,  -566,   269,  -566,  -566,  -566,   302,  -566,    57,
     546,   437,    18,   429,    75,   360,   362,   364,   163,   340,
     365,   389,  -566,   233,   -42,   415,  -566,  -566,  -566,  -566,
    -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,
    -566,  -566,   460,  -566,   -12,   366,  -566,   329,   452,  -566,
     534,  -566,  -566,   383,    56,  -566,   352,  -566,   384,    92,
    -566,   484,   382,  -566,    70,   125,   -17,   386,  -566,   108,
     125,   -42,   525,    12,     2,  -566,   428,  -566,   456,  -566,
    -566,   391,   492,  -566,   688,   393,   416,   422,   134,  -566,
    -566,  -566,   437,    11,    17,   537,   269,   329,   329,   210,
     141,   414,   389,   629,   329,   113,   421,   -55,   329,   329,
     389,  -566,   389,   103,   418,   123,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   505,    57,  -566,   605,   302,   -42,  -566,   214,    56,
     606,   610,   326,   612,   168,  -566,  -566,   302,  -566,   542,
      23,   352,  -566,   329,  -566,   614,  -566,  -566,  -566,  -566,
     329,  -566,  -566,  -566,   428,   329,   329,  -566,   447,  -566,
     448,   -73,  -566,   688,   531,   478,  -566,  -566,   430,  -566,
     431,  -566,  -566,   433,  -566,  -566,   434,  -566,  -566,  -566,
    -566,   435,  -566,  -566,   150,   531,   436,   438,  -566,    18,
    -566,   541,   329,  -566,  -566,   439,   527,   153,   156,   165,
     329,   329,  -566,   537,   533,    58,  -566,  -566,  -566,   516,
     558,   658,   389,   443,   233,  -566,   536,   450,   658,   658,
     658,   658,   673,   673,   673,   673,   113,   113,    41,    41,
      41,   -67,   451,  -566,  -566,   176,   641,   184,  -566,  -566,
    -566,  -566,  -566,   122,   205,  -566,   437,  -566,   301,  -566,
     449,  -566,    32,  -566,   576,  -566,  -566,  -566,  -566,   -42,
     -42,   585,  -566,   531,  -566,   488,  -566,   455,   226,  -566,
     647,   648,  -566,   651,   652,   655,  -566,  -566,   560,  -566,
     490,    57,  -566,   150,  -566,  -566,   251,   531,   531,  -566,
     472,  -566,   252,  -566,   329,   688,   329,   329,  -566,   193,
     178,   475,  -566,   389,   658,   233,   476,   262,  -566,  -566,
    -566,  -566,  -566,   662,   326,  -566,  -566,   477,   573,  -566,
    -566,  -566,   595,   597,   600,   577,    23,   678,  -566,  -566,
    -566,   556,  -566,  -566,   -96,  -566,  -566,  -566,   494,   263,
     496,   497,   498,  -566,  -566,   258,  -566,  -566,  -566,   279,
     300,   579,   541,   -51,   499,   -42,   237,  -566,   329,  -566,
     629,   502,   307,  -566,  -566,  -566,  -566,    32,    23,  -566,
    -566,  -566,    23,   363,   493,   329,  -566,  -566,  -566,   691,
    -566,  -566,  -566,  -566,  -566,   528,   572,   470,  -566,  -566,
    -566,  -566,   -42,  -566,  -566,  -566,  -566,   417,   531,   -22,
     506,  -566,   329,   241,   510,   329,   308,   329,  -566,  -566,
     382,  -566,  -566,  -566,   513,    25,   531,   -42,  -566,  -566,
     -42,  -566,   185,    26,   231,  -566,  -566,   309,  -566,  -566,
     588,  -566,  -566,  -566,    26,  -566
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     351,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   330,     0,
     305,   114,    33,     0,    54,    61,    61,    61,     0,     0,
       0,     0,   304,   109,     0,     0,     0,   109,   109,   109,
       0,    52,     0,   332,   333,    29,    26,    28,    27,     1,
     331,     2,     0,     6,     5,   162,   123,   124,   154,   106,
       0,   172,     0,     0,   308,     0,     0,   148,    37,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     4,     0,     0,   142,   136,
     137,   135,     0,   139,     0,     0,   168,   306,   283,   286,
     288,     0,     0,   289,     0,   284,   285,     0,   294,     0,
     171,   173,   175,   177,   276,   277,   278,   287,   279,   280,
     281,   282,    32,    31,     0,   307,     0,     0,   118,     0,
     113,     0,     0,     0,     0,   148,   120,   108,     0,   131,
     130,    38,    41,    41,    41,   107,   104,   105,   335,   334,
       0,   288,   161,   141,     0,   154,   127,   126,   128,   138,
     134,     0,   154,     0,     0,   318,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     291,     0,   290,   293,   178,   179,    34,     0,    60,     0,
       0,   331,     0,     0,   272,     0,     0,     0,     0,     0,
       0,     0,   274,     0,   147,   181,   188,   189,   190,   183,
     185,   191,   184,   204,   192,   193,   194,   195,   187,   182,
     197,   198,     0,   352,     0,     0,   116,     0,     0,   119,
       0,   110,   111,     0,     0,    51,   148,    50,    24,     0,
      22,   145,   143,   169,   316,   168,     0,   153,   155,   160,
     168,   164,   166,   163,     0,   132,   317,   319,     0,   292,
     174,     0,     0,    57,     0,     0,     0,     0,     0,    62,
      64,    65,   331,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   200,     0,   199,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   122,   121,   109,     0,
       0,     0,     0,     0,     0,    47,    36,     0,    20,     0,
       0,   148,   144,     0,   314,     0,   315,   180,   125,   129,
       0,   159,   158,   157,   318,     0,     0,   323,     0,   325,
       0,   329,   320,     0,     0,     0,    83,    77,     0,    79,
      89,    80,    67,     0,    74,    75,     0,    71,    72,    78,
      81,    86,    76,    68,    91,     0,     0,     0,    56,     0,
      59,   239,     0,   273,   275,     0,     0,     0,     0,     0,
       0,     0,   223,     0,     0,     0,   196,   186,   215,   216,
       0,   211,     0,     0,     0,   202,     0,   214,   213,   229,
     230,   231,   232,   233,   234,   235,   206,   205,   208,   207,
     209,   210,     0,    35,   353,     0,     0,     0,    48,    45,
      43,    49,    40,     0,     0,    23,   331,   146,   295,   297,
       0,   299,   312,   298,   150,   170,   313,   156,   133,   167,
     165,     0,   326,     0,   328,     0,   321,     0,     0,    55,
       0,     0,    73,     0,     0,     0,    82,    98,     0,    97,
       0,     0,    66,    90,    92,    94,     0,     0,     0,    63,
       0,   236,     0,   227,     0,     0,     0,     0,   221,     0,
       0,     0,   269,     0,   212,     0,     0,     0,   203,   270,
     115,   112,    39,     0,     0,    46,    25,     0,     0,   347,
     339,   345,   343,   346,   341,     0,     0,     0,   311,   303,
     309,     0,   140,   324,   329,   327,   176,    58,     0,     0,
       0,     0,     0,    99,    96,   118,    93,    95,   101,     0,
       0,   241,   239,     0,     0,   225,     0,   224,     0,   228,
     271,     0,     0,   219,   217,    44,    42,   312,     0,   342,
     344,   340,     0,   296,   313,     0,   322,    70,    88,     0,
      84,    69,    85,   103,   100,     0,     0,   154,   237,   253,
     254,   222,   226,   220,   218,   300,   336,   348,     0,   152,
       0,   102,     0,   244,     0,     0,     0,     0,   149,    87,
     240,   245,   246,   247,     0,     0,     0,   349,   337,   310,
     151,   238,     0,     0,     0,   252,   242,     0,   251,   249,
       0,   250,   248,   338,     0,   243
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -566,  -566,  -566,   638,  -566,   685,  -566,   361,  -566,   398,
    -566,  -566,  -566,  -566,  -309,   -79,   276,   375,   271,  -566,
    -566,  -566,   420,  -566,   317,  -566,  -333,  -566,  -566,  -566,
    -566,   232,  -566,  -450,  -566,   -43,  -566,  -566,  -566,  -566,
    -566,  -566,  -142,  -566,  -566,   467,  -210,   -87,  -566,    38,
     -50,   -29,  -566,  -566,   -85,   444,  -566,  -566,  -566,  -130,
    -566,  -566,  -170,  -566,   369,  -566,  -566,   -48,  -295,  -566,
    -269,   544,   540,   373,  -147,  -208,  -566,  -566,  -566,  -566,
    -566,  -566,   453,  -566,  -566,  -566,   195,  -566,  -566,  -566,
    -565,  -566,  -566,  -156,  -566,  -566,  -566,  -566,  -566,  -566,
     -74,  -566,  -566,   611,   -90,  -566,  -566,   621,  -566,  -566,
    -447,   183,  -566,  -566,  -566,    -2,  -566,  -566,   187,   503,
    -566,   396,  -566,   486,  -566,   219,  -566,  -566,  -566,   664,
    -566,  -566,  -566,  -566,  -350
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   259,   260,    23,    66,
      24,   143,    25,    26,    89,   162,   255,   344,   345,    27,
      28,    29,    84,   288,   289,   290,   394,   486,   482,   492,
     493,   494,   291,   495,    30,    93,    31,   251,   252,    32,
      33,    34,   153,    35,   155,   156,    36,   175,   176,   177,
      77,   112,   113,   180,    78,   174,   261,   351,   352,   150,
     542,   618,   116,   267,   268,   363,   108,   185,   262,   129,
     130,   131,   132,   263,   264,   225,   226,   227,   228,   229,
     230,   231,   300,   232,   233,   234,   501,   597,   624,   625,
     636,   235,   236,   198,   199,   200,   237,   238,   239,   240,
     241,   134,   135,   136,   137,   138,   139,   140,   141,   457,
     458,   459,   460,   461,    51,   462,   146,   538,   539,   540,
     357,   275,   276,   277,   371,   476,    37,    38,    63,    64,
     463,   535,   628,    71,   244
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   283,   224,    44,    95,   265,   213,   133,    52,   415,
      56,   303,   270,   305,    99,   100,   101,   172,   163,   164,
     403,   284,    40,   173,   478,   249,    40,   178,   182,   617,
     178,   632,   632,   450,   269,   354,   271,   273,   119,   120,
     477,    75,   633,   557,   149,   496,    87,   279,    90,   115,
      55,   253,   214,   118,   119,   120,   210,   473,   102,   340,
      40,   308,   474,   475,   367,   308,   445,   366,   640,   316,
     109,   299,   242,   354,   308,    76,   307,   309,   454,   645,
     341,   309,   400,   147,   148,   474,   475,   211,    42,   583,
     309,   158,    94,    97,   303,   215,   216,   217,   166,   167,
     336,   334,   420,   246,   421,   342,   110,   502,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   544,   331,   340,   346,   133,   308,   517,
      43,   254,    98,   133,   218,   607,   368,   122,    39,   417,
     406,   168,   111,   599,   309,   611,   523,   559,   560,   266,
     407,   408,    50,   123,    75,   212,   109,   537,   248,   245,
     343,   418,   419,   369,   272,    60,   214,   118,   119,   120,
     219,   524,   564,   306,   370,   353,    54,   316,    48,   359,
     183,   178,   333,   124,   220,   334,   308,   285,   286,   287,
     634,   634,   110,   635,   635,   355,    49,   184,   361,   124,
     125,   126,   309,   404,   422,   401,    61,   281,    53,   215,
     216,   217,    54,   269,   514,   576,   456,   358,   469,   470,
     572,   464,   364,   114,   308,   362,   343,   425,   111,    69,
     330,   423,   331,   410,   221,   222,   214,   118,   119,   120,
     309,   442,   223,    62,   426,   405,   527,   128,   218,   316,
     512,   122,    45,   411,   487,   353,    57,   507,   616,   412,
      65,   133,    46,   509,   510,   506,    58,   123,   293,   308,
     294,   488,   308,   133,    70,   298,   637,   411,   505,   215,
     216,   217,    72,   508,   219,   309,   348,   568,   309,   349,
     609,    75,    79,    47,   308,   446,   479,    59,   220,   327,
     328,   329,   330,    81,   331,   570,   118,   119,   120,   308,
     309,   567,    80,   124,   125,   126,    82,   620,   218,   489,
     490,   122,   298,   491,    83,   309,   308,   528,   398,    88,
     443,   399,   214,   118,   119,   120,    91,   123,   118,   119,
     120,    92,   309,   214,   118,   119,   120,   106,   221,   222,
     121,   638,   639,   308,   219,   601,   223,   563,    96,   565,
     566,   128,   452,   511,   103,   453,   107,   529,   220,   309,
     520,   104,   530,   207,   516,   215,   216,   217,   522,   531,
     532,   453,   117,   124,   125,   126,   301,   216,   217,   528,
     122,   142,   214,   118,   119,   120,   533,   641,   642,   526,
    -348,   534,   207,   621,   622,   623,   123,   186,   187,   188,
     189,   190,   191,   593,   218,    67,    68,   122,   221,   222,
     547,   602,   122,   334,   144,   218,   223,   613,   122,   529,
     145,   128,   310,   123,   530,   149,   216,   217,   123,   256,
     257,   531,   532,   528,   123,   558,   562,   151,   334,   353,
     219,   152,   124,   125,   126,   154,   574,   588,   533,   353,
     589,   302,  -348,   534,   220,   571,    85,    86,   627,   311,
     630,   157,   159,   594,   218,   220,   334,   122,   160,   124,
     125,   126,   161,   529,   124,   125,   126,   127,   530,   555,
     124,   125,   126,   123,   595,   531,   532,   334,  -301,   614,
     128,   604,   629,   643,   353,   334,   334,   165,    54,   170,
     302,   171,   533,   173,   221,   222,   312,   534,   179,   127,
     181,   201,   223,   202,   220,   221,   222,   128,   203,   206,
     207,   208,   128,   223,   243,   209,   313,   250,   128,   124,
     125,   126,   247,   314,   315,   258,   114,   274,   615,   282,
      15,   316,   317,   295,   292,   296,   304,   297,   332,   335,
    -302,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   338,   221,   222,   339,   347,   350,   353,
     365,   373,   223,   360,   374,   375,   395,   128,   396,   318,
     319,   320,   321,   322,   397,    75,   323,   324,  -350,   325,
     326,   327,   328,   329,   330,     1,   331,   413,   444,   472,
     448,   424,   311,     2,   449,   416,   451,   466,   500,   471,
       3,   504,     1,   480,   481,     4,   483,   484,   485,   497,
       2,   498,   308,   503,   422,     5,   515,     3,     6,     7,
     518,   331,     4,   519,   521,   541,   536,   543,   545,   546,
       8,     9,     5,   548,   549,     6,     7,   550,   551,   312,
      10,   552,   554,    11,   553,   561,   575,     8,     9,   569,
     573,   577,   578,   579,   513,   580,   582,    10,   581,   414,
      11,   584,   585,   311,   596,    12,   608,   315,   587,    13,
     590,   591,   592,   600,   316,   317,   603,   610,   612,   376,
     619,   491,    12,   626,   644,    14,    13,   631,   105,    74,
     455,    15,   311,   377,   447,   337,   499,   378,   379,   380,
     381,   382,    14,   383,   525,   556,   465,   311,    15,   467,
     312,   384,   318,   319,   320,   321,   322,   402,   204,   323,
     324,   278,   325,   326,   327,   328,   329,   330,   205,   331,
     414,   280,   409,    16,    17,    18,   385,   598,   315,  -351,
     468,   606,   372,   586,   605,   316,   317,   356,   169,     0,
      16,    17,    18,     0,   386,     0,   387,   388,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   315,     0,     0,
       0,   389,     0,     0,   316,  -351,   390,     0,   391,     0,
       0,     0,   315,   318,   319,   320,   321,   322,   392,   316,
     323,   324,     0,   325,   326,   327,   328,   329,   330,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -351,  -351,  -351,   321,   322,     0,     0,   323,
     324,   393,   325,   326,   327,   328,   329,   330,     0,   331,
    -351,  -351,     0,     0,  -351,  -351,     0,   325,   326,   327,
     328,   329,   330,     0,   331
};

static const yytype_int16 yycheck[] =
{
       2,   211,   149,     5,    54,   175,   148,    81,    10,   304,
      12,   219,   182,   221,    57,    58,    59,   107,    97,    98,
       3,     3,     3,    12,   374,   155,     3,   112,   115,    51,
     115,     6,     6,   342,   181,     3,   183,   184,     5,     6,
     373,    58,    17,   493,    83,   395,    48,   203,    50,    78,
      12,   113,     3,     4,     5,     6,    94,   130,    60,     3,
       3,   116,   158,   159,    62,   116,   335,    55,   633,   136,
       9,   218,   151,     3,   116,    37,   223,   132,   347,   644,
      24,   132,   292,    85,    86,   158,   159,   125,     3,   536,
     132,    93,    54,    94,   302,    46,    47,    48,   100,   101,
     247,   197,   310,   153,   312,    49,    45,   402,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   473,   191,     3,   256,   201,   116,   424,
       3,   193,   133,   207,    85,   582,   134,    88,    27,   194,
     296,   103,    81,   194,   132,   595,    24,   497,   498,   178,
     297,   298,    98,   104,    58,   193,     9,   125,   197,    63,
     104,   308,   309,   161,   115,    19,     3,     4,     5,     6,
     121,    49,   505,   223,   172,   197,   193,   136,    94,   266,
      55,   266,   194,   150,   135,   197,   116,   169,   170,   171,
     165,   165,    45,   168,   168,   125,    94,    72,    90,   150,
     151,   152,   132,   186,   101,   194,    60,   209,    80,    46,
      47,    48,   193,   360,   422,   524,   193,   265,   365,   366,
     515,   351,   270,    76,   116,   117,   104,   104,    81,     0,
     189,   128,   191,    92,   185,   186,     3,     4,     5,     6,
     132,   331,   193,     3,   121,   295,   456,   198,    85,   136,
     192,    88,    70,   112,   104,   197,    70,    92,   608,   118,
     154,   335,    80,   410,   411,   109,    80,   104,   193,   116,
     195,   121,   116,   347,   196,   112,   626,   112,   125,    46,
      47,    48,   113,   118,   121,   132,   194,   109,   132,   197,
     585,    58,     3,   111,   116,   338,   375,   111,   135,   186,
     187,   188,   189,   193,   191,   513,     4,     5,     6,   116,
     132,   118,   195,   150,   151,   152,    94,   612,    85,   169,
     170,    88,   112,   173,   127,   132,   116,    26,   194,     3,
     332,   197,     3,     4,     5,     6,   123,   104,     4,     5,
       6,   127,   132,     3,     4,     5,     6,    97,   185,   186,
      48,   166,   167,   116,   121,   118,   193,   504,   133,   506,
     507,   198,   194,   413,   125,   197,   124,    66,   135,   132,
     194,   197,    71,   197,   424,    46,    47,    48,   194,    78,
      79,   197,     3,   150,   151,   152,    46,    47,    48,    26,
      88,     4,     3,     4,     5,     6,    95,   166,   167,   194,
      99,   100,   197,   162,   163,   164,   104,   138,   139,   140,
     141,   142,   143,   555,    85,    17,    18,    88,   185,   186,
     194,   568,    88,   197,   121,    85,   193,   597,    88,    66,
       3,   198,    17,   104,    71,    83,    47,    48,   104,   163,
     164,    78,    79,    26,   104,   194,   194,    93,   197,   197,
     121,   193,   150,   151,   152,     3,   194,   194,    95,   197,
     197,   121,    99,   100,   135,   515,    46,    47,   615,    54,
     617,    46,   194,   194,    85,   135,   197,    88,   194,   150,
     151,   152,     4,    66,   150,   151,   152,   185,    71,   491,
     150,   151,   152,   104,   194,    78,    79,   197,   197,    82,
     198,   194,   194,   194,   197,   197,   197,     3,   193,   193,
     121,     6,    95,    12,   185,   186,   101,   100,   115,   185,
     126,   193,   193,     4,   135,   185,   186,   198,     4,   194,
     197,    46,   198,   193,     3,   131,   121,    91,   198,   150,
     151,   152,   174,   128,   129,     3,    76,   119,   131,     3,
     113,   136,   137,   193,   125,   193,   191,   193,    98,   193,
     197,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    39,   185,   186,   193,   193,    94,   197,
      55,   125,   193,   197,   193,    93,   193,   198,   172,   174,
     175,   176,   177,   178,   172,    58,   181,   182,     0,   184,
     185,   186,   187,   188,   189,     7,   191,   193,     3,   161,
       4,   193,    54,    15,     4,   194,     4,     3,    77,   172,
      22,    94,     7,   193,   193,    27,   193,   193,   193,   193,
      15,   193,   116,   194,   101,    37,   193,    22,    40,    41,
     104,   191,    27,   192,     3,    69,   197,    62,   160,   194,
      52,    53,    37,     6,     6,    40,    41,     6,     6,   101,
      62,     6,   172,    65,   104,   193,     4,    52,    53,   194,
     194,   194,    99,    78,   116,    78,    99,    62,    78,   121,
      65,     3,   126,    54,   105,    87,   193,   129,   194,    91,
     194,   194,   194,   194,   136,   137,   194,     6,   126,    11,
     194,   173,    87,   193,   116,   107,    91,   194,    70,    24,
     349,   113,    54,    25,   339,   248,   399,    29,    30,    31,
      32,    33,   107,    35,   453,   493,   353,    54,   113,   360,
     101,    43,   174,   175,   176,   177,   178,   293,   127,   181,
     182,   201,   184,   185,   186,   187,   188,   189,   127,   191,
     121,   207,   299,   155,   156,   157,    68,   562,   129,   101,
     364,   578,   276,   544,   577,   136,   137,   264,   104,    -1,
     155,   156,   157,    -1,    86,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
      -1,   103,    -1,    -1,   136,   137,   108,    -1,   110,    -1,
      -1,    -1,   129,   174,   175,   176,   177,   178,   120,   136,
     181,   182,    -1,   184,   185,   186,   187,   188,   189,    -1,
     191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,   175,   176,   177,   178,    -1,    -1,   181,
     182,   153,   184,   185,   186,   187,   188,   189,    -1,   191,
     177,   178,    -1,    -1,   181,   182,    -1,   184,   185,   186,
     187,   188,   189,    -1,   191
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    27,    37,    40,    41,    52,    53,
      62,    65,    87,    91,   107,   113,   155,   156,   157,   200,
     201,   202,   203,   207,   209,   211,   212,   218,   219,   220,
     233,   235,   238,   239,   240,   242,   245,   325,   326,    27,
       3,   314,     3,     3,   314,    70,    80,   111,    94,    94,
      98,   313,   314,    80,   193,   248,   314,    70,    80,   111,
      19,    60,     3,   327,   328,   154,   208,   208,   208,     0,
     196,   332,   113,   204,   204,    58,   248,   249,   253,     3,
     195,   193,    94,   127,   221,   221,   221,   314,     3,   213,
     314,   123,   127,   234,   248,   249,   133,    94,   133,   234,
     234,   234,   314,   125,   197,   202,    97,   124,   265,     9,
      45,    81,   250,   251,    76,   250,   261,     3,     4,     5,
       6,    48,    88,   104,   150,   151,   152,   185,   198,   268,
     269,   270,   271,   299,   300,   301,   302,   303,   304,   305,
     306,   307,     4,   210,   121,     3,   315,   314,   314,    83,
     258,    93,   193,   241,     3,   243,   244,    46,   314,   194,
     194,     4,   214,   214,   214,     3,   314,   314,   248,   328,
     193,     6,   303,    12,   254,   246,   247,   248,   253,   115,
     252,   126,   246,    55,    72,   266,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   292,   293,
     294,   193,     4,     4,   302,   306,   194,   197,    46,   131,
      94,   125,   193,   241,     3,    46,    47,    48,    85,   121,
     135,   185,   186,   193,   273,   274,   275,   276,   277,   278,
     279,   280,   282,   283,   284,   290,   291,   295,   296,   297,
     298,   299,   214,     3,   333,    63,   249,   174,   197,   258,
      91,   236,   237,   113,   193,   215,   215,   215,     3,   205,
     206,   255,   267,   272,   273,   261,   250,   262,   263,   273,
     261,   273,   115,   273,   119,   320,   321,   322,   271,   292,
     270,   314,     3,   245,     3,   169,   170,   171,   222,   223,
     224,   231,   125,   193,   195,   193,   193,   193,   112,   273,
     281,    46,   121,   274,   191,   274,   249,   273,   116,   132,
      17,    54,   101,   121,   128,   129,   136,   137,   174,   175,
     176,   177,   178,   181,   182,   184,   185,   186,   187,   188,
     189,   191,    98,   194,   197,   193,   273,   244,    39,   193,
       3,    24,    49,   104,   216,   217,   258,   193,   194,   197,
      94,   256,   257,   197,     3,   125,   318,   319,   266,   246,
     197,    90,   117,   264,   266,    55,    55,    62,   134,   161,
     172,   323,   322,   125,   193,    93,    11,    25,    29,    30,
      31,    32,    33,    35,    43,    68,    86,    88,    89,   103,
     108,   110,   120,   153,   225,   193,   172,   172,   194,   197,
     245,   194,   254,     3,   186,   249,   292,   273,   273,   281,
      92,   112,   118,   193,   121,   267,   194,   194,   273,   273,
     274,   274,   101,   128,   193,   104,   121,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   303,   314,     3,   269,   234,   216,     4,     4,
     213,     4,   194,   197,   269,   206,   193,   308,   309,   310,
     311,   312,   314,   329,   258,   272,     3,   263,   320,   273,
     273,   172,   161,   130,   158,   159,   324,   225,   333,   214,
     193,   193,   227,   193,   193,   193,   226,   104,   121,   169,
     170,   173,   228,   229,   230,   232,   333,   193,   193,   223,
      77,   285,   267,   194,    94,   125,   109,    92,   118,   273,
     273,   249,   192,   116,   274,   193,   249,   267,   104,   192,
     194,     3,   194,    24,    49,   217,   194,   245,    26,    66,
      71,    78,    79,    95,   100,   330,   197,   125,   316,   317,
     318,    69,   259,    62,   333,   160,   194,   194,     6,     6,
       6,     6,     6,   104,   172,   314,   230,   232,   194,   333,
     333,   193,   194,   273,   225,   273,   273,   118,   109,   194,
     274,   249,   267,   194,   194,     4,   213,   194,    99,    78,
      78,    78,    99,   309,     3,   126,   324,   194,   194,   197,
     194,   194,   194,   241,   194,   194,   105,   286,   285,   194,
     194,   118,   273,   194,   194,   317,   310,   309,   193,   267,
       6,   232,   126,   261,    82,   131,   333,    51,   260,   194,
     267,   162,   163,   164,   287,   288,   193,   273,   331,   194,
     273,   194,     6,    17,   165,   168,   289,   333,   166,   167,
     289,   166,   167,   194,   116,   289
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   199,   200,   201,   201,   202,   202,   202,   202,   202,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   207,   208,
     208,   209,   210,   211,   211,   212,   212,   213,   214,   215,
     215,   215,   216,   216,   216,   216,   216,   216,   217,   217,
     218,   218,   219,   219,   219,   220,   220,   220,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   226,   226,   227,   227,   227,
     228,   228,   229,   229,   229,   229,   230,   230,   230,   230,
     231,   231,   231,   232,   233,   233,   233,   233,   234,   234,
     235,   236,   237,   238,   239,   240,   240,   241,   241,   242,
     243,   243,   244,   245,   245,   245,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   251,   251,   251,   252,   252,
     253,   254,   254,   255,   256,   256,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   262,   262,   263,   264,   264,
     264,   265,   265,   266,   266,   266,   266,   266,   266,   267,
     267,   268,   268,   269,   269,   270,   270,   271,   271,   271,
     272,   273,   273,   273,   273,   273,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   275,   275,   276,
     276,   276,   276,   276,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   278,   278,   279,   279,   279,
     279,   280,   280,   280,   280,   281,   281,   282,   282,   283,
     283,   283,   283,   283,   283,   283,   284,   284,   285,   285,
     286,   286,   287,   287,   287,   288,   288,   288,   289,   289,
     289,   289,   289,   290,   291,   292,   292,   292,   292,   292,
     292,   293,   293,   293,   293,   293,   293,   294,   294,   295,
     296,   297,   298,   298,   298,   298,   299,   299,   299,   299,
     299,   299,   299,   300,   301,   301,   302,   302,   303,   304,
     305,   306,   306,   306,   307,   308,   308,   309,   309,   310,
     310,   311,   311,   312,   313,   314,   314,   315,   315,   316,
     316,   317,   317,   318,   318,   319,   319,   320,   320,   321,
     321,   322,   322,   323,   323,   323,   323,   324,   324,   324,
     325,   325,   326,   327,   327,   328,   329,   329,   329,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   331,
     332,   332,   333,   333
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     6,     1,     1,     4,
       3,     0,     4,     2,     4,     2,     3,     1,     2,     2,
       5,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     1,     4,
       4,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     4,     3,     0,     5,     3,     0,
       1,     0,     1,     2,     1,     2,     2,     1,     1,     2,
       5,     4,     6,     3,     4,     4,     3,     4,     2,     0,
       5,     1,     4,     4,     2,     8,     5,     3,     0,     5,
       1,     3,     3,     2,     2,     6,     1,     1,     1,     3,
       3,     3,     4,     6,     2,     1,     1,     1,     1,     0,
       7,     1,     0,     1,     1,     0,     2,     2,     0,     4,
       0,     2,     0,     3,     0,     1,     3,     2,     1,     1,
       0,     2,     0,     2,     2,     4,     2,     4,     0,     1,
       3,     1,     0,     1,     3,     1,     6,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     5,     6,     5,
       6,     4,     6,     3,     5,     4,     5,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     4,     6,     6,     0,
       3,     0,     2,     5,     0,     1,     1,     1,     2,     2,
       2,     2,     1,     6,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     1,     1,     3,     1,     1,     1,
       4,     1,     3,     2,     1,     1,     3,     1,     0,     1,
       5,     1,     0,     2,     1,     1,     0,     1,     0,     1,
       2,     3,     5,     1,     3,     1,     2,     2,     1,     0,
       1,     0,     2,     1,     3,     3,     4,     6,     8,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     0,     1,
       1,     0,     1,     3
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
#line 193 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2094 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 193 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2100 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 180 "bison_parser.y"
            { }
#line 2106 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 180 "bison_parser.y"
            { }
#line 2112 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2125 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2131 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2137 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2150 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2163 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2169 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2175 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2181 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 193 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2187 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2193 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2199 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 180 "bison_parser.y"
            { }
#line 2205 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 193 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2211 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_import_export_options: /* opt_import_export_options  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2217 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_export_options: /* import_export_options  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2223 "bison_parser.cpp"
        break;

    case YYSYMBOL_csv_option: /* csv_option  */
#line 202 "bison_parser.y"
            { free(((*yyvaluep).csv_option_t)->second); delete (((*yyvaluep).csv_option_t)); }
#line 2229 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2235 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2241 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2247 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 180 "bison_parser.y"
            { }
#line 2253 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2266 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2272 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2278 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 180 "bison_parser.y"
            { }
#line 2284 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 180 "bison_parser.y"
            { }
#line 2290 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2296 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2302 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraints: /* column_constraints  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2308 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 180 "bison_parser.y"
            { }
#line 2314 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2320 "bison_parser.cpp"
        break;

    case YYSYMBOL_references_spec: /* references_spec  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).references_spec_t)); }
#line 2326 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2332 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 180 "bison_parser.y"
            { }
#line 2338 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2344 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2350 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2356 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2362 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2368 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2374 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2387 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2393 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2406 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2412 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2418 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2424 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2430 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2436 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2442 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2448 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2454 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 180 "bison_parser.y"
            { }
#line 2460 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2466 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 180 "bison_parser.y"
            { }
#line 2472 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2485 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2491 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2497 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2503 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2509 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2515 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2528 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2541 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2547 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 180 "bison_parser.y"
            { }
#line 2553 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2559 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2565 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2578 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_extended_literal_list: /* opt_extended_literal_list  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2591 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal_list: /* extended_literal_list  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2604 "bison_parser.cpp"
        break;

    case YYSYMBOL_casted_extended_literal: /* casted_extended_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2610 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal: /* extended_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2616 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2622 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2628 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2634 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2640 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2646 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2652 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2658 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2664 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2670 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2676 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2682 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2688 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2694 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2700 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2713 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2719 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 180 "bison_parser.y"
            { }
#line 2725 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2731 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2737 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2743 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 180 "bison_parser.y"
            { }
#line 2749 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 180 "bison_parser.y"
            { }
#line 2755 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 180 "bison_parser.y"
            { }
#line 2761 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2767 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2773 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2779 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2785 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2791 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2797 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2803 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2809 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2815 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2821 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2827 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2833 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2839 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2845 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2851 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2857 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 194 "bison_parser.y"
            {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2870 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2876 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2882 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 181 "bison_parser.y"
            {
  free(((*yyvaluep).table_name).name);
  free(((*yyvaluep).table_name).schema);
}
#line 2891 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 193 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2897 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2903 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2909 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2915 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2921 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2927 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2933 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 2939 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 180 "bison_parser.y"
            { }
#line 2945 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 180 "bison_parser.y"
            { }
#line 2951 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2957 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2963 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2969 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2975 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2981 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 180 "bison_parser.y"
            { }
#line 2987 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 203 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2993 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 185 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 3006 "bison_parser.cpp"
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

#line 3114 "bison_parser.cpp"

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
#line 338 "bison_parser.y"
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
#line 3343 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 357 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3354 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 363 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3365 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 370 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3374 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 374 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3383 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 378 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3389 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 379 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3395 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 380 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3401 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 382 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3407 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 383 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3413 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 384 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3419 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 385 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3425 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 386 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3431 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 387 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3437 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 388 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3443 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 389 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3449 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 390 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3455 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 391 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3461 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 397 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3467 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 398 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3473 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 400 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3482 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 404 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3491 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 409 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3500 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' extended_literal_list ')'  */
#line 413 "bison_parser.y"
                                           {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3510 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 423 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3516 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 424 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3522 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 425 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3528 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 433 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3538 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 441 "bison_parser.y"
                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3547 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_extended_literal_list ')'  */
#line 445 "bison_parser.y"
                                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3557 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 457 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3568 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_import_export_options opt_where  */
#line 463 "bison_parser.y"
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
  if ((yyvsp[-1].import_export_option_t)->csv_options) {
    (yyval.import_stmt)->csv_options = (yyvsp[-1].import_export_option_t)->csv_options;
    (yyvsp[-1].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[-1].import_export_option_t);
}
#line 3589 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 480 "bison_parser.y"
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
#line 3608 "bison_parser.cpp"
    break;

  case 38: /* file_path: STRING  */
#line 495 "bison_parser.y"
                   { (yyval.sval) = (yyvsp[0].sval); }
#line 3614 "bison_parser.cpp"
    break;

  case 39: /* opt_import_export_options: WITH '(' import_export_options ')'  */
#line 497 "bison_parser.y"
                                                               { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3620 "bison_parser.cpp"
    break;

  case 40: /* opt_import_export_options: '(' import_export_options ')'  */
#line 498 "bison_parser.y"
                                { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3626 "bison_parser.cpp"
    break;

  case 41: /* opt_import_export_options: %empty  */
#line 499 "bison_parser.y"
              { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3632 "bison_parser.cpp"
    break;

  case 42: /* import_export_options: import_export_options ',' FORMAT file_type  */
#line 501 "bison_parser.y"
                                                                   {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  if ((yyvsp[-3].import_export_option_t)->csv_options && (yyvsp[0].import_type_t) != kImportCSV && (yyvsp[0].import_type_t) != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) are only allowed for CSV files.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3651 "bison_parser.cpp"
    break;

  case 43: /* import_export_options: FORMAT file_type  */
#line 515 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3660 "bison_parser.cpp"
    break;

  case 44: /* import_export_options: import_export_options ',' ENCODING STRING  */
#line 519 "bison_parser.y"
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
#line 3675 "bison_parser.cpp"
    break;

  case 45: /* import_export_options: ENCODING STRING  */
#line 529 "bison_parser.y"
                  {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3684 "bison_parser.cpp"
    break;

  case 46: /* import_export_options: import_export_options ',' csv_option  */
#line 533 "bison_parser.y"
                                       {
  if ((yyvsp[-2].import_export_option_t)->format != kImportAuto && (yyvsp[-2].import_export_option_t)->format != kImportCSV) {
    delete (yyvsp[-2].import_export_option_t);
    free((yyvsp[0].csv_option_t)->second);
    delete (yyvsp[0].csv_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) are only allowed for CSV files.");
    YYERROR;
  }

  if ((yyvsp[-2].import_export_option_t)->csv_options == nullptr) {
    (yyvsp[-2].import_export_option_t)->csv_options = new CsvOptions{};
  }

  bool freed_ptr = false;
  auto free_if_necessary = [&](char* ptr) {
    if (ptr != nullptr) {
      free(ptr);
      freed_ptr = true;
    }
  };

  switch ((yyvsp[0].csv_option_t)->first) {
    case CsvOptionType::Delimiter:
      free_if_necessary((yyvsp[-2].import_export_option_t)->csv_options->delimiter);
      (yyvsp[-2].import_export_option_t)->csv_options->delimiter = (yyvsp[0].csv_option_t)->second;
      break;
    case CsvOptionType::Null:
      free_if_necessary((yyvsp[-2].import_export_option_t)->csv_options->null);
      (yyvsp[-2].import_export_option_t)->csv_options->null = (yyvsp[0].csv_option_t)->second;
      break;
    case CsvOptionType::Quote:
      free_if_necessary((yyvsp[-2].import_export_option_t)->csv_options->quote);
      (yyvsp[-2].import_export_option_t)->csv_options->quote = (yyvsp[0].csv_option_t)->second;
      break;
    default:
      free((yyvsp[0].csv_option_t)->second);
      delete (yyvsp[0].csv_option_t);
      delete (yyvsp[-2].import_export_option_t);
      yyerror(&yyloc, result, scanner, "Unknown CSV option.");
      YYERROR;
  }
  delete (yyvsp[0].csv_option_t);

  if (freed_ptr) {
    delete (yyvsp[-2].import_export_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) cannot be provided more than once.");
    YYERROR;
  }

  (yyval.import_export_option_t) = (yyvsp[-2].import_export_option_t);
}
#line 3740 "bison_parser.cpp"
    break;

  case 47: /* import_export_options: csv_option  */
#line 584 "bison_parser.y"
             {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->csv_options = new CsvOptions{};

  switch ((yyvsp[0].csv_option_t)->first) {
    case CsvOptionType::Delimiter:
      (yyval.import_export_option_t)->csv_options->delimiter = (yyvsp[0].csv_option_t)->second;
      break;
    case CsvOptionType::Null:
      (yyval.import_export_option_t)->csv_options->null = (yyvsp[0].csv_option_t)->second;
      break;
    case CsvOptionType::Quote:
      (yyval.import_export_option_t)->csv_options->quote = (yyvsp[0].csv_option_t)->second;
      break;
    default:
      free((yyvsp[0].csv_option_t)->second);
      delete (yyvsp[0].csv_option_t);
      delete (yyval.import_export_option_t);
      yyerror(&yyloc, result, scanner, "Unknown CSV option.");
      YYERROR;
  }

  delete (yyvsp[0].csv_option_t);
}
#line 3769 "bison_parser.cpp"
    break;

  case 48: /* csv_option: IDENTIFIER STRING  */
#line 609 "bison_parser.y"
                               {
  if (strcasecmp((yyvsp[-1].sval), "DELIMITER") == 0) {
    (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Delimiter, (yyvsp[0].sval));
  } else if (strcasecmp((yyvsp[-1].sval), "QUOTE") == 0) {
    (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Quote, (yyvsp[0].sval));
  } else {
    free((yyvsp[-1].sval));
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Unknown CSV option.");
    YYERROR;
  }
  free((yyvsp[-1].sval));
}
#line 3787 "bison_parser.cpp"
    break;

  case 49: /* csv_option: NULL STRING  */
#line 622 "bison_parser.y"
              { (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Null, (yyvsp[0].sval)); }
#line 3793 "bison_parser.cpp"
    break;

  case 50: /* export_statement: COPY table_name TO file_path opt_import_export_options  */
#line 629 "bison_parser.y"
                                                                          {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->csv_options) {
    (yyval.export_stmt)->csv_options = (yyvsp[0].import_export_option_t)->csv_options;
    (yyvsp[0].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3813 "bison_parser.cpp"
    break;

  case 51: /* export_statement: COPY select_with_paren TO file_path opt_import_export_options  */
#line 644 "bison_parser.y"
                                                                {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->csv_options) {
    (yyval.export_stmt)->csv_options = (yyvsp[0].import_export_option_t)->csv_options;
    (yyvsp[0].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3832 "bison_parser.cpp"
    break;

  case 52: /* show_statement: SHOW TABLES  */
#line 664 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3838 "bison_parser.cpp"
    break;

  case 53: /* show_statement: SHOW COLUMNS table_name  */
#line 665 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3848 "bison_parser.cpp"
    break;

  case 54: /* show_statement: DESCRIBE table_name  */
#line 670 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3858 "bison_parser.cpp"
    break;

  case 55: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 681 "bison_parser.y"
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
#line 3876 "bison_parser.cpp"
    break;

  case 56: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 694 "bison_parser.y"
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
#line 3893 "bison_parser.cpp"
    break;

  case 57: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 706 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3905 "bison_parser.cpp"
    break;

  case 58: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 713 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3917 "bison_parser.cpp"
    break;

  case 59: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 720 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3930 "bison_parser.cpp"
    break;

  case 60: /* opt_not_exists: IF NOT EXISTS  */
#line 729 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3936 "bison_parser.cpp"
    break;

  case 61: /* opt_not_exists: %empty  */
#line 730 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3942 "bison_parser.cpp"
    break;

  case 62: /* table_elem_commalist: table_elem  */
#line 732 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3951 "bison_parser.cpp"
    break;

  case 63: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 736 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3960 "bison_parser.cpp"
    break;

  case 64: /* table_elem: column_def  */
#line 741 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3966 "bison_parser.cpp"
    break;

  case 65: /* table_elem: table_constraint  */
#line 742 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3972 "bison_parser.cpp"
    break;

  case 66: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 744 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraints_t)->constraints, (yyvsp[0].column_constraints_t)->references);
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
  delete (yyvsp[0].column_constraints_t);
}
#line 3984 "bison_parser.cpp"
    break;

  case 67: /* column_type: BIGINT  */
#line 752 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3990 "bison_parser.cpp"
    break;

  case 68: /* column_type: BOOLEAN  */
#line 753 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3996 "bison_parser.cpp"
    break;

  case 69: /* column_type: CHAR '(' INTVAL ')'  */
#line 754 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 4002 "bison_parser.cpp"
    break;

  case 70: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 755 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4008 "bison_parser.cpp"
    break;

  case 71: /* column_type: DATE  */
#line 756 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 4014 "bison_parser.cpp"
    break;

  case 72: /* column_type: DATETIME  */
#line 757 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4020 "bison_parser.cpp"
    break;

  case 73: /* column_type: DECIMAL opt_decimal_specification  */
#line 758 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 4029 "bison_parser.cpp"
    break;

  case 74: /* column_type: DOUBLE  */
#line 762 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 4035 "bison_parser.cpp"
    break;

  case 75: /* column_type: FLOAT  */
#line 763 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 4041 "bison_parser.cpp"
    break;

  case 76: /* column_type: INT  */
#line 764 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4047 "bison_parser.cpp"
    break;

  case 77: /* column_type: INTEGER  */
#line 765 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 4053 "bison_parser.cpp"
    break;

  case 78: /* column_type: LONG  */
#line 766 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 4059 "bison_parser.cpp"
    break;

  case 79: /* column_type: REAL  */
#line 767 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 4065 "bison_parser.cpp"
    break;

  case 80: /* column_type: SMALLINT  */
#line 768 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 4071 "bison_parser.cpp"
    break;

  case 81: /* column_type: TEXT  */
#line 769 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 4077 "bison_parser.cpp"
    break;

  case 82: /* column_type: TIME opt_time_precision  */
#line 770 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 4083 "bison_parser.cpp"
    break;

  case 83: /* column_type: TIMESTAMP  */
#line 771 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 4089 "bison_parser.cpp"
    break;

  case 84: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 772 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4095 "bison_parser.cpp"
    break;

  case 85: /* opt_time_precision: '(' INTVAL ')'  */
#line 774 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 4101 "bison_parser.cpp"
    break;

  case 86: /* opt_time_precision: %empty  */
#line 775 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 4107 "bison_parser.cpp"
    break;

  case 87: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 777 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4113 "bison_parser.cpp"
    break;

  case 88: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 778 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4119 "bison_parser.cpp"
    break;

  case 89: /* opt_decimal_specification: %empty  */
#line 779 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4125 "bison_parser.cpp"
    break;

  case 90: /* opt_column_constraints: column_constraints  */
#line 781 "bison_parser.y"
                                            { (yyval.column_constraints_t) = (yyvsp[0].column_constraints_t); }
#line 4131 "bison_parser.cpp"
    break;

  case 91: /* opt_column_constraints: %empty  */
#line 782 "bison_parser.y"
              { (yyval.column_constraints_t) = new ColumnConstraints(); }
#line 4137 "bison_parser.cpp"
    break;

  case 92: /* column_constraints: column_constraint  */
#line 784 "bison_parser.y"
                                       {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
}
#line 4146 "bison_parser.cpp"
    break;

  case 93: /* column_constraints: column_constraints column_constraint  */
#line 788 "bison_parser.y"
                                       {
  (yyvsp[-1].column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4155 "bison_parser.cpp"
    break;

  case 94: /* column_constraints: references_spec  */
#line 792 "bison_parser.y"
                  {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyval.column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
}
#line 4165 "bison_parser.cpp"
    break;

  case 95: /* column_constraints: column_constraints references_spec  */
#line 797 "bison_parser.y"
                                     {
  // Multiple foreign keys for the same column could be possible, so we do not raise an error in that case.
  // Think of foreign keys referenced on multiple levels (returned item references sold item references items).
  (yyvsp[-1].column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyvsp[-1].column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4177 "bison_parser.cpp"
    break;

  case 96: /* column_constraint: PRIMARY KEY  */
#line 805 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4183 "bison_parser.cpp"
    break;

  case 97: /* column_constraint: UNIQUE  */
#line 806 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4189 "bison_parser.cpp"
    break;

  case 98: /* column_constraint: NULL  */
#line 807 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4195 "bison_parser.cpp"
    break;

  case 99: /* column_constraint: NOT NULL  */
#line 808 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4201 "bison_parser.cpp"
    break;

  case 100: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 810 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4207 "bison_parser.cpp"
    break;

  case 101: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 811 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4213 "bison_parser.cpp"
    break;

  case 102: /* table_constraint: FOREIGN KEY '(' ident_commalist ')' references_spec  */
#line 812 "bison_parser.y"
                                                      { (yyval.table_constraint_t) = new ForeignKeyConstraint((yyvsp[-2].str_vec), (yyvsp[0].references_spec_t)); }
#line 4219 "bison_parser.cpp"
    break;

  case 103: /* references_spec: REFERENCES table_name opt_column_list  */
#line 814 "bison_parser.y"
                                                        { (yyval.references_spec_t) = new ReferencesSpecification((yyvsp[-1].table_name).schema, (yyvsp[-1].table_name).name, (yyvsp[0].str_vec)); }
#line 4225 "bison_parser.cpp"
    break;

  case 104: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 822 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4236 "bison_parser.cpp"
    break;

  case 105: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 828 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4247 "bison_parser.cpp"
    break;

  case 106: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 834 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4257 "bison_parser.cpp"
    break;

  case 107: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 840 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4267 "bison_parser.cpp"
    break;

  case 108: /* opt_exists: IF EXISTS  */
#line 846 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4273 "bison_parser.cpp"
    break;

  case 109: /* opt_exists: %empty  */
#line 847 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4279 "bison_parser.cpp"
    break;

  case 110: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 854 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4289 "bison_parser.cpp"
    break;

  case 111: /* alter_action: drop_action  */
#line 860 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4295 "bison_parser.cpp"
    break;

  case 112: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 862 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4304 "bison_parser.cpp"
    break;

  case 113: /* delete_statement: DELETE FROM table_name opt_where  */
#line 872 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4315 "bison_parser.cpp"
    break;

  case 114: /* truncate_statement: TRUNCATE table_name  */
#line 879 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4325 "bison_parser.cpp"
    break;

  case 115: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' extended_literal_list ')'  */
#line 890 "bison_parser.y"
                                                                                               {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4337 "bison_parser.cpp"
    break;

  case 116: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 897 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4349 "bison_parser.cpp"
    break;

  case 117: /* opt_column_list: '(' ident_commalist ')'  */
#line 905 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4355 "bison_parser.cpp"
    break;

  case 118: /* opt_column_list: %empty  */
#line 906 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4361 "bison_parser.cpp"
    break;

  case 119: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 913 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4372 "bison_parser.cpp"
    break;

  case 120: /* update_clause_commalist: update_clause  */
#line 920 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4381 "bison_parser.cpp"
    break;

  case 121: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 924 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4390 "bison_parser.cpp"
    break;

  case 122: /* update_clause: IDENTIFIER '=' expr  */
#line 929 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4400 "bison_parser.cpp"
    break;

  case 123: /* select_statement: opt_with_clause select_with_paren  */
#line 939 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4409 "bison_parser.cpp"
    break;

  case 124: /* select_statement: opt_with_clause select_no_paren  */
#line 943 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4418 "bison_parser.cpp"
    break;

  case 125: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 947 "bison_parser.y"
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
#line 4434 "bison_parser.cpp"
    break;

  case 128: /* select_within_set_operation_no_parentheses: select_clause  */
#line 961 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4440 "bison_parser.cpp"
    break;

  case 129: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 962 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4453 "bison_parser.cpp"
    break;

  case 130: /* select_with_paren: '(' select_no_paren ')'  */
#line 971 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4459 "bison_parser.cpp"
    break;

  case 131: /* select_with_paren: '(' select_with_paren ')'  */
#line 972 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4465 "bison_parser.cpp"
    break;

  case 132: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 974 "bison_parser.y"
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
#line 4484 "bison_parser.cpp"
    break;

  case 133: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 988 "bison_parser.y"
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
#line 4500 "bison_parser.cpp"
    break;

  case 134: /* set_operator: set_type opt_all  */
#line 1000 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4509 "bison_parser.cpp"
    break;

  case 135: /* set_type: UNION  */
#line 1005 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4518 "bison_parser.cpp"
    break;

  case 136: /* set_type: INTERSECT  */
#line 1009 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4527 "bison_parser.cpp"
    break;

  case 137: /* set_type: EXCEPT  */
#line 1013 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4536 "bison_parser.cpp"
    break;

  case 138: /* opt_all: ALL  */
#line 1018 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4542 "bison_parser.cpp"
    break;

  case 139: /* opt_all: %empty  */
#line 1019 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4548 "bison_parser.cpp"
    break;

  case 140: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 1021 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4562 "bison_parser.cpp"
    break;

  case 141: /* opt_distinct: DISTINCT  */
#line 1031 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4568 "bison_parser.cpp"
    break;

  case 142: /* opt_distinct: %empty  */
#line 1032 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4574 "bison_parser.cpp"
    break;

  case 144: /* opt_from_clause: from_clause  */
#line 1036 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4580 "bison_parser.cpp"
    break;

  case 145: /* opt_from_clause: %empty  */
#line 1037 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4586 "bison_parser.cpp"
    break;

  case 146: /* from_clause: FROM table_ref  */
#line 1039 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4592 "bison_parser.cpp"
    break;

  case 147: /* opt_where: WHERE expr  */
#line 1041 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4598 "bison_parser.cpp"
    break;

  case 148: /* opt_where: %empty  */
#line 1042 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4604 "bison_parser.cpp"
    break;

  case 149: /* opt_group: GROUP BY expr_list opt_having  */
#line 1044 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4614 "bison_parser.cpp"
    break;

  case 150: /* opt_group: %empty  */
#line 1049 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4620 "bison_parser.cpp"
    break;

  case 151: /* opt_having: HAVING expr  */
#line 1051 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4626 "bison_parser.cpp"
    break;

  case 152: /* opt_having: %empty  */
#line 1052 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4632 "bison_parser.cpp"
    break;

  case 153: /* opt_order: ORDER BY order_list  */
#line 1054 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4638 "bison_parser.cpp"
    break;

  case 154: /* opt_order: %empty  */
#line 1055 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4644 "bison_parser.cpp"
    break;

  case 155: /* order_list: order_desc  */
#line 1057 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4653 "bison_parser.cpp"
    break;

  case 156: /* order_list: order_list ',' order_desc  */
#line 1061 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4662 "bison_parser.cpp"
    break;

  case 157: /* order_desc: expr opt_order_type  */
#line 1066 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4668 "bison_parser.cpp"
    break;

  case 158: /* opt_order_type: ASC  */
#line 1068 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4674 "bison_parser.cpp"
    break;

  case 159: /* opt_order_type: DESC  */
#line 1069 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4680 "bison_parser.cpp"
    break;

  case 160: /* opt_order_type: %empty  */
#line 1070 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4686 "bison_parser.cpp"
    break;

  case 161: /* opt_top: TOP int_literal  */
#line 1074 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4692 "bison_parser.cpp"
    break;

  case 162: /* opt_top: %empty  */
#line 1075 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4698 "bison_parser.cpp"
    break;

  case 163: /* opt_limit: LIMIT expr  */
#line 1077 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4704 "bison_parser.cpp"
    break;

  case 164: /* opt_limit: OFFSET expr  */
#line 1078 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4710 "bison_parser.cpp"
    break;

  case 165: /* opt_limit: LIMIT expr OFFSET expr  */
#line 1079 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4716 "bison_parser.cpp"
    break;

  case 166: /* opt_limit: LIMIT ALL  */
#line 1080 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4722 "bison_parser.cpp"
    break;

  case 167: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 1081 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4728 "bison_parser.cpp"
    break;

  case 168: /* opt_limit: %empty  */
#line 1082 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4734 "bison_parser.cpp"
    break;

  case 169: /* expr_list: expr_alias  */
#line 1087 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4743 "bison_parser.cpp"
    break;

  case 170: /* expr_list: expr_list ',' expr_alias  */
#line 1091 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4752 "bison_parser.cpp"
    break;

  case 171: /* opt_extended_literal_list: extended_literal_list  */
#line 1097 "bison_parser.y"
                                                  { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4758 "bison_parser.cpp"
    break;

  case 172: /* opt_extended_literal_list: %empty  */
#line 1098 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4764 "bison_parser.cpp"
    break;

  case 173: /* extended_literal_list: casted_extended_literal  */
#line 1100 "bison_parser.y"
                                                {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4773 "bison_parser.cpp"
    break;

  case 174: /* extended_literal_list: extended_literal_list ',' casted_extended_literal  */
#line 1104 "bison_parser.y"
                                                    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4782 "bison_parser.cpp"
    break;

  case 176: /* casted_extended_literal: CAST '(' extended_literal AS column_type ')'  */
#line 1109 "bison_parser.y"
                                                                                          {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4790 "bison_parser.cpp"
    break;

  case 177: /* extended_literal: literal  */
#line 1113 "bison_parser.y"
                           {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4803 "bison_parser.cpp"
    break;

  case 178: /* extended_literal: '-' num_literal  */
#line 1121 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4809 "bison_parser.cpp"
    break;

  case 179: /* extended_literal: '-' interval_literal  */
#line 1122 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4815 "bison_parser.cpp"
    break;

  case 180: /* expr_alias: expr opt_alias  */
#line 1124 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4828 "bison_parser.cpp"
    break;

  case 186: /* operand: '(' expr ')'  */
#line 1135 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4834 "bison_parser.cpp"
    break;

  case 196: /* operand: '(' select_no_paren ')'  */
#line 1137 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4842 "bison_parser.cpp"
    break;

  case 199: /* unary_expr: '-' operand  */
#line 1143 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4848 "bison_parser.cpp"
    break;

  case 200: /* unary_expr: NOT operand  */
#line 1144 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4854 "bison_parser.cpp"
    break;

  case 201: /* unary_expr: operand ISNULL  */
#line 1145 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4860 "bison_parser.cpp"
    break;

  case 202: /* unary_expr: operand IS NULL  */
#line 1146 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4866 "bison_parser.cpp"
    break;

  case 203: /* unary_expr: operand IS NOT NULL  */
#line 1147 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4872 "bison_parser.cpp"
    break;

  case 205: /* binary_expr: operand '-' operand  */
#line 1149 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4878 "bison_parser.cpp"
    break;

  case 206: /* binary_expr: operand '+' operand  */
#line 1150 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4884 "bison_parser.cpp"
    break;

  case 207: /* binary_expr: operand '/' operand  */
#line 1151 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4890 "bison_parser.cpp"
    break;

  case 208: /* binary_expr: operand '*' operand  */
#line 1152 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4896 "bison_parser.cpp"
    break;

  case 209: /* binary_expr: operand '%' operand  */
#line 1153 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4902 "bison_parser.cpp"
    break;

  case 210: /* binary_expr: operand '^' operand  */
#line 1154 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4908 "bison_parser.cpp"
    break;

  case 211: /* binary_expr: operand LIKE operand  */
#line 1155 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4914 "bison_parser.cpp"
    break;

  case 212: /* binary_expr: operand NOT LIKE operand  */
#line 1156 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4920 "bison_parser.cpp"
    break;

  case 213: /* binary_expr: operand ILIKE operand  */
#line 1157 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4926 "bison_parser.cpp"
    break;

  case 214: /* binary_expr: operand CONCAT operand  */
#line 1158 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4932 "bison_parser.cpp"
    break;

  case 215: /* logic_expr: expr AND expr  */
#line 1160 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4938 "bison_parser.cpp"
    break;

  case 216: /* logic_expr: expr OR expr  */
#line 1161 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4944 "bison_parser.cpp"
    break;

  case 217: /* in_expr: operand IN '(' expr_list ')'  */
#line 1163 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4950 "bison_parser.cpp"
    break;

  case 218: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1164 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4956 "bison_parser.cpp"
    break;

  case 219: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1165 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4962 "bison_parser.cpp"
    break;

  case 220: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1166 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4968 "bison_parser.cpp"
    break;

  case 221: /* case_expr: CASE expr case_list END  */
#line 1170 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4974 "bison_parser.cpp"
    break;

  case 222: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1171 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4980 "bison_parser.cpp"
    break;

  case 223: /* case_expr: CASE case_list END  */
#line 1172 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4986 "bison_parser.cpp"
    break;

  case 224: /* case_expr: CASE case_list ELSE expr END  */
#line 1173 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4992 "bison_parser.cpp"
    break;

  case 225: /* case_list: WHEN expr THEN expr  */
#line 1175 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4998 "bison_parser.cpp"
    break;

  case 226: /* case_list: case_list WHEN expr THEN expr  */
#line 1176 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5004 "bison_parser.cpp"
    break;

  case 227: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1178 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 5010 "bison_parser.cpp"
    break;

  case 228: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1179 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 5016 "bison_parser.cpp"
    break;

  case 229: /* comp_expr: operand '=' operand  */
#line 1181 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5022 "bison_parser.cpp"
    break;

  case 230: /* comp_expr: operand EQUALS operand  */
#line 1182 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5028 "bison_parser.cpp"
    break;

  case 231: /* comp_expr: operand NOTEQUALS operand  */
#line 1183 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 5034 "bison_parser.cpp"
    break;

  case 232: /* comp_expr: operand '<' operand  */
#line 1184 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 5040 "bison_parser.cpp"
    break;

  case 233: /* comp_expr: operand '>' operand  */
#line 1185 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 5046 "bison_parser.cpp"
    break;

  case 234: /* comp_expr: operand LESSEQ operand  */
#line 1186 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 5052 "bison_parser.cpp"
    break;

  case 235: /* comp_expr: operand GREATEREQ operand  */
#line 1187 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 5058 "bison_parser.cpp"
    break;

  case 236: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1191 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5064 "bison_parser.cpp"
    break;

  case 237: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1192 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5070 "bison_parser.cpp"
    break;

  case 238: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1196 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 5076 "bison_parser.cpp"
    break;

  case 239: /* opt_window: %empty  */
#line 1197 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 5082 "bison_parser.cpp"
    break;

  case 240: /* opt_partition: PARTITION BY expr_list  */
#line 1199 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 5088 "bison_parser.cpp"
    break;

  case 241: /* opt_partition: %empty  */
#line 1200 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 5094 "bison_parser.cpp"
    break;

  case 242: /* opt_frame_clause: frame_type frame_bound  */
#line 1205 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 5100 "bison_parser.cpp"
    break;

  case 243: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1206 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 5106 "bison_parser.cpp"
    break;

  case 244: /* opt_frame_clause: %empty  */
#line 1207 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 5114 "bison_parser.cpp"
    break;

  case 245: /* frame_type: RANGE  */
#line 1211 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 5120 "bison_parser.cpp"
    break;

  case 246: /* frame_type: ROWS  */
#line 1212 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 5126 "bison_parser.cpp"
    break;

  case 247: /* frame_type: GROUPS  */
#line 1213 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 5132 "bison_parser.cpp"
    break;

  case 248: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1215 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5138 "bison_parser.cpp"
    break;

  case 249: /* frame_bound: INTVAL PRECEDING  */
#line 1216 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5144 "bison_parser.cpp"
    break;

  case 250: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1217 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5150 "bison_parser.cpp"
    break;

  case 251: /* frame_bound: INTVAL FOLLOWING  */
#line 1218 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5156 "bison_parser.cpp"
    break;

  case 252: /* frame_bound: CURRENT_ROW  */
#line 1219 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5162 "bison_parser.cpp"
    break;

  case 253: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1221 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5168 "bison_parser.cpp"
    break;

  case 254: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1223 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5174 "bison_parser.cpp"
    break;

  case 255: /* datetime_field: SECOND  */
#line 1225 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5180 "bison_parser.cpp"
    break;

  case 256: /* datetime_field: MINUTE  */
#line 1226 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5186 "bison_parser.cpp"
    break;

  case 257: /* datetime_field: HOUR  */
#line 1227 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5192 "bison_parser.cpp"
    break;

  case 258: /* datetime_field: DAY  */
#line 1228 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5198 "bison_parser.cpp"
    break;

  case 259: /* datetime_field: MONTH  */
#line 1229 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5204 "bison_parser.cpp"
    break;

  case 260: /* datetime_field: YEAR  */
#line 1230 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5210 "bison_parser.cpp"
    break;

  case 261: /* datetime_field_plural: SECONDS  */
#line 1232 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5216 "bison_parser.cpp"
    break;

  case 262: /* datetime_field_plural: MINUTES  */
#line 1233 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5222 "bison_parser.cpp"
    break;

  case 263: /* datetime_field_plural: HOURS  */
#line 1234 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5228 "bison_parser.cpp"
    break;

  case 264: /* datetime_field_plural: DAYS  */
#line 1235 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5234 "bison_parser.cpp"
    break;

  case 265: /* datetime_field_plural: MONTHS  */
#line 1236 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5240 "bison_parser.cpp"
    break;

  case 266: /* datetime_field_plural: YEARS  */
#line 1237 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5246 "bison_parser.cpp"
    break;

  case 269: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1241 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5252 "bison_parser.cpp"
    break;

  case 270: /* array_index: operand '[' int_literal ']'  */
#line 1243 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5258 "bison_parser.cpp"
    break;

  case 271: /* between_expr: operand BETWEEN operand AND operand  */
#line 1245 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5264 "bison_parser.cpp"
    break;

  case 272: /* column_name: IDENTIFIER  */
#line 1247 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5270 "bison_parser.cpp"
    break;

  case 273: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1248 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5276 "bison_parser.cpp"
    break;

  case 274: /* column_name: '*'  */
#line 1249 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5282 "bison_parser.cpp"
    break;

  case 275: /* column_name: IDENTIFIER '.' '*'  */
#line 1250 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5288 "bison_parser.cpp"
    break;

  case 283: /* string_literal: STRING  */
#line 1254 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5294 "bison_parser.cpp"
    break;

  case 284: /* bool_literal: TRUE  */
#line 1256 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5300 "bison_parser.cpp"
    break;

  case 285: /* bool_literal: FALSE  */
#line 1257 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5306 "bison_parser.cpp"
    break;

  case 286: /* num_literal: FLOATVAL  */
#line 1259 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5312 "bison_parser.cpp"
    break;

  case 288: /* int_literal: INTVAL  */
#line 1262 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5318 "bison_parser.cpp"
    break;

  case 289: /* null_literal: NULL  */
#line 1264 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5324 "bison_parser.cpp"
    break;

  case 290: /* date_literal: DATE STRING  */
#line 1266 "bison_parser.y"
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
#line 5339 "bison_parser.cpp"
    break;

  case 291: /* interval_literal: INTVAL duration_field  */
#line 1277 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5345 "bison_parser.cpp"
    break;

  case 292: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1278 "bison_parser.y"
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
#line 5361 "bison_parser.cpp"
    break;

  case 293: /* interval_literal: INTERVAL STRING  */
#line 1289 "bison_parser.y"
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
#line 5397 "bison_parser.cpp"
    break;

  case 294: /* param_expr: '?'  */
#line 1321 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5407 "bison_parser.cpp"
    break;

  case 296: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1330 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5418 "bison_parser.cpp"
    break;

  case 300: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1339 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5429 "bison_parser.cpp"
    break;

  case 301: /* table_ref_commalist: table_ref_atomic  */
#line 1346 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5438 "bison_parser.cpp"
    break;

  case 302: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1350 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5447 "bison_parser.cpp"
    break;

  case 303: /* table_ref_name: table_name opt_table_alias  */
#line 1355 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5459 "bison_parser.cpp"
    break;

  case 304: /* table_ref_name_no_alias: table_name  */
#line 1363 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5469 "bison_parser.cpp"
    break;

  case 305: /* table_name: IDENTIFIER  */
#line 1369 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5478 "bison_parser.cpp"
    break;

  case 306: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1373 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5487 "bison_parser.cpp"
    break;

  case 307: /* opt_index_name: IDENTIFIER  */
#line 1378 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5493 "bison_parser.cpp"
    break;

  case 308: /* opt_index_name: %empty  */
#line 1379 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5499 "bison_parser.cpp"
    break;

  case 310: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1381 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5505 "bison_parser.cpp"
    break;

  case 312: /* opt_table_alias: %empty  */
#line 1383 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5511 "bison_parser.cpp"
    break;

  case 313: /* alias: AS IDENTIFIER  */
#line 1385 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5517 "bison_parser.cpp"
    break;

  case 314: /* alias: IDENTIFIER  */
#line 1386 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5523 "bison_parser.cpp"
    break;

  case 316: /* opt_alias: %empty  */
#line 1388 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5529 "bison_parser.cpp"
    break;

  case 317: /* opt_locking_clause: opt_locking_clause_list  */
#line 1394 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5535 "bison_parser.cpp"
    break;

  case 318: /* opt_locking_clause: %empty  */
#line 1395 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5541 "bison_parser.cpp"
    break;

  case 319: /* opt_locking_clause_list: locking_clause  */
#line 1397 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5550 "bison_parser.cpp"
    break;

  case 320: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1401 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5559 "bison_parser.cpp"
    break;

  case 321: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1406 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5570 "bison_parser.cpp"
    break;

  case 322: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1412 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5581 "bison_parser.cpp"
    break;

  case 323: /* row_lock_mode: UPDATE  */
#line 1419 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5587 "bison_parser.cpp"
    break;

  case 324: /* row_lock_mode: NO KEY UPDATE  */
#line 1420 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5593 "bison_parser.cpp"
    break;

  case 325: /* row_lock_mode: SHARE  */
#line 1421 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5599 "bison_parser.cpp"
    break;

  case 326: /* row_lock_mode: KEY SHARE  */
#line 1422 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5605 "bison_parser.cpp"
    break;

  case 327: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1424 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5611 "bison_parser.cpp"
    break;

  case 328: /* opt_row_lock_policy: NOWAIT  */
#line 1425 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5617 "bison_parser.cpp"
    break;

  case 329: /* opt_row_lock_policy: %empty  */
#line 1426 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5623 "bison_parser.cpp"
    break;

  case 331: /* opt_with_clause: %empty  */
#line 1432 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5629 "bison_parser.cpp"
    break;

  case 332: /* with_clause: WITH with_description_list  */
#line 1434 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5635 "bison_parser.cpp"
    break;

  case 333: /* with_description_list: with_description  */
#line 1436 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5644 "bison_parser.cpp"
    break;

  case 334: /* with_description_list: with_description_list ',' with_description  */
#line 1440 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5653 "bison_parser.cpp"
    break;

  case 335: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1445 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5663 "bison_parser.cpp"
    break;

  case 336: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1455 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5675 "bison_parser.cpp"
    break;

  case 337: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1462 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5688 "bison_parser.cpp"
    break;

  case 338: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1470 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5701 "bison_parser.cpp"
    break;

  case 339: /* opt_join_type: INNER  */
#line 1479 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5707 "bison_parser.cpp"
    break;

  case 340: /* opt_join_type: LEFT OUTER  */
#line 1480 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5713 "bison_parser.cpp"
    break;

  case 341: /* opt_join_type: LEFT  */
#line 1481 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5719 "bison_parser.cpp"
    break;

  case 342: /* opt_join_type: RIGHT OUTER  */
#line 1482 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5725 "bison_parser.cpp"
    break;

  case 343: /* opt_join_type: RIGHT  */
#line 1483 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5731 "bison_parser.cpp"
    break;

  case 344: /* opt_join_type: FULL OUTER  */
#line 1484 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5737 "bison_parser.cpp"
    break;

  case 345: /* opt_join_type: OUTER  */
#line 1485 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5743 "bison_parser.cpp"
    break;

  case 346: /* opt_join_type: FULL  */
#line 1486 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5749 "bison_parser.cpp"
    break;

  case 347: /* opt_join_type: CROSS  */
#line 1487 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5755 "bison_parser.cpp"
    break;

  case 348: /* opt_join_type: %empty  */
#line 1488 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5761 "bison_parser.cpp"
    break;

  case 352: /* ident_commalist: IDENTIFIER  */
#line 1499 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5770 "bison_parser.cpp"
    break;

  case 353: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1503 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5779 "bison_parser.cpp"
    break;


#line 5783 "bison_parser.cpp"

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

#line 1509 "bison_parser.y"


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

    // clang-format on
