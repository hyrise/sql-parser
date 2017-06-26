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

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 102 "bison_parser.cpp" /* yacc.c:339  */

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
#line 34 "bison_parser.y" /* yacc.c:355  */

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
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 163 "bison_parser.cpp" /* yacc.c:355  */

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
    SQL_EQUALS = 378,
    SQL_NOTEQUALS = 379,
    SQL_LESS = 380,
    SQL_GREATER = 381,
    SQL_LESSEQ = 382,
    SQL_GREATEREQ = 383,
    SQL_NOTNULL = 384,
    SQL_UMINUS = 385
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 92 "bison_parser.y" /* yacc.c:355  */

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

#line 343 "bison_parser.cpp" /* yacc.c:355  */
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

#line 373 "bison_parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  326

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   385

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   137,     2,     2,
     142,   143,   135,   133,   146,   134,   144,   136,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   145,
     126,   123,   127,   147,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   140,     2,   141,   138,     2,     2,     2,     2,     2,
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
     115,   116,   117,   118,   119,   120,   121,   122,   124,   125,
     128,   129,   130,   131,   132,   139
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   236,   236,   257,   258,   262,   266,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   291,   292,   297,   298,
     302,   306,   318,   325,   328,   332,   344,   352,   356,   366,
     372,   378,   388,   389,   393,   394,   398,   405,   406,   407,
     408,   418,   422,   426,   438,   446,   458,   464,   474,   475,
     485,   494,   495,   499,   511,   512,   516,   517,   521,   531,
     545,   559,   560,   561,   565,   577,   578,   582,   586,   591,
     592,   596,   601,   605,   606,   609,   610,   614,   615,   619,
     623,   624,   625,   631,   632,   636,   637,   638,   645,   646,
     650,   651,   655,   662,   663,   664,   665,   666,   667,   671,
     672,   673,   674,   675,   676,   680,   681,   682,   686,   687,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   703,
     704,   708,   709,   710,   711,   716,   720,   721,   725,   726,
     727,   728,   729,   730,   734,   738,   742,   743,   747,   748,
     749,   753,   758,   759,   763,   767,   771,   783,   784,   794,
     795,   801,   806,   807,   812,   822,   830,   831,   836,   837,
     841,   842,   850,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   875,   884,   885,   890,   891
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
  "OR", "TO", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "create_statement",
  "opt_not_exists", "column_def_commalist", "column_def", "column_type",
  "drop_statement", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_with_paren", "select_no_paren", "set_operator", "select_clause",
  "opt_distinct", "select_list", "from_clause", "opt_where", "opt_group",
  "opt_having", "opt_order", "order_list", "order_desc", "opt_order_type",
  "opt_top", "opt_limit", "expr_list", "literal_list", "expr_alias",
  "expr", "operand", "scalar_expr", "unary_expr", "binary_expr",
  "logic_expr", "in_expr", "case_expr", "exists_expr", "comp_expr",
  "function_expr", "between_expr", "column_name", "literal",
  "string_literal", "num_literal", "int_literal", "star_expr",
  "param_expr", "table_ref", "table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name", "alias",
  "opt_alias", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
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
     375,   376,   377,    61,   378,   379,    60,    62,   380,   381,
     382,   383,   384,    43,    45,    42,    47,    37,    94,   385,
      91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -227

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-227)))

#define YYTABLE_NINF -172

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-172)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     137,    -1,    33,    48,    68,    -6,     2,     6,   -10,   -16,
      33,    66,   -21,    92,   -20,  -227,    41,    41,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,    29,
     131,     3,  -227,     9,    95,    74,    74,    33,    78,    33,
     186,   184,    86,  -227,    33,    33,    56,    63,  -227,   137,
    -227,   128,  -227,  -227,  -227,  -227,    99,  -227,   -21,   144,
    -227,   217,    19,   224,   133,    33,    33,   157,  -227,   171,
     114,  -227,  -227,  -227,    53,   254,  -227,  -227,  -227,  -227,
    -227,   116,    53,   203,   203,   186,  -227,  -227,  -227,  -227,
    -227,   -96,  -227,  -227,  -227,  -227,  -227,  -227,  -227,   232,
     -72,   114,    53,  -227,   269,   272,    -9,  -101,   134,   182,
      76,     8,  -227,    14,   200,   139,  -227,    12,   110,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,   164,   -51,  -227,   283,   142,  -227,   101,   144,
     144,   243,  -227,    19,  -227,   178,   288,   179,   -60,   207,
    -227,  -227,    -8,   152,  -227,   184,   292,   248,    53,   162,
       8,   247,    32,   156,   -69,     4,   157,    53,  -227,    53,
     304,    53,  -227,  -227,     8,     8,   -57,   172,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
      19,   254,  -227,   173,    70,  -227,    53,  -227,  -227,  -227,
    -227,  -227,   186,  -227,   238,    30,    83,  -227,   -21,    33,
    -227,   319,    19,    53,  -227,   180,    58,   248,   246,  -227,
    -227,   -21,  -227,   115,  -227,     5,  -227,   266,  -227,  -227,
    -227,   234,   194,   264,     8,   198,    14,   264,   264,   212,
     212,   212,   212,    32,    32,   206,   206,   206,  -227,  -227,
    -227,    19,  -227,   283,  -227,  -227,   269,  -227,  -227,  -227,
    -227,  -227,  -227,   288,  -227,  -227,  -227,   109,   119,  -227,
       8,   214,   225,  -227,  -227,  -227,  -227,   273,   299,     4,
     274,  -227,   256,  -227,     8,   264,    14,   226,   121,   123,
    -227,  -227,  -227,  -227,  -227,   175,  -227,     5,  -227,  -227,
     191,   229,     4,    53,   247,   233,   125,  -227,  -227,  -227,
       8,  -227,     4,   163,   -26,  -227,  -227,   228,   191,    53,
      53,  -227,  -227,   -60,  -227,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,   174,     3,    17,    17,    15,     8,
       9,    14,    11,    12,    10,    13,     7,    54,    55,    76,
       0,   156,    45,    24,     0,    33,    33,     0,     0,     0,
       0,    66,     0,   155,     0,     0,     0,     0,     1,   173,
       2,     0,     6,     5,    62,    63,     0,    61,     0,    87,
      43,     0,     0,     0,     0,     0,     0,    70,    27,     0,
      49,   144,    83,    65,     0,     0,    41,    42,    57,    56,
       4,     0,     0,    76,    76,     0,    58,   157,   141,   142,
     146,     0,    90,   138,   139,   143,   140,    23,    22,     0,
       0,    49,     0,    44,     0,     0,     0,   136,     0,     0,
       0,     0,   145,     0,     0,    67,    88,   161,    93,   100,
     101,   102,    95,    98,    97,    96,   110,   103,    94,   105,
     107,   106,     0,    70,    51,     0,    75,    77,    82,    87,
      87,    85,    25,     0,    32,     0,     0,     0,    69,     0,
      28,   175,     0,     0,    47,    66,     0,     0,     0,     0,
       0,   109,   108,     0,     0,     0,    70,     0,   159,     0,
       0,     0,   160,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    20,     0,    18,     0,    81,    80,    79,
      60,    59,     0,    91,     0,     0,     0,    34,     0,     0,
      48,     0,     0,     0,   137,     0,     0,     0,     0,   104,
      99,     0,    68,   147,   149,   161,   151,    72,    89,   119,
     158,   120,     0,   117,     0,     0,     0,   128,   129,   130,
     131,   132,   133,   112,   111,   114,   113,   115,   116,    53,
      52,     0,    16,     0,    78,    86,     0,    38,    39,    40,
      37,    36,    30,     0,    31,    26,   176,     0,     0,   126,
       0,     0,     0,   170,   169,   163,   164,   168,   167,     0,
       0,   154,     0,    64,     0,   118,     0,     0,     0,     0,
      19,    29,    35,    46,   134,     0,   127,   161,   166,   165,
     152,   148,     0,     0,   135,     0,     0,   123,   121,    21,
       0,   150,     0,   171,    74,   124,   122,     0,   153,     0,
       0,    71,   125,   172,   162,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,  -227,  -227,   330,  -227,   369,  -227,   135,  -227,  -227,
    -227,  -227,  -227,   136,  -227,   357,  -227,   140,  -227,  -227,
    -227,  -227,  -227,   295,  -227,  -227,   213,   -90,    15,   -12,
    -227,   347,   251,  -227,  -227,  -104,  -227,  -227,    46,  -227,
     211,  -227,  -227,    35,  -164,  -182,   241,   -81,   -76,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
     -58,   -99,  -227,   -37,  -227,  -227,  -227,  -226,  -227,  -227,
    -227,     0,  -227,  -219,  -227,  -227,  -227,  -227,  -227
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    52,   194,   195,    17,    98,
      18,    19,    69,   149,    20,    65,   206,   207,   261,    21,
      22,    23,    24,   106,    25,   133,   134,    26,    27,    28,
      58,    29,    74,   114,   166,   103,   283,   321,    59,   136,
     137,   199,    41,    86,   115,    91,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    93,    94,    95,   131,    96,   222,   223,   301,   224,
      42,   225,   172,   173,   226,   280,   324,    50,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   138,    32,    72,    92,   150,   281,    31,   168,   145,
      43,   107,    88,    89,    71,   168,   320,   107,    88,    89,
      71,   148,   102,    88,    89,    71,    30,    46,     9,   192,
     267,   234,   164,   169,   161,   162,    31,    67,    54,    70,
       9,   155,   169,   156,    76,    77,   153,   142,   141,   268,
     143,    33,   171,   300,   108,   257,   107,    88,    89,    71,
     235,   171,   227,     9,    35,   100,   101,   258,    55,   289,
     146,    34,   288,    83,   220,    39,   313,   216,   311,   107,
      88,    89,    71,    37,   161,   203,   318,    38,   229,   109,
     231,    36,    48,   108,   154,   191,    56,    40,   232,   233,
      57,   163,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   169,   138,   159,   160,   264,   170,
     167,    12,   306,   110,   259,    49,   170,   174,   109,   139,
     140,   272,   249,   171,    60,   210,    44,   260,   211,   314,
      51,   273,   111,   112,     1,   215,   221,    61,   111,   112,
     113,    62,     2,   270,    92,    90,   113,   150,   285,     3,
     169,    90,   110,    45,     4,   255,    90,   186,   187,   188,
     189,     5,     6,   274,   200,   201,    63,   275,   197,   171,
       7,     8,    68,   276,   277,   160,     9,   111,   112,   273,
      64,    10,    71,    92,   295,   113,    73,    75,   175,    78,
      90,  -171,   278,   169,   198,   271,    79,    85,   304,   265,
     111,   112,    81,   252,    82,    11,   253,   273,   113,   176,
      87,   274,   171,    90,   287,   275,   262,   177,    97,   263,
     102,   276,   277,   178,   317,   179,   180,   181,   323,   325,
     182,   183,    99,   184,   185,   186,   187,   188,   189,   274,
     278,   104,   293,   275,   310,   143,   105,   132,   135,   276,
     277,   279,   294,   175,   308,   167,   309,   167,   316,   143,
      56,   167,   144,    88,   305,   151,   157,  -171,   278,    12,
     158,   165,   175,   319,   218,   167,   193,   190,   196,   202,
     204,   205,   209,   208,   212,   214,   284,     9,   178,   219,
     179,   180,   181,   218,   217,   182,   183,   230,   184,   185,
     186,   187,   188,   189,   236,   251,   175,   178,   256,   179,
     180,   181,   266,   269,   182,   183,   282,   184,   185,   186,
     187,   188,   189,   322,   234,   175,   169,   218,  -172,  -172,
     286,   298,  -172,  -172,   189,   184,   185,   186,   187,   188,
     189,   178,   175,   179,   180,   181,   218,   296,   182,   183,
     302,   184,   185,   186,   187,   188,   189,   299,   297,   307,
     178,   303,   179,   180,   181,   312,   315,   182,   183,    80,
     184,   185,   186,   187,   188,   189,    53,   178,   290,   179,
     180,   181,   291,    66,   182,   183,   147,   184,   185,   186,
     187,   188,   189,   292,   250,    84,   213,   254,   228
};

static const yytype_uint16 yycheck[] =
{
      12,    82,     2,    40,    62,   104,   225,     3,     3,    81,
      10,     3,     4,     5,     6,     3,    42,     3,     4,     5,
       6,   102,    73,     4,     5,     6,    27,    12,    49,   133,
     212,    88,   113,   102,   110,   111,     3,    37,     9,    39,
      49,   142,   102,   144,    44,    45,    55,   143,    85,   213,
     146,     3,   121,   279,    40,    25,     3,     4,     5,     6,
     117,   121,   166,    49,    70,    65,    66,    37,    39,   251,
     142,     3,   236,    58,   143,    85,   302,   158,   297,     3,
       4,     5,     6,    81,   160,   143,   312,    81,   169,    75,
     171,    97,     0,    40,   106,   146,    67,   113,   174,   175,
      71,   113,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   102,   196,    40,   109,   208,   114,
     146,   142,   286,   109,    94,   145,   114,    17,    75,    83,
      84,   221,   190,   121,     3,   143,    70,   107,   146,   303,
      99,    26,   134,   135,     7,   157,   142,   144,   134,   135,
     142,   142,    15,    95,   212,   147,   142,   256,   234,    22,
     102,   147,   109,    97,    27,   202,   147,   135,   136,   137,
     138,    34,    35,    58,   139,   140,    81,    62,    77,   121,
      43,    44,   104,    68,    69,   109,    49,   134,   135,    26,
     116,    54,     6,   251,   270,   142,    12,   111,    88,   143,
     147,    86,    87,   102,   103,   217,   143,    63,   284,   209,
     134,   135,    84,   143,   115,    78,   146,    26,   142,   109,
       3,    58,   121,   147,   236,    62,   143,   117,     4,   146,
      73,    68,    69,   123,   310,   125,   126,   127,   319,   320,
     130,   131,   109,   133,   134,   135,   136,   137,   138,    58,
      87,    80,   143,    62,    79,   146,   142,     3,   142,    68,
      69,   146,   143,    88,   143,   146,   143,   146,   143,   146,
      67,   146,    40,     4,   286,     3,   142,    86,    87,   142,
      98,    81,    88,   120,   109,   146,     3,   123,   146,    46,
     112,     3,    85,   114,   142,     3,   102,    49,   123,   143,
     125,   126,   127,   109,   142,   130,   131,     3,   133,   134,
     135,   136,   137,   138,   142,   142,    88,   123,    80,   125,
     126,   127,     3,   143,   130,   131,    60,   133,   134,   135,
     136,   137,   138,   105,    88,    88,   102,   109,   126,   127,
     142,    68,   130,   131,   138,   133,   134,   135,   136,   137,
     138,   123,    88,   125,   126,   127,   109,   143,   130,   131,
      86,   133,   134,   135,   136,   137,   138,    68,   143,   143,
     123,   115,   125,   126,   127,   146,   143,   130,   131,    49,
     133,   134,   135,   136,   137,   138,    17,   123,   253,   125,
     126,   127,   256,    36,   130,   131,   101,   133,   134,   135,
     136,   137,   138,   263,   191,    58,   155,   196,   167
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    15,    22,    27,    34,    35,    43,    44,    49,
      54,    78,   142,   149,   150,   151,   152,   156,   158,   159,
     162,   167,   168,   169,   170,   172,   175,   176,   177,   179,
      27,     3,   219,     3,     3,    70,    97,    81,    81,    85,
     113,   190,   218,   219,    70,    97,   176,   177,     0,   145,
     225,    99,   153,   153,     9,    39,    67,    71,   178,   186,
       3,   144,   142,    81,   116,   163,   163,   219,   104,   160,
     219,     6,   211,    12,   180,   111,   219,   219,   143,   143,
     151,    84,   115,   176,   179,    63,   191,     3,     4,     5,
     147,   193,   208,   209,   210,   211,   213,     4,   157,   109,
     219,   219,    73,   183,    80,   142,   171,     3,    40,    75,
     109,   134,   135,   142,   181,   192,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   212,     3,   173,   174,   142,   187,   188,   195,   186,
     186,   211,   143,   146,    40,    81,   142,   171,   195,   161,
     209,     3,   226,    55,   177,   142,   144,   142,    98,    40,
     109,   196,   196,   177,   195,    81,   182,   146,     3,   102,
     114,   121,   220,   221,    17,    88,   109,   117,   123,   125,
     126,   127,   130,   131,   133,   134,   135,   136,   137,   138,
     123,   146,   183,     3,   154,   155,   146,    77,   103,   189,
     191,   191,    46,   208,   112,     3,   164,   165,   114,    85,
     143,   146,   142,   180,     3,   177,   195,   142,   109,   143,
     143,   142,   214,   215,   217,   219,   222,   183,   194,   195,
       3,   195,   196,   196,    88,   117,   142,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   208,
     174,   142,   143,   146,   188,   211,    80,    25,    37,    94,
     107,   166,   143,   146,   175,   219,     3,   193,   192,   143,
      95,   177,   175,    26,    58,    62,    68,    69,    87,   146,
     223,   221,    60,   184,   102,   196,   142,   177,   192,   193,
     155,   161,   165,   143,   143,   196,   143,   143,    68,    68,
     215,   216,    86,   115,   196,   177,   192,   143,   143,   143,
      79,   221,   146,   215,   192,   143,   143,   196,   215,   120,
      42,   185,   105,   195,   224,   195
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   148,   149,   150,   150,   151,   151,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   157,   158,   158,   159,   160,   161,   162,
     162,   162,   163,   163,   164,   164,   165,   166,   166,   166,
     166,   167,   167,   167,   168,   169,   170,   170,   171,   171,
     172,   173,   173,   174,   175,   175,   176,   176,   177,   177,
     177,   178,   178,   178,   179,   180,   180,   181,   182,   183,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     189,   189,   189,   190,   190,   191,   191,   191,   192,   192,
     193,   193,   194,   195,   195,   195,   195,   195,   195,   196,
     196,   196,   196,   196,   196,   197,   197,   197,   198,   198,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   200,
     200,   201,   201,   201,   201,   202,   203,   203,   204,   204,
     204,   204,   204,   204,   205,   206,   207,   207,   208,   208,
     208,   209,   210,   210,   211,   212,   213,   214,   214,   215,
     215,   215,   216,   216,   217,   218,   219,   219,   220,   220,
     221,   221,   222,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   224,   225,   225,   226,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     3,
       1,     4,     4,     1,     2,     5,     7,     1,     1,     8,
       7,     7,     3,     0,     1,     3,     2,     1,     1,     1,
       1,     3,     3,     3,     4,     2,     8,     5,     3,     0,
       5,     1,     3,     3,     1,     1,     3,     3,     3,     5,
       5,     1,     1,     1,     7,     1,     0,     1,     2,     2,
       0,     4,     0,     2,     0,     3,     0,     1,     3,     2,
       1,     1,     0,     2,     0,     2,     4,     0,     1,     3,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     5,     6,     5,     6,     8,     4,     5,     3,     3,
       3,     3,     3,     3,     5,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     1,     1,     3,     2,     1,     1,     3,     2,     1,
       1,     0,     6,     1,     1,     2,     2,     1,     1,     1,
       1,     0,     1,     1,     0,     1,     3
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
#line 134 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1565 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 134 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1571 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 133 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1577 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 133 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1583 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 150: /* statement_list  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1596 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 151: /* statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1602 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 152: /* preparable_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1608 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 153: /* opt_hints  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1621 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 154: /* hint_list  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1634 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 155: /* hint  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1640 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 156: /* prepare_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1646 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 157: /* prepare_target_query  */
#line 134 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1652 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 158: /* execute_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1658 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 159: /* import_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1664 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 160: /* import_file_type  */
#line 133 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1670 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 161: /* file_path  */
#line 134 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1676 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 162: /* create_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1682 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 163: /* opt_not_exists  */
#line 133 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1688 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 164: /* column_def_commalist  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1701 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 165: /* column_def  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1707 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 166: /* column_type  */
#line 133 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1713 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 167: /* drop_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1719 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* delete_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1725 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* truncate_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1731 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* insert_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1737 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* opt_column_list  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1750 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* update_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1756 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* update_clause_commalist  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1769 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* update_clause  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1775 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* select_statement  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1781 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* select_with_paren  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1787 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* select_no_paren  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1793 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* select_clause  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1799 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* opt_distinct  */
#line 133 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1805 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* select_list  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* from_clause  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_where  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1830 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* opt_group  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 1836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_having  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_order  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1855 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* order_list  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1868 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* order_desc  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 1874 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_order_type  */
#line 133 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1880 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_top  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 1886 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_limit  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 1892 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* expr_list  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1905 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* literal_list  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1918 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* expr_alias  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1924 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1930 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* operand  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1936 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* scalar_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1942 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* unary_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1948 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* binary_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1954 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* logic_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1960 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* in_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1966 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* case_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1972 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* exists_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1978 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* comp_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1984 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* function_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1990 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* between_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1996 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* column_name  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2002 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* literal  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2008 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* string_literal  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2014 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* num_literal  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2020 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* int_literal  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2026 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* star_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2032 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* param_expr  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2038 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* table_ref  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2044 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* table_ref_atomic  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2050 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* table_ref_commalist  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2063 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* table_ref_name  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2069 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* table_ref_name_no_alias  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2075 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* table_name  */
#line 134 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2081 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* alias  */
#line 134 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2087 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_alias  */
#line 134 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2093 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* join_clause  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2099 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* opt_join_type  */
#line 133 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2105 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* join_condition  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2111 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* ident_commalist  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2124 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 71 "bison_parser.y" /* yacc.c:1436  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
}

#line 2242 "bison_parser.cpp" /* yacc.c:1436  */
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
#line 236 "bison_parser.y" /* yacc.c:1661  */
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
#line 2447 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 257 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.stmt_vec) = new std::vector<SQLStatement*>(); (yyval.stmt_vec)->push_back((yyvsp[0].statement)); }
#line 2453 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 258 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement)); (yyval.stmt_vec) = (yyvsp[-2].stmt_vec); }
#line 2459 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 262 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2468 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 266 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2477 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 274 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2483 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 275 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2489 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 276 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2495 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 277 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2501 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 278 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2507 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 279 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2513 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 13:
#line 280 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2519 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 281 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2525 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 282 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2531 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 291 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2537 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 292 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = nullptr; }
#line 2543 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 297 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2549 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 298 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2555 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 302 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2564 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 306 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2574 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 318 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2584 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 328 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2593 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 332 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2603 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 344 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->tableName = (yyvsp[0].sval);
		}
#line 2613 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 352 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kImportCSV; }
#line 2619 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 356 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2625 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 366 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-4].sval);
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2636 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 372 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].sval);
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2647 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 378 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].sval);
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2659 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 388 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = true; }
#line 2665 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 389 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = false; }
#line 2671 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 393 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2677 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 394 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2683 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 398 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-1].sval), (ColumnDefinition::DataType) (yyvsp[0].uval));
		}
#line 2691 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 405 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2697 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 406 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2703 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 407 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = ColumnDefinition::DOUBLE; }
#line 2709 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 408 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = ColumnDefinition::TEXT; }
#line 2715 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 418 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2724 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 422 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2733 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 426 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2742 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 438 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->tableName = (yyvsp[-1].sval);
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 2752 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 446 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->tableName = (yyvsp[0].sval);
		}
#line 2761 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 458 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->tableName = (yyvsp[-5].sval);
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 2772 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 464 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->tableName = (yyvsp[-2].sval);
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2783 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 474 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 2789 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 475 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.str_vec) = nullptr; }
#line 2795 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 485 "bison_parser.y" /* yacc.c:1661  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 2806 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 494 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 2812 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 495 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 2818 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 499 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 2828 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 516 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 2834 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 517 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 2840 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 521 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 2855 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 531 "bison_parser.y" /* yacc.c:1661  */
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
#line 2874 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 545 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 2890 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 565 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 2904 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 577 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = true; }
#line 2910 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 578 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.bval) = false; }
#line 2916 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 586 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.table) = (yyvsp[0].table); }
#line 2922 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 591 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2928 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 592 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = nullptr; }
#line 2934 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 596 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 2944 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 601 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.group_t) = nullptr; }
#line 2950 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 605 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2956 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 606 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = nullptr; }
#line 2962 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 609 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 2968 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 610 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_vec) = nullptr; }
#line 2974 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 614 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 2980 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 615 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 2986 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 619 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 2992 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 623 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_type) = kOrderAsc; }
#line 2998 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 624 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_type) = kOrderDesc; }
#line 3004 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 625 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.order_type) = kOrderAsc; }
#line 3010 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 631 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3016 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 632 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = nullptr; }
#line 3022 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 636 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3028 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 637 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3034 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 638 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.limit) = nullptr; }
#line 3040 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 645 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3046 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 646 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3052 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 650 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3058 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 651 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3064 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 655 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			(yyval.expr)->alias = (yyvsp[0].sval);
		}
#line 3073 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 671 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3079 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 676 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3085 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 686 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3091 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 687 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3097 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 692 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3103 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 693 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3109 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 694 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3115 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 695 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3121 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 696 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3127 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 697 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3133 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 117:
#line 698 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3139 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 699 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3145 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 703 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3151 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 704 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3157 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 708 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3163 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 709 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3169 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 710 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3175 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 124:
#line 711 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3181 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 125:
#line 716 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3187 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 126:
#line 720 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3193 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 721 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3199 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 725 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3205 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 726 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3211 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 727 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3217 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 728 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3223 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 729 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3229 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 730 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3235 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 734 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3241 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 738 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3247 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 742 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3253 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 743 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3259 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 753 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3265 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 142:
#line 758 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3271 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 144:
#line 763 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3277 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 767 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.expr) = Expr::make(kExprStar); }
#line 3283 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 771 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3293 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 784 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyvsp[0].table_vec)->push_back((yyvsp[-2].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[0].table_vec);
			(yyval.table) = tbl;
		}
#line 3304 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 795 "bison_parser.y" /* yacc.c:1661  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3315 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 806 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3321 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 153:
#line 807 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3327 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 812 "bison_parser.y" /* yacc.c:1661  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->name = (yyvsp[-1].sval);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3338 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 822 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->name = (yyvsp[0].sval);
		}
#line 3347 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 157:
#line 831 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3353 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 836 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3359 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 842 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.sval) = nullptr; }
#line 3365 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 851 "bison_parser.y" /* yacc.c:1661  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3378 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 862 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinInner; }
#line 3384 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 164:
#line 863 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinOuter; }
#line 3390 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 864 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinLeftOuter; }
#line 3396 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 865 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinRightOuter; }
#line 3402 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 866 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinLeft; }
#line 3408 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 867 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinRight; }
#line 3414 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 868 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinCross; }
#line 3420 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 869 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinNatural; }
#line 3426 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 870 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.uval) = kJoinInner; }
#line 3432 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 890 "bison_parser.y" /* yacc.c:1661  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3438 "bison_parser.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 891 "bison_parser.y" /* yacc.c:1661  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3444 "bison_parser.cpp" /* yacc.c:1661  */
    break;


#line 3448 "bison_parser.cpp" /* yacc.c:1661  */
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
#line 894 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

