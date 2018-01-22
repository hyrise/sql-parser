/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

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


/* Copy the first part of user declarations.  */
#line 1 "bison_parser.y" /* yacc.c:339  */

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


#line 103 "bison_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
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
#line 35 "bison_parser.y" /* yacc.c:355  */

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

#line 165 "bison_parser.cpp" /* yacc.c:355  */

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
    SQL_HISTORY = 279,
    SQL_INTEGER = 280,
    SQL_NATURAL = 281,
    SQL_PREPARE = 282,
    SQL_PRIMARY = 283,
    SQL_SCHEMAS = 284,
    SQL_SPATIAL = 285,
    SQL_VIRTUAL = 286,
    SQL_BEFORE = 287,
    SQL_COLUMN = 288,
    SQL_CREATE = 289,
    SQL_DELETE = 290,
    SQL_DIRECT = 291,
    SQL_DOUBLE = 292,
    SQL_ESCAPE = 293,
    SQL_EXCEPT = 294,
    SQL_EXISTS = 295,
    SQL_GLOBAL = 296,
    SQL_HAVING = 297,
    SQL_IMPORT = 298,
    SQL_INSERT = 299,
    SQL_ISNULL = 300,
    SQL_OFFSET = 301,
    SQL_RENAME = 302,
    SQL_SCHEMA = 303,
    SQL_SELECT = 304,
    SQL_SORTED = 305,
    SQL_TABLES = 306,
    SQL_UNIQUE = 307,
    SQL_UNLOAD = 308,
    SQL_UPDATE = 309,
    SQL_VALUES = 310,
    SQL_AFTER = 311,
    SQL_ALTER = 312,
    SQL_CROSS = 313,
    SQL_DELTA = 314,
    SQL_GROUP = 315,
    SQL_INDEX = 316,
    SQL_INNER = 317,
    SQL_LIMIT = 318,
    SQL_LOCAL = 319,
    SQL_MERGE = 320,
    SQL_MINUS = 321,
    SQL_ORDER = 322,
    SQL_OUTER = 323,
    SQL_RIGHT = 324,
    SQL_TABLE = 325,
    SQL_UNION = 326,
    SQL_USING = 327,
    SQL_WHERE = 328,
    SQL_CALL = 329,
    SQL_CASE = 330,
    SQL_DATE = 331,
    SQL_DESC = 332,
    SQL_DROP = 333,
    SQL_ELSE = 334,
    SQL_FILE = 335,
    SQL_FROM = 336,
    SQL_FULL = 337,
    SQL_HASH = 338,
    SQL_HINT = 339,
    SQL_INTO = 340,
    SQL_JOIN = 341,
    SQL_LEFT = 342,
    SQL_LIKE = 343,
    SQL_LOAD = 344,
    SQL_NULL = 345,
    SQL_PART = 346,
    SQL_PLAN = 347,
    SQL_SHOW = 348,
    SQL_TEXT = 349,
    SQL_THEN = 350,
    SQL_TIME = 351,
    SQL_VIEW = 352,
    SQL_WHEN = 353,
    SQL_WITH = 354,
    SQL_ADD = 355,
    SQL_ALL = 356,
    SQL_AND = 357,
    SQL_ASC = 358,
    SQL_CSV = 359,
    SQL_END = 360,
    SQL_FOR = 361,
    SQL_INT = 362,
    SQL_KEY = 363,
    SQL_NOT = 364,
    SQL_OFF = 365,
    SQL_SET = 366,
    SQL_TBL = 367,
    SQL_TOP = 368,
    SQL_AS = 369,
    SQL_BY = 370,
    SQL_IF = 371,
    SQL_IN = 372,
    SQL_IS = 373,
    SQL_OF = 374,
    SQL_ON = 375,
    SQL_OR = 376,
    SQL_TO = 377,
    SQL_ARRAY = 378,
    SQL_CONCAT = 379,
    SQL_ILIKE = 380,
    SQL_EQUALS = 381,
    SQL_NOTEQUALS = 382,
    SQL_LESS = 383,
    SQL_GREATER = 384,
    SQL_LESSEQ = 385,
    SQL_GREATEREQ = 386,
    SQL_NOTNULL = 387,
    SQL_UMINUS = 388
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 95 "bison_parser.y" /* yacc.c:355  */

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
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;

#line 350 "bison_parser.cpp" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 380 "bison_parser.cpp" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   494

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  151
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  205
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  380

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   388

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   140,     2,     2,
     145,   146,   138,   136,   149,   137,   147,   139,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   148,
     129,   126,   130,   150,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   143,     2,   144,   141,     2,     2,     2,     2,     2,
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
     125,   127,   128,   131,   132,   133,   134,   135,   142
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   247,   247,   268,   274,   283,   287,   291,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   315,   316,   321,
     322,   326,   330,   342,   349,   352,   356,   368,   377,   381,
     391,   394,   408,   415,   422,   433,   434,   438,   439,   443,
     450,   451,   452,   453,   463,   469,   475,   483,   484,   493,
     502,   515,   522,   533,   534,   544,   553,   554,   558,   570,
     571,   572,   589,   590,   594,   595,   599,   609,   626,   630,
     631,   632,   636,   637,   641,   653,   654,   658,   662,   667,
     668,   672,   677,   681,   682,   685,   686,   690,   691,   695,
     699,   700,   701,   707,   708,   712,   713,   714,   721,   722,
     726,   727,   731,   738,   739,   740,   741,   742,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   758,   759,   763,
     764,   765,   766,   767,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   785,   786,   790,   791,   792,
     793,   799,   800,   801,   802,   806,   807,   811,   812,   816,
     817,   818,   819,   820,   821,   825,   826,   830,   834,   838,
     842,   843,   844,   845,   849,   850,   851,   852,   856,   861,
     862,   866,   870,   874,   886,   887,   897,   898,   902,   903,
     912,   913,   918,   929,   938,   939,   944,   945,   949,   950,
     958,   966,   976,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1007,  1016,  1017,  1022,  1023
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
  "EXPLAIN", "HISTORY", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "VIRTUAL", "BEFORE", "COLUMN", "CREATE", "DELETE",
  "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "GLOBAL", "HAVING",
  "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT",
  "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER",
  "ALTER", "CROSS", "DELTA", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING",
  "WHERE", "CALL", "CASE", "DATE", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "NULL",
  "PART", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH",
  "ADD", "ALL", "AND", "ASC", "CSV", "END", "FOR", "INT", "KEY", "NOT",
  "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON",
  "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "'='", "EQUALS", "NOTEQUALS",
  "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'",
  "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_with_paren",
  "select_paren_or_clause", "select_no_paren", "set_operator", "set_type",
  "opt_all", "select_clause", "opt_distinct", "select_list", "from_clause",
  "opt_where", "opt_group", "opt_having", "opt_order", "order_list",
  "order_desc", "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "literal_list", "expr_alias", "expr", "operand", "scalar_expr",
  "unary_expr", "binary_expr", "logic_expr", "in_expr", "case_expr",
  "case_list", "exists_expr", "comp_expr", "function_expr", "array_expr",
  "array_index", "between_expr", "column_name", "literal",
  "string_literal", "num_literal", "int_literal", "null_literal",
  "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "alias", "opt_alias",
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
     375,   376,   377,   378,   379,   380,    61,   381,   382,    60,
      62,   383,   384,   385,   386,   387,    43,    45,    42,    47,
      37,    94,   388,    91,    93,    40,    41,    46,    59,    44,
      63
};
# endif

#define YYPACT_NINF -285

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-285)))

#define YYTABLE_NINF -201

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-201)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,     6,    61,    91,   124,   -22,    80,    85,    70,    95,
      61,   -21,    40,   -41,   220,    87,  -285,   157,   157,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,    31,
    -285,   176,   230,    97,  -285,   103,   182,   151,   151,    61,
     167,    61,   263,   273,   164,  -285,   170,   170,    61,  -285,
     150,   159,  -285,    17,  -285,   203,  -285,  -285,  -285,  -285,
    -285,   -41,   206,   196,   -41,   253,  -285,   328,    10,   332,
     228,    61,    61,   265,  -285,   259,   199,  -285,  -285,  -285,
      84,   338,   305,    61,    61,  -285,  -285,  -285,  -285,   202,
    -285,   279,  -285,  -285,  -285,    84,   279,   263,  -285,  -285,
    -285,  -285,  -285,  -285,    32,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,   308,   -61,   199,    84,  -285,   348,   353,
      54,    57,   215,    74,   165,   224,   183,  -285,   116,   288,
     221,  -285,     4,   225,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   247,   -48,
    -285,  -285,  -285,  -285,   371,   253,   226,  -285,   -40,   253,
     330,  -285,    10,  -285,   267,   374,   268,    -9,   296,  -285,
    -285,   134,   239,  -285,     1,     8,   336,    84,   143,   -52,
     241,   183,   295,    84,   184,   242,   -64,     3,   265,    84,
    -285,    84,   386,    84,  -285,  -285,   183,  -285,   183,   -62,
     245,   105,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   263,    84,   338,  -285,
     246,   135,  -285,  -285,    84,  -285,  -285,  -285,  -285,   263,
    -285,   312,    -2,   145,  -285,   -41,    61,  -285,   397,    10,
    -285,    84,  -285,  -285,   255,    55,    96,    84,    84,  -285,
     336,   323,   102,  -285,  -285,   -41,  -285,   141,  -285,   277,
    -285,    15,  -285,   354,  -285,  -285,  -285,   314,   269,   327,
     183,   272,   116,  -285,   337,   275,   327,   327,   327,   351,
     351,   351,   351,   184,   184,   -96,   -96,   -96,   107,   278,
      -9,  -285,    10,  -285,   371,  -285,  -285,   348,  -285,  -285,
    -285,  -285,  -285,  -285,   374,  -285,  -285,  -285,   149,   155,
    -285,    84,    84,  -285,    77,   128,   284,  -285,   291,   355,
    -285,  -285,  -285,   372,   375,   356,     3,  -285,   324,  -285,
     183,   327,   116,   298,   163,  -285,  -285,   180,  -285,  -285,
    -285,  -285,  -285,    -9,   111,  -285,    84,  -285,    15,     3,
    -285,  -285,     3,   231,    84,   295,   300,   186,  -285,  -285,
    -285,  -285,    -9,  -285,  -285,   210,   -32,  -285,  -285,   302,
      84,    84,  -285,    14,    -9,  -285,    -9,   301,   303,  -285
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,   203,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    59,
      60,    86,     0,   184,    50,    25,     0,    36,    36,     0,
       0,     0,     0,    76,     0,   183,    48,    48,     0,    30,
       0,     0,     1,   202,     2,     0,     6,     5,    70,    71,
      69,     0,    73,     0,     0,    97,    46,     0,     0,     0,
       0,     0,     0,    80,    28,     0,    54,   171,    93,    75,
       0,     0,     0,     0,     0,    31,    63,    62,     4,     0,
      64,    86,    65,    72,    68,     0,    86,     0,    66,   185,
     168,   169,   172,   173,     0,   100,   164,   165,   170,   166,
     167,    24,    23,     0,     0,    54,     0,    49,     0,     0,
       0,   160,     0,     0,     0,     0,     0,   162,     0,     0,
      77,    98,   189,   103,   110,   111,   112,   105,   107,   113,
     106,   124,   114,   115,   109,   104,   117,   118,     0,    80,
      56,    47,    44,    45,     0,    97,    85,    87,    92,    97,
      95,    26,     0,    35,     0,     0,     0,    79,     0,    29,
     204,     0,     0,    52,    76,     0,     0,     0,     0,     0,
       0,     0,   120,     0,   119,     0,     0,     0,    80,     0,
     187,     0,     0,     0,   188,   102,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      21,     0,    19,    61,     0,    91,    90,    89,    67,     0,
     101,     0,     0,     0,    37,     0,     0,    53,     0,     0,
     155,     0,   161,   163,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   116,   108,     0,    78,   174,   176,     0,
     178,   189,   177,    82,    99,   135,   186,   136,     0,   131,
       0,     0,     0,   122,     0,   134,   133,   149,   150,   151,
     152,   153,   154,   126,   125,   128,   127,   129,   130,     0,
      58,    57,     0,    17,     0,    88,    96,     0,    41,    42,
      43,    40,    39,    33,     0,    34,    27,   205,     0,     0,
     147,     0,     0,   141,     0,     0,     0,   157,     0,     0,
     199,   193,   194,   198,   197,     0,     0,   182,     0,    74,
       0,   132,     0,     0,     0,   123,   158,     0,    20,    32,
      38,    51,   156,   145,     0,   144,     0,   148,   189,     0,
     196,   195,     0,   175,     0,   159,     0,     0,   139,   137,
      22,   142,   146,   179,   190,   200,    84,   140,   138,     0,
       0,     0,    81,     0,   201,   191,    83,   160,     0,   192
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,  -285,  -285,   401,  -285,   432,  -285,   168,  -285,  -285,
    -285,  -285,  -285,   161,  -285,  -285,   421,  -285,   169,  -285,
    -285,   424,  -285,  -285,  -285,   357,  -285,  -285,   256,  -104,
      52,   412,   -13,   446,  -285,  -285,   201,   304,  -285,  -285,
    -119,  -285,  -285,   -60,  -285,   258,  -285,  -285,    37,  -174,
    -220,   290,   -94,   -70,  -285,  -285,  -285,  -285,  -285,  -285,
     315,  -285,  -285,  -285,  -285,  -285,  -285,   110,   -66,  -113,
    -285,   -39,  -285,  -285,  -285,  -284,   137,  -285,  -285,  -285,
       2,  -285,  -240,  -285,  -285,  -285,  -285,  -285
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   221,   222,    18,   112,
      19,    20,    75,   168,    21,    22,    71,   233,   234,   302,
      23,    83,    24,    25,    26,   120,    27,   149,   150,    28,
      29,    91,    30,    61,    62,    94,    31,    80,   129,   188,
     117,   329,   372,    65,   156,   157,   227,    43,    98,   130,
     104,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     179,   140,   141,   142,   143,   144,   145,   146,   147,   106,
     107,   108,   109,   110,   256,   257,   258,   259,   260,    44,
     261,   194,   195,   262,   325,   375,    54,   171
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   158,   105,    78,    34,   169,    33,   190,     9,   252,
     371,   242,    45,    79,   100,   101,    77,   377,   190,   308,
     164,   327,   167,   298,     1,   116,   270,   247,   202,   178,
     219,   155,     2,    32,   186,   299,   159,   225,   191,     3,
      58,    73,   353,    76,     4,   215,   248,   216,    37,    46,
      85,     5,     6,   249,   182,   271,   184,   193,   160,    48,
       7,     8,   191,   226,    33,    50,     9,   309,   365,   263,
      59,    10,   337,   114,   115,    38,    47,   121,   100,   101,
      77,   193,   254,   245,   165,   152,   153,   121,   100,   101,
      77,    49,   300,   191,    35,    11,   230,   265,   334,   267,
     102,   218,    60,     9,    13,   301,   191,   173,   363,   172,
      12,   182,   193,    90,   122,   185,    90,   189,   192,   121,
     100,   101,    77,   290,   122,   193,   268,    36,   269,   192,
     158,   305,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   243,   240,   255,   123,
     311,   318,   127,   314,   315,    41,   122,   191,   357,   123,
     103,    39,    13,   244,   102,     9,    40,   319,   121,   100,
     101,    77,   177,   105,   102,   312,   193,   289,   161,   191,
     366,   162,   345,   124,   169,    58,   121,   100,   101,    77,
     296,   123,   223,   124,   248,   273,   228,   125,   193,   320,
     331,   313,   174,   321,   175,   180,   102,   125,    42,   322,
     323,   126,   127,   191,   274,    59,   361,   343,   344,   128,
      52,   126,   127,   346,   103,   124,   105,  -200,   324,   128,
     191,   202,   193,    66,   103,    53,   319,   316,   306,   125,
     123,   177,   196,    63,    67,   191,   317,    60,    68,   193,
     216,   189,   362,   126,   127,   102,    55,   319,   123,   333,
     355,   128,    92,    69,   193,    92,   103,    70,   320,    77,
     197,    74,   321,   102,   181,    81,   374,   376,   322,   323,
     237,   293,   369,   238,   294,    79,    82,    89,   125,   320,
    -180,   303,   181,   321,   304,   341,    86,   324,   162,   322,
     323,   342,   126,   127,   189,    87,   125,    93,   202,   359,
     128,    95,   189,   198,   197,   103,    97,  -200,   324,   356,
     126,   127,   212,   213,   214,   215,   360,   216,   128,   162,
     370,    99,   368,   103,   199,   189,   111,   113,   116,   118,
     197,   148,   200,   201,   119,   151,    63,   154,   163,   202,
     203,   204,   100,   205,   206,   207,   170,   198,   208,   209,
     176,   210,   211,   212,   213,   214,   215,   183,   216,   187,
     189,   330,   197,   217,   220,   224,   229,   232,   251,   231,
    -181,   236,   235,   198,   239,     9,   250,   201,   253,   266,
     272,   292,   297,   202,   203,   204,   197,   205,   206,   207,
     307,   310,   208,   209,   251,   210,   211,   212,   213,   214,
     215,   270,   216,   201,   328,  -201,   191,   332,   216,   202,
     203,   204,   336,   205,   206,   207,   326,   335,   208,   209,
     347,   210,   211,   212,   213,   214,   215,   348,   216,   354,
     350,   349,   352,   351,   358,   201,   367,   373,   175,   379,
      57,   202,  -201,  -201,    88,  -201,   206,   207,   339,    72,
     208,   209,   338,   210,   211,   212,   213,   214,   215,   201,
     216,    84,   166,   340,   291,   202,    96,    64,   241,   264,
    -201,  -201,   295,   378,  -201,  -201,   364,   210,   211,   212,
     213,   214,   215,   246,   216
};

static const yytype_uint16 yycheck[] =
{
      13,    95,    68,    42,     2,   118,     3,     3,    49,   183,
      42,     3,    10,    12,     4,     5,     6,     3,     3,   239,
      81,   261,   116,    25,     7,    73,    88,    79,   124,   123,
     149,    91,    15,    27,   128,    37,    96,    77,   102,    22,
       9,    39,   326,    41,    27,   141,    98,   143,    70,    70,
      48,    34,    35,   105,   124,   117,   126,   121,    97,    19,
      43,    44,   102,   103,     3,    13,    49,   241,   352,   188,
      39,    54,   292,    71,    72,    97,    97,     3,     4,     5,
       6,   121,   146,   177,   145,    83,    84,     3,     4,     5,
       6,    51,    94,   102,     3,    78,   162,   191,   272,   193,
      90,   149,    71,    49,   145,   107,   102,   120,   348,    55,
      93,   181,   121,    61,    40,   128,    64,   149,   114,     3,
       4,     5,     6,   217,    40,   121,   196,     3,   198,   114,
     224,   235,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   138,   146,   145,    75,
      95,   255,   138,   247,   248,    85,    40,   102,   332,    75,
     150,    81,   145,   176,    90,    49,    81,    26,     3,     4,
       5,     6,    98,   239,    90,    79,   121,   216,   146,   102,
     354,   149,   105,   109,   297,     9,     3,     4,     5,     6,
     229,    75,   155,   109,    98,    90,   159,   123,   121,    58,
     270,   105,   145,    62,   147,    40,    90,   123,   113,    68,
      69,   137,   138,   102,   109,    39,   105,   311,   312,   145,
       0,   137,   138,    95,   150,   109,   292,    86,    87,   145,
     102,   124,   121,     3,   150,   148,    26,   250,   236,   123,
      75,    98,    17,    67,   147,   102,   144,    71,   145,   121,
     143,   149,   346,   137,   138,    90,    99,    26,    75,   272,
     330,   145,    61,    81,   121,    64,   150,   116,    58,     6,
      45,   104,    62,    90,   109,   111,   370,   371,    68,    69,
     146,   146,    72,   149,   149,    12,   116,    84,   123,    58,
     149,   146,   109,    62,   149,   146,   146,    87,   149,    68,
      69,   146,   137,   138,   149,   146,   123,   101,   124,   146,
     145,   115,   149,    88,    45,   150,    63,    86,    87,   332,
     137,   138,   138,   139,   140,   141,   146,   143,   145,   149,
     120,     3,   146,   150,   109,   149,     4,   109,    73,    80,
      45,     3,   117,   118,   145,    40,    67,   145,    40,   124,
     125,   126,     4,   128,   129,   130,     3,    88,   133,   134,
     145,   136,   137,   138,   139,   140,   141,   143,   143,    81,
     149,   102,    45,   126,     3,   149,    46,     3,   109,   112,
     149,    85,   114,    88,   145,    49,   145,   118,   146,     3,
     145,   145,    80,   124,   125,   126,    45,   128,   129,   130,
       3,   146,   133,   134,   109,   136,   137,   138,   139,   140,
     141,    88,   143,   118,    60,    88,   102,   145,   143,   124,
     125,   126,   144,   128,   129,   130,   149,    90,   133,   134,
     146,   136,   137,   138,   139,   140,   141,   146,   143,   115,
      68,    86,    86,    68,   146,   118,   146,   145,   147,   146,
      18,   124,   125,   126,    53,   128,   129,   130,   297,    38,
     133,   134,   294,   136,   137,   138,   139,   140,   141,   118,
     143,    47,   115,   304,   218,   124,    64,    31,   174,   189,
     129,   130,   224,   373,   133,   134,   349,   136,   137,   138,
     139,   140,   141,   178,   143
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    15,    22,    27,    34,    35,    43,    44,    49,
      54,    78,    93,   145,   152,   153,   154,   155,   159,   161,
     162,   165,   166,   171,   173,   174,   175,   177,   180,   181,
     183,   187,    27,     3,   231,     3,     3,    70,    97,    81,
      81,    85,   113,   198,   230,   231,    70,    97,    19,    51,
     181,   183,     0,   148,   237,    99,   156,   156,     9,    39,
      71,   184,   185,    67,   184,   194,     3,   147,   145,    81,
     116,   167,   167,   231,   104,   163,   231,     6,   222,    12,
     188,   111,   116,   172,   172,   231,   146,   146,   154,    84,
     181,   182,   187,   101,   186,   115,   182,    63,   199,     3,
       4,     5,    90,   150,   201,   219,   220,   221,   222,   223,
     224,     4,   160,   109,   231,   231,    73,   191,    80,   145,
     176,     3,    40,    75,   109,   123,   137,   138,   145,   189,
     200,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     212,   213,   214,   215,   216,   217,   218,   219,     3,   178,
     179,    40,   231,   231,   145,   194,   195,   196,   203,   194,
     222,   146,   149,    40,    81,   145,   176,   203,   164,   220,
       3,   238,    55,   183,   145,   147,   145,    98,   203,   211,
      40,   109,   204,   143,   204,   183,   203,    81,   190,   149,
       3,   102,   114,   121,   232,   233,    17,    45,    88,   109,
     117,   118,   124,   125,   126,   128,   129,   130,   133,   134,
     136,   137,   138,   139,   140,   141,   143,   126,   149,   191,
       3,   157,   158,   199,   149,    77,   103,   197,   199,    46,
     219,   112,     3,   168,   169,   114,    85,   146,   149,   145,
     146,   188,     3,   138,   183,   203,   211,    79,    98,   105,
     145,   109,   200,   146,   146,   145,   225,   226,   227,   228,
     229,   231,   234,   191,   202,   203,     3,   203,   204,   204,
      88,   117,   145,    90,   109,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   222,
     203,   179,   145,   146,   149,   196,   222,    80,    25,    37,
      94,   107,   170,   146,   149,   180,   231,     3,   201,   200,
     146,    95,    79,   105,   203,   203,   183,   144,   180,    26,
      58,    62,    68,    69,    87,   235,   149,   233,    60,   192,
     102,   204,   145,   183,   200,    90,   144,   201,   158,   164,
     169,   146,   146,   203,   203,   105,    95,   146,   146,    86,
      68,    68,    86,   226,   115,   204,   183,   200,   146,   146,
     146,   105,   203,   233,   227,   226,   200,   146,   146,    72,
     120,    42,   193,   145,   203,   236,   203,     3,   218,   146
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   151,   152,   153,   153,   154,   154,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   157,
     157,   158,   158,   159,   160,   161,   161,   162,   163,   164,
     165,   165,   166,   166,   166,   167,   167,   168,   168,   169,
     170,   170,   170,   170,   171,   171,   171,   172,   172,   173,
     174,   175,   175,   176,   176,   177,   178,   178,   179,   180,
     180,   180,   181,   181,   182,   182,   183,   183,   184,   185,
     185,   185,   186,   186,   187,   188,   188,   189,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     197,   197,   197,   198,   198,   199,   199,   199,   200,   200,
     201,   201,   202,   203,   203,   203,   203,   203,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   205,   205,   206,
     206,   206,   206,   206,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   208,   208,   209,   209,   209,
     209,   210,   210,   210,   210,   211,   211,   212,   212,   213,
     213,   213,   213,   213,   213,   214,   214,   215,   216,   217,
     218,   218,   218,   218,   219,   219,   219,   219,   220,   221,
     221,   222,   223,   224,   225,   225,   226,   226,   227,   227,
     228,   228,   229,   230,   231,   231,   232,   232,   233,   233,
     234,   234,   234,   235,   235,   235,   235,   235,   235,   235,
     235,   236,   237,   237,   238,   238
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     3,     0,     1,     3,     2,
       1,     1,     1,     1,     4,     4,     3,     2,     0,     4,
       2,     8,     5,     3,     0,     5,     1,     3,     3,     1,
       1,     5,     3,     3,     1,     1,     3,     5,     2,     1,
       1,     1,     1,     0,     7,     1,     0,     1,     2,     2,
       0,     4,     0,     2,     0,     3,     0,     1,     3,     2,
       1,     1,     0,     2,     0,     2,     4,     0,     1,     3,
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     5,     6,     5,
       6,     4,     6,     3,     5,     4,     5,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     5,     4,     4,     5,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     4,
       1,     3,     2,     1,     1,     3,     2,     1,     1,     0,
       4,     6,     8,     1,     1,     2,     2,     1,     1,     1,
       0,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
            /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1620 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1626 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1632 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1638 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 153: /* statement_list  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1651 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 154: /* statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1657 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 155: /* preparable_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1663 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 156: /* opt_hints  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1676 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 157: /* hint_list  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1689 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 158: /* hint  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1695 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 159: /* prepare_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1701 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 160: /* prepare_target_query  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1707 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 161: /* execute_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1713 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 162: /* import_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1719 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 163: /* import_file_type  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1725 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 164: /* file_path  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1731 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 165: /* show_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1737 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 166: /* create_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1743 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 167: /* opt_not_exists  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1749 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* column_def_commalist  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1762 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* column_def  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1768 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* column_type  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1774 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* drop_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1780 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* opt_exists  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1786 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* delete_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1792 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* truncate_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1798 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* insert_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1804 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* opt_column_list  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1817 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* update_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1823 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* update_clause_commalist  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* update_clause  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* select_statement  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* select_with_paren  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* select_paren_or_clause  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1860 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* select_no_paren  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1866 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* select_clause  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1872 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_distinct  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1878 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_list  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1891 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* from_clause  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1897 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_where  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1903 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_group  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 1909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_having  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1915 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_order  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1928 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* order_list  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1941 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* order_desc  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 1947 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_order_type  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1953 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_top  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 1959 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_limit  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 1965 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* expr_list  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1978 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* literal_list  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1991 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* expr_alias  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1997 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2003 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* operand  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2009 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* scalar_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2015 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* unary_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2021 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* binary_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2027 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* logic_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2033 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* in_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2039 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* case_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2045 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* case_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2051 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* exists_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2057 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* comp_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2063 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* function_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2069 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* array_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2075 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* array_index  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2081 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* between_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2087 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* column_name  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2093 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* literal  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2099 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* string_literal  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2105 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* num_literal  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2111 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* int_literal  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2117 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* null_literal  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2123 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* param_expr  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2129 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* table_ref  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2135 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* table_ref_atomic  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2141 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* nonjoin_table_ref_atomic  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2147 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* table_ref_commalist  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2160 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* table_ref_name  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2166 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* table_ref_name_no_alias  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2172 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* table_name  */
#line 139 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2178 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* alias  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2184 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* opt_alias  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2190 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* join_clause  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2196 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* opt_join_type  */
#line 138 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2202 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* join_condition  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2208 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* ident_commalist  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2221 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 73 "bison_parser.y" /* yacc.c:1436  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2340 "bison_parser.cpp" /* yacc.c:1436  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 247 "bison_parser.y" /* yacc.c:1661  */
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
#line 2545 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 268 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2556 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 274 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2567 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 283 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2576 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 287 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2585 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 291 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2593 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 298 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2599 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 299 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2605 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 300 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2611 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 301 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2617 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 302 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2623 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 13:
#line 303 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2629 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 304 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2635 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 305 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2641 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 306 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2647 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 315 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2653 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 316 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = nullptr; }
#line 2659 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 321 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2665 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 322 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2671 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 326 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2680 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 330 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2690 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 342 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2700 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 352 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2709 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 356 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2719 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 368 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2730 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 377 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kImportCSV; }
#line 2736 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 381 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2742 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 391 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2750 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 394 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2760 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 408 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2772 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 415 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2784 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 422 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2797 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 433 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = true; }
#line 2803 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 434 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = false; }
#line 2809 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 438 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2815 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 439 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2821 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 443 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-1].sval), (ColumnDefinition::DataType) (yyvsp[0].uval));
		}
#line 2829 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 450 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2835 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 451 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2841 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 452 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = ColumnDefinition::DOUBLE; }
#line 2847 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 453 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = ColumnDefinition::TEXT; }
#line 2853 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 463 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2864 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 469 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2875 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 475 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2885 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 483 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = true; }
#line 2891 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 484 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = false; }
#line 2897 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 493 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 2908 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 502 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2918 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 515 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 2930 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 522 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2942 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 533 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 2948 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 534 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.str_vec) = nullptr; }
#line 2954 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 544 "bison_parser.y" /* yacc.c:1661  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 2965 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 553 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 2971 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 554 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 2977 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 558 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 2987 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 572 "bison_parser.y" /* yacc.c:1661  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3006 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 589 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3012 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 590 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3018 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 599 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3033 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 609 "bison_parser.y" /* yacc.c:1661  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3052 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 641 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3066 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 653 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = true; }
#line 3072 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 654 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = false; }
#line 3078 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 662 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3084 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 667 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3090 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 668 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = nullptr; }
#line 3096 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 672 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3106 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 677 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.group_t) = nullptr; }
#line 3112 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 681 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3118 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 682 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = nullptr; }
#line 3124 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 685 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3130 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 686 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_vec) = nullptr; }
#line 3136 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 690 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3142 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 691 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3148 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 695 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3154 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 699 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_type) = kOrderAsc; }
#line 3160 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 700 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_type) = kOrderDesc; }
#line 3166 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 701 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_type) = kOrderAsc; }
#line 3172 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 707 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3178 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 708 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = nullptr; }
#line 3184 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 712 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3190 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 713 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3196 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 714 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = nullptr; }
#line 3202 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 721 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3208 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 722 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3214 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 726 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3220 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 101:
#line 727 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3226 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 731 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			(yyval.expr)->alias = (yyvsp[0].sval);
		}
#line 3235 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 746 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3241 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 754 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3247 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 763 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3253 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 764 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3259 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 765 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3265 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 766 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3271 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 767 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3277 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 125:
#line 772 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3283 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 126:
#line 773 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3289 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 774 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3295 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 775 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3301 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 776 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3307 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 777 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3313 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 778 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3319 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 779 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3325 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 780 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3331 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 781 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3337 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 785 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3343 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 786 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3349 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 790 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3355 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 138:
#line 791 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3361 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 792 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3367 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 793 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3373 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 799 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3379 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 142:
#line 800 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3385 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 801 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3391 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 144:
#line 802 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3397 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 806 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3403 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 807 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3409 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 147:
#line 811 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3415 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 812 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3421 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 816 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3427 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 817 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3433 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 818 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3439 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 819 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3445 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 153:
#line 820 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3451 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 821 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3457 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 825 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3463 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 826 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3469 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 157:
#line 830 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3475 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 834 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3481 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 838 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3487 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 842 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3493 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 843 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3499 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 844 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3505 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 845 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3511 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 856 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3517 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 861 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3523 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 866 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3529 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 870 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3535 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 874 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3545 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 887 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3556 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 903 "bison_parser.y" /* yacc.c:1661  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3567 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 912 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3573 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 913 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3579 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 918 "bison_parser.y" /* yacc.c:1661  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3591 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 929 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3601 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 938 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 3607 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 939 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 3613 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 944 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3619 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 950 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.sval) = nullptr; }
#line 3625 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 959 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3637 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 967 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3650 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 977 "bison_parser.y" /* yacc.c:1661  */
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
#line 3670 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 995 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinInner; }
#line 3676 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 996 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinOuter; }
#line 3682 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 997 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinLeftOuter; }
#line 3688 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 998 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinRightOuter; }
#line 3694 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 999 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinLeft; }
#line 3700 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 1000 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinRight; }
#line 3706 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 1001 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinCross; }
#line 3712 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 1002 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinInner; }
#line 3718 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 1022 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3724 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 1023 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3730 "bison_parser.cpp" /* yacc.c:1661  */
    break;


#line 3734 "bison_parser.cpp" /* yacc.c:1661  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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
#line 1026 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

