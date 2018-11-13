/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.1"

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
    SQL_VARCHAR = 286,
    SQL_VIRTUAL = 287,
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
	hsql::ColumnType column_type_t;
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

#line 365 "bison_parser.cpp" /* yacc.c:355  */
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

#line 395 "bison_parser.cpp" /* yacc.c:358  */

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
#define YYLAST   634

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  430

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   400

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
       0,   254,   254,   275,   281,   290,   294,   298,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   322,   323,   328,
     329,   333,   337,   349,   356,   359,   363,   375,   384,   388,
     398,   401,   415,   422,   429,   440,   441,   445,   446,   450,
     456,   457,   458,   459,   460,   461,   462,   463,   467,   468,
     469,   479,   485,   491,   499,   500,   509,   518,   531,   538,
     549,   550,   560,   569,   570,   574,   586,   587,   588,   605,
     606,   610,   611,   615,   625,   642,   646,   647,   648,   652,
     653,   657,   669,   670,   674,   678,   679,   682,   687,   688,
     692,   697,   701,   702,   705,   706,   710,   711,   715,   719,
     720,   721,   727,   728,   732,   733,   734,   735,   736,   737,
     738,   739,   746,   747,   751,   752,   756,   766,   767,   768,
     769,   770,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   787,   788,   792,   793,   794,   795,   796,   800,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     814,   815,   819,   820,   821,   822,   828,   829,   830,   831,
     835,   836,   840,   841,   845,   846,   847,   848,   849,   850,
     851,   855,   856,   860,   864,   865,   866,   867,   868,   869,
     872,   876,   880,   884,   885,   886,   887,   891,   892,   893,
     894,   895,   899,   903,   904,   908,   909,   913,   917,   921,
     933,   934,   944,   945,   949,   950,   959,   960,   965,   976,
     985,   986,   991,   992,   997,   998,  1002,  1003,  1008,  1009,
    1017,  1025,  1035,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,  1062,  1063,  1068,  1077,  1078,  1083,  1084
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
  "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "BEFORE", "COLUMN", "CREATE",
  "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT",
  "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME",
  "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE",
  "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX",
  "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT",
  "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "DATE",
  "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO",
  "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT",
  "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC",
  "CSV", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL", "TOP",
  "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY", "CONCAT",
  "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "TRUE",
  "FALSE", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER",
  "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "opt_column_nullable", "drop_statement",
  "opt_exists", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_with_paren", "select_paren_or_clause", "select_no_paren",
  "set_operator", "set_type", "opt_all", "select_clause", "opt_distinct",
  "select_list", "opt_from_clause", "from_clause", "opt_where",
  "opt_group", "opt_having", "opt_order", "order_list", "order_desc",
  "opt_order_type", "opt_top", "opt_limit", "expr_list", "literal_list",
  "expr_alias", "expr", "operand", "scalar_expr", "unary_expr",
  "binary_expr", "logic_expr", "in_expr", "case_expr", "case_list",
  "exists_expr", "comp_expr", "function_expr", "extract_expr",
  "datetime_field", "array_expr", "array_index", "between_expr",
  "column_name", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "null_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name", "table_alias",
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
     385,   386,   387,   388,   389,   390,   391,   392,    61,   393,
     394,    60,    62,   395,   396,   397,   398,   399,    43,    45,
      42,    47,    37,    94,   400,    91,    93,    40,    41,    46,
      59,    44,    63
};
# endif

#define YYPACT_NINF -337

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-337)))

#define YYTABLE_NINF -233

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-233)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     358,    50,    42,    43,    84,   -43,    16,    95,    38,   -14,
      42,   -41,    29,   -35,   189,    54,  -337,   112,   112,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,    14,
    -337,    22,   216,    69,  -337,   -68,   151,   121,   121,    42,
     132,    42,   243,   238,   148,  -337,   135,   135,    42,  -337,
     119,   134,  -337,   358,  -337,   195,  -337,  -337,  -337,  -337,
    -337,   -35,   174,   165,   -35,   -15,  -337,   287,    23,   295,
     187,    42,    42,   236,  -337,   231,   160,  -337,  -337,  -337,
     193,   315,   278,    42,    42,  -337,  -337,  -337,  -337,   166,
    -337,   255,  -337,  -337,  -337,   193,   255,   243,    11,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,  -114,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,   286,   -71,   160,
     193,  -337,   324,   328,   126,  -102,   175,   184,   125,   227,
     196,   261,  -337,   159,   268,   197,  -337,     7,   320,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,   219,   -63,  -337,  -337,  -337,  -337,
     356,   -15,   199,  -337,   -28,   -15,  -337,   313,   314,   318,
    -337,    23,  -337,   252,   366,   253,    65,   281,  -337,  -337,
     -44,   215,  -337,     0,    18,   327,   214,   193,    80,    24,
     218,   261,   404,   193,   183,   221,   -88,     4,   236,  -337,
     193,  -337,   193,   378,   193,  -337,  -337,   261,  -337,   261,
     -56,   225,    78,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   243,   193,
     315,  -337,   226,    20,  -337,  -337,   193,  -337,  -337,  -337,
    -337,   243,   243,   243,  -337,   302,   191,    98,  -337,   -35,
      42,  -337,   384,    23,  -337,   193,  -337,  -337,   232,  -337,
    -337,  -337,  -337,  -337,  -337,   306,   -16,    32,   193,   193,
    -337,   327,   300,    56,  -337,  -337,   -35,  -337,     9,  -337,
     234,  -337,     6,  -337,   333,  -337,  -337,  -337,   293,   361,
     438,   261,   244,   159,  -337,   305,   247,   438,   438,   438,
     438,   472,   472,   472,   472,   183,   183,  -103,  -103,  -103,
     -53,   250,    65,  -337,    23,  -337,   356,  -337,  -337,  -337,
    -337,   324,  -337,   248,  -337,  -337,   256,  -337,  -337,  -337,
      89,  -337,   366,  -337,  -337,  -337,    99,   115,  -337,   193,
     193,   193,  -337,    86,    13,   257,  -337,   258,   317,  -337,
    -337,  -337,   346,   348,   349,   331,     4,   419,  -337,  -337,
    -337,   307,  -337,   261,   438,   159,   266,   120,  -337,  -337,
     136,  -337,  -337,   421,   422,  -337,   330,  -337,  -337,  -337,
    -337,   -87,    65,   117,  -337,   193,  -337,     6,     4,  -337,
    -337,  -337,     4,   153,   272,   193,   404,   273,   140,  -337,
    -337,  -337,   274,   276,  -337,  -337,  -337,    65,  -337,  -337,
     510,   328,   -38,  -337,  -337,  -337,  -337,   279,   193,   146,
     193,  -337,    19,    65,  -337,  -337,    65,   271,   277,  -337
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,     0,     0,   235,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    66,
      67,    95,     0,   210,    57,    25,     0,    36,    36,     0,
       0,     0,     0,    83,     0,   209,    55,    55,     0,    30,
       0,     0,     1,   234,     2,     0,     6,     5,    77,    78,
      76,     0,    80,     0,     0,   111,    53,     0,     0,     0,
       0,     0,     0,    89,    28,     0,    61,   197,   102,    82,
       0,     0,     0,     0,     0,    31,    70,    69,     4,     0,
      71,    95,    72,    79,    75,     0,    95,     0,     0,    73,
     211,   192,   195,   198,   193,   194,   199,     0,   114,   187,
     188,   189,   196,   190,   191,    24,    23,     0,     0,    61,
       0,    56,     0,     0,     0,   183,     0,     0,     0,     0,
       0,     0,   185,     0,    86,    84,   112,   219,   117,   124,
     125,   126,   119,   121,   127,   120,   139,   128,   129,   130,
     123,   118,   132,   133,     0,    89,    63,    54,    51,    52,
       0,   111,    94,    96,   101,   111,   106,   108,   107,   104,
      26,     0,    35,     0,     0,     0,    88,     0,    29,   236,
       0,     0,    59,    83,     0,     0,     0,     0,     0,     0,
       0,     0,   135,     0,   134,     0,     0,     0,    89,    85,
       0,   217,     0,     0,     0,   218,   116,     0,   136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    21,     0,    19,    68,     0,   100,    99,    98,
      74,     0,     0,     0,   115,     0,     0,     0,    37,     0,
       0,    60,     0,     0,   171,     0,   184,   186,     0,   174,
     175,   176,   177,   178,   179,     0,     0,     0,     0,     0,
     158,     0,     0,     0,   131,   122,     0,    87,   200,   202,
       0,   204,   215,   203,    91,   113,   150,   216,   151,     0,
     146,     0,     0,     0,   137,     0,   149,   148,   164,   165,
     166,   167,   168,   169,   170,   141,   140,   143,   142,   144,
     145,     0,    65,    64,     0,    17,     0,    97,   110,   109,
     105,     0,    41,     0,    44,    43,     0,    42,    47,    40,
      50,    33,     0,    34,    27,   237,     0,     0,   162,     0,
       0,     0,   156,     0,     0,     0,   180,     0,     0,   231,
     223,   229,   227,   230,   225,     0,     0,     0,   214,   208,
     212,     0,    81,     0,   147,     0,     0,     0,   138,   181,
       0,    20,    32,     0,     0,    48,     0,    39,    38,    58,
     172,     0,   160,     0,   159,     0,   163,   215,     0,   226,
     228,   224,     0,   201,   216,     0,   182,     0,     0,   154,
     152,    22,     0,     0,    49,   173,   157,   161,   205,   220,
     232,     0,    93,   155,   153,    45,    46,     0,     0,     0,
       0,    90,     0,   233,   221,   213,    92,   183,     0,   222
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -337,  -337,  -337,   385,  -337,   425,  -337,   123,  -337,  -337,
    -337,  -337,  -337,   116,  -337,  -337,   406,  -337,   113,  -337,
    -337,  -337,   399,  -337,  -337,  -337,   335,  -337,  -337,   217,
    -208,    30,   386,   -13,   426,  -337,  -337,   249,   269,  -337,
    -337,  -337,  -131,  -337,  -337,    97,  -337,   220,  -337,  -337,
     -25,  -189,  -238,   263,   -94,   -70,  -337,  -337,  -337,  -337,
    -337,  -337,   288,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,    55,   -66,  -117,  -337,  -337,   -34,  -337,  -337,  -337,
    -336,    76,  -337,  -337,  -337,     1,  -337,    91,   342,  -337,
    -337,  -337,  -337,  -337,    70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   233,   234,    18,   116,
      19,    20,    75,   177,    21,    22,    71,   247,   248,   330,
     377,    23,    83,    24,    25,    26,   124,    27,   155,   156,
      28,    29,    91,    30,    61,    62,    94,    31,    80,   134,
     198,   199,   121,   362,   421,    65,   162,   163,   239,    43,
      99,   135,   107,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   189,   145,   146,   147,   148,   265,   149,   150,
     151,   152,   153,   109,   110,   111,   112,   113,   114,   277,
     278,   279,   280,   281,    44,   282,   358,   359,   360,   206,
     283,   355,   424,    54,   180
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   164,   108,    34,   273,   178,   420,    33,    78,   201,
     201,    45,    79,   120,   173,   336,     9,    77,   202,   202,
     393,   256,   427,    58,   231,   213,   176,   101,   102,    77,
      37,    58,    46,    97,   188,   348,   291,   204,   204,   196,
      73,   333,    76,    50,   170,    33,    35,   171,    48,    85,
     227,    98,   228,   237,    59,   183,   410,   184,    38,   192,
      47,   194,    59,   166,   169,   292,   337,   284,   347,   349,
     275,   405,   118,   119,   350,   213,   370,    32,   202,   238,
     351,   352,    49,   340,   158,   159,   174,    36,    60,    68,
     202,    90,    63,   266,    90,   353,    60,   204,   230,  -232,
     354,    39,   228,    42,   367,   244,   167,   268,   286,   204,
     288,   182,   385,   202,   251,   341,   168,   252,   103,   202,
     195,   192,    13,   200,   357,   203,   269,    41,   125,   101,
     102,    77,   204,   270,   269,   312,   235,   289,   204,   290,
     240,   342,   164,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   254,   104,
     105,   276,   125,   101,   102,    77,   126,   127,   257,   132,
    -206,   202,   258,   294,   343,   344,   398,     9,   315,   348,
      40,   316,   187,   181,   375,   106,   202,   108,   161,    52,
     204,   295,   202,   165,   311,   384,   125,   101,   102,    77,
     126,   127,   376,   128,   178,   204,   412,   318,   319,   320,
       9,   204,   346,   349,    53,    55,   322,   200,   350,    66,
     103,   364,   323,   202,   351,   352,   406,   187,    67,   324,
     125,   101,   102,    77,   126,   127,    69,   128,   129,   353,
      74,    70,   204,  -232,   354,   381,   382,   383,   108,    77,
      79,   334,   130,   325,   103,    82,   331,   379,   345,   332,
     171,   104,   105,    81,   125,   101,   102,    77,   190,   127,
     326,   128,   129,   380,   131,   132,   200,    86,   400,    93,
     366,   200,   133,    89,    95,   327,   130,   106,   103,   328,
     100,   407,    87,   396,   401,   104,   105,   171,   414,   115,
     117,   200,   329,   127,   425,   128,   129,   252,   131,   132,
      92,   213,   120,    92,  -207,   122,   133,   123,   154,   157,
     130,   106,   103,   160,   423,    63,   426,   172,   101,   104,
     105,   179,   185,   224,   225,   226,   227,   207,   228,   128,
     191,   186,   131,   132,   259,   260,   261,   262,   263,   264,
     133,   193,   397,   197,   130,   106,   103,   229,   200,   232,
     236,   241,   242,   104,   105,     1,   243,   208,   245,   246,
     250,   249,   253,     2,   191,   271,   131,   132,     9,   274,
       3,   287,   293,   314,   133,     4,   321,   335,   130,   106,
     338,   339,   291,     5,     6,   356,   361,   104,   105,   202,
     368,   365,   228,     7,     8,   373,   369,   388,   208,     9,
     131,   132,   209,   374,    10,   386,   387,   389,   133,   390,
     391,   392,   394,   106,   399,   404,   395,   402,   403,   411,
     184,   413,   415,   210,   416,   429,   422,   372,    88,   371,
      11,   211,   212,    57,    72,   378,    84,   313,   213,   214,
      96,   208,   255,   209,   175,    12,   317,    64,   215,   216,
     217,   218,   219,   285,   409,   220,   221,   363,   222,   223,
     224,   225,   226,   227,   272,   228,   267,   428,   408,   205,
       0,   419,     0,   212,     0,   208,     0,     0,     0,   213,
     214,     0,     0,     0,     0,     0,   209,     0,     0,   215,
     216,   217,   218,   219,     0,     0,   220,   221,     0,   222,
     223,   224,   225,   226,   227,    13,   228,   272,     0,   208,
       0,     0,     0,     0,     0,     0,   212,     0,     0,     0,
    -233,     0,   213,   214,     0,     0,   348,     0,     0,     0,
       0,     0,   215,   216,   217,   218,   219,     0,     0,   220,
     221,     0,   222,   223,   224,   225,   226,   227,     0,   228,
     212,     0,     0,     0,     0,     0,   213,  -233,     0,     0,
     349,     0,     0,     0,     0,   350,  -233,  -233,  -233,   218,
     219,   351,   352,   220,   221,   417,   222,   223,   224,   225,
     226,   227,     0,   228,   212,     0,   353,     0,     0,     0,
     213,   354,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -233,  -233,     0,     0,  -233,  -233,     0,
     222,   223,   224,   225,   226,   227,     0,   228,     0,     0,
       0,     0,     0,     0,   418
};

static const yytype_int16 yycheck[] =
{
      13,    95,    68,     2,   193,   122,    44,     3,    42,     3,
       3,    10,    12,    76,    85,   253,    51,     6,   106,   106,
     356,     3,     3,     9,   155,   128,   120,     4,     5,     6,
      73,     9,    73,    48,   128,    26,    92,   125,   125,   133,
      39,   249,    41,    13,   158,     3,     3,   161,    19,    48,
     153,    66,   155,    81,    40,   157,   392,   159,   101,   129,
     101,   131,    40,    97,    98,   121,   255,   198,   276,    60,
     158,   158,    71,    72,    65,   128,   314,    27,   106,   107,
      71,    72,    53,    99,    83,    84,   157,     3,    74,   157,
     106,    61,    70,   187,    64,    86,    74,   125,   161,    90,
      91,    85,   155,   117,   293,   171,    95,    83,   202,   125,
     204,   124,    99,   106,   158,    83,   105,   161,    95,   106,
     133,   191,   157,   161,   118,   118,   102,    89,     3,     4,
       5,     6,   125,   109,   102,   229,   161,   207,   125,   209,
     165,   109,   236,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   158,   136,
     137,   157,     3,     4,     5,     6,    41,    42,   150,   150,
     161,   106,   185,    95,   268,   269,   365,    51,   158,    26,
      85,   161,   102,    57,    95,   162,   106,   253,    91,     0,
     125,   113,   106,    96,   228,   109,     3,     4,     5,     6,
      41,    42,   113,    78,   321,   125,   395,   241,   242,   243,
      51,   125,   156,    60,   160,   103,    25,   161,    65,     3,
      95,   291,    31,   106,    71,    72,   109,   102,   159,    38,
       3,     4,     5,     6,    41,    42,    85,    78,   113,    86,
     108,   120,   125,    90,    91,   339,   340,   341,   314,     6,
      12,   250,   127,    62,    95,   120,   158,   158,   271,   161,
     161,   136,   137,   115,     3,     4,     5,     6,    41,    42,
      79,    78,   113,   158,   149,   150,   161,   158,   158,   105,
     293,   161,   157,    88,   119,    94,   127,   162,    95,    98,
       3,   385,   158,   363,   158,   136,   137,   161,   158,     4,
     113,   161,   111,    42,   158,    78,   113,   161,   149,   150,
      61,   128,    76,    64,   161,    84,   157,   157,     3,    41,
     127,   162,    95,   157,   418,    70,   420,    41,     4,   136,
     137,     3,   157,   150,   151,   152,   153,    17,   155,    78,
     113,   157,   149,   150,   130,   131,   132,   133,   134,   135,
     157,   155,   365,    85,   127,   162,    95,   138,   161,     3,
     161,    48,    48,   136,   137,     7,    48,    47,   116,     3,
      89,   118,   157,    15,   113,   157,   149,   150,    51,   158,
      22,     3,   157,   157,   157,    27,    84,     3,   127,   162,
     158,    85,    92,    35,    36,   161,    63,   136,   137,   106,
      95,   157,   155,    45,    46,   157,   156,    90,    47,    51,
     149,   150,    92,   157,    56,   158,   158,    71,   157,    71,
      71,    90,     3,   162,   158,    95,   119,     6,     6,   157,
     159,   158,   158,   113,   158,   158,   157,   321,    53,   316,
      82,   121,   122,    18,    38,   332,    47,   230,   128,   129,
      64,    47,   183,    92,   119,    97,   236,    31,   138,   139,
     140,   141,   142,   200,   388,   145,   146,   106,   148,   149,
     150,   151,   152,   153,   113,   155,   188,   422,   387,   137,
      -1,   411,    -1,   122,    -1,    47,    -1,    -1,    -1,   128,
     129,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   157,   155,   113,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      92,    -1,   128,   129,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,    -1,   155,
     122,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    65,   138,   139,   140,   141,
     142,    71,    72,   145,   146,    75,   148,   149,   150,   151,
     152,   153,    -1,   155,   122,    -1,    86,    -1,    -1,    -1,
     128,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,   124
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    51,
      56,    82,    97,   157,   164,   165,   166,   167,   171,   173,
     174,   177,   178,   184,   186,   187,   188,   190,   193,   194,
     196,   200,    27,     3,   248,     3,     3,    73,   101,    85,
      85,    89,   117,   212,   247,   248,    73,   101,    19,    53,
     194,   196,     0,   160,   256,   103,   168,   168,     9,    40,
      74,   197,   198,    70,   197,   208,     3,   159,   157,    85,
     120,   179,   179,   248,   108,   175,   248,     6,   239,    12,
     201,   115,   120,   185,   185,   248,   158,   158,   166,    88,
     194,   195,   200,   105,   199,   119,   195,    48,    66,   213,
       3,     4,     5,    95,   136,   137,   162,   215,   235,   236,
     237,   238,   239,   240,   241,     4,   172,   113,   248,   248,
      76,   205,    84,   157,   189,     3,    41,    42,    78,   113,
     127,   149,   150,   157,   202,   214,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   226,   227,   228,   229,   231,
     232,   233,   234,   235,     3,   191,   192,    41,   248,   248,
     157,   208,   209,   210,   217,   208,   239,    95,   105,   239,
     158,   161,    41,    85,   157,   189,   217,   176,   236,     3,
     257,    57,   196,   157,   159,   157,   157,   102,   217,   225,
      41,   113,   218,   155,   218,   196,   217,    85,   203,   204,
     161,     3,   106,   118,   125,   251,   252,    17,    47,    92,
     113,   121,   122,   128,   129,   138,   139,   140,   141,   142,
     145,   146,   148,   149,   150,   151,   152,   153,   155,   138,
     161,   205,     3,   169,   170,   213,   161,    81,   107,   211,
     213,    48,    48,    48,   235,   116,     3,   180,   181,   118,
      89,   158,   161,   157,   158,   201,     3,   150,   196,   130,
     131,   132,   133,   134,   135,   230,   217,   225,    83,   102,
     109,   157,   113,   214,   158,   158,   157,   242,   243,   244,
     245,   246,   248,   253,   205,   216,   217,     3,   217,   218,
     218,    92,   121,   157,    95,   113,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   239,   217,   192,   157,   158,   161,   210,   239,   239,
     239,    84,    25,    31,    38,    62,    79,    94,    98,   111,
     182,   158,   161,   193,   248,     3,   215,   214,   158,    85,
      99,    83,   109,   217,   217,   196,   156,   193,    26,    60,
      65,    71,    72,    86,    91,   254,   161,   118,   249,   250,
     251,    63,   206,   106,   218,   157,   196,   214,    95,   156,
     215,   170,   176,   157,   157,    95,   113,   183,   181,   158,
     158,   217,   217,   217,   109,    99,   158,   158,    90,    71,
      71,    71,    90,   243,     3,   119,   218,   196,   214,   158,
     158,   158,     6,     6,    95,   158,   109,   217,   250,   244,
     243,   157,   214,   158,   158,   158,   158,    75,   124,   257,
      44,   207,   157,   217,   255,   158,   217,     3,   234,   158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   165,   165,   166,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   172,   173,   173,   174,   175,   176,
     177,   177,   178,   178,   178,   179,   179,   180,   180,   181,
     182,   182,   182,   182,   182,   182,   182,   182,   183,   183,
     183,   184,   184,   184,   185,   185,   186,   187,   188,   188,
     189,   189,   190,   191,   191,   192,   193,   193,   193,   194,
     194,   195,   195,   196,   196,   197,   198,   198,   198,   199,
     199,   200,   201,   201,   202,   203,   203,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   211,
     211,   211,   212,   212,   213,   213,   213,   213,   213,   213,
     213,   213,   214,   214,   215,   215,   216,   217,   217,   217,
     217,   217,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   219,   219,   220,   220,   220,   220,   220,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     222,   222,   223,   223,   223,   223,   224,   224,   224,   224,
     225,   225,   226,   226,   227,   227,   227,   227,   227,   227,
     227,   228,   228,   229,   230,   230,   230,   230,   230,   230,
     231,   232,   233,   234,   234,   234,   234,   235,   235,   235,
     235,   235,   236,   237,   237,   238,   238,   239,   240,   241,
     242,   242,   243,   243,   244,   244,   245,   245,   246,   247,
     248,   248,   249,   249,   250,   250,   251,   251,   252,   252,
     253,   253,   253,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   255,   256,   256,   257,   257
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     3,     0,     1,     3,     3,
       1,     1,     1,     1,     1,     4,     4,     1,     1,     2,
       0,     4,     4,     3,     2,     0,     4,     2,     8,     5,
       3,     0,     5,     1,     3,     3,     1,     1,     5,     3,
       3,     1,     1,     3,     5,     2,     1,     1,     1,     1,
       0,     7,     1,     0,     1,     1,     0,     2,     2,     0,
       4,     0,     2,     0,     3,     0,     1,     3,     2,     1,
       1,     0,     2,     0,     2,     4,     2,     2,     2,     4,
       4,     0,     1,     3,     1,     3,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     2,     3,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     5,     6,     5,     6,     4,     6,     3,     5,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     6,     1,     1,     1,     1,     1,     1,
       4,     4,     5,     1,     3,     1,     3,     1,     1,     1,
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
#line 143 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).sval)) ); }
#line 1696 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 4: /* STRING  */
#line 143 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).sval)) ); }
#line 1702 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 5: /* FLOATVAL  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1708 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 6: /* INTVAL  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1714 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 165: /* statement_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1727 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 166: /* statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).statement)); }
#line 1733 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 167: /* preparable_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).statement)); }
#line 1739 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 168: /* opt_hints  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1752 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 169: /* hint_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1765 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 170: /* hint  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 1771 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 171: /* prepare_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1777 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 172: /* prepare_target_query  */
#line 143 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).sval)) ); }
#line 1783 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 173: /* execute_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1789 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 174: /* import_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1795 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 175: /* import_file_type  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1801 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 176: /* file_path  */
#line 143 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).sval)) ); }
#line 1807 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 177: /* show_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1813 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 178: /* create_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1819 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 179: /* opt_not_exists  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1825 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 180: /* column_def_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1838 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 181: /* column_def  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).column_t)); }
#line 1844 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 182: /* column_type  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1850 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 183: /* opt_column_nullable  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1856 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 184: /* drop_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1862 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 185: /* opt_exists  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1868 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 186: /* delete_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1874 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 187: /* truncate_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1880 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 188: /* insert_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1886 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 189: /* opt_column_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1899 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 190: /* update_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1905 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 191: /* update_clause_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1918 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 192: /* update_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).update_t)); }
#line 1924 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 193: /* select_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1930 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 194: /* select_with_paren  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1936 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 195: /* select_paren_or_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1942 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 196: /* select_no_paren  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1948 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 200: /* select_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1954 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 201: /* opt_distinct  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1960 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 202: /* select_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1973 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 203: /* opt_from_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 1979 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 204: /* from_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 1985 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 205: /* opt_where  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 1991 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 206: /* opt_group  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).group_t)); }
#line 1997 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 207: /* opt_having  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2003 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 208: /* opt_order  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2016 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 209: /* order_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2029 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 210: /* order_desc  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).order)); }
#line 2035 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 211: /* opt_order_type  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 2041 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 212: /* opt_top  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).limit)); }
#line 2047 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 213: /* opt_limit  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).limit)); }
#line 2053 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 214: /* expr_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2066 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 215: /* literal_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2079 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 216: /* expr_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2085 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 217: /* expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2091 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 218: /* operand  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2097 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 219: /* scalar_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2103 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 220: /* unary_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2109 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 221: /* binary_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2115 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 222: /* logic_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2121 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 223: /* in_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2127 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 224: /* case_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2133 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 225: /* case_list  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2139 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 226: /* exists_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2145 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 227: /* comp_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2151 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 228: /* function_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2157 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 229: /* extract_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2163 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 230: /* datetime_field  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 2169 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 231: /* array_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2175 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 232: /* array_index  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2181 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 233: /* between_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2187 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 234: /* column_name  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2193 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 235: /* literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2199 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 236: /* string_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2205 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 237: /* bool_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2211 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 238: /* num_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2217 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 239: /* int_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2223 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 240: /* null_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2229 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 241: /* param_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2235 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 242: /* table_ref  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2241 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 243: /* table_ref_atomic  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2247 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 244: /* nonjoin_table_ref_atomic  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2253 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 245: /* table_ref_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2266 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 246: /* table_ref_name  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2272 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 247: /* table_ref_name_no_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2278 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 248: /* table_name  */
#line 142 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2284 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 249: /* table_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).alias_t)); }
#line 2290 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 250: /* opt_table_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).alias_t)); }
#line 2296 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 251: /* alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).alias_t)); }
#line 2302 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 252: /* opt_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).alias_t)); }
#line 2308 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 253: /* join_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2314 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 254: /* opt_join_type  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 2320 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 255: /* join_condition  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2326 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 257: /* ident_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2339 "bison_parser.cpp" /* yacc.c:1258  */
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
#line 73 "bison_parser.y" /* yacc.c:1440  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2458 "bison_parser.cpp" /* yacc.c:1440  */
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
                  (unsigned long) yystacksize));

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 254 "bison_parser.y" /* yacc.c:1666  */
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
#line 2664 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 3:
#line 275 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2675 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 4:
#line 281 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2686 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 5:
#line 290 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2695 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 6:
#line 294 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2704 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 7:
#line 298 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2712 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 8:
#line 305 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2718 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 9:
#line 306 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2724 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 10:
#line 307 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2730 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 11:
#line 308 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2736 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 12:
#line 309 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2742 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 13:
#line 310 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2748 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 14:
#line 311 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2754 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 15:
#line 312 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2760 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 16:
#line 313 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2766 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 17:
#line 322 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2772 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 18:
#line 323 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = nullptr; }
#line 2778 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 19:
#line 328 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2784 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 20:
#line 329 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2790 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 21:
#line 333 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2799 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 22:
#line 337 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2809 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 23:
#line 349 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2819 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 25:
#line 359 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2828 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 26:
#line 363 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2838 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 27:
#line 375 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2849 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 28:
#line 384 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kImportCSV; }
#line 2855 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 29:
#line 388 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2861 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 30:
#line 398 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2869 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 31:
#line 401 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2879 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 32:
#line 415 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2891 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 33:
#line 422 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2903 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 34:
#line 429 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2916 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 35:
#line 440 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = true; }
#line 2922 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 36:
#line 441 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 2928 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 37:
#line 445 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2934 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 38:
#line 446 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2940 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 39:
#line 450 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 2948 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 40:
#line 456 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2954 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 41:
#line 457 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2960 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 42:
#line 458 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 2966 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 43:
#line 459 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 2972 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 44:
#line 460 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 2978 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 45:
#line 461 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 2984 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 46:
#line 462 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 2990 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 47:
#line 463 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 2996 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 48:
#line 467 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = true; }
#line 3002 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 49:
#line 468 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 3008 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 50:
#line 469 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 3014 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 51:
#line 479 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3025 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 52:
#line 485 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3036 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 53:
#line 491 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3046 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 54:
#line 499 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = true; }
#line 3052 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 55:
#line 500 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 3058 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 56:
#line 509 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3069 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 57:
#line 518 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3079 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 58:
#line 531 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3091 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 59:
#line 538 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3103 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 60:
#line 549 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3109 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 61:
#line 550 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.str_vec) = nullptr; }
#line 3115 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 62:
#line 560 "bison_parser.y" /* yacc.c:1666  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3126 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 63:
#line 569 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3132 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 64:
#line 570 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3138 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 65:
#line 574 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3148 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 68:
#line 588 "bison_parser.y" /* yacc.c:1666  */
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
#line 3167 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 69:
#line 605 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3173 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 70:
#line 606 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3179 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 73:
#line 615 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3194 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 74:
#line 625 "bison_parser.y" /* yacc.c:1666  */
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
#line 3213 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 81:
#line 657 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3227 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 82:
#line 669 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = true; }
#line 3233 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 83:
#line 670 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 3239 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 85:
#line 678 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3245 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 86:
#line 679 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table) = nullptr; }
#line 3251 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 87:
#line 682 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3257 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 88:
#line 687 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3263 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 89:
#line 688 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = nullptr; }
#line 3269 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 90:
#line 692 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3279 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 91:
#line 697 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.group_t) = nullptr; }
#line 3285 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 92:
#line 701 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3291 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 93:
#line 702 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = nullptr; }
#line 3297 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 94:
#line 705 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3303 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 95:
#line 706 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_vec) = nullptr; }
#line 3309 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 96:
#line 710 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3315 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 97:
#line 711 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3321 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 98:
#line 715 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3327 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 99:
#line 719 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_type) = kOrderAsc; }
#line 3333 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 100:
#line 720 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_type) = kOrderDesc; }
#line 3339 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 101:
#line 721 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_type) = kOrderAsc; }
#line 3345 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 102:
#line 727 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3351 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 103:
#line 728 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = nullptr; }
#line 3357 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 104:
#line 732 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3363 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 105:
#line 733 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3369 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 106:
#line 734 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3375 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 107:
#line 735 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = nullptr; }
#line 3381 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 108:
#line 736 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = nullptr;  }
#line 3387 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 109:
#line 737 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3393 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 110:
#line 738 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3399 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 111:
#line 739 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = nullptr; }
#line 3405 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 112:
#line 746 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3411 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 113:
#line 747 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3417 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 114:
#line 751 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3423 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 115:
#line 752 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3429 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 116:
#line 756 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3441 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 122:
#line 774 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3447 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 131:
#line 783 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3453 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 134:
#line 792 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3459 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 135:
#line 793 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3465 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 136:
#line 794 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3471 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 137:
#line 795 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3477 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 138:
#line 796 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3483 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 140:
#line 801 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3489 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 141:
#line 802 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3495 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 142:
#line 803 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3501 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 143:
#line 804 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3507 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 144:
#line 805 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3513 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 145:
#line 806 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3519 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 146:
#line 807 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3525 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 147:
#line 808 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3531 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 148:
#line 809 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3537 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 149:
#line 810 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3543 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 150:
#line 814 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3549 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 151:
#line 815 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3555 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 152:
#line 819 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3561 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 153:
#line 820 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3567 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 154:
#line 821 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3573 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 155:
#line 822 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3579 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 156:
#line 828 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3585 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 157:
#line 829 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3591 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 158:
#line 830 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3597 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 159:
#line 831 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3603 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 160:
#line 835 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3609 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 161:
#line 836 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3615 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 162:
#line 840 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3621 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 163:
#line 841 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3627 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 164:
#line 845 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3633 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 165:
#line 846 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3639 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 166:
#line 847 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3645 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 167:
#line 848 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3651 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 168:
#line 849 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3657 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 169:
#line 850 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3663 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 170:
#line 851 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3669 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 171:
#line 855 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3675 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 172:
#line 856 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3681 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 173:
#line 860 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3687 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 174:
#line 864 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3693 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 175:
#line 865 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3699 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 176:
#line 866 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3705 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 177:
#line 867 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3711 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 178:
#line 868 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3717 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 179:
#line 869 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3723 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 180:
#line 872 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3729 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 181:
#line 876 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3735 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 182:
#line 880 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3741 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 183:
#line 884 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3747 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 184:
#line 885 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3753 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 185:
#line 886 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3759 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 186:
#line 887 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3765 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 192:
#line 899 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3771 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 193:
#line 903 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3777 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 194:
#line 904 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3783 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 195:
#line 908 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3789 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 197:
#line 913 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3795 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 198:
#line 917 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3801 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 199:
#line 921 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3811 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 201:
#line 934 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3822 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 205:
#line 950 "bison_parser.y" /* yacc.c:1666  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3833 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 206:
#line 959 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3839 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 207:
#line 960 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3845 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 208:
#line 965 "bison_parser.y" /* yacc.c:1666  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3857 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 209:
#line 976 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3867 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 210:
#line 985 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 3873 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 211:
#line 986 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 3879 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 213:
#line 992 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 3885 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 215:
#line 998 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = nullptr; }
#line 3891 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 216:
#line 1002 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3897 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 217:
#line 1003 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3903 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 219:
#line 1009 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = nullptr; }
#line 3909 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 220:
#line 1018 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3921 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 221:
#line 1026 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3934 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 222:
#line 1036 "bison_parser.y" /* yacc.c:1666  */
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
#line 3954 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 223:
#line 1054 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinInner; }
#line 3960 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 224:
#line 1055 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinLeft; }
#line 3966 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 225:
#line 1056 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinLeft; }
#line 3972 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 226:
#line 1057 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinRight; }
#line 3978 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 227:
#line 1058 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinRight; }
#line 3984 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 228:
#line 1059 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinFull; }
#line 3990 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 229:
#line 1060 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinFull; }
#line 3996 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 230:
#line 1061 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinFull; }
#line 4002 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 231:
#line 1062 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinCross; }
#line 4008 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 232:
#line 1063 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinInner; }
#line 4014 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 236:
#line 1083 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4020 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 237:
#line 1084 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4026 "bison_parser.cpp" /* yacc.c:1666  */
    break;


#line 4030 "bison_parser.cpp" /* yacc.c:1666  */
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
#line 1087 "bison_parser.y" /* yacc.c:1910  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
