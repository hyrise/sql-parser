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
  YYSYMBOL_export_statement = 217,         /* export_statement  */
  YYSYMBOL_show_statement = 218,           /* show_statement  */
  YYSYMBOL_create_statement = 219,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 220,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 221,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 222,               /* table_elem  */
  YYSYMBOL_column_def = 223,               /* column_def  */
  YYSYMBOL_column_type = 224,              /* column_type  */
  YYSYMBOL_opt_time_precision = 225,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 226, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 227,   /* opt_column_constraints  */
  YYSYMBOL_column_constraints = 228,       /* column_constraints  */
  YYSYMBOL_column_constraint = 229,        /* column_constraint  */
  YYSYMBOL_table_constraint = 230,         /* table_constraint  */
  YYSYMBOL_references_spec = 231,          /* references_spec  */
  YYSYMBOL_drop_statement = 232,           /* drop_statement  */
  YYSYMBOL_opt_exists = 233,               /* opt_exists  */
  YYSYMBOL_alter_statement = 234,          /* alter_statement  */
  YYSYMBOL_alter_action = 235,             /* alter_action  */
  YYSYMBOL_drop_action = 236,              /* drop_action  */
  YYSYMBOL_delete_statement = 237,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 238,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 239,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 240,          /* opt_column_list  */
  YYSYMBOL_update_statement = 241,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 242,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 243,            /* update_clause  */
  YYSYMBOL_select_statement = 244,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 245, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 246, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 247,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 248,          /* select_no_paren  */
  YYSYMBOL_set_operator = 249,             /* set_operator  */
  YYSYMBOL_set_type = 250,                 /* set_type  */
  YYSYMBOL_opt_all = 251,                  /* opt_all  */
  YYSYMBOL_select_clause = 252,            /* select_clause  */
  YYSYMBOL_opt_distinct = 253,             /* opt_distinct  */
  YYSYMBOL_select_list = 254,              /* select_list  */
  YYSYMBOL_opt_from_clause = 255,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 256,              /* from_clause  */
  YYSYMBOL_opt_where = 257,                /* opt_where  */
  YYSYMBOL_opt_group = 258,                /* opt_group  */
  YYSYMBOL_opt_having = 259,               /* opt_having  */
  YYSYMBOL_opt_order = 260,                /* opt_order  */
  YYSYMBOL_order_list = 261,               /* order_list  */
  YYSYMBOL_order_desc = 262,               /* order_desc  */
  YYSYMBOL_opt_order_type = 263,           /* opt_order_type  */
  YYSYMBOL_opt_top = 264,                  /* opt_top  */
  YYSYMBOL_opt_limit = 265,                /* opt_limit  */
  YYSYMBOL_expr_list = 266,                /* expr_list  */
  YYSYMBOL_opt_extended_literal_list = 267, /* opt_extended_literal_list  */
  YYSYMBOL_extended_literal_list = 268,    /* extended_literal_list  */
  YYSYMBOL_casted_extended_literal = 269,  /* casted_extended_literal  */
  YYSYMBOL_extended_literal = 270,         /* extended_literal  */
  YYSYMBOL_expr_alias = 271,               /* expr_alias  */
  YYSYMBOL_expr = 272,                     /* expr  */
  YYSYMBOL_operand = 273,                  /* operand  */
  YYSYMBOL_scalar_expr = 274,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 275,               /* unary_expr  */
  YYSYMBOL_binary_expr = 276,              /* binary_expr  */
  YYSYMBOL_logic_expr = 277,               /* logic_expr  */
  YYSYMBOL_in_expr = 278,                  /* in_expr  */
  YYSYMBOL_case_expr = 279,                /* case_expr  */
  YYSYMBOL_case_list = 280,                /* case_list  */
  YYSYMBOL_exists_expr = 281,              /* exists_expr  */
  YYSYMBOL_comp_expr = 282,                /* comp_expr  */
  YYSYMBOL_function_expr = 283,            /* function_expr  */
  YYSYMBOL_opt_window = 284,               /* opt_window  */
  YYSYMBOL_opt_partition = 285,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 286,         /* opt_frame_clause  */
  YYSYMBOL_frame_type = 287,               /* frame_type  */
  YYSYMBOL_frame_bound = 288,              /* frame_bound  */
  YYSYMBOL_extract_expr = 289,             /* extract_expr  */
  YYSYMBOL_cast_expr = 290,                /* cast_expr  */
  YYSYMBOL_datetime_field = 291,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 292,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 293,           /* duration_field  */
  YYSYMBOL_array_expr = 294,               /* array_expr  */
  YYSYMBOL_array_index = 295,              /* array_index  */
  YYSYMBOL_between_expr = 296,             /* between_expr  */
  YYSYMBOL_column_name = 297,              /* column_name  */
  YYSYMBOL_literal = 298,                  /* literal  */
  YYSYMBOL_string_literal = 299,           /* string_literal  */
  YYSYMBOL_bool_literal = 300,             /* bool_literal  */
  YYSYMBOL_num_literal = 301,              /* num_literal  */
  YYSYMBOL_int_literal = 302,              /* int_literal  */
  YYSYMBOL_null_literal = 303,             /* null_literal  */
  YYSYMBOL_date_literal = 304,             /* date_literal  */
  YYSYMBOL_interval_literal = 305,         /* interval_literal  */
  YYSYMBOL_param_expr = 306,               /* param_expr  */
  YYSYMBOL_table_ref = 307,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 308,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 309, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 310,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 311,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 312,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 313,               /* table_name  */
  YYSYMBOL_opt_index_name = 314,           /* opt_index_name  */
  YYSYMBOL_table_alias = 315,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 316,          /* opt_table_alias  */
  YYSYMBOL_alias = 317,                    /* alias  */
  YYSYMBOL_opt_alias = 318,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 319,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 320,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 321,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 322,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 323,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 324,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 325,              /* with_clause  */
  YYSYMBOL_with_description_list = 326,    /* with_description_list  */
  YYSYMBOL_with_description = 327,         /* with_description  */
  YYSYMBOL_join_clause = 328,              /* join_clause  */
  YYSYMBOL_opt_join_type = 329,            /* opt_join_type  */
  YYSYMBOL_join_condition = 330,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 331,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 332           /* ident_commalist  */
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
#define YYLAST   905

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  199
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  640

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
       0,   335,   335,   354,   360,   367,   371,   375,   376,   377,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     394,   395,   397,   401,   406,   410,   420,   421,   422,   424,
     424,   430,   436,   438,   442,   454,   460,   473,   488,   490,
     491,   492,   494,   503,   507,   517,   527,   538,   554,   555,
     560,   571,   584,   596,   603,   610,   619,   620,   622,   626,
     631,   632,   634,   642,   643,   644,   645,   646,   647,   648,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   664,   665,   667,   668,   669,   671,   672,   674,   678,
     682,   687,   695,   696,   697,   698,   700,   701,   702,   704,
     712,   718,   724,   730,   736,   737,   744,   750,   752,   762,
     769,   780,   787,   795,   796,   803,   810,   814,   819,   829,
     833,   837,   849,   849,   851,   852,   861,   862,   864,   878,
     890,   895,   899,   903,   908,   909,   911,   921,   922,   924,
     926,   927,   929,   931,   932,   934,   939,   941,   942,   944,
     945,   947,   951,   956,   958,   959,   960,   964,   965,   967,
     968,   969,   970,   971,   972,   977,   981,   987,   988,   990,
     994,   999,   999,  1003,  1011,  1012,  1014,  1023,  1023,  1023,
    1023,  1023,  1025,  1026,  1026,  1026,  1026,  1026,  1026,  1026,
    1026,  1027,  1027,  1031,  1031,  1033,  1034,  1035,  1036,  1037,
    1039,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1050,  1051,  1053,  1054,  1055,  1056,  1060,  1061,  1062,
    1063,  1065,  1066,  1068,  1069,  1071,  1072,  1073,  1074,  1075,
    1076,  1077,  1081,  1082,  1086,  1087,  1089,  1090,  1095,  1096,
    1097,  1101,  1102,  1103,  1105,  1106,  1107,  1108,  1109,  1111,
    1113,  1115,  1116,  1117,  1118,  1119,  1120,  1122,  1123,  1124,
    1125,  1126,  1127,  1129,  1129,  1131,  1133,  1135,  1137,  1138,
    1139,  1140,  1142,  1142,  1142,  1142,  1142,  1142,  1142,  1144,
    1146,  1147,  1149,  1150,  1152,  1154,  1156,  1167,  1168,  1179,
    1211,  1220,  1220,  1227,  1227,  1229,  1229,  1236,  1240,  1245,
    1253,  1259,  1263,  1268,  1269,  1271,  1271,  1273,  1273,  1275,
    1276,  1278,  1278,  1284,  1285,  1287,  1291,  1296,  1302,  1309,
    1310,  1311,  1312,  1314,  1315,  1316,  1322,  1322,  1324,  1326,
    1330,  1335,  1345,  1352,  1360,  1369,  1370,  1371,  1372,  1373,
    1374,  1375,  1376,  1377,  1378,  1380,  1386,  1386,  1389,  1393
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

#define YYPACT_NINF (-463)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-347)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     659,    58,    86,   102,   234,    86,   -14,    95,   181,   146,
      86,   227,     8,    36,   145,   277,   141,   141,   141,   323,
     161,  -463,   224,  -463,   224,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,  -463,  -463,  -463,   -25,  -463,   361,
     189,  -463,   193,   280,  -463,   264,   264,   264,    86,   403,
      86,   286,  -463,   295,   -25,   294,   -32,   295,   295,   295,
      86,  -463,   288,   229,  -463,  -463,  -463,  -463,  -463,  -463,
     642,  -463,   332,  -463,  -463,   309,    77,  -463,   158,  -463,
     431,    19,   436,   314,   439,    86,    86,   365,  -463,   357,
     258,   444,   409,    86,   262,   267,   461,   461,   461,   460,
      86,    86,  -463,   274,   277,  -463,   281,   467,   471,  -463,
    -463,  -463,   -25,   372,   363,   -25,   191,  -463,  -463,  -463,
     756,   297,   496,  -463,   497,  -463,  -463,    38,  -463,   308,
     306,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,   458,  -463,   376,   -33,   258,   364,
    -463,   461,   505,   123,   335,   -31,  -463,  -463,   419,  -463,
    -463,  -463,   -48,   -48,   -48,  -463,  -463,  -463,  -463,  -463,
     508,  -463,  -463,  -463,   364,   441,  -463,  -463,    77,  -463,
    -463,   364,   441,   364,   150,   393,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,   394,  -463,   354,  -463,  -463,  -463,    19,  -463,    86,
     517,   410,    24,   397,   149,   331,   333,   334,   273,   384,
     337,   433,  -463,   293,   -42,   459,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,   427,  -463,   -17,   336,  -463,   364,   444,  -463,
     491,  -463,  -463,   338,    45,  -463,   365,  -463,   339,    -7,
    -463,   445,   341,  -463,    47,   191,   -25,   343,  -463,   140,
     191,   -42,   478,   104,    90,  -463,   393,  -463,   416,  -463,
    -463,   349,   450,  -463,   732,   355,   379,   381,    87,  -463,
    -463,  -463,   410,    17,    23,   489,   354,   364,   364,   -39,
      73,   362,   433,   673,   364,   117,   367,   -77,   364,   364,
     433,  -463,   433,   131,   370,    -8,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   467,    86,  -463,   553,    19,   -42,  -463,   295,    45,
     554,   403,    96,  -463,    19,  -463,   508,    15,   365,  -463,
     364,  -463,   561,  -463,  -463,  -463,  -463,   364,  -463,  -463,
    -463,   393,   364,   364,  -463,   395,  -463,   404,   128,  -463,
     732,   505,   461,  -463,  -463,   378,  -463,   380,  -463,  -463,
     382,  -463,  -463,   383,  -463,  -463,  -463,  -463,   385,  -463,
    -463,   119,   505,   388,   396,  -463,    24,  -463,   495,   364,
    -463,  -463,   392,   472,   200,   202,   137,   364,   364,  -463,
     489,   473,    72,  -463,  -463,  -463,   474,   602,   702,   433,
     398,   293,  -463,   490,   402,   702,   702,   702,   702,   423,
     423,   423,   423,   117,   117,   -79,   -79,   -79,   -76,   405,
    -463,  -463,   130,   595,   152,  -463,  -463,  -463,   201,   156,
    -463,   410,  -463,     9,  -463,   406,  -463,    51,  -463,   530,
    -463,  -463,  -463,  -463,   -42,   -42,   540,  -463,   505,  -463,
     446,  -463,   421,   162,  -463,   607,   610,  -463,   611,   614,
     615,  -463,  -463,   518,  -463,   451,    86,  -463,   119,  -463,
    -463,   168,   505,   505,  -463,   432,  -463,   169,  -463,   364,
     732,   364,   364,  -463,   194,   206,   430,  -463,   433,   702,
     293,   434,   178,  -463,  -463,  -463,  -463,  -463,   623,   403,
    -463,   435,   531,  -463,  -463,  -463,   560,   573,   574,   533,
      15,   636,  -463,  -463,  -463,   527,  -463,  -463,    25,  -463,
    -463,  -463,   464,   179,   465,   466,   468,  -463,  -463,   258,
    -463,  -463,  -463,   185,   186,   549,   495,   -53,   469,   -42,
     215,  -463,   364,  -463,   673,   476,   198,  -463,  -463,  -463,
    -463,    51,    15,  -463,  -463,  -463,    15,   148,   462,   364,
    -463,  -463,  -463,   655,  -463,  -463,  -463,  -463,  -463,   492,
     541,   441,  -463,  -463,  -463,  -463,   -42,  -463,  -463,  -463,
    -463,   375,   505,   -19,   477,  -463,   364,   254,   475,   364,
     199,   364,  -463,  -463,   341,  -463,  -463,  -463,   479,    34,
     505,   -42,  -463,  -463,   -42,  -463,   100,    53,   147,  -463,
    -463,   208,  -463,  -463,   556,  -463,  -463,  -463,    53,  -463
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     347,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   326,     0,
     301,   110,    33,     0,    50,    57,    57,    57,     0,     0,
       0,     0,   300,   105,     0,     0,     0,   105,   105,   105,
       0,    48,     0,   328,   329,    29,    26,    28,    27,     1,
     327,     2,     0,     6,     5,   158,   119,   120,   150,   102,
       0,   168,     0,     0,   304,     0,     0,   144,    37,     0,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     4,     0,     0,   138,   132,
     133,   131,     0,   135,     0,     0,   164,   302,   279,   282,
     284,     0,     0,   285,     0,   280,   281,     0,   290,     0,
     167,   169,   171,   173,   272,   273,   274,   283,   275,   276,
     277,   278,    32,    31,     0,   303,     0,     0,   114,     0,
     109,     0,     0,     0,     0,   144,   116,   104,     0,   127,
     126,    38,    41,    41,    41,   103,   100,   101,   331,   330,
       0,   284,   157,   137,     0,   150,   123,   122,   124,   134,
     130,     0,   150,     0,     0,   314,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     287,     0,   286,   289,   174,   175,    34,     0,    56,     0,
       0,   327,     0,     0,   268,     0,     0,     0,     0,     0,
       0,     0,   270,     0,   143,   177,   184,   185,   186,   179,
     181,   187,   180,   200,   188,   189,   190,   191,   183,   178,
     193,   194,     0,   348,     0,     0,   112,     0,     0,   115,
       0,   106,   107,     0,     0,    47,   144,    46,    24,     0,
      22,   141,   139,   165,   312,   164,     0,   149,   151,   156,
     164,   160,   162,   159,     0,   128,   313,   315,     0,   288,
     170,     0,     0,    53,     0,     0,     0,     0,     0,    58,
      60,    61,   327,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,     0,   195,     0,     0,     0,     0,
       0,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,   118,   117,   105,     0,
       0,     0,     0,    36,     0,    20,     0,     0,   144,   140,
       0,   310,     0,   311,   176,   121,   125,     0,   155,   154,
     153,   314,     0,     0,   319,     0,   321,     0,   325,   316,
       0,     0,     0,    79,    73,     0,    75,    85,    76,    63,
       0,    70,    71,     0,    67,    68,    74,    77,    82,    72,
      64,    87,     0,     0,     0,    52,     0,    55,   235,     0,
     269,   271,     0,     0,     0,     0,     0,     0,     0,   219,
       0,     0,     0,   192,   182,   211,   212,     0,   207,     0,
       0,     0,   198,     0,   210,   209,   225,   226,   227,   228,
     229,   230,   231,   202,   201,   204,   203,   205,   206,     0,
      35,   349,     0,     0,     0,    45,    43,    40,     0,     0,
      23,   327,   142,   291,   293,     0,   295,   308,   294,   146,
     166,   309,   152,   129,   163,   161,     0,   322,     0,   324,
       0,   317,     0,     0,    51,     0,     0,    69,     0,     0,
       0,    78,    94,     0,    93,     0,     0,    62,    86,    88,
      90,     0,     0,     0,    59,     0,   232,     0,   223,     0,
       0,     0,     0,   217,     0,     0,     0,   265,     0,   208,
       0,     0,     0,   199,   266,   111,   108,    39,     0,     0,
      25,     0,     0,   343,   335,   341,   339,   342,   337,     0,
       0,     0,   307,   299,   305,     0,   136,   320,   325,   323,
     172,    54,     0,     0,     0,     0,     0,    95,    92,   114,
      89,    91,    97,     0,     0,   237,   235,     0,     0,   221,
       0,   220,     0,   224,   267,     0,     0,   215,   213,    44,
      42,   308,     0,   338,   340,   336,     0,   292,   309,     0,
     318,    66,    84,     0,    80,    65,    81,    99,    96,     0,
       0,   150,   233,   249,   250,   218,   222,   216,   214,   296,
     332,   344,     0,   148,     0,    98,     0,   240,     0,     0,
       0,     0,   145,    83,   236,   241,   242,   243,     0,     0,
       0,   345,   333,   306,   147,   234,     0,     0,     0,   248,
     238,     0,   247,   245,     0,   246,   244,   334,     0,   239
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -463,  -463,  -463,   605,  -463,   652,  -463,   342,  -463,   311,
    -463,  -463,  -463,  -463,  -319,   -81,   240,   345,  -463,  -463,
    -463,   373,  -463,   282,  -463,  -325,  -463,  -463,  -463,  -463,
     192,  -463,  -441,  -463,   -44,  -463,  -463,  -463,  -463,  -463,
    -463,  -142,  -463,  -463,   429,  -210,   -84,  -463,    41,   -50,
     -29,  -463,  -463,   -74,   399,  -463,  -463,  -463,  -136,  -463,
    -463,  -170,  -463,   328,  -463,  -463,     3,  -297,  -463,  -263,
     480,   488,   340,  -147,  -191,  -463,  -463,  -463,  -463,  -463,
    -463,   407,  -463,  -463,  -463,   135,  -463,  -463,  -463,  -396,
    -463,  -463,  -139,  -463,  -463,  -463,  -463,  -463,  -463,   -61,
    -463,  -463,   566,   -98,  -463,  -463,   570,  -463,  -463,  -462,
     126,  -463,  -463,  -463,    -2,  -463,  -463,   134,   437,  -463,
     347,  -463,   426,  -463,   171,  -463,  -463,  -463,   606,  -463,
    -463,  -463,  -463,  -350
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   259,   260,    23,    66,
      24,   143,    25,    26,    89,   162,   255,   342,    27,    28,
      29,    84,   288,   289,   290,   391,   481,   477,   487,   488,
     489,   291,   490,    30,    93,    31,   251,   252,    32,    33,
      34,   153,    35,   155,   156,    36,   175,   176,   177,    77,
     112,   113,   180,    78,   174,   261,   348,   349,   150,   536,
     612,   116,   267,   268,   360,   108,   185,   262,   129,   130,
     131,   132,   263,   264,   225,   226,   227,   228,   229,   230,
     231,   300,   232,   233,   234,   496,   591,   618,   619,   630,
     235,   236,   198,   199,   200,   237,   238,   239,   240,   241,
     134,   135,   136,   137,   138,   139,   140,   141,   452,   453,
     454,   455,   456,    51,   457,   146,   532,   533,   534,   354,
     275,   276,   277,   368,   471,    37,    38,    63,    64,   458,
     529,   622,    71,   244
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   283,   224,    44,    95,   265,   213,   412,    52,   172,
      56,    40,   270,    99,   100,   101,   163,   164,    40,   249,
     133,   473,   446,   118,   119,   120,   400,   284,   303,   173,
     305,   182,   611,    75,   269,   522,   271,   273,   178,   308,
     626,   178,   491,   119,   120,   472,    87,   551,    90,   115,
     351,   627,   149,    55,   351,   309,    45,   316,   102,   626,
     316,   210,    97,   308,   279,   253,    46,   121,   577,   340,
     242,   299,   442,   298,   308,   523,   307,   308,    76,   309,
     524,   449,   397,   147,   148,    39,   109,   525,   526,    40,
     309,   158,   211,   309,   341,    94,   422,    47,   166,   167,
     336,    98,   497,   246,   527,    42,    57,   122,  -344,   528,
     330,   303,   331,   423,   601,   331,    58,   414,   538,   417,
     343,   418,   110,   123,   512,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     133,   593,   553,   554,   168,   254,   133,    59,   605,   266,
     404,   405,   364,   214,   118,   119,   120,   403,   111,   363,
     212,   415,   416,   308,    60,   407,   248,   109,    54,   124,
     125,   126,   352,   306,   522,   558,   531,   333,   350,   309,
     334,    75,   356,   469,   470,   408,   245,   345,   124,    48,
     346,   409,   178,   285,   286,   287,   215,   216,   217,   628,
     570,    54,   629,   110,   127,    61,  -297,   281,   451,   401,
     269,   398,   459,   566,   523,   464,   465,   128,   628,   524,
     308,   629,   334,   482,   365,   518,   525,   526,   509,   502,
     358,   634,   419,   439,   114,   218,   309,    43,   122,   111,
     483,   521,   639,   527,    50,   402,   183,  -344,   528,   408,
     519,   366,   610,   316,   123,   503,   308,   359,   468,   420,
     504,   505,   367,   184,   507,   272,   632,   633,   355,   350,
     631,   219,   309,   361,   133,    49,   214,   118,   119,   120,
      62,   395,   603,   133,   396,   220,   469,   470,   484,   485,
     447,   474,   486,   448,   443,    65,   214,   118,   119,   120,
     124,   125,   126,   327,   328,   329,   330,    53,   331,   614,
     308,   501,   561,   635,   636,   562,   308,   564,   308,   215,
     216,   217,   308,    69,   515,   500,   309,   207,    67,    68,
     440,   308,   309,   595,   309,   221,   222,    72,   309,   215,
     216,   217,   293,   223,   294,  -298,   517,   309,   128,   448,
     520,    75,   557,   207,   559,   560,   541,    70,   218,   334,
     506,   122,   552,   556,    79,   334,   350,   214,   118,   119,
     120,   511,   568,   582,    82,   350,   583,   123,   218,   588,
     589,   122,   334,   334,    80,   298,    81,   214,   118,   119,
     120,    83,   598,   623,   219,   350,   334,   123,   118,   119,
     120,   522,   637,   256,   257,   334,    88,   587,   220,    91,
     215,   216,   217,   103,   219,   596,   615,   616,   617,    85,
      86,   607,    92,   124,   125,   126,   104,    96,   220,   106,
     301,   216,   217,   107,   117,   144,   214,   118,   119,   120,
     142,   523,   145,   124,   125,   126,   524,   154,   149,   218,
     151,   152,   122,   525,   526,   157,   159,   608,   221,   222,
     565,   160,   621,   165,   624,   161,   223,    54,   123,   218,
     527,   128,   122,   171,   170,   528,   310,   311,   221,   222,
     216,   217,   122,   173,   549,   219,   223,   179,   123,   181,
     201,   128,   186,   187,   188,   189,   190,   191,   123,   220,
     202,   203,   206,   207,   208,   302,   609,   209,   243,   247,
     250,   258,   274,   311,   124,   125,   126,   114,   218,   220,
     282,   122,   292,    15,   295,   332,   296,   297,   304,   335,
     338,   339,   344,   362,   124,   125,   126,   123,   350,   347,
     357,   370,   371,   372,   124,   125,   126,    75,   392,   221,
     222,   393,   315,   394,   302,   410,   441,   223,   445,   316,
     312,   413,   128,   421,   461,   467,   499,   466,   220,   221,
     222,   475,   495,   476,   419,   478,   479,   223,   480,   127,
     313,   492,   128,   124,   125,   126,   498,   314,   315,   493,
     308,   510,   128,   331,   513,   316,   317,   514,   516,   535,
    -347,  -347,   537,   530,  -347,  -347,   539,   325,   326,   327,
     328,   329,   330,   542,   331,   540,   543,   544,   221,   222,
     545,   546,   547,   548,   563,   555,   223,   569,   567,   571,
     572,   128,   576,   318,   319,   320,   321,   322,   573,   578,
     323,   324,  -346,   325,   326,   327,   328,   329,   330,     1,
     331,   574,   575,   579,   590,   602,   311,     2,   581,   584,
     585,   604,   586,   594,     3,   486,     1,   606,   620,     4,
     597,   613,   638,   625,     2,   105,    74,   337,   494,     5,
     550,     3,     6,     7,   444,   462,     4,   280,   450,   278,
     460,   592,   399,   204,     8,     9,     5,   205,   600,     6,
       7,   353,   369,   312,    10,   599,   406,    11,   463,   580,
     169,     8,     9,     0,     0,     0,     0,     0,   508,     0,
       0,    10,     0,   411,    11,     0,     0,   311,     0,    12,
       0,   315,     0,    13,     0,     0,     0,     0,   316,   317,
       0,     0,     0,   373,     0,     0,    12,     0,     0,    14,
      13,     0,     0,     0,     0,    15,   311,   374,     0,     0,
       0,   375,   376,   377,   378,   379,    14,   380,     0,     0,
       0,     0,    15,     0,   312,   381,   318,   319,   320,   321,
     322,     0,     0,   323,   324,     0,   325,   326,   327,   328,
     329,   330,     0,   331,   411,     0,     0,    16,    17,    18,
     382,     0,   315,  -347,     0,     0,     0,     0,     0,   316,
     317,     0,     0,     0,    16,    17,    18,     0,   383,     0,
     384,   385,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   315,     0,     0,     0,   386,     0,     0,   316,  -347,
     387,     0,   388,     0,     0,     0,     0,   318,   319,   320,
     321,   322,   389,     0,   323,   324,     0,   325,   326,   327,
     328,   329,   330,     0,   331,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -347,  -347,  -347,   321,
     322,     0,     0,   323,   324,   390,   325,   326,   327,   328,
     329,   330,     0,   331,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197
};

static const yytype_int16 yycheck[] =
{
       2,   211,   149,     5,    54,   175,   148,   304,    10,   107,
      12,     3,   182,    57,    58,    59,    97,    98,     3,   155,
      81,   371,   341,     4,     5,     6,     3,     3,   219,    12,
     221,   115,    51,    58,   181,    26,   183,   184,   112,   116,
       6,   115,   392,     5,     6,   370,    48,   488,    50,    78,
       3,    17,    83,    12,     3,   132,    70,   136,    60,     6,
     136,    94,    94,   116,   203,   113,    80,    48,   530,    24,
     151,   218,   335,   112,   116,    66,   223,   116,    37,   132,
      71,   344,   292,    85,    86,    27,     9,    78,    79,     3,
     132,    93,   125,   132,    49,    54,   104,   111,   100,   101,
     247,   133,   399,   153,    95,     3,    70,    88,    99,   100,
     189,   302,   191,   121,   576,   191,    80,   194,   468,   310,
     256,   312,    45,   104,   421,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     201,   194,   492,   493,   103,   193,   207,   111,   589,   178,
     297,   298,    62,     3,     4,     5,     6,   296,    81,    55,
     193,   308,   309,   116,    19,    92,   197,     9,   193,   150,
     151,   152,   125,   223,    26,   500,   125,   194,   197,   132,
     197,    58,   266,   158,   159,   112,    63,   194,   150,    94,
     197,   118,   266,   169,   170,   171,    46,    47,    48,   165,
     519,   193,   168,    45,   185,    60,   197,   209,   193,   186,
     357,   194,   348,   510,    66,   362,   363,   198,   165,    71,
     116,   168,   197,   104,   134,    24,    78,    79,   419,    92,
      90,   627,   101,   331,    76,    85,   132,     3,    88,    81,
     121,   451,   638,    95,    98,   295,    55,    99,   100,   112,
      49,   161,   602,   136,   104,   118,   116,   117,   130,   128,
     407,   408,   172,    72,   192,   115,   166,   167,   265,   197,
     620,   121,   132,   270,   335,    94,     3,     4,     5,     6,
       3,   194,   579,   344,   197,   135,   158,   159,   169,   170,
     194,   372,   173,   197,   338,   154,     3,     4,     5,     6,
     150,   151,   152,   186,   187,   188,   189,    80,   191,   606,
     116,   109,   118,   166,   167,   109,   116,   508,   116,    46,
      47,    48,   116,     0,   194,   125,   132,   197,    17,    18,
     332,   116,   132,   118,   132,   185,   186,   113,   132,    46,
      47,    48,   193,   193,   195,   197,   194,   132,   198,   197,
     194,    58,   499,   197,   501,   502,   194,   196,    85,   197,
     410,    88,   194,   194,     3,   197,   197,     3,     4,     5,
       6,   421,   194,   194,    94,   197,   197,   104,    85,   194,
     194,    88,   197,   197,   195,   112,   193,     3,     4,     5,
       6,   127,   194,   194,   121,   197,   197,   104,     4,     5,
       6,    26,   194,   163,   164,   197,     3,   549,   135,   123,
      46,    47,    48,   125,   121,   562,   162,   163,   164,    46,
      47,   591,   127,   150,   151,   152,   197,   133,   135,    97,
      46,    47,    48,   124,     3,   121,     3,     4,     5,     6,
       4,    66,     3,   150,   151,   152,    71,     3,    83,    85,
      93,   193,    88,    78,    79,    46,   194,    82,   185,   186,
     510,   194,   609,     3,   611,     4,   193,   193,   104,    85,
      95,   198,    88,     6,   193,   100,    17,    54,   185,   186,
      47,    48,    88,    12,   486,   121,   193,   115,   104,   126,
     193,   198,   138,   139,   140,   141,   142,   143,   104,   135,
       4,     4,   194,   197,    46,   121,   131,   131,     3,   174,
      91,     3,   119,    54,   150,   151,   152,    76,    85,   135,
       3,    88,   125,   113,   193,    98,   193,   193,   191,   193,
      39,   193,   193,    55,   150,   151,   152,   104,   197,    94,
     197,   125,   193,    93,   150,   151,   152,    58,   193,   185,
     186,   172,   129,   172,   121,   193,     3,   193,     4,   136,
     101,   194,   198,   193,     3,   161,    94,   172,   135,   185,
     186,   193,    77,   193,   101,   193,   193,   193,   193,   185,
     121,   193,   198,   150,   151,   152,   194,   128,   129,   193,
     116,   193,   198,   191,   104,   136,   137,   192,     3,    69,
     177,   178,    62,   197,   181,   182,   160,   184,   185,   186,
     187,   188,   189,     6,   191,   194,     6,     6,   185,   186,
       6,     6,   104,   172,   194,   193,   193,     4,   194,   194,
      99,   198,    99,   174,   175,   176,   177,   178,    78,     3,
     181,   182,     0,   184,   185,   186,   187,   188,   189,     7,
     191,    78,    78,   126,   105,   193,    54,    15,   194,   194,
     194,     6,   194,   194,    22,   173,     7,   126,   193,    27,
     194,   194,   116,   194,    15,    70,    24,   248,   396,    37,
     488,    22,    40,    41,   339,   357,    27,   207,   346,   201,
     350,   556,   293,   127,    52,    53,    37,   127,   572,    40,
      41,   264,   276,   101,    62,   571,   299,    65,   361,   538,
     104,    52,    53,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    62,    -1,   121,    65,    -1,    -1,    54,    -1,    87,
      -1,   129,    -1,    91,    -1,    -1,    -1,    -1,   136,   137,
      -1,    -1,    -1,    11,    -1,    -1,    87,    -1,    -1,   107,
      91,    -1,    -1,    -1,    -1,   113,    54,    25,    -1,    -1,
      -1,    29,    30,    31,    32,    33,   107,    35,    -1,    -1,
      -1,    -1,   113,    -1,   101,    43,   174,   175,   176,   177,
     178,    -1,    -1,   181,   182,    -1,   184,   185,   186,   187,
     188,   189,    -1,   191,   121,    -1,    -1,   155,   156,   157,
      68,    -1,   129,   101,    -1,    -1,    -1,    -1,    -1,   136,
     137,    -1,    -1,    -1,   155,   156,   157,    -1,    86,    -1,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,   103,    -1,    -1,   136,   137,
     108,    -1,   110,    -1,    -1,    -1,    -1,   174,   175,   176,
     177,   178,   120,    -1,   181,   182,    -1,   184,   185,   186,
     187,   188,   189,    -1,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   174,   175,   176,   177,
     178,    -1,    -1,   181,   182,   153,   184,   185,   186,   187,
     188,   189,    -1,   191,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    27,    37,    40,    41,    52,    53,
      62,    65,    87,    91,   107,   113,   155,   156,   157,   200,
     201,   202,   203,   207,   209,   211,   212,   217,   218,   219,
     232,   234,   237,   238,   239,   241,   244,   324,   325,    27,
       3,   313,     3,     3,   313,    70,    80,   111,    94,    94,
      98,   312,   313,    80,   193,   247,   313,    70,    80,   111,
      19,    60,     3,   326,   327,   154,   208,   208,   208,     0,
     196,   331,   113,   204,   204,    58,   247,   248,   252,     3,
     195,   193,    94,   127,   220,   220,   220,   313,     3,   213,
     313,   123,   127,   233,   247,   248,   133,    94,   133,   233,
     233,   233,   313,   125,   197,   202,    97,   124,   264,     9,
      45,    81,   249,   250,    76,   249,   260,     3,     4,     5,
       6,    48,    88,   104,   150,   151,   152,   185,   198,   267,
     268,   269,   270,   298,   299,   300,   301,   302,   303,   304,
     305,   306,     4,   210,   121,     3,   314,   313,   313,    83,
     257,    93,   193,   240,     3,   242,   243,    46,   313,   194,
     194,     4,   214,   214,   214,     3,   313,   313,   247,   327,
     193,     6,   302,    12,   253,   245,   246,   247,   252,   115,
     251,   126,   245,    55,    72,   265,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   291,   292,
     293,   193,     4,     4,   301,   305,   194,   197,    46,   131,
      94,   125,   193,   240,     3,    46,    47,    48,    85,   121,
     135,   185,   186,   193,   272,   273,   274,   275,   276,   277,
     278,   279,   281,   282,   283,   289,   290,   294,   295,   296,
     297,   298,   214,     3,   332,    63,   248,   174,   197,   257,
      91,   235,   236,   113,   193,   215,   215,   215,     3,   205,
     206,   254,   266,   271,   272,   260,   249,   261,   262,   272,
     260,   272,   115,   272,   119,   319,   320,   321,   270,   291,
     269,   313,     3,   244,     3,   169,   170,   171,   221,   222,
     223,   230,   125,   193,   195,   193,   193,   193,   112,   272,
     280,    46,   121,   273,   191,   273,   248,   272,   116,   132,
      17,    54,   101,   121,   128,   129,   136,   137,   174,   175,
     176,   177,   178,   181,   182,   184,   185,   186,   187,   188,
     189,   191,    98,   194,   197,   193,   272,   243,    39,   193,
      24,    49,   216,   257,   193,   194,   197,    94,   255,   256,
     197,     3,   125,   317,   318,   265,   245,   197,    90,   117,
     263,   265,    55,    55,    62,   134,   161,   172,   322,   321,
     125,   193,    93,    11,    25,    29,    30,    31,    32,    33,
      35,    43,    68,    86,    88,    89,   103,   108,   110,   120,
     153,   224,   193,   172,   172,   194,   197,   244,   194,   253,
       3,   186,   248,   291,   272,   272,   280,    92,   112,   118,
     193,   121,   266,   194,   194,   272,   272,   273,   273,   101,
     128,   193,   104,   121,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   302,
     313,     3,   268,   233,   216,     4,   213,   194,   197,   268,
     206,   193,   307,   308,   309,   310,   311,   313,   328,   257,
     271,     3,   262,   319,   272,   272,   172,   161,   130,   158,
     159,   323,   224,   332,   214,   193,   193,   226,   193,   193,
     193,   225,   104,   121,   169,   170,   173,   227,   228,   229,
     231,   332,   193,   193,   222,    77,   284,   266,   194,    94,
     125,   109,    92,   118,   272,   272,   248,   192,   116,   273,
     193,   248,   266,   104,   192,   194,     3,   194,    24,    49,
     194,   244,    26,    66,    71,    78,    79,    95,   100,   329,
     197,   125,   315,   316,   317,    69,   258,    62,   332,   160,
     194,   194,     6,     6,     6,     6,     6,   104,   172,   313,
     229,   231,   194,   332,   332,   193,   194,   272,   224,   272,
     272,   118,   109,   194,   273,   248,   266,   194,   194,     4,
     213,   194,    99,    78,    78,    78,    99,   308,     3,   126,
     323,   194,   194,   197,   194,   194,   194,   240,   194,   194,
     105,   285,   284,   194,   194,   118,   272,   194,   194,   316,
     309,   308,   193,   266,     6,   231,   126,   260,    82,   131,
     332,    51,   259,   194,   266,   162,   163,   164,   286,   287,
     193,   272,   330,   194,   272,   194,     6,    17,   165,   168,
     288,   332,   166,   167,   288,   166,   167,   194,   116,   288
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   199,   200,   201,   201,   202,   202,   202,   202,   202,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   207,   208,
     208,   209,   210,   211,   211,   212,   212,   213,   214,   215,
     215,   215,   216,   216,   216,   216,   217,   217,   218,   218,
     218,   219,   219,   219,   219,   219,   220,   220,   221,   221,
     222,   222,   223,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   225,   225,   226,   226,   226,   227,   227,   228,   228,
     228,   228,   229,   229,   229,   229,   230,   230,   230,   231,
     232,   232,   232,   232,   233,   233,   234,   235,   236,   237,
     238,   239,   239,   240,   240,   241,   242,   242,   243,   244,
     244,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   250,   250,   250,   251,   251,   252,   253,   253,   254,
     255,   255,   256,   257,   257,   258,   258,   259,   259,   260,
     260,   261,   261,   262,   263,   263,   263,   264,   264,   265,
     265,   265,   265,   265,   265,   266,   266,   267,   267,   268,
     268,   269,   269,   270,   270,   270,   271,   272,   272,   272,
     272,   272,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   274,   274,   275,   275,   275,   275,   275,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   277,   277,   278,   278,   278,   278,   279,   279,   279,
     279,   280,   280,   281,   281,   282,   282,   282,   282,   282,
     282,   282,   283,   283,   284,   284,   285,   285,   286,   286,
     286,   287,   287,   287,   288,   288,   288,   288,   288,   289,
     290,   291,   291,   291,   291,   291,   291,   292,   292,   292,
     292,   292,   292,   293,   293,   294,   295,   296,   297,   297,
     297,   297,   298,   298,   298,   298,   298,   298,   298,   299,
     300,   300,   301,   301,   302,   303,   304,   305,   305,   305,
     306,   307,   307,   308,   308,   309,   309,   310,   310,   311,
     312,   313,   313,   314,   314,   315,   315,   316,   316,   317,
     317,   318,   318,   319,   319,   320,   320,   321,   321,   322,
     322,   322,   322,   323,   323,   323,   324,   324,   325,   326,
     326,   327,   328,   328,   328,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   330,   331,   331,   332,   332
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     6,     1,     1,     4,
       3,     0,     4,     2,     4,     2,     5,     5,     2,     3,
       2,     8,     7,     6,     9,     7,     3,     0,     1,     3,
       1,     1,     3,     1,     1,     4,     4,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       4,     3,     0,     5,     3,     0,     1,     0,     1,     2,
       1,     2,     2,     1,     1,     2,     5,     4,     6,     3,
       4,     4,     3,     4,     2,     0,     5,     1,     4,     4,
       2,     8,     5,     3,     0,     5,     1,     3,     3,     2,
       2,     6,     1,     1,     1,     3,     3,     3,     4,     6,
       2,     1,     1,     1,     1,     0,     7,     1,     0,     1,
       1,     0,     2,     2,     0,     4,     0,     2,     0,     3,
       0,     1,     3,     2,     1,     1,     0,     2,     0,     2,
       2,     4,     2,     4,     0,     1,     3,     1,     0,     1,
       3,     1,     6,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     2,     2,     3,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     3,     3,     5,     6,     5,     6,     4,     6,     3,
       5,     4,     5,     4,     5,     3,     3,     3,     3,     3,
       3,     3,     4,     6,     6,     0,     3,     0,     2,     5,
       0,     1,     1,     1,     2,     2,     2,     2,     1,     6,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     2,
       1,     1,     3,     1,     1,     1,     4,     1,     3,     2,
       1,     1,     3,     1,     0,     1,     5,     1,     0,     2,
       1,     1,     0,     1,     0,     1,     2,     3,     5,     1,
       3,     1,     2,     2,     1,     0,     1,     0,     2,     1,
       3,     3,     4,     6,     8,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 2095 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2101 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 179 "bison_parser.y"
            { }
#line 2107 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 179 "bison_parser.y"
            { }
#line 2113 "bison_parser.cpp"
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
#line 2126 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2132 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2138 "bison_parser.cpp"
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
#line 2151 "bison_parser.cpp"
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
#line 2164 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2170 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2176 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2182 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2188 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2194 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2200 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 179 "bison_parser.y"
            { }
#line 2206 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2212 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_import_export_options: /* opt_import_export_options  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2218 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_export_options: /* import_export_options  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2224 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2230 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2236 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2242 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 179 "bison_parser.y"
            { }
#line 2248 "bison_parser.cpp"
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
#line 2261 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2267 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2273 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 179 "bison_parser.y"
            { }
#line 2279 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 179 "bison_parser.y"
            { }
#line 2285 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2291 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2297 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraints: /* column_constraints  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2303 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 179 "bison_parser.y"
            { }
#line 2309 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2315 "bison_parser.cpp"
        break;

    case YYSYMBOL_references_spec: /* references_spec  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).references_spec_t)); }
#line 2321 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2327 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 179 "bison_parser.y"
            { }
#line 2333 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2339 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2345 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2351 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2357 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2363 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2369 "bison_parser.cpp"
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
#line 2382 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2388 "bison_parser.cpp"
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
#line 2401 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2407 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2413 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2419 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2425 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2431 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2437 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2443 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2449 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 179 "bison_parser.y"
            { }
#line 2455 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2461 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 179 "bison_parser.y"
            { }
#line 2467 "bison_parser.cpp"
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
#line 2480 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2486 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2492 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2498 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2504 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2510 "bison_parser.cpp"
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
#line 2523 "bison_parser.cpp"
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
#line 2536 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2542 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 179 "bison_parser.y"
            { }
#line 2548 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2554 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2560 "bison_parser.cpp"
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
#line 2573 "bison_parser.cpp"
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
#line 2586 "bison_parser.cpp"
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
#line 2599 "bison_parser.cpp"
        break;

    case YYSYMBOL_casted_extended_literal: /* casted_extended_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2605 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal: /* extended_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2611 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2617 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2623 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2629 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2635 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2641 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2647 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2653 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2659 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2665 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2671 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2677 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2683 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2689 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2695 "bison_parser.cpp"
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
#line 2708 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2714 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 179 "bison_parser.y"
            { }
#line 2720 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2726 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2732 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2738 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 179 "bison_parser.y"
            { }
#line 2744 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 179 "bison_parser.y"
            { }
#line 2750 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 179 "bison_parser.y"
            { }
#line 2756 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2762 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2768 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2774 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2780 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2786 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2792 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2798 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2804 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2810 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2816 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2822 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2828 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2834 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2840 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2846 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2852 "bison_parser.cpp"
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
#line 2865 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2871 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2877 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 180 "bison_parser.y"
            {
  free(((*yyvaluep).table_name).name);
  free(((*yyvaluep).table_name).schema);
}
#line 2886 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 192 "bison_parser.y"
            { free(((*yyvaluep).sval)); }
#line 2892 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2898 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2904 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2910 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2916 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2922 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2928 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 2934 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 179 "bison_parser.y"
            { }
#line 2940 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 179 "bison_parser.y"
            { }
#line 2946 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2952 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2958 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2964 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2970 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2976 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 179 "bison_parser.y"
            { }
#line 2982 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 201 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2988 "bison_parser.cpp"
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
#line 3001 "bison_parser.cpp"
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

#line 3109 "bison_parser.cpp"

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
#line 335 "bison_parser.y"
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
#line 3338 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 354 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3349 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 360 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3360 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 367 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3369 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 371 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3378 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 375 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3384 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 376 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3390 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 377 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3396 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 379 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3402 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 380 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3408 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 381 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3414 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 382 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3420 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 383 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3426 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 384 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3432 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 385 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3438 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 386 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3444 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 387 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3450 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 388 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3456 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 394 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3462 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 395 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3468 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 397 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3477 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 401 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3486 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 406 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3495 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' extended_literal_list ')'  */
#line 410 "bison_parser.y"
                                           {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3505 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 420 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3511 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 421 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3517 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 422 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3523 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 430 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3533 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 438 "bison_parser.y"
                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3542 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_extended_literal_list ')'  */
#line 442 "bison_parser.y"
                                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3552 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 454 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3563 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_import_export_options opt_where  */
#line 460 "bison_parser.y"
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
  delete (yyvsp[-1].import_export_option_t);
}
#line 3580 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 473 "bison_parser.y"
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
#line 3599 "bison_parser.cpp"
    break;

  case 38: /* file_path: STRING  */
#line 488 "bison_parser.y"
                   { (yyval.sval) = (yyvsp[0].sval); }
#line 3605 "bison_parser.cpp"
    break;

  case 39: /* opt_import_export_options: WITH '(' import_export_options ')'  */
#line 490 "bison_parser.y"
                                                               { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3611 "bison_parser.cpp"
    break;

  case 40: /* opt_import_export_options: '(' import_export_options ')'  */
#line 491 "bison_parser.y"
                                { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3617 "bison_parser.cpp"
    break;

  case 41: /* opt_import_export_options: %empty  */
#line 492 "bison_parser.y"
              { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3623 "bison_parser.cpp"
    break;

  case 42: /* import_export_options: import_export_options ',' FORMAT file_type  */
#line 494 "bison_parser.y"
                                                                   {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3637 "bison_parser.cpp"
    break;

  case 43: /* import_export_options: FORMAT file_type  */
#line 503 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3646 "bison_parser.cpp"
    break;

  case 44: /* import_export_options: import_export_options ',' ENCODING STRING  */
#line 507 "bison_parser.y"
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
#line 3661 "bison_parser.cpp"
    break;

  case 45: /* import_export_options: ENCODING STRING  */
#line 517 "bison_parser.y"
                  {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3670 "bison_parser.cpp"
    break;

  case 46: /* export_statement: COPY table_name TO file_path opt_import_export_options  */
#line 527 "bison_parser.y"
                                                                          {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3686 "bison_parser.cpp"
    break;

  case 47: /* export_statement: COPY select_with_paren TO file_path opt_import_export_options  */
#line 538 "bison_parser.y"
                                                                {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3701 "bison_parser.cpp"
    break;

  case 48: /* show_statement: SHOW TABLES  */
#line 554 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3707 "bison_parser.cpp"
    break;

  case 49: /* show_statement: SHOW COLUMNS table_name  */
#line 555 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3717 "bison_parser.cpp"
    break;

  case 50: /* show_statement: DESCRIBE table_name  */
#line 560 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3727 "bison_parser.cpp"
    break;

  case 51: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 571 "bison_parser.y"
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
#line 3745 "bison_parser.cpp"
    break;

  case 52: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 584 "bison_parser.y"
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
#line 3762 "bison_parser.cpp"
    break;

  case 53: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 596 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3774 "bison_parser.cpp"
    break;

  case 54: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 603 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3786 "bison_parser.cpp"
    break;

  case 55: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 610 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3799 "bison_parser.cpp"
    break;

  case 56: /* opt_not_exists: IF NOT EXISTS  */
#line 619 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3805 "bison_parser.cpp"
    break;

  case 57: /* opt_not_exists: %empty  */
#line 620 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3811 "bison_parser.cpp"
    break;

  case 58: /* table_elem_commalist: table_elem  */
#line 622 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3820 "bison_parser.cpp"
    break;

  case 59: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 626 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3829 "bison_parser.cpp"
    break;

  case 60: /* table_elem: column_def  */
#line 631 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3835 "bison_parser.cpp"
    break;

  case 61: /* table_elem: table_constraint  */
#line 632 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3841 "bison_parser.cpp"
    break;

  case 62: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 634 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraints_t)->constraints, (yyvsp[0].column_constraints_t)->references);
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
  delete (yyvsp[0].column_constraints_t);
}
#line 3853 "bison_parser.cpp"
    break;

  case 63: /* column_type: BIGINT  */
#line 642 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3859 "bison_parser.cpp"
    break;

  case 64: /* column_type: BOOLEAN  */
#line 643 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3865 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHAR '(' INTVAL ')'  */
#line 644 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3871 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 645 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3877 "bison_parser.cpp"
    break;

  case 67: /* column_type: DATE  */
#line 646 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3883 "bison_parser.cpp"
    break;

  case 68: /* column_type: DATETIME  */
#line 647 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3889 "bison_parser.cpp"
    break;

  case 69: /* column_type: DECIMAL opt_decimal_specification  */
#line 648 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3898 "bison_parser.cpp"
    break;

  case 70: /* column_type: DOUBLE  */
#line 652 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3904 "bison_parser.cpp"
    break;

  case 71: /* column_type: FLOAT  */
#line 653 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3910 "bison_parser.cpp"
    break;

  case 72: /* column_type: INT  */
#line 654 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3916 "bison_parser.cpp"
    break;

  case 73: /* column_type: INTEGER  */
#line 655 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3922 "bison_parser.cpp"
    break;

  case 74: /* column_type: LONG  */
#line 656 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3928 "bison_parser.cpp"
    break;

  case 75: /* column_type: REAL  */
#line 657 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3934 "bison_parser.cpp"
    break;

  case 76: /* column_type: SMALLINT  */
#line 658 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3940 "bison_parser.cpp"
    break;

  case 77: /* column_type: TEXT  */
#line 659 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3946 "bison_parser.cpp"
    break;

  case 78: /* column_type: TIME opt_time_precision  */
#line 660 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3952 "bison_parser.cpp"
    break;

  case 79: /* column_type: TIMESTAMP  */
#line 661 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3958 "bison_parser.cpp"
    break;

  case 80: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 662 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3964 "bison_parser.cpp"
    break;

  case 81: /* opt_time_precision: '(' INTVAL ')'  */
#line 664 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3970 "bison_parser.cpp"
    break;

  case 82: /* opt_time_precision: %empty  */
#line 665 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3976 "bison_parser.cpp"
    break;

  case 83: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 667 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3982 "bison_parser.cpp"
    break;

  case 84: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 668 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3988 "bison_parser.cpp"
    break;

  case 85: /* opt_decimal_specification: %empty  */
#line 669 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3994 "bison_parser.cpp"
    break;

  case 86: /* opt_column_constraints: column_constraints  */
#line 671 "bison_parser.y"
                                            { (yyval.column_constraints_t) = (yyvsp[0].column_constraints_t); }
#line 4000 "bison_parser.cpp"
    break;

  case 87: /* opt_column_constraints: %empty  */
#line 672 "bison_parser.y"
              { (yyval.column_constraints_t) = new ColumnConstraints(); }
#line 4006 "bison_parser.cpp"
    break;

  case 88: /* column_constraints: column_constraint  */
#line 674 "bison_parser.y"
                                       {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
}
#line 4015 "bison_parser.cpp"
    break;

  case 89: /* column_constraints: column_constraints column_constraint  */
#line 678 "bison_parser.y"
                                       {
  (yyvsp[-1].column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4024 "bison_parser.cpp"
    break;

  case 90: /* column_constraints: references_spec  */
#line 682 "bison_parser.y"
                  {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyval.column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
}
#line 4034 "bison_parser.cpp"
    break;

  case 91: /* column_constraints: column_constraints references_spec  */
#line 687 "bison_parser.y"
                                     {
  // Multiple foreign keys for the same column could be possible, so we do not raise an error in that case.
  // Think of foreign keys referenced on multiple levels (returned item references sold item references items).
  (yyvsp[-1].column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyvsp[-1].column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4046 "bison_parser.cpp"
    break;

  case 92: /* column_constraint: PRIMARY KEY  */
#line 695 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4052 "bison_parser.cpp"
    break;

  case 93: /* column_constraint: UNIQUE  */
#line 696 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4058 "bison_parser.cpp"
    break;

  case 94: /* column_constraint: NULL  */
#line 697 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4064 "bison_parser.cpp"
    break;

  case 95: /* column_constraint: NOT NULL  */
#line 698 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4070 "bison_parser.cpp"
    break;

  case 96: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 700 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4076 "bison_parser.cpp"
    break;

  case 97: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 701 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4082 "bison_parser.cpp"
    break;

  case 98: /* table_constraint: FOREIGN KEY '(' ident_commalist ')' references_spec  */
#line 702 "bison_parser.y"
                                                      { (yyval.table_constraint_t) = new ForeignKeyConstraint((yyvsp[-2].str_vec), (yyvsp[0].references_spec_t)); }
#line 4088 "bison_parser.cpp"
    break;

  case 99: /* references_spec: REFERENCES table_name opt_column_list  */
#line 704 "bison_parser.y"
                                                        { (yyval.references_spec_t) = new ReferencesSpecification((yyvsp[-1].table_name).schema, (yyvsp[-1].table_name).name, (yyvsp[0].str_vec)); }
#line 4094 "bison_parser.cpp"
    break;

  case 100: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 712 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4105 "bison_parser.cpp"
    break;

  case 101: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 718 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4116 "bison_parser.cpp"
    break;

  case 102: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 724 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4126 "bison_parser.cpp"
    break;

  case 103: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 730 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4136 "bison_parser.cpp"
    break;

  case 104: /* opt_exists: IF EXISTS  */
#line 736 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4142 "bison_parser.cpp"
    break;

  case 105: /* opt_exists: %empty  */
#line 737 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4148 "bison_parser.cpp"
    break;

  case 106: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 744 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4158 "bison_parser.cpp"
    break;

  case 107: /* alter_action: drop_action  */
#line 750 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4164 "bison_parser.cpp"
    break;

  case 108: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 752 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4173 "bison_parser.cpp"
    break;

  case 109: /* delete_statement: DELETE FROM table_name opt_where  */
#line 762 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4184 "bison_parser.cpp"
    break;

  case 110: /* truncate_statement: TRUNCATE table_name  */
#line 769 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4194 "bison_parser.cpp"
    break;

  case 111: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' extended_literal_list ')'  */
#line 780 "bison_parser.y"
                                                                                               {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4206 "bison_parser.cpp"
    break;

  case 112: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 787 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4218 "bison_parser.cpp"
    break;

  case 113: /* opt_column_list: '(' ident_commalist ')'  */
#line 795 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4224 "bison_parser.cpp"
    break;

  case 114: /* opt_column_list: %empty  */
#line 796 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4230 "bison_parser.cpp"
    break;

  case 115: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 803 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4241 "bison_parser.cpp"
    break;

  case 116: /* update_clause_commalist: update_clause  */
#line 810 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4250 "bison_parser.cpp"
    break;

  case 117: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 814 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4259 "bison_parser.cpp"
    break;

  case 118: /* update_clause: IDENTIFIER '=' expr  */
#line 819 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4269 "bison_parser.cpp"
    break;

  case 119: /* select_statement: opt_with_clause select_with_paren  */
#line 829 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4278 "bison_parser.cpp"
    break;

  case 120: /* select_statement: opt_with_clause select_no_paren  */
#line 833 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4287 "bison_parser.cpp"
    break;

  case 121: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 837 "bison_parser.y"
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
#line 4303 "bison_parser.cpp"
    break;

  case 124: /* select_within_set_operation_no_parentheses: select_clause  */
#line 851 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4309 "bison_parser.cpp"
    break;

  case 125: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 852 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4322 "bison_parser.cpp"
    break;

  case 126: /* select_with_paren: '(' select_no_paren ')'  */
#line 861 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4328 "bison_parser.cpp"
    break;

  case 127: /* select_with_paren: '(' select_with_paren ')'  */
#line 862 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4334 "bison_parser.cpp"
    break;

  case 128: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 864 "bison_parser.y"
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
#line 4353 "bison_parser.cpp"
    break;

  case 129: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 878 "bison_parser.y"
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
#line 4369 "bison_parser.cpp"
    break;

  case 130: /* set_operator: set_type opt_all  */
#line 890 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4378 "bison_parser.cpp"
    break;

  case 131: /* set_type: UNION  */
#line 895 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4387 "bison_parser.cpp"
    break;

  case 132: /* set_type: INTERSECT  */
#line 899 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4396 "bison_parser.cpp"
    break;

  case 133: /* set_type: EXCEPT  */
#line 903 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4405 "bison_parser.cpp"
    break;

  case 134: /* opt_all: ALL  */
#line 908 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4411 "bison_parser.cpp"
    break;

  case 135: /* opt_all: %empty  */
#line 909 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4417 "bison_parser.cpp"
    break;

  case 136: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 911 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4431 "bison_parser.cpp"
    break;

  case 137: /* opt_distinct: DISTINCT  */
#line 921 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4437 "bison_parser.cpp"
    break;

  case 138: /* opt_distinct: %empty  */
#line 922 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4443 "bison_parser.cpp"
    break;

  case 140: /* opt_from_clause: from_clause  */
#line 926 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4449 "bison_parser.cpp"
    break;

  case 141: /* opt_from_clause: %empty  */
#line 927 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4455 "bison_parser.cpp"
    break;

  case 142: /* from_clause: FROM table_ref  */
#line 929 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4461 "bison_parser.cpp"
    break;

  case 143: /* opt_where: WHERE expr  */
#line 931 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4467 "bison_parser.cpp"
    break;

  case 144: /* opt_where: %empty  */
#line 932 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4473 "bison_parser.cpp"
    break;

  case 145: /* opt_group: GROUP BY expr_list opt_having  */
#line 934 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4483 "bison_parser.cpp"
    break;

  case 146: /* opt_group: %empty  */
#line 939 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4489 "bison_parser.cpp"
    break;

  case 147: /* opt_having: HAVING expr  */
#line 941 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4495 "bison_parser.cpp"
    break;

  case 148: /* opt_having: %empty  */
#line 942 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4501 "bison_parser.cpp"
    break;

  case 149: /* opt_order: ORDER BY order_list  */
#line 944 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4507 "bison_parser.cpp"
    break;

  case 150: /* opt_order: %empty  */
#line 945 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4513 "bison_parser.cpp"
    break;

  case 151: /* order_list: order_desc  */
#line 947 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4522 "bison_parser.cpp"
    break;

  case 152: /* order_list: order_list ',' order_desc  */
#line 951 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4531 "bison_parser.cpp"
    break;

  case 153: /* order_desc: expr opt_order_type  */
#line 956 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4537 "bison_parser.cpp"
    break;

  case 154: /* opt_order_type: ASC  */
#line 958 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4543 "bison_parser.cpp"
    break;

  case 155: /* opt_order_type: DESC  */
#line 959 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4549 "bison_parser.cpp"
    break;

  case 156: /* opt_order_type: %empty  */
#line 960 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4555 "bison_parser.cpp"
    break;

  case 157: /* opt_top: TOP int_literal  */
#line 964 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4561 "bison_parser.cpp"
    break;

  case 158: /* opt_top: %empty  */
#line 965 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4567 "bison_parser.cpp"
    break;

  case 159: /* opt_limit: LIMIT expr  */
#line 967 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4573 "bison_parser.cpp"
    break;

  case 160: /* opt_limit: OFFSET expr  */
#line 968 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4579 "bison_parser.cpp"
    break;

  case 161: /* opt_limit: LIMIT expr OFFSET expr  */
#line 969 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4585 "bison_parser.cpp"
    break;

  case 162: /* opt_limit: LIMIT ALL  */
#line 970 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4591 "bison_parser.cpp"
    break;

  case 163: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 971 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4597 "bison_parser.cpp"
    break;

  case 164: /* opt_limit: %empty  */
#line 972 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4603 "bison_parser.cpp"
    break;

  case 165: /* expr_list: expr_alias  */
#line 977 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4612 "bison_parser.cpp"
    break;

  case 166: /* expr_list: expr_list ',' expr_alias  */
#line 981 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4621 "bison_parser.cpp"
    break;

  case 167: /* opt_extended_literal_list: extended_literal_list  */
#line 987 "bison_parser.y"
                                                  { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4627 "bison_parser.cpp"
    break;

  case 168: /* opt_extended_literal_list: %empty  */
#line 988 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4633 "bison_parser.cpp"
    break;

  case 169: /* extended_literal_list: casted_extended_literal  */
#line 990 "bison_parser.y"
                                                {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4642 "bison_parser.cpp"
    break;

  case 170: /* extended_literal_list: extended_literal_list ',' casted_extended_literal  */
#line 994 "bison_parser.y"
                                                    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4651 "bison_parser.cpp"
    break;

  case 172: /* casted_extended_literal: CAST '(' extended_literal AS column_type ')'  */
#line 999 "bison_parser.y"
                                                                                          {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4659 "bison_parser.cpp"
    break;

  case 173: /* extended_literal: literal  */
#line 1003 "bison_parser.y"
                           {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4672 "bison_parser.cpp"
    break;

  case 174: /* extended_literal: '-' num_literal  */
#line 1011 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4678 "bison_parser.cpp"
    break;

  case 175: /* extended_literal: '-' interval_literal  */
#line 1012 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4684 "bison_parser.cpp"
    break;

  case 176: /* expr_alias: expr opt_alias  */
#line 1014 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4697 "bison_parser.cpp"
    break;

  case 182: /* operand: '(' expr ')'  */
#line 1025 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4703 "bison_parser.cpp"
    break;

  case 192: /* operand: '(' select_no_paren ')'  */
#line 1027 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4711 "bison_parser.cpp"
    break;

  case 195: /* unary_expr: '-' operand  */
#line 1033 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4717 "bison_parser.cpp"
    break;

  case 196: /* unary_expr: NOT operand  */
#line 1034 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4723 "bison_parser.cpp"
    break;

  case 197: /* unary_expr: operand ISNULL  */
#line 1035 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4729 "bison_parser.cpp"
    break;

  case 198: /* unary_expr: operand IS NULL  */
#line 1036 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4735 "bison_parser.cpp"
    break;

  case 199: /* unary_expr: operand IS NOT NULL  */
#line 1037 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4741 "bison_parser.cpp"
    break;

  case 201: /* binary_expr: operand '-' operand  */
#line 1039 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4747 "bison_parser.cpp"
    break;

  case 202: /* binary_expr: operand '+' operand  */
#line 1040 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4753 "bison_parser.cpp"
    break;

  case 203: /* binary_expr: operand '/' operand  */
#line 1041 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4759 "bison_parser.cpp"
    break;

  case 204: /* binary_expr: operand '*' operand  */
#line 1042 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4765 "bison_parser.cpp"
    break;

  case 205: /* binary_expr: operand '%' operand  */
#line 1043 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4771 "bison_parser.cpp"
    break;

  case 206: /* binary_expr: operand '^' operand  */
#line 1044 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4777 "bison_parser.cpp"
    break;

  case 207: /* binary_expr: operand LIKE operand  */
#line 1045 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4783 "bison_parser.cpp"
    break;

  case 208: /* binary_expr: operand NOT LIKE operand  */
#line 1046 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4789 "bison_parser.cpp"
    break;

  case 209: /* binary_expr: operand ILIKE operand  */
#line 1047 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4795 "bison_parser.cpp"
    break;

  case 210: /* binary_expr: operand CONCAT operand  */
#line 1048 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4801 "bison_parser.cpp"
    break;

  case 211: /* logic_expr: expr AND expr  */
#line 1050 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4807 "bison_parser.cpp"
    break;

  case 212: /* logic_expr: expr OR expr  */
#line 1051 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4813 "bison_parser.cpp"
    break;

  case 213: /* in_expr: operand IN '(' expr_list ')'  */
#line 1053 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4819 "bison_parser.cpp"
    break;

  case 214: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1054 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4825 "bison_parser.cpp"
    break;

  case 215: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1055 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4831 "bison_parser.cpp"
    break;

  case 216: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1056 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4837 "bison_parser.cpp"
    break;

  case 217: /* case_expr: CASE expr case_list END  */
#line 1060 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4843 "bison_parser.cpp"
    break;

  case 218: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1061 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4849 "bison_parser.cpp"
    break;

  case 219: /* case_expr: CASE case_list END  */
#line 1062 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4855 "bison_parser.cpp"
    break;

  case 220: /* case_expr: CASE case_list ELSE expr END  */
#line 1063 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4861 "bison_parser.cpp"
    break;

  case 221: /* case_list: WHEN expr THEN expr  */
#line 1065 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4867 "bison_parser.cpp"
    break;

  case 222: /* case_list: case_list WHEN expr THEN expr  */
#line 1066 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4873 "bison_parser.cpp"
    break;

  case 223: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1068 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4879 "bison_parser.cpp"
    break;

  case 224: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1069 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4885 "bison_parser.cpp"
    break;

  case 225: /* comp_expr: operand '=' operand  */
#line 1071 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4891 "bison_parser.cpp"
    break;

  case 226: /* comp_expr: operand EQUALS operand  */
#line 1072 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4897 "bison_parser.cpp"
    break;

  case 227: /* comp_expr: operand NOTEQUALS operand  */
#line 1073 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4903 "bison_parser.cpp"
    break;

  case 228: /* comp_expr: operand '<' operand  */
#line 1074 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4909 "bison_parser.cpp"
    break;

  case 229: /* comp_expr: operand '>' operand  */
#line 1075 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4915 "bison_parser.cpp"
    break;

  case 230: /* comp_expr: operand LESSEQ operand  */
#line 1076 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4921 "bison_parser.cpp"
    break;

  case 231: /* comp_expr: operand GREATEREQ operand  */
#line 1077 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4927 "bison_parser.cpp"
    break;

  case 232: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1081 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 4933 "bison_parser.cpp"
    break;

  case 233: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1082 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 4939 "bison_parser.cpp"
    break;

  case 234: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1086 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4945 "bison_parser.cpp"
    break;

  case 235: /* opt_window: %empty  */
#line 1087 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 4951 "bison_parser.cpp"
    break;

  case 236: /* opt_partition: PARTITION BY expr_list  */
#line 1089 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4957 "bison_parser.cpp"
    break;

  case 237: /* opt_partition: %empty  */
#line 1090 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4963 "bison_parser.cpp"
    break;

  case 238: /* opt_frame_clause: frame_type frame_bound  */
#line 1095 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 4969 "bison_parser.cpp"
    break;

  case 239: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1096 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 4975 "bison_parser.cpp"
    break;

  case 240: /* opt_frame_clause: %empty  */
#line 1097 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 4983 "bison_parser.cpp"
    break;

  case 241: /* frame_type: RANGE  */
#line 1101 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 4989 "bison_parser.cpp"
    break;

  case 242: /* frame_type: ROWS  */
#line 1102 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 4995 "bison_parser.cpp"
    break;

  case 243: /* frame_type: GROUPS  */
#line 1103 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 5001 "bison_parser.cpp"
    break;

  case 244: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1105 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5007 "bison_parser.cpp"
    break;

  case 245: /* frame_bound: INTVAL PRECEDING  */
#line 1106 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5013 "bison_parser.cpp"
    break;

  case 246: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1107 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5019 "bison_parser.cpp"
    break;

  case 247: /* frame_bound: INTVAL FOLLOWING  */
#line 1108 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5025 "bison_parser.cpp"
    break;

  case 248: /* frame_bound: CURRENT_ROW  */
#line 1109 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5031 "bison_parser.cpp"
    break;

  case 249: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1111 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5037 "bison_parser.cpp"
    break;

  case 250: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1113 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5043 "bison_parser.cpp"
    break;

  case 251: /* datetime_field: SECOND  */
#line 1115 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5049 "bison_parser.cpp"
    break;

  case 252: /* datetime_field: MINUTE  */
#line 1116 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5055 "bison_parser.cpp"
    break;

  case 253: /* datetime_field: HOUR  */
#line 1117 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5061 "bison_parser.cpp"
    break;

  case 254: /* datetime_field: DAY  */
#line 1118 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5067 "bison_parser.cpp"
    break;

  case 255: /* datetime_field: MONTH  */
#line 1119 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5073 "bison_parser.cpp"
    break;

  case 256: /* datetime_field: YEAR  */
#line 1120 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5079 "bison_parser.cpp"
    break;

  case 257: /* datetime_field_plural: SECONDS  */
#line 1122 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5085 "bison_parser.cpp"
    break;

  case 258: /* datetime_field_plural: MINUTES  */
#line 1123 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5091 "bison_parser.cpp"
    break;

  case 259: /* datetime_field_plural: HOURS  */
#line 1124 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5097 "bison_parser.cpp"
    break;

  case 260: /* datetime_field_plural: DAYS  */
#line 1125 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5103 "bison_parser.cpp"
    break;

  case 261: /* datetime_field_plural: MONTHS  */
#line 1126 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5109 "bison_parser.cpp"
    break;

  case 262: /* datetime_field_plural: YEARS  */
#line 1127 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5115 "bison_parser.cpp"
    break;

  case 265: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1131 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5121 "bison_parser.cpp"
    break;

  case 266: /* array_index: operand '[' int_literal ']'  */
#line 1133 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5127 "bison_parser.cpp"
    break;

  case 267: /* between_expr: operand BETWEEN operand AND operand  */
#line 1135 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5133 "bison_parser.cpp"
    break;

  case 268: /* column_name: IDENTIFIER  */
#line 1137 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5139 "bison_parser.cpp"
    break;

  case 269: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1138 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5145 "bison_parser.cpp"
    break;

  case 270: /* column_name: '*'  */
#line 1139 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5151 "bison_parser.cpp"
    break;

  case 271: /* column_name: IDENTIFIER '.' '*'  */
#line 1140 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5157 "bison_parser.cpp"
    break;

  case 279: /* string_literal: STRING  */
#line 1144 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5163 "bison_parser.cpp"
    break;

  case 280: /* bool_literal: TRUE  */
#line 1146 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5169 "bison_parser.cpp"
    break;

  case 281: /* bool_literal: FALSE  */
#line 1147 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5175 "bison_parser.cpp"
    break;

  case 282: /* num_literal: FLOATVAL  */
#line 1149 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5181 "bison_parser.cpp"
    break;

  case 284: /* int_literal: INTVAL  */
#line 1152 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5187 "bison_parser.cpp"
    break;

  case 285: /* null_literal: NULL  */
#line 1154 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5193 "bison_parser.cpp"
    break;

  case 286: /* date_literal: DATE STRING  */
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
#line 5208 "bison_parser.cpp"
    break;

  case 287: /* interval_literal: INTVAL duration_field  */
#line 1167 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5214 "bison_parser.cpp"
    break;

  case 288: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1168 "bison_parser.y"
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
#line 5230 "bison_parser.cpp"
    break;

  case 289: /* interval_literal: INTERVAL STRING  */
#line 1179 "bison_parser.y"
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
#line 5266 "bison_parser.cpp"
    break;

  case 290: /* param_expr: '?'  */
#line 1211 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5276 "bison_parser.cpp"
    break;

  case 292: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1220 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5287 "bison_parser.cpp"
    break;

  case 296: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1229 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5298 "bison_parser.cpp"
    break;

  case 297: /* table_ref_commalist: table_ref_atomic  */
#line 1236 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5307 "bison_parser.cpp"
    break;

  case 298: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1240 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5316 "bison_parser.cpp"
    break;

  case 299: /* table_ref_name: table_name opt_table_alias  */
#line 1245 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5328 "bison_parser.cpp"
    break;

  case 300: /* table_ref_name_no_alias: table_name  */
#line 1253 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5338 "bison_parser.cpp"
    break;

  case 301: /* table_name: IDENTIFIER  */
#line 1259 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5347 "bison_parser.cpp"
    break;

  case 302: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1263 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5356 "bison_parser.cpp"
    break;

  case 303: /* opt_index_name: IDENTIFIER  */
#line 1268 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5362 "bison_parser.cpp"
    break;

  case 304: /* opt_index_name: %empty  */
#line 1269 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5368 "bison_parser.cpp"
    break;

  case 306: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1271 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5374 "bison_parser.cpp"
    break;

  case 308: /* opt_table_alias: %empty  */
#line 1273 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5380 "bison_parser.cpp"
    break;

  case 309: /* alias: AS IDENTIFIER  */
#line 1275 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5386 "bison_parser.cpp"
    break;

  case 310: /* alias: IDENTIFIER  */
#line 1276 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5392 "bison_parser.cpp"
    break;

  case 312: /* opt_alias: %empty  */
#line 1278 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5398 "bison_parser.cpp"
    break;

  case 313: /* opt_locking_clause: opt_locking_clause_list  */
#line 1284 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5404 "bison_parser.cpp"
    break;

  case 314: /* opt_locking_clause: %empty  */
#line 1285 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5410 "bison_parser.cpp"
    break;

  case 315: /* opt_locking_clause_list: locking_clause  */
#line 1287 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5419 "bison_parser.cpp"
    break;

  case 316: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1291 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5428 "bison_parser.cpp"
    break;

  case 317: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1296 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5439 "bison_parser.cpp"
    break;

  case 318: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1302 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5450 "bison_parser.cpp"
    break;

  case 319: /* row_lock_mode: UPDATE  */
#line 1309 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5456 "bison_parser.cpp"
    break;

  case 320: /* row_lock_mode: NO KEY UPDATE  */
#line 1310 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5462 "bison_parser.cpp"
    break;

  case 321: /* row_lock_mode: SHARE  */
#line 1311 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5468 "bison_parser.cpp"
    break;

  case 322: /* row_lock_mode: KEY SHARE  */
#line 1312 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5474 "bison_parser.cpp"
    break;

  case 323: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1314 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5480 "bison_parser.cpp"
    break;

  case 324: /* opt_row_lock_policy: NOWAIT  */
#line 1315 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5486 "bison_parser.cpp"
    break;

  case 325: /* opt_row_lock_policy: %empty  */
#line 1316 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5492 "bison_parser.cpp"
    break;

  case 327: /* opt_with_clause: %empty  */
#line 1322 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5498 "bison_parser.cpp"
    break;

  case 328: /* with_clause: WITH with_description_list  */
#line 1324 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5504 "bison_parser.cpp"
    break;

  case 329: /* with_description_list: with_description  */
#line 1326 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5513 "bison_parser.cpp"
    break;

  case 330: /* with_description_list: with_description_list ',' with_description  */
#line 1330 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5522 "bison_parser.cpp"
    break;

  case 331: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1335 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5532 "bison_parser.cpp"
    break;

  case 332: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1345 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5544 "bison_parser.cpp"
    break;

  case 333: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1352 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5557 "bison_parser.cpp"
    break;

  case 334: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1360 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5570 "bison_parser.cpp"
    break;

  case 335: /* opt_join_type: INNER  */
#line 1369 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5576 "bison_parser.cpp"
    break;

  case 336: /* opt_join_type: LEFT OUTER  */
#line 1370 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5582 "bison_parser.cpp"
    break;

  case 337: /* opt_join_type: LEFT  */
#line 1371 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5588 "bison_parser.cpp"
    break;

  case 338: /* opt_join_type: RIGHT OUTER  */
#line 1372 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5594 "bison_parser.cpp"
    break;

  case 339: /* opt_join_type: RIGHT  */
#line 1373 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5600 "bison_parser.cpp"
    break;

  case 340: /* opt_join_type: FULL OUTER  */
#line 1374 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5606 "bison_parser.cpp"
    break;

  case 341: /* opt_join_type: OUTER  */
#line 1375 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5612 "bison_parser.cpp"
    break;

  case 342: /* opt_join_type: FULL  */
#line 1376 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5618 "bison_parser.cpp"
    break;

  case 343: /* opt_join_type: CROSS  */
#line 1377 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5624 "bison_parser.cpp"
    break;

  case 344: /* opt_join_type: %empty  */
#line 1378 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5630 "bison_parser.cpp"
    break;

  case 348: /* ident_commalist: IDENTIFIER  */
#line 1389 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5639 "bison_parser.cpp"
    break;

  case 349: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1393 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5648 "bison_parser.cpp"
    break;


#line 5652 "bison_parser.cpp"

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

#line 1399 "bison_parser.y"


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

    // clang-format on
