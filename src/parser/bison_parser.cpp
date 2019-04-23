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
#define YYLAST   653

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  428

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   400

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
     744,   745,   749,   750,   754,   755,   759,   769,   770,   771,
     772,   773,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   790,   791,   795,   796,   797,   798,   799,   803,
     804,   805,   806,   807,   808,   809,   810,   811,   812,   813,
     817,   818,   822,   823,   824,   825,   831,   832,   833,   834,
     838,   839,   843,   844,   848,   849,   850,   851,   852,   853,
     854,   858,   859,   863,   867,   868,   869,   870,   871,   872,
     875,   879,   883,   887,   888,   889,   890,   894,   895,   896,
     897,   898,   902,   906,   907,   911,   912,   916,   920,   924,
     936,   937,   947,   948,   952,   953,   962,   963,   968,   979,
     988,   989,   994,   995,  1000,  1001,  1005,  1006,  1011,  1012,
    1020,  1028,  1038,  1057,  1058,  1059,  1060,  1061,  1062,  1063,
    1064,  1065,  1066,  1071,  1080,  1081,  1086,  1087
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
  "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "opt_literal_list", "literal_list", "expr_alias", "expr", "operand",
  "scalar_expr", "unary_expr", "binary_expr", "logic_expr", "in_expr",
  "case_expr", "case_list", "exists_expr", "comp_expr", "function_expr",
  "extract_expr", "datetime_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
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
     385,   386,   387,   388,   389,   390,   391,   392,    61,   393,
     394,    60,    62,   395,   396,   397,   398,   399,    43,    45,
      42,    47,    37,    94,   400,    91,    93,    40,    41,    46,
      59,    44,    63
};
# endif

#define YYPACT_NINF -331

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-331)))

#define YYTABLE_NINF -233

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-233)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,    11,    73,   103,   133,   -42,    99,   138,    57,    98,
      73,   -37,    26,   -39,   225,    75,  -331,   139,   139,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,    37,
    -331,    17,   234,   101,  -331,    93,   171,   156,   156,    73,
     150,    73,   271,   274,   181,  -331,   178,   178,    73,  -331,
     136,   147,  -331,     7,  -331,   219,  -331,  -331,  -331,  -331,
    -331,   -39,   212,   199,   -39,    -4,  -331,   324,    45,   325,
     220,    73,    73,   256,  -331,   250,   184,  -331,  -331,  -331,
     226,   332,   301,    73,    73,  -331,  -331,  -331,  -331,   186,
    -331,   276,  -331,  -331,  -331,   226,   276,   226,    91,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,   189,   187,  -331,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,   308,   -69,
     184,   226,  -331,   348,   354,    63,    62,   201,   203,    97,
     260,   209,   266,  -331,   125,   282,   207,  -331,    16,   298,
    -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,  -331,  -331,   231,   -63,  -331,  -331,  -331,
    -331,   367,    -4,   210,  -331,   -51,    -4,    19,   326,   -33,
    -331,    45,  -331,   261,   369,   263,    19,   289,  -331,  -331,
      27,   229,  -331,    13,    18,   331,   179,   226,   -20,    96,
     235,   266,   409,   226,    61,   233,   -88,     8,   256,  -331,
     226,  -331,   226,   391,   226,  -331,  -331,   266,  -331,   266,
     -60,   238,   -28,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   271,   226,
     332,  -331,   241,    33,  -331,  -331,   226,  -331,  -331,  -331,
    -331,   226,   226,  -331,   315,   542,    39,  -331,   -39,    73,
    -331,   397,    45,  -331,   226,  -331,  -331,   243,  -331,  -331,
    -331,  -331,  -331,  -331,   319,    81,   100,   226,   226,  -331,
     331,   313,   122,  -331,  -331,   -39,  -331,   294,  -331,   245,
    -331,     6,  -331,   344,  -331,  -331,  -331,   302,   366,   443,
     266,   255,   125,  -331,   329,   259,   443,   443,   443,   443,
     477,   477,   477,   477,    61,    61,   -38,   -38,   -38,   -74,
     269,    19,  -331,    45,  -331,   367,  -331,    19,    19,   348,
    -331,   264,  -331,  -331,   272,  -331,  -331,  -331,    82,  -331,
     369,  -331,  -331,  -331,   127,   132,  -331,   226,   226,   226,
    -331,   130,   174,   273,  -331,   275,   340,  -331,  -331,  -331,
     361,   363,   364,   351,     8,   439,  -331,  -331,  -331,   335,
    -331,   266,   443,   125,   287,   134,  -331,  -331,   145,  -331,
    -331,   453,   454,  -331,   370,  -331,  -331,  -331,  -331,   -78,
      19,   175,  -331,   226,  -331,     6,     8,  -331,  -331,  -331,
       8,   392,   304,   226,   409,   309,   158,  -331,  -331,  -331,
     310,   311,  -331,  -331,  -331,    19,  -331,  -331,   265,   354,
     -24,  -331,  -331,  -331,  -331,   305,   226,   165,   226,  -331,
      20,    19,  -331,  -331,    19,   307,   312,  -331
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
      76,     0,    80,     0,     0,   109,    53,     0,   113,     0,
       0,     0,     0,    89,    28,     0,    61,   197,   102,    82,
       0,     0,     0,     0,     0,    31,    70,    69,     4,     0,
      71,    95,    72,    79,    75,     0,    95,     0,     0,    73,
     211,   192,   195,   198,   193,   194,   199,     0,   112,   114,
     187,   188,   189,   196,   190,   191,    24,    23,     0,     0,
      61,     0,    56,     0,     0,     0,   183,     0,     0,     0,
       0,     0,     0,   185,     0,    86,    84,   110,   219,   117,
     124,   125,   126,   119,   121,   127,   120,   139,   128,   129,
     130,   123,   118,   132,   133,     0,    89,    63,    54,    51,
      52,     0,   109,    94,    96,   101,   109,   105,   107,   104,
      26,     0,    35,     0,     0,     0,    88,     0,    29,   236,
       0,     0,    59,    83,     0,     0,     0,     0,     0,     0,
       0,     0,   135,     0,   134,     0,     0,     0,    89,    85,
       0,   217,     0,     0,     0,   218,   116,     0,   136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    21,     0,    19,    68,     0,   100,    99,    98,
      74,     0,     0,   115,     0,     0,     0,    37,     0,     0,
      60,     0,     0,   171,     0,   184,   186,     0,   174,   175,
     176,   177,   178,   179,     0,     0,     0,     0,     0,   158,
       0,     0,     0,   131,   122,     0,    87,   200,   202,     0,
     204,   215,   203,    91,   111,   150,   216,   151,     0,   146,
       0,     0,     0,   137,     0,   149,   148,   164,   165,   166,
     167,   168,   169,   170,   141,   140,   143,   142,   144,   145,
       0,    65,    64,     0,    17,     0,    97,   108,   106,     0,
      41,     0,    44,    43,     0,    42,    47,    40,    50,    33,
       0,    34,    27,   237,     0,     0,   162,     0,     0,     0,
     156,     0,     0,     0,   180,     0,     0,   231,   223,   229,
     227,   230,   225,     0,     0,     0,   214,   208,   212,     0,
      81,     0,   147,     0,     0,     0,   138,   181,     0,    20,
      32,     0,     0,    48,     0,    39,    38,    58,   172,     0,
     160,     0,   159,     0,   163,   215,     0,   226,   228,   224,
       0,   201,   216,     0,   182,     0,     0,   154,   152,    22,
       0,     0,    49,   173,   157,   161,   205,   220,   232,     0,
      93,   155,   153,    45,    46,     0,     0,     0,     0,    90,
       0,   233,   221,   213,    92,   183,     0,   222
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -331,  -331,  -331,   418,  -331,   455,  -331,   159,  -331,  -331,
    -331,  -331,  -331,   157,  -331,  -331,   437,  -331,   151,  -331,
    -331,  -331,   430,  -331,  -331,  -331,   360,  -331,  -331,   254,
    -149,    52,   421,   -13,   456,  -331,  -331,   267,   303,  -331,
    -331,  -331,  -123,  -331,  -331,   126,  -331,   253,  -331,  -331,
     -43,  -185,  -331,  -235,   291,   -94,   -64,  -331,  -331,  -331,
    -331,  -331,  -331,   314,  -331,  -331,  -331,  -331,  -331,  -331,
    -331,  -331,    72,   -62,  -118,  -331,  -331,   -35,  -331,  -331,
    -331,  -330,   107,  -331,  -331,  -331,     0,  -331,   111,   359,
    -331,  -331,  -331,  -331,  -331,    89
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   233,   234,    18,   117,
      19,    20,    75,   177,    21,    22,    71,   246,   247,   328,
     375,    23,    83,    24,    25,    26,   125,    27,   156,   157,
      28,    29,    91,    30,    61,    62,    94,    31,    80,   135,
     198,   199,   122,   360,   419,    65,   163,   164,   239,    43,
      99,   136,   107,   108,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   189,   146,   147,   148,   149,   264,   150,
     151,   152,   153,   154,   110,   111,   112,   113,   114,   115,
     276,   277,   278,   279,   280,    44,   281,   356,   357,   358,
     206,   282,   353,   422,    54,   180
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   165,    34,   167,   169,   178,   109,    78,   272,   201,
      45,    33,     9,   121,     1,   242,   173,   334,   202,   201,
     418,   255,     2,   425,   391,    79,    58,   176,   202,     3,
     237,    37,   290,   231,     4,   188,    46,   204,    32,    73,
     196,    76,     5,     6,    97,    48,    58,   204,    85,   101,
     102,    77,     7,     8,   213,   202,   238,    59,     9,    38,
     408,   291,    98,    10,    47,    50,   192,   293,   194,   335,
     274,   119,   120,   202,   204,   283,    33,    59,   368,    49,
     403,   228,   187,   159,   160,   294,   202,    63,   174,    11,
     213,    60,   204,   265,   126,   101,   102,    77,   230,   331,
     126,   101,   102,    77,    12,   204,    35,   365,   285,   243,
     287,    60,   182,    90,     9,   227,    90,   228,    13,   235,
     181,   195,   202,   240,   355,   202,   345,   192,   126,   101,
     102,    77,   127,   128,   203,   311,    36,   200,   127,   128,
     103,   204,   165,   288,   204,   289,    41,   317,   318,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    13,   275,   127,   128,   256,   129,
     133,   253,   257,   341,   342,   129,     9,   373,   396,   267,
     338,   104,   105,   339,    39,   250,   103,   202,   251,   213,
     109,   314,   103,   310,   315,   374,   168,   329,   268,   187,
     330,   178,   268,   129,   130,   269,   204,   106,   410,   340,
     130,   224,   225,   226,   227,    42,   228,   162,   131,   183,
     103,   184,   166,    40,   131,    52,   362,   104,   105,   126,
     101,   102,    77,   104,   105,    53,   202,    66,   130,   382,
     132,   133,    55,   379,   380,   381,   132,   133,   134,   332,
      68,   109,   131,   106,   134,   204,    69,   343,    74,   106,
      67,   104,   105,   126,   101,   102,    77,   127,   128,   126,
     101,   102,    77,   383,   132,   133,    70,    77,   344,   364,
     202,   202,   134,   200,   404,   377,    79,   106,   171,   405,
     378,   346,   398,   200,    86,   200,    81,   394,    82,   204,
     204,   190,   128,   399,   129,    87,   171,    89,   128,   258,
     259,   260,   261,   262,   263,   207,   412,    93,    95,   200,
     346,   103,   421,   423,   424,   347,   251,   100,    92,   116,
     348,    92,   121,   118,   123,   155,   349,   350,   129,   130,
     415,   124,   158,   161,   129,   208,    63,   170,   171,   172,
     395,   351,   101,   131,   347,   103,   352,   179,   185,   348,
     186,   103,   104,   105,   193,   349,   350,   197,   200,   229,
     232,   236,   245,   191,   241,   132,   133,   244,   249,   191,
     351,   248,     9,   134,  -232,   352,   252,   131,   106,   416,
     209,   273,   270,   131,   286,   292,   104,   105,   313,   319,
     333,   336,   104,   105,   337,   290,   354,   359,   202,   132,
     133,   210,   363,   208,   228,   132,   133,   134,   346,   211,
     212,   371,   106,   134,   366,   367,   213,   214,   106,   372,
     386,   384,   387,   385,   388,   389,   215,   216,   217,   218,
     219,   390,   392,   220,   221,   397,   222,   223,   224,   225,
     226,   227,   347,   228,   393,  -206,   208,   348,   209,   400,
     401,   409,   420,   349,   350,   402,   184,   411,   413,   414,
     427,    88,   361,    57,   369,    72,   370,    84,   351,   271,
     175,   376,  -232,   352,   312,    96,   254,    64,   212,   316,
     208,   284,   426,   407,   213,   214,   406,   205,   417,     0,
       0,   209,   266,     0,   215,   216,   217,   218,   219,     0,
       0,   220,   221,     0,   222,   223,   224,   225,   226,   227,
       0,   228,   271,     0,   208,     0,     0,     0,     0,     0,
       0,   212,     0,     0,     0,  -233,     0,   213,   214,     0,
       0,     0,     0,     0,     0,     0,     0,   215,   216,   217,
     218,   219,     0,  -207,   220,   221,     0,   222,   223,   224,
     225,   226,   227,     0,   228,   212,     0,   320,     0,     0,
       0,   213,  -233,   321,     0,     0,     0,     0,     0,     0,
     322,  -233,  -233,  -233,   218,   219,     0,     0,   220,   221,
       0,   222,   223,   224,   225,   226,   227,     0,   228,   212,
       0,     0,     0,     0,   323,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -233,  -233,
       0,   324,  -233,  -233,     0,   222,   223,   224,   225,   226,
     227,     0,   228,     0,     0,     0,   325,     0,     0,     0,
     326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   327
};

static const yytype_int16 yycheck[] =
{
      13,    95,     2,    97,    98,   123,    68,    42,   193,     3,
      10,     3,    51,    76,     7,    48,    85,   252,   106,     3,
      44,     3,    15,     3,   354,    12,     9,   121,   106,    22,
      81,    73,    92,   156,    27,   129,    73,   125,    27,    39,
     134,    41,    35,    36,    48,    19,     9,   125,    48,     4,
       5,     6,    45,    46,   128,   106,   107,    40,    51,   101,
     390,   121,    66,    56,   101,    13,   130,    95,   132,   254,
     158,    71,    72,   106,   125,   198,     3,    40,   313,    53,
     158,   155,   102,    83,    84,   113,   106,    70,   157,    82,
     128,    74,   125,   187,     3,     4,     5,     6,   161,   248,
       3,     4,     5,     6,    97,   125,     3,   292,   202,   171,
     204,    74,   125,    61,    51,   153,    64,   155,   157,   162,
      57,   134,   106,   166,   118,   106,   275,   191,     3,     4,
       5,     6,    41,    42,   118,   229,     3,   161,    41,    42,
      95,   125,   236,   207,   125,   209,    89,   241,   242,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   157,   157,    41,    42,   150,    78,
     150,   158,   185,   267,   268,    78,    51,    95,   363,    83,
      99,   136,   137,    83,    85,   158,    95,   106,   161,   128,
     252,   158,    95,   228,   161,   113,   105,   158,   102,   102,
     161,   319,   102,    78,   113,   109,   125,   162,   393,   109,
     113,   150,   151,   152,   153,   117,   155,    91,   127,   157,
      95,   159,    96,    85,   127,     0,   290,   136,   137,     3,
       4,     5,     6,   136,   137,   160,   106,     3,   113,   109,
     149,   150,   103,   337,   338,   339,   149,   150,   157,   249,
     157,   313,   127,   162,   157,   125,    85,   270,   108,   162,
     159,   136,   137,     3,     4,     5,     6,    41,    42,     3,
       4,     5,     6,    99,   149,   150,   120,     6,   156,   292,
     106,   106,   157,   161,   109,   158,    12,   162,   161,   383,
     158,    26,   158,   161,   158,   161,   115,   361,   120,   125,
     125,    41,    42,   158,    78,   158,   161,    88,    42,   130,
     131,   132,   133,   134,   135,    17,   158,   105,   119,   161,
      26,    95,   416,   158,   418,    60,   161,     3,    61,     4,
      65,    64,    76,   113,    84,     3,    71,    72,    78,   113,
      75,   157,    41,   157,    78,    47,    70,   158,   161,    41,
     363,    86,     4,   127,    60,    95,    91,     3,   157,    65,
     157,    95,   136,   137,   155,    71,    72,    85,   161,   138,
       3,   161,     3,   113,    48,   149,   150,   116,    89,   113,
      86,   118,    51,   157,    90,    91,   157,   127,   162,   124,
      92,   158,   157,   127,     3,   157,   136,   137,   157,    84,
       3,   158,   136,   137,    85,    92,   161,    63,   106,   149,
     150,   113,   157,    47,   155,   149,   150,   157,    26,   121,
     122,   157,   162,   157,    95,   156,   128,   129,   162,   157,
      90,   158,    71,   158,    71,    71,   138,   139,   140,   141,
     142,    90,     3,   145,   146,   158,   148,   149,   150,   151,
     152,   153,    60,   155,   119,   161,    47,    65,    92,     6,
       6,   157,   157,    71,    72,    95,   159,   158,   158,   158,
     158,    53,   106,    18,   315,    38,   319,    47,    86,   113,
     120,   330,    90,    91,   230,    64,   183,    31,   122,   236,
      47,   200,   420,   386,   128,   129,   385,   138,   409,    -1,
      -1,    92,   188,    -1,   138,   139,   140,   141,   142,    -1,
      -1,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
      -1,   155,   113,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    92,    -1,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   161,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,    -1,   155,   122,    -1,    25,    -1,    -1,
      -1,   128,   129,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      38,   138,   139,   140,   141,   142,    -1,    -1,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,    -1,   155,   122,
      -1,    -1,    -1,    -1,    62,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,    79,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,    -1,   155,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    51,
      56,    82,    97,   157,   164,   165,   166,   167,   171,   173,
     174,   177,   178,   184,   186,   187,   188,   190,   193,   194,
     196,   200,    27,     3,   249,     3,     3,    73,   101,    85,
      85,    89,   117,   212,   248,   249,    73,   101,    19,    53,
     194,   196,     0,   160,   257,   103,   168,   168,     9,    40,
      74,   197,   198,    70,   197,   208,     3,   159,   157,    85,
     120,   179,   179,   249,   108,   175,   249,     6,   240,    12,
     201,   115,   120,   185,   185,   249,   158,   158,   166,    88,
     194,   195,   200,   105,   199,   119,   195,    48,    66,   213,
       3,     4,     5,    95,   136,   137,   162,   215,   216,   236,
     237,   238,   239,   240,   241,   242,     4,   172,   113,   249,
     249,    76,   205,    84,   157,   189,     3,    41,    42,    78,
     113,   127,   149,   150,   157,   202,   214,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   227,   228,   229,   230,
     232,   233,   234,   235,   236,     3,   191,   192,    41,   249,
     249,   157,   208,   209,   210,   218,   208,   218,   105,   218,
     158,   161,    41,    85,   157,   189,   218,   176,   237,     3,
     258,    57,   196,   157,   159,   157,   157,   102,   218,   226,
      41,   113,   219,   155,   219,   196,   218,    85,   203,   204,
     161,     3,   106,   118,   125,   252,   253,    17,    47,    92,
     113,   121,   122,   128,   129,   138,   139,   140,   141,   142,
     145,   146,   148,   149,   150,   151,   152,   153,   155,   138,
     161,   205,     3,   169,   170,   213,   161,    81,   107,   211,
     213,    48,    48,   236,   116,     3,   180,   181,   118,    89,
     158,   161,   157,   158,   201,     3,   150,   196,   130,   131,
     132,   133,   134,   135,   231,   218,   226,    83,   102,   109,
     157,   113,   214,   158,   158,   157,   243,   244,   245,   246,
     247,   249,   254,   205,   217,   218,     3,   218,   219,   219,
      92,   121,   157,    95,   113,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     240,   218,   192,   157,   158,   161,   210,   218,   218,    84,
      25,    31,    38,    62,    79,    94,    98,   111,   182,   158,
     161,   193,   249,     3,   216,   214,   158,    85,    99,    83,
     109,   218,   218,   196,   156,   193,    26,    60,    65,    71,
      72,    86,    91,   255,   161,   118,   250,   251,   252,    63,
     206,   106,   219,   157,   196,   214,    95,   156,   216,   170,
     176,   157,   157,    95,   113,   183,   181,   158,   158,   218,
     218,   218,   109,    99,   158,   158,    90,    71,    71,    71,
      90,   244,     3,   119,   219,   196,   214,   158,   158,   158,
       6,     6,    95,   158,   109,   218,   251,   245,   244,   157,
     214,   158,   158,   158,   158,    75,   124,   258,    44,   207,
     157,   218,   256,   158,   218,     3,   235,   158
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
     214,   214,   215,   215,   216,   216,   217,   218,   218,   218,
     218,   218,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   220,   220,   221,   221,   221,   221,   221,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     223,   223,   224,   224,   224,   224,   225,   225,   225,   225,
     226,   226,   227,   227,   228,   228,   228,   228,   228,   228,
     228,   229,   229,   230,   231,   231,   231,   231,   231,   231,
     232,   233,   234,   235,   235,   235,   235,   236,   236,   236,
     236,   236,   237,   238,   238,   239,   239,   240,   241,   242,
     243,   243,   244,   244,   245,   245,   246,   246,   247,   248,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     254,   254,   254,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   256,   257,   257,   258,   258
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
       1,     0,     2,     0,     2,     2,     4,     2,     4,     0,
       1,     3,     1,     0,     1,     3,     2,     1,     1,     1,
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
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1700 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1706 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1712 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1718 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 165: /* statement_list  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1731 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 166: /* statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1737 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 167: /* preparable_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1743 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* opt_hints  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1756 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* hint_list  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1769 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* hint  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1775 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* prepare_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1781 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* prepare_target_query  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1787 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* execute_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1793 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* import_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1799 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* import_file_type  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1805 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* file_path  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1811 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* show_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1817 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* create_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1823 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* opt_not_exists  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1829 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* column_def_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* column_def  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* column_type  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_column_nullable  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1860 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* drop_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1866 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_exists  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1872 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* delete_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1878 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* truncate_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1884 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* insert_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1890 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_column_list  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1903 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* update_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* update_clause_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1922 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* update_clause  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1928 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* select_statement  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1934 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* select_with_paren  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1940 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* select_paren_or_clause  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1946 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* select_no_paren  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1952 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* select_clause  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1958 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_distinct  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1964 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* select_list  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1977 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_from_clause  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1983 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* from_clause  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1989 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* opt_where  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1995 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_group  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2001 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_having  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2007 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_order  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2020 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* order_list  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2033 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* order_desc  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2039 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_order_type  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2045 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_top  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2051 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_limit  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2057 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* expr_list  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2070 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_literal_list  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2083 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* literal_list  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2096 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* expr_alias  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2102 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2108 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* operand  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2114 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* scalar_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2120 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* unary_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2126 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* binary_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2132 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* logic_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2138 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* in_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2144 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* case_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2150 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* case_list  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2156 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* exists_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2162 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* comp_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2168 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* function_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2174 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* extract_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2180 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* datetime_field  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2186 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* array_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2192 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* array_index  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2198 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* between_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2204 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* column_name  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2210 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* literal  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2216 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* string_literal  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2222 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* bool_literal  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2228 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* num_literal  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2234 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* int_literal  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2240 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* null_literal  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2246 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* param_expr  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2252 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* table_ref  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2258 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* table_ref_atomic  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2264 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* nonjoin_table_ref_atomic  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2270 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* table_ref_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2283 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* table_ref_name  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2289 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* table_ref_name_no_alias  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2295 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* table_name  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2301 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* table_alias  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2307 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* opt_table_alias  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2313 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* alias  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2319 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* opt_alias  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2325 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* join_clause  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2331 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* opt_join_type  */
#line 141 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2337 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* join_condition  */
#line 152 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2343 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* ident_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2356 "bison_parser.cpp" /* yacc.c:1257  */
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

#line 2475 "bison_parser.cpp" /* yacc.c:1429  */
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
#line 254 "bison_parser.y" /* yacc.c:1646  */
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
#line 2680 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 275 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2691 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 281 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2702 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 290 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2711 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 294 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2720 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 298 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2728 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 305 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2734 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 306 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2740 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 307 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2746 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 308 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2752 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 309 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2758 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 310 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2764 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 311 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2770 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 312 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2776 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 313 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2782 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 322 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 323 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 2794 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 328 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2800 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 329 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2806 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 333 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2815 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 337 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2825 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 349 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2835 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 359 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2844 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 363 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2854 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 375 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2865 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 384 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kImportCSV; }
#line 2871 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 388 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2877 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 398 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2885 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 401 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2895 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 415 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2907 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 422 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2919 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 429 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2932 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 440 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 2938 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 441 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 2944 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 445 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2950 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 446 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2956 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 450 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 2964 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 456 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2970 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 457 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2976 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 458 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 2982 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 459 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 2988 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 460 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 2994 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 461 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3000 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 462 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3006 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 463 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3012 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 467 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3018 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 468 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3024 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 469 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3030 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 479 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3041 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 485 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3052 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 491 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3062 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 499 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3068 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 500 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3074 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 509 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3085 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 518 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3095 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 531 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3107 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 538 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3119 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 549 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3125 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 550 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 3131 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 560 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3142 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 569 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3148 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 570 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3154 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 574 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3164 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 588 "bison_parser.y" /* yacc.c:1646  */
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
#line 3183 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 605 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3189 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 606 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3195 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 615 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3210 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 625 "bison_parser.y" /* yacc.c:1646  */
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
#line 3229 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 657 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3243 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 669 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3249 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 670 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3255 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 678 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3261 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 679 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 3267 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 682 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3273 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 687 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3279 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 688 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3285 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 692 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3295 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 697 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 3301 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 701 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3307 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 702 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3313 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 705 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3319 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 706 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 3325 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 710 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3331 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 711 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3337 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 715 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3343 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 719 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3349 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 720 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 3355 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 721 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3361 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 727 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3367 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 728 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3373 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 732 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3379 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 733 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3385 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 734 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3391 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 735 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3397 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 736 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3403 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 737 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3409 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 744 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3415 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 745 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3421 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 749 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3427 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 750 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3433 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 754 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3439 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 755 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3445 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 759 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3457 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 777 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3463 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 786 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3469 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 795 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3475 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 796 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3481 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 797 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3487 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 798 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3493 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 799 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3499 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 804 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3505 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 805 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3511 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 806 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3517 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 807 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3523 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 808 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3529 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 809 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3535 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 810 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3541 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 811 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3547 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 812 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3553 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 813 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3559 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 817 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3565 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 818 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3571 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 822 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3577 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 823 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3583 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 824 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3589 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 825 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3595 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 831 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3601 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 832 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3607 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 833 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3613 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 834 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3619 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 838 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3625 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 839 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3631 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 843 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3637 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 844 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3643 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 848 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3649 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 849 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3655 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 850 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3661 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 851 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3667 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 852 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3673 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 853 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3679 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 854 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3685 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 858 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3691 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 859 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3697 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 863 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3703 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 867 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3709 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 868 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3715 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 869 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3721 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 870 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3727 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 871 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 872 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3739 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 875 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3745 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 879 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3751 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 883 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3757 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 887 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3763 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 888 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3769 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 889 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3775 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 890 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3781 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 902 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3787 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 906 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3793 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 907 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3799 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 911 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3805 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 916 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3811 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 920 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3817 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 924 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3827 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 937 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3838 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 953 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3849 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 962 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3855 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 963 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3861 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 968 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3873 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 979 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3883 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 988 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 3889 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 989 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 3895 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 995 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 3901 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1001 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 3907 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1005 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3913 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1006 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3919 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1012 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 3925 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1021 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3937 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1029 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3950 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1039 "bison_parser.y" /* yacc.c:1646  */
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
#line 3970 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1057 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3976 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1058 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 3982 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1059 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 3988 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1060 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 3994 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1061 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 4000 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1062 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4006 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1063 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4012 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1064 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4018 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1065 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinCross; }
#line 4024 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1066 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 4030 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1086 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4036 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1087 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4042 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 4046 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 1090 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
