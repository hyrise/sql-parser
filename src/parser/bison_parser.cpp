/* A Bison parser, made by GNU Bison 3.3.2.  */

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
#define YYBISON_VERSION "3.3.2"

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
#line 1 "bison_parser.y" /* yacc.c:337  */

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


#line 107 "bison_parser.cpp" /* yacc.c:337  */
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
#line 35 "bison_parser.y" /* yacc.c:352  */

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

#line 172 "bison_parser.cpp" /* yacc.c:352  */

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
#line 95 "bison_parser.y" /* yacc.c:352  */

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
	hsql::WithDescription* with;
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
	std::vector<hsql::WithDescription*>* with_vec;

#line 374 "bison_parser.cpp" /* yacc.c:352  */
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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   671

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  411

#define YYUNDEFTOK  2
#define YYMAXUTOK   400

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
       0,   258,   258,   279,   285,   294,   298,   302,   310,   311,
     312,   313,   314,   315,   316,   317,   326,   327,   332,   333,
     337,   341,   353,   360,   363,   367,   379,   388,   392,   402,
     405,   419,   426,   444,   445,   449,   450,   454,   460,   461,
     462,   463,   464,   465,   466,   467,   471,   472,   473,   483,
     489,   495,   503,   504,   513,   522,   535,   542,   553,   554,
     564,   573,   574,   578,   610,   611,   615,   616,   620,   630,
     647,   651,   652,   653,   657,   658,   662,   674,   675,   679,
     683,   684,   687,   692,   693,   697,   702,   706,   707,   710,
     711,   715,   716,   720,   724,   725,   726,   732,   733,   737,
     738,   739,   740,   741,   742,   749,   750,   754,   755,   759,
     760,   764,   774,   775,   776,   777,   778,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   795,   796,   800,
     801,   802,   803,   804,   808,   809,   810,   811,   812,   813,
     814,   815,   816,   817,   818,   822,   823,   827,   828,   829,
     830,   836,   837,   838,   839,   843,   844,   848,   849,   853,
     854,   855,   856,   857,   858,   859,   863,   864,   868,   872,
     873,   874,   875,   876,   877,   880,   884,   888,   892,   893,
     894,   895,   899,   900,   901,   902,   903,   907,   911,   912,
     916,   917,   921,   925,   929,   941,   942,   952,   953,   957,
     967,   968,   973,   984,   993,   994,   999,  1000,  1005,  1006,
    1010,  1011,  1016,  1017,  1055,  1063,  1073,  1092,  1093,  1094,
    1095,  1096,  1097,  1098,  1099,  1100,  1101,  1106,  1115,  1116,
    1121,  1122
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
  "update_clause_commalist", "update_clause", "select_with_paren",
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

#define YYPACT_NINF -348

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-348)))

#define YYTABLE_NINF -227

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-227)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     574,    -5,    33,    34,    64,    -4,   -17,    18,    26,    33,
     -42,    -3,   128,   -18,  -348,    48,    48,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,   146,    13,  -348,    32,
      81,    58,    33,    95,    33,    80,  -348,    96,    96,    33,
    -348,  -348,   574,  -348,   130,  -348,  -348,  -348,   223,     7,
     228,   125,    33,   168,  -348,   162,    94,   253,   216,    33,
      33,  -348,  -348,   112,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,   107,   109,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,   236,   -56,   231,  -348,   275,   277,    54,
     143,   -62,  -348,  -348,  -348,  -348,   286,  -348,     7,  -348,
     178,   297,    42,   144,   145,    92,   281,   148,   292,  -348,
     126,   -79,   261,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,   218,  -348,
    -348,  -113,   193,   154,  -348,    53,   231,   253,  -348,   156,
     -45,  -348,  -348,   234,   268,    21,  -348,    -8,     4,   269,
     207,   231,   -78,   -44,   158,   292,   374,   231,    72,   161,
     -87,   231,   231,   292,  -348,   292,   -69,   164,     9,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   319,    33,  -348,   324,   319,   316,
       7,  -348,  -348,   212,  -348,   -33,   227,   108,   -79,  -348,
       7,  -348,   286,   275,  -348,   176,  -348,  -348,   186,  -348,
    -348,  -348,    67,  -348,   297,  -348,  -348,   231,  -348,  -348,
     187,  -348,  -348,  -348,  -348,  -348,  -348,   263,    11,   -39,
     231,   231,  -348,   269,   254,   -49,  -348,    46,  -348,  -348,
    -348,   243,   331,   408,   292,   194,   126,  -348,   257,   201,
     408,   408,   408,   408,   442,   442,   442,   442,    72,    72,
      20,    20,    20,   -98,   204,  -348,  -348,  -348,   231,    59,
     231,   -33,  -348,   287,  -348,  -348,  -348,   231,   155,  -348,
      82,  -348,  -348,   355,   357,  -348,   270,  -348,  -348,    87,
    -348,   231,   231,   231,  -348,   105,    77,   206,  -348,   231,
    -348,   366,  -348,  -348,   292,   408,   126,   213,    97,  -348,
    -348,   288,   211,  -348,   214,  -348,    84,   219,   226,   108,
     -79,   337,    -6,  -348,   233,   237,  -348,  -348,   -52,   -79,
     106,  -348,   231,  -348,  -348,  -348,   374,   238,   103,  -348,
    -348,    33,   168,  -348,   231,  -348,  -348,  -348,  -348,  -348,
    -348,   231,   231,  -348,  -348,  -348,  -348,   -79,  -348,  -348,
    -348,    49,  -348,   225,  -348,    23,  -348,   329,  -348,   -79,
     -79,   307,  -348,  -348,  -348,   327,   333,   344,   330,    33,
     419,  -348,  -348,  -348,   305,  -348,    33,  -348,  -348,  -348,
      33,   264,   276,   231,  -348,   480,   277,   -35,   278,   231,
     113,   231,  -348,     5,   -79,  -348,  -348,   -79,   267,   274,
    -348
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     3,    17,    17,    15,     8,     7,
       9,    14,    11,    12,    10,    13,     0,   204,    55,    24,
       0,    34,     0,     0,     0,     0,   203,    53,    53,     0,
      29,     1,   228,     2,     0,     6,     5,    51,     0,   108,
       0,     0,     0,    84,    27,     0,    59,     0,     0,     0,
       0,    30,     4,     0,   205,   187,   190,   192,   193,   188,
     189,   194,     0,   107,   109,   182,   183,   184,   191,   185,
     186,    23,    22,     0,     0,     0,    54,     0,     0,     0,
       0,    84,    61,    52,    49,    50,     0,    25,     0,    33,
       0,     0,   178,     0,     0,     0,     0,     0,     0,   180,
       0,    83,   112,   119,   120,   121,   114,   116,   122,   115,
     134,   123,   124,   125,   118,   113,   127,   128,     0,    28,
     230,     0,    98,     0,    57,    90,     0,     0,    60,    20,
       0,    18,   110,     0,     0,     0,    35,    78,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,   129,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,     0,    78,
       0,    72,    73,     0,    71,     0,    75,   104,    63,    62,
       0,    16,     0,     0,    39,     0,    42,    41,     0,    40,
      45,    38,    48,    32,     0,    77,   166,     0,   179,   181,
       0,   169,   170,   171,   172,   173,   174,     0,     0,     0,
       0,     0,   153,     0,     0,     0,   105,   213,   126,   117,
     145,   146,     0,   141,     0,     0,     0,   132,     0,   144,
     143,   159,   160,   161,   162,   163,   164,   165,   136,   135,
     138,   137,   139,   140,     0,    26,   231,    97,     0,     0,
       0,     0,    66,    90,    67,    74,    70,     0,     0,    68,
       0,    19,    31,     0,     0,    46,     0,    37,    36,     0,
     157,     0,     0,     0,   151,     0,     0,     0,   175,     0,
     211,     0,   212,   111,     0,   142,     0,     0,     0,   133,
     176,    81,    79,    56,    89,    91,    96,     0,     0,   104,
     100,   102,    99,    21,     0,     0,    47,   167,     0,   155,
       0,   154,     0,   158,   106,   210,   177,     0,     0,   149,
     147,     0,    84,    80,     0,    95,    94,    93,    65,    64,
      69,     0,     0,    43,    44,   168,   152,   156,   150,   148,
      82,   195,   197,     0,   199,   209,   198,    86,    92,   103,
     101,     0,   225,   217,   223,   221,   224,   219,     0,     0,
       0,   208,   202,   206,     0,    76,     0,   220,   222,   218,
       0,   196,   210,     0,   214,   226,     0,    88,     0,     0,
       0,     0,    85,     0,   227,   215,   207,    87,   178,     0,
     216
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -348,  -348,  -348,   385,  -348,   418,  -348,   244,  -348,  -348,
    -348,  -348,  -348,   242,  -348,  -348,  -348,  -348,   222,  -348,
    -348,  -348,   401,  -348,  -348,  -348,  -348,  -348,  -348,   303,
     177,  -348,  -108,  -348,  -348,  -348,   252,   262,  -348,  -348,
    -348,   -90,  -348,  -348,   179,  -348,   114,  -348,  -348,   131,
    -212,  -348,   -82,   157,   -85,   -91,  -348,  -348,  -348,  -348,
    -348,  -348,   309,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,    60,   -43,   -66,  -348,  -348,     0,  -348,  -348,  -348,
    -347,    71,  -348,  -348,  -348,     1,  -348,  -348,    99,  -348,
    -348,  -348,  -348,  -348,    66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    45,   140,   141,    16,    82,
      17,    18,    55,   128,    19,    20,    52,   145,   146,   212,
     287,    21,    59,    22,    23,    24,    89,    25,    91,    92,
     272,   273,   134,   195,   196,   276,   135,   217,   311,   342,
     343,    86,   385,   402,   197,   314,   315,   347,   189,   279,
     235,    72,    73,   236,   237,   112,   113,   114,   115,   116,
     117,   118,   153,   119,   120,   121,   122,   227,   123,   124,
     125,   126,   127,    75,    76,    77,    78,    79,    80,   360,
     361,   362,   363,   364,    35,   365,   381,   382,   302,   303,
     366,   378,   405,    43,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,   138,   159,    28,   215,   289,    74,   218,   408,   401,
      36,    65,    66,    67,    85,   156,    39,   158,   132,   161,
     152,   129,    26,   244,   151,   160,   300,   161,   161,   100,
     169,    37,   391,    53,   308,    56,    27,    29,   162,   230,
      61,   220,   352,   395,   293,   186,   162,   162,   187,   300,
      40,   198,   245,    84,   161,   142,   312,   184,   231,    38,
      94,    95,   191,   231,   156,   232,   228,    30,    32,    31,
     294,   239,   242,   162,   243,   371,   240,   241,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   192,   338,   102,    65,    66,    67,   137,
     161,   101,    68,    33,   247,   132,   355,   298,   269,   372,
     292,   133,   299,   201,   373,    34,   202,   161,   280,   162,
     374,   375,   248,   193,   271,   297,   299,   194,    41,   102,
      65,    66,    67,   103,   104,   376,   162,   129,   307,  -226,
     377,   380,    42,    69,    70,   295,   296,    74,   169,    47,
     216,    44,   161,   305,   219,   109,   277,    74,   102,    65,
      66,    67,   285,   318,   301,   345,    50,   103,   104,    71,
     105,   162,    48,   183,   278,   184,   332,   132,    51,   213,
     286,   397,   214,   161,   264,   316,   265,    68,   267,    49,
     161,   346,   320,   322,   151,    57,   103,   104,   337,   147,
     169,   148,   162,    54,   105,   106,   328,   329,   330,   162,
    -200,   161,   161,   336,   331,   356,    58,   313,    63,   107,
      98,    68,   180,   181,   182,   183,    64,   184,    69,    70,
     162,   162,    81,   105,   102,    65,    66,    67,    83,   106,
     323,   108,   109,    98,    85,   327,    87,   357,   299,   110,
      68,    88,   367,   107,    71,   340,    90,    93,   299,   316,
     321,   359,    69,    70,   299,    97,   369,   370,   106,    96,
      98,   406,   103,   104,   187,   108,   109,    99,   163,    65,
     130,   136,   107,   110,   102,    65,    66,    67,    71,   139,
     371,    69,    70,   204,   143,   102,    65,    66,    67,   205,
     144,   149,   150,   157,   108,   109,   206,   185,   164,   105,
     188,   190,   110,   200,   404,   233,   407,    71,   203,   238,
     132,   246,   154,   104,   372,    67,    68,   266,   215,   373,
     207,   270,   275,   283,   104,   374,   375,   221,   222,   223,
     224,   225,   226,   284,   106,   290,   244,   208,   291,   161,
     376,   306,   309,   165,  -226,   377,   184,   193,   107,   105,
     310,   324,   209,   325,   333,   326,   210,    69,    70,   335,
     105,   339,   299,   341,   166,   344,    68,   348,   164,   211,
     108,   109,   167,   168,   349,   351,   379,    68,   110,   169,
     170,   353,   384,    71,   155,   354,   358,   386,   387,   171,
     172,   173,   174,   175,   388,   155,   176,   177,   107,   178,
     179,   180,   181,   182,   183,   389,   184,    69,    70,   107,
     390,   164,   392,   165,   393,  -201,   148,    62,    69,    70,
     108,   109,   410,   396,    46,   403,   288,   304,   110,    60,
     199,   108,   109,    71,   234,   282,   281,   274,   317,   110,
     350,   268,   319,   168,    71,   164,   334,   394,   368,   169,
     170,   229,   400,   409,   383,     0,   165,     0,     0,   171,
     172,   173,   174,   175,     0,     0,   176,   177,     0,   178,
     179,   180,   181,   182,   183,     0,   184,   234,     0,   164,
       0,     0,     0,     0,     0,     0,   168,     0,     0,     0,
    -227,     0,   169,   170,     0,     0,   371,     0,     0,     0,
       0,     0,   171,   172,   173,   174,   175,     0,     0,   176,
     177,     0,   178,   179,   180,   181,   182,   183,     0,   184,
     168,     0,     0,     0,     0,     0,   169,  -227,     0,     0,
     372,     0,     0,     0,     0,   373,  -227,  -227,  -227,   174,
     175,   374,   375,   176,   177,   398,   178,   179,   180,   181,
     182,   183,     0,   184,   168,     0,   376,     0,     0,     0,
     169,   377,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,  -227,  -227,     0,     0,  -227,  -227,     2,
     178,   179,   180,   181,   182,   183,     3,   184,     0,     0,
       0,     4,     0,     0,   399,     0,     0,     0,     0,     5,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11
};

static const yytype_int16 yycheck[] =
{
      85,    91,   110,     2,    12,   217,    49,     3,     3,    44,
       9,     4,     5,     6,    76,   106,    19,   108,    51,   106,
     105,    87,    27,    92,   102,   110,     3,   106,   106,    85,
     128,    73,   379,    32,   246,    34,     3,     3,   125,    83,
      39,   149,    48,   390,    83,   158,   125,   125,   161,     3,
      53,   136,   121,    52,   106,    98,   268,   155,   102,   101,
      59,    60,     9,   102,   155,   109,   151,     3,    85,    73,
     109,   158,   163,   125,   165,    26,   161,   162,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    40,   306,     3,     4,     5,     6,   161,
     106,   157,    95,    85,    95,    51,   158,   156,   190,    60,
      99,    57,   161,   158,    65,    89,   161,   106,   200,   125,
      71,    72,   113,    70,   157,   233,   161,    74,     0,     3,
       4,     5,     6,    41,    42,    86,   125,   203,   246,    90,
      91,   118,   160,   136,   137,   230,   231,   190,   128,     3,
     158,   103,   106,   244,   150,   150,    48,   200,     3,     4,
       5,     6,    95,   271,   118,    81,    85,    41,    42,   162,
      78,   125,   159,   153,    66,   155,    99,    51,   120,   158,
     113,   393,   161,   106,   184,   270,   185,    95,   188,   157,
     106,   107,   277,   278,   102,   115,    41,    42,   306,   157,
     128,   159,   125,   108,    78,   113,   291,   292,   293,   125,
     161,   106,   106,   304,   109,   109,   120,   158,    88,   127,
     161,    95,   150,   151,   152,   153,     3,   155,   136,   137,
     125,   125,     4,    78,     3,     4,     5,     6,   113,   113,
     158,   149,   150,   161,    76,   158,    84,   332,   161,   157,
      95,   157,   342,   127,   162,   158,     3,    41,   161,   344,
     105,   158,   136,   137,   161,   158,   351,   352,   113,   157,
     161,   158,    41,    42,   161,   149,   150,    41,    17,     4,
       3,   138,   127,   157,     3,     4,     5,     6,   162,     3,
      26,   136,   137,    25,   116,     3,     4,     5,     6,    31,
       3,   157,   157,   155,   149,   150,    38,    89,    47,    78,
     117,   157,   157,   157,   399,   157,   401,   162,    84,   158,
      51,   157,    41,    42,    60,     6,    95,     3,    12,    65,
      62,   119,   105,   157,    42,    71,    72,   130,   131,   132,
     133,   134,   135,   157,   113,   158,    92,    79,    85,   106,
      86,   157,    95,    92,    90,    91,   155,    70,   127,    78,
     156,     6,    94,     6,   158,    95,    98,   136,   137,     3,
      78,   158,   161,    85,   113,   161,    95,   158,    47,   111,
     149,   150,   121,   122,   158,    48,   161,    95,   157,   128,
     129,   158,    63,   162,   113,   158,   158,    90,    71,   138,
     139,   140,   141,   142,    71,   113,   145,   146,   127,   148,
     149,   150,   151,   152,   153,    71,   155,   136,   137,   127,
      90,    47,     3,    92,   119,   161,   159,    42,   136,   137,
     149,   150,   158,   157,    16,   157,   214,   106,   157,    38,
     137,   149,   150,   162,   113,   203,   202,   195,   271,   157,
     319,   189,   273,   122,   162,    47,   299,   386,   344,   128,
     129,   152,   396,   403,   365,    -1,    92,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,    -1,   155,   113,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      92,    -1,   128,   129,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,    -1,   155,
     122,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    65,   138,   139,   140,   141,
     142,    71,    72,   145,   146,    75,   148,   149,   150,   151,
     152,   153,    -1,   155,   122,    -1,    86,    -1,    -1,    -1,
     128,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,   141,   142,    -1,    -1,   145,   146,    15,
     148,   149,   150,   151,   152,   153,    22,   155,    -1,    -1,
      -1,    27,    -1,    -1,   124,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    56,
      82,    97,   164,   165,   166,   167,   171,   173,   174,   177,
     178,   184,   186,   187,   188,   190,    27,     3,   248,     3,
       3,    73,    85,    85,    89,   247,   248,    73,   101,    19,
      53,     0,   160,   256,   103,   168,   168,     3,   159,   157,
      85,   120,   179,   248,   108,   175,   248,   115,   120,   185,
     185,   248,   166,    88,     3,     4,     5,     6,    95,   136,
     137,   162,   214,   215,   235,   236,   237,   238,   239,   240,
     241,     4,   172,   113,   248,    76,   204,    84,   157,   189,
       3,   191,   192,    41,   248,   248,   157,   158,   161,    41,
      85,   157,     3,    41,    42,    78,   113,   127,   149,   150,
     157,   217,   218,   219,   220,   221,   222,   223,   224,   226,
     227,   228,   229,   231,   232,   233,   234,   235,   176,   236,
       3,   257,    51,    57,   195,   199,   138,   161,   204,     3,
     169,   170,   235,   116,     3,   180,   181,   157,   159,   157,
     157,   102,   217,   225,    41,   113,   218,   155,   218,   195,
     217,   106,   125,    17,    47,    92,   113,   121,   122,   128,
     129,   138,   139,   140,   141,   142,   145,   146,   148,   149,
     150,   151,   152,   153,   155,    89,   158,   161,   117,   211,
     157,     9,    40,    70,    74,   196,   197,   207,   217,   192,
     157,   158,   161,    84,    25,    31,    38,    62,    79,    94,
      98,   111,   182,   158,   161,    12,   158,   200,     3,   150,
     195,   130,   131,   132,   133,   134,   135,   230,   217,   225,
      83,   102,   109,   157,   113,   213,   216,   217,   158,   158,
     217,   217,   218,   218,    92,   121,   157,    95,   113,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   239,   248,     3,   239,   200,   215,
     119,   157,   193,   194,   199,   105,   198,    48,    66,   212,
     215,   170,   176,   157,   157,    95,   113,   183,   181,   213,
     158,    85,    99,    83,   109,   217,   217,   195,   156,   161,
       3,   118,   251,   252,   106,   218,   157,   195,   213,    95,
     156,   201,   213,   158,   208,   209,   217,   193,   195,   207,
     217,   105,   217,   158,     6,     6,    95,   158,   217,   217,
     217,   109,    99,   158,   216,     3,   218,   195,   213,   158,
     158,    85,   202,   203,   161,    81,   107,   210,   158,   158,
     212,    48,    48,   158,   158,   158,   109,   217,   158,   158,
     242,   243,   244,   245,   246,   248,   253,   204,   209,   217,
     217,    26,    60,    65,    71,    72,    86,    91,   254,   161,
     118,   249,   250,   251,    63,   205,    90,    71,    71,    71,
      90,   243,     3,   119,   244,   243,   157,   213,    75,   124,
     257,    44,   206,   157,   217,   255,   158,   217,     3,   234,
     158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   165,   165,   166,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   172,   173,   173,   174,   175,   176,   177,
     177,   178,   178,   179,   179,   180,   180,   181,   182,   182,
     182,   182,   182,   182,   182,   182,   183,   183,   183,   184,
     184,   184,   185,   185,   186,   187,   188,   188,   189,   189,
     190,   191,   191,   192,   193,   193,   194,   194,   195,   195,
     196,   197,   197,   197,   198,   198,   199,   200,   200,   201,
     202,   202,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   210,   210,   210,   211,   211,   212,
     212,   212,   212,   212,   212,   213,   213,   214,   214,   215,
     215,   216,   217,   217,   217,   217,   217,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   219,   219,   220,
     220,   220,   220,   220,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   222,   222,   223,   223,   223,
     223,   224,   224,   224,   224,   225,   225,   226,   226,   227,
     227,   227,   227,   227,   227,   227,   228,   228,   229,   230,
     230,   230,   230,   230,   230,   231,   232,   233,   234,   234,
     234,   234,   235,   235,   235,   235,   235,   236,   237,   237,
     238,   238,   239,   240,   241,   242,   242,   243,   243,   244,
     245,   245,   246,   247,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   253,   253,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   255,   256,   256,
     257,   257
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     3,
       1,     4,     4,     1,     2,     5,     7,     1,     1,     2,
       3,     8,     7,     3,     0,     1,     3,     3,     1,     1,
       1,     1,     1,     4,     4,     1,     1,     2,     0,     4,
       4,     3,     2,     0,     4,     2,     8,     5,     3,     0,
       5,     1,     3,     3,     3,     3,     1,     1,     3,     5,
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
       1,     3,     2,     1,     1,     3,     1,     5,     1,     0,
       2,     1,     1,     0,     4,     6,     8,     1,     2,     1,
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
  YYUSE (yytype);
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
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1703 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1709 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1715 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1721 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 165: /* statement_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1734 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 166: /* statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1740 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 167: /* preparable_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1746 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* opt_hints  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1759 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* hint_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1772 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* hint  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1778 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* prepare_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1784 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* prepare_target_query  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1790 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* execute_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1796 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* import_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1802 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* import_file_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1808 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* file_path  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1814 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* show_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1820 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* create_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1826 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* opt_not_exists  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1832 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* column_def_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1845 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* column_def  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1851 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* column_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1857 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_column_nullable  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1863 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* drop_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1869 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_exists  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1875 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* delete_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1881 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* truncate_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1887 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* insert_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1893 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_column_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1906 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* update_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1912 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* update_clause_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1925 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* update_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1931 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* select_with_paren  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1937 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* select_paren_or_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1943 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* select_no_paren  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1949 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* select_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1955 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_distinct  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1961 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1974 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_from_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1980 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* from_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1986 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_where  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1992 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* opt_group  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 1998 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_having  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2004 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_order  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2017 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* order_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2030 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* order_desc  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2036 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_order_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2042 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_top  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2048 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_limit  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2054 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* expr_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2067 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_literal_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2080 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* literal_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2093 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* expr_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2099 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2105 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* operand  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2111 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* scalar_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2117 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* unary_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2123 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* binary_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2129 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* logic_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2135 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* in_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2141 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* case_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2147 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* case_list  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2153 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* exists_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2159 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* comp_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2165 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* function_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2171 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* extract_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2177 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* datetime_field  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2183 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* array_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2189 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* array_index  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2195 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* between_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2201 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* column_name  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2207 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2213 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* string_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2219 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* bool_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2225 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* num_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2231 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* int_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2237 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* null_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2243 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* param_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2249 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* table_ref  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2255 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* table_ref_atomic  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2261 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* nonjoin_table_ref_atomic  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2267 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* table_ref_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2280 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* table_ref_name  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2286 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* table_ref_name_no_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2292 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* table_name  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2298 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* table_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2304 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* opt_table_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2310 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2316 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* opt_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2322 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* join_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2328 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* opt_join_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2334 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* join_condition  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2340 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* ident_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2353 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 73 "bison_parser.y" /* yacc.c:1437  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2471 "bison_parser.cpp" /* yacc.c:1437  */
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
#line 258 "bison_parser.y" /* yacc.c:1667  */
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
#line 2681 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 3:
#line 279 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2692 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 4:
#line 285 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2703 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 5:
#line 294 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2712 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 6:
#line 298 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2721 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 7:
#line 302 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2729 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 8:
#line 310 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2735 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 9:
#line 311 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2741 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 10:
#line 312 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2747 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 11:
#line 313 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2753 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 12:
#line 314 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2759 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 13:
#line 315 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2765 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 14:
#line 316 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2771 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 15:
#line 317 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2777 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 16:
#line 326 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2783 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 17:
#line 327 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = nullptr; }
#line 2789 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 18:
#line 332 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2795 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 19:
#line 333 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2801 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 20:
#line 337 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2810 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 21:
#line 341 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2820 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 22:
#line 353 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2830 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 24:
#line 363 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2839 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 25:
#line 367 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2849 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 26:
#line 379 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2860 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 27:
#line 388 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kImportCSV; }
#line 2866 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 28:
#line 392 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2872 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 29:
#line 402 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2880 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 30:
#line 405 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2890 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 31:
#line 419 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2902 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 32:
#line 426 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2914 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 33:
#line 444 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = true; }
#line 2920 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 34:
#line 445 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 2926 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 35:
#line 449 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2932 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 36:
#line 450 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2938 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 37:
#line 454 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 2946 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 38:
#line 460 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2952 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 39:
#line 461 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 2958 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 40:
#line 462 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 2964 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 41:
#line 463 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 2970 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 42:
#line 464 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 2976 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 43:
#line 465 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 2982 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 44:
#line 466 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 2988 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 45:
#line 467 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 2994 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 46:
#line 471 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = true; }
#line 3000 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 47:
#line 472 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3006 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 48:
#line 473 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3012 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 49:
#line 483 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3023 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 50:
#line 489 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3034 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 51:
#line 495 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3044 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 52:
#line 503 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = true; }
#line 3050 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 53:
#line 504 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3056 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 54:
#line 513 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3067 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 55:
#line 522 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3077 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 56:
#line 535 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3089 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 57:
#line 542 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3101 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 58:
#line 553 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3107 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 59:
#line 554 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.str_vec) = nullptr; }
#line 3113 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 60:
#line 564 "bison_parser.y" /* yacc.c:1667  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3124 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 61:
#line 573 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3130 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 62:
#line 574 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3136 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 63:
#line 578 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3146 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 64:
#line 610 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3152 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 65:
#line 611 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3158 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 68:
#line 620 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3173 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 69:
#line 630 "bison_parser.y" /* yacc.c:1667  */
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
#line 3192 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 76:
#line 662 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3206 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 77:
#line 674 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = true; }
#line 3212 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 78:
#line 675 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3218 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 80:
#line 683 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3224 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 81:
#line 684 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table) = nullptr; }
#line 3230 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 82:
#line 687 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3236 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 83:
#line 692 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3242 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 84:
#line 693 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = nullptr; }
#line 3248 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 85:
#line 697 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3258 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 86:
#line 702 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.group_t) = nullptr; }
#line 3264 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 87:
#line 706 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3270 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 88:
#line 707 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = nullptr; }
#line 3276 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 89:
#line 710 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3282 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 90:
#line 711 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_vec) = nullptr; }
#line 3288 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 91:
#line 715 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3294 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 92:
#line 716 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3300 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 93:
#line 720 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3306 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 94:
#line 724 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_type) = kOrderAsc; }
#line 3312 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 95:
#line 725 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_type) = kOrderDesc; }
#line 3318 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 96:
#line 726 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_type) = kOrderAsc; }
#line 3324 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 97:
#line 732 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3330 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 98:
#line 733 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = nullptr; }
#line 3336 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 99:
#line 737 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3342 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 100:
#line 738 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3348 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 101:
#line 739 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3354 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 102:
#line 740 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3360 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 103:
#line 741 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3366 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 104:
#line 742 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = nullptr; }
#line 3372 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 105:
#line 749 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3378 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 106:
#line 750 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3384 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 107:
#line 754 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3390 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 108:
#line 755 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = nullptr; }
#line 3396 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 109:
#line 759 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3402 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 110:
#line 760 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3408 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 111:
#line 764 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3420 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 117:
#line 782 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3426 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 126:
#line 791 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3432 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 129:
#line 800 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3438 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 130:
#line 801 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3444 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 131:
#line 802 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3450 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 132:
#line 803 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3456 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 133:
#line 804 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3462 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 135:
#line 809 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3468 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 136:
#line 810 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3474 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 137:
#line 811 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3480 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 138:
#line 812 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3486 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 139:
#line 813 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3492 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 140:
#line 814 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3498 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 141:
#line 815 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3504 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 142:
#line 816 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3510 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 143:
#line 817 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3516 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 144:
#line 818 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3522 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 145:
#line 822 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3528 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 146:
#line 823 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3534 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 147:
#line 827 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3540 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 148:
#line 828 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3546 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 149:
#line 829 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3552 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 150:
#line 830 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3558 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 151:
#line 836 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3564 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 152:
#line 837 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3570 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 153:
#line 838 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3576 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 154:
#line 839 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3582 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 155:
#line 843 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3588 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 156:
#line 844 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3594 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 157:
#line 848 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3600 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 158:
#line 849 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3606 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 159:
#line 853 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3612 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 160:
#line 854 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3618 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 161:
#line 855 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3624 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 162:
#line 856 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3630 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 163:
#line 857 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3636 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 164:
#line 858 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3642 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 165:
#line 859 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3648 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 166:
#line 863 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3654 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 167:
#line 864 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3660 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 168:
#line 868 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3666 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 169:
#line 872 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3672 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 170:
#line 873 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3678 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 171:
#line 874 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3684 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 172:
#line 875 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3690 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 173:
#line 876 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3696 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 174:
#line 877 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3702 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 175:
#line 880 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3708 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 176:
#line 884 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3714 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 177:
#line 888 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3720 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 178:
#line 892 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3726 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 179:
#line 893 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3732 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 180:
#line 894 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3738 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 181:
#line 895 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3744 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 187:
#line 907 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3750 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 188:
#line 911 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3756 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 189:
#line 912 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3762 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 190:
#line 916 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3768 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 192:
#line 921 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3774 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 193:
#line 925 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3780 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 194:
#line 929 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3790 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 196:
#line 942 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3801 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 200:
#line 967 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3807 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 201:
#line 968 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3813 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 202:
#line 973 "bison_parser.y" /* yacc.c:1667  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3825 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 203:
#line 984 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3835 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 204:
#line 993 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 3841 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 205:
#line 994 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 3847 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 207:
#line 1000 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 3853 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 209:
#line 1006 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = nullptr; }
#line 3859 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 210:
#line 1010 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3865 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 211:
#line 1011 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 3871 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 213:
#line 1017 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = nullptr; }
#line 3877 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 214:
#line 1056 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3889 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 215:
#line 1064 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3902 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 216:
#line 1074 "bison_parser.y" /* yacc.c:1667  */
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
#line 3922 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 217:
#line 1092 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinInner; }
#line 3928 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 218:
#line 1093 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinLeft; }
#line 3934 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 219:
#line 1094 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinLeft; }
#line 3940 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 220:
#line 1095 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinRight; }
#line 3946 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 221:
#line 1096 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinRight; }
#line 3952 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 222:
#line 1097 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinFull; }
#line 3958 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 223:
#line 1098 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinFull; }
#line 3964 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 224:
#line 1099 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinFull; }
#line 3970 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 225:
#line 1100 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinCross; }
#line 3976 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 226:
#line 1101 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinInner; }
#line 3982 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 230:
#line 1121 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3988 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 231:
#line 1122 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3994 "bison_parser.cpp" /* yacc.c:1667  */
    break;


#line 3998 "bison_parser.cpp" /* yacc.c:1667  */
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
#line 1125 "bison_parser.y" /* yacc.c:1918  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
