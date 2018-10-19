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
    SQL_EQUALS = 391,
    SQL_NOTEQUALS = 392,
    SQL_LESS = 393,
    SQL_GREATER = 394,
    SQL_LESSEQ = 395,
    SQL_GREATEREQ = 396,
    SQL_NOTNULL = 397,
    SQL_UMINUS = 398
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

#line 363 "bison_parser.cpp" /* yacc.c:355  */
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

#line 393 "bison_parser.cpp" /* yacc.c:358  */

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
#define YYLAST   609

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  161
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  234
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  427

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   398

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   150,     2,     2,
     155,   156,   148,   146,   159,   147,   157,   149,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   158,
     139,   136,   140,   160,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   153,     2,   154,   151,     2,     2,     2,     2,     2,
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
     135,   137,   138,   141,   142,   143,   144,   145,   152
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   253,   253,   274,   280,   289,   293,   297,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   321,   322,   327,
     328,   332,   336,   348,   355,   358,   362,   374,   383,   387,
     397,   400,   414,   421,   428,   439,   440,   444,   445,   449,
     455,   456,   457,   458,   459,   460,   461,   462,   466,   467,
     468,   478,   484,   490,   498,   499,   508,   517,   530,   537,
     548,   549,   559,   568,   569,   573,   585,   586,   587,   604,
     605,   609,   610,   614,   624,   641,   645,   646,   647,   651,
     652,   656,   668,   669,   673,   677,   678,   681,   686,   687,
     691,   696,   700,   701,   704,   705,   709,   710,   714,   718,
     719,   720,   726,   727,   731,   732,   733,   734,   735,   736,
     737,   738,   745,   746,   750,   751,   755,   765,   766,   767,
     768,   769,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   786,   787,   791,   792,   793,   794,   795,   799,
     800,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     813,   814,   818,   819,   820,   821,   827,   828,   829,   830,
     834,   835,   839,   840,   844,   845,   846,   847,   848,   849,
     850,   854,   855,   859,   863,   864,   865,   866,   867,   868,
     871,   875,   879,   883,   884,   885,   886,   890,   891,   892,
     893,   897,   902,   903,   907,   911,   915,   927,   928,   938,
     939,   943,   944,   953,   954,   959,   970,   979,   980,   985,
     986,   991,   992,   996,   997,  1002,  1003,  1011,  1019,  1029,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1062,  1071,  1072,  1077,  1078
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
  "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "'='",
  "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
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
  "column_name", "literal", "string_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
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
     385,   386,   387,   388,   389,   390,    61,   391,   392,    60,
      62,   393,   394,   395,   396,   397,    43,    45,    42,    47,
      37,    94,   398,    91,    93,    40,    41,    46,    59,    44,
      63
};
# endif

#define YYPACT_NINF -312

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-312)))

#define YYTABLE_NINF -230

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-230)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    -3,    34,    92,   113,   -44,    40,    70,    81,    75,
      34,    36,    24,   -29,   200,    64,  -312,   131,   131,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,    19,
    -312,    12,   208,    93,  -312,    94,   175,   142,   142,    34,
     160,    34,   263,   262,   161,  -312,   167,   167,    34,  -312,
     135,   153,  -312,    18,  -312,   226,  -312,  -312,  -312,  -312,
    -312,   -29,   221,   196,   -29,   -16,  -312,   313,     2,   326,
     222,    34,    34,   261,  -312,   257,   187,  -312,  -312,  -312,
     185,   340,   303,    34,    34,  -312,  -312,  -312,  -312,   191,
    -312,   277,  -312,  -312,  -312,   185,   277,   263,    69,  -312,
    -312,  -312,  -312,  -312,  -312,  -112,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,   307,   -68,   187,   185,  -312,   352,
     354,    45,    66,   205,   206,   118,   211,   209,   289,  -312,
     124,   278,   213,  -312,    13,   282,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,   228,   -61,  -312,  -312,  -312,  -312,   362,   -16,   214,
    -312,   -46,   -16,  -312,   320,   321,   322,  -312,     2,  -312,
     259,   373,   260,    62,   288,  -312,  -312,    76,   225,  -312,
       7,     8,   330,   220,   185,   123,    11,   227,   289,   392,
     185,   169,   229,   -55,     6,   261,  -312,   185,  -312,   185,
     380,   185,  -312,  -312,   289,  -312,   289,   -66,   231,   -14,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   263,   185,   340,  -312,   232,
     108,  -312,  -312,   185,  -312,  -312,  -312,  -312,   263,   263,
     263,  -312,   304,   415,   127,  -312,   -29,    34,  -312,   386,
       2,  -312,   185,  -312,  -312,   234,  -312,  -312,  -312,  -312,
    -312,  -312,   306,    78,    84,   185,   185,  -312,   330,   300,
      53,  -312,  -312,   -29,  -312,    20,  -312,   235,  -312,    15,
    -312,   333,  -312,  -312,  -312,   287,   332,   426,   289,   242,
     124,  -312,   305,   245,   426,   426,   426,   426,   456,   456,
     456,   456,   169,   169,   -39,   -39,   -39,    29,   247,    62,
    -312,     2,  -312,   362,  -312,  -312,  -312,  -312,   352,  -312,
     244,  -312,  -312,   250,  -312,  -312,  -312,    88,  -312,   373,
    -312,  -312,  -312,   144,   146,  -312,   185,   185,   185,  -312,
      72,    99,   251,  -312,   252,   316,  -312,  -312,  -312,   338,
     341,   342,   324,     6,   412,  -312,  -312,  -312,   298,  -312,
     289,   426,   124,   267,   148,  -312,  -312,   152,  -312,  -312,
     421,   428,  -312,   346,  -312,  -312,  -312,  -312,    74,    62,
     132,  -312,   185,  -312,    15,     6,  -312,  -312,  -312,     6,
     168,   292,   185,   392,   286,   154,  -312,  -312,  -312,   294,
     295,  -312,  -312,  -312,    62,  -312,  -312,   210,   354,   -24,
    -312,  -312,  -312,  -312,   293,   185,   180,   185,  -312,    10,
      62,  -312,  -312,    62,   299,   296,  -312
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,     0,     0,   232,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    66,
      67,    95,     0,   207,    57,    25,     0,    36,    36,     0,
       0,     0,     0,    83,     0,   206,    55,    55,     0,    30,
       0,     0,     1,   231,     2,     0,     6,     5,    77,    78,
      76,     0,    80,     0,     0,   111,    53,     0,     0,     0,
       0,     0,     0,    89,    28,     0,    61,   194,   102,    82,
       0,     0,     0,     0,     0,    31,    70,    69,     4,     0,
      71,    95,    72,    79,    75,     0,    95,     0,     0,    73,
     208,   191,   192,   195,   196,     0,   114,   187,   188,   193,
     189,   190,    24,    23,     0,     0,    61,     0,    56,     0,
       0,     0,   183,     0,     0,     0,     0,     0,     0,   185,
       0,    86,    84,   112,   216,   117,   124,   125,   126,   119,
     121,   127,   120,   139,   128,   129,   130,   123,   118,   132,
     133,     0,    89,    63,    54,    51,    52,     0,   111,    94,
      96,   101,   111,   106,   108,   107,   104,    26,     0,    35,
       0,     0,     0,    88,     0,    29,   233,     0,     0,    59,
      83,     0,     0,     0,     0,     0,     0,     0,     0,   135,
       0,   134,     0,     0,     0,    89,    85,     0,   214,     0,
       0,     0,   215,   116,     0,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    21,
       0,    19,    68,     0,   100,    99,    98,    74,     0,     0,
       0,   115,     0,     0,     0,    37,     0,     0,    60,     0,
       0,   171,     0,   184,   186,     0,   174,   175,   176,   177,
     178,   179,     0,     0,     0,     0,     0,   158,     0,     0,
       0,   131,   122,     0,    87,   197,   199,     0,   201,   212,
     200,    91,   113,   150,   213,   151,     0,   146,     0,     0,
       0,   137,     0,   149,   148,   164,   165,   166,   167,   168,
     169,   170,   141,   140,   143,   142,   144,   145,     0,    65,
      64,     0,    17,     0,    97,   110,   109,   105,     0,    41,
       0,    44,    43,     0,    42,    47,    40,    50,    33,     0,
      34,    27,   234,     0,     0,   162,     0,     0,     0,   156,
       0,     0,     0,   180,     0,     0,   228,   220,   226,   224,
     227,   222,     0,     0,     0,   211,   205,   209,     0,    81,
       0,   147,     0,     0,     0,   138,   181,     0,    20,    32,
       0,     0,    48,     0,    39,    38,    58,   172,     0,   160,
       0,   159,     0,   163,   212,     0,   223,   225,   221,     0,
     198,   213,     0,   182,     0,     0,   154,   152,    22,     0,
       0,    49,   173,   157,   161,   202,   217,   229,     0,    93,
     155,   153,    45,    46,     0,     0,     0,     0,    90,     0,
     230,   218,   210,    92,   183,     0,   219
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,  -312,   390,  -312,   437,  -312,   145,  -312,  -312,
    -312,  -312,  -312,   139,  -312,  -312,   424,  -312,   130,  -312,
    -312,  -312,   416,  -312,  -312,  -312,   348,  -312,  -312,   238,
    -197,     1,   402,   -13,   436,  -312,  -312,   264,   308,  -312,
    -312,  -312,  -122,  -312,  -312,   165,  -312,   241,  -312,  -312,
    -124,  -186,  -223,   290,   -94,   -70,  -312,  -312,  -312,  -312,
    -312,  -312,   301,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,    71,   -65,  -114,  -312,   -30,  -312,  -312,  -312,  -311,
     104,  -312,  -312,  -312,     0,  -312,   107,   358,  -312,  -312,
    -312,  -312,  -312,    85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   230,   231,    18,   113,
      19,    20,    75,   174,    21,    22,    71,   244,   245,   327,
     374,    23,    83,    24,    25,    26,   121,    27,   152,   153,
      28,    29,    91,    30,    61,    62,    94,    31,    80,   131,
     195,   196,   118,   359,   418,    65,   159,   160,   236,    43,
      99,   132,   105,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   186,   142,   143,   144,   145,   262,   146,   147,
     148,   149,   150,   107,   108,   109,   110,   111,   274,   275,
     276,   277,   278,    44,   279,   355,   356,   357,   203,   280,
     352,   421,    54,   177
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   161,    34,   106,   270,   175,   101,   102,    77,    33,
      45,   253,    78,   424,    50,   117,   198,   170,   198,    79,
     417,    58,     9,   173,    32,     1,   288,   333,    58,    37,
     228,   185,    97,     2,   232,   234,   193,    33,   237,    73,
       3,    76,   390,    48,   167,     4,   345,   168,    85,   330,
      98,   199,    59,     5,     6,   289,   189,    38,   191,    59,
     199,   235,    90,     7,     8,    90,   334,   163,   166,     9,
     201,   115,   116,   281,    10,    77,   344,    49,   407,   201,
     346,   291,    63,   155,   156,   347,    60,   171,   367,   210,
     263,   348,   349,    60,   265,    35,     9,   103,   227,   292,
      11,   272,   178,   241,   364,   283,   350,   285,   179,    46,
    -229,   351,   224,   266,   225,    12,    36,   192,   189,   199,
     267,   122,   101,   102,    77,    39,    13,   122,   101,   102,
      77,   200,   309,   354,   286,   197,   287,    47,   201,   161,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,    40,   254,   210,   129,   123,
     124,   273,   104,   251,   164,   123,   124,   338,   199,   255,
      41,   340,   341,    13,   165,     9,   395,   337,   199,  -203,
     199,   381,   225,   372,   199,   106,   266,   201,   122,   101,
     102,    77,    42,   339,   345,   308,   125,   201,   382,   201,
      52,   373,   125,   201,   175,   199,   409,   343,   315,   316,
     317,    66,   197,   103,   122,   101,   102,    77,   361,   103,
     184,   180,    53,   181,   201,   184,   123,   124,   346,   199,
     402,   126,   248,   347,    55,   249,   345,   126,   199,   348,
     349,   403,   378,   379,   380,   127,   106,   331,   201,    68,
      67,   127,   187,   124,   350,   342,   158,   201,  -229,   351,
      69,   162,    70,   125,   312,   128,   129,   313,    74,    77,
     346,   128,   129,   130,    79,   347,    81,   363,   104,   130,
     103,   348,   349,   328,   104,   414,   329,    82,   404,   125,
     393,    86,   122,   101,   102,    77,   350,   210,   126,   204,
     376,   351,   377,   168,   397,   197,   103,   197,   398,    87,
     411,   168,   127,   197,    89,    95,   100,   221,   222,   223,
     224,   420,   225,   423,   188,    92,    93,  -204,    92,   205,
     112,   124,   128,   129,   415,   114,   422,   117,   127,   249,
     130,   119,   120,   151,   154,   104,   157,    63,   169,   394,
     256,   257,   258,   259,   260,   261,   101,   176,   128,   129,
     182,   183,   190,   194,   226,   229,   130,   125,   238,   239,
     240,   104,   197,   233,   206,   242,   243,   247,   246,   205,
     250,     9,   268,   284,   103,   271,   290,   311,   318,   332,
     335,   336,   288,   199,   353,   207,   358,   362,   225,   370,
     365,   366,   188,   208,   209,   371,   385,   383,   384,   386,
     210,   211,   387,   388,   389,   391,   127,   392,   212,   213,
     214,   215,   216,   396,   206,   217,   218,   399,   219,   220,
     221,   222,   223,   224,   400,   225,   128,   129,   360,   205,
     319,   401,   410,    88,   130,   269,   320,   408,   419,   104,
     412,   413,   426,   321,   209,    57,   181,   369,   368,   375,
     210,   211,    72,    84,   172,   310,    96,    64,   212,   213,
     214,   215,   216,   205,   314,   217,   218,   322,   219,   220,
     221,   222,   223,   224,   206,   225,   264,   282,   252,   406,
     425,   405,   202,   416,   323,     0,     0,     0,     0,     0,
       0,     0,     0,   205,     0,   269,     0,     0,     0,   324,
       0,     0,     0,   325,   209,     0,     0,     0,  -230,     0,
     210,   211,     0,     0,     0,     0,   326,     0,   212,   213,
     214,   215,   216,     0,     0,   217,   218,     0,   219,   220,
     221,   222,   223,   224,     0,   225,     0,     0,   209,     0,
       0,     0,     0,     0,   210,  -230,     0,     0,     0,     0,
       0,     0,  -230,  -230,  -230,   215,   216,     0,     0,   217,
     218,     0,   219,   220,   221,   222,   223,   224,   209,   225,
       0,     0,     0,     0,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -230,  -230,     0,     0,  -230,
    -230,     0,   219,   220,   221,   222,   223,   224,     0,   225
};

static const yytype_int16 yycheck[] =
{
      13,    95,     2,    68,   190,   119,     4,     5,     6,     3,
      10,     3,    42,     3,    13,    76,     3,    85,     3,    12,
      44,     9,    51,   117,    27,     7,    92,   250,     9,    73,
     152,   125,    48,    15,   158,    81,   130,     3,   162,    39,
      22,    41,   353,    19,   156,    27,    26,   159,    48,   246,
      66,   106,    40,    35,    36,   121,   126,   101,   128,    40,
     106,   107,    61,    45,    46,    64,   252,    97,    98,    51,
     125,    71,    72,   195,    56,     6,   273,    53,   389,   125,
      60,    95,    70,    83,    84,    65,    74,   155,   311,   128,
     184,    71,    72,    74,    83,     3,    51,    95,   159,   113,
      82,   156,    57,   168,   290,   199,    86,   201,   121,    73,
      90,    91,   151,   102,   153,    97,     3,   130,   188,   106,
     109,     3,     4,     5,     6,    85,   155,     3,     4,     5,
       6,   118,   226,   118,   204,   159,   206,   101,   125,   233,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,    85,   148,   128,   148,    41,
      42,   155,   160,   156,    95,    41,    42,    83,   106,   182,
      89,   265,   266,   155,   105,    51,   362,    99,   106,   159,
     106,   109,   153,    95,   106,   250,   102,   125,     3,     4,
       5,     6,   117,   109,    26,   225,    78,   125,    99,   125,
       0,   113,    78,   125,   318,   106,   392,   154,   238,   239,
     240,     3,   159,    95,     3,     4,     5,     6,   288,    95,
     102,   155,   158,   157,   125,   102,    41,    42,    60,   106,
     156,   113,   156,    65,   103,   159,    26,   113,   106,    71,
      72,   109,   336,   337,   338,   127,   311,   247,   125,   155,
     157,   127,    41,    42,    86,   268,    91,   125,    90,    91,
      85,    96,   120,    78,   156,   147,   148,   159,   108,     6,
      60,   147,   148,   155,    12,    65,   115,   290,   160,   155,
      95,    71,    72,   156,   160,    75,   159,   120,   382,    78,
     360,   156,     3,     4,     5,     6,    86,   128,   113,    17,
     156,    91,   156,   159,   156,   159,    95,   159,   156,   156,
     156,   159,   127,   159,    88,   119,     3,   148,   149,   150,
     151,   415,   153,   417,   113,    61,   105,   159,    64,    47,
       4,    42,   147,   148,   124,   113,   156,    76,   127,   159,
     155,    84,   155,     3,    41,   160,   155,    70,    41,   362,
     130,   131,   132,   133,   134,   135,     4,     3,   147,   148,
     155,   155,   153,    85,   136,     3,   155,    78,    48,    48,
      48,   160,   159,   159,    92,   116,     3,    89,   118,    47,
     155,    51,   155,     3,    95,   156,   155,   155,    84,     3,
     156,    85,    92,   106,   159,   113,    63,   155,   153,   155,
      95,   154,   113,   121,   122,   155,    90,   156,   156,    71,
     128,   129,    71,    71,    90,     3,   127,   119,   136,   137,
     138,   139,   140,   156,    92,   143,   144,     6,   146,   147,
     148,   149,   150,   151,     6,   153,   147,   148,   106,    47,
      25,    95,   156,    53,   155,   113,    31,   155,   155,   160,
     156,   156,   156,    38,   122,    18,   157,   318,   313,   329,
     128,   129,    38,    47,   116,   227,    64,    31,   136,   137,
     138,   139,   140,    47,   233,   143,   144,    62,   146,   147,
     148,   149,   150,   151,    92,   153,   185,   197,   180,   385,
     419,   384,   134,   408,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,   113,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    98,   122,    -1,    -1,    -1,    92,    -1,
     128,   129,    -1,    -1,    -1,    -1,   111,    -1,   136,   137,
     138,   139,   140,    -1,    -1,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,   138,   139,   140,    -1,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   122,   153,
      -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,    -1,   153
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    51,
      56,    82,    97,   155,   162,   163,   164,   165,   169,   171,
     172,   175,   176,   182,   184,   185,   186,   188,   191,   192,
     194,   198,    27,     3,   245,     3,     3,    73,   101,    85,
      85,    89,   117,   210,   244,   245,    73,   101,    19,    53,
     192,   194,     0,   158,   253,   103,   166,   166,     9,    40,
      74,   195,   196,    70,   195,   206,     3,   157,   155,    85,
     120,   177,   177,   245,   108,   173,   245,     6,   236,    12,
     199,   115,   120,   183,   183,   245,   156,   156,   164,    88,
     192,   193,   198,   105,   197,   119,   193,    48,    66,   211,
       3,     4,     5,    95,   160,   213,   233,   234,   235,   236,
     237,   238,     4,   170,   113,   245,   245,    76,   203,    84,
     155,   187,     3,    41,    42,    78,   113,   127,   147,   148,
     155,   200,   212,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   224,   225,   226,   227,   229,   230,   231,   232,
     233,     3,   189,   190,    41,   245,   245,   155,   206,   207,
     208,   215,   206,   236,    95,   105,   236,   156,   159,    41,
      85,   155,   187,   215,   174,   234,     3,   254,    57,   194,
     155,   157,   155,   155,   102,   215,   223,    41,   113,   216,
     153,   216,   194,   215,    85,   201,   202,   159,     3,   106,
     118,   125,   248,   249,    17,    47,    92,   113,   121,   122,
     128,   129,   136,   137,   138,   139,   140,   143,   144,   146,
     147,   148,   149,   150,   151,   153,   136,   159,   203,     3,
     167,   168,   211,   159,    81,   107,   209,   211,    48,    48,
      48,   233,   116,     3,   178,   179,   118,    89,   156,   159,
     155,   156,   199,     3,   148,   194,   130,   131,   132,   133,
     134,   135,   228,   215,   223,    83,   102,   109,   155,   113,
     212,   156,   156,   155,   239,   240,   241,   242,   243,   245,
     250,   203,   214,   215,     3,   215,   216,   216,    92,   121,
     155,    95,   113,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   236,   215,
     190,   155,   156,   159,   208,   236,   236,   236,    84,    25,
      31,    38,    62,    79,    94,    98,   111,   180,   156,   159,
     191,   245,     3,   213,   212,   156,    85,    99,    83,   109,
     215,   215,   194,   154,   191,    26,    60,    65,    71,    72,
      86,    91,   251,   159,   118,   246,   247,   248,    63,   204,
     106,   216,   155,   194,   212,    95,   154,   213,   168,   174,
     155,   155,    95,   113,   181,   179,   156,   156,   215,   215,
     215,   109,    99,   156,   156,    90,    71,    71,    71,    90,
     240,     3,   119,   216,   194,   212,   156,   156,   156,     6,
       6,    95,   156,   109,   215,   247,   241,   240,   155,   212,
     156,   156,   156,   156,    75,   124,   254,    44,   205,   155,
     215,   252,   156,   215,     3,   232,   156
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   161,   162,   163,   163,   164,   164,   164,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   166,   167,
     167,   168,   168,   169,   170,   171,   171,   172,   173,   174,
     175,   175,   176,   176,   176,   177,   177,   178,   178,   179,
     180,   180,   180,   180,   180,   180,   180,   180,   181,   181,
     181,   182,   182,   182,   183,   183,   184,   185,   186,   186,
     187,   187,   188,   189,   189,   190,   191,   191,   191,   192,
     192,   193,   193,   194,   194,   195,   196,   196,   196,   197,
     197,   198,   199,   199,   200,   201,   201,   202,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   209,
     209,   209,   210,   210,   211,   211,   211,   211,   211,   211,
     211,   211,   212,   212,   213,   213,   214,   215,   215,   215,
     215,   215,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   217,   217,   218,   218,   218,   218,   218,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     220,   220,   221,   221,   221,   221,   222,   222,   222,   222,
     223,   223,   224,   224,   225,   225,   225,   225,   225,   225,
     225,   226,   226,   227,   228,   228,   228,   228,   228,   228,
     229,   230,   231,   232,   232,   232,   232,   233,   233,   233,
     233,   234,   235,   235,   236,   237,   238,   239,   239,   240,
     240,   241,   241,   242,   242,   243,   244,   245,   245,   246,
     246,   247,   247,   248,   248,   249,   249,   250,   250,   250,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     252,   253,   253,   254,   254
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
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     4,     1,     3,     2,     1,     1,     3,     1,
       5,     1,     0,     2,     1,     1,     0,     4,     6,     8,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     0,
       1,     1,     0,     1,     3
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
#line 1687 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 4: /* STRING  */
#line 143 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).sval)) ); }
#line 1693 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 5: /* FLOATVAL  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1699 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 6: /* INTVAL  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1705 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 163: /* statement_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1718 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 164: /* statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).statement)); }
#line 1724 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 165: /* preparable_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).statement)); }
#line 1730 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 166: /* opt_hints  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1743 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 167: /* hint_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1756 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 168: /* hint  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 1762 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 169: /* prepare_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1768 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 170: /* prepare_target_query  */
#line 143 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).sval)) ); }
#line 1774 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 171: /* execute_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1780 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 172: /* import_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1786 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 173: /* import_file_type  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1792 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 174: /* file_path  */
#line 143 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).sval)) ); }
#line 1798 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 175: /* show_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1804 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 176: /* create_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1810 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 177: /* opt_not_exists  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1816 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 178: /* column_def_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1829 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 179: /* column_def  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).column_t)); }
#line 1835 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 180: /* column_type  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1841 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 181: /* opt_column_nullable  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1847 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 182: /* drop_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1853 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 183: /* opt_exists  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1859 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 184: /* delete_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1865 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 185: /* truncate_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1871 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 186: /* insert_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1877 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 187: /* opt_column_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1890 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 188: /* update_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1896 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 189: /* update_clause_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1909 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 190: /* update_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).update_t)); }
#line 1915 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 191: /* select_statement  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1921 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 192: /* select_with_paren  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1927 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 193: /* select_paren_or_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1933 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 194: /* select_no_paren  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1939 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 198: /* select_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1945 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 199: /* opt_distinct  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 1951 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 200: /* select_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1964 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 201: /* opt_from_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 1970 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 202: /* from_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 1976 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 203: /* opt_where  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 1982 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 204: /* opt_group  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).group_t)); }
#line 1988 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 205: /* opt_having  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 1994 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 206: /* opt_order  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2007 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 207: /* order_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2020 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 208: /* order_desc  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).order)); }
#line 2026 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 209: /* opt_order_type  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 2032 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 210: /* opt_top  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).limit)); }
#line 2038 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 211: /* opt_limit  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).limit)); }
#line 2044 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 212: /* expr_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2057 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 213: /* literal_list  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2070 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 214: /* expr_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2076 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 215: /* expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2082 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 216: /* operand  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2088 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 217: /* scalar_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2094 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 218: /* unary_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2100 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 219: /* binary_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2106 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 220: /* logic_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2112 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 221: /* in_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2118 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 222: /* case_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2124 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 223: /* case_list  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2130 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 224: /* exists_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2136 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 225: /* comp_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2142 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 226: /* function_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2148 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 227: /* extract_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2154 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 228: /* datetime_field  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 2160 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 229: /* array_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2166 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 230: /* array_index  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2172 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 231: /* between_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2178 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 232: /* column_name  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2184 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 233: /* literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2190 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 234: /* string_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2196 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 235: /* num_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2202 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 236: /* int_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2208 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 237: /* null_literal  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2214 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 238: /* param_expr  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2220 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 239: /* table_ref  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2226 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 240: /* table_ref_atomic  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2232 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 241: /* nonjoin_table_ref_atomic  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2238 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 242: /* table_ref_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2251 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 243: /* table_ref_name  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2257 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 244: /* table_ref_name_no_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2263 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 245: /* table_name  */
#line 142 "bison_parser.y" /* yacc.c:1258  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2269 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 246: /* table_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).alias_t)); }
#line 2275 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 247: /* opt_table_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).alias_t)); }
#line 2281 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 248: /* alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).alias_t)); }
#line 2287 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 249: /* opt_alias  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).alias_t)); }
#line 2293 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 250: /* join_clause  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).table)); }
#line 2299 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 251: /* opt_join_type  */
#line 141 "bison_parser.y" /* yacc.c:1258  */
      { }
#line 2305 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 252: /* join_condition  */
#line 152 "bison_parser.y" /* yacc.c:1258  */
      { delete (((*yyvaluep).expr)); }
#line 2311 "bison_parser.cpp" /* yacc.c:1258  */
        break;

    case 254: /* ident_commalist  */
#line 144 "bison_parser.y" /* yacc.c:1258  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2324 "bison_parser.cpp" /* yacc.c:1258  */
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

#line 2443 "bison_parser.cpp" /* yacc.c:1440  */
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
#line 253 "bison_parser.y" /* yacc.c:1666  */
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
#line 2649 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 3:
#line 274 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2660 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 4:
#line 280 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2671 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 5:
#line 289 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2680 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 6:
#line 293 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2689 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 7:
#line 297 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2697 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 8:
#line 304 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2703 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 9:
#line 305 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2709 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 10:
#line 306 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2715 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 11:
#line 307 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2721 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 12:
#line 308 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2727 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 13:
#line 309 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2733 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 14:
#line 310 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2739 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 15:
#line 311 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2745 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 16:
#line 312 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2751 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 17:
#line 321 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2757 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 18:
#line 322 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = nullptr; }
#line 2763 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 19:
#line 327 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2769 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 20:
#line 328 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2775 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 21:
#line 332 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2784 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 22:
#line 336 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2794 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 23:
#line 348 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2804 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 25:
#line 358 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2813 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 26:
#line 362 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2823 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 27:
#line 374 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2834 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 28:
#line 383 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kImportCSV; }
#line 2840 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 29:
#line 387 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2846 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 30:
#line 397 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2854 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 31:
#line 400 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2864 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 32:
#line 414 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2876 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 33:
#line 421 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2888 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 34:
#line 428 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2901 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 35:
#line 439 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = true; }
#line 2907 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 36:
#line 440 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 2913 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 37:
#line 444 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2919 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 38:
#line 445 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2925 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 39:
#line 449 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 2933 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 40:
#line 455 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2939 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 41:
#line 456 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2945 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 42:
#line 457 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 2951 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 43:
#line 458 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 2957 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 44:
#line 459 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 2963 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 45:
#line 460 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 2969 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 46:
#line 461 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 2975 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 47:
#line 462 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 2981 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 48:
#line 466 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = true; }
#line 2987 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 49:
#line 467 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 2993 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 50:
#line 468 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 2999 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 51:
#line 478 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3010 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 52:
#line 484 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3021 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 53:
#line 490 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3031 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 54:
#line 498 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = true; }
#line 3037 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 55:
#line 499 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 3043 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 56:
#line 508 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3054 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 57:
#line 517 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3064 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 58:
#line 530 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3076 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 59:
#line 537 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3088 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 60:
#line 548 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3094 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 61:
#line 549 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.str_vec) = nullptr; }
#line 3100 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 62:
#line 559 "bison_parser.y" /* yacc.c:1666  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3111 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 63:
#line 568 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3117 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 64:
#line 569 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3123 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 65:
#line 573 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3133 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 68:
#line 587 "bison_parser.y" /* yacc.c:1666  */
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
#line 3152 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 69:
#line 604 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3158 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 70:
#line 605 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3164 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 73:
#line 614 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3179 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 74:
#line 624 "bison_parser.y" /* yacc.c:1666  */
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
#line 3198 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 81:
#line 656 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3212 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 82:
#line 668 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = true; }
#line 3218 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 83:
#line 669 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.bval) = false; }
#line 3224 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 85:
#line 677 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3230 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 86:
#line 678 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table) = nullptr; }
#line 3236 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 87:
#line 681 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3242 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 88:
#line 686 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3248 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 89:
#line 687 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = nullptr; }
#line 3254 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 90:
#line 691 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3264 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 91:
#line 696 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.group_t) = nullptr; }
#line 3270 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 92:
#line 700 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3276 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 93:
#line 701 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = nullptr; }
#line 3282 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 94:
#line 704 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3288 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 95:
#line 705 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_vec) = nullptr; }
#line 3294 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 96:
#line 709 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3300 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 97:
#line 710 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3306 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 98:
#line 714 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3312 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 99:
#line 718 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_type) = kOrderAsc; }
#line 3318 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 100:
#line 719 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_type) = kOrderDesc; }
#line 3324 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 101:
#line 720 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.order_type) = kOrderAsc; }
#line 3330 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 102:
#line 726 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3336 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 103:
#line 727 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = nullptr; }
#line 3342 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 104:
#line 731 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3348 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 105:
#line 732 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3354 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 106:
#line 733 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3360 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 107:
#line 734 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = nullptr; }
#line 3366 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 108:
#line 735 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = nullptr;  }
#line 3372 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 109:
#line 736 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3378 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 110:
#line 737 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3384 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 111:
#line 738 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.limit) = nullptr; }
#line 3390 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 112:
#line 745 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3396 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 113:
#line 746 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3402 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 114:
#line 750 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3408 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 115:
#line 751 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3414 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 116:
#line 755 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3426 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 122:
#line 773 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3432 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 131:
#line 782 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3438 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 134:
#line 791 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3444 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 135:
#line 792 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3450 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 136:
#line 793 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3456 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 137:
#line 794 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3462 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 138:
#line 795 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3468 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 140:
#line 800 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3474 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 141:
#line 801 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3480 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 142:
#line 802 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3486 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 143:
#line 803 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3492 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 144:
#line 804 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3498 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 145:
#line 805 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3504 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 146:
#line 806 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3510 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 147:
#line 807 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3516 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 148:
#line 808 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3522 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 149:
#line 809 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3528 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 150:
#line 813 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3534 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 151:
#line 814 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3540 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 152:
#line 818 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3546 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 153:
#line 819 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3552 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 154:
#line 820 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3558 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 155:
#line 821 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3564 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 156:
#line 827 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3570 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 157:
#line 828 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3576 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 158:
#line 829 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3582 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 159:
#line 830 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3588 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 160:
#line 834 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3594 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 161:
#line 835 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3600 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 162:
#line 839 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3606 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 163:
#line 840 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3612 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 164:
#line 844 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3618 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 165:
#line 845 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3624 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 166:
#line 846 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3630 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 167:
#line 847 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3636 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 168:
#line 848 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3642 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 169:
#line 849 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3648 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 170:
#line 850 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3654 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 171:
#line 854 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3660 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 172:
#line 855 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3666 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 173:
#line 859 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3672 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 174:
#line 863 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3678 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 175:
#line 864 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3684 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 176:
#line 865 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3690 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 177:
#line 866 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3696 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 178:
#line 867 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3702 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 179:
#line 868 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3708 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 180:
#line 871 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3714 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 181:
#line 875 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3720 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 182:
#line 879 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3726 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 183:
#line 883 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3732 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 184:
#line 884 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3738 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 185:
#line 885 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3744 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 186:
#line 886 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3750 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 191:
#line 897 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3756 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 192:
#line 902 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3762 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 194:
#line 907 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3768 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 195:
#line 911 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3774 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 196:
#line 915 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3784 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 198:
#line 928 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3795 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 202:
#line 944 "bison_parser.y" /* yacc.c:1666  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3806 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 203:
#line 953 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3812 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 204:
#line 954 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3818 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 205:
#line 959 "bison_parser.y" /* yacc.c:1666  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3830 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 206:
#line 970 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3840 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 207:
#line 979 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 3846 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 208:
#line 980 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 3852 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 210:
#line 986 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 3858 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 212:
#line 992 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = nullptr; }
#line 3864 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 213:
#line 996 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3870 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 214:
#line 997 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3876 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 216:
#line 1003 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.alias_t) = nullptr; }
#line 3882 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 217:
#line 1012 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3894 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 218:
#line 1020 "bison_parser.y" /* yacc.c:1666  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3907 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 219:
#line 1030 "bison_parser.y" /* yacc.c:1666  */
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
#line 3927 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 220:
#line 1048 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinInner; }
#line 3933 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 221:
#line 1049 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinLeft; }
#line 3939 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 222:
#line 1050 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinLeft; }
#line 3945 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 223:
#line 1051 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinRight; }
#line 3951 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 224:
#line 1052 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinRight; }
#line 3957 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 225:
#line 1053 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinFull; }
#line 3963 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 226:
#line 1054 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinFull; }
#line 3969 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 227:
#line 1055 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinFull; }
#line 3975 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 228:
#line 1056 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinCross; }
#line 3981 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 229:
#line 1057 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.uval) = kJoinInner; }
#line 3987 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 233:
#line 1077 "bison_parser.y" /* yacc.c:1666  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3993 "bison_parser.cpp" /* yacc.c:1666  */
    break;

  case 234:
#line 1078 "bison_parser.y" /* yacc.c:1666  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3999 "bison_parser.cpp" /* yacc.c:1666  */
    break;


#line 4003 "bison_parser.cpp" /* yacc.c:1666  */
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
#line 1081 "bison_parser.y" /* yacc.c:1910  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
