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
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 164 "bison_parser.cpp" /* yacc.c:355  */

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
#line 93 "bison_parser.y" /* yacc.c:355  */

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

#line 348 "bison_parser.cpp" /* yacc.c:355  */
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

#line 378 "bison_parser.cpp" /* yacc.c:358  */

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
#define YYLAST   574

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  151
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  367

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
       0,   242,   242,   263,   264,   268,   272,   276,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   300,   301,   306,
     307,   311,   315,   327,   334,   337,   341,   353,   361,   365,
     375,   378,   391,   397,   403,   413,   414,   418,   419,   423,
     430,   431,   432,   433,   443,   447,   451,   463,   471,   483,
     489,   499,   500,   510,   519,   520,   524,   536,   537,   538,
     555,   556,   560,   561,   565,   575,   592,   596,   597,   598,
     602,   603,   607,   619,   620,   624,   628,   633,   634,   638,
     643,   647,   648,   651,   652,   656,   657,   661,   665,   666,
     667,   673,   674,   678,   679,   680,   687,   688,   692,   693,
     697,   704,   705,   706,   707,   708,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   724,   725,   729,   730,   731,
     732,   733,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   751,   752,   756,   757,   758,   759,   764,
     766,   770,   771,   775,   776,   777,   778,   779,   780,   784,
     785,   789,   793,   797,   801,   802,   803,   804,   808,   809,
     810,   811,   815,   820,   821,   825,   829,   833,   845,   846,
     856,   857,   861,   862,   871,   872,   877,   887,   895,   896,
     901,   902,   906,   907,   915,   923,   933,   952,   953,   954,
     955,   956,   957,   958,   959,   964,   973,   974,   979,   980
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
  "column_def", "column_type", "drop_statement", "delete_statement",
  "truncate_statement", "insert_statement", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_with_paren", "select_paren_or_clause",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "from_clause",
  "opt_where", "opt_group", "opt_having", "opt_order", "order_list",
  "order_desc", "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "literal_list", "expr_alias", "expr", "operand", "scalar_expr",
  "unary_expr", "binary_expr", "logic_expr", "in_expr", "case_expr",
  "exists_expr", "comp_expr", "function_expr", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "num_literal", "int_literal", "null_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
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
     375,   376,   377,   378,   379,   380,    61,   381,   382,    60,
      62,   383,   384,   385,   386,   387,    43,    45,    42,    47,
      37,    94,   388,    91,    93,    40,    41,    46,    59,    44,
      63
};
# endif

#define YYPACT_NINF -231

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-231)))

#define YYTABLE_NINF -195

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-195)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     231,    -3,    32,    33,    50,   -30,    15,    22,    10,    34,
      32,   -28,     9,   -34,   115,    16,  -231,    66,    66,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,    20,
    -231,    12,   160,    23,  -231,    24,    96,    68,    68,    32,
      94,    32,   206,   205,   112,  -231,    32,    32,    32,  -231,
      78,    83,  -231,   231,  -231,   150,  -231,  -231,  -231,  -231,
    -231,   -34,   134,   125,   -34,   178,  -231,   242,     7,   245,
     141,    32,    32,   184,  -231,   179,   123,  -231,  -231,  -231,
      81,   257,  -231,  -231,  -231,  -231,  -231,  -231,   126,  -231,
     210,  -231,  -231,  -231,    81,   210,   206,  -231,  -231,  -231,
    -231,  -231,  -231,    29,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,   232,   -64,   123,    81,  -231,   275,   278,   -17,
       8,   133,   195,   146,   139,   177,  -231,    70,   213,   148,
    -231,    74,   211,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,   169,   -50,  -231,
     295,   178,   152,  -231,   -59,   178,   259,  -231,     7,  -231,
     191,   304,   194,   -53,   225,  -231,  -231,    48,   166,  -231,
       2,     4,   268,    81,   173,   177,   377,    81,   149,   180,
     -76,    13,   184,    81,  -231,    81,   320,    81,  -231,  -231,
     177,  -231,   177,   -63,   176,    14,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     206,    81,   257,  -231,   185,    54,  -231,  -231,    81,  -231,
    -231,  -231,  -231,   206,  -231,   252,    -6,    56,  -231,   -34,
      32,  -231,   322,     7,  -231,    81,  -231,  -231,   187,   -39,
     268,   246,   -32,  -231,  -231,   -34,  -231,    40,  -231,  -231,
       6,  -231,   282,  -231,  -231,  -231,   236,   318,   405,   177,
     198,    70,  -231,   256,   212,   405,   405,   405,   431,   431,
     431,   431,   149,   149,   -91,   -91,   -91,    30,   214,   -53,
    -231,     7,  -231,   295,  -231,  -231,   275,  -231,  -231,  -231,
    -231,  -231,  -231,   304,  -231,  -231,  -231,    60,    64,  -231,
     177,   215,  -231,   219,   270,  -231,  -231,  -231,   289,   291,
      13,   280,  -231,   253,  -231,   177,   405,    70,   221,    65,
    -231,  -231,    76,  -231,  -231,  -231,  -231,  -231,   274,  -231,
       6,    13,  -231,  -231,   175,   220,    13,    81,   377,   224,
      93,  -231,  -231,  -231,   177,  -231,  -231,  -231,    13,   244,
      -5,  -231,  -231,   344,   175,   226,    81,    81,  -231,  -231,
       5,   -53,  -231,   -53,   227,   229,  -231
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,   197,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    57,
      58,    84,     0,   178,    48,    25,     0,    36,    36,     0,
       0,     0,     0,    74,     0,   177,     0,     0,     0,    30,
       0,     0,     1,   196,     2,     0,     6,     5,    68,    69,
      67,     0,    71,     0,     0,    95,    46,     0,     0,     0,
       0,     0,     0,    78,    28,     0,    52,   165,    91,    73,
       0,     0,    44,    45,    31,    61,    60,     4,     0,    62,
      84,    63,    70,    66,     0,    84,     0,    64,   179,   162,
     163,   166,   167,     0,    98,   158,   159,   164,   160,   161,
      24,    23,     0,     0,    52,     0,    47,     0,     0,     0,
     154,     0,     0,     0,     0,     0,   156,     0,     0,    75,
      96,   183,   101,   108,   109,   110,   103,   105,   111,   104,
     122,   112,   113,   107,   102,   115,   116,     0,    78,    54,
       0,    95,    83,    85,    90,    95,    93,    26,     0,    35,
       0,     0,     0,    77,     0,    29,   198,     0,     0,    50,
      74,     0,     0,     0,     0,     0,   118,     0,   117,     0,
       0,     0,    78,     0,   181,     0,     0,     0,   182,   100,
       0,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    21,     0,    19,    59,     0,    89,
      88,    87,    65,     0,    99,     0,     0,     0,    37,     0,
       0,    51,     0,     0,   149,     0,   155,   157,     0,     0,
       0,     0,     0,   114,   106,     0,    76,   168,   170,   172,
     183,   171,    80,    97,   133,   180,   134,     0,   129,     0,
       0,     0,   120,     0,   132,   131,   143,   144,   145,   146,
     147,   148,   124,   123,   126,   125,   127,   128,     0,    56,
      55,     0,    17,     0,    86,    94,     0,    41,    42,    43,
      40,    39,    33,     0,    34,    27,   199,     0,     0,   141,
       0,     0,   151,     0,     0,   193,   187,   188,   192,   191,
       0,     0,   176,     0,    72,     0,   130,     0,     0,     0,
     121,   152,     0,    20,    32,    38,    49,   150,     0,   142,
     183,     0,   190,   189,   174,   169,     0,     0,   153,     0,
       0,   137,   135,    22,     0,   139,   173,   184,     0,   194,
      82,   138,   136,     0,   175,     0,     0,     0,    79,   140,
       0,   195,   185,    81,   154,     0,   186
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,  -231,   307,  -231,   354,  -231,    90,  -231,  -231,
    -231,  -231,  -231,    91,  -231,  -231,   340,  -231,    87,  -231,
    -231,  -231,  -231,  -231,   267,  -231,  -231,   170,  -140,    52,
     321,   -13,   353,  -231,  -231,   190,   216,  -231,  -231,  -121,
    -231,  -231,    72,  -231,   172,  -231,  -231,    41,  -171,  -203,
     204,   -93,   -68,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,    28,   -65,  -112,  -231,   -38,
    -231,  -231,  -231,  -149,    62,  -231,  -231,  -231,     0,  -231,
    -230,  -231,  -231,  -231,  -231,  -231
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   215,   216,    18,   111,
      19,    20,    75,   164,    21,    22,    71,   227,   228,   291,
      23,    24,    25,    26,   119,    27,   148,   149,    28,    29,
      90,    30,    61,    62,    93,    31,    80,   128,   182,   116,
     314,   358,    65,   152,   153,   221,    43,    97,   129,   103,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   105,   106,   107,
     108,   109,   246,   247,   248,   335,   249,    44,   250,   188,
     189,   251,   311,   362,    54,   167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   154,    34,   104,    78,   165,   242,   236,   364,   184,
      45,    99,   100,    77,    79,     9,    33,   160,   219,   287,
     312,    58,   163,   115,    32,   259,   185,   213,    48,    58,
     297,   288,     9,   196,   180,    33,    35,   357,   168,    73,
      37,    76,    46,   185,   220,   187,    82,    83,    84,   185,
     209,    59,   210,    36,   260,   176,   300,   178,   156,    59,
      49,   252,   187,   185,   298,    50,   304,    38,   187,    47,
     244,   113,   114,   120,    99,   100,    77,   184,   322,    63,
     239,   161,   187,    60,   120,    99,   100,    77,   289,   294,
     319,    60,   254,   224,   256,    41,    39,   101,   305,   212,
     346,   290,   306,    40,   262,   303,   169,   176,   307,   308,
     121,    13,   302,    89,   179,    52,    89,   183,   279,     9,
     186,   121,   257,   263,   258,   154,  -194,   309,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   237,   126,   183,   122,   340,    42,   234,   120,
      99,   100,    77,   170,   196,   171,   122,   102,   245,   238,
     101,   334,   151,    66,    53,    55,   350,   155,   104,    68,
      67,   101,   278,   210,   165,   157,   185,    69,   158,   123,
     120,    99,   100,    77,    70,   285,   174,   349,   186,   310,
     123,   316,   217,   124,   231,   187,   222,   232,    74,   354,
     282,   304,   292,   283,   124,   293,   326,   125,   126,   158,
     327,   342,    77,   183,   183,   127,   104,    79,   125,   126,
     102,   122,   343,    81,    85,   158,   127,   301,   190,    86,
     295,   102,   328,   305,    88,    92,   101,   306,     1,   352,
      94,    96,   183,   307,   308,    98,     2,   338,   318,   110,
     112,    91,   122,     3,    91,   175,   191,   115,     4,   117,
     147,  -194,   309,   361,   363,     5,     6,   101,   118,   124,
     304,   150,   159,   196,     7,     8,   353,    63,   172,    99,
       9,   166,   177,   125,   126,    10,   175,   206,   207,   208,
     209,   127,   210,   173,   181,   211,   102,   183,   214,   192,
     124,   218,   305,   225,   339,   223,   306,   226,   229,    11,
     230,   233,   307,   308,   125,   126,   355,     9,   240,   191,
     193,   261,   127,   255,    12,   296,   243,   102,   194,   195,
     281,   309,   286,   299,   259,   196,   197,   198,   185,   199,
     200,   201,   313,   317,   202,   203,   320,   204,   205,   206,
     207,   208,   209,   344,   210,   210,   331,   332,   321,   333,
      87,   329,   192,   191,   356,   330,   336,   341,   337,   348,
     351,   360,    57,   323,   171,   366,    13,   324,    72,   345,
     325,   162,   280,   241,    64,    95,   235,   253,   365,   191,
     284,     0,   195,   347,     0,     0,     0,     0,   196,   197,
     198,     0,   199,   200,   201,     0,   192,   202,   203,     0,
     204,   205,   206,   207,   208,   209,     0,   210,     0,     0,
     315,     0,   191,     0,     0,     0,     0,   241,     0,     0,
       0,     0,   192,     0,     0,     0,   195,     0,     0,     0,
       0,     0,   196,   197,   198,     0,   199,   200,   201,   359,
     191,   202,   203,   241,   204,   205,   206,   207,   208,   209,
       0,   210,   195,     0,     0,   192,     0,     0,   196,   197,
     198,     0,   199,   200,   201,     0,   191,   202,   203,     0,
     204,   205,   206,   207,   208,   209,   241,   210,     0,     0,
       0,     0,     0,  -195,     0,   195,     0,     0,     0,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,   203,     0,   204,   205,   206,   207,   208,   209,     0,
     210,     0,     0,   195,     0,     0,     0,     0,     0,   196,
    -195,  -195,     0,  -195,   200,   201,     0,     0,   202,   203,
       0,   204,   205,   206,   207,   208,   209,     0,   210,   195,
       0,     0,     0,     0,     0,   196,     0,     0,     0,     0,
    -195,  -195,     0,     0,  -195,  -195,     0,   204,   205,   206,
     207,   208,   209,     0,   210
};

static const yytype_int16 yycheck[] =
{
      13,    94,     2,    68,    42,   117,   177,     3,     3,     3,
      10,     4,     5,     6,    12,    49,     3,    81,    77,    25,
     250,     9,   115,    73,    27,    88,   102,   148,    19,     9,
     233,    37,    49,   124,   127,     3,     3,    42,    55,    39,
      70,    41,    70,   102,   103,   121,    46,    47,    48,   102,
     141,    39,   143,     3,   117,   123,    95,   125,    96,    39,
      51,   182,   121,   102,   235,    13,    26,    97,   121,    97,
     146,    71,    72,     3,     4,     5,     6,     3,   281,    67,
     173,   145,   121,    71,     3,     4,     5,     6,    94,   229,
     261,    71,   185,   158,   187,    85,    81,    90,    58,   149,
     330,   107,    62,    81,    90,   245,   119,   175,    68,    69,
      40,   145,   144,    61,   127,     0,    64,   149,   211,    49,
     114,    40,   190,   109,   192,   218,    86,    87,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   138,   138,   149,    75,   317,   113,   146,     3,
       4,     5,     6,   145,   124,   147,    75,   150,   145,   172,
      90,   310,    90,     3,   148,    99,   337,    95,   233,   145,
     147,    90,   210,   143,   286,   146,   102,    81,   149,   109,
       3,     4,     5,     6,   116,   223,    40,   336,   114,   149,
     109,   259,   151,   123,   146,   121,   155,   149,   104,   348,
     146,    26,   146,   149,   123,   149,   146,   137,   138,   149,
     146,   146,     6,   149,   149,   145,   281,    12,   137,   138,
     150,    75,   146,   111,   146,   149,   145,   240,    17,   146,
     230,   150,   300,    58,    84,   101,    90,    62,     7,   146,
     115,    63,   149,    68,    69,     3,    15,   315,   261,     4,
     109,    61,    75,    22,    64,   109,    45,    73,    27,    80,
       3,    86,    87,   356,   357,    34,    35,    90,   145,   123,
      26,   145,    40,   124,    43,    44,   344,    67,   145,     4,
      49,     3,   143,   137,   138,    54,   109,   138,   139,   140,
     141,   145,   143,    98,    81,   126,   150,   149,     3,    88,
     123,   149,    58,   112,   317,    46,    62,     3,   114,    78,
      85,   145,    68,    69,   137,   138,    72,    49,   145,    45,
     109,   145,   145,     3,    93,     3,   146,   150,   117,   118,
     145,    87,    80,   146,    88,   124,   125,   126,   102,   128,
     129,   130,    60,   145,   133,   134,    90,   136,   137,   138,
     139,   140,   141,    79,   143,   143,    86,    68,   144,    68,
      53,   146,    88,    45,   120,   146,    86,   146,   115,   149,
     146,   145,    18,   283,   147,   146,   145,   286,    38,   105,
     293,   114,   212,   109,    31,    64,   170,   183,   360,    45,
     218,    -1,   118,   331,    -1,    -1,    -1,    -1,   124,   125,
     126,    -1,   128,   129,   130,    -1,    88,   133,   134,    -1,
     136,   137,   138,   139,   140,   141,    -1,   143,    -1,    -1,
     102,    -1,    45,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,    -1,   128,   129,   130,   105,
      45,   133,   134,   109,   136,   137,   138,   139,   140,   141,
      -1,   143,   118,    -1,    -1,    88,    -1,    -1,   124,   125,
     126,    -1,   128,   129,   130,    -1,    45,   133,   134,    -1,
     136,   137,   138,   139,   140,   141,   109,   143,    -1,    -1,
      -1,    -1,    -1,    88,    -1,   118,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,    -1,   128,   129,   130,    -1,    -1,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,    -1,
     143,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,    -1,   128,   129,   130,    -1,    -1,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,    -1,   143,   118,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
     129,   130,    -1,    -1,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,    -1,   143
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    15,    22,    27,    34,    35,    43,    44,    49,
      54,    78,    93,   145,   152,   153,   154,   155,   159,   161,
     162,   165,   166,   171,   172,   173,   174,   176,   179,   180,
     182,   186,    27,     3,   229,     3,     3,    70,    97,    81,
      81,    85,   113,   197,   228,   229,    70,    97,    19,    51,
     180,   182,     0,   148,   235,    99,   156,   156,     9,    39,
      71,   183,   184,    67,   183,   193,     3,   147,   145,    81,
     116,   167,   167,   229,   104,   163,   229,     6,   220,    12,
     187,   111,   229,   229,   229,   146,   146,   154,    84,   180,
     181,   186,   101,   185,   115,   181,    63,   198,     3,     4,
       5,    90,   150,   200,   217,   218,   219,   220,   221,   222,
       4,   160,   109,   229,   229,    73,   190,    80,   145,   175,
       3,    40,    75,   109,   123,   137,   138,   145,   188,   199,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,     3,   177,   178,
     145,   193,   194,   195,   202,   193,   220,   146,   149,    40,
      81,   145,   175,   202,   164,   218,     3,   236,    55,   182,
     145,   147,   145,    98,    40,   109,   203,   143,   203,   182,
     202,    81,   189,   149,     3,   102,   114,   121,   230,   231,
      17,    45,    88,   109,   117,   118,   124,   125,   126,   128,
     129,   130,   133,   134,   136,   137,   138,   139,   140,   141,
     143,   126,   149,   190,     3,   157,   158,   198,   149,    77,
     103,   196,   198,    46,   217,   112,     3,   168,   169,   114,
      85,   146,   149,   145,   146,   187,     3,   138,   182,   202,
     145,   109,   199,   146,   146,   145,   223,   224,   225,   227,
     229,   232,   190,   201,   202,     3,   202,   203,   203,    88,
     117,   145,    90,   109,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   220,   202,
     178,   145,   146,   149,   195,   220,    80,    25,    37,    94,
     107,   170,   146,   149,   179,   229,     3,   200,   199,   146,
      95,   182,   144,   179,    26,    58,    62,    68,    69,    87,
     149,   233,   231,    60,   191,   102,   203,   145,   182,   199,
      90,   144,   200,   158,   164,   169,   146,   146,   203,   146,
     146,    86,    68,    68,   224,   226,    86,   115,   203,   182,
     199,   146,   146,   146,    79,   105,   231,   225,   149,   224,
     199,   146,   146,   203,   224,    72,   120,    42,   192,   105,
     145,   202,   234,   202,     3,   216,   146
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   151,   152,   153,   153,   154,   154,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   157,
     157,   158,   158,   159,   160,   161,   161,   162,   163,   164,
     165,   165,   166,   166,   166,   167,   167,   168,   168,   169,
     170,   170,   170,   170,   171,   171,   171,   172,   173,   174,
     174,   175,   175,   176,   177,   177,   178,   179,   179,   179,
     180,   180,   181,   181,   182,   182,   183,   184,   184,   184,
     185,   185,   186,   187,   187,   188,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   196,   196,
     196,   197,   197,   198,   198,   198,   199,   199,   200,   200,
     201,   202,   202,   202,   202,   202,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   204,   204,   205,   205,   205,
     205,   205,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   208,   208,   208,   208,   209,
     209,   210,   210,   211,   211,   211,   211,   211,   211,   212,
     212,   213,   214,   215,   216,   216,   216,   216,   217,   217,
     217,   217,   218,   219,   219,   220,   221,   222,   223,   223,
     224,   224,   225,   225,   226,   226,   227,   228,   229,   229,
     230,   230,   231,   231,   232,   232,   232,   233,   233,   233,
     233,   233,   233,   233,   233,   234,   235,   235,   236,   236
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     3,     0,     1,     3,     2,
       1,     1,     1,     1,     3,     3,     3,     4,     2,     8,
       5,     3,     0,     5,     1,     3,     3,     1,     1,     5,
       3,     3,     1,     1,     3,     5,     2,     1,     1,     1,
       1,     0,     7,     1,     0,     1,     2,     2,     0,     4,
       0,     2,     0,     3,     0,     1,     3,     2,     1,     1,
       0,     2,     0,     2,     4,     0,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     2,     2,
       3,     4,     1,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     3,     3,     5,     6,     5,     6,     6,
       8,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       5,     4,     4,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     4,     1,     3,     2,     1,     1,     3,
       2,     1,     1,     0,     4,     6,     8,     1,     1,     2,
       2,     1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1627 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1633 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1639 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1645 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 153: /* statement_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1658 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 154: /* statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1664 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 155: /* preparable_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1670 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 156: /* opt_hints  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1683 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 157: /* hint_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1696 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 158: /* hint  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1702 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 159: /* prepare_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1708 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 160: /* prepare_target_query  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1714 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 161: /* execute_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1720 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 162: /* import_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1726 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 163: /* import_file_type  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1732 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 164: /* file_path  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1738 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 165: /* show_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1744 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 166: /* create_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1750 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 167: /* opt_not_exists  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1756 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* column_def_commalist  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1769 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* column_def  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1775 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* column_type  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1781 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* drop_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1787 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* delete_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1793 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* truncate_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1799 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* insert_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1805 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* opt_column_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* update_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* update_clause_commalist  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1837 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* update_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1843 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* select_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1849 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* select_with_paren  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1855 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* select_paren_or_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1861 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* select_no_paren  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1867 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* select_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1873 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_distinct  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1879 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1892 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* from_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1898 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_where  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1904 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_group  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 1910 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_having  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1916 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_order  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1929 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* order_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1942 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* order_desc  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 1948 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_order_type  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1954 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_top  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 1960 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_limit  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 1966 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* expr_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1979 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* literal_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1992 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* expr_alias  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1998 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2004 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* operand  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2010 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* scalar_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2016 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* unary_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2022 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* binary_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2028 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* logic_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2034 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* in_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2040 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* case_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2046 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* exists_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2052 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* comp_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2058 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* function_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2064 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* array_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2070 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* array_index  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2076 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* between_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2082 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* column_name  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2088 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2094 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* string_literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2100 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* num_literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2106 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* int_literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2112 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* null_literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2118 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* param_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2124 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* table_ref  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2130 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* table_ref_atomic  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2136 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* nonjoin_table_ref_atomic  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2142 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* table_ref_commalist  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2155 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* table_ref_name  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2161 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* table_ref_name_no_alias  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2167 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* table_name  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2173 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* alias  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2179 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* opt_alias  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2185 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* join_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2191 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* opt_join_type  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2197 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* join_condition  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2203 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* ident_commalist  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2216 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 72 "bison_parser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
}

#line 2334 "bison_parser.cpp" /* yacc.c:1429  */
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
#line 242 "bison_parser.y" /* yacc.c:1646  */
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
#line 2539 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 263 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.stmt_vec) = new std::vector<SQLStatement*>(); (yyval.stmt_vec)->push_back((yyvsp[0].statement)); }
#line 2545 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 264 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement)); (yyval.stmt_vec) = (yyvsp[-2].stmt_vec); }
#line 2551 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 268 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2560 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 272 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2569 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 276 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2577 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 283 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2583 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 284 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2589 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 285 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2595 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 286 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2601 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 287 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2607 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 288 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2613 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 289 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2619 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 290 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2625 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 291 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2631 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 300 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2637 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 301 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 2643 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 306 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2649 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 307 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2655 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 311 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2664 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 315 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2674 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 327 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2684 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 337 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2693 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 341 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2703 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 353 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->tableName = (yyvsp[0].sval);
		}
#line 2713 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 361 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kImportCSV; }
#line 2719 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 365 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2725 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 375 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 378 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->name = (yyvsp[0].sval);
		}
#line 2742 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 391 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-4].sval);
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2753 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 397 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].sval);
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2764 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 403 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].sval);
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2776 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 413 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 2782 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 414 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 2788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 418 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2794 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 419 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2800 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 423 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-1].sval), (ColumnDefinition::DataType) (yyvsp[0].uval));
		}
#line 2808 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 430 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2814 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 431 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2820 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 432 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::DOUBLE; }
#line 2826 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 433 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TEXT; }
#line 2832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 443 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2841 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 447 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 451 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 2859 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 463 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->tableName = (yyvsp[-1].sval);
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 2869 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 471 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->tableName = (yyvsp[0].sval);
		}
#line 2878 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 483 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->tableName = (yyvsp[-5].sval);
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 2889 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 489 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->tableName = (yyvsp[-2].sval);
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2900 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 499 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 2906 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 500 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 2912 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 510 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 2923 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 519 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 2929 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 520 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 2935 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 524 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 2945 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 538 "bison_parser.y" /* yacc.c:1646  */
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
#line 2964 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 555 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 2970 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 556 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 2976 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 565 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 2991 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 575 "bison_parser.y" /* yacc.c:1646  */
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
#line 3010 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 607 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3024 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 619 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3030 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 620 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3036 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 628 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3042 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 633 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3048 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 634 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3054 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 638 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3064 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 643 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 3070 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 647 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3076 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 648 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3082 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 651 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3088 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 652 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 3094 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 656 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3100 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 657 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3106 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 661 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3112 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 665 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3118 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 666 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 3124 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 667 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3130 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 673 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3136 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 674 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3142 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 678 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3148 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 679 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3154 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 680 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3160 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 687 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3166 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 688 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3172 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 692 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3178 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 693 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3184 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 697 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			(yyval.expr)->alias = (yyvsp[0].sval);
		}
#line 3193 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 712 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3199 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 720 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3205 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 729 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3211 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 730 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3217 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 731 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3223 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 732 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3229 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 733 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3235 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 738 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3241 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 739 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3247 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 740 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3253 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 741 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3259 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 742 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3265 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 743 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3271 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 744 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3277 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 745 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3283 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 746 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3289 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 747 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3295 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 751 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3301 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 752 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3307 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 756 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3313 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 757 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3319 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 758 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3325 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 759 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3331 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 764 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3337 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 766 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3343 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 770 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3349 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 771 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3355 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 775 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3361 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 776 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3367 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 777 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3373 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 778 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3379 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 779 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3385 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 780 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3391 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 784 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3397 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 785 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3403 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 789 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3409 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 793 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3415 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 797 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3421 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 801 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3427 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 802 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3433 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 803 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3439 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 804 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3445 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 815 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3451 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 820 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3457 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 825 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3463 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 829 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3469 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 833 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3479 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 846 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].table_vec)->push_back((yyvsp[-2].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[0].table_vec);
			(yyval.table) = tbl;
		}
#line 3490 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 862 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3501 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 871 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3507 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 872 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3513 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 877 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->name = (yyvsp[-1].sval);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3524 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 887 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->name = (yyvsp[0].sval);
		}
#line 3533 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 896 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3539 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 901 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3545 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 907 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = nullptr; }
#line 3551 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 916 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3563 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 924 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3576 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 934 "bison_parser.y" /* yacc.c:1646  */
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
#line 3596 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 952 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3602 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 953 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinOuter; }
#line 3608 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 954 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeftOuter; }
#line 3614 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 955 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRightOuter; }
#line 3620 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 956 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 3626 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 957 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 3632 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 958 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinCross; }
#line 3638 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 959 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3644 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 979 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3650 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 980 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3656 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 3660 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 983 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

