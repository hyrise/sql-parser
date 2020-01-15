/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.2"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y"

// %code requires block

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 173 "bison_parser.cpp"

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_INTEGER = 279,
    SQL_NATURAL = 280,
    SQL_PREPARE = 281,
    SQL_PRIMARY = 282,
    SQL_SCHEMAS = 283,
    SQL_SPATIAL = 284,
    SQL_VARCHAR = 285,
    SQL_VIRTUAL = 286,
    SQL_DESCRIBE = 287,
    SQL_BEFORE = 288,
    SQL_COLUMN = 289,
    SQL_CREATE = 290,
    SQL_DELETE = 291,
    SQL_DIRECT = 292,
    SQL_DOUBLE = 293,
    SQL_ESCAPE = 294,
    SQL_EXCEPT = 295,
    SQL_EXISTS = 296,
    SQL_EXTRACT = 297,
    SQL_GLOBAL = 298,
    SQL_HAVING = 299,
    SQL_IMPORT = 300,
    SQL_INSERT = 301,
    SQL_ISNULL = 302,
    SQL_OFFSET = 303,
    SQL_RENAME = 304,
    SQL_SCHEMA = 305,
    SQL_SELECT = 306,
    SQL_SORTED = 307,
    SQL_TABLES = 308,
    SQL_UNIQUE = 309,
    SQL_UNLOAD = 310,
    SQL_UPDATE = 311,
    SQL_VALUES = 312,
    SQL_AFTER = 313,
    SQL_ALTER = 314,
    SQL_CROSS = 315,
    SQL_DELTA = 316,
    SQL_FLOAT = 317,
    SQL_GROUP = 318,
    SQL_INDEX = 319,
    SQL_INNER = 320,
    SQL_LIMIT = 321,
    SQL_LOCAL = 322,
    SQL_MERGE = 323,
    SQL_MINUS = 324,
    SQL_ORDER = 325,
    SQL_OUTER = 326,
    SQL_RIGHT = 327,
    SQL_TABLE = 328,
    SQL_UNION = 329,
    SQL_USING = 330,
    SQL_WHERE = 331,
    SQL_CALL = 332,
    SQL_CASE = 333,
    SQL_CHAR = 334,
    SQL_DATE = 335,
    SQL_DESC = 336,
    SQL_DROP = 337,
    SQL_ELSE = 338,
    SQL_FILE = 339,
    SQL_FROM = 340,
    SQL_FULL = 341,
    SQL_HASH = 342,
    SQL_HINT = 343,
    SQL_INTO = 344,
    SQL_JOIN = 345,
    SQL_LEFT = 346,
    SQL_LIKE = 347,
    SQL_LOAD = 348,
    SQL_LONG = 349,
    SQL_NULL = 350,
    SQL_PLAN = 351,
    SQL_SHOW = 352,
    SQL_TEXT = 353,
    SQL_THEN = 354,
    SQL_TIME = 355,
    SQL_VIEW = 356,
    SQL_WHEN = 357,
    SQL_WITH = 358,
    SQL_ADD = 359,
    SQL_ALL = 360,
    SQL_AND = 361,
    SQL_ASC = 362,
    SQL_CSV = 363,
    SQL_END = 364,
    SQL_FOR = 365,
    SQL_INT = 366,
    SQL_KEY = 367,
    SQL_NOT = 368,
    SQL_OFF = 369,
    SQL_SET = 370,
    SQL_TBL = 371,
    SQL_TOP = 372,
    SQL_AS = 373,
    SQL_BY = 374,
    SQL_IF = 375,
    SQL_IN = 376,
    SQL_IS = 377,
    SQL_OF = 378,
    SQL_ON = 379,
    SQL_OR = 380,
    SQL_TO = 381,
    SQL_ARRAY = 382,
    SQL_CONCAT = 383,
    SQL_ILIKE = 384,
    SQL_SECOND = 385,
    SQL_MINUTE = 386,
    SQL_HOUR = 387,
    SQL_DAY = 388,
    SQL_MONTH = 389,
    SQL_YEAR = 390,
    SQL_TRUE = 391,
    SQL_FALSE = 392,
    SQL_EQUALS = 393,
    SQL_NOTEQUALS = 394,
    SQL_LESS = 395,
    SQL_GREATER = 396,
    SQL_LESSEQ = 397,
    SQL_GREATEREQ = 398,
    SQL_NOTNULL = 399,
    SQL_UMINUS = 400
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 95 "bison_parser.y"

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::WithDescription* with_description_t;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;
	hsql::SetOperator* set_operator_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 375 "bison_parser.cpp"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  247
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  445

#define YYUNDEFTOK  2
#define YYMAXUTOK   400

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   152,     2,     2,
     157,   158,   150,   148,   161,   149,   159,   151,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   160,
     141,   138,   142,   162,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   155,     2,   156,   153,     2,     2,     2,     2,     2,
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
     135,   136,   137,   139,   140,   143,   144,   145,   146,   147,
     154
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   260,   260,   281,   287,   296,   300,   304,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   328,   329,   334,
     335,   339,   343,   355,   362,   365,   369,   381,   390,   394,
     404,   407,   412,   426,   433,   440,   447,   458,   459,   463,
     464,   468,   474,   475,   476,   477,   478,   479,   480,   481,
     485,   486,   487,   497,   503,   509,   517,   518,   527,   536,
     549,   556,   567,   568,   578,   587,   588,   592,   604,   608,
     612,   626,   627,   630,   631,   642,   643,   647,   657,   670,
     677,   681,   685,   692,   695,   701,   713,   714,   718,   722,
     723,   726,   731,   732,   736,   741,   745,   746,   749,   750,
     754,   755,   759,   763,   764,   765,   771,   772,   776,   777,
     778,   779,   780,   781,   788,   789,   793,   794,   798,   799,
     803,   813,   814,   815,   816,   817,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   834,   835,   839,   840,
     841,   842,   843,   847,   848,   849,   850,   851,   852,   853,
     854,   855,   856,   857,   861,   862,   866,   867,   868,   869,
     875,   876,   877,   878,   882,   883,   887,   888,   892,   893,
     894,   895,   896,   897,   898,   902,   903,   907,   911,   912,
     913,   914,   915,   916,   919,   923,   927,   931,   932,   933,
     934,   938,   939,   940,   941,   942,   946,   950,   951,   955,
     956,   960,   964,   968,   980,   981,   991,   992,   996,   997,
    1006,  1007,  1012,  1023,  1032,  1033,  1038,  1039,  1044,  1045,
    1049,  1050,  1055,  1056,  1064,  1065,  1069,  1073,  1077,  1084,
    1097,  1105,  1115,  1134,  1135,  1136,  1137,  1138,  1139,  1140,
    1141,  1142,  1143,  1148,  1157,  1158,  1163,  1164
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET",
  "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD",
  "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP",
  "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER",
  "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR",
  "DATE", "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT",
  "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW",
  "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND",
  "ASC", "CSV", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL",
  "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY",
  "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR",
  "TRUE", "FALSE", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "opt_column_nullable", "drop_statement",
  "opt_exists", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_statement_in_set_operation", "select_part_of_set_operation",
  "select_with_paren", "select_no_paren", "set_operator", "set_type",
  "opt_all", "select_clause", "opt_distinct", "select_list",
  "opt_from_clause", "from_clause", "opt_where", "opt_group", "opt_having",
  "opt_order", "order_list", "order_desc", "opt_order_type", "opt_top",
  "opt_limit", "expr_list", "opt_literal_list", "literal_list",
  "expr_alias", "expr", "operand", "scalar_expr", "unary_expr",
  "binary_expr", "logic_expr", "in_expr", "case_expr", "case_list",
  "exists_expr", "comp_expr", "function_expr", "extract_expr",
  "datetime_field", "array_expr", "array_index", "between_expr",
  "column_name", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "null_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
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
     385,   386,   387,   388,   389,   390,   391,   392,    61,   393,
     394,    60,    62,   395,   396,   397,   398,   399,    43,    45,
      42,    47,    37,    94,   400,    91,    93,    40,    41,    46,
      59,    44,    63
};
# endif

#define YYPACT_NINF -353

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-353)))

#define YYTABLE_NINF -245

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-245)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     621,    -2,    36,    46,   115,    36,   -51,    21,    34,    56,
      36,   -44,     1,   144,   151,    22,  -353,    81,    81,  -353,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,   -13,
    -353,   172,    44,  -353,    38,   119,  -353,    73,    73,    36,
     107,    36,   130,  -353,   101,   101,    36,  -353,   112,    92,
    -353,  -353,   603,  -353,   156,  -353,  -353,   138,   -13,    39,
    -353,   106,  -353,   254,    30,   277,   169,    36,    36,   207,
    -353,   208,   145,   300,   267,    36,    36,  -353,   161,   144,
    -353,   170,   310,   317,   178,   181,  -353,  -353,  -353,   -13,
     236,   221,   -13,    -1,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,   185,   183,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,   304,   -43,   145,   235,  -353,   342,   344,
      54,   211,   -57,  -353,  -353,  -353,  -353,  -353,  -353,   348,
    -353,  -353,   235,  -353,  -353,   282,  -353,  -353,    39,  -353,
    -353,   235,   282,   235,   123,  -353,  -353,    30,  -353,   237,
     251,   352,   238,   -18,   200,   201,   129,   291,   205,   295,
    -353,   264,   -65,   333,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,   272,
    -353,  -353,   -95,   209,  -353,   235,   300,  -353,   210,    51,
    -353,   279,   204,  -353,    71,    -1,   -13,   215,  -353,   104,
      -1,   -65,   322,    -5,  -353,   294,  -353,   164,    61,  -353,
     251,     4,     6,   328,   191,   235,   121,    70,   224,   295,
     422,   235,   159,   225,    15,   235,   235,   295,  -353,   295,
     -69,   230,   -42,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   310,    36,
    -353,   379,    30,   -65,  -353,    30,  -353,   348,    11,   207,
    -353,   235,  -353,   385,  -353,  -353,  -353,  -353,   235,  -353,
    -353,  -353,  -353,   235,   235,   342,  -353,   239,  -353,  -353,
     241,  -353,  -353,  -353,     3,  -353,   352,  -353,  -353,   235,
    -353,  -353,   244,  -353,  -353,  -353,  -353,  -353,  -353,   314,
      91,    72,   235,   235,  -353,   328,   311,   -54,  -353,  -353,
    -353,   289,   388,   456,   295,   248,   264,  -353,   312,   255,
     456,   456,   456,   456,   471,   471,   471,   471,   159,   159,
     -97,   -97,   -97,   -96,   250,  -353,  -353,    76,   103,  -353,
     251,  -353,    52,  -353,   256,  -353,    18,  -353,   346,  -353,
    -353,  -353,   -65,   -65,  -353,   405,   406,  -353,   320,  -353,
    -353,   113,  -353,   235,   235,   235,  -353,   108,   100,   258,
    -353,   295,   456,   264,   261,   132,  -353,  -353,  -353,  -353,
     262,   334,  -353,  -353,  -353,   358,   359,   362,   347,    11,
     420,  -353,  -353,  -353,   315,  -353,   278,   280,  -353,  -353,
      25,   -65,   126,  -353,   235,  -353,   422,   281,   146,  -353,
    -353,    18,    11,  -353,  -353,  -353,    11,   303,   285,   235,
    -353,  -353,  -353,  -353,   -65,  -353,  -353,  -353,  -353,   433,
     344,   -31,   286,   235,   173,   235,  -353,     9,   -65,  -353,
    -353,   -65,   288,   292,  -353
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,     0,
     224,     0,   214,    59,    25,     0,    32,    38,    38,     0,
       0,     0,     0,   213,    57,    57,     0,    30,     0,   226,
     227,     1,   225,     2,     0,     6,     5,   107,     0,    68,
      69,    99,    55,     0,   117,     0,     0,     0,     0,    93,
      28,     0,    63,     0,     0,     0,     0,    31,     0,     0,
       4,     0,     0,    87,     0,     0,    81,    82,    80,     0,
      84,     0,     0,   113,   215,   196,   199,   201,   202,   197,
     198,   203,     0,   116,   118,   191,   192,   193,   200,   194,
     195,    24,    23,     0,     0,    63,     0,    58,     0,     0,
       0,     0,    93,    65,    56,    53,    54,   229,   228,     0,
     106,    86,     0,    76,    75,    99,    72,    71,    73,    83,
      79,     0,    99,     0,     0,    77,    26,     0,    37,     0,
     225,     0,     0,   187,     0,     0,     0,     0,     0,     0,
     189,     0,    92,   121,   128,   129,   130,   123,   125,   131,
     124,   143,   132,   133,   134,   127,   122,   136,   137,     0,
      29,   246,     0,     0,    61,     0,     0,    64,    21,     0,
      19,    90,    88,   114,   223,   113,     0,    98,   100,   105,
     113,   109,   111,   108,   119,     0,    35,     0,     0,    39,
     225,    87,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,   138,     0,     0,     0,     0,     0,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,     0,     0,    67,    66,     0,    17,     0,     0,    93,
      89,     0,   221,     0,   222,   120,    70,    74,     0,   104,
     103,   102,    78,     0,     0,     0,    43,     0,    46,    45,
       0,    44,    49,    42,    52,    34,     0,    36,   175,     0,
     188,   190,     0,   178,   179,   180,   181,   182,   183,     0,
       0,     0,     0,     0,   162,     0,     0,     0,   135,   126,
     154,   155,     0,   150,     0,     0,     0,   141,     0,   153,
     152,   168,   169,   170,   171,   172,   173,   174,   145,   144,
     147,   146,   148,   149,     0,    27,   247,     0,     0,    20,
     225,    91,   204,   206,     0,   208,   219,   207,    95,   115,
     220,   101,   112,   110,    33,     0,     0,    50,     0,    41,
      40,     0,   166,     0,     0,     0,   160,     0,     0,     0,
     184,     0,   151,     0,     0,     0,   142,   185,    60,    22,
       0,     0,   241,   233,   239,   237,   240,   235,     0,     0,
       0,   218,   212,   216,     0,    85,     0,     0,    51,   176,
       0,   164,     0,   163,     0,   167,   186,     0,     0,   158,
     156,   219,     0,   236,   238,   234,     0,   205,   220,     0,
      47,    48,   177,   161,   165,   159,   157,   209,   230,   242,
       0,    97,     0,     0,     0,     0,    94,     0,   243,   231,
     217,    96,   187,     0,   232
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -353,  -353,  -353,   397,  -353,   438,  -353,   194,  -353,  -353,
    -353,  -353,  -353,   184,  -353,  -353,   425,  -353,   174,  -353,
    -353,  -353,   421,  -353,  -353,  -353,   350,  -353,  -353,   284,
    -149,   -74,  -353,   120,   -53,   -35,  -353,  -353,   -59,   257,
    -353,  -353,  -353,  -111,  -353,  -353,   -80,  -353,   199,  -353,
    -353,    89,  -219,  -353,    83,   216,  -116,  -151,  -353,  -353,
    -353,  -353,  -353,  -353,   260,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,    50,   -47,  -114,  -353,  -353,   -79,  -353,
    -353,  -353,  -352,    77,  -353,  -353,  -353,     5,  -353,    79,
     297,  -353,  -353,  -353,  -353,   413,  -353,  -353,  -353,  -353,
      65
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    55,   189,   190,    18,   112,
      19,    20,    71,   179,    21,    22,    67,   208,   209,   284,
     359,    23,    75,    24,    25,    26,   120,    27,   122,   123,
      28,   135,   136,   137,    60,    89,    90,   140,    61,   132,
     191,   259,   260,   117,   395,   436,    93,   197,   198,   271,
      83,   145,   192,   102,   103,   193,   194,   163,   164,   165,
     166,   167,   168,   169,   217,   170,   171,   172,   173,   299,
     174,   175,   176,   177,   178,   105,   106,   107,   108,   109,
     110,   341,   342,   343,   344,   345,    42,   346,   391,   392,
     393,   265,    29,    30,    49,    50,   347,   388,   439,    53,
     182
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     162,   206,   307,   130,   180,    85,   220,    33,   222,   290,
      36,   187,   442,   435,    32,    43,   131,   104,   142,   116,
      46,   262,    37,   314,    31,   199,    92,   201,   203,    44,
     138,   233,   233,   138,    95,    96,    97,   417,    57,    32,
     216,   225,   149,   274,    69,   224,    72,   143,    86,    34,
      38,    77,   315,   317,    47,   195,   247,    45,   248,   248,
     226,   287,   200,   250,   429,   144,   251,   184,   220,   253,
     361,   318,   114,   115,   262,   150,   312,   381,   313,    87,
     125,   126,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   375,   357,   300,
     204,   225,   370,   196,   186,    57,    39,   261,   223,   310,
     311,   183,   382,    88,   151,    86,   358,   383,    35,    40,
     226,   225,   267,   384,   385,    98,   153,    95,    96,    97,
     261,   225,   153,    95,    96,    97,   390,   138,   386,   211,
     226,   212,  -242,   387,    58,    41,    87,    48,   348,    59,
     226,    51,   199,   302,   408,   365,   291,   352,   353,   160,
     292,   180,   288,   372,   154,   155,    99,   100,   340,   334,
     154,   155,   303,   309,   303,    62,    91,   225,    84,   304,
      88,   366,    52,   422,    54,   269,   367,   368,   276,   263,
     364,   380,   101,    66,   277,    64,   226,   225,   127,   404,
     431,   156,   278,    63,    65,   104,   225,   156,   104,   256,
     225,   270,   257,  -210,   225,    70,   226,   403,    98,   285,
     406,    74,   286,   215,    98,   226,   279,   225,   202,   226,
      78,   215,   225,   226,   378,   423,   157,   147,   153,    95,
      96,    97,   157,   280,    81,    73,   226,   400,   401,   402,
     158,   226,   369,    79,   335,    82,   158,    94,   281,    99,
     100,   379,   282,   374,   147,    99,   100,   153,    95,    96,
      97,   399,   159,   160,   261,   283,   154,   155,   159,   160,
     161,   111,   113,   116,   266,   101,   161,   233,   424,   272,
     410,   101,   118,   261,   153,    95,    96,    97,   153,    95,
      96,    97,   119,   121,   426,   154,   155,   261,   124,   244,
     245,   246,   247,   156,   248,    57,    97,   438,    58,   441,
     407,   293,   294,   295,   296,   297,   298,   129,   381,   131,
      98,   440,   218,   155,   251,   337,   133,   155,   338,   134,
     141,   139,   156,   146,   147,   148,    95,   181,   157,   185,
     227,   188,    91,   205,    13,   207,   210,   213,   214,    98,
     221,   249,   158,   382,   258,   261,   252,   255,   383,   156,
     273,    99,   100,   156,   384,   385,   268,   157,   275,    57,
     228,   305,   336,   308,   159,   160,    98,   316,   350,   386,
      98,   158,   161,  -242,   387,   225,   355,   101,   356,   363,
      99,   100,   362,   314,   219,   373,   377,   376,   219,   394,
     248,   396,   397,   159,   160,   398,   405,   389,   158,   409,
     411,   161,   158,   418,   412,   229,   101,    99,   100,   413,
     414,    99,   100,   415,   419,   228,   420,   416,   421,   425,
     159,   160,   430,   437,   159,   160,   230,   212,   161,    80,
     444,   339,   161,   101,   231,   232,    56,   101,   381,   354,
     360,   233,   234,    68,  -211,   152,    76,   351,   289,   228,
     254,   235,   236,   237,   238,   239,   301,   349,   240,   241,
     229,   242,   243,   244,   245,   246,   247,   443,   248,   428,
     427,   264,   128,   382,   371,   434,     0,     0,   383,     0,
       0,   306,     0,   228,   384,   385,     0,     0,   432,     0,
     232,     0,     0,     0,   229,     0,   233,   234,   228,   386,
       0,     0,     0,     0,   387,     0,   235,   236,   237,   238,
     239,     0,     0,   240,   241,   306,   242,   243,   244,   245,
     246,   247,     0,   248,   232,     0,     0,     0,  -245,     0,
     233,   234,     0,     0,     0,     0,     0,   433,     0,     0,
     235,   236,   237,   238,   239,     0,     0,   240,   241,     0,
     242,   243,   244,   245,   246,   247,     0,   248,   232,     0,
       0,     0,     0,     0,   233,  -245,     0,     0,     0,     0,
       0,     0,     0,   232,  -245,  -245,  -245,   238,   239,   233,
       0,   240,   241,  -244,   242,   243,   244,   245,   246,   247,
       1,   248,  -245,  -245,     0,     0,  -245,  -245,     2,   242,
     243,   244,   245,   246,   247,     3,   248,     0,     1,     4,
       0,     0,     0,     0,     0,     5,     2,     0,     6,     7,
       0,     0,     0,     3,     0,     0,     0,     4,     8,     9,
       0,     0,     0,     5,     0,     0,     6,     7,     0,    10,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,    11,     0,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,    13
};

static const yytype_int16 yycheck[] =
{
     116,   150,   221,    82,   118,    58,   157,     2,   159,     3,
       5,   122,     3,    44,     3,    10,    12,    64,    92,    76,
      19,     3,    73,    92,    26,   141,    61,   143,   144,    73,
      89,   128,   128,    92,     4,     5,     6,   389,    51,     3,
     156,   106,    85,    48,    39,   161,    41,    48,     9,     3,
     101,    46,   121,    95,    53,   135,   153,   101,   155,   155,
     125,   210,   142,   158,   416,    66,   161,   120,   219,   185,
     289,   113,    67,    68,     3,   118,   227,    25,   229,    40,
      75,    76,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   316,    95,   215,
     147,   106,   156,   138,   161,    51,    85,   161,   161,   225,
     226,    57,    60,    74,   157,     9,   113,    65,     3,    85,
     125,   106,   196,    71,    72,    95,     3,     4,     5,     6,
     161,   106,     3,     4,     5,     6,   118,   196,    86,   157,
     125,   159,    90,    91,   157,    89,    40,     3,   259,    29,
     125,     0,   268,    83,   373,    83,   150,   273,   274,   150,
     213,   275,   158,   314,    41,    42,   136,   137,   157,   248,
      41,    42,   102,   158,   102,     3,    70,   106,    58,   109,
      74,   109,   160,   158,   103,    81,   302,   303,    24,   118,
      99,   340,   162,   120,    30,   157,   125,   106,    78,    99,
     419,    78,    38,   159,    85,   252,   106,    78,   255,   158,
     106,   107,   161,   161,   106,   108,   125,   109,    95,   158,
     371,   120,   161,   102,    95,   125,    62,   106,   105,   125,
     118,   102,   106,   125,   158,   109,   113,   161,     3,     4,
       5,     6,   113,    79,    88,   115,   125,   363,   364,   365,
     127,   125,   305,   161,   249,   117,   127,     3,    94,   136,
     137,   158,    98,   316,   161,   136,   137,     3,     4,     5,
       6,   158,   149,   150,   161,   111,    41,    42,   149,   150,
     157,     4,   113,    76,   195,   162,   157,   128,   404,   200,
     158,   162,    84,   161,     3,     4,     5,     6,     3,     4,
       5,     6,   157,     3,   158,    41,    42,   161,    41,   150,
     151,   152,   153,    78,   155,    51,     6,   433,   157,   435,
     373,   130,   131,   132,   133,   134,   135,   157,    25,    12,
      95,   158,    41,    42,   161,   252,   158,    42,   255,   158,
     119,   105,    78,   158,   161,    41,     4,     3,   113,   138,
      17,     3,    70,   116,   103,     3,   118,   157,   157,    95,
     155,    89,   127,    60,    85,   161,   157,   157,    65,    78,
      48,   136,   137,    78,    71,    72,   161,   113,    84,    51,
      47,   157,     3,   158,   149,   150,    95,   157,     3,    86,
      95,   127,   157,    90,    91,   106,   157,   162,   157,    85,
     136,   137,   158,    92,   113,   157,   156,    95,   113,    63,
     155,     6,     6,   149,   150,    95,   158,   161,   127,   158,
     158,   157,   127,     3,    90,    92,   162,   136,   137,    71,
      71,   136,   137,    71,   119,    47,   158,    90,   158,   158,
     149,   150,   157,   157,   149,   150,   113,   159,   157,    52,
     158,   257,   157,   162,   121,   122,    18,   162,    25,   275,
     286,   128,   129,    38,   161,   115,    45,   268,   211,    47,
     186,   138,   139,   140,   141,   142,   216,   261,   145,   146,
      92,   148,   149,   150,   151,   152,   153,   437,   155,   412,
     411,   194,    79,    60,   106,   430,    -1,    -1,    65,    -1,
      -1,   113,    -1,    47,    71,    72,    -1,    -1,    75,    -1,
     122,    -1,    -1,    -1,    92,    -1,   128,   129,    47,    86,
      -1,    -1,    -1,    -1,    91,    -1,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   113,   148,   149,   150,   151,
     152,   153,    -1,   155,   122,    -1,    -1,    -1,    92,    -1,
     128,   129,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,    -1,   155,   122,    -1,
      -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   138,   139,   140,   141,   142,   128,
      -1,   145,   146,     0,   148,   149,   150,   151,   152,   153,
       7,   155,   141,   142,    -1,    -1,   145,   146,    15,   148,
     149,   150,   151,   152,   153,    22,   155,    -1,     7,    26,
      -1,    -1,    -1,    -1,    -1,    32,    15,    -1,    35,    36,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    45,    46,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    82,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,   103
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    45,    46,
      56,    82,    97,   103,   164,   165,   166,   167,   171,   173,
     174,   177,   178,   184,   186,   187,   188,   190,   193,   255,
     256,    26,     3,   250,     3,     3,   250,    73,   101,    85,
      85,    89,   249,   250,    73,   101,    19,    53,     3,   257,
     258,     0,   160,   262,   103,   168,   168,    51,   157,   196,
     197,   201,     3,   159,   157,    85,   120,   179,   179,   250,
     108,   175,   250,   115,   120,   185,   185,   250,   118,   161,
     166,    88,   117,   213,   196,   197,     9,    40,    74,   198,
     199,    70,   198,   209,     3,     4,     5,     6,    95,   136,
     137,   162,   216,   217,   237,   238,   239,   240,   241,   242,
     243,     4,   172,   113,   250,   250,    76,   206,    84,   157,
     189,     3,   191,   192,    41,   250,   250,   196,   258,   157,
     241,    12,   202,   158,   158,   194,   195,   196,   201,   105,
     200,   119,   194,    48,    66,   214,   158,   161,    41,    85,
     118,   157,   189,     3,    41,    42,    78,   113,   127,   149,
     150,   157,   219,   220,   221,   222,   223,   224,   225,   226,
     228,   229,   230,   231,   233,   234,   235,   236,   237,   176,
     238,     3,   263,    57,   197,   138,   161,   206,     3,   169,
     170,   203,   215,   218,   219,   209,   198,   210,   211,   219,
     209,   219,   105,   219,   237,   116,   193,     3,   180,   181,
     118,   157,   159,   157,   157,   102,   219,   227,    41,   113,
     220,   155,   220,   197,   219,   106,   125,    17,    47,    92,
     113,   121,   122,   128,   129,   138,   139,   140,   141,   142,
     145,   146,   148,   149,   150,   151,   152,   153,   155,    89,
     158,   161,   157,   219,   192,   157,   158,   161,    85,   204,
     205,   161,     3,   118,   253,   254,   214,   194,   161,    81,
     107,   212,   214,    48,    48,    84,    24,    30,    38,    62,
      79,    94,    98,   111,   182,   158,   161,   193,   158,   202,
       3,   150,   197,   130,   131,   132,   133,   134,   135,   232,
     219,   227,    83,   102,   109,   157,   113,   215,   158,   158,
     219,   219,   220,   220,    92,   121,   157,    95,   113,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   241,   250,     3,   217,   217,   170,
     157,   244,   245,   246,   247,   248,   250,   259,   206,   218,
       3,   211,   219,   219,   176,   157,   157,    95,   113,   183,
     181,   215,   158,    85,    99,    83,   109,   219,   219,   197,
     156,   106,   220,   157,   197,   215,    95,   156,   158,   158,
     193,    25,    60,    65,    71,    72,    86,    91,   260,   161,
     118,   251,   252,   253,    63,   207,     6,     6,    95,   158,
     219,   219,   219,   109,    99,   158,   220,   197,   215,   158,
     158,   158,    90,    71,    71,    71,    90,   245,     3,   119,
     158,   158,   158,   109,   219,   158,   158,   252,   246,   245,
     157,   215,    75,   124,   263,    44,   208,   157,   219,   261,
     158,   219,     3,   236,   158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   165,   165,   166,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   172,   173,   173,   174,   175,   176,
     177,   177,   177,   178,   178,   178,   178,   179,   179,   180,
     180,   181,   182,   182,   182,   182,   182,   182,   182,   182,
     183,   183,   183,   184,   184,   184,   185,   185,   186,   187,
     188,   188,   189,   189,   190,   191,   191,   192,   193,   193,
     193,   194,   194,   195,   195,   196,   196,   197,   197,   198,
     199,   199,   199,   200,   200,   201,   202,   202,   203,   204,
     204,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   212,   212,   212,   213,   213,   214,   214,
     214,   214,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   219,   219,   219,   219,   219,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   221,   221,   222,   222,
     222,   222,   222,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   224,   224,   225,   225,   225,   225,
     226,   226,   226,   226,   227,   227,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   230,   230,   231,   232,   232,
     232,   232,   232,   232,   233,   234,   235,   236,   236,   236,
     236,   237,   237,   237,   237,   237,   238,   239,   239,   240,
     240,   241,   242,   243,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   249,   250,   250,   251,   251,   252,   252,
     253,   253,   254,   254,   255,   255,   256,   257,   257,   258,
     259,   259,   259,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   261,   262,   262,   263,   263
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     2,     8,     7,     6,     7,     3,     0,     1,
       3,     3,     1,     1,     1,     1,     1,     4,     4,     1,
       1,     2,     0,     4,     4,     3,     2,     0,     4,     2,
       8,     5,     3,     0,     5,     1,     3,     3,     2,     2,
       6,     1,     1,     1,     3,     3,     3,     3,     5,     2,
       1,     1,     1,     1,     0,     7,     1,     0,     1,     1,
       0,     2,     2,     0,     4,     0,     2,     0,     3,     0,
       1,     3,     2,     1,     1,     0,     2,     0,     2,     2,
       4,     2,     4,     0,     1,     3,     1,     0,     1,     3,
       2,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     2,
       2,     3,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     3,     3,     5,     6,     5,     6,
       4,     6,     3,     5,     4,     5,     4,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     6,     1,     1,
       1,     1,     1,     1,     4,     4,     5,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     4,
       1,     3,     2,     1,     1,     3,     1,     5,     1,     0,
       2,     1,     1,     0,     1,     0,     2,     1,     3,     3,
       4,     6,     8,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     0,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


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

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

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

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* IDENTIFIER  */
#line 146 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1735 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 146 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1741 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 144 "bison_parser.y"
      { }
#line 1747 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 144 "bison_parser.y"
      { }
#line 1753 "bison_parser.cpp"
        break;

    case 165: /* statement_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1766 "bison_parser.cpp"
        break;

    case 166: /* statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).statement)); }
#line 1772 "bison_parser.cpp"
        break;

    case 167: /* preparable_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).statement)); }
#line 1778 "bison_parser.cpp"
        break;

    case 168: /* opt_hints  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1791 "bison_parser.cpp"
        break;

    case 169: /* hint_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1804 "bison_parser.cpp"
        break;

    case 170: /* hint  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 1810 "bison_parser.cpp"
        break;

    case 171: /* prepare_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).prep_stmt)); }
#line 1816 "bison_parser.cpp"
        break;

    case 172: /* prepare_target_query  */
#line 146 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1822 "bison_parser.cpp"
        break;

    case 173: /* execute_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).exec_stmt)); }
#line 1828 "bison_parser.cpp"
        break;

    case 174: /* import_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).import_stmt)); }
#line 1834 "bison_parser.cpp"
        break;

    case 175: /* import_file_type  */
#line 144 "bison_parser.y"
      { }
#line 1840 "bison_parser.cpp"
        break;

    case 176: /* file_path  */
#line 146 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1846 "bison_parser.cpp"
        break;

    case 177: /* show_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).show_stmt)); }
#line 1852 "bison_parser.cpp"
        break;

    case 178: /* create_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).create_stmt)); }
#line 1858 "bison_parser.cpp"
        break;

    case 179: /* opt_not_exists  */
#line 144 "bison_parser.y"
      { }
#line 1864 "bison_parser.cpp"
        break;

    case 180: /* column_def_commalist  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1877 "bison_parser.cpp"
        break;

    case 181: /* column_def  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).column_t)); }
#line 1883 "bison_parser.cpp"
        break;

    case 182: /* column_type  */
#line 144 "bison_parser.y"
      { }
#line 1889 "bison_parser.cpp"
        break;

    case 183: /* opt_column_nullable  */
#line 144 "bison_parser.y"
      { }
#line 1895 "bison_parser.cpp"
        break;

    case 184: /* drop_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).drop_stmt)); }
#line 1901 "bison_parser.cpp"
        break;

    case 185: /* opt_exists  */
#line 144 "bison_parser.y"
      { }
#line 1907 "bison_parser.cpp"
        break;

    case 186: /* delete_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).delete_stmt)); }
#line 1913 "bison_parser.cpp"
        break;

    case 187: /* truncate_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).delete_stmt)); }
#line 1919 "bison_parser.cpp"
        break;

    case 188: /* insert_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).insert_stmt)); }
#line 1925 "bison_parser.cpp"
        break;

    case 189: /* opt_column_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1938 "bison_parser.cpp"
        break;

    case 190: /* update_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).update_stmt)); }
#line 1944 "bison_parser.cpp"
        break;

    case 191: /* update_clause_commalist  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1957 "bison_parser.cpp"
        break;

    case 192: /* update_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).update_t)); }
#line 1963 "bison_parser.cpp"
        break;

    case 193: /* select_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 1969 "bison_parser.cpp"
        break;

    case 194: /* select_statement_in_set_operation  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 1975 "bison_parser.cpp"
        break;

    case 195: /* select_part_of_set_operation  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 1981 "bison_parser.cpp"
        break;

    case 196: /* select_with_paren  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 1987 "bison_parser.cpp"
        break;

    case 197: /* select_no_paren  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 1993 "bison_parser.cpp"
        break;

    case 198: /* set_operator  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).set_operator_t)); }
#line 1999 "bison_parser.cpp"
        break;

    case 199: /* set_type  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).set_operator_t)); }
#line 2005 "bison_parser.cpp"
        break;

    case 200: /* opt_all  */
#line 144 "bison_parser.y"
      { }
#line 2011 "bison_parser.cpp"
        break;

    case 201: /* select_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2017 "bison_parser.cpp"
        break;

    case 202: /* opt_distinct  */
#line 144 "bison_parser.y"
      { }
#line 2023 "bison_parser.cpp"
        break;

    case 203: /* select_list  */
#line 147 "bison_parser.y"
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

    case 204: /* opt_from_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2042 "bison_parser.cpp"
        break;

    case 205: /* from_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2048 "bison_parser.cpp"
        break;

    case 206: /* opt_where  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2054 "bison_parser.cpp"
        break;

    case 207: /* opt_group  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).group_t)); }
#line 2060 "bison_parser.cpp"
        break;

    case 208: /* opt_having  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2066 "bison_parser.cpp"
        break;

    case 209: /* opt_order  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2079 "bison_parser.cpp"
        break;

    case 210: /* order_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2092 "bison_parser.cpp"
        break;

    case 211: /* order_desc  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).order)); }
#line 2098 "bison_parser.cpp"
        break;

    case 212: /* opt_order_type  */
#line 144 "bison_parser.y"
      { }
#line 2104 "bison_parser.cpp"
        break;

    case 213: /* opt_top  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).limit)); }
#line 2110 "bison_parser.cpp"
        break;

    case 214: /* opt_limit  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).limit)); }
#line 2116 "bison_parser.cpp"
        break;

    case 215: /* expr_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2129 "bison_parser.cpp"
        break;

    case 216: /* opt_literal_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2142 "bison_parser.cpp"
        break;

    case 217: /* literal_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2155 "bison_parser.cpp"
        break;

    case 218: /* expr_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2161 "bison_parser.cpp"
        break;

    case 219: /* expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2167 "bison_parser.cpp"
        break;

    case 220: /* operand  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2173 "bison_parser.cpp"
        break;

    case 221: /* scalar_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2179 "bison_parser.cpp"
        break;

    case 222: /* unary_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2185 "bison_parser.cpp"
        break;

    case 223: /* binary_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2191 "bison_parser.cpp"
        break;

    case 224: /* logic_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2197 "bison_parser.cpp"
        break;

    case 225: /* in_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2203 "bison_parser.cpp"
        break;

    case 226: /* case_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2209 "bison_parser.cpp"
        break;

    case 227: /* case_list  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2215 "bison_parser.cpp"
        break;

    case 228: /* exists_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2221 "bison_parser.cpp"
        break;

    case 229: /* comp_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2227 "bison_parser.cpp"
        break;

    case 230: /* function_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2233 "bison_parser.cpp"
        break;

    case 231: /* extract_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2239 "bison_parser.cpp"
        break;

    case 232: /* datetime_field  */
#line 144 "bison_parser.y"
      { }
#line 2245 "bison_parser.cpp"
        break;

    case 233: /* array_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2251 "bison_parser.cpp"
        break;

    case 234: /* array_index  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2257 "bison_parser.cpp"
        break;

    case 235: /* between_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2263 "bison_parser.cpp"
        break;

    case 236: /* column_name  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2269 "bison_parser.cpp"
        break;

    case 237: /* literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2275 "bison_parser.cpp"
        break;

    case 238: /* string_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2281 "bison_parser.cpp"
        break;

    case 239: /* bool_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2287 "bison_parser.cpp"
        break;

    case 240: /* num_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2293 "bison_parser.cpp"
        break;

    case 241: /* int_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2299 "bison_parser.cpp"
        break;

    case 242: /* null_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2305 "bison_parser.cpp"
        break;

    case 243: /* param_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2311 "bison_parser.cpp"
        break;

    case 244: /* table_ref  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2317 "bison_parser.cpp"
        break;

    case 245: /* table_ref_atomic  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2323 "bison_parser.cpp"
        break;

    case 246: /* nonjoin_table_ref_atomic  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2329 "bison_parser.cpp"
        break;

    case 247: /* table_ref_commalist  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2342 "bison_parser.cpp"
        break;

    case 248: /* table_ref_name  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2348 "bison_parser.cpp"
        break;

    case 249: /* table_ref_name_no_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2354 "bison_parser.cpp"
        break;

    case 250: /* table_name  */
#line 145 "bison_parser.y"
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2360 "bison_parser.cpp"
        break;

    case 251: /* table_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2366 "bison_parser.cpp"
        break;

    case 252: /* opt_table_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2372 "bison_parser.cpp"
        break;

    case 253: /* alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2378 "bison_parser.cpp"
        break;

    case 254: /* opt_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2384 "bison_parser.cpp"
        break;

    case 255: /* opt_with_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2390 "bison_parser.cpp"
        break;

    case 256: /* with_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2396 "bison_parser.cpp"
        break;

    case 257: /* with_description_list  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2402 "bison_parser.cpp"
        break;

    case 258: /* with_description  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).with_description_t)); }
#line 2408 "bison_parser.cpp"
        break;

    case 259: /* join_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2414 "bison_parser.cpp"
        break;

    case 260: /* opt_join_type  */
#line 144 "bison_parser.y"
      { }
#line 2420 "bison_parser.cpp"
        break;

    case 261: /* join_condition  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2426 "bison_parser.cpp"
        break;

    case 263: /* ident_commalist  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2439 "bison_parser.cpp"
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
/* The lookahead symbol.  */
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
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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

#line 2557 "bison_parser.cpp"

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
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
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
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
  case 2:
#line 260 "bison_parser.y"
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
#line 2768 "bison_parser.cpp"
    break;

  case 3:
#line 281 "bison_parser.y"
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2779 "bison_parser.cpp"
    break;

  case 4:
#line 287 "bison_parser.y"
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2790 "bison_parser.cpp"
    break;

  case 5:
#line 296 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2799 "bison_parser.cpp"
    break;

  case 6:
#line 300 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2808 "bison_parser.cpp"
    break;

  case 7:
#line 304 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2816 "bison_parser.cpp"
    break;

  case 8:
#line 311 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2822 "bison_parser.cpp"
    break;

  case 9:
#line 312 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2828 "bison_parser.cpp"
    break;

  case 10:
#line 313 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2834 "bison_parser.cpp"
    break;

  case 11:
#line 314 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2840 "bison_parser.cpp"
    break;

  case 12:
#line 315 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2846 "bison_parser.cpp"
    break;

  case 13:
#line 316 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2852 "bison_parser.cpp"
    break;

  case 14:
#line 317 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2858 "bison_parser.cpp"
    break;

  case 15:
#line 318 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2864 "bison_parser.cpp"
    break;

  case 16:
#line 319 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2870 "bison_parser.cpp"
    break;

  case 17:
#line 328 "bison_parser.y"
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2876 "bison_parser.cpp"
    break;

  case 18:
#line 329 "bison_parser.y"
    { (yyval.expr_vec) = nullptr; }
#line 2882 "bison_parser.cpp"
    break;

  case 19:
#line 334 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2888 "bison_parser.cpp"
    break;

  case 20:
#line 335 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2894 "bison_parser.cpp"
    break;

  case 21:
#line 339 "bison_parser.y"
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2903 "bison_parser.cpp"
    break;

  case 22:
#line 343 "bison_parser.y"
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2913 "bison_parser.cpp"
    break;

  case 23:
#line 355 "bison_parser.y"
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2923 "bison_parser.cpp"
    break;

  case 25:
#line 365 "bison_parser.y"
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2932 "bison_parser.cpp"
    break;

  case 26:
#line 369 "bison_parser.y"
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2942 "bison_parser.cpp"
    break;

  case 27:
#line 381 "bison_parser.y"
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2953 "bison_parser.cpp"
    break;

  case 28:
#line 390 "bison_parser.y"
    { (yyval.uval) = kImportCSV; }
#line 2959 "bison_parser.cpp"
    break;

  case 29:
#line 394 "bison_parser.y"
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2965 "bison_parser.cpp"
    break;

  case 30:
#line 404 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2973 "bison_parser.cpp"
    break;

  case 31:
#line 407 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2983 "bison_parser.cpp"
    break;

  case 32:
#line 412 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2993 "bison_parser.cpp"
    break;

  case 33:
#line 426 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3005 "bison_parser.cpp"
    break;

  case 34:
#line 433 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3017 "bison_parser.cpp"
    break;

  case 35:
#line 440 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3029 "bison_parser.cpp"
    break;

  case 36:
#line 447 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3042 "bison_parser.cpp"
    break;

  case 37:
#line 458 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3048 "bison_parser.cpp"
    break;

  case 38:
#line 459 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3054 "bison_parser.cpp"
    break;

  case 39:
#line 463 "bison_parser.y"
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3060 "bison_parser.cpp"
    break;

  case 40:
#line 464 "bison_parser.y"
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3066 "bison_parser.cpp"
    break;

  case 41:
#line 468 "bison_parser.y"
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3074 "bison_parser.cpp"
    break;

  case 42:
#line 474 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3080 "bison_parser.cpp"
    break;

  case 43:
#line 475 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3086 "bison_parser.cpp"
    break;

  case 44:
#line 476 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3092 "bison_parser.cpp"
    break;

  case 45:
#line 477 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3098 "bison_parser.cpp"
    break;

  case 46:
#line 478 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3104 "bison_parser.cpp"
    break;

  case 47:
#line 479 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3110 "bison_parser.cpp"
    break;

  case 48:
#line 480 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3116 "bison_parser.cpp"
    break;

  case 49:
#line 481 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3122 "bison_parser.cpp"
    break;

  case 50:
#line 485 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3128 "bison_parser.cpp"
    break;

  case 51:
#line 486 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3134 "bison_parser.cpp"
    break;

  case 52:
#line 487 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3140 "bison_parser.cpp"
    break;

  case 53:
#line 497 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3151 "bison_parser.cpp"
    break;

  case 54:
#line 503 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3162 "bison_parser.cpp"
    break;

  case 55:
#line 509 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3172 "bison_parser.cpp"
    break;

  case 56:
#line 517 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3178 "bison_parser.cpp"
    break;

  case 57:
#line 518 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3184 "bison_parser.cpp"
    break;

  case 58:
#line 527 "bison_parser.y"
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3195 "bison_parser.cpp"
    break;

  case 59:
#line 536 "bison_parser.y"
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3205 "bison_parser.cpp"
    break;

  case 60:
#line 549 "bison_parser.y"
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3217 "bison_parser.cpp"
    break;

  case 61:
#line 556 "bison_parser.y"
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3229 "bison_parser.cpp"
    break;

  case 62:
#line 567 "bison_parser.y"
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3235 "bison_parser.cpp"
    break;

  case 63:
#line 568 "bison_parser.y"
    { (yyval.str_vec) = nullptr; }
#line 3241 "bison_parser.cpp"
    break;

  case 64:
#line 578 "bison_parser.y"
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3252 "bison_parser.cpp"
    break;

  case 65:
#line 587 "bison_parser.y"
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3258 "bison_parser.cpp"
    break;

  case 66:
#line 588 "bison_parser.y"
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3264 "bison_parser.cpp"
    break;

  case 67:
#line 592 "bison_parser.y"
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3274 "bison_parser.cpp"
    break;

  case 68:
#line 604 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3283 "bison_parser.cpp"
    break;

  case 69:
#line 608 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3292 "bison_parser.cpp"
    break;

  case 70:
#line 612 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperators == nullptr) {
				(yyval.select_stmt)->setOperators = new std::vector<SetOperator*>();
			}
			(yyval.select_stmt)->setOperators->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperators->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperators->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperators->back()->resultLimit = (yyvsp[0].limit);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
		}
#line 3308 "bison_parser.cpp"
    break;

  case 73:
#line 630 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3314 "bison_parser.cpp"
    break;

  case 74:
#line 631 "bison_parser.y"
    {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperators == nullptr) {
			(yyval.select_stmt)->setOperators = new std::vector<SetOperator*>();
		}
		(yyval.select_stmt)->setOperators->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperators->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3327 "bison_parser.cpp"
    break;

  case 75:
#line 642 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3333 "bison_parser.cpp"
    break;

  case 76:
#line 643 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3339 "bison_parser.cpp"
    break;

  case 77:
#line 647 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3354 "bison_parser.cpp"
    break;

  case 78:
#line 657 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperators == nullptr) {
				(yyval.select_stmt)->setOperators = new std::vector<SetOperator*>();
			}
			(yyval.select_stmt)->setOperators->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperators->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperators->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperators->back()->resultLimit = (yyvsp[0].limit);
		}
#line 3369 "bison_parser.cpp"
    break;

  case 79:
#line 670 "bison_parser.y"
    {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3378 "bison_parser.cpp"
    break;

  case 80:
#line 677 "bison_parser.y"
    {
		(yyval.set_operator_t) = new SetOperator();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3387 "bison_parser.cpp"
    break;

  case 81:
#line 681 "bison_parser.y"
    {
		(yyval.set_operator_t) = new SetOperator();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3396 "bison_parser.cpp"
    break;

  case 82:
#line 685 "bison_parser.y"
    {
		(yyval.set_operator_t) = new SetOperator();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3405 "bison_parser.cpp"
    break;

  case 83:
#line 692 "bison_parser.y"
    {
			(yyval.bval) = true;
		}
#line 3413 "bison_parser.cpp"
    break;

  case 84:
#line 695 "bison_parser.y"
    {
		(yyval.bval) = false;
	}
#line 3421 "bison_parser.cpp"
    break;

  case 85:
#line 701 "bison_parser.y"
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3435 "bison_parser.cpp"
    break;

  case 86:
#line 713 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3441 "bison_parser.cpp"
    break;

  case 87:
#line 714 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3447 "bison_parser.cpp"
    break;

  case 89:
#line 722 "bison_parser.y"
    { (yyval.table) = (yyvsp[0].table); }
#line 3453 "bison_parser.cpp"
    break;

  case 90:
#line 723 "bison_parser.y"
    { (yyval.table) = nullptr; }
#line 3459 "bison_parser.cpp"
    break;

  case 91:
#line 726 "bison_parser.y"
    { (yyval.table) = (yyvsp[0].table); }
#line 3465 "bison_parser.cpp"
    break;

  case 92:
#line 731 "bison_parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3471 "bison_parser.cpp"
    break;

  case 93:
#line 732 "bison_parser.y"
    { (yyval.expr) = nullptr; }
#line 3477 "bison_parser.cpp"
    break;

  case 94:
#line 736 "bison_parser.y"
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3487 "bison_parser.cpp"
    break;

  case 95:
#line 741 "bison_parser.y"
    { (yyval.group_t) = nullptr; }
#line 3493 "bison_parser.cpp"
    break;

  case 96:
#line 745 "bison_parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3499 "bison_parser.cpp"
    break;

  case 97:
#line 746 "bison_parser.y"
    { (yyval.expr) = nullptr; }
#line 3505 "bison_parser.cpp"
    break;

  case 98:
#line 749 "bison_parser.y"
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3511 "bison_parser.cpp"
    break;

  case 99:
#line 750 "bison_parser.y"
    { (yyval.order_vec) = nullptr; }
#line 3517 "bison_parser.cpp"
    break;

  case 100:
#line 754 "bison_parser.y"
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3523 "bison_parser.cpp"
    break;

  case 101:
#line 755 "bison_parser.y"
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3529 "bison_parser.cpp"
    break;

  case 102:
#line 759 "bison_parser.y"
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3535 "bison_parser.cpp"
    break;

  case 103:
#line 763 "bison_parser.y"
    { (yyval.order_type) = kOrderAsc; }
#line 3541 "bison_parser.cpp"
    break;

  case 104:
#line 764 "bison_parser.y"
    { (yyval.order_type) = kOrderDesc; }
#line 3547 "bison_parser.cpp"
    break;

  case 105:
#line 765 "bison_parser.y"
    { (yyval.order_type) = kOrderAsc; }
#line 3553 "bison_parser.cpp"
    break;

  case 106:
#line 771 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3559 "bison_parser.cpp"
    break;

  case 107:
#line 772 "bison_parser.y"
    { (yyval.limit) = nullptr; }
#line 3565 "bison_parser.cpp"
    break;

  case 108:
#line 776 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3571 "bison_parser.cpp"
    break;

  case 109:
#line 777 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3577 "bison_parser.cpp"
    break;

  case 110:
#line 778 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3583 "bison_parser.cpp"
    break;

  case 111:
#line 779 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3589 "bison_parser.cpp"
    break;

  case 112:
#line 780 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3595 "bison_parser.cpp"
    break;

  case 113:
#line 781 "bison_parser.y"
    { (yyval.limit) = nullptr; }
#line 3601 "bison_parser.cpp"
    break;

  case 114:
#line 788 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3607 "bison_parser.cpp"
    break;

  case 115:
#line 789 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3613 "bison_parser.cpp"
    break;

  case 116:
#line 793 "bison_parser.y"
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3619 "bison_parser.cpp"
    break;

  case 117:
#line 794 "bison_parser.y"
    { (yyval.expr_vec) = nullptr; }
#line 3625 "bison_parser.cpp"
    break;

  case 118:
#line 798 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3631 "bison_parser.cpp"
    break;

  case 119:
#line 799 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3637 "bison_parser.cpp"
    break;

  case 120:
#line 803 "bison_parser.y"
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3649 "bison_parser.cpp"
    break;

  case 126:
#line 821 "bison_parser.y"
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3655 "bison_parser.cpp"
    break;

  case 135:
#line 830 "bison_parser.y"
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3661 "bison_parser.cpp"
    break;

  case 138:
#line 839 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3667 "bison_parser.cpp"
    break;

  case 139:
#line 840 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3673 "bison_parser.cpp"
    break;

  case 140:
#line 841 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3679 "bison_parser.cpp"
    break;

  case 141:
#line 842 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3685 "bison_parser.cpp"
    break;

  case 142:
#line 843 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3691 "bison_parser.cpp"
    break;

  case 144:
#line 848 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3697 "bison_parser.cpp"
    break;

  case 145:
#line 849 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3703 "bison_parser.cpp"
    break;

  case 146:
#line 850 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3709 "bison_parser.cpp"
    break;

  case 147:
#line 851 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3715 "bison_parser.cpp"
    break;

  case 148:
#line 852 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3721 "bison_parser.cpp"
    break;

  case 149:
#line 853 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3727 "bison_parser.cpp"
    break;

  case 150:
#line 854 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3733 "bison_parser.cpp"
    break;

  case 151:
#line 855 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3739 "bison_parser.cpp"
    break;

  case 152:
#line 856 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3745 "bison_parser.cpp"
    break;

  case 153:
#line 857 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3751 "bison_parser.cpp"
    break;

  case 154:
#line 861 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3757 "bison_parser.cpp"
    break;

  case 155:
#line 862 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3763 "bison_parser.cpp"
    break;

  case 156:
#line 866 "bison_parser.y"
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3769 "bison_parser.cpp"
    break;

  case 157:
#line 867 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3775 "bison_parser.cpp"
    break;

  case 158:
#line 868 "bison_parser.y"
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3781 "bison_parser.cpp"
    break;

  case 159:
#line 869 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3787 "bison_parser.cpp"
    break;

  case 160:
#line 875 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3793 "bison_parser.cpp"
    break;

  case 161:
#line 876 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3799 "bison_parser.cpp"
    break;

  case 162:
#line 877 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3805 "bison_parser.cpp"
    break;

  case 163:
#line 878 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3811 "bison_parser.cpp"
    break;

  case 164:
#line 882 "bison_parser.y"
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3817 "bison_parser.cpp"
    break;

  case 165:
#line 883 "bison_parser.y"
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3823 "bison_parser.cpp"
    break;

  case 166:
#line 887 "bison_parser.y"
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3829 "bison_parser.cpp"
    break;

  case 167:
#line 888 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3835 "bison_parser.cpp"
    break;

  case 168:
#line 892 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3841 "bison_parser.cpp"
    break;

  case 169:
#line 893 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3847 "bison_parser.cpp"
    break;

  case 170:
#line 894 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3853 "bison_parser.cpp"
    break;

  case 171:
#line 895 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3859 "bison_parser.cpp"
    break;

  case 172:
#line 896 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3865 "bison_parser.cpp"
    break;

  case 173:
#line 897 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3871 "bison_parser.cpp"
    break;

  case 174:
#line 898 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3877 "bison_parser.cpp"
    break;

  case 175:
#line 902 "bison_parser.y"
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3883 "bison_parser.cpp"
    break;

  case 176:
#line 903 "bison_parser.y"
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3889 "bison_parser.cpp"
    break;

  case 177:
#line 907 "bison_parser.y"
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3895 "bison_parser.cpp"
    break;

  case 178:
#line 911 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3901 "bison_parser.cpp"
    break;

  case 179:
#line 912 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3907 "bison_parser.cpp"
    break;

  case 180:
#line 913 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3913 "bison_parser.cpp"
    break;

  case 181:
#line 914 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3919 "bison_parser.cpp"
    break;

  case 182:
#line 915 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3925 "bison_parser.cpp"
    break;

  case 183:
#line 916 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3931 "bison_parser.cpp"
    break;

  case 184:
#line 919 "bison_parser.y"
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3937 "bison_parser.cpp"
    break;

  case 185:
#line 923 "bison_parser.y"
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3943 "bison_parser.cpp"
    break;

  case 186:
#line 927 "bison_parser.y"
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3949 "bison_parser.cpp"
    break;

  case 187:
#line 931 "bison_parser.y"
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3955 "bison_parser.cpp"
    break;

  case 188:
#line 932 "bison_parser.y"
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3961 "bison_parser.cpp"
    break;

  case 189:
#line 933 "bison_parser.y"
    { (yyval.expr) = Expr::makeStar(); }
#line 3967 "bison_parser.cpp"
    break;

  case 190:
#line 934 "bison_parser.y"
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3973 "bison_parser.cpp"
    break;

  case 196:
#line 946 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3979 "bison_parser.cpp"
    break;

  case 197:
#line 950 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3985 "bison_parser.cpp"
    break;

  case 198:
#line 951 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3991 "bison_parser.cpp"
    break;

  case 199:
#line 955 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3997 "bison_parser.cpp"
    break;

  case 201:
#line 960 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4003 "bison_parser.cpp"
    break;

  case 202:
#line 964 "bison_parser.y"
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4009 "bison_parser.cpp"
    break;

  case 203:
#line 968 "bison_parser.y"
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4019 "bison_parser.cpp"
    break;

  case 205:
#line 981 "bison_parser.y"
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4030 "bison_parser.cpp"
    break;

  case 209:
#line 997 "bison_parser.y"
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4041 "bison_parser.cpp"
    break;

  case 210:
#line 1006 "bison_parser.y"
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4047 "bison_parser.cpp"
    break;

  case 211:
#line 1007 "bison_parser.y"
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4053 "bison_parser.cpp"
    break;

  case 212:
#line 1012 "bison_parser.y"
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4065 "bison_parser.cpp"
    break;

  case 213:
#line 1023 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4075 "bison_parser.cpp"
    break;

  case 214:
#line 1032 "bison_parser.y"
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4081 "bison_parser.cpp"
    break;

  case 215:
#line 1033 "bison_parser.y"
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4087 "bison_parser.cpp"
    break;

  case 217:
#line 1039 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4093 "bison_parser.cpp"
    break;

  case 219:
#line 1045 "bison_parser.y"
    { (yyval.alias_t) = nullptr; }
#line 4099 "bison_parser.cpp"
    break;

  case 220:
#line 1049 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4105 "bison_parser.cpp"
    break;

  case 221:
#line 1050 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4111 "bison_parser.cpp"
    break;

  case 223:
#line 1056 "bison_parser.y"
    { (yyval.alias_t) = nullptr; }
#line 4117 "bison_parser.cpp"
    break;

  case 225:
#line 1065 "bison_parser.y"
    { (yyval.with_description_vec) = nullptr; }
#line 4123 "bison_parser.cpp"
    break;

  case 226:
#line 1069 "bison_parser.y"
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4129 "bison_parser.cpp"
    break;

  case 227:
#line 1073 "bison_parser.y"
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4138 "bison_parser.cpp"
    break;

  case 228:
#line 1077 "bison_parser.y"
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4147 "bison_parser.cpp"
    break;

  case 229:
#line 1084 "bison_parser.y"
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4157 "bison_parser.cpp"
    break;

  case 230:
#line 1098 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4169 "bison_parser.cpp"
    break;

  case 231:
#line 1106 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4182 "bison_parser.cpp"
    break;

  case 232:
#line 1116 "bison_parser.y"
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
#line 4202 "bison_parser.cpp"
    break;

  case 233:
#line 1134 "bison_parser.y"
    { (yyval.uval) = kJoinInner; }
#line 4208 "bison_parser.cpp"
    break;

  case 234:
#line 1135 "bison_parser.y"
    { (yyval.uval) = kJoinLeft; }
#line 4214 "bison_parser.cpp"
    break;

  case 235:
#line 1136 "bison_parser.y"
    { (yyval.uval) = kJoinLeft; }
#line 4220 "bison_parser.cpp"
    break;

  case 236:
#line 1137 "bison_parser.y"
    { (yyval.uval) = kJoinRight; }
#line 4226 "bison_parser.cpp"
    break;

  case 237:
#line 1138 "bison_parser.y"
    { (yyval.uval) = kJoinRight; }
#line 4232 "bison_parser.cpp"
    break;

  case 238:
#line 1139 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4238 "bison_parser.cpp"
    break;

  case 239:
#line 1140 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4244 "bison_parser.cpp"
    break;

  case 240:
#line 1141 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4250 "bison_parser.cpp"
    break;

  case 241:
#line 1142 "bison_parser.y"
    { (yyval.uval) = kJoinCross; }
#line 4256 "bison_parser.cpp"
    break;

  case 242:
#line 1143 "bison_parser.y"
    { (yyval.uval) = kJoinInner; }
#line 4262 "bison_parser.cpp"
    break;

  case 246:
#line 1163 "bison_parser.y"
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4268 "bison_parser.cpp"
    break;

  case 247:
#line 1164 "bison_parser.y"
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4274 "bison_parser.cpp"
    break;


#line 4278 "bison_parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
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
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1167 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
