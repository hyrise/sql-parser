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

  // clang-format on
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

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 108 "bison_parser.cpp"

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
  YYSYMBOL_UNIQUE = 61,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 62,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 63,                    /* UPDATE  */
  YYSYMBOL_VALUES = 64,                    /* VALUES  */
  YYSYMBOL_AFTER = 65,                     /* AFTER  */
  YYSYMBOL_ALTER = 66,                     /* ALTER  */
  YYSYMBOL_CROSS = 67,                     /* CROSS  */
  YYSYMBOL_DELTA = 68,                     /* DELTA  */
  YYSYMBOL_FLOAT = 69,                     /* FLOAT  */
  YYSYMBOL_GROUP = 70,                     /* GROUP  */
  YYSYMBOL_INDEX = 71,                     /* INDEX  */
  YYSYMBOL_INNER = 72,                     /* INNER  */
  YYSYMBOL_LIMIT = 73,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 74,                     /* LOCAL  */
  YYSYMBOL_MERGE = 75,                     /* MERGE  */
  YYSYMBOL_MINUS = 76,                     /* MINUS  */
  YYSYMBOL_ORDER = 77,                     /* ORDER  */
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
  YYSYMBOL_PLAN = 105,                     /* PLAN  */
  YYSYMBOL_SHOW = 106,                     /* SHOW  */
  YYSYMBOL_TEXT = 107,                     /* TEXT  */
  YYSYMBOL_THEN = 108,                     /* THEN  */
  YYSYMBOL_TIME = 109,                     /* TIME  */
  YYSYMBOL_VIEW = 110,                     /* VIEW  */
  YYSYMBOL_WHEN = 111,                     /* WHEN  */
  YYSYMBOL_WITH = 112,                     /* WITH  */
  YYSYMBOL_ADD = 113,                      /* ADD  */
  YYSYMBOL_ALL = 114,                      /* ALL  */
  YYSYMBOL_AND = 115,                      /* AND  */
  YYSYMBOL_ASC = 116,                      /* ASC  */
  YYSYMBOL_END = 117,                      /* END  */
  YYSYMBOL_FOR = 118,                      /* FOR  */
  YYSYMBOL_INT = 119,                      /* INT  */
  YYSYMBOL_KEY = 120,                      /* KEY  */
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
  YYSYMBOL_162_ = 162,                     /* '='  */
  YYSYMBOL_EQUALS = 163,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 164,                /* NOTEQUALS  */
  YYSYMBOL_165_ = 165,                     /* '<'  */
  YYSYMBOL_166_ = 166,                     /* '>'  */
  YYSYMBOL_LESS = 167,                     /* LESS  */
  YYSYMBOL_GREATER = 168,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 169,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 170,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 171,                  /* NOTNULL  */
  YYSYMBOL_172_ = 172,                     /* '+'  */
  YYSYMBOL_173_ = 173,                     /* '-'  */
  YYSYMBOL_174_ = 174,                     /* '*'  */
  YYSYMBOL_175_ = 175,                     /* '/'  */
  YYSYMBOL_176_ = 176,                     /* '%'  */
  YYSYMBOL_177_ = 177,                     /* '^'  */
  YYSYMBOL_UMINUS = 178,                   /* UMINUS  */
  YYSYMBOL_179_ = 179,                     /* '['  */
  YYSYMBOL_180_ = 180,                     /* ']'  */
  YYSYMBOL_181_ = 181,                     /* '('  */
  YYSYMBOL_182_ = 182,                     /* ')'  */
  YYSYMBOL_183_ = 183,                     /* '.'  */
  YYSYMBOL_184_ = 184,                     /* ';'  */
  YYSYMBOL_185_ = 185,                     /* ','  */
  YYSYMBOL_186_ = 186,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 187,                 /* $accept  */
  YYSYMBOL_input = 188,                    /* input  */
  YYSYMBOL_statement_list = 189,           /* statement_list  */
  YYSYMBOL_statement = 190,                /* statement  */
  YYSYMBOL_preparable_statement = 191,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 192,                /* opt_hints  */
  YYSYMBOL_hint_list = 193,                /* hint_list  */
  YYSYMBOL_hint = 194,                     /* hint  */
  YYSYMBOL_transaction_statement = 195,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 196,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 197,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 198,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 199,        /* execute_statement  */
  YYSYMBOL_import_statement = 200,         /* import_statement  */
  YYSYMBOL_file_type = 201,                /* file_type  */
  YYSYMBOL_file_path = 202,                /* file_path  */
  YYSYMBOL_opt_file_type = 203,            /* opt_file_type  */
  YYSYMBOL_export_statement = 204,         /* export_statement  */
  YYSYMBOL_show_statement = 205,           /* show_statement  */
  YYSYMBOL_create_statement = 206,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 207,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 208,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 209,               /* table_elem  */
  YYSYMBOL_column_def = 210,               /* column_def  */
  YYSYMBOL_column_type = 211,              /* column_type  */
  YYSYMBOL_opt_time_precision = 212,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 213, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 214,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_set = 215,    /* column_constraint_set  */
  YYSYMBOL_column_constraint = 216,        /* column_constraint  */
  YYSYMBOL_table_constraint = 217,         /* table_constraint  */
  YYSYMBOL_drop_statement = 218,           /* drop_statement  */
  YYSYMBOL_opt_exists = 219,               /* opt_exists  */
  YYSYMBOL_alter_statement = 220,          /* alter_statement  */
  YYSYMBOL_alter_action = 221,             /* alter_action  */
  YYSYMBOL_drop_action = 222,              /* drop_action  */
  YYSYMBOL_delete_statement = 223,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 224,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 225,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 226,          /* opt_column_list  */
  YYSYMBOL_update_statement = 227,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 228,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 229,            /* update_clause  */
  YYSYMBOL_select_statement = 230,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 231, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 232, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 233,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 234,          /* select_no_paren  */
  YYSYMBOL_set_operator = 235,             /* set_operator  */
  YYSYMBOL_set_type = 236,                 /* set_type  */
  YYSYMBOL_opt_all = 237,                  /* opt_all  */
  YYSYMBOL_select_clause = 238,            /* select_clause  */
  YYSYMBOL_opt_distinct = 239,             /* opt_distinct  */
  YYSYMBOL_select_list = 240,              /* select_list  */
  YYSYMBOL_opt_from_clause = 241,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 242,              /* from_clause  */
  YYSYMBOL_opt_where = 243,                /* opt_where  */
  YYSYMBOL_opt_group = 244,                /* opt_group  */
  YYSYMBOL_opt_having = 245,               /* opt_having  */
  YYSYMBOL_opt_order = 246,                /* opt_order  */
  YYSYMBOL_order_list = 247,               /* order_list  */
  YYSYMBOL_order_desc = 248,               /* order_desc  */
  YYSYMBOL_opt_order_type = 249,           /* opt_order_type  */
  YYSYMBOL_opt_top = 250,                  /* opt_top  */
  YYSYMBOL_opt_limit = 251,                /* opt_limit  */
  YYSYMBOL_expr_list = 252,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 253,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 254,             /* literal_list  */
  YYSYMBOL_expr_alias = 255,               /* expr_alias  */
  YYSYMBOL_expr = 256,                     /* expr  */
  YYSYMBOL_operand = 257,                  /* operand  */
  YYSYMBOL_scalar_expr = 258,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 259,               /* unary_expr  */
  YYSYMBOL_binary_expr = 260,              /* binary_expr  */
  YYSYMBOL_logic_expr = 261,               /* logic_expr  */
  YYSYMBOL_in_expr = 262,                  /* in_expr  */
  YYSYMBOL_case_expr = 263,                /* case_expr  */
  YYSYMBOL_case_list = 264,                /* case_list  */
  YYSYMBOL_exists_expr = 265,              /* exists_expr  */
  YYSYMBOL_comp_expr = 266,                /* comp_expr  */
  YYSYMBOL_function_expr = 267,            /* function_expr  */
  YYSYMBOL_extract_expr = 268,             /* extract_expr  */
  YYSYMBOL_cast_expr = 269,                /* cast_expr  */
  YYSYMBOL_datetime_field = 270,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 271,    /* datetime_field_plural  */
  YYSYMBOL_duration_field = 272,           /* duration_field  */
  YYSYMBOL_array_expr = 273,               /* array_expr  */
  YYSYMBOL_array_index = 274,              /* array_index  */
  YYSYMBOL_between_expr = 275,             /* between_expr  */
  YYSYMBOL_column_name = 276,              /* column_name  */
  YYSYMBOL_literal = 277,                  /* literal  */
  YYSYMBOL_string_literal = 278,           /* string_literal  */
  YYSYMBOL_bool_literal = 279,             /* bool_literal  */
  YYSYMBOL_num_literal = 280,              /* num_literal  */
  YYSYMBOL_int_literal = 281,              /* int_literal  */
  YYSYMBOL_null_literal = 282,             /* null_literal  */
  YYSYMBOL_date_literal = 283,             /* date_literal  */
  YYSYMBOL_interval_literal = 284,         /* interval_literal  */
  YYSYMBOL_param_expr = 285,               /* param_expr  */
  YYSYMBOL_table_ref = 286,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 287,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 288, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 289,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 290,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 291,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 292,               /* table_name  */
  YYSYMBOL_opt_index_name = 293,           /* opt_index_name  */
  YYSYMBOL_table_alias = 294,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 295,          /* opt_table_alias  */
  YYSYMBOL_alias = 296,                    /* alias  */
  YYSYMBOL_opt_alias = 297,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 298,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 299,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 300,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 301,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 302,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 303,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 304,              /* with_clause  */
  YYSYMBOL_with_description_list = 305,    /* with_description_list  */
  YYSYMBOL_with_description = 306,         /* with_description  */
  YYSYMBOL_join_clause = 307,              /* join_clause  */
  YYSYMBOL_opt_join_type = 308,            /* opt_join_type  */
  YYSYMBOL_join_condition = 309,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 310,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 311           /* ident_commalist  */
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
#define YYLAST   883

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  187
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  320
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  578

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   424


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
       2,     2,     2,     2,     2,     2,     2,   176,     2,     2,
     181,   182,   174,   172,   185,   173,   183,   175,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   184,
     165,   162,   166,   186,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   179,     2,   180,   177,     2,     2,     2,     2,     2,
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
     155,   156,   157,   158,   159,   160,   161,   163,   164,   167,
     168,   169,   170,   171,   178
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   310,   310,   329,   335,   342,   346,   350,   351,   352,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     369,   370,   372,   376,   381,   385,   395,   396,   397,   399,
     399,   405,   411,   413,   417,   428,   434,   442,   457,   462,
     463,   469,   475,   486,   487,   492,   503,   516,   528,   535,
     542,   551,   552,   554,   558,   563,   564,   566,   573,   574,
     575,   576,   577,   578,   579,   583,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   595,   596,   598,   599,
     600,   602,   603,   605,   609,   614,   615,   616,   617,   619,
     620,   628,   634,   640,   646,   652,   653,   660,   666,   668,
     678,   685,   696,   703,   711,   712,   719,   726,   730,   735,
     745,   749,   753,   765,   765,   767,   768,   777,   778,   780,
     794,   806,   811,   815,   819,   824,   825,   827,   837,   838,
     840,   842,   843,   845,   847,   848,   850,   855,   857,   858,
     860,   861,   863,   867,   872,   874,   875,   876,   880,   881,
     883,   884,   885,   886,   887,   888,   893,   897,   902,   903,
     905,   909,   914,   922,   922,   922,   922,   922,   924,   925,
     925,   925,   925,   925,   925,   925,   925,   926,   926,   930,
     930,   932,   933,   934,   935,   936,   938,   938,   939,   940,
     941,   942,   943,   944,   945,   946,   947,   949,   950,   952,
     953,   954,   955,   959,   960,   961,   962,   964,   965,   967,
     968,   970,   971,   972,   973,   974,   975,   976,   978,   979,
     981,   983,   985,   986,   987,   988,   989,   990,   992,   993,
     994,   995,   996,   997,   999,   999,  1001,  1003,  1005,  1007,
    1008,  1009,  1010,  1012,  1012,  1012,  1012,  1012,  1012,  1012,
    1014,  1016,  1017,  1019,  1020,  1022,  1024,  1026,  1037,  1041,
    1052,  1084,  1093,  1093,  1100,  1100,  1102,  1102,  1109,  1113,
    1118,  1126,  1132,  1136,  1141,  1142,  1144,  1144,  1146,  1146,
    1148,  1149,  1151,  1151,  1157,  1158,  1160,  1164,  1169,  1175,
    1182,  1183,  1184,  1185,  1187,  1188,  1189,  1195,  1195,  1197,
    1199,  1203,  1208,  1218,  1225,  1233,  1257,  1258,  1259,  1260,
    1261,  1262,  1263,  1264,  1265,  1266,  1268,  1274,  1274,  1277,
    1281
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
  "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "BIGINT",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS",
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS",
  "MONTHS", "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION",
  "BEGIN", "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE",
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
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_set", "column_constraint",
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
  "datetime_field_plural", "duration_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "date_literal", "interval_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
  "opt_locking_clause", "opt_locking_clause_list", "locking_clause",
  "row_lock_mode", "opt_row_lock_policy", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-337)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-318)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     461,    21,    63,   103,   139,    63,   -18,   -39,    77,    69,
      63,   102,    15,   -11,    10,   207,    44,    44,    44,   212,
      39,  -337,   150,  -337,   150,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,   -28,  -337,   273,
     115,  -337,    97,   225,  -337,   188,   188,   188,    63,   288,
      63,   206,  -337,   214,   -28,   201,   -42,   214,   214,   214,
      63,  -337,   222,   172,  -337,  -337,  -337,  -337,  -337,  -337,
     628,  -337,   242,  -337,  -337,   232,    48,  -337,   192,  -337,
     355,    70,   360,   254,   389,    63,    63,   314,  -337,   311,
     224,   405,   363,    63,   230,   231,   407,   407,   407,   412,
      63,    63,  -337,   235,   207,  -337,   237,   413,   408,  -337,
    -337,  -337,   -28,   307,   297,   -28,    -9,  -337,  -337,  -337,
    -337,   421,  -337,   423,  -337,  -337,  -337,   246,   244,  -337,
    -337,  -337,  -337,   734,  -337,  -337,  -337,  -337,  -337,  -337,
     386,  -337,   302,   -17,   224,   322,  -337,   407,   431,   -14,
     278,   -38,  -337,  -337,   344,  -337,  -337,   327,  -337,   327,
     327,  -337,  -337,  -337,  -337,  -337,   438,  -337,  -337,   322,
     365,  -337,  -337,    48,  -337,  -337,   322,   365,   322,   131,
     326,  -337,   248,  -337,    70,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,    63,   442,   337,   154,   325,  -102,   270,   271,   272,
     186,   390,   275,   458,  -337,   296,   109,   483,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,   357,  -337,   110,   279,  -337,   322,
     405,  -337,   417,  -337,  -337,   409,  -337,   314,  -337,   284,
     124,  -337,   372,   274,  -337,    34,    -9,   -28,   282,  -337,
     127,    -9,   109,   416,    16,   -31,  -337,   326,  -337,  -337,
    -337,   298,   387,  -337,   653,   361,   303,   128,  -337,  -337,
    -337,   337,    13,    19,   427,   248,   322,   322,   152,   144,
     305,   458,   672,   322,    52,   306,   -73,   322,   322,   458,
    -337,   458,   -60,   308,   147,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     413,    63,  -337,   487,    70,   109,  -337,   214,   288,  -337,
      70,  -337,   438,    18,   314,  -337,   322,  -337,   488,  -337,
    -337,  -337,  -337,   322,  -337,  -337,  -337,   326,   322,   322,
    -337,   331,   373,  -337,    26,  -337,   431,   407,  -337,  -337,
     316,  -337,   318,  -337,  -337,   323,  -337,  -337,   328,  -337,
    -337,  -337,  -337,   329,  -337,  -337,   136,   334,   431,  -337,
     154,  -337,  -337,   322,  -337,  -337,   330,   422,   171,   157,
     168,   322,   322,  -337,   427,   406,  -122,  -337,  -337,  -337,
     402,   650,   537,   458,   338,   296,  -337,   414,   341,   537,
     537,   537,   537,   692,   692,   692,   692,    52,    52,   -97,
     -97,   -97,   -51,   342,  -337,  -337,   163,   518,  -337,   164,
    -337,   337,  -337,    73,  -337,   343,  -337,    37,  -337,   453,
    -337,  -337,  -337,  -337,   109,   109,  -337,   463,   431,  -337,
     369,  -337,   181,  -337,   524,   525,  -337,   526,   527,   528,
    -337,   415,  -337,  -337,   432,  -337,   136,  -337,   431,   189,
    -337,   191,  -337,   322,   653,   322,   322,  -337,   199,   179,
     356,  -337,   458,   537,   296,   362,   195,  -337,  -337,  -337,
    -337,  -337,   367,   440,  -337,  -337,  -337,   467,   469,   472,
     452,    18,   550,  -337,  -337,  -337,   428,  -337,  -337,    95,
    -337,  -337,   374,   197,   375,   376,   377,  -337,  -337,  -337,
     216,  -337,  -337,   -32,   378,   109,   203,  -337,   322,  -337,
     672,   379,   217,  -337,  -337,    37,    18,  -337,  -337,  -337,
      18,   108,   384,   322,  -337,  -337,  -337,   549,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,   109,  -337,  -337,  -337,  -337,
     283,   431,   -25,   388,   385,   322,   221,   322,  -337,  -337,
      20,   109,  -337,  -337,   109,   391,   393,  -337
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     318,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   297,     0,
     272,   101,    33,     0,    45,    52,    52,    52,     0,     0,
       0,     0,   271,    96,     0,     0,     0,    96,    96,    96,
       0,    43,     0,   299,   300,    29,    26,    28,    27,     1,
     298,     2,     0,     6,     5,   149,   110,   111,   141,    93,
       0,   159,     0,     0,   275,     0,     0,   135,    37,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     4,     0,     0,   129,   123,
     124,   122,     0,   126,     0,     0,   155,   273,   250,   253,
     255,     0,   256,     0,   251,   252,   261,     0,   158,   160,
     243,   244,   245,   254,   246,   247,   248,   249,    32,    31,
       0,   274,     0,     0,   105,     0,   100,     0,     0,     0,
       0,   135,   107,    95,     0,   118,   117,    40,    38,    40,
      40,    94,    91,    92,   302,   301,     0,   148,   128,     0,
     141,   114,   113,   115,   125,   121,     0,   141,     0,     0,
     285,   257,   260,    34,     0,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   258,
      51,     0,     0,   298,     0,     0,   239,     0,     0,     0,
       0,     0,     0,     0,   241,     0,   134,   163,   170,   171,
     172,   165,   167,   173,   166,   186,   174,   175,   176,   177,
     169,   164,   179,   180,     0,   319,     0,     0,   103,     0,
       0,   106,     0,    97,    98,     0,    42,   135,    41,    24,
       0,    22,   132,   130,   156,   283,   155,     0,   140,   142,
     147,   155,   151,   153,   150,     0,   119,   284,   286,   259,
     161,     0,     0,    48,     0,     0,     0,     0,    53,    55,
      56,   298,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   182,     0,   181,     0,     0,     0,     0,     0,
     183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,   109,   108,    96,     0,    36,
       0,    20,     0,     0,   135,   131,     0,   281,     0,   282,
     162,   112,   116,     0,   146,   145,   144,   285,     0,     0,
     290,     0,     0,   292,   296,   287,     0,     0,    74,    68,
       0,    70,    80,    71,    58,     0,    65,    66,     0,    62,
      63,    69,    72,    77,    67,    59,    82,     0,     0,    47,
       0,    50,   218,     0,   240,   242,     0,     0,     0,     0,
       0,     0,     0,   205,     0,     0,     0,   178,   168,   197,
     198,     0,   193,     0,     0,     0,   184,     0,   196,   195,
     211,   212,   213,   214,   215,   216,   217,   188,   187,   190,
     189,   191,   192,     0,    35,   320,     0,     0,    39,     0,
      23,   298,   133,   262,   264,     0,   266,   279,   265,   137,
     157,   280,   143,   120,   154,   152,   293,     0,     0,   295,
       0,   288,     0,    46,     0,     0,    64,     0,     0,     0,
      73,     0,    86,    87,     0,    57,    81,    83,     0,     0,
      54,     0,   209,     0,     0,     0,     0,   203,     0,     0,
       0,   236,     0,   194,     0,     0,     0,   185,   237,   102,
      99,    25,     0,     0,   314,   306,   312,   310,   313,   308,
       0,     0,     0,   278,   270,   276,     0,   127,   291,   296,
     294,    49,     0,     0,     0,     0,     0,    85,    88,    84,
       0,    90,   219,     0,     0,   207,     0,   206,     0,   210,
     238,     0,     0,   201,   199,   279,     0,   309,   311,   307,
       0,   263,   280,     0,   289,    61,    79,     0,    75,    60,
      76,    89,   220,   221,   204,   208,   202,   200,   267,   303,
     315,     0,   139,     0,     0,     0,     0,     0,   136,    78,
       0,   316,   304,   277,   138,   239,     0,   305
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -337,  -337,  -337,   498,  -337,   545,  -337,   240,  -337,   229,
    -337,  -337,  -337,  -337,   249,   -93,   193,  -337,  -337,  -337,
     277,  -337,   198,  -337,   106,  -337,  -337,  -337,  -337,   116,
    -337,  -337,   -50,  -337,  -337,  -337,  -337,  -337,  -337,   437,
    -337,  -337,   345,  -193,   -87,  -337,    36,   -54,   -35,  -337,
    -337,   -88,   301,  -337,  -337,  -337,  -120,  -337,  -337,     6,
    -337,   243,  -337,  -337,   -43,  -273,  -337,  -246,   251,  -143,
    -194,  -337,  -337,  -337,  -337,  -337,  -337,   300,  -337,  -337,
    -337,  -337,  -337,  -144,  -337,  -337,  -337,  -337,  -337,    22,
     -80,   -82,  -337,  -337,   -95,  -337,  -337,  -337,  -337,  -337,
    -336,    53,  -337,  -337,  -337,     1,  -337,  -337,    55,   339,
    -337,   250,  -337,   332,  -337,    86,  -337,  -337,  -337,   492,
    -337,  -337,  -337,  -337,  -322
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    73,   250,   251,    23,    66,
      24,   139,    25,    26,    89,   157,   246,    27,    28,    29,
      84,   277,   278,   279,   376,   460,   456,   465,   466,   467,
     280,    30,    93,    31,   243,   244,    32,    33,    34,   149,
      35,   151,   152,    36,   170,   171,   172,    77,   112,   113,
     175,    78,   169,   252,   334,   335,   146,   507,   568,   116,
     258,   259,   346,   108,   180,   253,   127,   128,   254,   255,
     217,   218,   219,   220,   221,   222,   223,   289,   224,   225,
     226,   227,   228,   197,   198,   199,   229,   230,   231,   232,
     233,   130,   131,   132,   133,   134,   135,   136,   137,   432,
     433,   434,   435,   436,    51,   437,   142,   503,   504,   505,
     340,   266,   267,   268,   354,   451,    37,    38,    63,    64,
     438,   500,   572,    71,   236
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,   129,   216,    41,   159,   160,    44,    99,   100,   101,
     273,    52,   167,    56,   158,   158,   158,   292,    40,   294,
     396,    40,   384,   575,   173,   168,   567,   173,   177,    60,
      75,   241,   350,   260,   452,   262,   264,   337,   269,   305,
     337,   403,   297,   115,    75,   145,   178,    39,    55,    87,
     237,    90,    97,    45,   234,    48,   469,   109,   481,   298,
      57,   102,    46,   336,   179,   158,    40,   288,   404,    58,
      61,   349,   296,    76,   118,   119,   120,   202,   426,   282,
     319,   283,   320,   297,   429,   305,   143,   144,   381,   351,
      94,    98,    47,   110,   154,   238,   325,   292,   493,    59,
     298,   162,   163,   352,   270,   401,    42,   402,   203,   398,
     471,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   509,   329,   320,   111,
     353,   297,   486,   493,   206,   118,   119,   120,   257,   164,
     494,   387,    43,   388,   389,   495,   520,   240,   298,   297,
     552,   496,   497,    54,   399,   400,   448,   274,   121,   338,
     336,   295,   502,   461,   204,   541,   298,    50,   498,   173,
     342,    49,  -315,   499,   122,   494,   256,   207,   208,   209,
     495,   275,    53,   261,   449,   450,   496,   497,   305,   206,
     118,   119,   120,   385,   214,   382,    54,   462,    65,   431,
     260,   109,   271,   498,   560,   444,   445,  -315,   499,   483,
      62,   532,    69,   341,   439,   276,   210,   344,   347,   121,
     123,   124,   125,    70,   297,   423,   316,   317,   318,   319,
     386,   320,   207,   208,   209,   122,   391,   110,   492,   566,
     463,   298,   297,   345,   129,   263,    67,    68,   478,   479,
     129,   406,   211,   449,   450,   392,   126,   464,  -268,   298,
     476,   393,    72,   287,   453,   475,   212,   297,   407,   114,
     562,   210,   297,   111,   121,   158,    79,   427,    81,   392,
     323,   123,   124,   125,   298,   477,   297,   528,   530,   298,
     122,    88,   322,  -269,   297,   323,   474,   287,    80,   206,
     118,   119,   120,   298,   213,   214,   331,   211,   493,   332,
     379,   298,   215,   380,   297,    83,   527,   126,   297,    82,
     554,   212,   424,    85,    86,   206,   118,   119,   120,    91,
     523,   298,   525,   526,    96,   298,   123,   124,   125,   106,
     480,    92,   207,   208,   209,   489,   491,   103,   184,   184,
     494,   485,   247,   248,    75,   495,   107,   104,   117,   213,
     214,   496,   497,   511,   138,   564,   323,   215,   207,   208,
     209,   521,   126,   522,   323,   140,   336,   534,   498,   546,
     336,   210,   547,   499,   121,   555,   185,   186,   187,   188,
     189,   190,   141,   206,   118,   119,   120,   145,   551,   557,
     122,   323,   336,   573,   147,   148,   323,   210,   150,   153,
     121,   118,   155,   156,   565,   161,    54,   211,   166,   120,
     168,   174,   571,   176,   574,   181,   122,   182,   183,   184,
     531,   212,   200,   201,   235,   242,   290,   208,   209,   245,
     239,   249,   114,   211,   265,   272,   123,   124,   125,    15,
     281,   284,   285,   286,   293,   321,   327,   212,   328,   336,
     324,   206,   118,   119,   120,   330,   333,   343,     1,   213,
     214,   348,   123,   124,   125,   210,     2,   215,   121,   356,
     357,   377,   126,     3,   378,    75,   394,     4,   397,   405,
     425,   441,   446,   447,   122,   213,   214,   454,     5,   455,
     299,     6,     7,   215,   457,   208,   209,   403,   126,   458,
     459,   291,   472,     8,     9,   468,   473,   297,   487,   484,
     320,   490,   488,   506,    10,   212,   508,    11,   501,   510,
     512,   513,   514,   515,   516,   517,   518,   300,   529,   536,
     123,   124,   125,   210,   533,   537,   121,   538,    12,   535,
     539,   540,    13,   542,   543,   563,   545,   548,   549,   550,
     553,   556,   122,   213,   214,   561,   570,    14,   105,    74,
     569,   215,   430,    15,   283,   577,   126,   428,   470,   291,
     524,   205,   519,   383,   301,   326,   442,   440,   390,   559,
     558,   300,   576,   212,   339,   544,   165,   443,     0,   355,
       0,     0,     0,     0,   302,     0,     0,     0,   123,   124,
     125,   303,   304,     0,     0,     0,    16,    17,    18,   305,
     306,     0,     0,     0,     0,     0,     0,     0,  -317,     0,
       0,   213,   214,     0,     0,     1,     0,     0,  -318,   215,
       0,     0,     0,     2,   126,   307,   308,   309,   310,   311,
       3,     0,   312,   313,     4,   314,   315,   316,   317,   318,
     319,     0,   320,     0,   358,     5,   304,     0,     6,     7,
       0,     0,     0,   305,  -318,     0,     0,   359,     0,     0,
       8,     9,   360,   361,   362,   363,   364,     0,   365,     0,
       0,    10,     0,     0,    11,     0,   366,     0,     0,  -318,
    -318,  -318,   310,   311,   300,     0,   312,   313,     0,   314,
     315,   316,   317,   318,   319,    12,   320,     0,     0,    13,
       0,     0,   367,     0,     0,     0,   300,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,   368,
      15,   369,   370,     0,     0,     0,   300,     0,     0,     0,
       0,   301,     0,     0,     0,     0,   371,     0,     0,     0,
     372,     0,   373,     0,     0,   482,     0,     0,     0,     0,
       0,   395,   374,   301,     0,     0,     0,     0,     0,   304,
       0,     0,     0,    16,    17,    18,   305,   306,     0,     0,
       0,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,   304,     0,     0,     0,     0,   375,     0,   305,   306,
       0,     0,   307,   308,   309,   310,   311,     0,     0,   312,
     313,   304,   314,   315,   316,   317,   318,   319,   305,   320,
       0,     0,     0,     0,   307,   308,   309,   310,   311,     0,
       0,   312,   313,     0,   314,   315,   316,   317,   318,   319,
       0,   320,     0,     0,     0,     0,     0,  -318,  -318,     0,
       0,  -318,  -318,     0,   314,   315,   316,   317,   318,   319,
       0,   320,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196
};

static const yytype_int16 yycheck[] =
{
      54,    81,   145,     2,    97,    98,     5,    57,    58,    59,
     203,    10,   107,    12,    96,    97,    98,   211,     3,   213,
     293,     3,     3,     3,   112,    12,    51,   115,   115,    19,
      58,   151,    63,   176,   356,   178,   179,     3,   182,   136,
       3,   101,   115,    78,    58,    83,    55,    26,    12,    48,
      64,    50,    94,    71,   147,    94,   378,     9,   180,   132,
      71,    60,    80,   185,    73,   147,     3,   210,   128,    80,
      60,    55,   215,    37,     4,     5,     6,    94,   324,   181,
     177,   183,   179,   115,   330,   136,    85,    86,   281,   120,
      54,   133,   110,    45,    93,   149,   239,   291,    25,   110,
     132,   100,   101,   134,   184,   299,     3,   301,   125,   182,
     383,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   448,   247,   179,    81,
     161,   115,   405,    25,     3,     4,     5,     6,   173,   103,
      67,   285,     3,   286,   287,    72,   468,   185,   132,   115,
     182,    78,    79,   181,   297,   298,   130,     3,    88,   125,
     185,   215,   125,    27,   181,   501,   132,    98,    95,   257,
     257,    94,    99,   100,   104,    67,   170,    46,    47,    48,
      72,    27,    80,   177,   158,   159,    78,    79,   136,     3,
       4,     5,     6,   174,   174,   182,   181,    61,   154,   181,
     343,     9,   201,    95,   540,   348,   349,    99,   100,   403,
       3,   484,     0,   256,   334,    61,    85,    90,   261,    88,
     150,   151,   152,   184,   115,   320,   174,   175,   176,   177,
     284,   179,    46,    47,    48,   104,    92,    45,   431,   561,
     104,   132,   115,   116,   324,   114,    17,    18,   391,   392,
     330,   104,   121,   158,   159,   111,   186,   121,   185,   132,
      92,   117,   112,   111,   357,   108,   135,   115,   121,    77,
     543,    85,   115,    81,    88,   357,     3,   327,   181,   111,
     185,   150,   151,   152,   132,   117,   115,   108,   482,   132,
     104,     3,   182,   185,   115,   185,   125,   111,   183,     3,
       4,     5,     6,   132,   173,   174,   182,   121,    25,   185,
     182,   132,   181,   185,   115,   127,   117,   186,   115,    94,
     117,   135,   321,    46,    47,     3,     4,     5,     6,   123,
     473,   132,   475,   476,   133,   132,   150,   151,   152,    97,
     394,   127,    46,    47,    48,   182,   182,   125,   185,   185,
      67,   405,   159,   160,    58,    72,   124,   185,     3,   173,
     174,    78,    79,   182,     4,    82,   185,   181,    46,    47,
      48,   182,   186,   182,   185,   121,   185,   182,    95,   182,
     185,    85,   185,   100,    88,   528,   138,   139,   140,   141,
     142,   143,     3,     3,     4,     5,     6,    83,   182,   182,
     104,   185,   185,   182,    93,   181,   185,    85,     3,    46,
      88,     4,   182,   182,   131,     3,   181,   121,   181,     6,
      12,   114,   565,   126,   567,     4,   104,     4,   182,   185,
     484,   135,    46,   131,     3,    91,    46,    47,    48,   112,
     162,     3,    77,   121,   118,     3,   150,   151,   152,   112,
     125,   181,   181,   181,   179,    98,    39,   135,    49,   185,
     181,     3,     4,     5,     6,   181,    94,   185,     7,   173,
     174,    55,   150,   151,   152,    85,    15,   181,    88,   181,
      93,   120,   186,    22,   181,    58,   181,    26,   182,   181,
       3,     3,   161,   120,   104,   173,   174,   181,    37,   181,
      17,    40,    41,   181,   181,    47,    48,   101,   186,   181,
     181,   121,   182,    52,    53,   181,    94,   115,   104,   181,
     179,     3,   180,    70,    63,   135,    63,    66,   185,   160,
       6,     6,     6,     6,     6,   120,   104,    54,   182,    99,
     150,   151,   152,    85,   182,    78,    88,    78,    87,   182,
      78,    99,    91,     3,   126,     6,   182,   182,   182,   182,
     182,   182,   104,   173,   174,   181,   181,   106,    70,    24,
     182,   181,   332,   112,   183,   182,   186,   328,   380,   121,
     474,   144,   466,   282,   101,   240,   343,   336,   288,   536,
     535,    54,   570,   135,   255,   509,   104,   347,    -1,   267,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,   150,   151,
     152,   128,   129,    -1,    -1,    -1,   155,   156,   157,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,
      -1,   173,   174,    -1,    -1,     7,    -1,    -1,   101,   181,
      -1,    -1,    -1,    15,   186,   162,   163,   164,   165,   166,
      22,    -1,   169,   170,    26,   172,   173,   174,   175,   176,
     177,    -1,   179,    -1,    11,    37,   129,    -1,    40,    41,
      -1,    -1,    -1,   136,   137,    -1,    -1,    24,    -1,    -1,
      52,    53,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    63,    -1,    -1,    66,    -1,    43,    -1,    -1,   162,
     163,   164,   165,   166,    54,    -1,   169,   170,    -1,   172,
     173,   174,   175,   176,   177,    87,   179,    -1,    -1,    91,
      -1,    -1,    69,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    86,
     112,    88,    89,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,    -1,   109,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,   121,   119,   101,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,   155,   156,   157,   136,   137,    -1,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,   153,    -1,   136,   137,
      -1,    -1,   162,   163,   164,   165,   166,    -1,    -1,   169,
     170,   129,   172,   173,   174,   175,   176,   177,   136,   179,
      -1,    -1,    -1,    -1,   162,   163,   164,   165,   166,    -1,
      -1,   169,   170,    -1,   172,   173,   174,   175,   176,   177,
      -1,   179,    -1,    -1,    -1,    -1,    -1,   165,   166,    -1,
      -1,   169,   170,    -1,   172,   173,   174,   175,   176,   177,
      -1,   179,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    37,    40,    41,    52,    53,
      63,    66,    87,    91,   106,   112,   155,   156,   157,   188,
     189,   190,   191,   195,   197,   199,   200,   204,   205,   206,
     218,   220,   223,   224,   225,   227,   230,   303,   304,    26,
       3,   292,     3,     3,   292,    71,    80,   110,    94,    94,
      98,   291,   292,    80,   181,   233,   292,    71,    80,   110,
      19,    60,     3,   305,   306,   154,   196,   196,   196,     0,
     184,   310,   112,   192,   192,    58,   233,   234,   238,     3,
     183,   181,    94,   127,   207,   207,   207,   292,     3,   201,
     292,   123,   127,   219,   233,   234,   133,    94,   133,   219,
     219,   219,   292,   125,   185,   190,    97,   124,   250,     9,
      45,    81,   235,   236,    77,   235,   246,     3,     4,     5,
       6,    88,   104,   150,   151,   152,   186,   253,   254,   277,
     278,   279,   280,   281,   282,   283,   284,   285,     4,   198,
     121,     3,   293,   292,   292,    83,   243,    93,   181,   226,
       3,   228,   229,    46,   292,   182,   182,   202,   278,   202,
     202,     3,   292,   292,   233,   306,   181,   281,    12,   239,
     231,   232,   233,   238,   114,   237,   126,   231,    55,    73,
     251,     4,     4,   182,   185,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   270,   271,   272,
      46,   131,    94,   125,   181,   226,     3,    46,    47,    48,
      85,   121,   135,   173,   174,   181,   256,   257,   258,   259,
     260,   261,   262,   263,   265,   266,   267,   268,   269,   273,
     274,   275,   276,   277,   202,     3,   311,    64,   234,   162,
     185,   243,    91,   221,   222,   112,   203,   203,   203,     3,
     193,   194,   240,   252,   255,   256,   246,   235,   247,   248,
     256,   246,   256,   114,   256,   118,   298,   299,   300,   270,
     277,   292,     3,   230,     3,    27,    61,   208,   209,   210,
     217,   125,   181,   183,   181,   181,   181,   111,   256,   264,
      46,   121,   257,   179,   257,   234,   256,   115,   132,    17,
      54,   101,   121,   128,   129,   136,   137,   162,   163,   164,
     165,   166,   169,   170,   172,   173,   174,   175,   176,   177,
     179,    98,   182,   185,   181,   256,   229,    39,    49,   243,
     181,   182,   185,    94,   241,   242,   185,     3,   125,   296,
     297,   251,   231,   185,    90,   116,   249,   251,    55,    55,
      63,   120,   134,   161,   301,   300,   181,    93,    11,    24,
      29,    30,    31,    32,    33,    35,    43,    69,    86,    88,
      89,   103,   107,   109,   119,   153,   211,   120,   181,   182,
     185,   230,   182,   239,     3,   174,   234,   270,   256,   256,
     264,    92,   111,   117,   181,   121,   252,   182,   182,   256,
     256,   257,   257,   101,   128,   181,   104,   121,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   281,   292,     3,   254,   219,   201,   254,
     194,   181,   286,   287,   288,   289,   290,   292,   307,   243,
     255,     3,   248,   298,   256,   256,   161,   120,   130,   158,
     159,   302,   311,   202,   181,   181,   213,   181,   181,   181,
     212,    27,    61,   104,   121,   214,   215,   216,   181,   311,
     209,   252,   182,    94,   125,   108,    92,   117,   256,   256,
     234,   180,   115,   257,   181,   234,   252,   104,   180,   182,
       3,   182,   230,    25,    67,    72,    78,    79,    95,   100,
     308,   185,   125,   294,   295,   296,    70,   244,    63,   311,
     160,   182,     6,     6,     6,     6,     6,   120,   104,   216,
     311,   182,   182,   256,   211,   256,   256,   117,   108,   182,
     257,   234,   252,   182,   182,   182,    99,    78,    78,    78,
      99,   287,     3,   126,   302,   182,   182,   185,   182,   182,
     182,   182,   182,   182,   117,   256,   182,   182,   295,   288,
     287,   181,   252,     6,    82,   131,   311,    51,   245,   182,
     181,   256,   309,   182,   256,     3,   276,   182
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   187,   188,   189,   189,   190,   190,   190,   190,   190,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   195,   196,
     196,   197,   198,   199,   199,   200,   200,   201,   202,   203,
     203,   204,   204,   205,   205,   205,   206,   206,   206,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   212,   212,   213,   213,
     213,   214,   214,   215,   215,   216,   216,   216,   216,   217,
     217,   218,   218,   218,   218,   219,   219,   220,   221,   222,
     223,   224,   225,   225,   226,   226,   227,   228,   228,   229,
     230,   230,   230,   231,   231,   232,   232,   233,   233,   234,
     234,   235,   236,   236,   236,   237,   237,   238,   239,   239,
     240,   241,   241,   242,   243,   243,   244,   244,   245,   245,
     246,   246,   247,   247,   248,   249,   249,   249,   250,   250,
     251,   251,   251,   251,   251,   251,   252,   252,   253,   253,
     254,   254,   255,   256,   256,   256,   256,   256,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   258,
     258,   259,   259,   259,   259,   259,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   261,   261,   262,
     262,   262,   262,   263,   263,   263,   263,   264,   264,   265,
     265,   266,   266,   266,   266,   266,   266,   266,   267,   267,
     268,   269,   270,   270,   270,   270,   270,   270,   271,   271,
     271,   271,   271,   271,   272,   272,   273,   274,   275,   276,
     276,   276,   276,   277,   277,   277,   277,   277,   277,   277,
     278,   279,   279,   280,   280,   281,   282,   283,   284,   284,
     284,   285,   286,   286,   287,   287,   288,   288,   289,   289,
     290,   291,   292,   292,   293,   293,   294,   294,   295,   295,
     296,   296,   297,   297,   298,   298,   299,   299,   300,   300,
     301,   301,   301,   301,   302,   302,   302,   303,   303,   304,
     305,   305,   306,   307,   307,   307,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   309,   310,   310,   311,
     311
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     6,     1,     1,     3,
       0,     5,     5,     2,     3,     2,     8,     7,     6,     9,
       7,     3,     0,     1,     3,     1,     1,     3,     1,     1,
       4,     4,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     3,     0,     5,     3,
       0,     1,     0,     1,     2,     2,     1,     1,     2,     5,
       4,     4,     4,     3,     4,     2,     0,     5,     1,     4,
       4,     2,     8,     5,     3,     0,     5,     1,     3,     3,
       2,     2,     6,     1,     1,     1,     3,     3,     3,     4,
       6,     2,     1,     1,     1,     1,     0,     7,     1,     0,
       1,     1,     0,     2,     2,     0,     4,     0,     2,     0,
       3,     0,     1,     3,     2,     1,     1,     0,     2,     0,
       2,     2,     4,     2,     4,     0,     1,     3,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     2,     3,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     3,     3,     5,
       6,     5,     6,     4,     6,     3,     5,     4,     5,     4,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       6,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     1,     1,     3,     1,     1,     1,     4,     1,     3,
       2,     1,     1,     3,     1,     0,     1,     5,     1,     0,
       2,     1,     1,     0,     1,     0,     1,     2,     3,     5,
       1,     3,     1,     2,     2,     1,     0,     1,     0,     2,
       1,     3,     3,     4,     6,     8,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     0,     1,     1,     0,     1,
       3
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
#line 174 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2036 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 174 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2042 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 164 "bison_parser.y"
                { }
#line 2048 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 164 "bison_parser.y"
                { }
#line 2054 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).stmt_vec)) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2067 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2073 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2079 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2092 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2105 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2111 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2117 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2123 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 174 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2129 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2135 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2141 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 164 "bison_parser.y"
                { }
#line 2147 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 174 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2153 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 164 "bison_parser.y"
                { }
#line 2159 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2165 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2171 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2177 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 164 "bison_parser.y"
                { }
#line 2183 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).table_element_vec)) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2196 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2202 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2208 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 164 "bison_parser.y"
                { }
#line 2214 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 164 "bison_parser.y"
                { }
#line 2220 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2226 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 164 "bison_parser.y"
                { }
#line 2232 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_set: /* column_constraint_set  */
#line 164 "bison_parser.y"
                { }
#line 2238 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 164 "bison_parser.y"
                { }
#line 2244 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2250 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2256 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 164 "bison_parser.y"
                { }
#line 2262 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2268 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2274 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2280 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2286 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2292 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2298 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 166 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2311 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2317 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).update_vec)) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2336 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2354 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2360 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2366 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2372 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2378 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 164 "bison_parser.y"
                { }
#line 2384 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2390 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 164 "bison_parser.y"
                { }
#line 2396 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2409 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2415 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2421 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2427 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2433 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2439 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2452 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).order_vec)) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2465 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2471 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 164 "bison_parser.y"
                { }
#line 2477 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2502 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2515 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).expr_vec)) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2528 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2534 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2540 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2546 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2552 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2558 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2564 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2570 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2576 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2582 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2588 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2594 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2600 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2606 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2612 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2618 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 164 "bison_parser.y"
                { }
#line 2624 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 164 "bison_parser.y"
                { }
#line 2630 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 164 "bison_parser.y"
                { }
#line 2636 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2642 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2648 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2654 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2660 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2666 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2672 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2678 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2684 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2690 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2696 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2702 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2708 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2714 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2720 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2726 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2732 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 175 "bison_parser.y"
                {
      if (((*yyvaluep).table_vec)) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2745 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2751 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2757 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 165 "bison_parser.y"
                { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2763 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 174 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2769 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2775 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2781 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2787 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2793 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2799 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2805 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2811 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 164 "bison_parser.y"
                { }
#line 2817 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 164 "bison_parser.y"
                { }
#line 2823 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2829 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2835 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2841 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2847 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2853 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 164 "bison_parser.y"
                { }
#line 2859 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 183 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2865 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 166 "bison_parser.y"
                {
      if (((*yyvaluep).str_vec)) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          free(ptr);
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2878 "bison_parser.cpp"
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
#line 75 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 2986 "bison_parser.cpp"

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
#line 310 "bison_parser.y"
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
#line 3215 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 329 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3226 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 335 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3237 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 342 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3246 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 346 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3255 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 350 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3261 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 351 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3267 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 352 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3273 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 354 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3279 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 355 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3285 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 356 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3291 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 357 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3297 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 358 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3303 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 359 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3309 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 360 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3315 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 361 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3321 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 362 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3327 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 363 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3333 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 369 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3339 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 370 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3345 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 372 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3354 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 376 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3363 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 381 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3372 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 385 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3382 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 395 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3388 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 396 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3394 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 397 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3400 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 405 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3410 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 413 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3419 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 417 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3429 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 428 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3440 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type opt_where  */
#line 434 "bison_parser.y"
                                                         {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
}
#line 3452 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 442 "bison_parser.y"
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
#line 3471 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 457 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3480 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 462 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3486 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 463 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3492 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 469 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3503 "bison_parser.cpp"
    break;

  case 42: /* export_statement: COPY select_with_paren TO file_path opt_file_type  */
#line 475 "bison_parser.y"
                                                    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
}
#line 3513 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW TABLES  */
#line 486 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3519 "bison_parser.cpp"
    break;

  case 44: /* show_statement: SHOW COLUMNS table_name  */
#line 487 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3529 "bison_parser.cpp"
    break;

  case 45: /* show_statement: DESCRIBE table_name  */
#line 492 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3539 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
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
#line 3557 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 516 "bison_parser.y"
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
#line 3574 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 528 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3586 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 535 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3598 "bison_parser.cpp"
    break;

  case 50: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 542 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3611 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: IF NOT EXISTS  */
#line 551 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3617 "bison_parser.cpp"
    break;

  case 52: /* opt_not_exists: %empty  */
#line 552 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3623 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem  */
#line 554 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3632 "bison_parser.cpp"
    break;

  case 54: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 558 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3641 "bison_parser.cpp"
    break;

  case 55: /* table_elem: column_def  */
#line 563 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3647 "bison_parser.cpp"
    break;

  case 56: /* table_elem: table_constraint  */
#line 564 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3653 "bison_parser.cpp"
    break;

  case 57: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 566 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3664 "bison_parser.cpp"
    break;

  case 58: /* column_type: BIGINT  */
#line 573 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3670 "bison_parser.cpp"
    break;

  case 59: /* column_type: BOOLEAN  */
#line 574 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3676 "bison_parser.cpp"
    break;

  case 60: /* column_type: CHAR '(' INTVAL ')'  */
#line 575 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3682 "bison_parser.cpp"
    break;

  case 61: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 576 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3688 "bison_parser.cpp"
    break;

  case 62: /* column_type: DATE  */
#line 577 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3694 "bison_parser.cpp"
    break;

  case 63: /* column_type: DATETIME  */
#line 578 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3700 "bison_parser.cpp"
    break;

  case 64: /* column_type: DECIMAL opt_decimal_specification  */
#line 579 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3709 "bison_parser.cpp"
    break;

  case 65: /* column_type: DOUBLE  */
#line 583 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3715 "bison_parser.cpp"
    break;

  case 66: /* column_type: FLOAT  */
#line 584 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3721 "bison_parser.cpp"
    break;

  case 67: /* column_type: INT  */
#line 585 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3727 "bison_parser.cpp"
    break;

  case 68: /* column_type: INTEGER  */
#line 586 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3733 "bison_parser.cpp"
    break;

  case 69: /* column_type: LONG  */
#line 587 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3739 "bison_parser.cpp"
    break;

  case 70: /* column_type: REAL  */
#line 588 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3745 "bison_parser.cpp"
    break;

  case 71: /* column_type: SMALLINT  */
#line 589 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3751 "bison_parser.cpp"
    break;

  case 72: /* column_type: TEXT  */
#line 590 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3757 "bison_parser.cpp"
    break;

  case 73: /* column_type: TIME opt_time_precision  */
#line 591 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3763 "bison_parser.cpp"
    break;

  case 74: /* column_type: TIMESTAMP  */
#line 592 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3769 "bison_parser.cpp"
    break;

  case 75: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 593 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3775 "bison_parser.cpp"
    break;

  case 76: /* opt_time_precision: '(' INTVAL ')'  */
#line 595 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3781 "bison_parser.cpp"
    break;

  case 77: /* opt_time_precision: %empty  */
#line 596 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3787 "bison_parser.cpp"
    break;

  case 78: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 598 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3793 "bison_parser.cpp"
    break;

  case 79: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 599 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3799 "bison_parser.cpp"
    break;

  case 80: /* opt_decimal_specification: %empty  */
#line 600 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3805 "bison_parser.cpp"
    break;

  case 81: /* opt_column_constraints: column_constraint_set  */
#line 602 "bison_parser.y"
                                               { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 3811 "bison_parser.cpp"
    break;

  case 82: /* opt_column_constraints: %empty  */
#line 603 "bison_parser.y"
              { (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>(); }
#line 3817 "bison_parser.cpp"
    break;

  case 83: /* column_constraint_set: column_constraint  */
#line 605 "bison_parser.y"
                                          {
  (yyval.column_constraint_set) = new std::unordered_set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 3826 "bison_parser.cpp"
    break;

  case 84: /* column_constraint_set: column_constraint_set column_constraint  */
#line 609 "bison_parser.y"
                                          {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 3835 "bison_parser.cpp"
    break;

  case 85: /* column_constraint: PRIMARY KEY  */
#line 614 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3841 "bison_parser.cpp"
    break;

  case 86: /* column_constraint: UNIQUE  */
#line 615 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3847 "bison_parser.cpp"
    break;

  case 87: /* column_constraint: NULL  */
#line 616 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3853 "bison_parser.cpp"
    break;

  case 88: /* column_constraint: NOT NULL  */
#line 617 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3859 "bison_parser.cpp"
    break;

  case 89: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 619 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3865 "bison_parser.cpp"
    break;

  case 90: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 620 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3871 "bison_parser.cpp"
    break;

  case 91: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 628 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3882 "bison_parser.cpp"
    break;

  case 92: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 634 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3893 "bison_parser.cpp"
    break;

  case 93: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 640 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3903 "bison_parser.cpp"
    break;

  case 94: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 646 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3913 "bison_parser.cpp"
    break;

  case 95: /* opt_exists: IF EXISTS  */
#line 652 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3919 "bison_parser.cpp"
    break;

  case 96: /* opt_exists: %empty  */
#line 653 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3925 "bison_parser.cpp"
    break;

  case 97: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 660 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3935 "bison_parser.cpp"
    break;

  case 98: /* alter_action: drop_action  */
#line 666 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3941 "bison_parser.cpp"
    break;

  case 99: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 668 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3950 "bison_parser.cpp"
    break;

  case 100: /* delete_statement: DELETE FROM table_name opt_where  */
#line 678 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3961 "bison_parser.cpp"
    break;

  case 101: /* truncate_statement: TRUNCATE table_name  */
#line 685 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3971 "bison_parser.cpp"
    break;

  case 102: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 696 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 3983 "bison_parser.cpp"
    break;

  case 103: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 703 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3995 "bison_parser.cpp"
    break;

  case 104: /* opt_column_list: '(' ident_commalist ')'  */
#line 711 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4001 "bison_parser.cpp"
    break;

  case 105: /* opt_column_list: %empty  */
#line 712 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4007 "bison_parser.cpp"
    break;

  case 106: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 719 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4018 "bison_parser.cpp"
    break;

  case 107: /* update_clause_commalist: update_clause  */
#line 726 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4027 "bison_parser.cpp"
    break;

  case 108: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 730 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4036 "bison_parser.cpp"
    break;

  case 109: /* update_clause: IDENTIFIER '=' expr  */
#line 735 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4046 "bison_parser.cpp"
    break;

  case 110: /* select_statement: opt_with_clause select_with_paren  */
#line 745 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4055 "bison_parser.cpp"
    break;

  case 111: /* select_statement: opt_with_clause select_no_paren  */
#line 749 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4064 "bison_parser.cpp"
    break;

  case 112: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 753 "bison_parser.y"
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
#line 4080 "bison_parser.cpp"
    break;

  case 115: /* select_within_set_operation_no_parentheses: select_clause  */
#line 767 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4086 "bison_parser.cpp"
    break;

  case 116: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 768 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4099 "bison_parser.cpp"
    break;

  case 117: /* select_with_paren: '(' select_no_paren ')'  */
#line 777 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4105 "bison_parser.cpp"
    break;

  case 118: /* select_with_paren: '(' select_with_paren ')'  */
#line 778 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4111 "bison_parser.cpp"
    break;

  case 119: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 780 "bison_parser.y"
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
#line 4130 "bison_parser.cpp"
    break;

  case 120: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 794 "bison_parser.y"
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
#line 4146 "bison_parser.cpp"
    break;

  case 121: /* set_operator: set_type opt_all  */
#line 806 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4155 "bison_parser.cpp"
    break;

  case 122: /* set_type: UNION  */
#line 811 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4164 "bison_parser.cpp"
    break;

  case 123: /* set_type: INTERSECT  */
#line 815 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4173 "bison_parser.cpp"
    break;

  case 124: /* set_type: EXCEPT  */
#line 819 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4182 "bison_parser.cpp"
    break;

  case 125: /* opt_all: ALL  */
#line 824 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4188 "bison_parser.cpp"
    break;

  case 126: /* opt_all: %empty  */
#line 825 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4194 "bison_parser.cpp"
    break;

  case 127: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 827 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4208 "bison_parser.cpp"
    break;

  case 128: /* opt_distinct: DISTINCT  */
#line 837 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4214 "bison_parser.cpp"
    break;

  case 129: /* opt_distinct: %empty  */
#line 838 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4220 "bison_parser.cpp"
    break;

  case 131: /* opt_from_clause: from_clause  */
#line 842 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4226 "bison_parser.cpp"
    break;

  case 132: /* opt_from_clause: %empty  */
#line 843 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4232 "bison_parser.cpp"
    break;

  case 133: /* from_clause: FROM table_ref  */
#line 845 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4238 "bison_parser.cpp"
    break;

  case 134: /* opt_where: WHERE expr  */
#line 847 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4244 "bison_parser.cpp"
    break;

  case 135: /* opt_where: %empty  */
#line 848 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4250 "bison_parser.cpp"
    break;

  case 136: /* opt_group: GROUP BY expr_list opt_having  */
#line 850 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4260 "bison_parser.cpp"
    break;

  case 137: /* opt_group: %empty  */
#line 855 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4266 "bison_parser.cpp"
    break;

  case 138: /* opt_having: HAVING expr  */
#line 857 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4272 "bison_parser.cpp"
    break;

  case 139: /* opt_having: %empty  */
#line 858 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4278 "bison_parser.cpp"
    break;

  case 140: /* opt_order: ORDER BY order_list  */
#line 860 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4284 "bison_parser.cpp"
    break;

  case 141: /* opt_order: %empty  */
#line 861 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4290 "bison_parser.cpp"
    break;

  case 142: /* order_list: order_desc  */
#line 863 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4299 "bison_parser.cpp"
    break;

  case 143: /* order_list: order_list ',' order_desc  */
#line 867 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4308 "bison_parser.cpp"
    break;

  case 144: /* order_desc: expr opt_order_type  */
#line 872 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4314 "bison_parser.cpp"
    break;

  case 145: /* opt_order_type: ASC  */
#line 874 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4320 "bison_parser.cpp"
    break;

  case 146: /* opt_order_type: DESC  */
#line 875 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4326 "bison_parser.cpp"
    break;

  case 147: /* opt_order_type: %empty  */
#line 876 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4332 "bison_parser.cpp"
    break;

  case 148: /* opt_top: TOP int_literal  */
#line 880 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4338 "bison_parser.cpp"
    break;

  case 149: /* opt_top: %empty  */
#line 881 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4344 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: LIMIT expr  */
#line 883 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4350 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: OFFSET expr  */
#line 884 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4356 "bison_parser.cpp"
    break;

  case 152: /* opt_limit: LIMIT expr OFFSET expr  */
#line 885 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4362 "bison_parser.cpp"
    break;

  case 153: /* opt_limit: LIMIT ALL  */
#line 886 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4368 "bison_parser.cpp"
    break;

  case 154: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 887 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4374 "bison_parser.cpp"
    break;

  case 155: /* opt_limit: %empty  */
#line 888 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4380 "bison_parser.cpp"
    break;

  case 156: /* expr_list: expr_alias  */
#line 893 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4389 "bison_parser.cpp"
    break;

  case 157: /* expr_list: expr_list ',' expr_alias  */
#line 897 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4398 "bison_parser.cpp"
    break;

  case 158: /* opt_literal_list: literal_list  */
#line 902 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4404 "bison_parser.cpp"
    break;

  case 159: /* opt_literal_list: %empty  */
#line 903 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4410 "bison_parser.cpp"
    break;

  case 160: /* literal_list: literal  */
#line 905 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4419 "bison_parser.cpp"
    break;

  case 161: /* literal_list: literal_list ',' literal  */
#line 909 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4428 "bison_parser.cpp"
    break;

  case 162: /* expr_alias: expr opt_alias  */
#line 914 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4440 "bison_parser.cpp"
    break;

  case 168: /* operand: '(' expr ')'  */
#line 924 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4446 "bison_parser.cpp"
    break;

  case 178: /* operand: '(' select_no_paren ')'  */
#line 926 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4454 "bison_parser.cpp"
    break;

  case 181: /* unary_expr: '-' operand  */
#line 932 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4460 "bison_parser.cpp"
    break;

  case 182: /* unary_expr: NOT operand  */
#line 933 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4466 "bison_parser.cpp"
    break;

  case 183: /* unary_expr: operand ISNULL  */
#line 934 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4472 "bison_parser.cpp"
    break;

  case 184: /* unary_expr: operand IS NULL  */
#line 935 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4478 "bison_parser.cpp"
    break;

  case 185: /* unary_expr: operand IS NOT NULL  */
#line 936 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4484 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand '-' operand  */
#line 938 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4490 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '+' operand  */
#line 939 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4496 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand '/' operand  */
#line 940 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4502 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand '*' operand  */
#line 941 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4508 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand '%' operand  */
#line 942 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4514 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand '^' operand  */
#line 943 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4520 "bison_parser.cpp"
    break;

  case 193: /* binary_expr: operand LIKE operand  */
#line 944 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4526 "bison_parser.cpp"
    break;

  case 194: /* binary_expr: operand NOT LIKE operand  */
#line 945 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4532 "bison_parser.cpp"
    break;

  case 195: /* binary_expr: operand ILIKE operand  */
#line 946 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4538 "bison_parser.cpp"
    break;

  case 196: /* binary_expr: operand CONCAT operand  */
#line 947 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4544 "bison_parser.cpp"
    break;

  case 197: /* logic_expr: expr AND expr  */
#line 949 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4550 "bison_parser.cpp"
    break;

  case 198: /* logic_expr: expr OR expr  */
#line 950 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4556 "bison_parser.cpp"
    break;

  case 199: /* in_expr: operand IN '(' expr_list ')'  */
#line 952 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4562 "bison_parser.cpp"
    break;

  case 200: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 953 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4568 "bison_parser.cpp"
    break;

  case 201: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 954 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4574 "bison_parser.cpp"
    break;

  case 202: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 955 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4580 "bison_parser.cpp"
    break;

  case 203: /* case_expr: CASE expr case_list END  */
#line 959 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4586 "bison_parser.cpp"
    break;

  case 204: /* case_expr: CASE expr case_list ELSE expr END  */
#line 960 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4592 "bison_parser.cpp"
    break;

  case 205: /* case_expr: CASE case_list END  */
#line 961 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4598 "bison_parser.cpp"
    break;

  case 206: /* case_expr: CASE case_list ELSE expr END  */
#line 962 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4604 "bison_parser.cpp"
    break;

  case 207: /* case_list: WHEN expr THEN expr  */
#line 964 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4610 "bison_parser.cpp"
    break;

  case 208: /* case_list: case_list WHEN expr THEN expr  */
#line 965 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4616 "bison_parser.cpp"
    break;

  case 209: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 967 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4622 "bison_parser.cpp"
    break;

  case 210: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 968 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4628 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand '=' operand  */
#line 970 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4634 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand EQUALS operand  */
#line 971 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4640 "bison_parser.cpp"
    break;

  case 213: /* comp_expr: operand NOTEQUALS operand  */
#line 972 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4646 "bison_parser.cpp"
    break;

  case 214: /* comp_expr: operand '<' operand  */
#line 973 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4652 "bison_parser.cpp"
    break;

  case 215: /* comp_expr: operand '>' operand  */
#line 974 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4658 "bison_parser.cpp"
    break;

  case 216: /* comp_expr: operand LESSEQ operand  */
#line 975 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4664 "bison_parser.cpp"
    break;

  case 217: /* comp_expr: operand GREATEREQ operand  */
#line 976 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4670 "bison_parser.cpp"
    break;

  case 218: /* function_expr: IDENTIFIER '(' ')'  */
#line 978 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4676 "bison_parser.cpp"
    break;

  case 219: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 979 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4682 "bison_parser.cpp"
    break;

  case 220: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 981 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4688 "bison_parser.cpp"
    break;

  case 221: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 983 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4694 "bison_parser.cpp"
    break;

  case 222: /* datetime_field: SECOND  */
#line 985 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4700 "bison_parser.cpp"
    break;

  case 223: /* datetime_field: MINUTE  */
#line 986 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4706 "bison_parser.cpp"
    break;

  case 224: /* datetime_field: HOUR  */
#line 987 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4712 "bison_parser.cpp"
    break;

  case 225: /* datetime_field: DAY  */
#line 988 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4718 "bison_parser.cpp"
    break;

  case 226: /* datetime_field: MONTH  */
#line 989 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4724 "bison_parser.cpp"
    break;

  case 227: /* datetime_field: YEAR  */
#line 990 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4730 "bison_parser.cpp"
    break;

  case 228: /* datetime_field_plural: SECONDS  */
#line 992 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4736 "bison_parser.cpp"
    break;

  case 229: /* datetime_field_plural: MINUTES  */
#line 993 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4742 "bison_parser.cpp"
    break;

  case 230: /* datetime_field_plural: HOURS  */
#line 994 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4748 "bison_parser.cpp"
    break;

  case 231: /* datetime_field_plural: DAYS  */
#line 995 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4754 "bison_parser.cpp"
    break;

  case 232: /* datetime_field_plural: MONTHS  */
#line 996 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4760 "bison_parser.cpp"
    break;

  case 233: /* datetime_field_plural: YEARS  */
#line 997 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4766 "bison_parser.cpp"
    break;

  case 236: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1001 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4772 "bison_parser.cpp"
    break;

  case 237: /* array_index: operand '[' int_literal ']'  */
#line 1003 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4778 "bison_parser.cpp"
    break;

  case 238: /* between_expr: operand BETWEEN operand AND operand  */
#line 1005 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4784 "bison_parser.cpp"
    break;

  case 239: /* column_name: IDENTIFIER  */
#line 1007 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4790 "bison_parser.cpp"
    break;

  case 240: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1008 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4796 "bison_parser.cpp"
    break;

  case 241: /* column_name: '*'  */
#line 1009 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4802 "bison_parser.cpp"
    break;

  case 242: /* column_name: IDENTIFIER '.' '*'  */
#line 1010 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4808 "bison_parser.cpp"
    break;

  case 250: /* string_literal: STRING  */
#line 1014 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4814 "bison_parser.cpp"
    break;

  case 251: /* bool_literal: TRUE  */
#line 1016 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4820 "bison_parser.cpp"
    break;

  case 252: /* bool_literal: FALSE  */
#line 1017 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4826 "bison_parser.cpp"
    break;

  case 253: /* num_literal: FLOATVAL  */
#line 1019 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4832 "bison_parser.cpp"
    break;

  case 255: /* int_literal: INTVAL  */
#line 1022 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4838 "bison_parser.cpp"
    break;

  case 256: /* null_literal: NULL  */
#line 1024 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4844 "bison_parser.cpp"
    break;

  case 257: /* date_literal: DATE STRING  */
#line 1026 "bison_parser.y"
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
#line 4859 "bison_parser.cpp"
    break;

  case 258: /* interval_literal: int_literal duration_field  */
#line 1037 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4868 "bison_parser.cpp"
    break;

  case 259: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1041 "bison_parser.y"
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
#line 4884 "bison_parser.cpp"
    break;

  case 260: /* interval_literal: INTERVAL STRING  */
#line 1052 "bison_parser.y"
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
#line 4920 "bison_parser.cpp"
    break;

  case 261: /* param_expr: '?'  */
#line 1084 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4930 "bison_parser.cpp"
    break;

  case 263: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1093 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 4941 "bison_parser.cpp"
    break;

  case 267: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1102 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4952 "bison_parser.cpp"
    break;

  case 268: /* table_ref_commalist: table_ref_atomic  */
#line 1109 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 4961 "bison_parser.cpp"
    break;

  case 269: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1113 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 4970 "bison_parser.cpp"
    break;

  case 270: /* table_ref_name: table_name opt_table_alias  */
#line 1118 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4982 "bison_parser.cpp"
    break;

  case 271: /* table_ref_name_no_alias: table_name  */
#line 1126 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 4992 "bison_parser.cpp"
    break;

  case 272: /* table_name: IDENTIFIER  */
#line 1132 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5001 "bison_parser.cpp"
    break;

  case 273: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1136 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5010 "bison_parser.cpp"
    break;

  case 274: /* opt_index_name: IDENTIFIER  */
#line 1141 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5016 "bison_parser.cpp"
    break;

  case 275: /* opt_index_name: %empty  */
#line 1142 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5022 "bison_parser.cpp"
    break;

  case 277: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1144 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5028 "bison_parser.cpp"
    break;

  case 279: /* opt_table_alias: %empty  */
#line 1146 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5034 "bison_parser.cpp"
    break;

  case 280: /* alias: AS IDENTIFIER  */
#line 1148 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5040 "bison_parser.cpp"
    break;

  case 281: /* alias: IDENTIFIER  */
#line 1149 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5046 "bison_parser.cpp"
    break;

  case 283: /* opt_alias: %empty  */
#line 1151 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5052 "bison_parser.cpp"
    break;

  case 284: /* opt_locking_clause: opt_locking_clause_list  */
#line 1157 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5058 "bison_parser.cpp"
    break;

  case 285: /* opt_locking_clause: %empty  */
#line 1158 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5064 "bison_parser.cpp"
    break;

  case 286: /* opt_locking_clause_list: locking_clause  */
#line 1160 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5073 "bison_parser.cpp"
    break;

  case 287: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1164 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5082 "bison_parser.cpp"
    break;

  case 288: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1169 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5093 "bison_parser.cpp"
    break;

  case 289: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1175 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5104 "bison_parser.cpp"
    break;

  case 290: /* row_lock_mode: UPDATE  */
#line 1182 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5110 "bison_parser.cpp"
    break;

  case 291: /* row_lock_mode: NO KEY UPDATE  */
#line 1183 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5116 "bison_parser.cpp"
    break;

  case 292: /* row_lock_mode: SHARE  */
#line 1184 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5122 "bison_parser.cpp"
    break;

  case 293: /* row_lock_mode: KEY SHARE  */
#line 1185 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5128 "bison_parser.cpp"
    break;

  case 294: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1187 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5134 "bison_parser.cpp"
    break;

  case 295: /* opt_row_lock_policy: NOWAIT  */
#line 1188 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5140 "bison_parser.cpp"
    break;

  case 296: /* opt_row_lock_policy: %empty  */
#line 1189 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5146 "bison_parser.cpp"
    break;

  case 298: /* opt_with_clause: %empty  */
#line 1195 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5152 "bison_parser.cpp"
    break;

  case 299: /* with_clause: WITH with_description_list  */
#line 1197 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5158 "bison_parser.cpp"
    break;

  case 300: /* with_description_list: with_description  */
#line 1199 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5167 "bison_parser.cpp"
    break;

  case 301: /* with_description_list: with_description_list ',' with_description  */
#line 1203 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5176 "bison_parser.cpp"
    break;

  case 302: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1208 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5186 "bison_parser.cpp"
    break;

  case 303: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1218 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5198 "bison_parser.cpp"
    break;

  case 304: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1225 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5211 "bison_parser.cpp"
    break;

  case 305: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1233 "bison_parser.y"
                                                                                 {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias) {
    left_col->alias = strdup((yyvsp[-1].expr)->alias);
  }
  if ((yyvsp[-7].table)->getName()) {
    left_col->table = strdup((yyvsp[-7].table)->getName());
  }
  auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias) {
    right_col->alias = strdup((yyvsp[-1].expr)->alias);
  }
  if ((yyvsp[-4].table)->getName()) {
    right_col->table = strdup((yyvsp[-4].table)->getName());
  }
  (yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
  delete (yyvsp[-1].expr);
}
#line 5239 "bison_parser.cpp"
    break;

  case 306: /* opt_join_type: INNER  */
#line 1257 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5245 "bison_parser.cpp"
    break;

  case 307: /* opt_join_type: LEFT OUTER  */
#line 1258 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5251 "bison_parser.cpp"
    break;

  case 308: /* opt_join_type: LEFT  */
#line 1259 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5257 "bison_parser.cpp"
    break;

  case 309: /* opt_join_type: RIGHT OUTER  */
#line 1260 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5263 "bison_parser.cpp"
    break;

  case 310: /* opt_join_type: RIGHT  */
#line 1261 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5269 "bison_parser.cpp"
    break;

  case 311: /* opt_join_type: FULL OUTER  */
#line 1262 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5275 "bison_parser.cpp"
    break;

  case 312: /* opt_join_type: OUTER  */
#line 1263 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5281 "bison_parser.cpp"
    break;

  case 313: /* opt_join_type: FULL  */
#line 1264 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5287 "bison_parser.cpp"
    break;

  case 314: /* opt_join_type: CROSS  */
#line 1265 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5293 "bison_parser.cpp"
    break;

  case 315: /* opt_join_type: %empty  */
#line 1266 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5299 "bison_parser.cpp"
    break;

  case 319: /* ident_commalist: IDENTIFIER  */
#line 1277 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5308 "bison_parser.cpp"
    break;

  case 320: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1281 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5317 "bison_parser.cpp"
    break;


#line 5321 "bison_parser.cpp"

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

#line 1287 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
