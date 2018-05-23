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
    SQL_EXTRACT = 296,
    SQL_GLOBAL = 297,
    SQL_HAVING = 298,
    SQL_IMPORT = 299,
    SQL_INSERT = 300,
    SQL_ISNULL = 301,
    SQL_OFFSET = 302,
    SQL_RENAME = 303,
    SQL_SCHEMA = 304,
    SQL_SELECT = 305,
    SQL_SORTED = 306,
    SQL_TABLES = 307,
    SQL_UNIQUE = 308,
    SQL_UNLOAD = 309,
    SQL_UPDATE = 310,
    SQL_VALUES = 311,
    SQL_AFTER = 312,
    SQL_ALTER = 313,
    SQL_CROSS = 314,
    SQL_DELTA = 315,
    SQL_GROUP = 316,
    SQL_INDEX = 317,
    SQL_INNER = 318,
    SQL_LIMIT = 319,
    SQL_LOCAL = 320,
    SQL_MERGE = 321,
    SQL_MINUS = 322,
    SQL_ORDER = 323,
    SQL_OUTER = 324,
    SQL_RIGHT = 325,
    SQL_TABLE = 326,
    SQL_UNION = 327,
    SQL_USING = 328,
    SQL_WHERE = 329,
    SQL_CALL = 330,
    SQL_CASE = 331,
    SQL_DATE = 332,
    SQL_DESC = 333,
    SQL_DROP = 334,
    SQL_ELSE = 335,
    SQL_FILE = 336,
    SQL_FROM = 337,
    SQL_FULL = 338,
    SQL_HASH = 339,
    SQL_HINT = 340,
    SQL_INTO = 341,
    SQL_JOIN = 342,
    SQL_LEFT = 343,
    SQL_LIKE = 344,
    SQL_LOAD = 345,
    SQL_NULL = 346,
    SQL_PART = 347,
    SQL_PLAN = 348,
    SQL_SHOW = 349,
    SQL_TEXT = 350,
    SQL_THEN = 351,
    SQL_TIME = 352,
    SQL_VIEW = 353,
    SQL_WHEN = 354,
    SQL_WITH = 355,
    SQL_ADD = 356,
    SQL_ALL = 357,
    SQL_AND = 358,
    SQL_ASC = 359,
    SQL_CSV = 360,
    SQL_END = 361,
    SQL_FOR = 362,
    SQL_INT = 363,
    SQL_KEY = 364,
    SQL_NOT = 365,
    SQL_OFF = 366,
    SQL_SET = 367,
    SQL_TBL = 368,
    SQL_TOP = 369,
    SQL_AS = 370,
    SQL_BY = 371,
    SQL_IF = 372,
    SQL_IN = 373,
    SQL_IS = 374,
    SQL_OF = 375,
    SQL_ON = 376,
    SQL_OR = 377,
    SQL_TO = 378,
    SQL_ARRAY = 379,
    SQL_CONCAT = 380,
    SQL_ILIKE = 381,
    SQL_SECOND = 382,
    SQL_MINUTE = 383,
    SQL_HOUR = 384,
    SQL_DAY = 385,
    SQL_MONTH = 386,
    SQL_YEAR = 387,
    SQL_EQUALS = 388,
    SQL_NOTEQUALS = 389,
    SQL_LESS = 390,
    SQL_GREATER = 391,
    SQL_LESSEQ = 392,
    SQL_GREATEREQ = 393,
    SQL_NOTNULL = 394,
    SQL_UMINUS = 395
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
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;

#line 359 "bison_parser.cpp" /* yacc.c:355  */
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

#line 389 "bison_parser.cpp" /* yacc.c:358  */

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
#define YYLAST   600

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  227
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  413

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   395

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   147,     2,     2,
     152,   153,   145,   143,   156,   144,   154,   146,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   155,
     136,   133,   137,   157,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   150,     2,   151,   148,     2,     2,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   134,   135,
     138,   139,   140,   141,   142,   149
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   251,   251,   272,   278,   287,   291,   295,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   319,   320,   325,
     326,   330,   334,   346,   353,   356,   360,   372,   381,   385,
     395,   398,   412,   419,   426,   437,   438,   442,   443,   447,
     454,   455,   456,   457,   467,   473,   479,   487,   488,   497,
     506,   519,   526,   537,   538,   548,   557,   558,   562,   574,
     575,   576,   593,   594,   598,   599,   603,   613,   630,   634,
     635,   636,   640,   641,   645,   657,   658,   662,   666,   667,
     670,   675,   676,   680,   685,   689,   690,   693,   694,   698,
     699,   703,   707,   708,   709,   715,   716,   720,   721,   722,
     723,   724,   725,   726,   727,   734,   735,   739,   740,   744,
     754,   755,   756,   757,   758,   762,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   775,   776,   780,   781,   782,
     783,   784,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   802,   803,   807,   808,   809,   810,   816,
     817,   818,   819,   823,   824,   828,   829,   833,   834,   835,
     836,   837,   838,   839,   843,   844,   848,   852,   853,   854,
     855,   856,   857,   860,   864,   868,   872,   873,   874,   875,
     879,   880,   881,   882,   886,   891,   892,   896,   900,   904,
     916,   917,   927,   928,   932,   933,   942,   943,   948,   959,
     968,   969,   974,   975,   980,   981,   985,   986,   991,   992,
    1000,  1008,  1018,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
    1044,  1045,  1046,  1051,  1060,  1061,  1066,  1067
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
  "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "GLOBAL",
  "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA",
  "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES",
  "AFTER", "ALTER", "CROSS", "DELTA", "GROUP", "INDEX", "INNER", "LIMIT",
  "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION",
  "USING", "WHERE", "CALL", "CASE", "DATE", "DESC", "DROP", "ELSE", "FILE",
  "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD",
  "NULL", "PART", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN",
  "WITH", "ADD", "ALL", "AND", "ASC", "CSV", "END", "FOR", "INT", "KEY",
  "NOT", "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'",
  "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'",
  "','", "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_with_paren",
  "select_paren_or_clause", "select_no_paren", "set_operator", "set_type",
  "opt_all", "select_clause", "opt_distinct", "select_list",
  "opt_from_clause", "from_clause", "opt_where", "opt_group", "opt_having",
  "opt_order", "order_list", "order_desc", "opt_order_type", "opt_top",
  "opt_limit", "expr_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "datetime_field", "array_expr",
  "array_index", "between_expr", "column_name", "literal",
  "string_literal", "num_literal", "int_literal", "null_literal",
  "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "join_clause", "opt_join_type",
  "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
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
     385,   386,   387,    61,   388,   389,    60,    62,   390,   391,
     392,   393,   394,    43,    45,    42,    47,    37,    94,   395,
      91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -321

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-321)))

#define YYTABLE_NINF -223

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-223)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     276,    17,    42,    52,    63,   -33,    10,    19,    29,    62,
      42,   -24,    30,   -38,   129,   -18,  -321,    78,    78,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,    23,
    -321,    28,   127,    26,  -321,    27,   111,    69,    69,    42,
     117,    42,   202,   197,   122,  -321,    99,    99,    42,  -321,
      70,    82,  -321,   276,  -321,   157,  -321,  -321,  -321,  -321,
    -321,   -38,   141,   140,   -38,    -5,  -321,   255,    20,   259,
     154,    42,    42,   194,  -321,   189,   120,  -321,  -321,  -321,
     121,   271,   236,    42,    42,  -321,  -321,  -321,  -321,   130,
    -321,   225,  -321,  -321,  -321,   121,   225,   202,     7,  -321,
    -321,  -321,  -321,  -321,  -321,    74,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,   257,   -77,   120,   121,  -321,   291,
     296,    66,     5,   164,   167,    11,   184,   174,   178,  -321,
     161,   245,   169,  -321,    16,   250,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,   199,   -44,  -321,  -321,  -321,  -321,   331,    -5,   182,
    -321,   -25,    -5,  -321,   293,   295,   301,  -321,    20,  -321,
     238,   349,   239,   -23,   267,  -321,  -321,    76,   204,  -321,
      22,    15,   308,   348,   121,   158,   114,   207,   178,   379,
     121,   103,   211,   -76,     6,   194,  -321,   121,  -321,   121,
     364,   121,  -321,  -321,   178,  -321,   178,   -49,   219,     3,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   202,   121,   271,  -321,   221,
      80,  -321,  -321,   121,  -321,  -321,  -321,  -321,   202,   202,
     202,  -321,   297,    -4,    88,  -321,   -38,    42,  -321,   371,
      20,  -321,   121,  -321,  -321,   224,  -321,  -321,  -321,  -321,
    -321,  -321,   298,   -46,   115,   121,   121,  -321,   308,   290,
      59,  -321,  -321,   -38,  -321,   274,  -321,   226,  -321,     8,
    -321,   320,  -321,  -321,  -321,   285,   317,   420,   178,   237,
     161,  -321,   310,   242,   420,   420,   420,   420,   450,   450,
     450,   450,   103,   103,    48,    48,    48,    67,   248,   -23,
    -321,    20,  -321,   331,  -321,  -321,  -321,  -321,   291,  -321,
    -321,  -321,  -321,  -321,  -321,   349,  -321,  -321,  -321,   106,
     128,  -321,   121,   121,   121,  -321,   243,   104,   249,  -321,
     251,   316,  -321,  -321,  -321,   338,   339,   341,   324,     6,
     410,  -321,  -321,  -321,   302,  -321,   178,   420,   161,   261,
     134,  -321,  -321,   136,  -321,  -321,  -321,  -321,  -321,   -68,
     -23,   244,  -321,   121,  -321,     8,     6,  -321,  -321,  -321,
       6,   346,   265,   121,   379,   266,   148,  -321,  -321,  -321,
    -321,  -321,   -23,  -321,  -321,   386,   296,   -36,  -321,  -321,
     269,   121,   159,   121,  -321,    25,   -23,  -321,  -321,   -23,
     268,   270,  -321
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,   225,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    59,
      60,    88,     0,   200,    50,    25,     0,    36,    36,     0,
       0,     0,     0,    76,     0,   199,    48,    48,     0,    30,
       0,     0,     1,   224,     2,     0,     6,     5,    70,    71,
      69,     0,    73,     0,     0,   104,    46,     0,     0,     0,
       0,     0,     0,    82,    28,     0,    54,   187,    95,    75,
       0,     0,     0,     0,     0,    31,    63,    62,     4,     0,
      64,    88,    65,    72,    68,     0,    88,     0,     0,    66,
     201,   184,   185,   188,   189,     0,   107,   180,   181,   186,
     182,   183,    24,    23,     0,     0,    54,     0,    49,     0,
       0,     0,   176,     0,     0,     0,     0,     0,     0,   178,
       0,    79,    77,   105,   209,   110,   117,   118,   119,   112,
     114,   120,   113,   132,   121,   122,   123,   116,   111,   125,
     126,     0,    82,    56,    47,    44,    45,     0,   104,    87,
      89,    94,   104,    99,   101,   100,    97,    26,     0,    35,
       0,     0,     0,    81,     0,    29,   226,     0,     0,    52,
      76,     0,     0,     0,     0,     0,     0,     0,     0,   128,
       0,   127,     0,     0,     0,    82,    78,     0,   207,     0,
       0,     0,   208,   109,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    21,
       0,    19,    61,     0,    93,    92,    91,    67,     0,     0,
       0,   108,     0,     0,     0,    37,     0,     0,    53,     0,
       0,   164,     0,   177,   179,     0,   167,   168,   169,   170,
     171,   172,     0,     0,     0,     0,     0,   151,     0,     0,
       0,   124,   115,     0,    80,   190,   192,     0,   194,   205,
     193,    84,   106,   143,   206,   144,     0,   139,     0,     0,
       0,   130,     0,   142,   141,   157,   158,   159,   160,   161,
     162,   163,   134,   133,   136,   135,   137,   138,     0,    58,
      57,     0,    17,     0,    90,   103,   102,    98,     0,    41,
      42,    43,    40,    39,    33,     0,    34,    27,   227,     0,
       0,   155,     0,     0,     0,   149,     0,     0,     0,   173,
       0,     0,   221,   213,   219,   217,   220,   215,     0,     0,
       0,   204,   198,   202,     0,    74,     0,   140,     0,     0,
       0,   131,   174,     0,    20,    32,    38,    51,   165,     0,
     153,     0,   152,     0,   156,   205,     0,   216,   218,   214,
       0,   191,   206,     0,   175,     0,     0,   147,   145,    22,
     166,   150,   154,   195,   210,   222,     0,    86,   148,   146,
       0,     0,     0,     0,    83,     0,   223,   211,   203,    85,
     176,     0,   212
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -321,  -321,  -321,   373,  -321,   406,  -321,   118,  -321,  -321,
    -321,  -321,  -321,   119,  -321,  -321,   394,  -321,   110,  -321,
    -321,   391,  -321,  -321,  -321,   323,  -321,  -321,   213,  -185,
       9,   377,   -13,   413,  -321,  -321,   253,   292,  -321,  -321,
    -321,  -109,  -321,  -321,    37,  -321,   214,  -321,  -321,   -69,
    -184,  -230,   273,   -94,   -70,  -321,  -321,  -321,  -321,  -321,
    -321,   263,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
      41,   -65,  -115,  -321,   -34,  -321,  -321,  -321,  -320,    95,
    -321,  -321,  -321,     0,  -321,    98,   347,  -321,  -321,  -321,
    -321,  -321,    86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   230,   231,    18,   113,
      19,    20,    75,   174,    21,    22,    71,   244,   245,   323,
      23,    83,    24,    25,    26,   121,    27,   152,   153,    28,
      29,    91,    30,    61,    62,    94,    31,    80,   131,   195,
     196,   118,   355,   404,    65,   159,   160,   236,    43,    99,
     132,   105,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   186,   142,   143,   144,   145,   262,   146,   147,   148,
     149,   150,   107,   108,   109,   110,   111,   274,   275,   276,
     277,   278,    44,   279,   351,   352,   353,   203,   280,   348,
     407,    54,   177
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   161,    34,   106,   175,   170,   270,   403,    78,    33,
      45,   198,     9,    77,   122,   101,   102,    77,   253,   198,
     329,   319,    50,   173,   101,   102,    77,   199,   410,   381,
     117,   185,    58,   320,    79,   199,   193,    58,    37,    73,
     288,    76,    97,   228,    32,    33,   201,    46,    85,    48,
     333,   123,   124,   234,   201,    35,   189,   199,   191,    98,
     395,   326,    59,   163,   166,    38,    36,    59,   330,   289,
      90,   115,   116,    90,    47,   171,   201,   272,   199,   235,
     199,   363,    49,   155,   156,   390,   281,   125,   340,   232,
     263,   321,    39,   237,   291,    60,    63,   201,   164,   201,
      60,    40,   103,   241,   322,   283,   360,   285,   179,   165,
     184,   103,   227,   292,    13,    41,     9,   192,   189,   199,
     197,   126,   178,   350,   122,   101,   102,    77,   158,    52,
      66,   200,   309,   162,   286,   127,   287,    53,   201,   161,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   128,   129,   180,   273,   181,
     254,   123,   124,   130,   122,   101,   102,    77,   104,   255,
     129,   336,   337,   210,   386,   251,    42,   104,    55,    68,
      67,   122,   101,   102,    77,   106,    70,   122,   101,   102,
      77,   308,   210,    69,   265,   334,   224,   125,   225,   397,
     373,   123,   124,   175,   315,   316,   317,   199,    77,    79,
     339,     9,   103,   266,   266,   197,    82,   225,   357,   124,
     267,   335,    74,    86,   187,   124,   201,   167,   210,   248,
     168,   126,   249,   312,    81,    87,   313,   125,   369,   370,
     371,   324,    89,    93,   325,   127,   106,   327,   221,   222,
     223,   224,   103,   225,   125,   338,    95,   184,   100,   367,
     125,   199,   168,   112,   114,   128,   129,   204,   117,   103,
     119,   126,   120,   130,   151,   103,   154,   359,   104,   392,
     201,   368,   157,     1,   197,   127,   384,   388,   188,   389,
     197,     2,   168,    63,   188,   101,   205,   169,     3,   176,
     341,   399,   127,     4,   197,   128,   129,   406,   127,   409,
       5,     6,   408,   130,    92,   249,   182,    92,   104,   183,
       7,     8,   128,   129,   190,   197,     9,   194,   128,   129,
     130,    10,   226,   342,   229,   104,   130,   343,   233,   206,
     238,   104,   239,   344,   345,   385,   199,   199,   240,   372,
     391,   242,   243,   247,   246,    11,   250,   346,     9,   268,
     207,  -222,   347,   205,   271,   201,   201,   284,   208,   209,
      12,   290,   341,   311,   328,   210,   211,   331,   318,   288,
     332,   354,   349,   212,   213,   214,   215,   216,   199,   358,
     217,   218,   225,   219,   220,   221,   222,   223,   224,   362,
     225,   361,   374,   376,   375,   342,   206,   377,   378,   343,
     379,   380,   341,   382,   387,   344,   345,   396,   383,   398,
     356,   405,   181,   412,    57,   205,    88,   269,    13,   346,
    -196,   364,    72,  -222,   347,   366,   209,   365,    84,   172,
     310,    96,   210,   211,    64,   342,   411,   314,   264,   343,
     212,   213,   214,   215,   216,   344,   345,   217,   218,   400,
     219,   220,   221,   222,   223,   224,   205,   225,   206,   346,
     282,   394,   252,   393,   347,   256,   257,   258,   259,   260,
     261,   202,   402,     0,     0,     0,     0,     0,     0,   269,
       0,     0,     0,     0,     0,     0,   205,     0,   209,     0,
       0,     0,  -197,     0,   210,   211,     0,   401,     0,  -223,
       0,     0,   212,   213,   214,   215,   216,     0,     0,   217,
     218,     0,   219,   220,   221,   222,   223,   224,     0,   225,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,     0,     0,     0,   210,  -223,     0,     0,     0,
       0,     0,     0,  -223,  -223,  -223,   215,   216,     0,     0,
     217,   218,     0,   219,   220,   221,   222,   223,   224,   209,
     225,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -223,  -223,     0,     0,
    -223,  -223,     0,   219,   220,   221,   222,   223,   224,     0,
     225
};

static const yytype_int16 yycheck[] =
{
      13,    95,     2,    68,   119,    82,   190,    43,    42,     3,
      10,     3,    50,     6,     3,     4,     5,     6,     3,     3,
     250,    25,    13,   117,     4,     5,     6,   103,     3,   349,
      74,   125,     9,    37,    12,   103,   130,     9,    71,    39,
      89,    41,    47,   152,    27,     3,   122,    71,    48,    19,
      96,    40,    41,    78,   122,     3,   126,   103,   128,    64,
     380,   246,    39,    97,    98,    98,     3,    39,   252,   118,
      61,    71,    72,    64,    98,   152,   122,   153,   103,   104,
     103,   311,    52,    83,    84,   153,   195,    76,   273,   158,
     184,    95,    82,   162,    91,    72,    68,   122,    91,   122,
      72,    82,    91,   168,   108,   199,   290,   201,   121,   102,
      99,    91,   156,   110,   152,    86,    50,   130,   188,   103,
     156,   110,    56,   115,     3,     4,     5,     6,    91,     0,
       3,   115,   226,    96,   204,   124,   206,   155,   122,   233,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   144,   145,   152,   152,   154,
     145,    40,    41,   152,     3,     4,     5,     6,   157,   182,
     145,   265,   266,   125,   358,   153,   114,   157,   100,   152,
     154,     3,     4,     5,     6,   250,   117,     3,     4,     5,
       6,   225,   125,    82,    80,    80,   148,    76,   150,   383,
      96,    40,    41,   318,   238,   239,   240,   103,     6,    12,
     151,    50,    91,    99,    99,   156,   117,   150,   288,    41,
     106,   106,   105,   153,    40,    41,   122,   153,   125,   153,
     156,   110,   156,   153,   112,   153,   156,    76,   332,   333,
     334,   153,    85,   102,   156,   124,   311,   247,   145,   146,
     147,   148,    91,   150,    76,   268,   116,    99,     3,   153,
      76,   103,   156,     4,   110,   144,   145,    17,    74,    91,
      81,   110,   152,   152,     3,    91,    40,   290,   157,   373,
     122,   153,   152,     7,   156,   124,   356,   153,   110,   153,
     156,    15,   156,    68,   110,     4,    46,    40,    22,     3,
      26,   153,   124,    27,   156,   144,   145,   401,   124,   403,
      34,    35,   153,   152,    61,   156,   152,    64,   157,   152,
      44,    45,   144,   145,   150,   156,    50,    82,   144,   145,
     152,    55,   133,    59,     3,   157,   152,    63,   156,    89,
      47,   157,    47,    69,    70,   358,   103,   103,    47,   106,
     106,   113,     3,    86,   115,    79,   152,    83,    50,   152,
     110,    87,    88,    46,   153,   122,   122,     3,   118,   119,
      94,   152,    26,   152,     3,   125,   126,   153,    81,    89,
      82,    61,   156,   133,   134,   135,   136,   137,   103,   152,
     140,   141,   150,   143,   144,   145,   146,   147,   148,   151,
     150,    91,   153,    87,   153,    59,    89,    69,    69,    63,
      69,    87,    26,     3,   153,    69,    70,   152,   116,   153,
     103,   152,   154,   153,    18,    46,    53,   110,   152,    83,
     156,   313,    38,    87,    88,   325,   119,   318,    47,   116,
     227,    64,   125,   126,    31,    59,   405,   233,   185,    63,
     133,   134,   135,   136,   137,    69,    70,   140,   141,    73,
     143,   144,   145,   146,   147,   148,    46,   150,    89,    83,
     197,   376,   180,   375,    88,   127,   128,   129,   130,   131,
     132,   134,   396,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,   119,    -1,
      -1,    -1,   156,    -1,   125,   126,    -1,   121,    -1,    89,
      -1,    -1,   133,   134,   135,   136,   137,    -1,    -1,   140,
     141,    -1,   143,   144,   145,   146,   147,   148,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,    -1,
     140,   141,    -1,   143,   144,   145,   146,   147,   148,   119,
     150,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,    -1,    -1,
     140,   141,    -1,   143,   144,   145,   146,   147,   148,    -1,
     150
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    15,    22,    27,    34,    35,    44,    45,    50,
      55,    79,    94,   152,   159,   160,   161,   162,   166,   168,
     169,   172,   173,   178,   180,   181,   182,   184,   187,   188,
     190,   194,    27,     3,   241,     3,     3,    71,    98,    82,
      82,    86,   114,   206,   240,   241,    71,    98,    19,    52,
     188,   190,     0,   155,   249,   100,   163,   163,     9,    39,
      72,   191,   192,    68,   191,   202,     3,   154,   152,    82,
     117,   174,   174,   241,   105,   170,   241,     6,   232,    12,
     195,   112,   117,   179,   179,   241,   153,   153,   161,    85,
     188,   189,   194,   102,   193,   116,   189,    47,    64,   207,
       3,     4,     5,    91,   157,   209,   229,   230,   231,   232,
     233,   234,     4,   167,   110,   241,   241,    74,   199,    81,
     152,   183,     3,    40,    41,    76,   110,   124,   144,   145,
     152,   196,   208,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   220,   221,   222,   223,   225,   226,   227,   228,
     229,     3,   185,   186,    40,   241,   241,   152,   202,   203,
     204,   211,   202,   232,    91,   102,   232,   153,   156,    40,
      82,   152,   183,   211,   171,   230,     3,   250,    56,   190,
     152,   154,   152,   152,    99,   211,   219,    40,   110,   212,
     150,   212,   190,   211,    82,   197,   198,   156,     3,   103,
     115,   122,   244,   245,    17,    46,    89,   110,   118,   119,
     125,   126,   133,   134,   135,   136,   137,   140,   141,   143,
     144,   145,   146,   147,   148,   150,   133,   156,   199,     3,
     164,   165,   207,   156,    78,   104,   205,   207,    47,    47,
      47,   229,   113,     3,   175,   176,   115,    86,   153,   156,
     152,   153,   195,     3,   145,   190,   127,   128,   129,   130,
     131,   132,   224,   211,   219,    80,    99,   106,   152,   110,
     208,   153,   153,   152,   235,   236,   237,   238,   239,   241,
     246,   199,   210,   211,     3,   211,   212,   212,    89,   118,
     152,    91,   110,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   232,   211,
     186,   152,   153,   156,   204,   232,   232,   232,    81,    25,
      37,    95,   108,   177,   153,   156,   187,   241,     3,   209,
     208,   153,    82,    96,    80,   106,   211,   211,   190,   151,
     187,    26,    59,    63,    69,    70,    83,    88,   247,   156,
     115,   242,   243,   244,    61,   200,   103,   212,   152,   190,
     208,    91,   151,   209,   165,   171,   176,   153,   153,   211,
     211,   211,   106,    96,   153,   153,    87,    69,    69,    69,
      87,   236,     3,   116,   212,   190,   208,   153,   153,   153,
     153,   106,   211,   243,   237,   236,   152,   208,   153,   153,
      73,   121,   250,    43,   201,   152,   211,   248,   153,   211,
       3,   228,   153
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   158,   159,   160,   160,   161,   161,   161,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   167,   168,   168,   169,   170,   171,
     172,   172,   173,   173,   173,   174,   174,   175,   175,   176,
     177,   177,   177,   177,   178,   178,   178,   179,   179,   180,
     181,   182,   182,   183,   183,   184,   185,   185,   186,   187,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   192,
     192,   192,   193,   193,   194,   195,   195,   196,   197,   197,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   205,   205,   205,   206,   206,   207,   207,   207,
     207,   207,   207,   207,   207,   208,   208,   209,   209,   210,
     211,   211,   211,   211,   211,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   213,   213,   214,   214,   214,
     214,   214,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   216,   216,   217,   217,   217,   217,   218,
     218,   218,   218,   219,   219,   220,   220,   221,   221,   221,
     221,   221,   221,   221,   222,   222,   223,   224,   224,   224,
     224,   224,   224,   225,   226,   227,   228,   228,   228,   228,
     229,   229,   229,   229,   230,   231,   231,   232,   233,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   239,   240,
     241,   241,   242,   242,   243,   243,   244,   244,   245,   245,
     246,   246,   246,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   248,   249,   249,   250,   250
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
       1,     1,     1,     0,     7,     1,     0,     1,     1,     0,
       2,     2,     0,     4,     0,     2,     0,     3,     0,     1,
       3,     2,     1,     1,     0,     2,     0,     2,     4,     2,
       2,     2,     4,     4,     0,     1,     3,     1,     3,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     2,     2,
       3,     4,     1,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     3,     3,     5,     6,     5,     6,     4,
       6,     3,     5,     4,     5,     4,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     6,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     1,     5,     1,     0,     2,     1,     1,     0,
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
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1674 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1680 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1686 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1692 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 160: /* statement_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1705 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 161: /* statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1711 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 162: /* preparable_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1717 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 163: /* opt_hints  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1730 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 164: /* hint_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1743 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 165: /* hint  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1749 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 166: /* prepare_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1755 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 167: /* prepare_target_query  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1761 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* execute_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1767 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* import_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1773 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* import_file_type  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1779 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* file_path  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1785 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* show_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1791 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* create_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1797 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* opt_not_exists  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1803 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* column_def_commalist  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1816 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* column_def  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1822 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* column_type  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1828 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* drop_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1834 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* opt_exists  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1840 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* delete_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1846 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* truncate_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1852 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* insert_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1858 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_column_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1871 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* update_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1877 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* update_clause_commalist  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1890 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* update_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1896 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* select_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1902 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_with_paren  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1908 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_paren_or_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1914 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* select_no_paren  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1920 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* select_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1926 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* opt_distinct  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1932 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* select_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1945 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_from_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1951 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* from_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1957 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_where  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1963 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_group  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 1969 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_having  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1975 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_order  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1988 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* order_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2001 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* order_desc  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2007 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* opt_order_type  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2013 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_top  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2019 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_limit  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2025 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* expr_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2038 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* literal_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2051 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* expr_alias  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2057 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2063 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* operand  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2069 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* scalar_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2075 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* unary_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2081 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* binary_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2087 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* logic_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2093 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* in_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2099 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* case_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2105 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* case_list  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2111 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* exists_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2117 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* comp_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2123 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* function_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2129 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* extract_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2135 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* datetime_field  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2141 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* array_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2147 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* array_index  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2153 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* between_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2159 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* column_name  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2165 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2171 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* string_literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2177 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* num_literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2183 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* int_literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2189 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* null_literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2195 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* param_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2201 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* table_ref  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2207 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* table_ref_atomic  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2213 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* nonjoin_table_ref_atomic  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2219 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* table_ref_commalist  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2232 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* table_ref_name  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2238 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* table_ref_name_no_alias  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2244 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* table_name  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2250 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* table_alias  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2256 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* opt_table_alias  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2262 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* alias  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2268 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* opt_alias  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2274 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* join_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2280 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* opt_join_type  */
#line 140 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2286 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* join_condition  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2292 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* ident_commalist  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2305 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 73 "bison_parser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2424 "bison_parser.cpp" /* yacc.c:1429  */
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
#line 251 "bison_parser.y" /* yacc.c:1646  */
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
#line 2629 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 272 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2640 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 278 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2651 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 287 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2660 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 291 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2669 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 295 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2677 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 302 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2683 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 303 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2689 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 304 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2695 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 305 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2701 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 306 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2707 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 307 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2713 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 308 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2719 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 309 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2725 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 310 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2731 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 319 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2737 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 320 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 2743 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 325 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2749 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 326 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2755 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 330 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2764 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 334 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2774 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 346 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2784 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 356 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2793 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 360 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2803 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 372 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2814 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 381 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kImportCSV; }
#line 2820 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 385 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2826 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 395 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2834 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 398 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2844 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 412 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 419 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2868 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 426 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2881 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 437 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 2887 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 438 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 2893 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 442 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2899 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 443 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2905 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 447 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-1].sval), (ColumnDefinition::DataType) (yyvsp[0].uval));
		}
#line 2913 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 454 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2919 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 455 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2925 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 456 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::DOUBLE; }
#line 2931 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 457 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TEXT; }
#line 2937 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 467 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2948 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 473 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2959 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 479 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2969 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 487 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 2975 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 488 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 2981 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 497 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 2992 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 506 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3002 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 519 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3014 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 526 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3026 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 537 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3032 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 538 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 3038 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 548 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3049 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 557 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3055 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 558 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3061 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 562 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3071 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 576 "bison_parser.y" /* yacc.c:1646  */
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
#line 3090 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 593 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3096 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 594 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3102 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 603 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3117 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 613 "bison_parser.y" /* yacc.c:1646  */
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
#line 3136 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 645 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3150 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 657 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3156 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 658 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3162 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 666 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3168 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 667 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 3174 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 670 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3180 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 675 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3186 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 676 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3192 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 680 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3202 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 685 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 3208 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 689 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3214 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 690 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3220 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 693 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3226 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 694 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 3232 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 698 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3238 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 699 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3244 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 703 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3250 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 707 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3256 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 708 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 3262 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 709 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3268 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 715 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3274 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 716 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3280 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 720 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3286 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 721 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3292 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 722 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3298 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 723 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3304 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 724 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr;  }
#line 3310 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 725 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3316 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 726 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3322 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 727 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3328 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 734 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3334 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 735 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3340 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 739 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3346 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 740 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3352 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 744 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3364 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 762 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3370 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 771 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3376 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 780 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3382 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 781 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3388 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 782 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3394 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 783 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3400 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 784 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3406 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 789 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3412 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 790 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3418 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 791 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3424 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 792 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3430 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 793 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3436 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 794 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3442 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 795 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3448 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 796 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3454 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 797 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3460 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 798 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3466 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 802 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3472 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 803 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3478 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 807 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3484 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 808 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3490 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 809 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3496 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 810 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3502 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 816 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3508 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 817 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3514 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 818 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3520 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 819 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3526 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 823 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3532 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 824 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3538 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 828 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3544 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 829 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3550 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 833 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3556 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 834 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3562 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 835 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3568 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 836 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3574 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 837 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3580 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 838 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3586 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 839 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3592 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 843 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3598 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 844 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3604 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 848 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3610 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 852 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3616 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 853 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3622 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 854 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3628 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 855 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3634 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 856 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3640 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 857 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3646 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 860 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3652 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 864 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3658 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 868 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3664 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 872 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3670 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 873 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 874 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3682 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 875 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3688 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 886 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3694 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 891 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3700 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 896 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3706 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 900 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3712 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 904 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3722 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 917 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 933 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3744 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 942 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3750 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 943 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3756 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 948 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3768 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 959 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3778 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 968 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 3784 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 969 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 3790 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 975 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 3796 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 981 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 3802 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 985 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3808 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 986 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3814 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 992 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 3820 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1001 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1009 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3845 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1019 "bison_parser.y" /* yacc.c:1646  */
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
#line 3865 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1037 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3871 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1038 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 3877 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1039 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 3883 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1040 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 3889 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1041 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 3895 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1042 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 3901 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1043 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 3907 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1044 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 3913 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1045 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinCross; }
#line 3919 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1046 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3925 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1066 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3931 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1067 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3937 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 3941 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 1070 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
