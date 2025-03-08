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
  YYSYMBOL_PRIMARY = 28,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 29,                   /* SCHEMAS  */
  YYSYMBOL_CHARACTER_VARYING = 30,         /* CHARACTER_VARYING  */
  YYSYMBOL_REAL = 31,                      /* REAL  */
  YYSYMBOL_DECIMAL = 32,                   /* DECIMAL  */
  YYSYMBOL_SMALLINT = 33,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 34,                    /* BIGINT  */
  YYSYMBOL_SPATIAL = 35,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 36,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 37,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 38,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 39,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 40,                    /* COLUMN  */
  YYSYMBOL_CREATE = 41,                    /* CREATE  */
  YYSYMBOL_DELETE = 42,                    /* DELETE  */
  YYSYMBOL_DIRECT = 43,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 44,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 45,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 46,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 47,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 48,                   /* EXTRACT  */
  YYSYMBOL_CAST = 49,                      /* CAST  */
  YYSYMBOL_FORMAT = 50,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 51,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 52,                    /* HAVING  */
  YYSYMBOL_IMPORT = 53,                    /* IMPORT  */
  YYSYMBOL_INSERT = 54,                    /* INSERT  */
  YYSYMBOL_ISNULL = 55,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 56,                    /* OFFSET  */
  YYSYMBOL_RENAME = 57,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 58,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 59,                    /* SELECT  */
  YYSYMBOL_SORTED = 60,                    /* SORTED  */
  YYSYMBOL_TABLES = 61,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 62,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 63,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 64,                    /* UPDATE  */
  YYSYMBOL_VALUES = 65,                    /* VALUES  */
  YYSYMBOL_AFTER = 66,                     /* AFTER  */
  YYSYMBOL_ALTER = 67,                     /* ALTER  */
  YYSYMBOL_CROSS = 68,                     /* CROSS  */
  YYSYMBOL_DELTA = 69,                     /* DELTA  */
  YYSYMBOL_FLOAT = 70,                     /* FLOAT  */
  YYSYMBOL_GROUP = 71,                     /* GROUP  */
  YYSYMBOL_INDEX = 72,                     /* INDEX  */
  YYSYMBOL_INNER = 73,                     /* INNER  */
  YYSYMBOL_LIMIT = 74,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 75,                     /* LOCAL  */
  YYSYMBOL_MERGE = 76,                     /* MERGE  */
  YYSYMBOL_MINUS = 77,                     /* MINUS  */
  YYSYMBOL_ORDER = 78,                     /* ORDER  */
  YYSYMBOL_OVER = 79,                      /* OVER  */
  YYSYMBOL_OUTER = 80,                     /* OUTER  */
  YYSYMBOL_RIGHT = 81,                     /* RIGHT  */
  YYSYMBOL_TABLE = 82,                     /* TABLE  */
  YYSYMBOL_UNION = 83,                     /* UNION  */
  YYSYMBOL_USING = 84,                     /* USING  */
  YYSYMBOL_WHERE = 85,                     /* WHERE  */
  YYSYMBOL_CALL = 86,                      /* CALL  */
  YYSYMBOL_CASE = 87,                      /* CASE  */
  YYSYMBOL_CHAR = 88,                      /* CHAR  */
  YYSYMBOL_COPY = 89,                      /* COPY  */
  YYSYMBOL_DATE = 90,                      /* DATE  */
  YYSYMBOL_DATETIME = 91,                  /* DATETIME  */
  YYSYMBOL_DESC = 92,                      /* DESC  */
  YYSYMBOL_DROP = 93,                      /* DROP  */
  YYSYMBOL_ELSE = 94,                      /* ELSE  */
  YYSYMBOL_FILE = 95,                      /* FILE  */
  YYSYMBOL_FROM = 96,                      /* FROM  */
  YYSYMBOL_FULL = 97,                      /* FULL  */
  YYSYMBOL_HASH = 98,                      /* HASH  */
  YYSYMBOL_HINT = 99,                      /* HINT  */
  YYSYMBOL_INTO = 100,                     /* INTO  */
  YYSYMBOL_JOIN = 101,                     /* JOIN  */
  YYSYMBOL_LEFT = 102,                     /* LEFT  */
  YYSYMBOL_LIKE = 103,                     /* LIKE  */
  YYSYMBOL_LOAD = 104,                     /* LOAD  */
  YYSYMBOL_LONG = 105,                     /* LONG  */
  YYSYMBOL_NULL = 106,                     /* NULL  */
  YYSYMBOL_PARTITION = 107,                /* PARTITION  */
  YYSYMBOL_PLAN = 108,                     /* PLAN  */
  YYSYMBOL_SHOW = 109,                     /* SHOW  */
  YYSYMBOL_TEXT = 110,                     /* TEXT  */
  YYSYMBOL_THEN = 111,                     /* THEN  */
  YYSYMBOL_TIME = 112,                     /* TIME  */
  YYSYMBOL_VIEW = 113,                     /* VIEW  */
  YYSYMBOL_WHEN = 114,                     /* WHEN  */
  YYSYMBOL_WITH = 115,                     /* WITH  */
  YYSYMBOL_ADD = 116,                      /* ADD  */
  YYSYMBOL_ALL = 117,                      /* ALL  */
  YYSYMBOL_AND = 118,                      /* AND  */
  YYSYMBOL_ASC = 119,                      /* ASC  */
  YYSYMBOL_END = 120,                      /* END  */
  YYSYMBOL_FOR = 121,                      /* FOR  */
  YYSYMBOL_INT = 122,                      /* INT  */
  YYSYMBOL_KEY = 123,                      /* KEY  */
  YYSYMBOL_NOT = 124,                      /* NOT  */
  YYSYMBOL_OFF = 125,                      /* OFF  */
  YYSYMBOL_SET = 126,                      /* SET  */
  YYSYMBOL_TOP = 127,                      /* TOP  */
  YYSYMBOL_AS = 128,                       /* AS  */
  YYSYMBOL_BY = 129,                       /* BY  */
  YYSYMBOL_IF = 130,                       /* IF  */
  YYSYMBOL_IN = 131,                       /* IN  */
  YYSYMBOL_IS = 132,                       /* IS  */
  YYSYMBOL_OF = 133,                       /* OF  */
  YYSYMBOL_ON = 134,                       /* ON  */
  YYSYMBOL_OR = 135,                       /* OR  */
  YYSYMBOL_TO = 136,                       /* TO  */
  YYSYMBOL_NO = 137,                       /* NO  */
  YYSYMBOL_ARRAY = 138,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 139,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 140,                    /* ILIKE  */
  YYSYMBOL_SECOND = 141,                   /* SECOND  */
  YYSYMBOL_MINUTE = 142,                   /* MINUTE  */
  YYSYMBOL_HOUR = 143,                     /* HOUR  */
  YYSYMBOL_DAY = 144,                      /* DAY  */
  YYSYMBOL_MONTH = 145,                    /* MONTH  */
  YYSYMBOL_YEAR = 146,                     /* YEAR  */
  YYSYMBOL_SECONDS = 147,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 148,                  /* MINUTES  */
  YYSYMBOL_HOURS = 149,                    /* HOURS  */
  YYSYMBOL_DAYS = 150,                     /* DAYS  */
  YYSYMBOL_MONTHS = 151,                   /* MONTHS  */
  YYSYMBOL_YEARS = 152,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 153,                 /* INTERVAL  */
  YYSYMBOL_TRUE = 154,                     /* TRUE  */
  YYSYMBOL_FALSE = 155,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 156,                  /* BOOLEAN  */
  YYSYMBOL_FOREIGN = 157,                  /* FOREIGN  */
  YYSYMBOL_TRANSACTION = 158,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 159,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 160,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 161,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 162,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 163,                     /* SKIP  */
  YYSYMBOL_LOCKED = 164,                   /* LOCKED  */
  YYSYMBOL_SHARE = 165,                    /* SHARE  */
  YYSYMBOL_REFERENCES = 166,               /* REFERENCES  */
  YYSYMBOL_RANGE = 167,                    /* RANGE  */
  YYSYMBOL_ROWS = 168,                     /* ROWS  */
  YYSYMBOL_GROUPS = 169,                   /* GROUPS  */
  YYSYMBOL_UNBOUNDED = 170,                /* UNBOUNDED  */
  YYSYMBOL_FOLLOWING = 171,                /* FOLLOWING  */
  YYSYMBOL_PRECEDING = 172,                /* PRECEDING  */
  YYSYMBOL_CURRENT_ROW = 173,              /* CURRENT_ROW  */
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
#define YYLAST   969

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
       0,   332,   332,   351,   357,   364,   368,   372,   373,   374,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     391,   392,   394,   398,   403,   407,   417,   418,   419,   421,
     421,   427,   433,   435,   439,   451,   457,   470,   485,   487,
     488,   489,   491,   500,   504,   514,   524,   535,   551,   552,
     557,   568,   581,   593,   600,   607,   616,   617,   619,   623,
     628,   629,   631,   638,   639,   640,   641,   642,   643,   644,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   660,   661,   663,   664,   665,   667,   668,   670,   674,
     678,   683,   691,   692,   693,   694,   696,   697,   698,   700,
     708,   714,   720,   726,   732,   733,   740,   746,   748,   758,
     765,   776,   783,   791,   792,   799,   806,   810,   815,   825,
     829,   833,   845,   845,   847,   848,   857,   858,   860,   874,
     886,   891,   895,   899,   904,   905,   907,   917,   918,   920,
     922,   923,   925,   927,   928,   930,   935,   937,   938,   940,
     941,   943,   947,   952,   954,   955,   956,   960,   961,   963,
     964,   965,   966,   967,   968,   973,   977,   983,   984,   986,
     990,   995,   995,   999,  1007,  1008,  1010,  1019,  1019,  1019,
    1019,  1019,  1021,  1022,  1022,  1022,  1022,  1022,  1022,  1022,
    1022,  1023,  1023,  1027,  1027,  1029,  1030,  1031,  1032,  1033,
    1035,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
    1044,  1046,  1047,  1049,  1050,  1051,  1052,  1056,  1057,  1058,
    1059,  1061,  1062,  1064,  1065,  1067,  1068,  1069,  1070,  1071,
    1072,  1073,  1077,  1078,  1082,  1083,  1085,  1086,  1091,  1092,
    1093,  1097,  1098,  1099,  1101,  1102,  1103,  1104,  1105,  1107,
    1109,  1111,  1112,  1113,  1114,  1115,  1116,  1118,  1119,  1120,
    1121,  1122,  1123,  1125,  1125,  1127,  1129,  1131,  1133,  1134,
    1135,  1136,  1138,  1138,  1138,  1138,  1138,  1138,  1138,  1140,
    1142,  1143,  1145,  1146,  1148,  1150,  1152,  1163,  1164,  1175,
    1207,  1216,  1216,  1223,  1223,  1225,  1225,  1232,  1236,  1241,
    1249,  1255,  1259,  1264,  1265,  1267,  1267,  1269,  1269,  1271,
    1272,  1274,  1274,  1280,  1281,  1283,  1287,  1292,  1298,  1305,
    1306,  1307,  1308,  1310,  1311,  1312,  1318,  1318,  1320,  1322,
    1326,  1331,  1341,  1348,  1356,  1365,  1366,  1367,  1368,  1369,
    1370,  1371,  1372,  1373,  1374,  1376,  1382,  1382,  1385,  1389
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
  "PRIMARY", "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT",
  "BIGINT", "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE",
  "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT",
  "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED",
  "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OVER", "OUTER", "RIGHT", "TABLE", "UNION",
  "USING", "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME",
  "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO",
  "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PARTITION", "PLAN",
  "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL",
  "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TOP",
  "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "NO", "ARRAY",
  "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR",
  "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS", "INTERVAL",
  "TRUE", "FALSE", "BOOLEAN", "FOREIGN", "TRANSACTION", "BEGIN", "COMMIT",
  "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE", "REFERENCES", "RANGE",
  "ROWS", "GROUPS", "UNBOUNDED", "FOLLOWING", "PRECEDING", "CURRENT_ROW",
  "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
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

#define YYPACT_NINF (-561)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-347)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     650,    48,    84,    98,   110,    84,    -3,    64,    70,   118,
      84,   171,    15,   199,    34,   226,   105,   105,   105,   267,
      76,  -561,   164,  -561,   164,  -561,  -561,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,  -561,  -561,  -561,   -30,  -561,   297,
      94,  -561,   122,   241,  -561,   213,   213,   213,    84,   308,
      84,   203,  -561,   229,   -30,   212,   -39,   229,   229,   229,
      84,  -561,   240,   177,  -561,  -561,  -561,  -561,  -561,  -561,
     641,  -561,   283,  -561,  -561,   260,   192,  -561,   186,  -561,
     408,   178,   414,   292,   420,    84,    84,   362,  -561,   341,
     261,   460,   418,    84,   272,   274,   457,   457,   457,   473,
      84,    84,  -561,   276,   226,  -561,   285,   475,   467,  -561,
    -561,  -561,   -30,   365,   354,   -30,   161,  -561,  -561,  -561,
     466,   296,   481,  -561,   486,  -561,  -561,    26,  -561,   298,
     294,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,   447,  -561,   363,   -51,   261,   380,
    -561,   457,   496,    58,   327,   -41,  -561,  -561,   409,  -561,
    -561,  -561,   -49,   -49,   -49,  -561,  -561,  -561,  -561,  -561,
     500,  -561,  -561,  -561,   380,   429,  -561,  -561,   192,  -561,
    -561,   380,   429,   380,   149,   387,  -561,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,   103,  -561,   256,  -561,  -561,  -561,   178,  -561,    84,
     507,   396,    23,   384,   100,   322,   326,   328,   172,   390,
     329,   468,  -561,   302,    51,   458,  -561,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,  -561,   423,  -561,    28,   331,  -561,   380,   460,  -561,
     485,  -561,  -561,   333,    31,  -561,   362,  -561,   336,    29,
    -561,   434,   334,  -561,    30,   161,   -30,   335,  -561,   221,
     161,    51,   480,    50,    22,  -561,   387,  -561,   410,  -561,
    -561,   344,   444,  -561,   736,   419,   347,   424,    37,  -561,
    -561,  -561,   396,    11,    16,   482,   256,   380,   380,   210,
      80,   353,   468,   720,   380,    60,   355,    46,   380,   380,
     468,  -561,   468,   -42,   357,   -34,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   475,    84,  -561,   548,   178,    51,  -561,   229,    31,
     549,   308,    83,  -561,   178,  -561,   500,    19,   362,  -561,
     380,  -561,   551,  -561,  -561,  -561,  -561,   380,  -561,  -561,
    -561,   387,   380,   380,  -561,   391,   437,  -561,   -70,  -561,
     736,   496,   457,  -561,  -561,   359,  -561,   364,  -561,  -561,
     369,  -561,  -561,   370,  -561,  -561,  -561,  -561,   371,  -561,
    -561,   214,   374,   496,   375,  -561,    23,  -561,   490,   380,
    -561,  -561,   376,   476,   218,   119,   130,   380,   380,  -561,
     482,   474,  -124,  -561,  -561,  -561,   453,   689,   750,   468,
     386,   302,  -561,   478,   389,   750,   750,   750,   750,   778,
     778,   778,   778,    60,    60,   -75,   -75,   -75,   -87,   393,
    -561,  -561,   147,   578,   175,  -561,  -561,  -561,    38,   184,
    -561,   396,  -561,   217,  -561,   394,  -561,    39,  -561,   515,
    -561,  -561,  -561,  -561,    51,    51,  -561,   523,   496,  -561,
     430,  -561,   399,   194,  -561,   589,   590,  -561,   593,   594,
     595,  -561,   479,  -561,  -561,   497,    84,  -561,   214,  -561,
    -561,   496,   209,   496,  -561,   411,  -561,   215,  -561,   380,
     736,   380,   380,  -561,   244,   181,   426,  -561,   468,   750,
     302,   431,   216,  -561,  -561,  -561,  -561,  -561,   601,   308,
    -561,   432,   518,  -561,  -561,  -561,   544,   547,   550,   527,
      19,   626,  -561,  -561,  -561,   502,  -561,  -561,  -103,  -561,
    -561,  -561,   443,   223,   456,   461,   464,  -561,  -561,   261,
    -561,  -561,   228,  -561,   236,   531,   490,    71,   465,    51,
     255,  -561,   380,  -561,   720,   470,   247,  -561,  -561,  -561,
    -561,    39,    19,  -561,  -561,  -561,    19,   351,   459,   380,
    -561,  -561,  -561,   645,  -561,  -561,  -561,  -561,  -561,   494,
     533,   429,  -561,  -561,  -561,  -561,    51,  -561,  -561,  -561,
    -561,   425,   496,   -25,   477,  -561,   380,   154,   483,   380,
     248,   380,  -561,  -561,   334,  -561,  -561,  -561,   484,    18,
     496,    51,  -561,  -561,    51,  -561,   195,    41,   233,  -561,
    -561,   249,  -561,  -561,   552,  -561,  -561,  -561,    41,  -561
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
     153,   314,     0,     0,   319,     0,     0,   321,   325,   316,
       0,     0,     0,    79,    73,     0,    75,    85,    76,    63,
       0,    70,    71,     0,    67,    68,    74,    77,    82,    72,
      64,    87,     0,     0,     0,    52,     0,    55,   235,     0,
     269,   271,     0,     0,     0,     0,     0,     0,     0,   219,
       0,     0,     0,   192,   182,   211,   212,     0,   207,     0,
       0,     0,   198,     0,   210,   209,   225,   226,   227,   228,
     229,   230,   231,   202,   201,   204,   203,   205,   206,     0,
      35,   349,     0,     0,     0,    45,    43,    40,     0,     0,
      23,   327,   142,   291,   293,     0,   295,   308,   294,   146,
     166,   309,   152,   129,   163,   161,   322,     0,     0,   324,
       0,   317,     0,     0,    51,     0,     0,    69,     0,     0,
       0,    78,     0,    93,    94,     0,     0,    62,    86,    88,
      90,     0,     0,     0,    59,     0,   232,     0,   223,     0,
       0,     0,     0,   217,     0,     0,     0,   265,     0,   208,
       0,     0,     0,   199,   266,   111,   108,    39,     0,     0,
      25,     0,     0,   343,   335,   341,   339,   342,   337,     0,
       0,     0,   307,   299,   305,     0,   136,   320,   325,   323,
     172,    54,     0,     0,     0,     0,     0,    92,    95,   114,
      89,    91,     0,    97,     0,   237,   235,     0,     0,   221,
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
    -561,  -561,  -561,   597,  -561,   649,  -561,   323,  -561,   417,
    -561,  -561,  -561,  -561,  -316,   -81,   286,   342,  -561,  -561,
    -561,   412,  -561,   278,  -561,  -330,  -561,  -561,  -561,  -561,
     187,  -561,  -432,  -561,   -44,  -561,  -561,  -561,  -561,  -561,
    -561,  -142,  -561,  -561,   436,  -210,   -76,  -561,    68,   -50,
     -29,  -561,  -561,   -74,   392,  -561,  -561,  -561,  -144,  -561,
    -561,  -170,  -561,   330,  -561,  -561,  -150,  -297,  -561,  -270,
     489,   488,   340,  -147,  -191,  -561,  -561,  -561,  -561,  -561,
    -561,   381,  -561,  -561,  -561,   137,  -561,  -561,  -561,  -560,
    -561,  -561,  -149,  -561,  -561,  -561,  -561,  -561,  -561,   -61,
    -561,  -561,   559,   -98,  -561,  -561,   570,  -561,  -561,  -480,
     126,  -561,  -561,  -561,    -2,  -561,  -561,   128,   438,  -561,
     339,  -561,   433,  -561,   163,  -561,  -561,  -561,   602,  -561,
    -561,  -561,  -561,  -350
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
      56,   249,   270,    99,   100,   101,   163,   164,    40,   400,
     133,   473,    40,   173,   626,   446,   284,   611,   303,    75,
     305,   119,   120,   351,   269,   627,   271,   273,   178,   182,
     472,   178,   351,   492,   149,   210,    87,   626,    90,   115,
     577,   285,   316,    60,   279,   340,   551,    97,   102,   469,
     470,   419,   518,   468,   316,   442,   253,   634,   507,    45,
     242,   299,   422,   350,   449,    39,   307,   211,   639,    46,
      55,   341,   397,   147,   148,   286,   364,    40,   519,   420,
     423,   158,   469,   470,   334,    61,   601,    98,   166,   167,
     336,    42,   497,   246,   331,    76,   363,   118,   119,   120,
      47,   303,   343,    43,   330,   355,   331,    75,   538,   417,
     361,   418,    94,   245,   512,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     133,   552,   212,   554,   254,   365,   133,   403,   308,   266,
     404,   405,   214,   118,   119,   120,   248,   605,   352,   366,
      48,   415,   416,    54,   308,   309,    49,   531,   308,   308,
     558,   168,   350,   306,   407,   214,   118,   119,   120,   124,
     287,   309,   118,   119,   120,   309,   309,   367,   628,   308,
     356,   629,   178,   122,   408,   109,   215,   216,   217,   316,
     409,   109,   401,   570,   459,   398,   309,   281,    54,   123,
     269,   628,   451,   566,   629,   464,   465,   183,    50,   215,
     216,   217,   333,   345,   502,   334,   346,   121,   509,    62,
     501,   395,   110,   439,   396,   184,   218,   308,   110,   122,
     414,   521,   482,   522,   408,   402,   327,   328,   329,   330,
     503,   331,   610,    53,   309,   123,   124,   125,   126,   218,
     504,   505,   122,    65,   114,   593,   272,    69,   122,   111,
     631,    57,    70,   219,   133,   111,   483,   447,   123,    72,
     448,    58,   603,   133,   123,   523,   298,   220,   127,    80,
     524,   474,   562,   293,   443,   294,   219,   525,   526,   308,
      79,   128,   124,   125,   126,   214,   118,   119,   120,   614,
     220,    88,    59,   358,   527,    81,   309,   564,  -344,   528,
     484,   615,   616,   617,   298,   124,   125,   126,   308,    91,
     440,   124,   125,   126,   221,   222,   308,    82,   485,   308,
     359,   515,   223,    83,   207,   309,   500,   128,    96,   215,
     216,   217,   557,   309,   559,   560,   309,   221,   222,    92,
     506,    75,   308,   127,   561,   223,   632,   633,   103,   517,
     128,   511,   448,   308,   104,   595,   128,   522,   520,   309,
     486,   207,   106,   214,   118,   119,   120,   107,   541,   218,
     309,   334,   122,   214,   118,   119,   120,   186,   187,   188,
     189,   190,   191,   553,   635,   636,   334,   587,   123,   556,
     568,   117,   350,   350,  -297,   596,   144,   582,   142,   523,
     583,   607,   588,   145,   524,   334,   219,   215,   216,   217,
     589,   525,   526,   334,    67,    68,   151,   301,   216,   217,
     220,   598,   623,   637,   350,   334,   334,   149,   527,   256,
     257,   522,  -344,   528,   152,   124,   125,   126,    85,    86,
     565,   161,   621,   154,   624,   157,   159,   218,   160,    54,
     122,   214,   118,   119,   120,   310,   165,   218,   170,   173,
     122,   171,   179,   181,   549,   202,   123,   221,   222,   201,
     203,   207,   206,   523,   208,   223,   123,   209,   524,   243,
     128,   247,   250,   258,   219,   525,   526,   114,   274,   608,
     282,    15,   292,   311,   302,   295,   216,   217,   220,   296,
     304,   297,   527,   332,   335,   338,   339,   528,   220,   344,
     347,   350,   357,   124,   125,   126,   362,   371,   370,   372,
     393,    75,   392,   124,   125,   126,   410,   394,  -298,   413,
     421,   441,   475,   445,   461,   218,   466,   476,   122,   609,
     467,   312,   478,   479,   480,   221,   222,   491,   493,   495,
     498,   308,   499,   223,   123,   221,   222,   419,   128,   510,
     331,   516,   313,   223,   513,   514,   535,   537,   128,   314,
     315,   530,   302,   540,   539,   542,   543,   316,   317,   544,
     545,   546,   547,   548,   555,   569,   220,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   572,
     563,   124,   125,   126,   573,   567,   571,   574,   576,   578,
     575,   579,   318,   319,   320,   321,   322,   581,   590,   323,
     324,  -346,   325,   326,   327,   328,   329,   330,     1,   331,
     584,   604,   602,   221,   222,   585,     2,     1,   586,   594,
     486,   223,   606,     3,   597,     2,   128,   105,     4,   450,
     638,   613,     3,    74,   494,   550,   620,     4,   625,     5,
     406,   444,     6,     7,   337,   399,   204,   462,     5,   278,
     460,     6,     7,   592,     8,     9,   280,   205,   600,   599,
     463,   580,   353,     8,     9,    10,   169,     0,    11,   369,
       0,     0,     0,     0,    10,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,    13,     0,     0,     0,     0,    12,
       0,     0,     0,    13,   311,     0,     0,   373,     0,     0,
      14,     0,     0,     0,     0,     0,    15,     0,     0,    14,
       0,   374,     0,     0,     0,    15,   375,   376,   377,   378,
     379,     0,   380,     0,     0,   311,     0,     0,     0,     0,
     381,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   312,     0,     0,     0,     0,     0,     0,     0,
      16,    17,    18,     0,     0,   311,   382,   508,     0,    16,
      17,    18,     0,   411,     0,     0,     0,     0,     0,     0,
       0,   315,     0,   312,   383,     0,   384,   385,   316,   317,
       0,     0,     0,   311,     0,     0,     0,     0,     0,     0,
       0,   386,     0,     0,   411,     0,   387,     0,   388,     0,
       0,     0,   315,  -347,     0,     0,     0,     0,   389,   316,
     317,     0,     0,   318,   319,   320,   321,   322,     0,     0,
     323,   324,     0,   325,   326,   327,   328,   329,   330,     0,
     331,     0,   315,     0,     0,     0,     0,     0,     0,   316,
    -347,     0,   390,     0,   318,   319,   320,   321,   322,     0,
       0,   323,   324,     0,   325,   326,   327,   328,   329,   330,
     315,   331,     0,     0,     0,     0,     0,   316,     0,     0,
       0,     0,     0,     0,  -347,  -347,  -347,   321,   322,     0,
       0,   323,   324,     0,   325,   326,   327,   328,   329,   330,
       0,   331,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -347,  -347,     0,     0,  -347,
    -347,     0,   325,   326,   327,   328,   329,   330,     0,   331
};

static const yytype_int16 yycheck[] =
{
       2,   211,   149,     5,    54,   175,   148,   304,    10,   107,
      12,   155,   182,    57,    58,    59,    97,    98,     3,     3,
      81,   371,     3,    12,     6,   341,     3,    52,   219,    59,
     221,     5,     6,     3,   181,    17,   183,   184,   112,   115,
     370,   115,     3,   393,    85,    96,    48,     6,    50,    78,
     530,    28,   139,    19,   203,    24,   488,    96,    60,   162,
     163,   103,    24,   133,   139,   335,   115,   627,   192,    72,
     151,   218,   106,   197,   344,    27,   223,   128,   638,    82,
      12,    50,   292,    85,    86,    62,    64,     3,    50,   131,
     124,    93,   162,   163,   197,    61,   576,   136,   100,   101,
     247,     3,   399,   153,   191,    37,    56,     4,     5,     6,
     113,   302,   256,     3,   189,   265,   191,    59,   468,   310,
     270,   312,    54,    65,   421,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     201,   491,   193,   493,   193,   123,   207,   296,   118,   178,
     297,   298,     3,     4,     5,     6,   197,   589,   128,   137,
      96,   308,   309,   193,   118,   135,    96,   128,   118,   118,
     500,   103,   197,   223,    94,     3,     4,     5,     6,   153,
     157,   135,     4,     5,     6,   135,   135,   165,   170,   118,
     266,   173,   266,    90,   114,     9,    47,    48,    49,   139,
     120,     9,   186,   519,   348,   194,   135,   209,   193,   106,
     357,   170,   193,   510,   173,   362,   363,    56,   100,    47,
      48,    49,   194,   194,    94,   197,   197,    49,   419,     3,
     111,   194,    46,   331,   197,    74,    87,   118,    46,    90,
     194,   451,    28,    26,   114,   295,   186,   187,   188,   189,
     120,   191,   602,    82,   135,   106,   153,   154,   155,    87,
     407,   408,    90,   158,    78,   194,   117,     0,    90,    83,
     620,    72,   196,   124,   335,    83,    62,   194,   106,   115,
     197,    82,   579,   344,   106,    68,   114,   138,   185,   195,
      73,   372,   111,   193,   338,   195,   124,    80,    81,   118,
       3,   198,   153,   154,   155,     3,     4,     5,     6,   606,
     138,     3,   113,    92,    97,   193,   135,   508,   101,   102,
     106,   167,   168,   169,   114,   153,   154,   155,   118,   126,
     332,   153,   154,   155,   185,   186,   118,    96,   124,   118,
     119,   194,   193,   130,   197,   135,   128,   198,   136,    47,
      48,    49,   499,   135,   501,   502,   135,   185,   186,   130,
     410,    59,   118,   185,   120,   193,   171,   172,   128,   194,
     198,   421,   197,   118,   197,   120,   198,    26,   194,   135,
     166,   197,    99,     3,     4,     5,     6,   127,   194,    87,
     135,   197,    90,     3,     4,     5,     6,   141,   142,   143,
     144,   145,   146,   194,   171,   172,   197,   549,   106,   194,
     194,     3,   197,   197,   197,   562,   124,   194,     4,    68,
     197,   591,   194,     3,    73,   197,   124,    47,    48,    49,
     194,    80,    81,   197,    17,    18,    95,    47,    48,    49,
     138,   194,   194,   194,   197,   197,   197,    85,    97,   163,
     164,    26,   101,   102,   193,   153,   154,   155,    46,    47,
     510,     4,   609,     3,   611,    47,   194,    87,   194,   193,
      90,     3,     4,     5,     6,    17,     3,    87,   193,    12,
      90,     6,   117,   129,   486,     4,   106,   185,   186,   193,
       4,   197,   194,    68,    47,   193,   106,   134,    73,     3,
     198,   174,    93,     3,   124,    80,    81,    78,   121,    84,
       3,   115,   128,    55,   124,   193,    48,    49,   138,   193,
     191,   193,    97,   100,   193,    40,   193,   102,   138,   193,
      96,   197,   197,   153,   154,   155,    56,   193,   128,    95,
     193,    59,   123,   153,   154,   155,   193,   123,   197,   194,
     193,     3,   193,     4,     3,    87,   165,   193,    90,   134,
     123,   103,   193,   193,   193,   185,   186,   193,   193,    79,
     194,   118,    96,   193,   106,   185,   186,   103,   198,   193,
     191,     3,   124,   193,   106,   192,    71,    64,   198,   131,
     132,   197,   124,   194,   164,     6,     6,   139,   140,     6,
       6,     6,   123,   106,   193,     4,   138,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   101,
     194,   153,   154,   155,    80,   194,   194,    80,   101,     3,
      80,   129,   174,   175,   176,   177,   178,   194,   107,   181,
     182,     0,   184,   185,   186,   187,   188,   189,     7,   191,
     194,     6,   193,   185,   186,   194,    15,     7,   194,   194,
     166,   193,   129,    22,   194,    15,   198,    70,    27,   346,
     118,   194,    22,    24,   396,   488,   193,    27,   194,    38,
     299,   339,    41,    42,   248,   293,   127,   357,    38,   201,
     350,    41,    42,   556,    53,    54,   207,   127,   572,   571,
     361,   538,   264,    53,    54,    64,   104,    -1,    67,   276,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    55,    -1,    -1,    11,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,   109,
      -1,    25,    -1,    -1,    -1,   115,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   160,   161,    -1,    -1,    55,    70,   118,    -1,   159,
     160,   161,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,   103,    88,    -1,    90,    91,   139,   140,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,   124,    -1,   110,    -1,   112,    -1,
      -1,    -1,   132,   103,    -1,    -1,    -1,    -1,   122,   139,
     140,    -1,    -1,   174,   175,   176,   177,   178,    -1,    -1,
     181,   182,    -1,   184,   185,   186,   187,   188,   189,    -1,
     191,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   156,    -1,   174,   175,   176,   177,   178,    -1,
      -1,   181,   182,    -1,   184,   185,   186,   187,   188,   189,
     132,   191,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,   178,    -1,
      -1,   181,   182,    -1,   184,   185,   186,   187,   188,   189,
      -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,   178,    -1,    -1,   181,
     182,    -1,   184,   185,   186,   187,   188,   189,    -1,   191
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    27,    38,    41,    42,    53,    54,
      64,    67,    89,    93,   109,   115,   159,   160,   161,   200,
     201,   202,   203,   207,   209,   211,   212,   217,   218,   219,
     232,   234,   237,   238,   239,   241,   244,   324,   325,    27,
       3,   313,     3,     3,   313,    72,    82,   113,    96,    96,
     100,   312,   313,    82,   193,   247,   313,    72,    82,   113,
      19,    61,     3,   326,   327,   158,   208,   208,   208,     0,
     196,   331,   115,   204,   204,    59,   247,   248,   252,     3,
     195,   193,    96,   130,   220,   220,   220,   313,     3,   213,
     313,   126,   130,   233,   247,   248,   136,    96,   136,   233,
     233,   233,   313,   128,   197,   202,    99,   127,   264,     9,
      46,    83,   249,   250,    78,   249,   260,     3,     4,     5,
       6,    49,    90,   106,   153,   154,   155,   185,   198,   267,
     268,   269,   270,   298,   299,   300,   301,   302,   303,   304,
     305,   306,     4,   210,   124,     3,   314,   313,   313,    85,
     257,    95,   193,   240,     3,   242,   243,    47,   313,   194,
     194,     4,   214,   214,   214,     3,   313,   313,   247,   327,
     193,     6,   302,    12,   253,   245,   246,   247,   252,   117,
     251,   129,   245,    56,    74,   265,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   291,   292,
     293,   193,     4,     4,   301,   305,   194,   197,    47,   134,
      96,   128,   193,   240,     3,    47,    48,    49,    87,   124,
     138,   185,   186,   193,   272,   273,   274,   275,   276,   277,
     278,   279,   281,   282,   283,   289,   290,   294,   295,   296,
     297,   298,   214,     3,   332,    65,   248,   174,   197,   257,
      93,   235,   236,   115,   193,   215,   215,   215,     3,   205,
     206,   254,   266,   271,   272,   260,   249,   261,   262,   272,
     260,   272,   117,   272,   121,   319,   320,   321,   270,   291,
     269,   313,     3,   244,     3,    28,    62,   157,   221,   222,
     223,   230,   128,   193,   195,   193,   193,   193,   114,   272,
     280,    47,   124,   273,   191,   273,   248,   272,   118,   135,
      17,    55,   103,   124,   131,   132,   139,   140,   174,   175,
     176,   177,   178,   181,   182,   184,   185,   186,   187,   188,
     189,   191,   100,   194,   197,   193,   272,   243,    40,   193,
      24,    50,   216,   257,   193,   194,   197,    96,   255,   256,
     197,     3,   128,   317,   318,   265,   245,   197,    92,   119,
     263,   265,    56,    56,    64,   123,   137,   165,   322,   321,
     128,   193,    95,    11,    25,    30,    31,    32,    33,    34,
      36,    44,    70,    88,    90,    91,   105,   110,   112,   122,
     156,   224,   123,   193,   123,   194,   197,   244,   194,   253,
       3,   186,   248,   291,   272,   272,   280,    94,   114,   120,
     193,   124,   266,   194,   194,   272,   272,   273,   273,   103,
     131,   193,   106,   124,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   302,
     313,     3,   268,   233,   216,     4,   213,   194,   197,   268,
     206,   193,   307,   308,   309,   310,   311,   313,   328,   257,
     271,     3,   262,   319,   272,   272,   165,   123,   133,   162,
     163,   323,   224,   332,   214,   193,   193,   226,   193,   193,
     193,   225,    28,    62,   106,   124,   166,   227,   228,   229,
     231,   193,   332,   193,   222,    79,   284,   266,   194,    96,
     128,   111,    94,   120,   272,   272,   248,   192,   118,   273,
     193,   248,   266,   106,   192,   194,     3,   194,    24,    50,
     194,   244,    26,    68,    73,    80,    81,    97,   102,   329,
     197,   128,   315,   316,   317,    71,   258,    64,   332,   164,
     194,   194,     6,     6,     6,     6,     6,   123,   106,   313,
     229,   231,   332,   194,   332,   193,   194,   272,   224,   272,
     272,   120,   111,   194,   273,   248,   266,   194,   194,     4,
     213,   194,   101,    80,    80,    80,   101,   308,     3,   129,
     323,   194,   194,   197,   194,   194,   194,   240,   194,   194,
     107,   285,   284,   194,   194,   120,   272,   194,   194,   316,
     309,   308,   193,   266,     6,   231,   129,   260,    84,   134,
     332,    52,   259,   194,   266,   167,   168,   169,   286,   287,
     193,   272,   330,   194,   272,   194,     6,    17,   170,   173,
     288,   332,   171,   172,   288,   171,   172,   194,   118,   288
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
#line 190 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2107 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 190 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2113 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 177 "bison_parser.y"
            { }
#line 2119 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 177 "bison_parser.y"
            { }
#line 2125 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2138 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2144 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2150 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 191 "bison_parser.y"
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

    case YYSYMBOL_hint_list: /* hint_list  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2176 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2182 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2188 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2194 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 190 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2200 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2206 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2212 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 177 "bison_parser.y"
            { }
#line 2218 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 190 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2224 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_import_export_options: /* opt_import_export_options  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2230 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_export_options: /* import_export_options  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).import_export_option_t)); }
#line 2236 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2242 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2248 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2254 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 177 "bison_parser.y"
            { }
#line 2260 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2273 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table_element_t)); }
#line 2279 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2285 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 177 "bison_parser.y"
            { }
#line 2291 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 177 "bison_parser.y"
            { }
#line 2297 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).ival_pair)); }
#line 2303 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2309 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraints: /* column_constraints  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).column_constraints_t)); }
#line 2315 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 177 "bison_parser.y"
            { }
#line 2321 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table_constraint_t)); }
#line 2327 "bison_parser.cpp"
        break;

    case YYSYMBOL_references_spec: /* references_spec  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).references_spec_t)); }
#line 2333 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2339 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 177 "bison_parser.y"
            { }
#line 2345 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2351 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).alter_action_t)); }
#line 2357 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).drop_action_t)); }
#line 2363 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2369 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2375 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2381 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 182 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2394 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2400 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2413 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2419 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2425 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2431 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2437 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2443 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2449 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2455 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2461 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 177 "bison_parser.y"
            { }
#line 2467 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2473 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 177 "bison_parser.y"
            { }
#line 2479 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2492 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2498 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2504 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2510 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2516 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2522 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2535 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2548 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2554 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 177 "bison_parser.y"
            { }
#line 2560 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2566 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2572 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2585 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_extended_literal_list: /* opt_extended_literal_list  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2598 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal_list: /* extended_literal_list  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2611 "bison_parser.cpp"
        break;

    case YYSYMBOL_casted_extended_literal: /* casted_extended_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2617 "bison_parser.cpp"
        break;

    case YYSYMBOL_extended_literal: /* extended_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2623 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2629 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2635 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2641 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2647 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2653 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2659 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2665 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2671 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2677 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2683 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2689 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2695 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2701 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window: /* opt_window  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).window_description)); }
#line 2707 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2720 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).frame_description)); }
#line 2726 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_type: /* frame_type  */
#line 177 "bison_parser.y"
            { }
#line 2732 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).frame_bound)); }
#line 2738 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2744 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2750 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 177 "bison_parser.y"
            { }
#line 2756 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 177 "bison_parser.y"
            { }
#line 2762 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 177 "bison_parser.y"
            { }
#line 2768 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2774 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2780 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2786 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2792 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2798 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2804 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2810 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2816 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2822 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2828 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2834 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2840 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2846 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2852 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2858 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2864 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 191 "bison_parser.y"
            {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2877 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2883 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2889 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 178 "bison_parser.y"
            {
  free( (((*yyvaluep).table_name).name) );
  free( (((*yyvaluep).table_name).schema) );
}
#line 2898 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 190 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2904 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2910 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2916 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2922 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2928 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2934 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).locking_clause_vec)); }
#line 2940 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).locking_t)); }
#line 2946 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 177 "bison_parser.y"
            { }
#line 2952 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 177 "bison_parser.y"
            { }
#line 2958 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2964 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2970 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2976 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2982 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2988 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 177 "bison_parser.y"
            { }
#line 2994 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 199 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 3000 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 182 "bison_parser.y"
            {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 3013 "bison_parser.cpp"
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
#line 79 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3121 "bison_parser.cpp"

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
#line 332 "bison_parser.y"
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
#line 3350 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 351 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3361 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 357 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3372 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 364 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3381 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 368 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3390 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 372 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3396 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 373 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3402 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 374 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3408 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 376 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3414 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 377 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3420 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 378 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3426 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 379 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3432 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 380 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3438 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 381 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3444 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 382 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3450 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 383 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3456 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 384 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3462 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 385 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3468 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 391 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3474 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 392 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3480 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 394 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3489 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 398 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3498 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 403 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3507 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' extended_literal_list ')'  */
#line 407 "bison_parser.y"
                                           {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3517 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 417 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3523 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 418 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3529 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 419 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3535 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 427 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3545 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 435 "bison_parser.y"
                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3554 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_extended_literal_list ')'  */
#line 439 "bison_parser.y"
                                                       {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3564 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 451 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3575 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_import_export_options opt_where  */
#line 457 "bison_parser.y"
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
#line 3592 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 470 "bison_parser.y"
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
#line 3611 "bison_parser.cpp"
    break;

  case 38: /* file_path: STRING  */
#line 485 "bison_parser.y"
                   { (yyval.sval) = (yyvsp[0].sval); }
#line 3617 "bison_parser.cpp"
    break;

  case 39: /* opt_import_export_options: WITH '(' import_export_options ')'  */
#line 487 "bison_parser.y"
                                                               { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3623 "bison_parser.cpp"
    break;

  case 40: /* opt_import_export_options: '(' import_export_options ')'  */
#line 488 "bison_parser.y"
                                { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3629 "bison_parser.cpp"
    break;

  case 41: /* opt_import_export_options: %empty  */
#line 489 "bison_parser.y"
              { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3635 "bison_parser.cpp"
    break;

  case 42: /* import_export_options: import_export_options ',' FORMAT file_type  */
#line 491 "bison_parser.y"
                                                                   {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3649 "bison_parser.cpp"
    break;

  case 43: /* import_export_options: FORMAT file_type  */
#line 500 "bison_parser.y"
                   {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3658 "bison_parser.cpp"
    break;

  case 44: /* import_export_options: import_export_options ',' ENCODING STRING  */
#line 504 "bison_parser.y"
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
#line 3673 "bison_parser.cpp"
    break;

  case 45: /* import_export_options: ENCODING STRING  */
#line 514 "bison_parser.y"
                  {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3682 "bison_parser.cpp"
    break;

  case 46: /* export_statement: COPY table_name TO file_path opt_import_export_options  */
#line 524 "bison_parser.y"
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
#line 3698 "bison_parser.cpp"
    break;

  case 47: /* export_statement: COPY select_with_paren TO file_path opt_import_export_options  */
#line 535 "bison_parser.y"
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
#line 3713 "bison_parser.cpp"
    break;

  case 48: /* show_statement: SHOW TABLES  */
#line 551 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3719 "bison_parser.cpp"
    break;

  case 49: /* show_statement: SHOW COLUMNS table_name  */
#line 552 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3729 "bison_parser.cpp"
    break;

  case 50: /* show_statement: DESCRIBE table_name  */
#line 557 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3739 "bison_parser.cpp"
    break;

  case 51: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 568 "bison_parser.y"
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
#line 3757 "bison_parser.cpp"
    break;

  case 52: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 581 "bison_parser.y"
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
#line 3774 "bison_parser.cpp"
    break;

  case 53: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 593 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3786 "bison_parser.cpp"
    break;

  case 54: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 600 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3798 "bison_parser.cpp"
    break;

  case 55: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 607 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3811 "bison_parser.cpp"
    break;

  case 56: /* opt_not_exists: IF NOT EXISTS  */
#line 616 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3817 "bison_parser.cpp"
    break;

  case 57: /* opt_not_exists: %empty  */
#line 617 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3823 "bison_parser.cpp"
    break;

  case 58: /* table_elem_commalist: table_elem  */
#line 619 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3832 "bison_parser.cpp"
    break;

  case 59: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 623 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3841 "bison_parser.cpp"
    break;

  case 60: /* table_elem: column_def  */
#line 628 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3847 "bison_parser.cpp"
    break;

  case 61: /* table_elem: table_constraint  */
#line 629 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3853 "bison_parser.cpp"
    break;

  case 62: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 631 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraints_t)->constraints, (yyvsp[0].column_constraints_t)->references);
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3864 "bison_parser.cpp"
    break;

  case 63: /* column_type: BIGINT  */
#line 638 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3870 "bison_parser.cpp"
    break;

  case 64: /* column_type: BOOLEAN  */
#line 639 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3876 "bison_parser.cpp"
    break;

  case 65: /* column_type: CHAR '(' INTVAL ')'  */
#line 640 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3882 "bison_parser.cpp"
    break;

  case 66: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 641 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3888 "bison_parser.cpp"
    break;

  case 67: /* column_type: DATE  */
#line 642 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3894 "bison_parser.cpp"
    break;

  case 68: /* column_type: DATETIME  */
#line 643 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3900 "bison_parser.cpp"
    break;

  case 69: /* column_type: DECIMAL opt_decimal_specification  */
#line 644 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3909 "bison_parser.cpp"
    break;

  case 70: /* column_type: DOUBLE  */
#line 648 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3915 "bison_parser.cpp"
    break;

  case 71: /* column_type: FLOAT  */
#line 649 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3921 "bison_parser.cpp"
    break;

  case 72: /* column_type: INT  */
#line 650 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3927 "bison_parser.cpp"
    break;

  case 73: /* column_type: INTEGER  */
#line 651 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3933 "bison_parser.cpp"
    break;

  case 74: /* column_type: LONG  */
#line 652 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3939 "bison_parser.cpp"
    break;

  case 75: /* column_type: REAL  */
#line 653 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3945 "bison_parser.cpp"
    break;

  case 76: /* column_type: SMALLINT  */
#line 654 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3951 "bison_parser.cpp"
    break;

  case 77: /* column_type: TEXT  */
#line 655 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3957 "bison_parser.cpp"
    break;

  case 78: /* column_type: TIME opt_time_precision  */
#line 656 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3963 "bison_parser.cpp"
    break;

  case 79: /* column_type: TIMESTAMP  */
#line 657 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3969 "bison_parser.cpp"
    break;

  case 80: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 658 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3975 "bison_parser.cpp"
    break;

  case 81: /* opt_time_precision: '(' INTVAL ')'  */
#line 660 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3981 "bison_parser.cpp"
    break;

  case 82: /* opt_time_precision: %empty  */
#line 661 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3987 "bison_parser.cpp"
    break;

  case 83: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 663 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3993 "bison_parser.cpp"
    break;

  case 84: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 664 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3999 "bison_parser.cpp"
    break;

  case 85: /* opt_decimal_specification: %empty  */
#line 665 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4005 "bison_parser.cpp"
    break;

  case 86: /* opt_column_constraints: column_constraints  */
#line 667 "bison_parser.y"
                                            { (yyval.column_constraints_t) = (yyvsp[0].column_constraints_t); }
#line 4011 "bison_parser.cpp"
    break;

  case 87: /* opt_column_constraints: %empty  */
#line 668 "bison_parser.y"
              { (yyval.column_constraints_t) = new ColumnConstraints(); }
#line 4017 "bison_parser.cpp"
    break;

  case 88: /* column_constraints: column_constraint  */
#line 670 "bison_parser.y"
                                       {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
}
#line 4026 "bison_parser.cpp"
    break;

  case 89: /* column_constraints: column_constraints column_constraint  */
#line 674 "bison_parser.y"
                                       {
  (yyvsp[-1].column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4035 "bison_parser.cpp"
    break;

  case 90: /* column_constraints: references_spec  */
#line 678 "bison_parser.y"
                  {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyval.column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
}
#line 4045 "bison_parser.cpp"
    break;

  case 91: /* column_constraints: column_constraints references_spec  */
#line 683 "bison_parser.y"
                                     {
  // Multiple foreign keys for the same column could be possible, so we do not raise an error in that case.
  // Think of foreign keys referenced on multiple levels (returned item references sold item references items).
  (yyvsp[-1].column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyvsp[-1].column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4057 "bison_parser.cpp"
    break;

  case 92: /* column_constraint: PRIMARY KEY  */
#line 691 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4063 "bison_parser.cpp"
    break;

  case 93: /* column_constraint: UNIQUE  */
#line 692 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4069 "bison_parser.cpp"
    break;

  case 94: /* column_constraint: NULL  */
#line 693 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4075 "bison_parser.cpp"
    break;

  case 95: /* column_constraint: NOT NULL  */
#line 694 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4081 "bison_parser.cpp"
    break;

  case 96: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 696 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4087 "bison_parser.cpp"
    break;

  case 97: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 697 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4093 "bison_parser.cpp"
    break;

  case 98: /* table_constraint: FOREIGN KEY '(' ident_commalist ')' references_spec  */
#line 698 "bison_parser.y"
                                                      { (yyval.table_constraint_t) = new ForeignKeyConstraint((yyvsp[-2].str_vec), (yyvsp[0].references_spec_t)); }
#line 4099 "bison_parser.cpp"
    break;

  case 99: /* references_spec: REFERENCES table_name opt_column_list  */
#line 700 "bison_parser.y"
                                                        { (yyval.references_spec_t) = new ReferencesSpecification((yyvsp[-1].table_name).schema, (yyvsp[-1].table_name).name, (yyvsp[0].str_vec)); }
#line 4105 "bison_parser.cpp"
    break;

  case 100: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 708 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4116 "bison_parser.cpp"
    break;

  case 101: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 714 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4127 "bison_parser.cpp"
    break;

  case 102: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 720 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4137 "bison_parser.cpp"
    break;

  case 103: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 726 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4147 "bison_parser.cpp"
    break;

  case 104: /* opt_exists: IF EXISTS  */
#line 732 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 4153 "bison_parser.cpp"
    break;

  case 105: /* opt_exists: %empty  */
#line 733 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4159 "bison_parser.cpp"
    break;

  case 106: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 740 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4169 "bison_parser.cpp"
    break;

  case 107: /* alter_action: drop_action  */
#line 746 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4175 "bison_parser.cpp"
    break;

  case 108: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 748 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4184 "bison_parser.cpp"
    break;

  case 109: /* delete_statement: DELETE FROM table_name opt_where  */
#line 758 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4195 "bison_parser.cpp"
    break;

  case 110: /* truncate_statement: TRUNCATE table_name  */
#line 765 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4205 "bison_parser.cpp"
    break;

  case 111: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' extended_literal_list ')'  */
#line 776 "bison_parser.y"
                                                                                               {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4217 "bison_parser.cpp"
    break;

  case 112: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 783 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4229 "bison_parser.cpp"
    break;

  case 113: /* opt_column_list: '(' ident_commalist ')'  */
#line 791 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4235 "bison_parser.cpp"
    break;

  case 114: /* opt_column_list: %empty  */
#line 792 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4241 "bison_parser.cpp"
    break;

  case 115: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 799 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4252 "bison_parser.cpp"
    break;

  case 116: /* update_clause_commalist: update_clause  */
#line 806 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4261 "bison_parser.cpp"
    break;

  case 117: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 810 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4270 "bison_parser.cpp"
    break;

  case 118: /* update_clause: IDENTIFIER '=' expr  */
#line 815 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4280 "bison_parser.cpp"
    break;

  case 119: /* select_statement: opt_with_clause select_with_paren  */
#line 825 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4289 "bison_parser.cpp"
    break;

  case 120: /* select_statement: opt_with_clause select_no_paren  */
#line 829 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4298 "bison_parser.cpp"
    break;

  case 121: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 833 "bison_parser.y"
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
#line 4314 "bison_parser.cpp"
    break;

  case 124: /* select_within_set_operation_no_parentheses: select_clause  */
#line 847 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4320 "bison_parser.cpp"
    break;

  case 125: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 848 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4333 "bison_parser.cpp"
    break;

  case 126: /* select_with_paren: '(' select_no_paren ')'  */
#line 857 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4339 "bison_parser.cpp"
    break;

  case 127: /* select_with_paren: '(' select_with_paren ')'  */
#line 858 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4345 "bison_parser.cpp"
    break;

  case 128: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 860 "bison_parser.y"
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
#line 4364 "bison_parser.cpp"
    break;

  case 129: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 874 "bison_parser.y"
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
#line 4380 "bison_parser.cpp"
    break;

  case 130: /* set_operator: set_type opt_all  */
#line 886 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4389 "bison_parser.cpp"
    break;

  case 131: /* set_type: UNION  */
#line 891 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4398 "bison_parser.cpp"
    break;

  case 132: /* set_type: INTERSECT  */
#line 895 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4407 "bison_parser.cpp"
    break;

  case 133: /* set_type: EXCEPT  */
#line 899 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4416 "bison_parser.cpp"
    break;

  case 134: /* opt_all: ALL  */
#line 904 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4422 "bison_parser.cpp"
    break;

  case 135: /* opt_all: %empty  */
#line 905 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4428 "bison_parser.cpp"
    break;

  case 136: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 907 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4442 "bison_parser.cpp"
    break;

  case 137: /* opt_distinct: DISTINCT  */
#line 917 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4448 "bison_parser.cpp"
    break;

  case 138: /* opt_distinct: %empty  */
#line 918 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4454 "bison_parser.cpp"
    break;

  case 140: /* opt_from_clause: from_clause  */
#line 922 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4460 "bison_parser.cpp"
    break;

  case 141: /* opt_from_clause: %empty  */
#line 923 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4466 "bison_parser.cpp"
    break;

  case 142: /* from_clause: FROM table_ref  */
#line 925 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4472 "bison_parser.cpp"
    break;

  case 143: /* opt_where: WHERE expr  */
#line 927 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4478 "bison_parser.cpp"
    break;

  case 144: /* opt_where: %empty  */
#line 928 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4484 "bison_parser.cpp"
    break;

  case 145: /* opt_group: GROUP BY expr_list opt_having  */
#line 930 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4494 "bison_parser.cpp"
    break;

  case 146: /* opt_group: %empty  */
#line 935 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4500 "bison_parser.cpp"
    break;

  case 147: /* opt_having: HAVING expr  */
#line 937 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4506 "bison_parser.cpp"
    break;

  case 148: /* opt_having: %empty  */
#line 938 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4512 "bison_parser.cpp"
    break;

  case 149: /* opt_order: ORDER BY order_list  */
#line 940 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4518 "bison_parser.cpp"
    break;

  case 150: /* opt_order: %empty  */
#line 941 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4524 "bison_parser.cpp"
    break;

  case 151: /* order_list: order_desc  */
#line 943 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4533 "bison_parser.cpp"
    break;

  case 152: /* order_list: order_list ',' order_desc  */
#line 947 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4542 "bison_parser.cpp"
    break;

  case 153: /* order_desc: expr opt_order_type  */
#line 952 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4548 "bison_parser.cpp"
    break;

  case 154: /* opt_order_type: ASC  */
#line 954 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4554 "bison_parser.cpp"
    break;

  case 155: /* opt_order_type: DESC  */
#line 955 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4560 "bison_parser.cpp"
    break;

  case 156: /* opt_order_type: %empty  */
#line 956 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4566 "bison_parser.cpp"
    break;

  case 157: /* opt_top: TOP int_literal  */
#line 960 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4572 "bison_parser.cpp"
    break;

  case 158: /* opt_top: %empty  */
#line 961 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4578 "bison_parser.cpp"
    break;

  case 159: /* opt_limit: LIMIT expr  */
#line 963 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4584 "bison_parser.cpp"
    break;

  case 160: /* opt_limit: OFFSET expr  */
#line 964 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4590 "bison_parser.cpp"
    break;

  case 161: /* opt_limit: LIMIT expr OFFSET expr  */
#line 965 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4596 "bison_parser.cpp"
    break;

  case 162: /* opt_limit: LIMIT ALL  */
#line 966 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4602 "bison_parser.cpp"
    break;

  case 163: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 967 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4608 "bison_parser.cpp"
    break;

  case 164: /* opt_limit: %empty  */
#line 968 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4614 "bison_parser.cpp"
    break;

  case 165: /* expr_list: expr_alias  */
#line 973 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4623 "bison_parser.cpp"
    break;

  case 166: /* expr_list: expr_list ',' expr_alias  */
#line 977 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4632 "bison_parser.cpp"
    break;

  case 167: /* opt_extended_literal_list: extended_literal_list  */
#line 983 "bison_parser.y"
                                                  { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4638 "bison_parser.cpp"
    break;

  case 168: /* opt_extended_literal_list: %empty  */
#line 984 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4644 "bison_parser.cpp"
    break;

  case 169: /* extended_literal_list: casted_extended_literal  */
#line 986 "bison_parser.y"
                                                {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4653 "bison_parser.cpp"
    break;

  case 170: /* extended_literal_list: extended_literal_list ',' casted_extended_literal  */
#line 990 "bison_parser.y"
                                                    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4662 "bison_parser.cpp"
    break;

  case 172: /* casted_extended_literal: CAST '(' extended_literal AS column_type ')'  */
#line 995 "bison_parser.y"
                                                                                          {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4670 "bison_parser.cpp"
    break;

  case 173: /* extended_literal: literal  */
#line 999 "bison_parser.y"
                           {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4683 "bison_parser.cpp"
    break;

  case 174: /* extended_literal: '-' num_literal  */
#line 1007 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4689 "bison_parser.cpp"
    break;

  case 175: /* extended_literal: '-' interval_literal  */
#line 1008 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4695 "bison_parser.cpp"
    break;

  case 176: /* expr_alias: expr opt_alias  */
#line 1010 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4708 "bison_parser.cpp"
    break;

  case 182: /* operand: '(' expr ')'  */
#line 1021 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4714 "bison_parser.cpp"
    break;

  case 192: /* operand: '(' select_no_paren ')'  */
#line 1023 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4722 "bison_parser.cpp"
    break;

  case 195: /* unary_expr: '-' operand  */
#line 1029 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4728 "bison_parser.cpp"
    break;

  case 196: /* unary_expr: NOT operand  */
#line 1030 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4734 "bison_parser.cpp"
    break;

  case 197: /* unary_expr: operand ISNULL  */
#line 1031 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4740 "bison_parser.cpp"
    break;

  case 198: /* unary_expr: operand IS NULL  */
#line 1032 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4746 "bison_parser.cpp"
    break;

  case 199: /* unary_expr: operand IS NOT NULL  */
#line 1033 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4752 "bison_parser.cpp"
    break;

  case 201: /* binary_expr: operand '-' operand  */
#line 1035 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4758 "bison_parser.cpp"
    break;

  case 202: /* binary_expr: operand '+' operand  */
#line 1036 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4764 "bison_parser.cpp"
    break;

  case 203: /* binary_expr: operand '/' operand  */
#line 1037 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4770 "bison_parser.cpp"
    break;

  case 204: /* binary_expr: operand '*' operand  */
#line 1038 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4776 "bison_parser.cpp"
    break;

  case 205: /* binary_expr: operand '%' operand  */
#line 1039 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4782 "bison_parser.cpp"
    break;

  case 206: /* binary_expr: operand '^' operand  */
#line 1040 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4788 "bison_parser.cpp"
    break;

  case 207: /* binary_expr: operand LIKE operand  */
#line 1041 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4794 "bison_parser.cpp"
    break;

  case 208: /* binary_expr: operand NOT LIKE operand  */
#line 1042 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4800 "bison_parser.cpp"
    break;

  case 209: /* binary_expr: operand ILIKE operand  */
#line 1043 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4806 "bison_parser.cpp"
    break;

  case 210: /* binary_expr: operand CONCAT operand  */
#line 1044 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4812 "bison_parser.cpp"
    break;

  case 211: /* logic_expr: expr AND expr  */
#line 1046 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4818 "bison_parser.cpp"
    break;

  case 212: /* logic_expr: expr OR expr  */
#line 1047 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4824 "bison_parser.cpp"
    break;

  case 213: /* in_expr: operand IN '(' expr_list ')'  */
#line 1049 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4830 "bison_parser.cpp"
    break;

  case 214: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1050 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4836 "bison_parser.cpp"
    break;

  case 215: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1051 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4842 "bison_parser.cpp"
    break;

  case 216: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1052 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4848 "bison_parser.cpp"
    break;

  case 217: /* case_expr: CASE expr case_list END  */
#line 1056 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4854 "bison_parser.cpp"
    break;

  case 218: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1057 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4860 "bison_parser.cpp"
    break;

  case 219: /* case_expr: CASE case_list END  */
#line 1058 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4866 "bison_parser.cpp"
    break;

  case 220: /* case_expr: CASE case_list ELSE expr END  */
#line 1059 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4872 "bison_parser.cpp"
    break;

  case 221: /* case_list: WHEN expr THEN expr  */
#line 1061 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4878 "bison_parser.cpp"
    break;

  case 222: /* case_list: case_list WHEN expr THEN expr  */
#line 1062 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4884 "bison_parser.cpp"
    break;

  case 223: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1064 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4890 "bison_parser.cpp"
    break;

  case 224: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1065 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4896 "bison_parser.cpp"
    break;

  case 225: /* comp_expr: operand '=' operand  */
#line 1067 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4902 "bison_parser.cpp"
    break;

  case 226: /* comp_expr: operand EQUALS operand  */
#line 1068 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4908 "bison_parser.cpp"
    break;

  case 227: /* comp_expr: operand NOTEQUALS operand  */
#line 1069 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4914 "bison_parser.cpp"
    break;

  case 228: /* comp_expr: operand '<' operand  */
#line 1070 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4920 "bison_parser.cpp"
    break;

  case 229: /* comp_expr: operand '>' operand  */
#line 1071 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4926 "bison_parser.cpp"
    break;

  case 230: /* comp_expr: operand LESSEQ operand  */
#line 1072 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4932 "bison_parser.cpp"
    break;

  case 231: /* comp_expr: operand GREATEREQ operand  */
#line 1073 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4938 "bison_parser.cpp"
    break;

  case 232: /* function_expr: IDENTIFIER '(' ')' opt_window  */
#line 1077 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 4944 "bison_parser.cpp"
    break;

  case 233: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_window  */
#line 1078 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 4950 "bison_parser.cpp"
    break;

  case 234: /* opt_window: OVER '(' opt_partition opt_order opt_frame_clause ')'  */
#line 1082 "bison_parser.y"
                                                                   { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 4956 "bison_parser.cpp"
    break;

  case 235: /* opt_window: %empty  */
#line 1083 "bison_parser.y"
              { (yyval.window_description) = nullptr; }
#line 4962 "bison_parser.cpp"
    break;

  case 236: /* opt_partition: PARTITION BY expr_list  */
#line 1085 "bison_parser.y"
                                       { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4968 "bison_parser.cpp"
    break;

  case 237: /* opt_partition: %empty  */
#line 1086 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4974 "bison_parser.cpp"
    break;

  case 238: /* opt_frame_clause: frame_type frame_bound  */
#line 1091 "bison_parser.y"
                                          { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 4980 "bison_parser.cpp"
    break;

  case 239: /* opt_frame_clause: frame_type BETWEEN frame_bound AND frame_bound  */
#line 1092 "bison_parser.y"
                                                 { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 4986 "bison_parser.cpp"
    break;

  case 240: /* opt_frame_clause: %empty  */
#line 1093 "bison_parser.y"
              {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 4994 "bison_parser.cpp"
    break;

  case 241: /* frame_type: RANGE  */
#line 1097 "bison_parser.y"
                   { (yyval.frame_type) = kRange; }
#line 5000 "bison_parser.cpp"
    break;

  case 242: /* frame_type: ROWS  */
#line 1098 "bison_parser.y"
       { (yyval.frame_type) = kRows; }
#line 5006 "bison_parser.cpp"
    break;

  case 243: /* frame_type: GROUPS  */
#line 1099 "bison_parser.y"
         { (yyval.frame_type) = kGroups; }
#line 5012 "bison_parser.cpp"
    break;

  case 244: /* frame_bound: UNBOUNDED PRECEDING  */
#line 1101 "bison_parser.y"
                                  { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5018 "bison_parser.cpp"
    break;

  case 245: /* frame_bound: INTVAL PRECEDING  */
#line 1102 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5024 "bison_parser.cpp"
    break;

  case 246: /* frame_bound: UNBOUNDED FOLLOWING  */
#line 1103 "bison_parser.y"
                      { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5030 "bison_parser.cpp"
    break;

  case 247: /* frame_bound: INTVAL FOLLOWING  */
#line 1104 "bison_parser.y"
                   { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5036 "bison_parser.cpp"
    break;

  case 248: /* frame_bound: CURRENT_ROW  */
#line 1105 "bison_parser.y"
              { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5042 "bison_parser.cpp"
    break;

  case 249: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1107 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5048 "bison_parser.cpp"
    break;

  case 250: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1109 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5054 "bison_parser.cpp"
    break;

  case 251: /* datetime_field: SECOND  */
#line 1111 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 5060 "bison_parser.cpp"
    break;

  case 252: /* datetime_field: MINUTE  */
#line 1112 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 5066 "bison_parser.cpp"
    break;

  case 253: /* datetime_field: HOUR  */
#line 1113 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 5072 "bison_parser.cpp"
    break;

  case 254: /* datetime_field: DAY  */
#line 1114 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 5078 "bison_parser.cpp"
    break;

  case 255: /* datetime_field: MONTH  */
#line 1115 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 5084 "bison_parser.cpp"
    break;

  case 256: /* datetime_field: YEAR  */
#line 1116 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 5090 "bison_parser.cpp"
    break;

  case 257: /* datetime_field_plural: SECONDS  */
#line 1118 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 5096 "bison_parser.cpp"
    break;

  case 258: /* datetime_field_plural: MINUTES  */
#line 1119 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 5102 "bison_parser.cpp"
    break;

  case 259: /* datetime_field_plural: HOURS  */
#line 1120 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 5108 "bison_parser.cpp"
    break;

  case 260: /* datetime_field_plural: DAYS  */
#line 1121 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 5114 "bison_parser.cpp"
    break;

  case 261: /* datetime_field_plural: MONTHS  */
#line 1122 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 5120 "bison_parser.cpp"
    break;

  case 262: /* datetime_field_plural: YEARS  */
#line 1123 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 5126 "bison_parser.cpp"
    break;

  case 265: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1127 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5132 "bison_parser.cpp"
    break;

  case 266: /* array_index: operand '[' int_literal ']'  */
#line 1129 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5138 "bison_parser.cpp"
    break;

  case 267: /* between_expr: operand BETWEEN operand AND operand  */
#line 1131 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5144 "bison_parser.cpp"
    break;

  case 268: /* column_name: IDENTIFIER  */
#line 1133 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5150 "bison_parser.cpp"
    break;

  case 269: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1134 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5156 "bison_parser.cpp"
    break;

  case 270: /* column_name: '*'  */
#line 1135 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 5162 "bison_parser.cpp"
    break;

  case 271: /* column_name: IDENTIFIER '.' '*'  */
#line 1136 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5168 "bison_parser.cpp"
    break;

  case 279: /* string_literal: STRING  */
#line 1140 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5174 "bison_parser.cpp"
    break;

  case 280: /* bool_literal: TRUE  */
#line 1142 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5180 "bison_parser.cpp"
    break;

  case 281: /* bool_literal: FALSE  */
#line 1143 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 5186 "bison_parser.cpp"
    break;

  case 282: /* num_literal: FLOATVAL  */
#line 1145 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5192 "bison_parser.cpp"
    break;

  case 284: /* int_literal: INTVAL  */
#line 1148 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5198 "bison_parser.cpp"
    break;

  case 285: /* null_literal: NULL  */
#line 1150 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5204 "bison_parser.cpp"
    break;

  case 286: /* date_literal: DATE STRING  */
#line 1152 "bison_parser.y"
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
#line 5219 "bison_parser.cpp"
    break;

  case 287: /* interval_literal: INTVAL duration_field  */
#line 1163 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5225 "bison_parser.cpp"
    break;

  case 288: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1164 "bison_parser.y"
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
#line 5241 "bison_parser.cpp"
    break;

  case 289: /* interval_literal: INTERVAL STRING  */
#line 1175 "bison_parser.y"
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
#line 5277 "bison_parser.cpp"
    break;

  case 290: /* param_expr: '?'  */
#line 1207 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5287 "bison_parser.cpp"
    break;

  case 292: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1216 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5298 "bison_parser.cpp"
    break;

  case 296: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1225 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5309 "bison_parser.cpp"
    break;

  case 297: /* table_ref_commalist: table_ref_atomic  */
#line 1232 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5318 "bison_parser.cpp"
    break;

  case 298: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1236 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5327 "bison_parser.cpp"
    break;

  case 299: /* table_ref_name: table_name opt_table_alias  */
#line 1241 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5339 "bison_parser.cpp"
    break;

  case 300: /* table_ref_name_no_alias: table_name  */
#line 1249 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5349 "bison_parser.cpp"
    break;

  case 301: /* table_name: IDENTIFIER  */
#line 1255 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5358 "bison_parser.cpp"
    break;

  case 302: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1259 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5367 "bison_parser.cpp"
    break;

  case 303: /* opt_index_name: IDENTIFIER  */
#line 1264 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5373 "bison_parser.cpp"
    break;

  case 304: /* opt_index_name: %empty  */
#line 1265 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5379 "bison_parser.cpp"
    break;

  case 306: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1267 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5385 "bison_parser.cpp"
    break;

  case 308: /* opt_table_alias: %empty  */
#line 1269 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5391 "bison_parser.cpp"
    break;

  case 309: /* alias: AS IDENTIFIER  */
#line 1271 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5397 "bison_parser.cpp"
    break;

  case 310: /* alias: IDENTIFIER  */
#line 1272 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5403 "bison_parser.cpp"
    break;

  case 312: /* opt_alias: %empty  */
#line 1274 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5409 "bison_parser.cpp"
    break;

  case 313: /* opt_locking_clause: opt_locking_clause_list  */
#line 1280 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5415 "bison_parser.cpp"
    break;

  case 314: /* opt_locking_clause: %empty  */
#line 1281 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5421 "bison_parser.cpp"
    break;

  case 315: /* opt_locking_clause_list: locking_clause  */
#line 1283 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5430 "bison_parser.cpp"
    break;

  case 316: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1287 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5439 "bison_parser.cpp"
    break;

  case 317: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1292 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5450 "bison_parser.cpp"
    break;

  case 318: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1298 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5461 "bison_parser.cpp"
    break;

  case 319: /* row_lock_mode: UPDATE  */
#line 1305 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5467 "bison_parser.cpp"
    break;

  case 320: /* row_lock_mode: NO KEY UPDATE  */
#line 1306 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5473 "bison_parser.cpp"
    break;

  case 321: /* row_lock_mode: SHARE  */
#line 1307 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5479 "bison_parser.cpp"
    break;

  case 322: /* row_lock_mode: KEY SHARE  */
#line 1308 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5485 "bison_parser.cpp"
    break;

  case 323: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1310 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5491 "bison_parser.cpp"
    break;

  case 324: /* opt_row_lock_policy: NOWAIT  */
#line 1311 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5497 "bison_parser.cpp"
    break;

  case 325: /* opt_row_lock_policy: %empty  */
#line 1312 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5503 "bison_parser.cpp"
    break;

  case 327: /* opt_with_clause: %empty  */
#line 1318 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5509 "bison_parser.cpp"
    break;

  case 328: /* with_clause: WITH with_description_list  */
#line 1320 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5515 "bison_parser.cpp"
    break;

  case 329: /* with_description_list: with_description  */
#line 1322 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5524 "bison_parser.cpp"
    break;

  case 330: /* with_description_list: with_description_list ',' with_description  */
#line 1326 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5533 "bison_parser.cpp"
    break;

  case 331: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1331 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5543 "bison_parser.cpp"
    break;

  case 332: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1341 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5555 "bison_parser.cpp"
    break;

  case 333: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1348 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5568 "bison_parser.cpp"
    break;

  case 334: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' ident_commalist ')'  */
#line 1356 "bison_parser.y"
                                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5581 "bison_parser.cpp"
    break;

  case 335: /* opt_join_type: INNER  */
#line 1365 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5587 "bison_parser.cpp"
    break;

  case 336: /* opt_join_type: LEFT OUTER  */
#line 1366 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5593 "bison_parser.cpp"
    break;

  case 337: /* opt_join_type: LEFT  */
#line 1367 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5599 "bison_parser.cpp"
    break;

  case 338: /* opt_join_type: RIGHT OUTER  */
#line 1368 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5605 "bison_parser.cpp"
    break;

  case 339: /* opt_join_type: RIGHT  */
#line 1369 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5611 "bison_parser.cpp"
    break;

  case 340: /* opt_join_type: FULL OUTER  */
#line 1370 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5617 "bison_parser.cpp"
    break;

  case 341: /* opt_join_type: OUTER  */
#line 1371 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5623 "bison_parser.cpp"
    break;

  case 342: /* opt_join_type: FULL  */
#line 1372 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5629 "bison_parser.cpp"
    break;

  case 343: /* opt_join_type: CROSS  */
#line 1373 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5635 "bison_parser.cpp"
    break;

  case 344: /* opt_join_type: %empty  */
#line 1374 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5641 "bison_parser.cpp"
    break;

  case 348: /* ident_commalist: IDENTIFIER  */
#line 1385 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5650 "bison_parser.cpp"
    break;

  case 349: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1389 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5659 "bison_parser.cpp"
    break;


#line 5663 "bison_parser.cpp"

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

#line 1395 "bison_parser.y"


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

    // clang-format on
