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

int yyerror(YYLTYPE* llocp, SQLParserResult** result, yyscan_t scanner, const char *msg) {
	delete *result;

	SQLParserResult* list = new SQLParserResult();
	list->setIsValid(false);
	list->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);

	*result = list;
	return 0;
}




#line 109 "bison_parser.cpp" /* yacc.c:339  */

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
#line 41 "bison_parser.y" /* yacc.c:355  */

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

#line 170 "bison_parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_NOTEQUALS = 262,
    SQL_LESSEQ = 263,
    SQL_GREATEREQ = 264,
    SQL_DEALLOCATE = 265,
    SQL_PARAMETERS = 266,
    SQL_INTERSECT = 267,
    SQL_TEMPORARY = 268,
    SQL_TIMESTAMP = 269,
    SQL_DISTINCT = 270,
    SQL_NVARCHAR = 271,
    SQL_RESTRICT = 272,
    SQL_TRUNCATE = 273,
    SQL_ANALYZE = 274,
    SQL_BETWEEN = 275,
    SQL_CASCADE = 276,
    SQL_COLUMNS = 277,
    SQL_CONTROL = 278,
    SQL_DEFAULT = 279,
    SQL_EXECUTE = 280,
    SQL_EXPLAIN = 281,
    SQL_HISTORY = 282,
    SQL_INTEGER = 283,
    SQL_NATURAL = 284,
    SQL_PREPARE = 285,
    SQL_PRIMARY = 286,
    SQL_SCHEMAS = 287,
    SQL_SPATIAL = 288,
    SQL_VIRTUAL = 289,
    SQL_BEFORE = 290,
    SQL_COLUMN = 291,
    SQL_CREATE = 292,
    SQL_DELETE = 293,
    SQL_DIRECT = 294,
    SQL_DOUBLE = 295,
    SQL_ESCAPE = 296,
    SQL_EXCEPT = 297,
    SQL_EXISTS = 298,
    SQL_GLOBAL = 299,
    SQL_HAVING = 300,
    SQL_IMPORT = 301,
    SQL_INSERT = 302,
    SQL_ISNULL = 303,
    SQL_OFFSET = 304,
    SQL_RENAME = 305,
    SQL_SCHEMA = 306,
    SQL_SELECT = 307,
    SQL_SORTED = 308,
    SQL_TABLES = 309,
    SQL_UNIQUE = 310,
    SQL_UNLOAD = 311,
    SQL_UPDATE = 312,
    SQL_VALUES = 313,
    SQL_AFTER = 314,
    SQL_ALTER = 315,
    SQL_CROSS = 316,
    SQL_DELTA = 317,
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
    SQL_DATE = 334,
    SQL_DESC = 335,
    SQL_DROP = 336,
    SQL_ELSE = 337,
    SQL_FILE = 338,
    SQL_FROM = 339,
    SQL_FULL = 340,
    SQL_HASH = 341,
    SQL_HINT = 342,
    SQL_INTO = 343,
    SQL_JOIN = 344,
    SQL_LEFT = 345,
    SQL_LIKE = 346,
    SQL_LOAD = 347,
    SQL_NULL = 348,
    SQL_PART = 349,
    SQL_PLAN = 350,
    SQL_SHOW = 351,
    SQL_TEXT = 352,
    SQL_THEN = 353,
    SQL_TIME = 354,
    SQL_VIEW = 355,
    SQL_WHEN = 356,
    SQL_WITH = 357,
    SQL_ADD = 358,
    SQL_ALL = 359,
    SQL_AND = 360,
    SQL_ASC = 361,
    SQL_CSV = 362,
    SQL_END = 363,
    SQL_FOR = 364,
    SQL_INT = 365,
    SQL_KEY = 366,
    SQL_NOT = 367,
    SQL_OFF = 368,
    SQL_SET = 369,
    SQL_TBL = 370,
    SQL_TOP = 371,
    SQL_AS = 372,
    SQL_BY = 373,
    SQL_IF = 374,
    SQL_IN = 375,
    SQL_IS = 376,
    SQL_OF = 377,
    SQL_ON = 378,
    SQL_OR = 379,
    SQL_TO = 380,
    SQL_EQUALS = 381,
    SQL_LESS = 382,
    SQL_GREATER = 383,
    SQL_NOTNULL = 384,
    SQL_UMINUS = 385
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 100 "bison_parser.y" /* yacc.c:355  */

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

	hsql::SQLParserResult* stmt_list;

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



int hsql_parse (hsql::SQLParserResult** result, yyscan_t scanner);

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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  151
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

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
     142,   143,   135,   133,   149,   134,   144,   136,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   146,   145,
     128,   126,   129,   150,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   140,     2,   141,   138,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   147,     2,   148,     2,     2,     2,     2,
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
     125,   127,   130,   131,   132,   139
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   245,   245,   252,   253,   257,   262,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   283,   288,   296,   300,
     312,   320,   324,   334,   340,   346,   356,   357,   361,   362,
     366,   373,   374,   375,   376,   386,   390,   394,   406,   414,
     426,   432,   442,   443,   453,   462,   463,   467,   479,   480,
     484,   485,   489,   499,   513,   527,   528,   529,   533,   545,
     546,   550,   554,   559,   560,   564,   569,   573,   574,   577,
     578,   582,   583,   587,   591,   592,   593,   599,   600,   604,
     605,   606,   613,   614,   618,   619,   623,   630,   631,   632,
     633,   634,   635,   639,   640,   641,   642,   643,   644,   648,
     649,   650,   654,   655,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   671,   672,   676,   677,   678,   679,   684,
     688,   689,   693,   694,   695,   696,   697,   698,   702,   706,
     710,   711,   715,   716,   717,   721,   726,   727,   731,   735,
     739,   750,   751,   761,   762,   768,   773,   774,   779,   789,
     797,   798,   803,   804,   808,   809,   817,   829,   830,   831,
     832,   833,   834,   835,   836,   837,   843,   849,   853,   862,
     863,   868,   869
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "NOTEQUALS", "LESSEQ", "GREATEREQ", "DEALLOCATE", "PARAMETERS",
  "INTERSECT", "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR",
  "RESTRICT", "TRUNCATE", "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS",
  "CONTROL", "DEFAULT", "EXECUTE", "EXPLAIN", "HISTORY", "INTEGER",
  "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS", "SPATIAL", "VIRTUAL",
  "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE",
  "EXCEPT", "EXISTS", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL",
  "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE",
  "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA",
  "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER",
  "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE",
  "DATE", "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT",
  "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "NULL", "PART", "PLAN", "SHOW",
  "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND",
  "ASC", "CSV", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL",
  "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "'='",
  "EQUALS", "'<'", "'>'", "LESS", "GREATER", "NOTNULL", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'",
  "';'", "':'", "'{'", "'}'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement",
  "prepare_statement", "execute_statement", "import_statement",
  "import_file_type", "file_path", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type", "drop_statement",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_with_paren",
  "select_no_paren", "set_operator", "select_clause", "opt_distinct",
  "select_list", "from_clause", "opt_where", "opt_group", "opt_having",
  "opt_order", "order_list", "order_desc", "opt_order_type", "opt_top",
  "opt_limit", "expr_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "exists_expr", "comp_expr", "function_expr",
  "between_expr", "column_name", "literal", "string_literal",
  "num_literal", "int_literal", "star_expr", "placeholder_expr",
  "table_ref", "table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "alias", "opt_alias",
  "join_clause", "opt_join_type", "join_table", "join_condition",
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
     375,   376,   377,   378,   379,   380,    61,   381,    60,    62,
     382,   383,   384,    43,    45,    42,    47,    37,    94,   385,
      91,    93,    40,    41,    46,    59,    58,   123,   125,    44,
      63
};
# endif

#define YYPACT_NINF -248

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-248)))

#define YYTABLE_NINF -168

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-168)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     169,     1,    53,    68,    91,   -57,    19,    45,    38,    15,
      53,    37,   -37,   118,    -7,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,    66,
     140,    32,  -248,     5,    43,    27,    27,    53,    50,    53,
     146,   154,    72,  -248,    53,    53,    52,    59,  -248,   169,
    -248,  -248,  -248,    99,  -248,   -37,   156,  -248,   216,    13,
     202,   169,   116,    53,    53,   161,  -248,   158,   102,  -248,
    -248,  -248,    46,   242,  -248,  -248,  -248,  -248,  -248,    46,
     177,   177,   146,  -248,  -248,  -248,  -248,  -248,   -29,  -248,
    -248,  -248,  -248,  -248,  -248,    -7,   215,   -50,   102,    46,
    -248,   256,   258,    55,  -104,   120,   162,    63,    20,  -248,
      96,   185,   119,  -248,     4,   164,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,   144,
     -54,  -248,   122,  -248,   105,   156,   156,   224,  -248,    13,
     126,  -248,   163,   274,   168,   -69,   191,  -248,  -248,   -26,
     145,  -248,   154,   283,   236,    46,   149,    20,   257,    30,
     160,     6,     2,   161,    46,  -248,    46,   302,    46,  -248,
    -248,    20,    20,    20,    20,    20,   -61,   167,    20,    20,
      20,    20,    20,    20,    20,    20,    20,    13,   242,  -248,
      46,  -248,  -248,  -248,  -248,  -248,   146,  -248,  -248,   223,
      25,   -16,  -248,   -37,    53,  -248,   320,    13,    46,  -248,
     181,   -63,   236,   234,  -248,  -248,   -37,  -248,   178,   153,
       8,  -248,   367,   263,  -248,  -248,  -248,   226,   273,   286,
     286,   184,   273,    20,   186,    96,   273,   286,   286,    30,
      30,   192,   192,   192,  -248,  -248,  -248,  -248,  -248,   256,
    -248,  -248,  -248,  -248,  -248,  -248,   274,  -248,  -248,  -248,
       7,    10,  -248,    20,   193,   195,     2,  -248,  -248,  -248,
    -248,  -248,   268,   269,   240,   227,  -248,    20,   273,    96,
     198,    34,  -248,  -248,  -248,  -248,   225,  -248,     8,  -248,
     194,  -248,  -248,     3,    46,   257,   199,    60,  -248,  -248,
      20,   243,  -248,     2,   -37,  -248,   211,   -33,  -248,  -248,
     244,  -248,   203,    46,    46,  -248,  -248,     8,   -69,  -248,
     -69,  -248
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,   170,     3,     6,     5,    15,     8,
       9,    14,    11,    12,    10,    13,     7,    48,    49,    70,
       0,   150,    39,    18,     0,    27,    27,     0,     0,     0,
       0,    60,     0,   149,     0,     0,     0,     0,     1,   169,
       2,    56,    57,     0,    55,     0,    81,    37,     0,     0,
       0,     0,     0,     0,     0,    64,    21,     0,    43,   138,
      77,    59,     0,     0,    35,    36,    51,    50,     4,     0,
      70,    70,     0,    52,   151,   135,   136,   140,     0,    84,
     132,   133,   137,   134,    16,   170,     0,     0,    43,     0,
      38,     0,     0,     0,   130,     0,     0,     0,     0,   139,
       0,     0,    61,    82,   155,    87,    94,    95,    96,    89,
      92,    91,    90,   104,    97,    88,    99,   101,   100,     0,
      64,    45,    69,    71,    76,    81,    81,    79,    19,     0,
       0,    26,     0,     0,     0,    63,     0,    22,   171,     0,
       0,    41,    60,     0,     0,     0,     0,     0,   103,   102,
       0,     0,     0,    64,     0,   153,     0,     0,     0,   154,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    75,    74,    73,    54,    53,     0,    85,    17,     0,
       0,     0,    28,     0,     0,    42,     0,     0,     0,   131,
       0,     0,     0,     0,    98,    93,     0,    62,   141,   143,
     155,   145,   165,    66,    83,   113,   152,   114,   123,   126,
     127,     0,   111,     0,     0,     0,   122,   124,   125,   106,
     105,   108,   107,   109,   110,    47,    46,    72,    80,     0,
      32,    33,    34,    31,    30,    24,     0,    25,    20,   172,
       0,     0,   120,     0,     0,     0,     0,   148,   164,   163,
     157,   158,   162,   161,     0,     0,    58,     0,   112,     0,
       0,     0,    23,    29,    40,   128,     0,   121,   155,   146,
     142,   160,   159,     0,     0,   129,     0,     0,   117,   115,
       0,   154,   144,     0,     0,   167,     0,    68,   118,   116,
       0,   147,     0,     0,     0,    65,   119,     0,   168,   156,
      67,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,   288,   298,   290,  -248,  -248,  -248,  -248,   106,
    -248,   321,  -248,   109,  -248,  -248,  -248,  -248,  -248,   270,
    -248,  -248,   179,  -189,    42,   -12,  -248,   311,   219,  -248,
    -248,  -101,  -248,  -248,   176,  -248,   197,  -248,  -248,   -88,
    -175,   182,   210,   -78,   -99,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,   -46,   -98,  -248,   -36,
    -248,  -248,  -248,  -246,  -248,    82,  -248,     0,  -247,  -192,
    -248,  -248,    83,  -248,   289,  -248
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    67,   146,
      20,    63,   201,   202,   254,    21,    22,    23,    24,   103,
      25,   130,   131,    26,    27,    28,    55,    29,    72,   111,
     163,   100,   276,   315,    56,   132,   133,   193,    41,    83,
     112,    88,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,    90,    91,    92,
     128,    93,   217,   218,   290,   219,    42,   220,   169,   170,
     221,   274,   222,   319,    50,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   134,    32,   147,    70,    31,    31,   165,   158,   159,
      43,   165,   314,    89,   257,     9,    35,    85,    86,    69,
     289,   145,    99,   104,    85,    86,    69,   265,   267,   189,
     233,    30,   161,   261,   142,   263,   166,    65,   152,    68,
     153,   301,   166,    36,    74,    75,   137,   194,   195,   104,
      85,    86,    69,   250,    46,   168,    31,   311,   158,   234,
     281,   168,   223,    97,    98,   251,   104,    85,    86,    69,
     321,    33,   228,   229,   230,   231,   232,   211,    51,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   225,   105,
     227,   151,   143,   197,    34,   188,   302,    80,   160,   104,
      85,    86,    69,    37,   297,    12,   156,     9,    52,   166,
      44,   166,   134,   150,   138,   312,   164,   205,    48,   307,
     139,   167,   252,   206,   106,   167,    39,   255,   168,    38,
     168,    40,   157,   256,   278,   253,    53,    45,    49,   105,
      54,   245,   210,    57,   216,   304,    62,    59,     9,   215,
     284,   147,    69,   285,   108,   109,   139,    66,   107,   164,
     248,    89,   110,    87,   286,   183,   184,   185,   186,    71,
      87,   171,   172,   173,   106,   157,    58,   299,   295,     1,
     108,   109,  -167,   164,   174,   191,    73,     2,   110,    60,
      61,   171,   172,   173,     3,    76,    87,   108,   109,     4,
     264,   310,    77,   309,   258,   110,     5,     6,   107,   164,
     166,   192,     1,    87,  -167,     7,     8,    79,  -167,    84,
       2,     9,    82,   280,  -167,  -167,    10,     3,    96,   168,
     108,   109,   171,   172,   173,   318,   320,    99,   110,     5,
       6,   101,  -167,  -167,   102,   129,    87,    53,     7,     8,
      11,   171,   172,   173,     9,   175,   135,   136,   141,    10,
      85,   148,   154,   155,   171,   172,   173,   296,   164,   162,
     187,   190,  -166,   196,   198,   175,   176,   200,   199,   204,
     171,   172,   173,    11,   177,   203,   209,   207,     9,   277,
     178,   212,   179,   180,  -168,  -168,   213,   181,   182,   183,
     184,   185,   186,   214,  -166,   226,   249,   300,  -166,   235,
     178,    12,   179,   180,  -166,  -166,   175,   181,   182,   183,
     184,   185,   186,   259,   262,   233,   275,   266,   279,   293,
     186,   166,  -166,  -166,   313,   175,   287,   213,   288,   291,
     292,   298,   308,   303,    12,   294,   317,    78,   175,    95,
      94,   178,   316,   179,   180,   282,   213,    64,   181,   182,
     183,   184,   185,   186,   175,   283,    81,   246,   144,   213,
     178,   208,   179,   180,   224,   305,   306,   181,   182,   183,
     184,   185,   186,   178,   140,   179,   180,   247,     0,   260,
     181,   182,   183,   184,   185,   186,   268,     0,     0,   178,
       0,   179,   180,     0,     0,     0,   181,   182,   183,   184,
     185,   186,     0,     0,  -168,  -168,     0,     0,     0,   181,
     182,   183,   184,   185,   186,     0,     0,     0,   269,     0,
       0,     0,   270,     0,     0,     0,     0,     0,   271,   272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273
};

static const yytype_int16 yycheck[] =
{
      12,    79,     2,   101,    40,     3,     3,     3,   107,   108,
      10,     3,    45,    59,   203,    52,    73,     4,     5,     6,
     266,    99,    76,     3,     4,     5,     6,   216,   220,   130,
      91,    30,   110,   208,    84,    98,   105,    37,   142,    39,
     144,   288,   105,   100,    44,    45,    82,   135,   136,     3,
       4,     5,     6,    28,    12,   124,     3,   303,   157,   120,
     235,   124,   163,    63,    64,    40,     3,     4,     5,     6,
     317,     3,   171,   172,   173,   174,   175,   155,    12,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   166,    43,
     168,   103,   142,   139,     3,   149,   288,    55,   110,     3,
       4,     5,     6,    84,   279,   142,    43,    52,    42,   105,
      73,   105,   190,    58,   143,   304,   149,   143,     0,   294,
     149,   117,    97,   149,    78,   117,    88,   143,   124,    84,
     124,   116,   112,   149,   233,   110,    70,   100,   145,    43,
      74,   187,   154,     3,   142,   142,   119,   142,    52,   143,
     143,   249,     6,   143,   134,   135,   149,   107,   112,   149,
     196,   207,   142,   150,   263,   135,   136,   137,   138,    15,
     150,     7,     8,     9,    78,   112,   144,   143,   277,    10,
     134,   135,    29,   149,    20,    80,   114,    18,   142,   146,
     147,     7,     8,     9,    25,   143,   150,   134,   135,    30,
     212,   300,   143,   143,   204,   142,    37,    38,   112,   149,
     105,   106,    10,   150,    61,    46,    47,   118,    65,     3,
      18,    52,    66,   235,    71,    72,    57,    25,   112,   124,
     134,   135,     7,     8,     9,   313,   314,    76,   142,    37,
      38,    83,    89,    90,   142,     3,   150,    70,    46,    47,
      81,     7,     8,     9,    52,    91,    80,    81,    43,    57,
       4,     3,   142,   101,     7,     8,     9,   279,   149,    84,
     126,   149,    29,    49,   148,    91,   112,     3,   115,    88,
       7,     8,     9,    81,   120,   117,     3,   142,    52,   105,
     126,   142,   128,   129,     8,     9,   112,   133,   134,   135,
     136,   137,   138,   143,    61,     3,    83,    82,    65,   142,
     126,   142,   128,   129,    71,    72,    91,   133,   134,   135,
     136,   137,   138,     3,   143,    91,    63,   149,   142,    89,
     138,   105,    89,    90,   123,    91,   143,   112,   143,    71,
      71,   143,   143,   149,   142,   118,   143,    49,    91,    61,
      60,   126,   108,   128,   129,   249,   112,    36,   133,   134,
     135,   136,   137,   138,    91,   256,    55,   188,    98,   112,
     126,   152,   128,   129,   164,   293,   293,   133,   134,   135,
     136,   137,   138,   126,    95,   128,   129,   190,    -1,   207,
     133,   134,   135,   136,   137,   138,    29,    -1,    -1,   126,
      -1,   128,   129,    -1,    -1,    -1,   133,   134,   135,   136,
     137,   138,    -1,    -1,   128,   129,    -1,    -1,    -1,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    18,    25,    30,    37,    38,    46,    47,    52,
      57,    81,   142,   152,   153,   154,   155,   156,   157,   158,
     161,   166,   167,   168,   169,   171,   174,   175,   176,   178,
      30,     3,   218,     3,     3,    73,   100,    84,    84,    88,
     116,   189,   217,   218,    73,   100,   175,   176,     0,   145,
     225,    12,    42,    70,    74,   177,   185,     3,   144,   142,
     146,   147,   119,   162,   162,   218,   107,   159,   218,     6,
     210,    15,   179,   114,   218,   218,   143,   143,   154,   118,
     175,   178,    66,   190,     3,     4,     5,   150,   192,   207,
     208,   209,   210,   212,   155,   153,   112,   218,   218,    76,
     182,    83,   142,   170,     3,    43,    78,   112,   134,   135,
     142,   180,   191,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   211,     3,
     172,   173,   186,   187,   194,   185,   185,   210,   143,   149,
     225,    43,    84,   142,   170,   194,   160,   208,     3,   226,
      58,   176,   142,   144,   142,   101,    43,   112,   195,   195,
     176,   194,    84,   181,   149,     3,   105,   117,   124,   219,
     220,     7,     8,     9,    20,    91,   112,   120,   126,   128,
     129,   133,   134,   135,   136,   137,   138,   126,   149,   182,
     149,    80,   106,   188,   190,   190,    49,   207,   148,   115,
       3,   163,   164,   117,    88,   143,   149,   142,   179,     3,
     176,   194,   142,   112,   143,   143,   142,   213,   214,   216,
     218,   221,   223,   182,   193,   194,     3,   194,   195,   195,
     195,   195,   195,    91,   120,   142,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   207,   173,   187,   210,    83,
      28,    40,    97,   110,   165,   143,   149,   174,   218,     3,
     192,   191,   143,    98,   176,   174,   149,   220,    29,    61,
      65,    71,    72,    90,   222,    63,   183,   105,   195,   142,
     176,   191,   160,   164,   143,   143,   195,   143,   143,   214,
     215,    71,    71,    89,   118,   195,   176,   191,   143,   143,
      82,   219,   220,   149,   142,   216,   223,   191,   143,   143,
     195,   214,   174,   123,    45,   184,   108,   143,   194,   224,
     194,   219
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   151,   152,   153,   153,   154,   154,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   156,   156,   157,   157,
     158,   159,   160,   161,   161,   161,   162,   162,   163,   163,
     164,   165,   165,   165,   165,   166,   166,   166,   167,   168,
     169,   169,   170,   170,   171,   172,   172,   173,   174,   174,
     175,   175,   176,   176,   176,   177,   177,   177,   178,   179,
     179,   180,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   188,   188,   188,   189,   189,   190,
     190,   190,   191,   191,   192,   192,   193,   194,   194,   194,
     194,   194,   194,   195,   195,   195,   195,   195,   195,   196,
     196,   196,   197,   197,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   199,   199,   200,   200,   200,   200,   201,
     202,   202,   203,   203,   203,   203,   203,   203,   204,   205,
     206,   206,   207,   207,   207,   208,   209,   209,   210,   211,
     212,   213,   213,   214,   214,   214,   215,   215,   216,   217,
     218,   218,   219,   219,   220,   220,   221,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   223,   223,   224,   225,
     225,   226,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     6,     2,     5,
       7,     1,     1,     8,     7,     7,     3,     0,     1,     3,
       2,     1,     1,     1,     1,     3,     3,     3,     4,     2,
       8,     5,     3,     0,     5,     1,     3,     3,     1,     1,
       3,     3,     3,     5,     5,     1,     1,     1,     7,     1,
       0,     1,     2,     2,     0,     4,     0,     2,     0,     3,
       0,     1,     3,     2,     1,     1,     0,     2,     0,     2,
       4,     0,     1,     3,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     2,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     5,     6,     5,     6,     8,
       4,     5,     3,     3,     3,     3,     3,     3,     5,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     1,     1,     3,     2,     1,
       1,     3,     2,     1,     1,     0,     6,     1,     1,     2,
       2,     1,     1,     1,     1,     0,     4,     1,     1,     1,
       0,     1,     3
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult** result, yyscan_t scanner)
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult** result, yyscan_t scanner)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult** result, yyscan_t scanner)
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult** result, yyscan_t scanner)
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
#line 1583 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1589 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1595 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1601 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 7: /* NOTEQUALS  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1607 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 8: /* LESSEQ  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1613 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 9: /* GREATEREQ  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1619 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 153: /* statement_list  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).stmt_list)); }
#line 1625 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 154: /* statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1631 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 155: /* preparable_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1637 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 156: /* prepare_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1643 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 157: /* execute_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1649 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 158: /* import_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1655 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 159: /* import_file_type  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1661 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 160: /* file_path  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1667 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 161: /* create_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1673 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 162: /* opt_not_exists  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1679 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 163: /* column_def_commalist  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1692 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 164: /* column_def  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1698 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 165: /* column_type  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1704 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 166: /* drop_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1710 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 167: /* delete_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1716 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* truncate_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1722 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* insert_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1728 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* opt_column_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1741 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* update_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1747 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* update_clause_commalist  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1760 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* update_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1766 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* select_statement  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1772 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* select_with_paren  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1778 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* select_no_paren  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1784 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* select_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1790 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* opt_distinct  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1796 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* select_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1809 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* from_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1815 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* opt_where  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1821 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_group  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 1827 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* opt_having  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1833 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_order  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1846 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* order_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1859 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* order_desc  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 1865 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_order_type  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1871 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_top  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 1877 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_limit  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 1883 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* expr_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1896 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* literal_list  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* expr_alias  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1915 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1921 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* operand  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1927 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* scalar_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1933 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* unary_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1939 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* binary_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1945 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* logic_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1951 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* in_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1957 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* case_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1963 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* exists_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1969 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* comp_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1975 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* function_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1981 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* between_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1987 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* column_name  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1993 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1999 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* string_literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2005 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* num_literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2011 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* int_literal  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2017 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* star_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2023 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* placeholder_expr  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2029 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* table_ref  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2035 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* table_ref_atomic  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2041 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* table_ref_commalist  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2054 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* table_ref_name  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2060 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* table_ref_name_no_alias  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2066 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* table_name  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2072 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* alias  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2078 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* opt_alias  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2084 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* join_clause  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2090 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_join_type  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2096 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* join_table  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2102 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* join_condition  */
#line 151 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2108 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* ident_commalist  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != NULL) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2121 "bison_parser.cpp" /* yacc.c:1257  */
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
yyparse (hsql::SQLParserResult** result, yyscan_t scanner)
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
#line 78 "bison_parser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.placeholder_id = 0;
}

#line 2240 "bison_parser.cpp" /* yacc.c:1429  */
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
#line 245 "bison_parser.y" /* yacc.c:1646  */
    {
			*result = (yyvsp[-1].stmt_list);
		}
#line 2431 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 252 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.stmt_list) = new SQLParserResult((yyvsp[0].statement)); }
#line 2437 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 253 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].stmt_list)->addStatement((yyvsp[0].statement)); (yyval.stmt_list) = (yyvsp[-2].stmt_list); }
#line 2443 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 257 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].prep_stmt)->setPlaceholders(yyloc.placeholder_list);
			yyloc.placeholder_list.clear();
			(yyval.statement) = (yyvsp[0].prep_stmt);
		}
#line 2453 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 267 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2459 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 268 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2465 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 269 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2471 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 270 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2477 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 271 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2483 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 272 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2489 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 273 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2495 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 274 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2501 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 275 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2507 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 283 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = new SQLParserResult((yyvsp[0].statement));
		}
#line 2517 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 288 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-4].sval);
			(yyval.prep_stmt)->query = (yyvsp[-2].stmt_list);
		}
#line 2527 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 296 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2536 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 300 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2546 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 312 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportStatement::ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->tableName = (yyvsp[0].sval);
		}
#line 2556 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 320 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ImportStatement::kImportCSV; }
#line 2562 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 324 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2568 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 334 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(CreateStatement::kTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-4].sval);
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2579 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 340 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(CreateStatement::kTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].sval);
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2590 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 346 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(CreateStatement::kView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].sval);
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2602 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 356 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 2608 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 357 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 2614 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 361 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2620 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 362 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2626 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 366 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-1].sval), (ColumnDefinition::DataType) (yyvsp[0].uval));
		}
#line 2634 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 373 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2640 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 374 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2646 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 375 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::DOUBLE; }
#line 2652 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 376 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TEXT; }
#line 2658 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 386 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(DropStatement::kTable);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2667 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 390 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(DropStatement::kView);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 394 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(DropStatement::kPreparedStatement);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2685 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 406 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->tableName = (yyvsp[-1].sval);
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 2695 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 414 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->tableName = (yyvsp[0].sval);
		}
#line 2704 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 426 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(InsertStatement::kInsertValues);
			(yyval.insert_stmt)->tableName = (yyvsp[-5].sval);
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 2715 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 432 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(InsertStatement::kInsertSelect);
			(yyval.insert_stmt)->tableName = (yyvsp[-2].sval);
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2726 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 442 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 2732 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 443 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = NULL; }
#line 2738 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 453 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 2749 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 462 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 2755 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 463 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 2761 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 467 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 2771 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 484 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 2777 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 485 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 2783 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 489 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != NULL) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 2798 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 499 "bison_parser.y" /* yacc.c:1646  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != NULL) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 2817 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 513 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != NULL) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 2833 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 533 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 2847 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 545 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 2853 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 546 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 2859 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 554 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 2865 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 559 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2871 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 560 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = NULL; }
#line 2877 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 564 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 2887 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 569 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = NULL; }
#line 2893 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 573 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2899 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 574 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = NULL; }
#line 2905 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 577 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 2911 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 578 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = NULL; }
#line 2917 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 582 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 2923 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 583 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 2929 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 587 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 2935 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 591 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 2941 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 592 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 2947 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 593 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 2953 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 599 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 2959 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 600 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = NULL; }
#line 2965 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 604 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 2971 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 605 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 2977 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 606 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = NULL; }
#line 2983 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 613 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2989 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 614 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2995 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 618 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3001 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 619 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3007 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 623 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			(yyval.expr)->alias = (yyvsp[0].sval);
		}
#line 3016 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 639 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3022 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 644 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3028 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 654 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(Expr::UMINUS, (yyvsp[0].expr)); }
#line 3034 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 655 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(Expr::NOT, (yyvsp[0].expr)); }
#line 3040 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 660 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '-', (yyvsp[0].expr)); }
#line 3046 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 661 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '+', (yyvsp[0].expr)); }
#line 3052 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 662 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '/', (yyvsp[0].expr)); }
#line 3058 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 663 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '*', (yyvsp[0].expr)); }
#line 3064 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 664 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '%', (yyvsp[0].expr)); }
#line 3070 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 665 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '^', (yyvsp[0].expr)); }
#line 3076 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 666 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), Expr::LIKE, (yyvsp[0].expr)); }
#line 3082 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 667 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), Expr::NOT_LIKE, (yyvsp[0].expr)); }
#line 3088 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 671 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), Expr::AND, (yyvsp[0].expr)); }
#line 3094 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 672 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), Expr::OR, (yyvsp[0].expr)); }
#line 3100 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 676 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3106 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 677 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(Expr::NOT, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3112 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 678 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3118 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 679 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(Expr::NOT, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3124 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 684 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3130 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 688 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3136 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 689 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(Expr::NOT, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3142 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 693 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '=', (yyvsp[0].expr)); }
#line 3148 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 694 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), Expr::NOT_EQUALS, (yyvsp[0].expr)); }
#line 3154 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 695 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '<', (yyvsp[0].expr)); }
#line 3160 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 696 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), '>', (yyvsp[0].expr)); }
#line 3166 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 697 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), Expr::LESS_EQ, (yyvsp[0].expr)); }
#line 3172 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 698 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), Expr::GREATER_EQ, (yyvsp[0].expr)); }
#line 3178 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 702 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3184 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 706 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3190 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 710 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3196 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 711 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3202 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 721 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3208 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 726 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3214 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 731 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3220 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 735 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr(kExprStar); }
#line 3226 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 739 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::makePlaceholder(yylloc.total_column);
			yyloc.placeholder_list.push_back((yyval.expr));
		}
#line 3235 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 751 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].table_vec)->push_back((yyvsp[-2].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[0].table_vec);
			(yyval.table) = tbl;
		}
#line 3246 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 762 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3257 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 773 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3263 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 774 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3269 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 779 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->name = (yyvsp[-1].sval);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3280 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 789 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->name = (yyvsp[0].sval);
		}
#line 3289 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 803 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3295 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 809 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 3301 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 818 "bison_parser.y" /* yacc.c:1646  */
    { 
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3314 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 829 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3320 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 830 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinOuter; }
#line 3326 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 831 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeftOuter; }
#line 3332 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 832 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRightOuter; }
#line 3338 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 833 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 3344 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 834 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 3350 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 835 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinCross; }
#line 3356 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 836 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinNatural; }
#line 3362 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 837 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3368 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 843 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3379 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 868 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3385 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 869 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3391 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 3395 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 872 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

