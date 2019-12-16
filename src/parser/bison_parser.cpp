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
    SQL_TRANSACTION = 393,
    SQL_BEGIN = 394,
    SQL_COMMIT = 395,
    SQL_ROLLBACK = 396,
    SQL_EQUALS = 397,
    SQL_NOTEQUALS = 398,
    SQL_LESS = 399,
    SQL_GREATER = 400,
    SQL_LESSEQ = 401,
    SQL_GREATEREQ = 402,
    SQL_NOTNULL = 403,
    SQL_UMINUS = 404
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
	hsql::TransactionStatement* transaction_stmt;

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

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 379 "bison_parser.cpp"

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   783

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  251
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  450

#define YYUNDEFTOK  2
#define YYMAXUTOK   404

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
       2,     2,     2,     2,     2,     2,     2,   156,     2,     2,
     161,   162,   154,   152,   165,   153,   163,   155,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   164,
     145,   142,   146,   166,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   159,     2,   160,   157,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   143,   144,   147,
     148,   149,   150,   151,   158
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   261,   261,   282,   288,   297,   301,   305,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   330,   331,
     336,   337,   341,   345,   357,   360,   363,   368,   368,   374,
     381,   384,   388,   400,   409,   413,   423,   426,   431,   445,
     452,   459,   466,   477,   478,   482,   483,   487,   493,   494,
     495,   496,   497,   498,   499,   500,   504,   505,   506,   516,
     522,   528,   536,   537,   546,   555,   568,   575,   586,   587,
     597,   606,   607,   611,   623,   627,   631,   649,   650,   654,
     655,   659,   669,   686,   690,   691,   692,   696,   697,   701,
     713,   714,   718,   722,   723,   726,   731,   732,   736,   741,
     745,   746,   749,   750,   754,   755,   759,   763,   764,   765,
     771,   772,   776,   777,   778,   779,   780,   781,   788,   789,
     793,   794,   798,   799,   803,   813,   814,   815,   816,   817,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     834,   835,   839,   840,   841,   842,   843,   847,   848,   849,
     850,   851,   852,   853,   854,   855,   856,   857,   861,   862,
     866,   867,   868,   869,   875,   876,   877,   878,   882,   883,
     887,   888,   892,   893,   894,   895,   896,   897,   898,   902,
     903,   907,   911,   912,   913,   914,   915,   916,   919,   923,
     927,   931,   932,   933,   934,   938,   939,   940,   941,   942,
     946,   950,   951,   955,   956,   960,   964,   968,   980,   981,
     991,   992,   996,   997,  1006,  1007,  1012,  1023,  1032,  1033,
    1038,  1039,  1044,  1045,  1049,  1050,  1055,  1056,  1064,  1065,
    1069,  1073,  1077,  1084,  1097,  1105,  1115,  1134,  1135,  1136,
    1137,  1138,  1139,  1140,  1141,  1142,  1143,  1148,  1157,  1158,
    1163,  1164
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
  "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK", "'='",
  "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "import_file_type", "file_path", "show_statement", "create_statement",
  "opt_not_exists", "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_with_paren",
  "select_paren_or_clause", "select_no_paren", "set_operator", "set_type",
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,    61,   397,   398,    60,    62,   399,   400,   401,
     402,   403,    43,    45,    42,    47,    37,    94,   404,    91,
      93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -375

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-375)))

#define YYTABLE_NINF -249

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-249)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     478,    20,   118,   120,   145,   118,   -44,    79,   103,   119,
     118,   -20,     3,   189,    87,    87,    87,   232,    72,  -375,
     115,  -375,   115,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,   -14,  -375,   234,    78,  -375,    82,   163,
    -375,   132,   132,   118,   154,   118,   149,  -375,   150,   150,
     118,  -375,   153,   110,  -375,  -375,  -375,  -375,  -375,  -375,
     473,  -375,   194,  -375,  -375,   178,   -14,     8,  -375,    19,
    -375,   302,     7,   303,   193,   118,   118,   235,  -375,   224,
     157,   316,   279,   118,   118,  -375,   162,   189,  -375,   164,
     318,   315,   166,   172,  -375,  -375,  -375,   -14,   230,   217,
     -14,    -8,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
     176,   177,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,   300,   -66,   157,   218,  -375,   339,   343,    60,   207,
     -61,  -375,  -375,  -375,  -375,  -375,  -375,   347,  -375,  -375,
     218,  -375,  -375,  -375,   283,  -375,  -375,  -375,   218,   283,
     218,    74,  -375,  -375,     7,  -375,   240,   255,   356,   242,
     -62,   201,   202,   136,   262,   205,   295,  -375,   156,    45,
     322,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,   277,  -375,  -375,    47,
     206,  -375,   218,   316,  -375,   213,    54,  -375,   293,   203,
    -375,    88,    -8,   215,  -375,   -40,    -8,    45,   333,   -16,
    -375,   298,  -375,   250,    55,  -375,   255,     6,    11,   332,
     270,   218,    80,     4,   225,   295,   509,   218,   122,   223,
     -70,   218,   218,   295,  -375,   295,   -58,   226,   -25,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   318,   118,  -375,   385,     7,    45,
    -375,     7,  -375,   347,     5,   235,  -375,   218,  -375,   389,
    -375,  -375,  -375,   218,  -375,  -375,  -375,  -375,   218,   218,
     339,  -375,   233,  -375,  -375,   236,  -375,  -375,  -375,    -1,
    -375,   356,  -375,  -375,   218,  -375,  -375,   231,  -375,  -375,
    -375,  -375,  -375,  -375,   321,    -3,    93,   218,   218,  -375,
     332,   317,   -46,  -375,  -375,  -375,   301,   440,   551,   295,
     249,   156,  -375,   323,   252,   551,   551,   551,   551,   587,
     587,   587,   587,   122,   122,   -95,   -95,   -95,   -90,   253,
    -375,  -375,    64,    68,  -375,   255,  -375,   261,  -375,   247,
    -375,    27,  -375,   354,  -375,  -375,  -375,    45,    45,  -375,
     413,   414,  -375,   326,  -375,  -375,    77,  -375,   218,   218,
     218,  -375,    66,    75,   263,  -375,   295,   551,   156,   265,
      91,  -375,  -375,  -375,  -375,   267,   334,  -375,  -375,  -375,
     359,   362,   363,   346,     5,   434,  -375,  -375,  -375,   319,
    -375,   278,   280,  -375,  -375,   -64,    45,    90,  -375,   218,
    -375,   509,   284,    92,  -375,  -375,    27,     5,  -375,  -375,
    -375,     5,   305,   286,   218,  -375,  -375,  -375,  -375,    45,
    -375,  -375,  -375,  -375,   659,   343,   -19,   291,   218,   129,
     218,  -375,    13,    45,  -375,  -375,    45,   276,   292,  -375
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    28,    28,     0,   249,     3,
      19,    17,    19,    16,     9,     7,    10,    15,    12,    13,
      11,    14,     8,     0,   228,     0,   218,    65,    31,     0,
      38,    44,    44,     0,     0,     0,     0,   217,    63,    63,
       0,    36,     0,   230,   231,    27,    24,    26,    25,     1,
     229,     2,     0,     6,     5,   111,     0,    74,    75,   103,
      61,     0,   121,     0,     0,     0,     0,    97,    34,     0,
      69,     0,     0,     0,     0,    37,     0,     0,     4,     0,
       0,    91,     0,     0,    85,    86,    84,     0,    88,     0,
       0,   117,   219,   200,   203,   205,   206,   201,   202,   207,
       0,   120,   122,   195,   196,   197,   204,   198,   199,    30,
      29,     0,     0,    69,     0,    64,     0,     0,     0,     0,
      97,    71,    62,    59,    60,   233,   232,     0,   110,    90,
       0,    78,    77,    79,   103,    80,    87,    83,     0,   103,
       0,     0,    81,    32,     0,    43,     0,   229,     0,     0,
     191,     0,     0,     0,     0,     0,     0,   193,     0,    96,
     125,   132,   133,   134,   127,   129,   135,   128,   147,   136,
     137,   138,   131,   126,   140,   141,     0,    35,   250,     0,
       0,    67,     0,     0,    70,    22,     0,    20,    94,    92,
     118,   227,   117,   102,   104,   109,   117,   113,   115,   112,
     123,     0,    41,     0,     0,    45,   229,    91,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,   142,     0,
       0,     0,     0,     0,   144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,     0,     0,    73,
      72,     0,    18,     0,     0,    97,    93,     0,   225,     0,
     226,   124,    76,     0,   108,   107,   106,    82,     0,     0,
       0,    49,     0,    52,    51,     0,    50,    55,    48,    58,
      40,     0,    42,   179,     0,   192,   194,     0,   182,   183,
     184,   185,   186,   187,     0,     0,     0,     0,     0,   166,
       0,     0,     0,   139,   130,   158,   159,     0,   154,     0,
       0,     0,   145,     0,   157,   156,   172,   173,   174,   175,
     176,   177,   178,   149,   148,   151,   150,   152,   153,     0,
      33,   251,     0,     0,    21,   229,    95,   208,   210,     0,
     212,   223,   211,    99,   119,   224,   105,   116,   114,    39,
       0,     0,    56,     0,    47,    46,     0,   170,     0,     0,
       0,   164,     0,     0,     0,   188,     0,   155,     0,     0,
       0,   146,   189,    66,    23,     0,     0,   245,   237,   243,
     241,   244,   239,     0,     0,     0,   222,   216,   220,     0,
      89,     0,     0,    57,   180,     0,   168,     0,   167,     0,
     171,   190,     0,     0,   162,   160,   223,     0,   240,   242,
     238,     0,   209,   224,     0,    53,    54,   181,   165,   169,
     163,   161,   213,   234,   246,     0,   101,     0,     0,     0,
       0,    98,     0,   247,   235,   221,   100,   191,     0,   236
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -375,  -375,  -375,   381,  -375,   423,  -375,   190,  -375,    56,
    -375,  -375,  -375,  -375,  -375,   175,  -375,  -375,   415,  -375,
     167,  -375,  -375,  -375,   410,  -375,  -375,  -375,   337,  -375,
    -375,   269,  -156,   -12,   369,   -63,   394,  -375,  -375,    53,
     266,  -375,  -375,  -375,  -107,  -375,  -375,    36,  -375,   209,
    -375,  -375,  -171,  -221,  -375,    26,   219,  -124,  -115,  -375,
    -375,  -375,  -375,  -375,  -375,   268,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,    42,   -68,  -117,  -375,  -375,   -83,
    -375,  -375,  -375,  -374,    81,  -375,  -375,  -375,     0,  -375,
      73,   290,  -375,  -375,  -375,  -375,   405,  -375,  -375,  -375,
    -375,    59
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,    19,    20,    63,   196,   197,    21,    56,
      22,   120,    23,    24,    79,   186,    25,    26,    75,   214,
     215,   289,   364,    27,    83,    28,    29,    30,   128,    31,
     130,   131,    32,   143,   144,    68,    97,    98,   147,    69,
     140,   198,   265,   266,   125,   400,   441,   101,   203,   204,
     276,    91,   152,   199,   110,   111,   200,   201,   170,   171,
     172,   173,   174,   175,   176,   223,   177,   178,   179,   180,
     304,   181,   182,   183,   184,   185,   113,   114,   115,   116,
     117,   118,   346,   347,   348,   349,   350,    46,   351,   396,
     397,   398,   271,    33,    34,    53,    54,   352,   393,   444,
      61,   189
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     169,   212,    37,    93,   112,    40,   312,   138,    36,   187,
      47,   103,   104,   105,   295,   124,   447,    94,   139,   156,
     422,    67,    50,   194,   205,   440,   207,   209,    94,    41,
     268,   272,   279,   239,   319,   277,   231,    65,   239,   222,
     150,   274,   231,    77,   230,    80,    35,   434,    95,   226,
      85,   228,   157,    48,    92,   232,    51,    42,   151,    95,
     292,   232,   253,   320,   254,   191,   231,   275,   259,   254,
     322,    57,    58,   366,   135,   122,   123,   160,   103,   104,
     105,    49,    96,   133,   134,   232,   210,   307,   323,    99,
     231,   268,   314,    96,   362,   158,   369,   305,   427,   217,
     380,   218,   106,   231,   193,   229,   308,   315,   316,   232,
     226,    65,   363,   309,   375,   161,   162,   190,   317,   267,
     318,    36,   232,    38,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   160,
     103,   104,   105,   107,   108,   395,   267,    66,    39,   205,
     145,   231,   163,   145,   357,   358,   297,   413,   353,   160,
     103,   104,   105,   187,    43,   296,   345,   167,   293,   106,
     232,   339,   231,   109,   409,   408,   370,   161,   162,   208,
     202,   231,   221,   372,   373,   206,   231,   164,    44,   385,
     112,   232,    52,   112,   231,   308,   231,   161,   162,   428,
     232,   165,   371,   436,   377,   232,   269,    65,    45,   256,
     107,   108,   257,   232,   163,   232,   262,   290,    62,   263,
     291,   160,   103,   104,   105,    55,   383,   166,   167,   154,
     384,   106,    59,   154,   163,   168,    60,    70,   221,   404,
     109,    71,   267,    72,   405,   406,   407,   374,    73,   164,
     239,   106,    74,   415,   431,   340,   267,   267,   379,   161,
     162,   411,    78,   165,    81,   160,   103,   104,   105,   164,
      82,    86,   107,   108,   281,    87,   250,   251,   252,   253,
     282,   254,    89,   165,   342,   429,   386,   343,   283,   166,
     167,   445,   107,   108,   257,    90,   163,   168,   160,   103,
     104,   105,   109,   224,   162,   102,   121,   119,   126,   166,
     167,   124,   284,   106,   443,   412,   446,   168,   127,   129,
     132,   387,   109,    66,   105,   137,   388,   139,   141,   285,
     386,   164,   389,   390,   142,   146,   148,   162,   153,   233,
     163,   155,   154,   103,   286,   165,   188,   391,   287,   192,
     195,  -246,   392,    99,   107,   108,   211,   106,    13,   213,
     216,   288,   219,   220,   227,   387,   255,   258,   267,   234,
     388,   166,   167,   163,   261,   225,   389,   390,   264,   168,
     273,   278,   280,    65,   109,   313,   310,   321,   341,   165,
     106,   391,   355,   367,   360,  -246,   392,   361,   107,   108,
     298,   299,   300,   301,   302,   303,   368,   231,   225,   319,
     378,   254,   394,   382,   235,   166,   167,   399,   381,   401,
     402,   403,   165,   168,   417,   410,  -214,   414,   109,   416,
     418,   107,   108,   419,   420,   236,   421,   423,   424,   218,
     425,    88,   426,   237,   238,    64,   430,   435,   166,   167,
     239,   240,   442,   344,   449,   359,   168,    76,   365,    84,
     159,   109,   260,   100,   241,   242,   243,   244,   245,   149,
    -215,   246,   247,  -248,   248,   249,   250,   251,   252,   253,
       1,   254,   356,   294,   448,     1,   354,   234,     2,   432,
     306,   270,   136,     2,   439,     3,     0,     0,   433,     4,
       3,     0,     0,     0,     4,     5,     0,     0,     6,     7,
       5,     0,     0,     6,     7,     0,     0,     0,     8,     9,
       0,     0,     0,     8,     9,     0,     0,     0,     0,    10,
       0,     0,   235,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   376,     0,     0,     0,
       0,     0,     0,   311,     0,    11,   234,     0,     0,     0,
      11,     0,   238,     0,     0,     0,     0,     0,   239,   240,
      12,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    13,   241,   242,   243,   244,   245,     0,     0,   246,
     247,     0,   248,   249,   250,   251,   252,   253,   234,   254,
       0,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,     0,     0,    14,    15,    16,
       0,     0,   311,     0,     0,     0,     0,     0,     0,     0,
       0,   238,     0,     0,   234,     0,     0,   239,   240,     0,
       0,     0,     0,  -249,     0,     0,     0,     0,     0,     0,
       0,   241,   242,   243,   244,   245,     0,     0,   246,   247,
       0,   248,   249,   250,   251,   252,   253,     0,   254,     0,
       0,     0,     0,   238,     0,     0,     0,     0,     0,   239,
    -249,     0,     0,     0,   386,     0,     0,     0,     0,     0,
       0,     0,     0,  -249,  -249,  -249,   244,   245,     0,     0,
     246,   247,     0,   248,   249,   250,   251,   252,   253,   238,
     254,     0,     0,     0,     0,   239,     0,     0,     0,   387,
       0,     0,     0,     0,   388,     0,     0,     0,     0,     0,
     389,   390,  -249,  -249,   437,     0,  -249,  -249,     0,   248,
     249,   250,   251,   252,   253,   391,   254,     0,     0,     0,
     392,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   438
};

static const yytype_int16 yycheck[] =
{
     124,   157,     2,    66,    72,     5,   227,    90,     3,   126,
      10,     4,     5,     6,     3,    76,     3,     9,    12,    85,
     394,    33,    19,   130,   148,    44,   150,   151,     9,    73,
       3,   202,    48,   128,    92,   206,   106,    51,   128,   163,
      48,    81,   106,    43,   168,    45,    26,   421,    40,   164,
      50,   166,   118,    73,    66,   125,    53,   101,    66,    40,
     216,   125,   157,   121,   159,   128,   106,   107,   192,   159,
      95,    15,    16,   294,    86,    75,    76,     3,     4,     5,
       6,   101,    74,    83,    84,   125,   154,    83,   113,    70,
     106,     3,   162,    74,    95,   161,    99,   221,   162,   161,
     321,   163,    95,   106,   165,   168,   102,   231,   232,   125,
     225,    51,   113,   109,   160,    41,    42,    57,   233,   165,
     235,     3,   125,     3,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     3,
       4,     5,     6,   136,   137,   118,   165,   161,     3,   273,
      97,   106,    78,   100,   278,   279,   219,   378,   265,     3,
       4,     5,     6,   280,    85,   154,   161,   154,   162,    95,
     125,   254,   106,   166,    99,   109,    83,    41,    42,   105,
     144,   106,   102,   307,   308,   149,   106,   113,    85,   345,
     258,   125,     3,   261,   106,   102,   106,    41,    42,   109,
     125,   127,   109,   424,   319,   125,   118,    51,    89,   162,
     136,   137,   165,   125,    78,   125,   162,   162,   103,   165,
     165,     3,     4,     5,     6,   138,   162,   153,   154,   165,
     162,    95,     0,   165,    78,   161,   164,     3,   102,   162,
     166,   163,   165,   161,   368,   369,   370,   310,    85,   113,
     128,    95,   120,   162,   162,   255,   165,   165,   321,    41,
      42,   376,   108,   127,   115,     3,     4,     5,     6,   113,
     120,   118,   136,   137,    24,   165,   154,   155,   156,   157,
      30,   159,    88,   127,   258,   409,    25,   261,    38,   153,
     154,   162,   136,   137,   165,   117,    78,   161,     3,     4,
       5,     6,   166,    41,    42,     3,   113,     4,    84,   153,
     154,    76,    62,    95,   438,   378,   440,   161,   161,     3,
      41,    60,   166,   161,     6,   161,    65,    12,   162,    79,
      25,   113,    71,    72,   162,   105,   119,    42,   162,    17,
      78,    41,   165,     4,    94,   127,     3,    86,    98,   142,
       3,    90,    91,    70,   136,   137,   116,    95,   103,     3,
     118,   111,   161,   161,   159,    60,    89,   161,   165,    47,
      65,   153,   154,    78,   161,   113,    71,    72,    85,   161,
     165,    48,    84,    51,   166,   162,   161,   161,     3,   127,
      95,    86,     3,   162,   161,    90,    91,   161,   136,   137,
     130,   131,   132,   133,   134,   135,    85,   106,   113,    92,
     161,   159,   165,   160,    92,   153,   154,    63,    95,     6,
       6,    95,   127,   161,    90,   162,   165,   162,   166,   162,
      71,   136,   137,    71,    71,   113,    90,     3,   119,   163,
     162,    60,   162,   121,   122,    22,   162,   161,   153,   154,
     128,   129,   161,   263,   162,   280,   161,    42,   291,    49,
     123,   166,   193,    69,   142,   143,   144,   145,   146,   100,
     165,   149,   150,     0,   152,   153,   154,   155,   156,   157,
       7,   159,   273,   217,   442,     7,   267,    47,    15,   416,
     222,   201,    87,    15,   435,    22,    -1,    -1,   417,    26,
      22,    -1,    -1,    -1,    26,    32,    -1,    -1,    35,    36,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    92,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    82,    47,    -1,    -1,    -1,
      82,    -1,   122,    -1,    -1,    -1,    -1,    -1,   128,   129,
      97,    -1,    -1,    -1,    -1,    97,   103,    -1,    -1,    -1,
      -1,   103,   142,   143,   144,   145,   146,    -1,    -1,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,    47,   159,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,    -1,    -1,   139,   140,   141,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    47,    -1,    -1,   128,   129,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,    -1,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,    -1,   159,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,   128,
     129,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   122,
     159,    -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      71,    72,   145,   146,    75,    -1,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,    86,   159,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    45,    46,
      56,    82,    97,   103,   139,   140,   141,   168,   169,   170,
     171,   175,   177,   179,   180,   183,   184,   190,   192,   193,
     194,   196,   199,   260,   261,    26,     3,   255,     3,     3,
     255,    73,   101,    85,    85,    89,   254,   255,    73,   101,
      19,    53,     3,   262,   263,   138,   176,   176,   176,     0,
     164,   267,   103,   172,   172,    51,   161,   200,   202,   206,
       3,   163,   161,    85,   120,   185,   185,   255,   108,   181,
     255,   115,   120,   191,   191,   255,   118,   165,   170,    88,
     117,   218,   200,   202,     9,    40,    74,   203,   204,    70,
     203,   214,     3,     4,     5,     6,    95,   136,   137,   166,
     221,   222,   242,   243,   244,   245,   246,   247,   248,     4,
     178,   113,   255,   255,    76,   211,    84,   161,   195,     3,
     197,   198,    41,   255,   255,   200,   263,   161,   246,    12,
     207,   162,   162,   200,   201,   206,   105,   205,   119,   201,
      48,    66,   219,   162,   165,    41,    85,   118,   161,   195,
       3,    41,    42,    78,   113,   127,   153,   154,   161,   224,
     225,   226,   227,   228,   229,   230,   231,   233,   234,   235,
     236,   238,   239,   240,   241,   242,   182,   243,     3,   268,
      57,   202,   142,   165,   211,     3,   173,   174,   208,   220,
     223,   224,   214,   215,   216,   224,   214,   224,   105,   224,
     242,   116,   199,     3,   186,   187,   118,   161,   163,   161,
     161,   102,   224,   232,    41,   113,   225,   159,   225,   202,
     224,   106,   125,    17,    47,    92,   113,   121,   122,   128,
     129,   142,   143,   144,   145,   146,   149,   150,   152,   153,
     154,   155,   156,   157,   159,    89,   162,   165,   161,   224,
     198,   161,   162,   165,    85,   209,   210,   165,     3,   118,
     258,   259,   219,   165,    81,   107,   217,   219,    48,    48,
      84,    24,    30,    38,    62,    79,    94,    98,   111,   188,
     162,   165,   199,   162,   207,     3,   154,   202,   130,   131,
     132,   133,   134,   135,   237,   224,   232,    83,   102,   109,
     161,   113,   220,   162,   162,   224,   224,   225,   225,    92,
     121,   161,    95,   113,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   246,
     255,     3,   222,   222,   174,   161,   249,   250,   251,   252,
     253,   255,   264,   211,   223,     3,   216,   224,   224,   182,
     161,   161,    95,   113,   189,   187,   220,   162,    85,    99,
      83,   109,   224,   224,   202,   160,   106,   225,   161,   202,
     220,    95,   160,   162,   162,   199,    25,    60,    65,    71,
      72,    86,    91,   265,   165,   118,   256,   257,   258,    63,
     212,     6,     6,    95,   162,   224,   224,   224,   109,    99,
     162,   225,   202,   220,   162,   162,   162,    90,    71,    71,
      71,    90,   250,     3,   119,   162,   162,   162,   109,   224,
     162,   162,   257,   251,   250,   161,   220,    75,   124,   268,
      44,   213,   161,   224,   266,   162,   224,     3,   241,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   167,   168,   169,   169,   170,   170,   170,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   172,   172,
     173,   173,   174,   174,   175,   175,   175,   176,   176,   177,
     178,   179,   179,   180,   181,   182,   183,   183,   183,   184,
     184,   184,   184,   185,   185,   186,   186,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   189,   189,   189,   190,
     190,   190,   191,   191,   192,   193,   194,   194,   195,   195,
     196,   197,   197,   198,   199,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   204,   204,   204,   205,   205,   206,
     207,   207,   208,   209,   209,   210,   211,   211,   212,   212,
     213,   213,   214,   214,   215,   215,   216,   217,   217,   217,
     218,   218,   219,   219,   219,   219,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   224,   224,   224,   224,   224,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     226,   226,   227,   227,   227,   227,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   229,   229,
     230,   230,   230,   230,   231,   231,   231,   231,   232,   232,
     233,   233,   234,   234,   234,   234,   234,   234,   234,   235,
     235,   236,   237,   237,   237,   237,   237,   237,   238,   239,
     240,   241,   241,   241,   241,   242,   242,   242,   242,   242,
     243,   244,   244,   245,   245,   246,   247,   248,   249,   249,
     250,   250,   251,   251,   252,   252,   253,   254,   255,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   262,   262,   263,   264,   264,   264,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   266,   267,   267,
     268,   268
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     0,
       1,     3,     1,     4,     2,     2,     2,     1,     0,     4,
       1,     2,     5,     7,     1,     1,     2,     3,     2,     8,
       7,     6,     7,     3,     0,     1,     3,     3,     1,     1,
       1,     1,     1,     4,     4,     1,     1,     2,     0,     4,
       4,     3,     2,     0,     4,     2,     8,     5,     3,     0,
       5,     1,     3,     3,     2,     2,     6,     3,     3,     1,
       1,     3,     5,     2,     1,     1,     1,     1,     0,     7,
       1,     0,     1,     1,     0,     2,     2,     0,     4,     0,
       2,     0,     3,     0,     1,     3,     2,     1,     1,     0,
       2,     0,     2,     2,     4,     2,     4,     0,     1,     3,
       1,     0,     1,     3,     2,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       5,     6,     5,     6,     4,     6,     3,     5,     4,     5,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     6,     1,     1,     1,     1,     1,     1,     4,     4,
       5,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     4,     1,     3,     2,     1,     1,     3,
       1,     5,     1,     0,     2,     1,     1,     0,     1,     0,
       2,     1,     3,     3,     4,     6,     8,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     0,     1,     1,     0,
       1,     3
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
#line 1755 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 146 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1761 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 144 "bison_parser.y"
      { }
#line 1767 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 144 "bison_parser.y"
      { }
#line 1773 "bison_parser.cpp"
        break;

    case 169: /* statement_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1786 "bison_parser.cpp"
        break;

    case 170: /* statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).statement)); }
#line 1792 "bison_parser.cpp"
        break;

    case 171: /* preparable_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).statement)); }
#line 1798 "bison_parser.cpp"
        break;

    case 172: /* opt_hints  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1811 "bison_parser.cpp"
        break;

    case 173: /* hint_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1824 "bison_parser.cpp"
        break;

    case 174: /* hint  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 1830 "bison_parser.cpp"
        break;

    case 175: /* transaction_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).transaction_stmt)); }
#line 1836 "bison_parser.cpp"
        break;

    case 177: /* prepare_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).prep_stmt)); }
#line 1842 "bison_parser.cpp"
        break;

    case 178: /* prepare_target_query  */
#line 146 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1848 "bison_parser.cpp"
        break;

    case 179: /* execute_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).exec_stmt)); }
#line 1854 "bison_parser.cpp"
        break;

    case 180: /* import_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).import_stmt)); }
#line 1860 "bison_parser.cpp"
        break;

    case 181: /* import_file_type  */
#line 144 "bison_parser.y"
      { }
#line 1866 "bison_parser.cpp"
        break;

    case 182: /* file_path  */
#line 146 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1872 "bison_parser.cpp"
        break;

    case 183: /* show_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).show_stmt)); }
#line 1878 "bison_parser.cpp"
        break;

    case 184: /* create_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).create_stmt)); }
#line 1884 "bison_parser.cpp"
        break;

    case 185: /* opt_not_exists  */
#line 144 "bison_parser.y"
      { }
#line 1890 "bison_parser.cpp"
        break;

    case 186: /* column_def_commalist  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1903 "bison_parser.cpp"
        break;

    case 187: /* column_def  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).column_t)); }
#line 1909 "bison_parser.cpp"
        break;

    case 188: /* column_type  */
#line 144 "bison_parser.y"
      { }
#line 1915 "bison_parser.cpp"
        break;

    case 189: /* opt_column_nullable  */
#line 144 "bison_parser.y"
      { }
#line 1921 "bison_parser.cpp"
        break;

    case 190: /* drop_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).drop_stmt)); }
#line 1927 "bison_parser.cpp"
        break;

    case 191: /* opt_exists  */
#line 144 "bison_parser.y"
      { }
#line 1933 "bison_parser.cpp"
        break;

    case 192: /* delete_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).delete_stmt)); }
#line 1939 "bison_parser.cpp"
        break;

    case 193: /* truncate_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).delete_stmt)); }
#line 1945 "bison_parser.cpp"
        break;

    case 194: /* insert_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).insert_stmt)); }
#line 1951 "bison_parser.cpp"
        break;

    case 195: /* opt_column_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1964 "bison_parser.cpp"
        break;

    case 196: /* update_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).update_stmt)); }
#line 1970 "bison_parser.cpp"
        break;

    case 197: /* update_clause_commalist  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1983 "bison_parser.cpp"
        break;

    case 198: /* update_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).update_t)); }
#line 1989 "bison_parser.cpp"
        break;

    case 199: /* select_statement  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 1995 "bison_parser.cpp"
        break;

    case 200: /* select_with_paren  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2001 "bison_parser.cpp"
        break;

    case 201: /* select_paren_or_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2007 "bison_parser.cpp"
        break;

    case 202: /* select_no_paren  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2013 "bison_parser.cpp"
        break;

    case 206: /* select_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2019 "bison_parser.cpp"
        break;

    case 207: /* opt_distinct  */
#line 144 "bison_parser.y"
      { }
#line 2025 "bison_parser.cpp"
        break;

    case 208: /* select_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2038 "bison_parser.cpp"
        break;

    case 209: /* opt_from_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2044 "bison_parser.cpp"
        break;

    case 210: /* from_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2050 "bison_parser.cpp"
        break;

    case 211: /* opt_where  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2056 "bison_parser.cpp"
        break;

    case 212: /* opt_group  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).group_t)); }
#line 2062 "bison_parser.cpp"
        break;

    case 213: /* opt_having  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2068 "bison_parser.cpp"
        break;

    case 214: /* opt_order  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2081 "bison_parser.cpp"
        break;

    case 215: /* order_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2094 "bison_parser.cpp"
        break;

    case 216: /* order_desc  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).order)); }
#line 2100 "bison_parser.cpp"
        break;

    case 217: /* opt_order_type  */
#line 144 "bison_parser.y"
      { }
#line 2106 "bison_parser.cpp"
        break;

    case 218: /* opt_top  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).limit)); }
#line 2112 "bison_parser.cpp"
        break;

    case 219: /* opt_limit  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).limit)); }
#line 2118 "bison_parser.cpp"
        break;

    case 220: /* expr_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2131 "bison_parser.cpp"
        break;

    case 221: /* opt_literal_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2144 "bison_parser.cpp"
        break;

    case 222: /* literal_list  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2157 "bison_parser.cpp"
        break;

    case 223: /* expr_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2163 "bison_parser.cpp"
        break;

    case 224: /* expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2169 "bison_parser.cpp"
        break;

    case 225: /* operand  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2175 "bison_parser.cpp"
        break;

    case 226: /* scalar_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2181 "bison_parser.cpp"
        break;

    case 227: /* unary_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2187 "bison_parser.cpp"
        break;

    case 228: /* binary_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2193 "bison_parser.cpp"
        break;

    case 229: /* logic_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2199 "bison_parser.cpp"
        break;

    case 230: /* in_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2205 "bison_parser.cpp"
        break;

    case 231: /* case_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2211 "bison_parser.cpp"
        break;

    case 232: /* case_list  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2217 "bison_parser.cpp"
        break;

    case 233: /* exists_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2223 "bison_parser.cpp"
        break;

    case 234: /* comp_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2229 "bison_parser.cpp"
        break;

    case 235: /* function_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2235 "bison_parser.cpp"
        break;

    case 236: /* extract_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2241 "bison_parser.cpp"
        break;

    case 237: /* datetime_field  */
#line 144 "bison_parser.y"
      { }
#line 2247 "bison_parser.cpp"
        break;

    case 238: /* array_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2253 "bison_parser.cpp"
        break;

    case 239: /* array_index  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2259 "bison_parser.cpp"
        break;

    case 240: /* between_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2265 "bison_parser.cpp"
        break;

    case 241: /* column_name  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2271 "bison_parser.cpp"
        break;

    case 242: /* literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2277 "bison_parser.cpp"
        break;

    case 243: /* string_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2283 "bison_parser.cpp"
        break;

    case 244: /* bool_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2289 "bison_parser.cpp"
        break;

    case 245: /* num_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2295 "bison_parser.cpp"
        break;

    case 246: /* int_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2301 "bison_parser.cpp"
        break;

    case 247: /* null_literal  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2307 "bison_parser.cpp"
        break;

    case 248: /* param_expr  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2313 "bison_parser.cpp"
        break;

    case 249: /* table_ref  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2319 "bison_parser.cpp"
        break;

    case 250: /* table_ref_atomic  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2325 "bison_parser.cpp"
        break;

    case 251: /* nonjoin_table_ref_atomic  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2331 "bison_parser.cpp"
        break;

    case 252: /* table_ref_commalist  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2344 "bison_parser.cpp"
        break;

    case 253: /* table_ref_name  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2350 "bison_parser.cpp"
        break;

    case 254: /* table_ref_name_no_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2356 "bison_parser.cpp"
        break;

    case 255: /* table_name  */
#line 145 "bison_parser.y"
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2362 "bison_parser.cpp"
        break;

    case 256: /* table_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2368 "bison_parser.cpp"
        break;

    case 257: /* opt_table_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2374 "bison_parser.cpp"
        break;

    case 258: /* alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2380 "bison_parser.cpp"
        break;

    case 259: /* opt_alias  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2386 "bison_parser.cpp"
        break;

    case 260: /* opt_with_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2392 "bison_parser.cpp"
        break;

    case 261: /* with_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2398 "bison_parser.cpp"
        break;

    case 262: /* with_description_list  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2404 "bison_parser.cpp"
        break;

    case 263: /* with_description  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).with_description_t)); }
#line 2410 "bison_parser.cpp"
        break;

    case 264: /* join_clause  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2416 "bison_parser.cpp"
        break;

    case 265: /* opt_join_type  */
#line 144 "bison_parser.y"
      { }
#line 2422 "bison_parser.cpp"
        break;

    case 266: /* join_condition  */
#line 155 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2428 "bison_parser.cpp"
        break;

    case 268: /* ident_commalist  */
#line 147 "bison_parser.y"
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2441 "bison_parser.cpp"
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

#line 2559 "bison_parser.cpp"

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
#line 261 "bison_parser.y"
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
#line 2770 "bison_parser.cpp"
    break;

  case 3:
#line 282 "bison_parser.y"
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2781 "bison_parser.cpp"
    break;

  case 4:
#line 288 "bison_parser.y"
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2792 "bison_parser.cpp"
    break;

  case 5:
#line 297 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2801 "bison_parser.cpp"
    break;

  case 6:
#line 301 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2810 "bison_parser.cpp"
    break;

  case 7:
#line 305 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2818 "bison_parser.cpp"
    break;

  case 8:
#line 312 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2824 "bison_parser.cpp"
    break;

  case 9:
#line 313 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2830 "bison_parser.cpp"
    break;

  case 10:
#line 314 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2836 "bison_parser.cpp"
    break;

  case 11:
#line 315 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2842 "bison_parser.cpp"
    break;

  case 12:
#line 316 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2848 "bison_parser.cpp"
    break;

  case 13:
#line 317 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2854 "bison_parser.cpp"
    break;

  case 14:
#line 318 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2860 "bison_parser.cpp"
    break;

  case 15:
#line 319 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2866 "bison_parser.cpp"
    break;

  case 16:
#line 320 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2872 "bison_parser.cpp"
    break;

  case 17:
#line 321 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 2878 "bison_parser.cpp"
    break;

  case 18:
#line 330 "bison_parser.y"
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2884 "bison_parser.cpp"
    break;

  case 19:
#line 331 "bison_parser.y"
    { (yyval.expr_vec) = nullptr; }
#line 2890 "bison_parser.cpp"
    break;

  case 20:
#line 336 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2896 "bison_parser.cpp"
    break;

  case 21:
#line 337 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2902 "bison_parser.cpp"
    break;

  case 22:
#line 341 "bison_parser.y"
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2911 "bison_parser.cpp"
    break;

  case 23:
#line 345 "bison_parser.y"
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2921 "bison_parser.cpp"
    break;

  case 24:
#line 357 "bison_parser.y"
    {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 2929 "bison_parser.cpp"
    break;

  case 25:
#line 360 "bison_parser.y"
    {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 2937 "bison_parser.cpp"
    break;

  case 26:
#line 363 "bison_parser.y"
    {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 2945 "bison_parser.cpp"
    break;

  case 29:
#line 374 "bison_parser.y"
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2955 "bison_parser.cpp"
    break;

  case 31:
#line 384 "bison_parser.y"
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2964 "bison_parser.cpp"
    break;

  case 32:
#line 388 "bison_parser.y"
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2974 "bison_parser.cpp"
    break;

  case 33:
#line 400 "bison_parser.y"
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2985 "bison_parser.cpp"
    break;

  case 34:
#line 409 "bison_parser.y"
    { (yyval.uval) = kImportCSV; }
#line 2991 "bison_parser.cpp"
    break;

  case 35:
#line 413 "bison_parser.y"
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2997 "bison_parser.cpp"
    break;

  case 36:
#line 423 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3005 "bison_parser.cpp"
    break;

  case 37:
#line 426 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3015 "bison_parser.cpp"
    break;

  case 38:
#line 431 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3025 "bison_parser.cpp"
    break;

  case 39:
#line 445 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3037 "bison_parser.cpp"
    break;

  case 40:
#line 452 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3049 "bison_parser.cpp"
    break;

  case 41:
#line 459 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3061 "bison_parser.cpp"
    break;

  case 42:
#line 466 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3074 "bison_parser.cpp"
    break;

  case 43:
#line 477 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3080 "bison_parser.cpp"
    break;

  case 44:
#line 478 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3086 "bison_parser.cpp"
    break;

  case 45:
#line 482 "bison_parser.y"
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3092 "bison_parser.cpp"
    break;

  case 46:
#line 483 "bison_parser.y"
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3098 "bison_parser.cpp"
    break;

  case 47:
#line 487 "bison_parser.y"
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3106 "bison_parser.cpp"
    break;

  case 48:
#line 493 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3112 "bison_parser.cpp"
    break;

  case 49:
#line 494 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3118 "bison_parser.cpp"
    break;

  case 50:
#line 495 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3124 "bison_parser.cpp"
    break;

  case 51:
#line 496 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3130 "bison_parser.cpp"
    break;

  case 52:
#line 497 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3136 "bison_parser.cpp"
    break;

  case 53:
#line 498 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3142 "bison_parser.cpp"
    break;

  case 54:
#line 499 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3148 "bison_parser.cpp"
    break;

  case 55:
#line 500 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3154 "bison_parser.cpp"
    break;

  case 56:
#line 504 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3160 "bison_parser.cpp"
    break;

  case 57:
#line 505 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3166 "bison_parser.cpp"
    break;

  case 58:
#line 506 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3172 "bison_parser.cpp"
    break;

  case 59:
#line 516 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3183 "bison_parser.cpp"
    break;

  case 60:
#line 522 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3194 "bison_parser.cpp"
    break;

  case 61:
#line 528 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3204 "bison_parser.cpp"
    break;

  case 62:
#line 536 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3210 "bison_parser.cpp"
    break;

  case 63:
#line 537 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3216 "bison_parser.cpp"
    break;

  case 64:
#line 546 "bison_parser.y"
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3227 "bison_parser.cpp"
    break;

  case 65:
#line 555 "bison_parser.y"
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3237 "bison_parser.cpp"
    break;

  case 66:
#line 568 "bison_parser.y"
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3249 "bison_parser.cpp"
    break;

  case 67:
#line 575 "bison_parser.y"
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3261 "bison_parser.cpp"
    break;

  case 68:
#line 586 "bison_parser.y"
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3267 "bison_parser.cpp"
    break;

  case 69:
#line 587 "bison_parser.y"
    { (yyval.str_vec) = nullptr; }
#line 3273 "bison_parser.cpp"
    break;

  case 70:
#line 597 "bison_parser.y"
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3284 "bison_parser.cpp"
    break;

  case 71:
#line 606 "bison_parser.y"
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3290 "bison_parser.cpp"
    break;

  case 72:
#line 607 "bison_parser.y"
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3296 "bison_parser.cpp"
    break;

  case 73:
#line 611 "bison_parser.y"
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3306 "bison_parser.cpp"
    break;

  case 74:
#line 623 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3315 "bison_parser.cpp"
    break;

  case 75:
#line 627 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3324 "bison_parser.cpp"
    break;

  case 76:
#line 631 "bison_parser.y"
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3344 "bison_parser.cpp"
    break;

  case 77:
#line 649 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3350 "bison_parser.cpp"
    break;

  case 78:
#line 650 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3356 "bison_parser.cpp"
    break;

  case 81:
#line 659 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3371 "bison_parser.cpp"
    break;

  case 82:
#line 669 "bison_parser.y"
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
#line 3390 "bison_parser.cpp"
    break;

  case 89:
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
#line 3404 "bison_parser.cpp"
    break;

  case 90:
#line 713 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3410 "bison_parser.cpp"
    break;

  case 91:
#line 714 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3416 "bison_parser.cpp"
    break;

  case 93:
#line 722 "bison_parser.y"
    { (yyval.table) = (yyvsp[0].table); }
#line 3422 "bison_parser.cpp"
    break;

  case 94:
#line 723 "bison_parser.y"
    { (yyval.table) = nullptr; }
#line 3428 "bison_parser.cpp"
    break;

  case 95:
#line 726 "bison_parser.y"
    { (yyval.table) = (yyvsp[0].table); }
#line 3434 "bison_parser.cpp"
    break;

  case 96:
#line 731 "bison_parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3440 "bison_parser.cpp"
    break;

  case 97:
#line 732 "bison_parser.y"
    { (yyval.expr) = nullptr; }
#line 3446 "bison_parser.cpp"
    break;

  case 98:
#line 736 "bison_parser.y"
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3456 "bison_parser.cpp"
    break;

  case 99:
#line 741 "bison_parser.y"
    { (yyval.group_t) = nullptr; }
#line 3462 "bison_parser.cpp"
    break;

  case 100:
#line 745 "bison_parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3468 "bison_parser.cpp"
    break;

  case 101:
#line 746 "bison_parser.y"
    { (yyval.expr) = nullptr; }
#line 3474 "bison_parser.cpp"
    break;

  case 102:
#line 749 "bison_parser.y"
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3480 "bison_parser.cpp"
    break;

  case 103:
#line 750 "bison_parser.y"
    { (yyval.order_vec) = nullptr; }
#line 3486 "bison_parser.cpp"
    break;

  case 104:
#line 754 "bison_parser.y"
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3492 "bison_parser.cpp"
    break;

  case 105:
#line 755 "bison_parser.y"
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3498 "bison_parser.cpp"
    break;

  case 106:
#line 759 "bison_parser.y"
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3504 "bison_parser.cpp"
    break;

  case 107:
#line 763 "bison_parser.y"
    { (yyval.order_type) = kOrderAsc; }
#line 3510 "bison_parser.cpp"
    break;

  case 108:
#line 764 "bison_parser.y"
    { (yyval.order_type) = kOrderDesc; }
#line 3516 "bison_parser.cpp"
    break;

  case 109:
#line 765 "bison_parser.y"
    { (yyval.order_type) = kOrderAsc; }
#line 3522 "bison_parser.cpp"
    break;

  case 110:
#line 771 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3528 "bison_parser.cpp"
    break;

  case 111:
#line 772 "bison_parser.y"
    { (yyval.limit) = nullptr; }
#line 3534 "bison_parser.cpp"
    break;

  case 112:
#line 776 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3540 "bison_parser.cpp"
    break;

  case 113:
#line 777 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3546 "bison_parser.cpp"
    break;

  case 114:
#line 778 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3552 "bison_parser.cpp"
    break;

  case 115:
#line 779 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3558 "bison_parser.cpp"
    break;

  case 116:
#line 780 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3564 "bison_parser.cpp"
    break;

  case 117:
#line 781 "bison_parser.y"
    { (yyval.limit) = nullptr; }
#line 3570 "bison_parser.cpp"
    break;

  case 118:
#line 788 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3576 "bison_parser.cpp"
    break;

  case 119:
#line 789 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3582 "bison_parser.cpp"
    break;

  case 120:
#line 793 "bison_parser.y"
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3588 "bison_parser.cpp"
    break;

  case 121:
#line 794 "bison_parser.y"
    { (yyval.expr_vec) = nullptr; }
#line 3594 "bison_parser.cpp"
    break;

  case 122:
#line 798 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3600 "bison_parser.cpp"
    break;

  case 123:
#line 799 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3606 "bison_parser.cpp"
    break;

  case 124:
#line 803 "bison_parser.y"
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3618 "bison_parser.cpp"
    break;

  case 130:
#line 821 "bison_parser.y"
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3624 "bison_parser.cpp"
    break;

  case 139:
#line 830 "bison_parser.y"
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3630 "bison_parser.cpp"
    break;

  case 142:
#line 839 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3636 "bison_parser.cpp"
    break;

  case 143:
#line 840 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3642 "bison_parser.cpp"
    break;

  case 144:
#line 841 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3648 "bison_parser.cpp"
    break;

  case 145:
#line 842 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3654 "bison_parser.cpp"
    break;

  case 146:
#line 843 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3660 "bison_parser.cpp"
    break;

  case 148:
#line 848 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3666 "bison_parser.cpp"
    break;

  case 149:
#line 849 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3672 "bison_parser.cpp"
    break;

  case 150:
#line 850 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3678 "bison_parser.cpp"
    break;

  case 151:
#line 851 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3684 "bison_parser.cpp"
    break;

  case 152:
#line 852 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3690 "bison_parser.cpp"
    break;

  case 153:
#line 853 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3696 "bison_parser.cpp"
    break;

  case 154:
#line 854 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3702 "bison_parser.cpp"
    break;

  case 155:
#line 855 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3708 "bison_parser.cpp"
    break;

  case 156:
#line 856 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3714 "bison_parser.cpp"
    break;

  case 157:
#line 857 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3720 "bison_parser.cpp"
    break;

  case 158:
#line 861 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3726 "bison_parser.cpp"
    break;

  case 159:
#line 862 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3732 "bison_parser.cpp"
    break;

  case 160:
#line 866 "bison_parser.y"
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3738 "bison_parser.cpp"
    break;

  case 161:
#line 867 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3744 "bison_parser.cpp"
    break;

  case 162:
#line 868 "bison_parser.y"
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3750 "bison_parser.cpp"
    break;

  case 163:
#line 869 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3756 "bison_parser.cpp"
    break;

  case 164:
#line 875 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3762 "bison_parser.cpp"
    break;

  case 165:
#line 876 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3768 "bison_parser.cpp"
    break;

  case 166:
#line 877 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3774 "bison_parser.cpp"
    break;

  case 167:
#line 878 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3780 "bison_parser.cpp"
    break;

  case 168:
#line 882 "bison_parser.y"
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3786 "bison_parser.cpp"
    break;

  case 169:
#line 883 "bison_parser.y"
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3792 "bison_parser.cpp"
    break;

  case 170:
#line 887 "bison_parser.y"
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3798 "bison_parser.cpp"
    break;

  case 171:
#line 888 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3804 "bison_parser.cpp"
    break;

  case 172:
#line 892 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3810 "bison_parser.cpp"
    break;

  case 173:
#line 893 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3816 "bison_parser.cpp"
    break;

  case 174:
#line 894 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3822 "bison_parser.cpp"
    break;

  case 175:
#line 895 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3828 "bison_parser.cpp"
    break;

  case 176:
#line 896 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3834 "bison_parser.cpp"
    break;

  case 177:
#line 897 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3840 "bison_parser.cpp"
    break;

  case 178:
#line 898 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3846 "bison_parser.cpp"
    break;

  case 179:
#line 902 "bison_parser.y"
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3852 "bison_parser.cpp"
    break;

  case 180:
#line 903 "bison_parser.y"
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3858 "bison_parser.cpp"
    break;

  case 181:
#line 907 "bison_parser.y"
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3864 "bison_parser.cpp"
    break;

  case 182:
#line 911 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3870 "bison_parser.cpp"
    break;

  case 183:
#line 912 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3876 "bison_parser.cpp"
    break;

  case 184:
#line 913 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3882 "bison_parser.cpp"
    break;

  case 185:
#line 914 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3888 "bison_parser.cpp"
    break;

  case 186:
#line 915 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3894 "bison_parser.cpp"
    break;

  case 187:
#line 916 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3900 "bison_parser.cpp"
    break;

  case 188:
#line 919 "bison_parser.y"
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3906 "bison_parser.cpp"
    break;

  case 189:
#line 923 "bison_parser.y"
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3912 "bison_parser.cpp"
    break;

  case 190:
#line 927 "bison_parser.y"
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3918 "bison_parser.cpp"
    break;

  case 191:
#line 931 "bison_parser.y"
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3924 "bison_parser.cpp"
    break;

  case 192:
#line 932 "bison_parser.y"
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3930 "bison_parser.cpp"
    break;

  case 193:
#line 933 "bison_parser.y"
    { (yyval.expr) = Expr::makeStar(); }
#line 3936 "bison_parser.cpp"
    break;

  case 194:
#line 934 "bison_parser.y"
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3942 "bison_parser.cpp"
    break;

  case 200:
#line 946 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3948 "bison_parser.cpp"
    break;

  case 201:
#line 950 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3954 "bison_parser.cpp"
    break;

  case 202:
#line 951 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3960 "bison_parser.cpp"
    break;

  case 203:
#line 955 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3966 "bison_parser.cpp"
    break;

  case 205:
#line 960 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3972 "bison_parser.cpp"
    break;

  case 206:
#line 964 "bison_parser.y"
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3978 "bison_parser.cpp"
    break;

  case 207:
#line 968 "bison_parser.y"
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3988 "bison_parser.cpp"
    break;

  case 209:
#line 981 "bison_parser.y"
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3999 "bison_parser.cpp"
    break;

  case 213:
#line 997 "bison_parser.y"
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4010 "bison_parser.cpp"
    break;

  case 214:
#line 1006 "bison_parser.y"
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4016 "bison_parser.cpp"
    break;

  case 215:
#line 1007 "bison_parser.y"
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4022 "bison_parser.cpp"
    break;

  case 216:
#line 1012 "bison_parser.y"
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4034 "bison_parser.cpp"
    break;

  case 217:
#line 1023 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4044 "bison_parser.cpp"
    break;

  case 218:
#line 1032 "bison_parser.y"
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4050 "bison_parser.cpp"
    break;

  case 219:
#line 1033 "bison_parser.y"
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4056 "bison_parser.cpp"
    break;

  case 221:
#line 1039 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4062 "bison_parser.cpp"
    break;

  case 223:
#line 1045 "bison_parser.y"
    { (yyval.alias_t) = nullptr; }
#line 4068 "bison_parser.cpp"
    break;

  case 224:
#line 1049 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4074 "bison_parser.cpp"
    break;

  case 225:
#line 1050 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4080 "bison_parser.cpp"
    break;

  case 227:
#line 1056 "bison_parser.y"
    { (yyval.alias_t) = nullptr; }
#line 4086 "bison_parser.cpp"
    break;

  case 229:
#line 1065 "bison_parser.y"
    { (yyval.with_description_vec) = nullptr; }
#line 4092 "bison_parser.cpp"
    break;

  case 230:
#line 1069 "bison_parser.y"
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4098 "bison_parser.cpp"
    break;

  case 231:
#line 1073 "bison_parser.y"
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4107 "bison_parser.cpp"
    break;

  case 232:
#line 1077 "bison_parser.y"
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4116 "bison_parser.cpp"
    break;

  case 233:
#line 1084 "bison_parser.y"
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4126 "bison_parser.cpp"
    break;

  case 234:
#line 1098 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4138 "bison_parser.cpp"
    break;

  case 235:
#line 1106 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4151 "bison_parser.cpp"
    break;

  case 236:
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
#line 4171 "bison_parser.cpp"
    break;

  case 237:
#line 1134 "bison_parser.y"
    { (yyval.uval) = kJoinInner; }
#line 4177 "bison_parser.cpp"
    break;

  case 238:
#line 1135 "bison_parser.y"
    { (yyval.uval) = kJoinLeft; }
#line 4183 "bison_parser.cpp"
    break;

  case 239:
#line 1136 "bison_parser.y"
    { (yyval.uval) = kJoinLeft; }
#line 4189 "bison_parser.cpp"
    break;

  case 240:
#line 1137 "bison_parser.y"
    { (yyval.uval) = kJoinRight; }
#line 4195 "bison_parser.cpp"
    break;

  case 241:
#line 1138 "bison_parser.y"
    { (yyval.uval) = kJoinRight; }
#line 4201 "bison_parser.cpp"
    break;

  case 242:
#line 1139 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4207 "bison_parser.cpp"
    break;

  case 243:
#line 1140 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4213 "bison_parser.cpp"
    break;

  case 244:
#line 1141 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4219 "bison_parser.cpp"
    break;

  case 245:
#line 1142 "bison_parser.y"
    { (yyval.uval) = kJoinCross; }
#line 4225 "bison_parser.cpp"
    break;

  case 246:
#line 1143 "bison_parser.y"
    { (yyval.uval) = kJoinInner; }
#line 4231 "bison_parser.cpp"
    break;

  case 250:
#line 1163 "bison_parser.y"
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4237 "bison_parser.cpp"
    break;

  case 251:
#line 1164 "bison_parser.y"
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4243 "bison_parser.cpp"
    break;


#line 4247 "bison_parser.cpp"

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
