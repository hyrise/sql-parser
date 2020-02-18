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
    SQL_FORMAT = 298,
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
    SQL_FLOAT = 318,
    SQL_GROUP = 319,
    SQL_INDEX = 320,
    SQL_INNER = 321,
    SQL_LIMIT = 322,
    SQL_LOCAL = 323,
    SQL_MERGE = 324,
    SQL_MINUS = 325,
    SQL_ORDER = 326,
    SQL_OUTER = 327,
    SQL_RIGHT = 328,
    SQL_TABLE = 329,
    SQL_UNION = 330,
    SQL_USING = 331,
    SQL_WHERE = 332,
    SQL_CALL = 333,
    SQL_CASE = 334,
    SQL_CHAR = 335,
    SQL_COPY = 336,
    SQL_DATE = 337,
    SQL_DESC = 338,
    SQL_DROP = 339,
    SQL_ELSE = 340,
    SQL_FILE = 341,
    SQL_FROM = 342,
    SQL_FULL = 343,
    SQL_HASH = 344,
    SQL_HINT = 345,
    SQL_INTO = 346,
    SQL_JOIN = 347,
    SQL_LEFT = 348,
    SQL_LIKE = 349,
    SQL_LOAD = 350,
    SQL_LONG = 351,
    SQL_NULL = 352,
    SQL_PLAN = 353,
    SQL_SHOW = 354,
    SQL_TEXT = 355,
    SQL_THEN = 356,
    SQL_TIME = 357,
    SQL_VIEW = 358,
    SQL_WHEN = 359,
    SQL_WITH = 360,
    SQL_ADD = 361,
    SQL_ALL = 362,
    SQL_AND = 363,
    SQL_ASC = 364,
    SQL_END = 365,
    SQL_FOR = 366,
    SQL_INT = 367,
    SQL_KEY = 368,
    SQL_NOT = 369,
    SQL_OFF = 370,
    SQL_SET = 371,
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
	hsql::ExportStatement* 	export_stmt;
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
	hsql::ImportType import_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;
	hsql::SetOperation* set_operator_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 382 "bison_parser.cpp"

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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   725

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  258
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  465

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
       0,   269,   269,   290,   296,   305,   309,   313,   316,   319,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   343,
     344,   349,   350,   354,   358,   370,   373,   376,   382,   383,
     390,   397,   400,   404,   418,   424,   433,   450,   454,   457,
     466,   480,   483,   488,   502,   515,   522,   529,   540,   541,
     545,   546,   550,   556,   557,   558,   559,   560,   561,   562,
     563,   567,   568,   569,   579,   585,   591,   599,   600,   609,
     618,   631,   638,   649,   650,   660,   669,   670,   674,   686,
     690,   694,   708,   709,   712,   713,   724,   725,   729,   739,
     752,   759,   763,   767,   774,   777,   783,   795,   796,   800,
     804,   805,   809,   814,   815,   819,   824,   828,   829,   833,
     834,   838,   839,   843,   847,   848,   849,   855,   856,   860,
     861,   862,   863,   864,   865,   872,   873,   877,   878,   882,
     883,   887,   897,   898,   899,   900,   901,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   918,   919,   923,
     924,   925,   926,   927,   931,   932,   933,   934,   935,   936,
     937,   938,   939,   940,   941,   945,   946,   950,   951,   952,
     953,   959,   960,   961,   962,   966,   967,   971,   972,   976,
     977,   978,   979,   980,   981,   982,   986,   987,   991,   995,
     996,   997,   998,   999,  1000,  1004,  1008,  1012,  1016,  1017,
    1018,  1019,  1023,  1024,  1025,  1026,  1027,  1031,  1035,  1036,
    1040,  1041,  1045,  1049,  1053,  1065,  1066,  1076,  1077,  1081,
    1082,  1091,  1092,  1097,  1108,  1117,  1118,  1123,  1124,  1129,
    1130,  1135,  1136,  1141,  1142,  1151,  1152,  1156,  1160,  1164,
    1171,  1184,  1192,  1202,  1221,  1222,  1223,  1224,  1225,  1226,
    1227,  1228,  1229,  1230,  1235,  1244,  1245,  1250,  1251
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
  "EXTRACT", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL",
  "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE",
  "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA",
  "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS",
  "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL",
  "CASE", "CHAR", "COPY", "DATE", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH",
  "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF",
  "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO",
  "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK",
  "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "datetime_field", "array_expr",
  "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
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

#define YYPACT_NINF -369

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-369)))

#define YYTABLE_NINF -256

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-256)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     482,    23,    79,   159,   178,    79,   -39,    69,    95,   112,
      79,    79,   -17,    26,   180,    81,    81,    81,   231,    73,
    -369,   147,  -369,   147,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,   -23,  -369,   247,    94,  -369,
     100,   191,  -369,   164,   164,    79,   286,    79,   184,  -369,
     -21,   176,   176,    79,  -369,   189,   144,  -369,  -369,  -369,
    -369,  -369,  -369,   477,  -369,   220,  -369,  -369,   203,   -23,
      44,  -369,   113,  -369,   319,    10,   321,   209,    79,    79,
     251,  -369,   243,   171,   330,   331,   331,   293,    79,    79,
    -369,   177,   180,  -369,   181,   333,   325,   182,   183,  -369,
    -369,  -369,   -23,   239,   232,   -23,    -9,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,   199,   188,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,   315,   -48,   171,   271,
    -369,   331,   359,     2,   223,   -44,  -369,   261,  -369,   261,
    -369,  -369,  -369,  -369,  -369,   366,  -369,  -369,   271,  -369,
    -369,   300,  -369,  -369,    44,  -369,  -369,   271,   300,   271,
     126,  -369,  -369,    10,  -369,   367,   267,   370,   259,   -89,
     219,   221,   145,   299,   227,   222,  -369,   194,    96,   326,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,   290,  -369,    76,   226,  -369,
     271,   330,  -369,   346,  -369,  -369,   230,   105,  -369,   305,
     228,  -369,    17,    -9,   -23,   229,  -369,   -46,    -9,    96,
     348,     1,  -369,   313,  -369,   492,   106,  -369,   267,    11,
      16,   351,   468,   271,   140,   -49,   244,   222,   530,   271,
      52,   238,   -52,   271,   271,   222,  -369,   222,   -56,   245,
     -55,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   333,    79,  -369,   401,
      10,    96,  -369,   286,    10,  -369,   366,    14,   251,  -369,
     271,  -369,   406,  -369,  -369,  -369,  -369,   271,  -369,  -369,
    -369,  -369,   271,   271,   331,  -369,   249,  -369,  -369,   250,
    -369,  -369,  -369,   137,  -369,   370,  -369,  -369,   271,  -369,
    -369,   252,  -369,  -369,  -369,  -369,  -369,  -369,   332,    53,
      92,   271,   271,  -369,   351,   318,    -5,  -369,  -369,  -369,
     308,   483,   566,   222,   257,   194,  -369,   334,   264,   566,
     566,   566,   566,   397,   397,   397,   397,    52,    52,    61,
      61,    61,     0,   268,  -369,  -369,   121,  -369,   123,  -369,
     267,  -369,    51,  -369,   262,  -369,    19,  -369,   365,  -369,
    -369,  -369,    96,    96,  -369,   424,   427,  -369,   337,  -369,
    -369,   128,  -369,   271,   271,   271,  -369,   122,   114,   276,
    -369,   222,   566,   194,   277,   132,  -369,  -369,  -369,  -369,
     279,   350,  -369,  -369,  -369,   371,   372,   374,   357,    14,
     447,  -369,  -369,  -369,   338,  -369,   289,   294,  -369,  -369,
      32,    96,   135,  -369,   271,  -369,   530,   296,   152,  -369,
    -369,    19,    14,  -369,  -369,  -369,    14,   329,   298,   271,
    -369,  -369,  -369,  -369,    96,  -369,  -369,  -369,  -369,   291,
     359,   -20,   301,   271,   153,   271,  -369,    18,    96,  -369,
    -369,    96,   303,   302,  -369
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   256,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   235,     0,   225,    70,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   224,
       0,    68,    68,     0,    41,     0,   237,   238,    28,    25,
      27,    26,     1,   236,     2,     0,     6,     5,   118,     0,
      79,    80,   110,    66,     0,   128,     0,     0,     0,     0,
     104,    36,     0,    74,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,    98,     0,     0,    92,
      93,    91,     0,    95,     0,     0,   124,   226,   207,   210,
     212,   213,   208,   209,   214,     0,   127,   129,   202,   203,
     204,   211,   205,   206,    31,    30,     0,     0,    74,     0,
      69,     0,     0,     0,     0,   104,    76,    39,    37,    39,
      67,    64,    65,   240,   239,     0,   117,    97,     0,    87,
      86,   110,    83,    82,    84,    94,    90,     0,   110,     0,
       0,    88,    33,     0,    48,     0,   236,     0,     0,   198,
       0,     0,     0,     0,     0,     0,   200,     0,   103,   132,
     139,   140,   141,   134,   136,   142,   135,   154,   143,   144,
     145,   138,   133,   147,   148,     0,   257,     0,     0,    72,
       0,     0,    75,     0,    35,    40,    23,     0,    21,   101,
      99,   125,   234,   124,     0,   109,   111,   116,   124,   120,
     122,   119,   130,     0,    46,     0,     0,    50,   236,    98,
       0,     0,     0,     0,     0,     0,     0,     0,   150,     0,
     149,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,    78,    77,     0,     0,    19,     0,     0,   104,   100,
       0,   232,     0,   233,   131,    81,    85,     0,   115,   114,
     113,    89,     0,     0,     0,    54,     0,    57,    56,     0,
      55,    60,    53,    63,    45,     0,    47,   186,     0,   199,
     201,     0,   189,   190,   191,   192,   193,   194,     0,     0,
       0,     0,     0,   173,     0,     0,     0,   146,   137,   165,
     166,     0,   161,     0,     0,     0,   152,     0,   164,   163,
     179,   180,   181,   182,   183,   184,   185,   156,   155,   158,
     157,   159,   160,     0,    34,   258,     0,    38,     0,    22,
     236,   102,   215,   217,     0,   219,   230,   218,   106,   126,
     231,   112,   123,   121,    44,     0,     0,    61,     0,    52,
      51,     0,   177,     0,     0,     0,   171,     0,     0,     0,
     195,     0,   162,     0,     0,     0,   153,   196,    71,    24,
       0,     0,   252,   244,   250,   248,   251,   246,     0,     0,
       0,   229,   223,   227,     0,    96,     0,     0,    62,   187,
       0,   175,     0,   174,     0,   178,   197,     0,     0,   169,
     167,   230,     0,   247,   249,   245,     0,   216,   231,     0,
      58,    59,   188,   172,   176,   170,   168,   220,   241,   253,
       0,   108,     0,     0,     0,     0,   105,     0,   254,   242,
     228,   107,   198,     0,   243
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,  -369,  -369,   398,  -369,   440,  -369,   197,  -369,   117,
    -369,  -369,  -369,  -369,   201,   -84,   328,  -369,  -369,  -369,
     442,  -369,   185,  -369,  -369,  -369,   435,  -369,  -369,  -369,
     360,  -369,  -369,   292,  -159,   -73,  -369,    83,   -66,   -38,
    -369,  -369,   -78,   266,  -369,  -369,  -369,  -109,  -369,  -369,
     -31,  -369,   204,  -369,  -369,   -28,  -227,  -369,   -79,   216,
    -129,  -162,  -369,  -369,  -369,  -369,  -369,  -369,   272,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,    41,   -57,   -80,
    -369,  -369,   -87,  -369,  -369,  -369,  -368,    68,  -369,  -369,
    -369,    -1,  -369,    70,   295,  -369,  -369,  -369,  -369,   410,
    -369,  -369,  -369,  -369,    55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   207,   208,    22,    59,
      23,   125,    24,    25,    82,   137,   204,    26,    27,    28,
      78,   226,   227,   303,   379,    29,    88,    30,    31,    32,
     133,    33,   135,   136,    34,   151,   152,   153,    71,   102,
     103,   156,    72,   148,   209,   278,   279,   130,   415,   456,
     106,   215,   216,   290,    96,   161,   210,   115,   116,   211,
     212,   179,   180,   181,   182,   183,   184,   185,   235,   186,
     187,   188,   189,   318,   190,   191,   192,   193,   194,   118,
     119,   120,   121,   122,   123,   361,   362,   363,   364,   365,
      48,   366,   411,   412,   413,   284,    35,    36,    56,    57,
     367,   408,   459,    64,   197
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     178,    39,   139,    98,    42,   138,   138,   224,   146,    49,
      50,   238,   326,   240,   108,   109,   110,    38,   117,   309,
     281,   462,   281,   147,   154,   455,   202,   154,   217,    68,
     219,   221,   158,   129,   105,    43,   321,   288,   333,   165,
     159,   437,   336,   234,    80,    53,    83,   195,   242,    37,
     293,   138,    90,    99,    68,   322,   243,    51,   160,   337,
     198,   323,   243,   289,    44,   334,    85,   199,   449,   306,
     166,   271,   229,   244,   230,   238,   401,   127,   128,   244,
      54,   381,    38,   331,   100,   332,    52,   141,   142,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   319,    86,   222,   111,   395,   243,
     328,   241,   402,   167,   329,   330,   214,   403,    70,   101,
     213,   201,    99,   404,   405,   243,   244,   218,   251,   169,
     108,   109,   110,    60,    61,   282,   154,   410,    69,   406,
     243,   286,   244,  -253,   407,   280,   112,   113,   169,   108,
     109,   110,    97,   100,   384,   390,    45,   244,   217,   266,
     280,   243,    40,   372,   373,   311,   428,   170,   171,   368,
     310,   392,   176,   307,   143,   360,   114,   385,   244,   353,
     251,    41,    46,    55,   104,   285,   170,   171,   101,   251,
     291,   356,   387,   388,   442,   358,   322,   169,   108,   109,
     110,   400,   386,    47,   243,   172,   262,   263,   264,   265,
     374,   266,   451,   117,   138,   424,  -221,   117,   265,    58,
     266,   244,   243,   111,   172,   169,   108,   109,   110,   426,
     243,    62,   423,   220,   377,   170,   171,    63,   268,   244,
     173,   269,   111,   243,   233,   443,    68,   244,   243,   233,
      73,   378,    65,   174,   420,   421,   422,    74,   389,   173,
     244,    75,   112,   113,   171,   244,   354,   275,   304,   394,
     276,   305,   174,   172,   169,   108,   109,   110,    76,   175,
     176,   112,   113,   398,    77,   399,   163,   177,   163,    81,
     419,   111,   114,   280,   430,   444,    87,   280,   175,   176,
      84,   172,   169,   108,   109,   110,   177,    91,   173,    92,
      94,   114,   170,   171,   446,   460,   401,   280,   269,   111,
      95,   174,   107,   126,   458,   124,   461,   427,   129,   131,
     112,   113,   132,   134,   140,   108,   237,   147,    69,   110,
     236,   171,   145,   245,   149,   150,   155,   175,   176,   174,
     172,   157,   402,   163,   401,   177,   164,   403,   112,   113,
     114,   162,   196,   404,   405,   200,   203,   452,   111,   206,
     223,   104,    14,   225,   246,   175,   176,   228,   172,   406,
     231,   267,   232,   177,   407,   173,   239,   270,   114,   273,
     402,   274,   277,   280,   287,   403,   111,   292,   174,   294,
     327,   404,   405,    68,   355,   324,   335,   112,   113,   370,
     375,   376,   333,   237,   382,   453,   243,   406,   393,   383,
     247,  -253,   407,   266,   175,   176,   174,   409,   397,   414,
     416,   396,   177,   417,   418,   112,   113,   114,   425,   429,
     248,   431,   432,   433,   434,   246,   435,   249,   250,   436,
     438,   440,   175,   176,   251,   252,   441,   439,   445,   450,
     177,    93,   457,    67,   464,   114,   230,   205,   253,   254,
     255,   256,   257,   359,   357,   258,   259,  -255,   260,   261,
     262,   263,   264,   265,     1,   266,    79,    89,   168,     1,
     380,   371,     2,   272,  -222,   308,   369,     2,   463,     3,
     448,   447,   144,     4,     3,   454,   320,   283,     4,     5,
       0,     0,     6,     7,     5,     0,   295,     6,     7,   250,
       0,     0,   296,     8,     9,   251,     0,     0,     8,     9,
     297,   246,     0,     0,    10,     0,     0,     0,     0,    10,
       0,     0,  -256,  -256,     0,     0,  -256,  -256,     0,   260,
     261,   262,   263,   264,   265,   298,   266,     0,    11,     0,
       0,    12,     0,    11,     0,     0,    12,     0,     0,     0,
       0,     0,   299,     0,     0,     0,    13,   247,   246,     0,
       0,    13,    14,     0,     0,     0,     0,    14,   300,     0,
       0,   391,   301,     0,     0,     0,     0,   325,   312,   313,
     314,   315,   316,   317,   302,   250,     0,     0,     0,     0,
       0,   251,   252,     0,   246,     0,    15,    16,    17,     0,
       0,    15,    16,    17,   247,   253,   254,   255,   256,   257,
       0,     0,   258,   259,     0,   260,   261,   262,   263,   264,
     265,     0,   266,     0,   325,     0,     0,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,     0,   251,   252,
    -256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   253,   254,   255,   256,   257,     0,     0,   258,
     259,     0,   260,   261,   262,   263,   264,   265,   250,   266,
       0,     0,     0,     0,   251,  -256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -256,  -256,
    -256,   256,   257,     0,     0,   258,   259,     0,   260,   261,
     262,   263,   264,   265,     0,   266
};

static const yytype_int16 yycheck[] =
{
     129,     2,    86,    69,     5,    85,    86,   166,    95,    10,
      11,   173,   239,   175,     4,     5,     6,     3,    75,     3,
       3,     3,     3,    12,   102,    45,   135,   105,   157,    52,
     159,   160,   105,    77,    72,    74,    85,    83,    94,    87,
      49,   409,    97,   172,    45,    19,    47,   131,   177,    26,
      49,   131,    53,     9,    52,   104,   108,    74,    67,   114,
      58,   110,   108,   109,   103,   121,    87,   133,   436,   228,
     118,   200,   161,   125,   163,   237,    25,    78,    79,   125,
      54,   308,     3,   245,    40,   247,   103,    88,    89,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   233,   126,   163,    97,   335,   108,
     162,   177,    61,   161,   243,   244,   154,    66,    35,    75,
     151,   165,     9,    72,    73,   108,   125,   158,   128,     3,
       4,     5,     6,    16,    17,   118,   214,   118,   161,    88,
     108,   214,   125,    92,    93,   165,   136,   137,     3,     4,
       5,     6,    69,    40,   101,   160,    87,   125,   287,   159,
     165,   108,     3,   292,   293,   231,   393,    41,    42,   278,
     154,   333,   154,   162,    91,   161,   166,    85,   125,   266,
     128,     3,    87,     3,    71,   213,    41,    42,    75,   128,
     218,   270,   321,   322,   162,   274,   104,     3,     4,     5,
       6,   360,   110,    91,   108,    79,   154,   155,   156,   157,
     294,   159,   439,   270,   294,   101,   165,   274,   157,   138,
     159,   125,   108,    97,    79,     3,     4,     5,     6,   391,
     108,     0,   110,   107,    97,    41,    42,   164,   162,   125,
     114,   165,    97,   108,   104,   110,    52,   125,   108,   104,
       3,   114,   105,   127,   383,   384,   385,   163,   324,   114,
     125,   161,   136,   137,    42,   125,   267,   162,   162,   335,
     165,   165,   127,    79,     3,     4,     5,     6,    87,   153,
     154,   136,   137,   162,   120,   162,   165,   161,   165,     3,
     162,    97,   166,   165,   162,   424,   120,   165,   153,   154,
     116,    79,     3,     4,     5,     6,   161,   118,   114,   165,
      90,   166,    41,    42,   162,   162,    25,   165,   165,    97,
     117,   127,     3,   114,   453,     4,   455,   393,    77,    86,
     136,   137,   161,     3,    41,     4,   114,    12,   161,     6,
      41,    42,   161,    17,   162,   162,   107,   153,   154,   127,
      79,   119,    61,   165,    25,   161,    41,    66,   136,   137,
     166,   162,     3,    72,    73,   142,   105,    76,    97,     3,
       3,    71,   105,     3,    48,   153,   154,   118,    79,    88,
     161,    91,   161,   161,    93,   114,   159,   161,   166,    43,
      61,   161,    87,   165,   165,    66,    97,    49,   127,    86,
     162,    72,    73,    52,     3,   161,   161,   136,   137,     3,
     161,   161,    94,   114,   162,   124,   108,    88,   161,    87,
      94,    92,    93,   159,   153,   154,   127,   165,   160,    64,
       6,    97,   161,     6,    97,   136,   137,   166,   162,   162,
     114,   162,    92,    72,    72,    48,    72,   121,   122,    92,
       3,   162,   153,   154,   128,   129,   162,   119,   162,   161,
     161,    63,   161,    23,   162,   166,   163,   139,   142,   143,
     144,   145,   146,   276,   273,   149,   150,     0,   152,   153,
     154,   155,   156,   157,     7,   159,    44,    52,   128,     7,
     305,   287,    15,   201,   165,   229,   280,    15,   457,    22,
     432,   431,    92,    26,    22,   450,   234,   212,    26,    32,
      -1,    -1,    35,    36,    32,    -1,    24,    35,    36,   122,
      -1,    -1,    30,    46,    47,   128,    -1,    -1,    46,    47,
      38,    48,    -1,    -1,    57,    -1,    -1,    -1,    -1,    57,
      -1,    -1,   145,   146,    -1,    -1,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,    63,   159,    -1,    81,    -1,
      -1,    84,    -1,    81,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    99,    94,    48,    -1,
      -1,    99,   105,    -1,    -1,    -1,    -1,   105,    96,    -1,
      -1,   108,   100,    -1,    -1,    -1,    -1,   114,   130,   131,
     132,   133,   134,   135,   112,   122,    -1,    -1,    -1,    -1,
      -1,   128,   129,    -1,    48,    -1,   139,   140,   141,    -1,
      -1,   139,   140,   141,    94,   142,   143,   144,   145,   146,
      -1,    -1,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,    -1,   159,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,   128,   129,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   122,   159,
      -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,    -1,   159
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    46,    47,
      57,    81,    84,    99,   105,   139,   140,   141,   168,   169,
     170,   171,   175,   177,   179,   180,   184,   185,   186,   192,
     194,   195,   196,   198,   201,   263,   264,    26,     3,   258,
       3,     3,   258,    74,   103,    87,    87,    91,   257,   258,
     258,    74,   103,    19,    54,     3,   265,   266,   138,   176,
     176,   176,     0,   164,   270,   105,   172,   172,    52,   161,
     204,   205,   209,     3,   163,   161,    87,   120,   187,   187,
     258,     3,   181,   258,   116,    87,   126,   120,   193,   193,
     258,   118,   165,   170,    90,   117,   221,   204,   205,     9,
      40,    75,   206,   207,    71,   206,   217,     3,     4,     5,
       6,    97,   136,   137,   166,   224,   225,   245,   246,   247,
     248,   249,   250,   251,     4,   178,   114,   258,   258,    77,
     214,    86,   161,   197,     3,   199,   200,   182,   246,   182,
      41,   258,   258,   204,   266,   161,   249,    12,   210,   162,
     162,   202,   203,   204,   209,   107,   208,   119,   202,    49,
      67,   222,   162,   165,    41,    87,   118,   161,   197,     3,
      41,    42,    79,   114,   127,   153,   154,   161,   227,   228,
     229,   230,   231,   232,   233,   234,   236,   237,   238,   239,
     241,   242,   243,   244,   245,   182,     3,   271,    58,   205,
     142,   165,   214,   105,   183,   183,     3,   173,   174,   211,
     223,   226,   227,   217,   206,   218,   219,   227,   217,   227,
     107,   227,   245,     3,   201,     3,   188,   189,   118,   161,
     163,   161,   161,   104,   227,   235,    41,   114,   228,   159,
     228,   205,   227,   108,   125,    17,    48,    94,   114,   121,
     122,   128,   129,   142,   143,   144,   145,   146,   149,   150,
     152,   153,   154,   155,   156,   157,   159,    91,   162,   165,
     161,   227,   200,    43,   161,   162,   165,    87,   212,   213,
     165,     3,   118,   261,   262,   222,   202,   165,    83,   109,
     220,   222,    49,    49,    86,    24,    30,    38,    63,    80,
      96,   100,   112,   190,   162,   165,   201,   162,   210,     3,
     154,   205,   130,   131,   132,   133,   134,   135,   240,   227,
     235,    85,   104,   110,   161,   114,   223,   162,   162,   227,
     227,   228,   228,    94,   121,   161,    97,   114,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   249,   258,     3,   225,   181,   225,   174,
     161,   252,   253,   254,   255,   256,   258,   267,   214,   226,
       3,   219,   227,   227,   182,   161,   161,    97,   114,   191,
     189,   223,   162,    87,   101,    85,   110,   227,   227,   205,
     160,   108,   228,   161,   205,   223,    97,   160,   162,   162,
     201,    25,    61,    66,    72,    73,    88,    93,   268,   165,
     118,   259,   260,   261,    64,   215,     6,     6,    97,   162,
     227,   227,   227,   110,   101,   162,   228,   205,   223,   162,
     162,   162,    92,    72,    72,    72,    92,   253,     3,   119,
     162,   162,   162,   110,   227,   162,   162,   260,   254,   253,
     161,   223,    76,   124,   271,    45,   216,   161,   227,   269,
     162,   227,     3,   244,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   167,   168,   169,   169,   170,   170,   170,   170,   170,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   172,
     172,   173,   173,   174,   174,   175,   175,   175,   176,   176,
     177,   178,   179,   179,   180,   180,   181,   182,   183,   183,
     184,   185,   185,   185,   186,   186,   186,   186,   187,   187,
     188,   188,   189,   190,   190,   190,   190,   190,   190,   190,
     190,   191,   191,   191,   192,   192,   192,   193,   193,   194,
     195,   196,   196,   197,   197,   198,   199,   199,   200,   201,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   207,   207,   207,   208,   208,   209,   210,   210,   211,
     212,   212,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   220,   220,   220,   221,   221,   222,
     222,   222,   222,   222,   222,   223,   223,   224,   224,   225,
     225,   226,   227,   227,   227,   227,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   229,   229,   230,
     230,   230,   230,   230,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   232,   232,   233,   233,   233,
     233,   234,   234,   234,   234,   235,   235,   236,   236,   237,
     237,   237,   237,   237,   237,   237,   238,   238,   239,   240,
     240,   240,   240,   240,   240,   241,   242,   243,   244,   244,
     244,   244,   245,   245,   245,   245,   245,   246,   247,   247,
     248,   248,   249,   250,   251,   252,   252,   253,   253,   254,
     254,   255,   255,   256,   257,   258,   258,   259,   259,   260,
     260,   261,   261,   262,   262,   263,   263,   264,   265,   265,
     266,   267,   267,   267,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   269,   270,   270,   271,   271
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     7,     6,     7,     3,     0,
       1,     3,     3,     1,     1,     1,     1,     1,     4,     4,
       1,     1,     2,     0,     4,     4,     3,     2,     0,     4,
       2,     8,     5,     3,     0,     5,     1,     3,     3,     2,
       2,     6,     1,     1,     1,     3,     3,     3,     3,     5,
       2,     1,     1,     1,     1,     0,     7,     1,     0,     1,
       1,     0,     2,     2,     0,     4,     0,     2,     0,     3,
       0,     1,     3,     2,     1,     1,     0,     2,     0,     2,
       2,     4,     2,     4,     0,     1,     3,     1,     0,     1,
       3,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     5,     6,     5,
       6,     4,     6,     3,     5,     4,     5,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     6,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       4,     1,     3,     2,     1,     1,     3,     1,     5,     1,
       0,     2,     1,     1,     0,     1,     0,     2,     1,     3,
       3,     4,     6,     8,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 149 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1754 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 149 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1760 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 147 "bison_parser.y"
      { }
#line 1766 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 147 "bison_parser.y"
      { }
#line 1772 "bison_parser.cpp"
        break;

    case 169: /* statement_list  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1785 "bison_parser.cpp"
        break;

    case 170: /* statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).statement)); }
#line 1791 "bison_parser.cpp"
        break;

    case 171: /* preparable_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).statement)); }
#line 1797 "bison_parser.cpp"
        break;

    case 172: /* opt_hints  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1810 "bison_parser.cpp"
        break;

    case 173: /* hint_list  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1823 "bison_parser.cpp"
        break;

    case 174: /* hint  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 1829 "bison_parser.cpp"
        break;

    case 175: /* transaction_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).transaction_stmt)); }
#line 1835 "bison_parser.cpp"
        break;

    case 177: /* prepare_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).prep_stmt)); }
#line 1841 "bison_parser.cpp"
        break;

    case 178: /* prepare_target_query  */
#line 149 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1847 "bison_parser.cpp"
        break;

    case 179: /* execute_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).exec_stmt)); }
#line 1853 "bison_parser.cpp"
        break;

    case 180: /* import_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).import_stmt)); }
#line 1859 "bison_parser.cpp"
        break;

    case 181: /* file_type  */
#line 147 "bison_parser.y"
      { }
#line 1865 "bison_parser.cpp"
        break;

    case 182: /* file_path  */
#line 149 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1871 "bison_parser.cpp"
        break;

    case 183: /* opt_file_type  */
#line 147 "bison_parser.y"
      { }
#line 1877 "bison_parser.cpp"
        break;

    case 184: /* export_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).export_stmt)); }
#line 1883 "bison_parser.cpp"
        break;

    case 185: /* show_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).show_stmt)); }
#line 1889 "bison_parser.cpp"
        break;

    case 186: /* create_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).create_stmt)); }
#line 1895 "bison_parser.cpp"
        break;

    case 187: /* opt_not_exists  */
#line 147 "bison_parser.y"
      { }
#line 1901 "bison_parser.cpp"
        break;

    case 188: /* column_def_commalist  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1914 "bison_parser.cpp"
        break;

    case 189: /* column_def  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).column_t)); }
#line 1920 "bison_parser.cpp"
        break;

    case 190: /* column_type  */
#line 147 "bison_parser.y"
      { }
#line 1926 "bison_parser.cpp"
        break;

    case 191: /* opt_column_nullable  */
#line 147 "bison_parser.y"
      { }
#line 1932 "bison_parser.cpp"
        break;

    case 192: /* drop_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).drop_stmt)); }
#line 1938 "bison_parser.cpp"
        break;

    case 193: /* opt_exists  */
#line 147 "bison_parser.y"
      { }
#line 1944 "bison_parser.cpp"
        break;

    case 194: /* delete_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).delete_stmt)); }
#line 1950 "bison_parser.cpp"
        break;

    case 195: /* truncate_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).delete_stmt)); }
#line 1956 "bison_parser.cpp"
        break;

    case 196: /* insert_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).insert_stmt)); }
#line 1962 "bison_parser.cpp"
        break;

    case 197: /* opt_column_list  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1975 "bison_parser.cpp"
        break;

    case 198: /* update_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).update_stmt)); }
#line 1981 "bison_parser.cpp"
        break;

    case 199: /* update_clause_commalist  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1994 "bison_parser.cpp"
        break;

    case 200: /* update_clause  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).update_t)); }
#line 2000 "bison_parser.cpp"
        break;

    case 201: /* select_statement  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2006 "bison_parser.cpp"
        break;

    case 202: /* select_within_set_operation  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2012 "bison_parser.cpp"
        break;

    case 203: /* select_within_set_operation_no_parentheses  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2018 "bison_parser.cpp"
        break;

    case 204: /* select_with_paren  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2024 "bison_parser.cpp"
        break;

    case 205: /* select_no_paren  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2030 "bison_parser.cpp"
        break;

    case 206: /* set_operator  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).set_operator_t)); }
#line 2036 "bison_parser.cpp"
        break;

    case 207: /* set_type  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).set_operator_t)); }
#line 2042 "bison_parser.cpp"
        break;

    case 208: /* opt_all  */
#line 147 "bison_parser.y"
      { }
#line 2048 "bison_parser.cpp"
        break;

    case 209: /* select_clause  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2054 "bison_parser.cpp"
        break;

    case 210: /* opt_distinct  */
#line 147 "bison_parser.y"
      { }
#line 2060 "bison_parser.cpp"
        break;

    case 211: /* select_list  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2073 "bison_parser.cpp"
        break;

    case 212: /* opt_from_clause  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2079 "bison_parser.cpp"
        break;

    case 213: /* from_clause  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2085 "bison_parser.cpp"
        break;

    case 214: /* opt_where  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2091 "bison_parser.cpp"
        break;

    case 215: /* opt_group  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).group_t)); }
#line 2097 "bison_parser.cpp"
        break;

    case 216: /* opt_having  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2103 "bison_parser.cpp"
        break;

    case 217: /* opt_order  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2116 "bison_parser.cpp"
        break;

    case 218: /* order_list  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2129 "bison_parser.cpp"
        break;

    case 219: /* order_desc  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).order)); }
#line 2135 "bison_parser.cpp"
        break;

    case 220: /* opt_order_type  */
#line 147 "bison_parser.y"
      { }
#line 2141 "bison_parser.cpp"
        break;

    case 221: /* opt_top  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).limit)); }
#line 2147 "bison_parser.cpp"
        break;

    case 222: /* opt_limit  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).limit)); }
#line 2153 "bison_parser.cpp"
        break;

    case 223: /* expr_list  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2166 "bison_parser.cpp"
        break;

    case 224: /* opt_literal_list  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2179 "bison_parser.cpp"
        break;

    case 225: /* literal_list  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2192 "bison_parser.cpp"
        break;

    case 226: /* expr_alias  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2198 "bison_parser.cpp"
        break;

    case 227: /* expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2204 "bison_parser.cpp"
        break;

    case 228: /* operand  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2210 "bison_parser.cpp"
        break;

    case 229: /* scalar_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2216 "bison_parser.cpp"
        break;

    case 230: /* unary_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2222 "bison_parser.cpp"
        break;

    case 231: /* binary_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2228 "bison_parser.cpp"
        break;

    case 232: /* logic_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2234 "bison_parser.cpp"
        break;

    case 233: /* in_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2240 "bison_parser.cpp"
        break;

    case 234: /* case_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2246 "bison_parser.cpp"
        break;

    case 235: /* case_list  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2252 "bison_parser.cpp"
        break;

    case 236: /* exists_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2258 "bison_parser.cpp"
        break;

    case 237: /* comp_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2264 "bison_parser.cpp"
        break;

    case 238: /* function_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2270 "bison_parser.cpp"
        break;

    case 239: /* extract_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2276 "bison_parser.cpp"
        break;

    case 240: /* datetime_field  */
#line 147 "bison_parser.y"
      { }
#line 2282 "bison_parser.cpp"
        break;

    case 241: /* array_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2288 "bison_parser.cpp"
        break;

    case 242: /* array_index  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2294 "bison_parser.cpp"
        break;

    case 243: /* between_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2300 "bison_parser.cpp"
        break;

    case 244: /* column_name  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2306 "bison_parser.cpp"
        break;

    case 245: /* literal  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2312 "bison_parser.cpp"
        break;

    case 246: /* string_literal  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2318 "bison_parser.cpp"
        break;

    case 247: /* bool_literal  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2324 "bison_parser.cpp"
        break;

    case 248: /* num_literal  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2330 "bison_parser.cpp"
        break;

    case 249: /* int_literal  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2336 "bison_parser.cpp"
        break;

    case 250: /* null_literal  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2342 "bison_parser.cpp"
        break;

    case 251: /* param_expr  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2348 "bison_parser.cpp"
        break;

    case 252: /* table_ref  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2354 "bison_parser.cpp"
        break;

    case 253: /* table_ref_atomic  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2360 "bison_parser.cpp"
        break;

    case 254: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2366 "bison_parser.cpp"
        break;

    case 255: /* table_ref_commalist  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2379 "bison_parser.cpp"
        break;

    case 256: /* table_ref_name  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2385 "bison_parser.cpp"
        break;

    case 257: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2391 "bison_parser.cpp"
        break;

    case 258: /* table_name  */
#line 148 "bison_parser.y"
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2397 "bison_parser.cpp"
        break;

    case 259: /* table_alias  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2403 "bison_parser.cpp"
        break;

    case 260: /* opt_table_alias  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2409 "bison_parser.cpp"
        break;

    case 261: /* alias  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2415 "bison_parser.cpp"
        break;

    case 262: /* opt_alias  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2421 "bison_parser.cpp"
        break;

    case 263: /* opt_with_clause  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2427 "bison_parser.cpp"
        break;

    case 264: /* with_clause  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2433 "bison_parser.cpp"
        break;

    case 265: /* with_description_list  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2439 "bison_parser.cpp"
        break;

    case 266: /* with_description  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).with_description_t)); }
#line 2445 "bison_parser.cpp"
        break;

    case 267: /* join_clause  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2451 "bison_parser.cpp"
        break;

    case 268: /* opt_join_type  */
#line 147 "bison_parser.y"
      { }
#line 2457 "bison_parser.cpp"
        break;

    case 269: /* join_condition  */
#line 158 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2463 "bison_parser.cpp"
        break;

    case 271: /* ident_commalist  */
#line 150 "bison_parser.y"
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2476 "bison_parser.cpp"
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

#line 2594 "bison_parser.cpp"

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
#line 269 "bison_parser.y"
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
#line 2805 "bison_parser.cpp"
    break;

  case 3:
#line 290 "bison_parser.y"
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2816 "bison_parser.cpp"
    break;

  case 4:
#line 296 "bison_parser.y"
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2827 "bison_parser.cpp"
    break;

  case 5:
#line 305 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2836 "bison_parser.cpp"
    break;

  case 6:
#line 309 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2845 "bison_parser.cpp"
    break;

  case 7:
#line 313 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2853 "bison_parser.cpp"
    break;

  case 8:
#line 316 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 2861 "bison_parser.cpp"
    break;

  case 9:
#line 319 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 2869 "bison_parser.cpp"
    break;

  case 10:
#line 326 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2875 "bison_parser.cpp"
    break;

  case 11:
#line 327 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2881 "bison_parser.cpp"
    break;

  case 12:
#line 328 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2887 "bison_parser.cpp"
    break;

  case 13:
#line 329 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2893 "bison_parser.cpp"
    break;

  case 14:
#line 330 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2899 "bison_parser.cpp"
    break;

  case 15:
#line 331 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2905 "bison_parser.cpp"
    break;

  case 16:
#line 332 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2911 "bison_parser.cpp"
    break;

  case 17:
#line 333 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2917 "bison_parser.cpp"
    break;

  case 18:
#line 334 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 2923 "bison_parser.cpp"
    break;

  case 19:
#line 343 "bison_parser.y"
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2929 "bison_parser.cpp"
    break;

  case 20:
#line 344 "bison_parser.y"
    { (yyval.expr_vec) = nullptr; }
#line 2935 "bison_parser.cpp"
    break;

  case 21:
#line 349 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2941 "bison_parser.cpp"
    break;

  case 22:
#line 350 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2947 "bison_parser.cpp"
    break;

  case 23:
#line 354 "bison_parser.y"
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2956 "bison_parser.cpp"
    break;

  case 24:
#line 358 "bison_parser.y"
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2966 "bison_parser.cpp"
    break;

  case 25:
#line 370 "bison_parser.y"
    {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 2974 "bison_parser.cpp"
    break;

  case 26:
#line 373 "bison_parser.y"
    {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 2982 "bison_parser.cpp"
    break;

  case 27:
#line 376 "bison_parser.y"
    {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 2990 "bison_parser.cpp"
    break;

  case 30:
#line 390 "bison_parser.y"
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3000 "bison_parser.cpp"
    break;

  case 32:
#line 400 "bison_parser.y"
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3009 "bison_parser.cpp"
    break;

  case 33:
#line 404 "bison_parser.y"
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3019 "bison_parser.cpp"
    break;

  case 34:
#line 418 "bison_parser.y"
    {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3030 "bison_parser.cpp"
    break;

  case 35:
#line 424 "bison_parser.y"
    {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3041 "bison_parser.cpp"
    break;

  case 36:
#line 433 "bison_parser.y"
    {
			if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
				(yyval.import_type_t) = kImportCSV;
			} else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
				(yyval.import_type_t) = kImportTbl;
			} else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
				(yyval.import_type_t) = kImportBinary;
			} else {
				free((yyvsp[0].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
				YYERROR;
			}
			free((yyvsp[0].sval));
		}
#line 3060 "bison_parser.cpp"
    break;

  case 37:
#line 450 "bison_parser.y"
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3066 "bison_parser.cpp"
    break;

  case 38:
#line 454 "bison_parser.y"
    {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3074 "bison_parser.cpp"
    break;

  case 39:
#line 457 "bison_parser.y"
    { (yyval.import_type_t) = kImportAuto; }
#line 3080 "bison_parser.cpp"
    break;

  case 40:
#line 466 "bison_parser.y"
    {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3091 "bison_parser.cpp"
    break;

  case 41:
#line 480 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3099 "bison_parser.cpp"
    break;

  case 42:
#line 483 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3109 "bison_parser.cpp"
    break;

  case 43:
#line 488 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3119 "bison_parser.cpp"
    break;

  case 44:
#line 502 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
				free((yyvsp[-2].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
			 	YYERROR;
			}
			free((yyvsp[-2].sval));
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3137 "bison_parser.cpp"
    break;

  case 45:
#line 515 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3149 "bison_parser.cpp"
    break;

  case 46:
#line 522 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3161 "bison_parser.cpp"
    break;

  case 47:
#line 529 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3174 "bison_parser.cpp"
    break;

  case 48:
#line 540 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3180 "bison_parser.cpp"
    break;

  case 49:
#line 541 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3186 "bison_parser.cpp"
    break;

  case 50:
#line 545 "bison_parser.y"
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3192 "bison_parser.cpp"
    break;

  case 51:
#line 546 "bison_parser.y"
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3198 "bison_parser.cpp"
    break;

  case 52:
#line 550 "bison_parser.y"
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3206 "bison_parser.cpp"
    break;

  case 53:
#line 556 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3212 "bison_parser.cpp"
    break;

  case 54:
#line 557 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3218 "bison_parser.cpp"
    break;

  case 55:
#line 558 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3224 "bison_parser.cpp"
    break;

  case 56:
#line 559 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3230 "bison_parser.cpp"
    break;

  case 57:
#line 560 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3236 "bison_parser.cpp"
    break;

  case 58:
#line 561 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3242 "bison_parser.cpp"
    break;

  case 59:
#line 562 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3248 "bison_parser.cpp"
    break;

  case 60:
#line 563 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3254 "bison_parser.cpp"
    break;

  case 61:
#line 567 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3260 "bison_parser.cpp"
    break;

  case 62:
#line 568 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3266 "bison_parser.cpp"
    break;

  case 63:
#line 569 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3272 "bison_parser.cpp"
    break;

  case 64:
#line 579 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3283 "bison_parser.cpp"
    break;

  case 65:
#line 585 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3294 "bison_parser.cpp"
    break;

  case 66:
#line 591 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3304 "bison_parser.cpp"
    break;

  case 67:
#line 599 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3310 "bison_parser.cpp"
    break;

  case 68:
#line 600 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3316 "bison_parser.cpp"
    break;

  case 69:
#line 609 "bison_parser.y"
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3327 "bison_parser.cpp"
    break;

  case 70:
#line 618 "bison_parser.y"
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3337 "bison_parser.cpp"
    break;

  case 71:
#line 631 "bison_parser.y"
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3349 "bison_parser.cpp"
    break;

  case 72:
#line 638 "bison_parser.y"
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3361 "bison_parser.cpp"
    break;

  case 73:
#line 649 "bison_parser.y"
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3367 "bison_parser.cpp"
    break;

  case 74:
#line 650 "bison_parser.y"
    { (yyval.str_vec) = nullptr; }
#line 3373 "bison_parser.cpp"
    break;

  case 75:
#line 660 "bison_parser.y"
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3384 "bison_parser.cpp"
    break;

  case 76:
#line 669 "bison_parser.y"
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3390 "bison_parser.cpp"
    break;

  case 77:
#line 670 "bison_parser.y"
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3396 "bison_parser.cpp"
    break;

  case 78:
#line 674 "bison_parser.y"
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3406 "bison_parser.cpp"
    break;

  case 79:
#line 686 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3415 "bison_parser.cpp"
    break;

  case 80:
#line 690 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3424 "bison_parser.cpp"
    break;

  case 81:
#line 694 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
		}
#line 3440 "bison_parser.cpp"
    break;

  case 84:
#line 712 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3446 "bison_parser.cpp"
    break;

  case 85:
#line 713 "bison_parser.y"
    {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3459 "bison_parser.cpp"
    break;

  case 86:
#line 724 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3465 "bison_parser.cpp"
    break;

  case 87:
#line 725 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3471 "bison_parser.cpp"
    break;

  case 88:
#line 729 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3486 "bison_parser.cpp"
    break;

  case 89:
#line 739 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
		}
#line 3501 "bison_parser.cpp"
    break;

  case 90:
#line 752 "bison_parser.y"
    {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3510 "bison_parser.cpp"
    break;

  case 91:
#line 759 "bison_parser.y"
    {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3519 "bison_parser.cpp"
    break;

  case 92:
#line 763 "bison_parser.y"
    {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3528 "bison_parser.cpp"
    break;

  case 93:
#line 767 "bison_parser.y"
    {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3537 "bison_parser.cpp"
    break;

  case 94:
#line 774 "bison_parser.y"
    {
			(yyval.bval) = true;
		}
#line 3545 "bison_parser.cpp"
    break;

  case 95:
#line 777 "bison_parser.y"
    {
		(yyval.bval) = false;
	}
#line 3553 "bison_parser.cpp"
    break;

  case 96:
#line 783 "bison_parser.y"
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3567 "bison_parser.cpp"
    break;

  case 97:
#line 795 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3573 "bison_parser.cpp"
    break;

  case 98:
#line 796 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3579 "bison_parser.cpp"
    break;

  case 100:
#line 804 "bison_parser.y"
    { (yyval.table) = (yyvsp[0].table); }
#line 3585 "bison_parser.cpp"
    break;

  case 101:
#line 805 "bison_parser.y"
    { (yyval.table) = nullptr; }
#line 3591 "bison_parser.cpp"
    break;

  case 102:
#line 809 "bison_parser.y"
    { (yyval.table) = (yyvsp[0].table); }
#line 3597 "bison_parser.cpp"
    break;

  case 103:
#line 814 "bison_parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3603 "bison_parser.cpp"
    break;

  case 104:
#line 815 "bison_parser.y"
    { (yyval.expr) = nullptr; }
#line 3609 "bison_parser.cpp"
    break;

  case 105:
#line 819 "bison_parser.y"
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3619 "bison_parser.cpp"
    break;

  case 106:
#line 824 "bison_parser.y"
    { (yyval.group_t) = nullptr; }
#line 3625 "bison_parser.cpp"
    break;

  case 107:
#line 828 "bison_parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3631 "bison_parser.cpp"
    break;

  case 108:
#line 829 "bison_parser.y"
    { (yyval.expr) = nullptr; }
#line 3637 "bison_parser.cpp"
    break;

  case 109:
#line 833 "bison_parser.y"
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3643 "bison_parser.cpp"
    break;

  case 110:
#line 834 "bison_parser.y"
    { (yyval.order_vec) = nullptr; }
#line 3649 "bison_parser.cpp"
    break;

  case 111:
#line 838 "bison_parser.y"
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3655 "bison_parser.cpp"
    break;

  case 112:
#line 839 "bison_parser.y"
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3661 "bison_parser.cpp"
    break;

  case 113:
#line 843 "bison_parser.y"
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3667 "bison_parser.cpp"
    break;

  case 114:
#line 847 "bison_parser.y"
    { (yyval.order_type) = kOrderAsc; }
#line 3673 "bison_parser.cpp"
    break;

  case 115:
#line 848 "bison_parser.y"
    { (yyval.order_type) = kOrderDesc; }
#line 3679 "bison_parser.cpp"
    break;

  case 116:
#line 849 "bison_parser.y"
    { (yyval.order_type) = kOrderAsc; }
#line 3685 "bison_parser.cpp"
    break;

  case 117:
#line 855 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3691 "bison_parser.cpp"
    break;

  case 118:
#line 856 "bison_parser.y"
    { (yyval.limit) = nullptr; }
#line 3697 "bison_parser.cpp"
    break;

  case 119:
#line 860 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3703 "bison_parser.cpp"
    break;

  case 120:
#line 861 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3709 "bison_parser.cpp"
    break;

  case 121:
#line 862 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3715 "bison_parser.cpp"
    break;

  case 122:
#line 863 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3721 "bison_parser.cpp"
    break;

  case 123:
#line 864 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3727 "bison_parser.cpp"
    break;

  case 124:
#line 865 "bison_parser.y"
    { (yyval.limit) = nullptr; }
#line 3733 "bison_parser.cpp"
    break;

  case 125:
#line 872 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3739 "bison_parser.cpp"
    break;

  case 126:
#line 873 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3745 "bison_parser.cpp"
    break;

  case 127:
#line 877 "bison_parser.y"
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3751 "bison_parser.cpp"
    break;

  case 128:
#line 878 "bison_parser.y"
    { (yyval.expr_vec) = nullptr; }
#line 3757 "bison_parser.cpp"
    break;

  case 129:
#line 882 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3763 "bison_parser.cpp"
    break;

  case 130:
#line 883 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3769 "bison_parser.cpp"
    break;

  case 131:
#line 887 "bison_parser.y"
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3781 "bison_parser.cpp"
    break;

  case 137:
#line 905 "bison_parser.y"
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3787 "bison_parser.cpp"
    break;

  case 146:
#line 914 "bison_parser.y"
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3793 "bison_parser.cpp"
    break;

  case 149:
#line 923 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3799 "bison_parser.cpp"
    break;

  case 150:
#line 924 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3805 "bison_parser.cpp"
    break;

  case 151:
#line 925 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3811 "bison_parser.cpp"
    break;

  case 152:
#line 926 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3817 "bison_parser.cpp"
    break;

  case 153:
#line 927 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3823 "bison_parser.cpp"
    break;

  case 155:
#line 932 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3829 "bison_parser.cpp"
    break;

  case 156:
#line 933 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3835 "bison_parser.cpp"
    break;

  case 157:
#line 934 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3841 "bison_parser.cpp"
    break;

  case 158:
#line 935 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3847 "bison_parser.cpp"
    break;

  case 159:
#line 936 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3853 "bison_parser.cpp"
    break;

  case 160:
#line 937 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3859 "bison_parser.cpp"
    break;

  case 161:
#line 938 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3865 "bison_parser.cpp"
    break;

  case 162:
#line 939 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3871 "bison_parser.cpp"
    break;

  case 163:
#line 940 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3877 "bison_parser.cpp"
    break;

  case 164:
#line 941 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3883 "bison_parser.cpp"
    break;

  case 165:
#line 945 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3889 "bison_parser.cpp"
    break;

  case 166:
#line 946 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3895 "bison_parser.cpp"
    break;

  case 167:
#line 950 "bison_parser.y"
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3901 "bison_parser.cpp"
    break;

  case 168:
#line 951 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3907 "bison_parser.cpp"
    break;

  case 169:
#line 952 "bison_parser.y"
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3913 "bison_parser.cpp"
    break;

  case 170:
#line 953 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3919 "bison_parser.cpp"
    break;

  case 171:
#line 959 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3925 "bison_parser.cpp"
    break;

  case 172:
#line 960 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3931 "bison_parser.cpp"
    break;

  case 173:
#line 961 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3937 "bison_parser.cpp"
    break;

  case 174:
#line 962 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3943 "bison_parser.cpp"
    break;

  case 175:
#line 966 "bison_parser.y"
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3949 "bison_parser.cpp"
    break;

  case 176:
#line 967 "bison_parser.y"
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3955 "bison_parser.cpp"
    break;

  case 177:
#line 971 "bison_parser.y"
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3961 "bison_parser.cpp"
    break;

  case 178:
#line 972 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3967 "bison_parser.cpp"
    break;

  case 179:
#line 976 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3973 "bison_parser.cpp"
    break;

  case 180:
#line 977 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3979 "bison_parser.cpp"
    break;

  case 181:
#line 978 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3985 "bison_parser.cpp"
    break;

  case 182:
#line 979 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3991 "bison_parser.cpp"
    break;

  case 183:
#line 980 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3997 "bison_parser.cpp"
    break;

  case 184:
#line 981 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4003 "bison_parser.cpp"
    break;

  case 185:
#line 982 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4009 "bison_parser.cpp"
    break;

  case 186:
#line 986 "bison_parser.y"
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4015 "bison_parser.cpp"
    break;

  case 187:
#line 987 "bison_parser.y"
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4021 "bison_parser.cpp"
    break;

  case 188:
#line 991 "bison_parser.y"
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4027 "bison_parser.cpp"
    break;

  case 189:
#line 995 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4033 "bison_parser.cpp"
    break;

  case 190:
#line 996 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4039 "bison_parser.cpp"
    break;

  case 191:
#line 997 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4045 "bison_parser.cpp"
    break;

  case 192:
#line 998 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4051 "bison_parser.cpp"
    break;

  case 193:
#line 999 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4057 "bison_parser.cpp"
    break;

  case 194:
#line 1000 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4063 "bison_parser.cpp"
    break;

  case 195:
#line 1004 "bison_parser.y"
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4069 "bison_parser.cpp"
    break;

  case 196:
#line 1008 "bison_parser.y"
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4075 "bison_parser.cpp"
    break;

  case 197:
#line 1012 "bison_parser.y"
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4081 "bison_parser.cpp"
    break;

  case 198:
#line 1016 "bison_parser.y"
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4087 "bison_parser.cpp"
    break;

  case 199:
#line 1017 "bison_parser.y"
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4093 "bison_parser.cpp"
    break;

  case 200:
#line 1018 "bison_parser.y"
    { (yyval.expr) = Expr::makeStar(); }
#line 4099 "bison_parser.cpp"
    break;

  case 201:
#line 1019 "bison_parser.y"
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4105 "bison_parser.cpp"
    break;

  case 207:
#line 1031 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4111 "bison_parser.cpp"
    break;

  case 208:
#line 1035 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4117 "bison_parser.cpp"
    break;

  case 209:
#line 1036 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 4123 "bison_parser.cpp"
    break;

  case 210:
#line 1040 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4129 "bison_parser.cpp"
    break;

  case 212:
#line 1045 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4135 "bison_parser.cpp"
    break;

  case 213:
#line 1049 "bison_parser.y"
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4141 "bison_parser.cpp"
    break;

  case 214:
#line 1053 "bison_parser.y"
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4151 "bison_parser.cpp"
    break;

  case 216:
#line 1066 "bison_parser.y"
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4162 "bison_parser.cpp"
    break;

  case 220:
#line 1082 "bison_parser.y"
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4173 "bison_parser.cpp"
    break;

  case 221:
#line 1091 "bison_parser.y"
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4179 "bison_parser.cpp"
    break;

  case 222:
#line 1092 "bison_parser.y"
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4185 "bison_parser.cpp"
    break;

  case 223:
#line 1097 "bison_parser.y"
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4197 "bison_parser.cpp"
    break;

  case 224:
#line 1108 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4207 "bison_parser.cpp"
    break;

  case 225:
#line 1117 "bison_parser.y"
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4213 "bison_parser.cpp"
    break;

  case 226:
#line 1118 "bison_parser.y"
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4219 "bison_parser.cpp"
    break;

  case 228:
#line 1124 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4225 "bison_parser.cpp"
    break;

  case 230:
#line 1130 "bison_parser.y"
    { (yyval.alias_t) = nullptr; }
#line 4231 "bison_parser.cpp"
    break;

  case 231:
#line 1135 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4237 "bison_parser.cpp"
    break;

  case 232:
#line 1136 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4243 "bison_parser.cpp"
    break;

  case 234:
#line 1142 "bison_parser.y"
    { (yyval.alias_t) = nullptr; }
#line 4249 "bison_parser.cpp"
    break;

  case 236:
#line 1152 "bison_parser.y"
    { (yyval.with_description_vec) = nullptr; }
#line 4255 "bison_parser.cpp"
    break;

  case 237:
#line 1156 "bison_parser.y"
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4261 "bison_parser.cpp"
    break;

  case 238:
#line 1160 "bison_parser.y"
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4270 "bison_parser.cpp"
    break;

  case 239:
#line 1164 "bison_parser.y"
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4279 "bison_parser.cpp"
    break;

  case 240:
#line 1171 "bison_parser.y"
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4289 "bison_parser.cpp"
    break;

  case 241:
#line 1185 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4301 "bison_parser.cpp"
    break;

  case 242:
#line 1193 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4314 "bison_parser.cpp"
    break;

  case 243:
#line 1203 "bison_parser.y"
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
#line 4334 "bison_parser.cpp"
    break;

  case 244:
#line 1221 "bison_parser.y"
    { (yyval.uval) = kJoinInner; }
#line 4340 "bison_parser.cpp"
    break;

  case 245:
#line 1222 "bison_parser.y"
    { (yyval.uval) = kJoinLeft; }
#line 4346 "bison_parser.cpp"
    break;

  case 246:
#line 1223 "bison_parser.y"
    { (yyval.uval) = kJoinLeft; }
#line 4352 "bison_parser.cpp"
    break;

  case 247:
#line 1224 "bison_parser.y"
    { (yyval.uval) = kJoinRight; }
#line 4358 "bison_parser.cpp"
    break;

  case 248:
#line 1225 "bison_parser.y"
    { (yyval.uval) = kJoinRight; }
#line 4364 "bison_parser.cpp"
    break;

  case 249:
#line 1226 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4370 "bison_parser.cpp"
    break;

  case 250:
#line 1227 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4376 "bison_parser.cpp"
    break;

  case 251:
#line 1228 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4382 "bison_parser.cpp"
    break;

  case 252:
#line 1229 "bison_parser.y"
    { (yyval.uval) = kJoinCross; }
#line 4388 "bison_parser.cpp"
    break;

  case 253:
#line 1230 "bison_parser.y"
    { (yyval.uval) = kJoinInner; }
#line 4394 "bison_parser.cpp"
    break;

  case 257:
#line 1250 "bison_parser.y"
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4400 "bison_parser.cpp"
    break;

  case 258:
#line 1251 "bison_parser.y"
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4406 "bison_parser.cpp"
    break;


#line 4410 "bison_parser.cpp"

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
#line 1254 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
