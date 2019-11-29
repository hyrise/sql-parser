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
    SQL_END = 363,
    SQL_FOR = 364,
    SQL_INT = 365,
    SQL_KEY = 366,
    SQL_NOT = 367,
    SQL_OFF = 368,
    SQL_SET = 369,
    SQL_TOP = 370,
    SQL_AS = 371,
    SQL_BY = 372,
    SQL_IF = 373,
    SQL_IN = 374,
    SQL_IS = 375,
    SQL_OF = 376,
    SQL_ON = 377,
    SQL_OR = 378,
    SQL_TO = 379,
    SQL_ARRAY = 380,
    SQL_CONCAT = 381,
    SQL_ILIKE = 382,
    SQL_SECOND = 383,
    SQL_MINUTE = 384,
    SQL_HOUR = 385,
    SQL_DAY = 386,
    SQL_MONTH = 387,
    SQL_YEAR = 388,
    SQL_TRUE = 389,
    SQL_FALSE = 390,
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

#line 372 "bison_parser.cpp" /* yacc.c:352  */
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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   757

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  161
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  442

#define YYUNDEFTOK  2
#define YYMAXUTOK   398

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
       0,   258,   258,   279,   285,   294,   298,   302,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   326,   327,   332,
     333,   337,   341,   353,   360,   363,   367,   379,   388,   400,
     410,   413,   418,   432,   442,   449,   456,   467,   468,   472,
     473,   477,   483,   484,   485,   486,   487,   488,   489,   490,
     494,   495,   496,   506,   512,   518,   526,   527,   536,   545,
     558,   565,   576,   577,   587,   596,   597,   601,   613,   617,
     621,   639,   640,   644,   645,   649,   659,   676,   680,   681,
     682,   686,   687,   691,   703,   704,   708,   712,   713,   716,
     721,   722,   726,   731,   735,   736,   739,   740,   744,   745,
     749,   753,   754,   755,   761,   762,   766,   767,   768,   769,
     770,   771,   778,   779,   783,   784,   788,   789,   793,   803,
     804,   805,   806,   807,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   824,   825,   829,   830,   831,   832,
     833,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   851,   852,   856,   857,   858,   859,   865,   866,
     867,   868,   872,   873,   877,   878,   882,   883,   884,   885,
     886,   887,   888,   892,   893,   897,   901,   902,   903,   904,
     905,   906,   909,   913,   917,   921,   922,   923,   924,   928,
     929,   930,   931,   932,   936,   940,   941,   945,   946,   950,
     954,   958,   970,   971,   981,   982,   986,   987,   996,   997,
    1002,  1013,  1022,  1023,  1028,  1029,  1034,  1035,  1039,  1040,
    1045,  1046,  1054,  1055,  1059,  1063,  1067,  1074,  1087,  1095,
    1105,  1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,
    1133,  1138,  1147,  1148,  1153,  1154
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
  "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TOP", "AS",
  "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY", "CONCAT",
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
     385,   386,   387,   388,   389,   390,    61,   391,   392,    60,
      62,   393,   394,   395,   396,   397,    43,    45,    42,    47,
      37,    94,   398,    91,    93,    40,    41,    46,    59,    44,
      63
};
# endif

#define YYPACT_NINF -250

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-250)))

#define YYTABLE_NINF -243

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-243)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     654,    23,    47,    68,    69,    47,     3,    -4,    28,    -2,
      47,     9,    37,    91,   102,   -10,  -250,    65,    65,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,   -40,
    -250,   176,    31,  -250,    56,   117,  -250,   105,   105,    47,
     216,    47,   129,  -250,   156,   156,    47,  -250,   144,   119,
    -250,  -250,   636,  -250,   192,  -250,  -250,   171,   -40,    44,
    -250,    19,  -250,   287,    16,   288,   194,    47,    47,   242,
    -250,   236,   172,   322,   289,    47,    47,  -250,   177,    91,
    -250,   180,   325,   326,   181,   186,  -250,  -250,  -250,   -40,
     239,   228,   -40,    99,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,   190,   191,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,   311,   -70,   172,   263,  -250,   349,   359,
      52,   227,   -58,  -250,  -250,  -250,  -250,  -250,  -250,   361,
    -250,  -250,   263,  -250,  -250,  -250,   295,  -250,  -250,  -250,
     263,   295,   263,    57,  -250,  -250,    16,  -250,   363,   265,
     368,   256,    82,   218,   219,   136,   307,   225,   318,  -250,
     222,   -87,   344,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,   290,  -250,
    -250,    74,   226,  -250,   263,   322,  -250,   229,    76,  -250,
     298,   221,  -250,    30,    99,   230,  -250,   -27,    99,   -87,
     338,   -32,  -250,   303,  -250,   257,   100,  -250,   265,    17,
      10,   341,   122,   263,    83,   -51,   238,   318,   442,   263,
      46,   243,   -89,   263,   263,   318,  -250,   318,   -61,   240,
     -60,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   325,    47,  -250,   391,
      16,   -87,  -250,    16,  -250,   361,     5,   242,  -250,   263,
    -250,   397,  -250,  -250,  -250,   263,  -250,  -250,  -250,  -250,
     263,   263,   349,  -250,   246,  -250,  -250,   248,  -250,  -250,
    -250,   106,  -250,   368,  -250,  -250,   263,  -250,  -250,   249,
    -250,  -250,  -250,  -250,  -250,  -250,   319,   -11,    78,   263,
     263,  -250,   341,   314,    54,  -250,  -250,  -250,   301,   393,
     474,   318,   253,   222,  -250,   317,   261,   474,   474,   474,
     474,   506,   506,   506,   506,    46,    46,   -34,   -34,   -34,
      18,   255,  -250,  -250,   116,   120,  -250,   265,  -250,   150,
    -250,   258,  -250,    27,  -250,   352,  -250,  -250,  -250,   -87,
     -87,  -250,   410,   414,  -250,   327,  -250,  -250,   138,  -250,
     263,   263,   263,  -250,   -68,    75,   269,  -250,   318,   474,
     222,   270,   142,  -250,  -250,  -250,  -250,   271,   331,  -250,
    -250,  -250,   353,   357,   358,   343,     5,   428,  -250,  -250,
    -250,   320,  -250,   278,   279,  -250,  -250,   -81,   -87,   101,
    -250,   263,  -250,   442,   282,   143,  -250,  -250,    27,     5,
    -250,  -250,  -250,     5,   217,   284,   263,  -250,  -250,  -250,
    -250,   -87,  -250,  -250,  -250,  -250,   268,   359,   -21,   291,
     263,   170,   263,  -250,    11,   -87,  -250,  -250,   -87,   292,
     294,  -250
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,     0,
     222,     0,   212,    59,    25,     0,    32,    38,    38,     0,
       0,     0,     0,   211,    57,    57,     0,    30,     0,   224,
     225,     1,   223,     2,     0,     6,     5,   105,     0,    68,
      69,    97,    55,     0,   115,     0,     0,     0,     0,    91,
      28,     0,    63,     0,     0,     0,     0,    31,     0,     0,
       4,     0,     0,    85,     0,     0,    79,    80,    78,     0,
      82,     0,     0,   111,   213,   194,   197,   199,   200,   195,
     196,   201,     0,   114,   116,   189,   190,   191,   198,   192,
     193,    24,    23,     0,     0,    63,     0,    58,     0,     0,
       0,     0,    91,    65,    56,    53,    54,   227,   226,     0,
     104,    84,     0,    72,    71,    73,    97,    74,    81,    77,
       0,    97,     0,     0,    75,    26,     0,    37,     0,   223,
       0,     0,   185,     0,     0,     0,     0,     0,     0,   187,
       0,    90,   119,   126,   127,   128,   121,   123,   129,   122,
     141,   130,   131,   132,   125,   120,   134,   135,     0,    29,
     244,     0,     0,    61,     0,     0,    64,    21,     0,    19,
      88,    86,   112,   221,   111,    96,    98,   103,   111,   107,
     109,   106,   117,     0,    35,     0,     0,    39,   223,    85,
       0,     0,     0,     0,     0,     0,     0,     0,   137,     0,
     136,     0,     0,     0,     0,     0,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,     0,
       0,    67,    66,     0,    17,     0,     0,    91,    87,     0,
     219,     0,   220,   118,    70,     0,   102,   101,   100,    76,
       0,     0,     0,    43,     0,    46,    45,     0,    44,    49,
      42,    52,    34,     0,    36,   173,     0,   186,   188,     0,
     176,   177,   178,   179,   180,   181,     0,     0,     0,     0,
       0,   160,     0,     0,     0,   133,   124,   152,   153,     0,
     148,     0,     0,     0,   139,     0,   151,   150,   166,   167,
     168,   169,   170,   171,   172,   143,   142,   145,   144,   146,
     147,     0,    27,   245,     0,     0,    20,   223,    89,   202,
     204,     0,   206,   217,   205,    93,   113,   218,    99,   110,
     108,    33,     0,     0,    50,     0,    41,    40,     0,   164,
       0,     0,     0,   158,     0,     0,     0,   182,     0,   149,
       0,     0,     0,   140,   183,    60,    22,     0,     0,   239,
     231,   237,   235,   238,   233,     0,     0,     0,   216,   210,
     214,     0,    83,     0,     0,    51,   174,     0,   162,     0,
     161,     0,   165,   184,     0,     0,   156,   154,   217,     0,
     234,   236,   232,     0,   203,   218,     0,    47,    48,   175,
     159,   163,   157,   155,   207,   228,   240,     0,    95,     0,
       0,     0,     0,    92,     0,   241,   229,   215,    94,   185,
       0,   230
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,  -250,   392,  -250,   427,  -250,   193,  -250,  -250,
    -250,  -250,  -250,   175,  -250,  -250,   413,  -250,   174,  -250,
    -250,  -250,   415,  -250,  -250,  -250,   346,  -250,  -250,   273,
    -144,     8,   367,   -55,   407,  -250,  -250,   173,   260,  -250,
    -250,  -250,  -112,  -250,  -250,    93,  -250,   207,  -250,  -250,
      22,  -213,  -250,   -83,   215,  -116,  -111,  -250,  -250,  -250,
    -250,  -250,  -250,   262,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,    41,   -63,  -109,  -250,  -250,   -80,  -250,  -250,
    -250,  -249,    70,  -250,  -250,  -250,     2,  -250,    88,   293,
    -250,  -250,  -250,  -250,   398,  -250,  -250,  -250,  -250,    71
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    55,   188,   189,    18,   112,
      19,    20,    71,   178,    21,    22,    67,   206,   207,   281,
     356,    23,    75,    24,    25,    26,   120,    27,   122,   123,
      28,   135,   136,    60,    89,    90,   139,    61,   132,   190,
     257,   258,   117,   392,   433,    93,   195,   196,   268,    83,
     144,   191,   102,   103,   192,   193,   162,   163,   164,   165,
     166,   167,   168,   215,   169,   170,   171,   172,   296,   173,
     174,   175,   176,   177,   105,   106,   107,   108,   109,   110,
     338,   339,   340,   341,   342,    42,   343,   388,   389,   390,
     263,    29,    30,    49,    50,   344,   385,   436,    53,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     161,   104,   130,    85,    33,   204,   304,    36,    32,   179,
     186,    57,    43,   287,   439,   148,   271,   223,   116,   223,
      95,    96,    97,   432,   197,   223,   199,   201,    86,   131,
     260,   311,   299,   260,   224,   314,   224,    59,   223,   214,
     400,    69,   224,    72,   222,   218,   149,   220,    77,    31,
      32,   300,   315,    86,   266,   224,    46,   301,   312,    87,
     152,    95,    96,    97,   284,   183,    84,   306,   251,   114,
     115,    34,    35,   358,   223,   419,    37,   125,   126,   223,
     267,    39,    44,   202,    87,   150,   127,    41,   361,    91,
      47,   224,   231,    88,    48,   223,   224,   297,   153,   154,
     372,   185,    51,    57,    38,   221,   218,   307,   308,   182,
      45,    98,   224,    40,   309,    58,   310,   245,    88,   246,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   155,   223,   414,   259,   152,
      95,    96,    97,   387,   231,   345,   261,   142,    52,   197,
      99,   100,    98,   224,   349,   350,   289,   405,   288,   159,
     337,   362,   200,   179,   426,   143,   331,   334,    54,   156,
     335,   246,   231,   285,   401,   378,   101,   153,   154,    62,
     300,   223,   157,   364,   365,   213,   363,   104,    63,   223,
     104,    99,   100,   377,   242,   243,   244,   245,   224,   246,
     369,   354,    65,   428,   158,   159,   224,   223,   367,   420,
     379,    64,   160,   259,   155,   380,   264,   101,   355,    70,
     269,   381,   382,    66,   224,   152,    95,    96,    97,   194,
     248,    98,   254,   249,   198,   255,   383,   209,   213,   210,
    -240,   384,   378,    73,   397,   398,   399,   366,   156,   332,
     290,   291,   292,   293,   294,   295,   282,   403,   371,   283,
      78,   157,   137,   153,   154,   137,   152,    95,    96,    97,
      99,   100,   375,    57,    74,   146,   376,   379,    79,   146,
      81,   273,   380,   158,   159,   421,    82,   274,   381,   382,
      94,   160,   111,   378,   396,   275,   101,   259,   407,   423,
     155,   259,   259,   383,   153,   154,   113,  -240,   384,  -208,
     152,    95,    96,    97,   435,   404,   438,    98,   116,   276,
     118,   152,    95,    96,    97,   121,   437,   119,   379,   249,
     124,    97,    58,   380,   156,   129,   277,   133,   131,   381,
     382,   155,   134,   429,   138,   140,   145,   157,   216,   154,
     146,   278,   147,    95,   383,   279,    99,   100,    98,   384,
     154,   225,   180,   184,   187,    91,   203,   280,    13,   158,
     159,   205,   208,   211,   212,   156,  -209,   160,   219,   247,
     259,   250,   101,   256,   253,   155,   270,   272,   157,   265,
     430,   226,    57,   302,   333,   313,   155,    99,   100,   305,
     347,   352,    98,   353,   360,   359,   311,   223,   370,   374,
     158,   159,   373,    98,   246,   391,   393,   386,   160,   217,
     394,   409,   395,   101,   410,   402,   406,   408,   411,   412,
     217,   415,   157,   413,   417,   418,   227,   416,   422,   427,
     226,    99,   100,   157,    80,    56,   434,   351,   336,   210,
     441,    68,    99,   100,   158,   159,   228,   357,   252,   141,
      76,   151,   160,   229,   230,   158,   159,   101,    92,   286,
     231,   232,   348,   160,   346,   440,   298,   128,   101,   425,
     233,   234,   235,   236,   237,   227,   262,   238,   239,   226,
     240,   241,   242,   243,   244,   245,   424,   246,   431,   368,
       0,     0,     0,     0,     0,   303,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,     0,     0,     0,   231,
     232,   226,     0,     0,     0,     0,     0,     0,     0,   233,
     234,   235,   236,   237,   227,     0,   238,   239,     0,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,     0,
       0,     0,     0,   226,   303,     0,     0,     0,     0,     0,
       0,     0,   230,     0,     0,     0,  -243,     0,   231,   232,
       0,     0,     0,     0,     0,     0,     0,     0,   233,   234,
     235,   236,   237,     0,     0,   238,   239,     0,   240,   241,
     242,   243,   244,   245,   230,   246,     0,     0,     0,     0,
     231,  -243,     0,     0,     0,     0,     0,     0,     0,     0,
    -243,  -243,  -243,   236,   237,     0,     0,   238,   239,     0,
     240,   241,   242,   243,   244,   245,   230,   246,     0,     0,
       0,     0,   231,     0,     0,     0,  -242,     0,     0,     0,
       0,     0,     0,     1,     0,  -243,  -243,     0,     0,  -243,
    -243,     2,   240,   241,   242,   243,   244,   245,     3,   246,
       0,     1,     4,     0,     0,     0,     0,     0,     5,     2,
       0,     6,     7,     0,     0,     0,     3,     0,     0,     0,
       4,     8,     9,     0,     0,     0,     5,     0,     0,     6,
       7,     0,    10,     0,     0,     0,     0,     0,     0,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,    11,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,     0,     0,     0,    13
};

static const yytype_int16 yycheck[] =
{
     116,    64,    82,    58,     2,   149,   219,     5,     3,   118,
     122,    51,    10,     3,     3,    85,    48,   106,    76,   106,
       4,     5,     6,    44,   140,   106,   142,   143,     9,    12,
       3,    92,    83,     3,   123,    95,   123,    29,   106,   155,
     108,    39,   123,    41,   160,   156,   116,   158,    46,    26,
       3,   102,   112,     9,    81,   123,    19,   108,   119,    40,
       3,     4,     5,     6,   208,   120,    58,   156,   184,    67,
      68,     3,     3,   286,   106,   156,    73,    75,    76,   106,
     107,    85,    73,   146,    40,   155,    78,    89,    99,    70,
      53,   123,   126,    74,     3,   106,   123,   213,    41,    42,
     313,   159,     0,    51,   101,   160,   217,   223,   224,    57,
     101,    95,   123,    85,   225,   155,   227,   151,    74,   153,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    78,   106,   386,   159,     3,
       4,     5,     6,   116,   126,   257,   116,    48,   158,   265,
     134,   135,    95,   123,   270,   271,   211,   370,   148,   148,
     155,    83,   105,   272,   413,    66,   246,   250,   103,   112,
     253,   153,   126,   156,    99,    25,   160,    41,    42,     3,
     102,   106,   125,   299,   300,   102,   108,   250,   157,   106,
     253,   134,   135,   337,   148,   149,   150,   151,   123,   153,
     311,    95,    85,   416,   147,   148,   123,   106,   154,   108,
      60,   155,   155,   159,    78,    65,   194,   160,   112,     3,
     198,    71,    72,   118,   123,     3,     4,     5,     6,   136,
     156,    95,   156,   159,   141,   159,    86,   155,   102,   157,
      90,    91,    25,   114,   360,   361,   362,   302,   112,   247,
     128,   129,   130,   131,   132,   133,   156,   368,   313,   159,
     116,   125,    89,    41,    42,    92,     3,     4,     5,     6,
     134,   135,   156,    51,   118,   159,   156,    60,   159,   159,
      88,    24,    65,   147,   148,   401,   115,    30,    71,    72,
       3,   155,     4,    25,   156,    38,   160,   159,   156,   156,
      78,   159,   159,    86,    41,    42,   112,    90,    91,   159,
       3,     4,     5,     6,   430,   370,   432,    95,    76,    62,
      84,     3,     4,     5,     6,     3,   156,   155,    60,   159,
      41,     6,   155,    65,   112,   155,    79,   156,    12,    71,
      72,    78,   156,    75,   105,   117,   156,   125,    41,    42,
     159,    94,    41,     4,    86,    98,   134,   135,    95,    91,
      42,    17,     3,   136,     3,    70,     3,   110,   103,   147,
     148,     3,   116,   155,   155,   112,   159,   155,   153,    89,
     159,   155,   160,    85,   155,    78,    48,    84,   125,   159,
     122,    47,    51,   155,     3,   155,    78,   134,   135,   156,
       3,   155,    95,   155,    85,   156,    92,   106,   155,   154,
     147,   148,    95,    95,   153,    63,     6,   159,   155,   112,
       6,    90,    95,   160,    71,   156,   156,   156,    71,    71,
     112,     3,   125,    90,   156,   156,    92,   117,   156,   155,
      47,   134,   135,   125,    52,    18,   155,   272,   255,   157,
     156,    38,   134,   135,   147,   148,   112,   283,   185,    92,
      45,   115,   155,   119,   120,   147,   148,   160,    61,   209,
     126,   127,   265,   155,   259,   434,   214,    79,   160,   409,
     136,   137,   138,   139,   140,    92,   193,   143,   144,    47,
     146,   147,   148,   149,   150,   151,   408,   153,   427,   106,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   126,
     127,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,    92,    -1,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    47,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    92,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
     138,   139,   140,    -1,    -1,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   120,   153,    -1,    -1,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,    -1,    -1,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   120,   153,    -1,    -1,
      -1,    -1,   126,    -1,    -1,    -1,     0,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,   139,   140,    -1,    -1,   143,
     144,    15,   146,   147,   148,   149,   150,   151,    22,   153,
      -1,     7,    26,    -1,    -1,    -1,    -1,    -1,    32,    15,
      -1,    35,    36,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    45,    46,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    82,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,   103
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    45,    46,
      56,    82,    97,   103,   162,   163,   164,   165,   169,   171,
     172,   175,   176,   182,   184,   185,   186,   188,   191,   252,
     253,    26,     3,   247,     3,     3,   247,    73,   101,    85,
      85,    89,   246,   247,    73,   101,    19,    53,     3,   254,
     255,     0,   158,   259,   103,   166,   166,    51,   155,   192,
     194,   198,     3,   157,   155,    85,   118,   177,   177,   247,
       3,   173,   247,   114,   118,   183,   183,   247,   116,   159,
     164,    88,   115,   210,   192,   194,     9,    40,    74,   195,
     196,    70,   195,   206,     3,     4,     5,     6,    95,   134,
     135,   160,   213,   214,   234,   235,   236,   237,   238,   239,
     240,     4,   170,   112,   247,   247,    76,   203,    84,   155,
     187,     3,   189,   190,    41,   247,   247,   192,   255,   155,
     238,    12,   199,   156,   156,   192,   193,   198,   105,   197,
     117,   193,    48,    66,   211,   156,   159,    41,    85,   116,
     155,   187,     3,    41,    42,    78,   112,   125,   147,   148,
     155,   216,   217,   218,   219,   220,   221,   222,   223,   225,
     226,   227,   228,   230,   231,   232,   233,   234,   174,   235,
       3,   260,    57,   194,   136,   159,   203,     3,   167,   168,
     200,   212,   215,   216,   206,   207,   208,   216,   206,   216,
     105,   216,   234,     3,   191,     3,   178,   179,   116,   155,
     157,   155,   155,   102,   216,   224,    41,   112,   217,   153,
     217,   194,   216,   106,   123,    17,    47,    92,   112,   119,
     120,   126,   127,   136,   137,   138,   139,   140,   143,   144,
     146,   147,   148,   149,   150,   151,   153,    89,   156,   159,
     155,   216,   190,   155,   156,   159,    85,   201,   202,   159,
       3,   116,   250,   251,   211,   159,    81,   107,   209,   211,
      48,    48,    84,    24,    30,    38,    62,    79,    94,    98,
     110,   180,   156,   159,   191,   156,   199,     3,   148,   194,
     128,   129,   130,   131,   132,   133,   229,   216,   224,    83,
     102,   108,   155,   112,   212,   156,   156,   216,   216,   217,
     217,    92,   119,   155,    95,   112,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   238,   247,     3,   214,   214,   168,   155,   241,   242,
     243,   244,   245,   247,   256,   203,   215,     3,   208,   216,
     216,   174,   155,   155,    95,   112,   181,   179,   212,   156,
      85,    99,    83,   108,   216,   216,   194,   154,   106,   217,
     155,   194,   212,    95,   154,   156,   156,   191,    25,    60,
      65,    71,    72,    86,    91,   257,   159,   116,   248,   249,
     250,    63,   204,     6,     6,    95,   156,   216,   216,   216,
     108,    99,   156,   217,   194,   212,   156,   156,   156,    90,
      71,    71,    71,    90,   242,     3,   117,   156,   156,   156,
     108,   216,   156,   156,   249,   243,   242,   155,   212,    75,
     122,   260,    44,   205,   155,   216,   258,   156,   216,     3,
     233,   156
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   161,   162,   163,   163,   164,   164,   164,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   166,   167,
     167,   168,   168,   169,   170,   171,   171,   172,   173,   174,
     175,   175,   175,   176,   176,   176,   176,   177,   177,   178,
     178,   179,   180,   180,   180,   180,   180,   180,   180,   180,
     181,   181,   181,   182,   182,   182,   183,   183,   184,   185,
     186,   186,   187,   187,   188,   189,   189,   190,   191,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   196,   196,
     196,   197,   197,   198,   199,   199,   200,   201,   201,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   209,   209,   209,   210,   210,   211,   211,   211,   211,
     211,   211,   212,   212,   213,   213,   214,   214,   215,   216,
     216,   216,   216,   216,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   218,   218,   219,   219,   219,   219,
     219,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   221,   221,   222,   222,   222,   222,   223,   223,
     223,   223,   224,   224,   225,   225,   226,   226,   226,   226,
     226,   226,   226,   227,   227,   228,   229,   229,   229,   229,
     229,   229,   230,   231,   232,   233,   233,   233,   233,   234,
     234,   234,   234,   234,   235,   236,   236,   237,   237,   238,
     239,   240,   241,   241,   242,   242,   243,   243,   244,   244,
     245,   246,   247,   247,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   254,   254,   255,   256,   256,
     256,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   258,   259,   259,   260,   260
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     2,     8,     7,     6,     7,     3,     0,     1,
       3,     3,     1,     1,     1,     1,     1,     4,     4,     1,
       1,     2,     0,     4,     4,     3,     2,     0,     4,     2,
       8,     5,     3,     0,     5,     1,     3,     3,     2,     2,
       6,     3,     3,     1,     1,     3,     5,     2,     1,     1,
       1,     1,     0,     7,     1,     0,     1,     1,     0,     2,
       2,     0,     4,     0,     2,     0,     3,     0,     1,     3,
       2,     1,     1,     0,     2,     0,     2,     2,     4,     2,
       4,     0,     1,     3,     1,     0,     1,     3,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     5,     6,     5,     6,     4,     6,
       3,     5,     4,     5,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     6,     1,     1,     1,     1,
       1,     1,     4,     4,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     4,     1,     3,
       2,     1,     1,     3,     1,     5,     1,     0,     2,     1,
       1,     0,     1,     0,     2,     1,     3,     3,     4,     6,
       8,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       0,     1,     1,     0,     1,     3
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
#line 1731 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1737 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1743 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1749 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 163: /* statement_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1762 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 164: /* statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1768 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 165: /* preparable_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1774 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 166: /* opt_hints  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1787 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 167: /* hint_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1800 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* hint  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1806 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* prepare_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1812 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* prepare_target_query  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* execute_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* import_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1830 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* import_file_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* file_path  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* show_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* create_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* opt_not_exists  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1860 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* column_def_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1873 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* column_def  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1879 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* column_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1885 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* opt_column_nullable  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1891 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* drop_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1897 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_exists  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1903 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* delete_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* truncate_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1915 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* insert_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1921 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_column_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1934 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* update_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1940 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* update_clause_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1953 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* update_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1959 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* select_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1965 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* select_with_paren  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1971 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* select_paren_or_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1977 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* select_no_paren  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1983 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* select_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1989 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_distinct  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1995 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* select_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2008 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_from_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2014 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* from_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2020 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_where  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2026 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_group  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2032 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* opt_having  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2038 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_order  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2051 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* order_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2064 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* order_desc  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2070 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_order_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2076 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_top  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2082 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_limit  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2088 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* expr_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2101 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_literal_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2114 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* literal_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2127 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* expr_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2133 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2139 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* operand  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2145 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* scalar_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2151 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* unary_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2157 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* binary_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2163 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* logic_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2169 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* in_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2175 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* case_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2181 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* case_list  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2187 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* exists_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2193 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* comp_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2199 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* function_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2205 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* extract_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2211 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* datetime_field  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2217 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* array_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2223 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* array_index  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2229 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* between_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2235 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* column_name  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2241 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2247 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* string_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2253 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* bool_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2259 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* num_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2265 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* int_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2271 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* null_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2277 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* param_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2283 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* table_ref  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2289 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* table_ref_atomic  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2295 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* nonjoin_table_ref_atomic  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2301 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* table_ref_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2314 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* table_ref_name  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2320 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* table_ref_name_no_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2326 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* table_name  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2332 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* table_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2338 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* opt_table_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2344 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2350 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* opt_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2356 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* opt_with_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2362 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* with_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2368 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* with_description_list  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2374 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* with_description  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2380 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* join_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2386 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* opt_join_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2392 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* join_condition  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2398 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* ident_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2411 "bison_parser.cpp" /* yacc.c:1257  */
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

#line 2529 "bison_parser.cpp" /* yacc.c:1437  */
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
#line 2739 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 3:
#line 279 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2750 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 4:
#line 285 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2761 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 5:
#line 294 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2770 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 6:
#line 298 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2779 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 7:
#line 302 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2787 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 8:
#line 309 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2793 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 9:
#line 310 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2799 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 10:
#line 311 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2805 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 11:
#line 312 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2811 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 12:
#line 313 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2817 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 13:
#line 314 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2823 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 14:
#line 315 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2829 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 15:
#line 316 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2835 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 16:
#line 317 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2841 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 17:
#line 326 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2847 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 18:
#line 327 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = nullptr; }
#line 2853 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 19:
#line 332 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2859 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 20:
#line 333 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2865 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 21:
#line 337 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2874 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 22:
#line 341 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2884 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 23:
#line 353 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2894 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 25:
#line 363 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2903 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 26:
#line 367 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2913 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 27:
#line 379 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2924 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 28:
#line 388 "bison_parser.y" /* yacc.c:1667  */
    {
			if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
			  (yyval.uval) = kImportCSV;
			} else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
			  (yyval.uval) = kImportTbl;
			} else {
			  throw std::runtime_error("unknown type"); // TODO type
			}
		}
#line 2938 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 29:
#line 400 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2944 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 30:
#line 410 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2952 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 31:
#line 413 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2962 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 32:
#line 418 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2972 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 33:
#line 432 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
				throw std::runtime_error("Unknown file type");  // TODO exception type
			}
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2987 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 34:
#line 442 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2999 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 35:
#line 449 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3011 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 36:
#line 456 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3024 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 37:
#line 467 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = true; }
#line 3030 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 38:
#line 468 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3036 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 39:
#line 472 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3042 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 40:
#line 473 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3048 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 41:
#line 477 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3056 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 42:
#line 483 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3062 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 43:
#line 484 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3068 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 44:
#line 485 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3074 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 45:
#line 486 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3080 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 46:
#line 487 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3086 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 47:
#line 488 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3092 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 48:
#line 489 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3098 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 49:
#line 490 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3104 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 50:
#line 494 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = true; }
#line 3110 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 51:
#line 495 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3116 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 52:
#line 496 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3122 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 53:
#line 506 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3133 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 54:
#line 512 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3144 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 55:
#line 518 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3154 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 56:
#line 526 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = true; }
#line 3160 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 57:
#line 527 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3166 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 58:
#line 536 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3177 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 59:
#line 545 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3187 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 60:
#line 558 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3199 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 61:
#line 565 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3211 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 62:
#line 576 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3217 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 63:
#line 577 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.str_vec) = nullptr; }
#line 3223 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 64:
#line 587 "bison_parser.y" /* yacc.c:1667  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3234 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 65:
#line 596 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3240 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 66:
#line 597 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3246 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 67:
#line 601 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3256 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 68:
#line 613 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3265 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 69:
#line 617 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3274 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 70:
#line 621 "bison_parser.y" /* yacc.c:1667  */
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
#line 3294 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 71:
#line 639 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3300 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 72:
#line 640 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3306 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 75:
#line 649 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3321 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 76:
#line 659 "bison_parser.y" /* yacc.c:1667  */
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
#line 3340 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 83:
#line 691 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3354 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 84:
#line 703 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = true; }
#line 3360 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 85:
#line 704 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.bval) = false; }
#line 3366 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 87:
#line 712 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3372 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 88:
#line 713 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table) = nullptr; }
#line 3378 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 89:
#line 716 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3384 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 90:
#line 721 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3390 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 91:
#line 722 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = nullptr; }
#line 3396 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 92:
#line 726 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3406 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 93:
#line 731 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.group_t) = nullptr; }
#line 3412 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 94:
#line 735 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3418 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 95:
#line 736 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = nullptr; }
#line 3424 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 96:
#line 739 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3430 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 97:
#line 740 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_vec) = nullptr; }
#line 3436 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 98:
#line 744 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3442 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 99:
#line 745 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3448 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 100:
#line 749 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3454 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 101:
#line 753 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_type) = kOrderAsc; }
#line 3460 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 102:
#line 754 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_type) = kOrderDesc; }
#line 3466 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 103:
#line 755 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.order_type) = kOrderAsc; }
#line 3472 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 104:
#line 761 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3478 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 105:
#line 762 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = nullptr; }
#line 3484 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 106:
#line 766 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3490 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 107:
#line 767 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3496 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 108:
#line 768 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3502 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 109:
#line 769 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3508 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 110:
#line 770 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3514 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 111:
#line 771 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.limit) = nullptr; }
#line 3520 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 112:
#line 778 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3526 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 113:
#line 779 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3532 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 114:
#line 783 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3538 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 115:
#line 784 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = nullptr; }
#line 3544 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 116:
#line 788 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3550 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 117:
#line 789 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3556 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 118:
#line 793 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3568 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 124:
#line 811 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3574 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 133:
#line 820 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3580 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 136:
#line 829 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3586 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 137:
#line 830 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3592 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 138:
#line 831 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3598 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 139:
#line 832 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3604 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 140:
#line 833 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3610 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 142:
#line 838 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3616 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 143:
#line 839 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3622 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 144:
#line 840 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3628 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 145:
#line 841 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3634 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 146:
#line 842 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3640 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 147:
#line 843 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3646 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 148:
#line 844 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3652 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 149:
#line 845 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3658 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 150:
#line 846 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3664 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 151:
#line 847 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3670 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 152:
#line 851 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3676 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 153:
#line 852 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3682 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 154:
#line 856 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3688 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 155:
#line 857 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3694 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 156:
#line 858 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3700 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 157:
#line 859 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3706 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 158:
#line 865 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3712 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 159:
#line 866 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3718 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 160:
#line 867 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3724 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 161:
#line 868 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3730 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 162:
#line 872 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3736 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 163:
#line 873 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3742 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 164:
#line 877 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3748 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 165:
#line 878 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3754 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 166:
#line 882 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3760 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 167:
#line 883 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3766 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 168:
#line 884 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3772 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 169:
#line 885 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3778 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 170:
#line 886 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3784 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 171:
#line 887 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3790 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 172:
#line 888 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3796 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 173:
#line 892 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3802 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 174:
#line 893 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3808 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 175:
#line 897 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3814 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 176:
#line 901 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3820 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 177:
#line 902 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3826 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 178:
#line 903 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3832 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 179:
#line 904 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3838 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 180:
#line 905 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3844 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 181:
#line 906 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3850 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 182:
#line 909 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3856 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 183:
#line 913 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3862 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 184:
#line 917 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3868 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 185:
#line 921 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3874 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 186:
#line 922 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3880 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 187:
#line 923 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3886 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 188:
#line 924 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3892 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 194:
#line 936 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3898 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 195:
#line 940 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3904 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 196:
#line 941 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3910 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 197:
#line 945 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3916 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 199:
#line 950 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3922 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 200:
#line 954 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3928 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 201:
#line 958 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3938 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 203:
#line 971 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3949 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 207:
#line 987 "bison_parser.y" /* yacc.c:1667  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3960 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 208:
#line 996 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3966 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 209:
#line 997 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3972 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 210:
#line 1002 "bison_parser.y" /* yacc.c:1667  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3984 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 211:
#line 1013 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 3994 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 212:
#line 1022 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4000 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 213:
#line 1023 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4006 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 215:
#line 1029 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4012 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 217:
#line 1035 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = nullptr; }
#line 4018 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 218:
#line 1039 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4024 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 219:
#line 1040 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4030 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 221:
#line 1046 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.alias_t) = nullptr; }
#line 4036 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 223:
#line 1055 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.with_description_vec) = nullptr; }
#line 4042 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 224:
#line 1059 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4048 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 225:
#line 1063 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4057 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 226:
#line 1067 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4066 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 227:
#line 1074 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4076 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 228:
#line 1088 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4088 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 229:
#line 1096 "bison_parser.y" /* yacc.c:1667  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4101 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 230:
#line 1106 "bison_parser.y" /* yacc.c:1667  */
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
#line 4121 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 231:
#line 1124 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinInner; }
#line 4127 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 232:
#line 1125 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinLeft; }
#line 4133 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 233:
#line 1126 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinLeft; }
#line 4139 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 234:
#line 1127 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinRight; }
#line 4145 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 235:
#line 1128 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinRight; }
#line 4151 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 236:
#line 1129 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinFull; }
#line 4157 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 237:
#line 1130 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinFull; }
#line 4163 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 238:
#line 1131 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinFull; }
#line 4169 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 239:
#line 1132 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinCross; }
#line 4175 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 240:
#line 1133 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.uval) = kJoinInner; }
#line 4181 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 244:
#line 1153 "bison_parser.y" /* yacc.c:1667  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4187 "bison_parser.cpp" /* yacc.c:1667  */
    break;

  case 245:
#line 1154 "bison_parser.y" /* yacc.c:1667  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4193 "bison_parser.cpp" /* yacc.c:1667  */
    break;


#line 4197 "bison_parser.cpp" /* yacc.c:1667  */
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
#line 1157 "bison_parser.y" /* yacc.c:1918  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
