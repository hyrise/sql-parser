/* A Bison parser, made by GNU Bison 3.4.1.  */

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
#define YYBISON_VERSION "3.4.1"

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

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 376 "bison_parser.cpp"

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   731

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  250
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  454

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
       0,   264,   264,   285,   291,   300,   304,   308,   311,   314,
     321,   322,   323,   324,   325,   326,   327,   328,   337,   338,
     343,   344,   348,   352,   364,   371,   374,   378,   392,   398,
     407,   424,   428,   431,   440,   454,   457,   462,   476,   489,
     496,   503,   514,   515,   519,   520,   524,   530,   531,   532,
     533,   534,   535,   536,   537,   541,   542,   543,   553,   559,
     565,   573,   574,   583,   592,   605,   612,   623,   624,   634,
     643,   644,   648,   660,   664,   668,   686,   687,   691,   692,
     696,   706,   723,   727,   728,   729,   733,   734,   738,   750,
     751,   755,   759,   760,   764,   769,   770,   774,   779,   783,
     784,   788,   789,   793,   794,   798,   802,   803,   804,   810,
     811,   815,   816,   817,   818,   819,   820,   827,   828,   832,
     833,   837,   838,   842,   852,   853,   854,   855,   856,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   873,
     874,   878,   879,   880,   881,   882,   886,   887,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   900,   901,   905,
     906,   907,   908,   914,   915,   916,   917,   921,   922,   926,
     927,   931,   932,   933,   934,   935,   936,   937,   941,   942,
     946,   950,   951,   952,   953,   954,   955,   959,   963,   967,
     971,   972,   973,   974,   978,   979,   980,   981,   982,   986,
     990,   991,   995,   996,  1000,  1004,  1008,  1020,  1021,  1031,
    1032,  1036,  1037,  1046,  1047,  1052,  1063,  1072,  1073,  1078,
    1079,  1084,  1085,  1090,  1091,  1096,  1097,  1106,  1107,  1111,
    1115,  1119,  1126,  1139,  1147,  1157,  1176,  1177,  1178,  1179,
    1180,  1181,  1182,  1183,  1184,  1185,  1190,  1199,  1200,  1205,
    1206
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
  "YEAR", "TRUE", "FALSE", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'",
  "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'",
  "','", "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path", "opt_file_type",
  "export_statement", "show_statement", "create_statement",
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
     385,   386,   387,   388,   389,   390,   391,   392,    61,   393,
     394,    60,    62,   395,   396,   397,   398,   399,    43,    45,
      42,    47,    37,    94,   400,    91,    93,    40,    41,    46,
      59,    44,    63
};
# endif

#define YYPACT_NINF -278

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-278)))

#define YYTABLE_NINF -248

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-248)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     626,   100,   116,   125,   164,   116,   -42,    47,    77,    97,
     116,   116,    49,    30,   180,   199,    57,  -278,   102,   102,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,   -24,  -278,   218,    76,  -278,    79,   163,  -278,   128,
     128,   116,   255,   116,   144,  -278,   -18,   153,   153,   116,
    -278,   160,   101,  -278,  -278,   603,  -278,   196,  -278,  -278,
     191,   -24,    25,  -278,    66,  -278,   307,    14,   312,   204,
     116,   116,   251,  -278,   247,   182,   340,   341,   341,   303,
     116,   116,  -278,   200,   180,  -278,   203,   342,   344,   195,
     205,  -278,  -278,  -278,   -24,   254,   235,   -24,   -13,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,   208,   207,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,   329,   -52,
     182,   228,  -278,   341,   370,    -8,   236,   -44,  -278,   270,
    -278,   270,  -278,  -278,  -278,  -278,  -278,   373,  -278,  -278,
     228,  -278,  -278,  -278,   310,  -278,  -278,  -278,   228,   310,
     228,    35,  -278,  -278,    14,  -278,   377,   277,   383,   271,
     -39,   240,   242,   140,   290,   245,   309,  -278,   222,    93,
     335,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,   311,  -278,    -4,   246,
    -278,   228,   340,  -278,   358,  -278,  -278,   248,   114,  -278,
     320,   249,  -278,    22,   -13,   250,  -278,   131,   -13,    93,
     359,    -1,  -278,   323,  -278,   149,   130,  -278,   277,    11,
       6,   360,   261,   228,   179,    92,   256,   309,   424,   228,
     129,   257,    45,   228,   228,   309,  -278,   309,   -41,   259,
     133,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   342,   116,  -278,   411,
      14,    93,  -278,   255,    14,  -278,   373,     8,   251,  -278,
     228,  -278,   415,  -278,  -278,  -278,   228,  -278,  -278,  -278,
    -278,   228,   228,   341,  -278,   262,  -278,  -278,   263,  -278,
    -278,  -278,   171,  -278,   383,  -278,  -278,   228,  -278,  -278,
     264,  -278,  -278,  -278,  -278,  -278,  -278,   334,    85,   161,
     228,   228,  -278,   360,   330,  -104,  -278,  -278,  -278,   317,
     384,   456,   309,   273,   222,  -278,   331,   276,   456,   456,
     456,   456,   471,   471,   471,   471,   129,   129,   -91,   -91,
     -91,   -97,   278,  -278,  -278,   142,  -278,   148,  -278,   277,
    -278,    43,  -278,   272,  -278,    21,  -278,   371,  -278,  -278,
    -278,    93,    93,  -278,   431,   432,  -278,   345,  -278,  -278,
     159,  -278,   228,   228,   228,  -278,    70,   197,   283,  -278,
     309,   456,   222,   285,   168,  -278,  -278,  -278,  -278,   286,
     356,  -278,  -278,  -278,   378,   379,   381,   362,     8,   452,
    -278,  -278,  -278,   343,  -278,   302,   321,  -278,  -278,    83,
      93,    90,  -278,   228,  -278,   424,   324,   169,  -278,  -278,
      21,     8,  -278,  -278,  -278,     8,   150,   304,   228,  -278,
    -278,  -278,  -278,    93,  -278,  -278,  -278,  -278,   274,   370,
     -23,   308,   228,   176,   228,  -278,    18,    93,  -278,  -278,
      93,   332,   336,  -278
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   248,     3,    19,    19,
      17,     8,     9,     7,    11,    16,    13,    14,    12,    15,
      10,     0,   227,     0,   217,    64,    26,     0,    37,    43,
      43,     0,     0,     0,     0,   216,     0,    62,    62,     0,
      35,     0,   229,   230,     1,   228,     2,     0,     6,     5,
     110,     0,    73,    74,   102,    60,     0,   120,     0,     0,
       0,     0,    96,    30,     0,    68,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     4,     0,     0,    90,     0,
       0,    84,    85,    83,     0,    87,     0,     0,   116,   218,
     199,   202,   204,   205,   200,   201,   206,     0,   119,   121,
     194,   195,   196,   203,   197,   198,    25,    24,     0,     0,
      68,     0,    63,     0,     0,     0,     0,    96,    70,    33,
      31,    33,    61,    58,    59,   232,   231,     0,   109,    89,
       0,    77,    76,    78,   102,    79,    86,    82,     0,   102,
       0,     0,    80,    27,     0,    42,     0,   228,     0,     0,
     190,     0,     0,     0,     0,     0,     0,   192,     0,    95,
     124,   131,   132,   133,   126,   128,   134,   127,   146,   135,
     136,   137,   130,   125,   139,   140,     0,   249,     0,     0,
      66,     0,     0,    69,     0,    29,    34,    22,     0,    20,
      93,    91,   117,   226,   116,   101,   103,   108,   116,   112,
     114,   111,   122,     0,    40,     0,     0,    44,   228,    90,
       0,     0,     0,     0,     0,     0,     0,     0,   142,     0,
     141,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
       0,    72,    71,     0,     0,    18,     0,     0,    96,    92,
       0,   224,     0,   225,   123,    75,     0,   107,   106,   105,
      81,     0,     0,     0,    48,     0,    51,    50,     0,    49,
      54,    47,    57,    39,     0,    41,   178,     0,   191,   193,
       0,   181,   182,   183,   184,   185,   186,     0,     0,     0,
       0,     0,   165,     0,     0,     0,   138,   129,   157,   158,
       0,   153,     0,     0,     0,   144,     0,   156,   155,   171,
     172,   173,   174,   175,   176,   177,   148,   147,   150,   149,
     151,   152,     0,    28,   250,     0,    32,     0,    21,   228,
      94,   207,   209,     0,   211,   222,   210,    98,   118,   223,
     104,   115,   113,    38,     0,     0,    55,     0,    46,    45,
       0,   169,     0,     0,     0,   163,     0,     0,     0,   187,
       0,   154,     0,     0,     0,   145,   188,    65,    23,     0,
       0,   244,   236,   242,   240,   243,   238,     0,     0,     0,
     221,   215,   219,     0,    88,     0,     0,    56,   179,     0,
     167,     0,   166,     0,   170,   189,     0,     0,   161,   159,
     222,     0,   239,   241,   237,     0,   208,   223,     0,    52,
      53,   180,   164,   168,   162,   160,   212,   233,   245,     0,
     100,     0,     0,     0,     0,    97,     0,   246,   234,   220,
      99,   190,     0,   235
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -278,  -278,  -278,   412,  -278,   449,  -278,   223,  -278,  -278,
    -278,  -278,   206,   -77,   339,  -278,  -278,  -278,   453,  -278,
     201,  -278,  -278,  -278,   448,  -278,  -278,  -278,   380,  -278,
    -278,   305,  -155,    -5,   402,   -58,   437,  -278,  -278,   244,
     284,  -278,  -278,  -278,  -110,  -278,  -278,   -22,  -278,   226,
    -278,  -278,  -149,  -223,  -278,  -135,   237,  -121,  -156,  -278,
    -278,  -278,  -278,  -278,  -278,   281,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,    62,   -51,   -63,  -278,  -278,   -82,
    -278,  -278,  -278,  -277,    88,  -278,  -278,  -278,     2,  -278,
      91,   313,  -278,  -278,  -278,  -278,   426,  -278,  -278,  -278,
    -278,    75
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    58,   198,   199,    19,   117,
      20,    21,    74,   129,   195,    22,    23,    24,    70,   216,
     217,   292,   368,    25,    80,    26,    27,    28,   125,    29,
     127,   128,    30,   143,   144,    63,    94,    95,   147,    64,
     140,   200,   268,   269,   122,   404,   445,    98,   205,   206,
     279,    88,   152,   201,   107,   108,   202,   203,   170,   171,
     172,   173,   174,   175,   176,   225,   177,   178,   179,   180,
     307,   181,   182,   183,   184,   185,   110,   111,   112,   113,
     114,   115,   350,   351,   352,   353,   354,    44,   355,   400,
     401,   402,   274,    31,    32,    52,    53,   356,   397,   448,
      56,   188
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     169,   131,   214,    90,    35,   138,   315,    38,   228,   298,
     230,    34,    45,    46,   130,   130,   109,   193,   100,   101,
     102,   451,   444,   139,   271,   271,    62,   207,    60,   209,
     211,   241,    39,   121,    91,   156,   150,   241,   160,   100,
     101,   102,   224,    72,    60,    75,   186,   232,   282,    49,
     189,    82,   379,   322,   151,   275,    89,   270,   256,   280,
     130,    40,   255,   295,   256,    92,   157,   190,   390,    77,
     261,   228,   119,   120,   370,    91,   161,   162,   135,   320,
     323,   321,   133,   134,    50,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      93,   384,   308,   212,   391,   158,    92,   233,    78,   392,
     231,   103,   318,   319,   163,   393,   394,   192,   219,    34,
     220,   426,   204,    47,   234,   345,    33,   208,    36,   347,
     233,   395,   103,    61,    41,  -245,   396,    96,   270,   399,
     272,    93,   210,   160,   100,   101,   102,   234,   438,   164,
     104,   105,    48,   233,   258,   207,   299,   259,   357,   417,
     361,   362,   165,   300,    42,   349,   381,    37,   167,   296,
     234,   104,   105,   284,   342,   390,   106,   310,   233,   285,
     412,   161,   162,    51,   166,   167,   373,   286,    43,   376,
     377,   233,   168,   233,   389,   234,   311,   106,   233,    54,
     432,   233,   312,   317,  -213,   440,   363,    57,   234,   109,
     234,   391,   287,   109,   277,   234,   392,    55,   234,   163,
     130,    65,   393,   394,   415,   160,   100,   101,   102,   288,
     325,   160,   100,   101,   102,    66,    67,   103,   395,   233,
     278,   431,  -245,   396,   223,   289,   374,   326,    69,   290,
      68,   409,   410,   411,   164,   378,   234,   241,    73,   343,
      76,   291,    84,   161,   162,   311,   383,   165,   366,   161,
     162,   375,   265,    79,    60,   266,   104,   105,    83,   252,
     253,   254,   255,   223,   256,   367,    86,   233,   293,   166,
     167,   294,   433,   160,   100,   101,   102,   168,   413,   390,
     387,   163,   106,   154,   234,   233,   388,   163,    87,   154,
      99,  -214,   160,   100,   101,   102,   116,   408,   118,   103,
     270,   447,   234,   450,   416,   103,   419,   435,   121,   270,
     270,   226,   162,   123,   449,   391,   164,   259,   145,   124,
     392,   145,   164,   126,   132,   100,   393,   394,   102,   165,
     441,   162,   235,   141,   148,   165,   139,    61,   104,   105,
     137,   146,   395,   142,   104,   105,   153,   396,   154,   163,
     155,   166,   167,   187,   191,   194,   197,   166,   167,   168,
     213,    96,    14,   236,   106,   168,   215,   103,   163,   218,
     106,   301,   302,   303,   304,   305,   306,   221,   442,   222,
     229,   263,   257,   260,   227,   264,   103,   267,   281,   283,
     270,   276,    60,   313,   344,   316,   324,   165,   359,   364,
     365,   372,   371,   227,   322,   233,   104,   105,   385,   237,
     382,   256,   236,   398,   386,   403,   165,   405,   406,   166,
     167,   414,   407,   418,   420,   104,   105,   168,   421,   238,
     422,   423,   106,   424,   425,   427,   239,   240,   166,   167,
     429,   439,   428,   241,   242,   446,   168,    85,    59,   346,
     196,   106,   236,   243,   244,   245,   246,   247,   237,   430,
     248,   249,   434,   250,   251,   252,   253,   254,   255,   348,
     256,   220,   380,    71,   453,   369,    81,   262,   314,   149,
     159,    97,   360,   297,   236,   309,   240,   358,   452,   437,
     136,   436,   241,   242,   443,     0,   273,     0,   237,   236,
       0,     0,   243,   244,   245,   246,   247,     0,     0,   248,
     249,     0,   250,   251,   252,   253,   254,   255,   314,   256,
       0,     0,     0,     0,     0,     0,   240,     0,     0,     0,
    -248,     0,   241,   242,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,   245,   246,   247,     0,     0,   248,
     249,     0,   250,   251,   252,   253,   254,   255,   240,   256,
       0,     0,     0,     0,   241,  -248,     0,     0,     0,     0,
       0,     0,     0,   240,  -248,  -248,  -248,   246,   247,   241,
       0,   248,   249,  -247,   250,   251,   252,   253,   254,   255,
       1,   256,  -248,  -248,     0,     0,  -248,  -248,     2,   250,
     251,   252,   253,   254,   255,     3,   256,     0,     0,     4,
       0,     0,     0,     1,     0,     5,     0,     0,     6,     7,
       0,     2,     0,     0,     0,     0,     0,     0,     3,     8,
       9,     0,     4,     0,     0,     0,     0,     0,     5,     0,
      10,     6,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,     0,    11,    14,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,    14
};

static const yytype_int16 yycheck[] =
{
     121,    78,   157,    61,     2,    87,   229,     5,   164,     3,
     166,     3,    10,    11,    77,    78,    67,   127,     4,     5,
       6,     3,    45,    12,     3,     3,    31,   148,    52,   150,
     151,   128,    74,    77,     9,    87,    49,   128,     3,     4,
       5,     6,   163,    41,    52,    43,   123,   168,    49,    19,
      58,    49,   156,    94,    67,   204,    61,   161,   155,   208,
     123,   103,   153,   218,   155,    40,   118,   125,    25,    87,
     191,   227,    70,    71,   297,     9,    41,    42,    83,   235,
     121,   237,    80,    81,    54,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
      75,   324,   223,   154,    61,   157,    40,   108,   126,    66,
     168,    97,   233,   234,    79,    72,    73,   161,   157,     3,
     159,   398,   144,    74,   125,   260,    26,   149,     3,   264,
     108,    88,    97,   157,    87,    92,    93,    71,   161,   118,
     118,    75,   107,     3,     4,     5,     6,   125,   425,   114,
     136,   137,   103,   108,   158,   276,   150,   161,   268,   382,
     281,   282,   127,   221,    87,   157,   322,     3,   150,   158,
     125,   136,   137,    24,   256,    25,   162,    85,   108,    30,
     110,    41,    42,     3,   149,   150,   101,    38,    91,   310,
     311,   108,   157,   108,   349,   125,   104,   162,   108,     0,
     110,   108,   110,   158,   161,   428,   283,   105,   125,   260,
     125,    61,    63,   264,    83,   125,    66,   160,   125,    79,
     283,     3,    72,    73,   380,     3,     4,     5,     6,    80,
      97,     3,     4,     5,     6,   159,   157,    97,    88,   108,
     109,   158,    92,    93,   104,    96,    85,   114,   120,   100,
      87,   372,   373,   374,   114,   313,   125,   128,     3,   257,
     116,   112,   161,    41,    42,   104,   324,   127,    97,    41,
      42,   110,   158,   120,    52,   161,   136,   137,   118,   150,
     151,   152,   153,   104,   155,   114,    90,   108,   158,   149,
     150,   161,   413,     3,     4,     5,     6,   157,   101,    25,
     158,    79,   162,   161,   125,   108,   158,    79,   117,   161,
       3,   161,     3,     4,     5,     6,     4,   158,   114,    97,
     161,   442,   125,   444,   382,    97,   158,   158,    77,   161,
     161,    41,    42,    86,   158,    61,   114,   161,    94,   157,
      66,    97,   114,     3,    41,     4,    72,    73,     6,   127,
      76,    42,    17,   158,   119,   127,    12,   157,   136,   137,
     157,   107,    88,   158,   136,   137,   158,    93,   161,    79,
      41,   149,   150,     3,   138,   105,     3,   149,   150,   157,
       3,    71,   105,    48,   162,   157,     3,    97,    79,   118,
     162,   130,   131,   132,   133,   134,   135,   157,   124,   157,
     155,    43,    91,   157,   114,   157,    97,    87,    49,    86,
     161,   161,    52,   157,     3,   158,   157,   127,     3,   157,
     157,    87,   158,   114,    94,   108,   136,   137,    97,    94,
     157,   155,    48,   161,   156,    64,   127,     6,     6,   149,
     150,   158,    97,   158,   158,   136,   137,   157,    92,   114,
      72,    72,   162,    72,    92,     3,   121,   122,   149,   150,
     158,   157,   119,   128,   129,   157,   157,    55,    19,   263,
     131,   162,    48,   138,   139,   140,   141,   142,    94,   158,
     145,   146,   158,   148,   149,   150,   151,   152,   153,   266,
     155,   159,   108,    40,   158,   294,    48,   192,   114,    97,
     120,    64,   276,   219,    48,   224,   122,   270,   446,   421,
      84,   420,   128,   129,   439,    -1,   203,    -1,    94,    48,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   114,   155,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      94,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   122,   155,
      -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   138,   139,   140,   141,   142,   128,
      -1,   145,   146,     0,   148,   149,   150,   151,   152,   153,
       7,   155,   141,   142,    -1,    -1,   145,   146,    15,   148,
     149,   150,   151,   152,   153,    22,   155,    -1,    -1,    26,
      -1,    -1,    -1,     7,    -1,    32,    -1,    -1,    35,    36,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    46,
      47,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      57,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    81,   105,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,   105
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    46,    47,
      57,    81,    84,    99,   105,   164,   165,   166,   167,   171,
     173,   174,   178,   179,   180,   186,   188,   189,   190,   192,
     195,   256,   257,    26,     3,   251,     3,     3,   251,    74,
     103,    87,    87,    91,   250,   251,   251,    74,   103,    19,
      54,     3,   258,   259,     0,   160,   263,   105,   168,   168,
      52,   157,   196,   198,   202,     3,   159,   157,    87,   120,
     181,   181,   251,     3,   175,   251,   116,    87,   126,   120,
     187,   187,   251,   118,   161,   166,    90,   117,   214,   196,
     198,     9,    40,    75,   199,   200,    71,   199,   210,     3,
       4,     5,     6,    97,   136,   137,   162,   217,   218,   238,
     239,   240,   241,   242,   243,   244,     4,   172,   114,   251,
     251,    77,   207,    86,   157,   191,     3,   193,   194,   176,
     239,   176,    41,   251,   251,   196,   259,   157,   242,    12,
     203,   158,   158,   196,   197,   202,   107,   201,   119,   197,
      49,    67,   215,   158,   161,    41,    87,   118,   157,   191,
       3,    41,    42,    79,   114,   127,   149,   150,   157,   220,
     221,   222,   223,   224,   225,   226,   227,   229,   230,   231,
     232,   234,   235,   236,   237,   238,   176,     3,   264,    58,
     198,   138,   161,   207,   105,   177,   177,     3,   169,   170,
     204,   216,   219,   220,   210,   211,   212,   220,   210,   220,
     107,   220,   238,     3,   195,     3,   182,   183,   118,   157,
     159,   157,   157,   104,   220,   228,    41,   114,   221,   155,
     221,   198,   220,   108,   125,    17,    48,    94,   114,   121,
     122,   128,   129,   138,   139,   140,   141,   142,   145,   146,
     148,   149,   150,   151,   152,   153,   155,    91,   158,   161,
     157,   220,   194,    43,   157,   158,   161,    87,   205,   206,
     161,     3,   118,   254,   255,   215,   161,    83,   109,   213,
     215,    49,    49,    86,    24,    30,    38,    63,    80,    96,
     100,   112,   184,   158,   161,   195,   158,   203,     3,   150,
     198,   130,   131,   132,   133,   134,   135,   233,   220,   228,
      85,   104,   110,   157,   114,   216,   158,   158,   220,   220,
     221,   221,    94,   121,   157,    97,   114,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   242,   251,     3,   218,   175,   218,   170,   157,
     245,   246,   247,   248,   249,   251,   260,   207,   219,     3,
     212,   220,   220,   176,   157,   157,    97,   114,   185,   183,
     216,   158,    87,   101,    85,   110,   220,   220,   198,   156,
     108,   221,   157,   198,   216,    97,   156,   158,   158,   195,
      25,    61,    66,    72,    73,    88,    93,   261,   161,   118,
     252,   253,   254,    64,   208,     6,     6,    97,   158,   220,
     220,   220,   110,   101,   158,   221,   198,   216,   158,   158,
     158,    92,    72,    72,    72,    92,   246,     3,   119,   158,
     158,   158,   110,   220,   158,   158,   253,   247,   246,   157,
     216,    76,   124,   264,    45,   209,   157,   220,   262,   158,
     220,     3,   237,   158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   165,   165,   166,   166,   166,   166,   166,
     167,   167,   167,   167,   167,   167,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   172,   173,   173,   174,   174,
     175,   176,   177,   177,   178,   179,   179,   179,   180,   180,
     180,   180,   181,   181,   182,   182,   183,   184,   184,   184,
     184,   184,   184,   184,   184,   185,   185,   185,   186,   186,
     186,   187,   187,   188,   189,   190,   190,   191,   191,   192,
     193,   193,   194,   195,   195,   195,   196,   196,   197,   197,
     198,   198,   199,   200,   200,   200,   201,   201,   202,   203,
     203,   204,   205,   205,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   213,   213,   213,   214,
     214,   215,   215,   215,   215,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   220,   220,   220,   220,   220,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   222,
     222,   223,   223,   223,   223,   223,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   225,   225,   226,
     226,   226,   226,   227,   227,   227,   227,   228,   228,   229,
     229,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     232,   233,   233,   233,   233,   233,   233,   234,   235,   236,
     237,   237,   237,   237,   238,   238,   238,   238,   238,   239,
     240,   240,   241,   241,   242,   243,   244,   245,   245,   246,
     246,   247,   247,   248,   248,   249,   250,   251,   251,   252,
     252,   253,   253,   254,   254,   255,   255,   256,   256,   257,
     258,   258,   259,   260,   260,   260,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   262,   263,   263,   264,
     264
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     0,
       1,     3,     1,     4,     4,     1,     2,     5,     7,     5,
       1,     1,     3,     0,     5,     2,     3,     2,     8,     7,
       6,     7,     3,     0,     1,     3,     3,     1,     1,     1,
       1,     1,     4,     4,     1,     1,     2,     0,     4,     4,
       3,     2,     0,     4,     2,     8,     5,     3,     0,     5,
       1,     3,     3,     2,     2,     6,     3,     3,     1,     1,
       3,     5,     2,     1,     1,     1,     1,     0,     7,     1,
       0,     1,     1,     0,     2,     2,     0,     4,     0,     2,
       0,     3,     0,     1,     3,     2,     1,     1,     0,     2,
       0,     2,     2,     4,     2,     4,     0,     1,     3,     1,
       0,     1,     3,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     2,     3,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     3,     3,     5,
       6,     5,     6,     4,     6,     3,     5,     4,     5,     4,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       6,     1,     1,     1,     1,     1,     1,     4,     4,     5,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     4,     1,     3,     2,     1,     1,     3,     1,
       5,     1,     0,     2,     1,     1,     0,     1,     0,     2,
       1,     3,     3,     4,     6,     8,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     0,     1,     1,     0,     1,
       3
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
#line 147 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1742 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 147 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1748 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 145 "bison_parser.y"
      { }
#line 1754 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 145 "bison_parser.y"
      { }
#line 1760 "bison_parser.cpp"
        break;

    case 165: /* statement_list  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1773 "bison_parser.cpp"
        break;

    case 166: /* statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).statement)); }
#line 1779 "bison_parser.cpp"
        break;

    case 167: /* preparable_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).statement)); }
#line 1785 "bison_parser.cpp"
        break;

    case 168: /* opt_hints  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1798 "bison_parser.cpp"
        break;

    case 169: /* hint_list  */
#line 148 "bison_parser.y"
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

    case 170: /* hint  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 1817 "bison_parser.cpp"
        break;

    case 171: /* prepare_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).prep_stmt)); }
#line 1823 "bison_parser.cpp"
        break;

    case 172: /* prepare_target_query  */
#line 147 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1829 "bison_parser.cpp"
        break;

    case 173: /* execute_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).exec_stmt)); }
#line 1835 "bison_parser.cpp"
        break;

    case 174: /* import_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).import_stmt)); }
#line 1841 "bison_parser.cpp"
        break;

    case 175: /* file_type  */
#line 145 "bison_parser.y"
      { }
#line 1847 "bison_parser.cpp"
        break;

    case 176: /* file_path  */
#line 147 "bison_parser.y"
      { free( (((*yyvaluep).sval)) ); }
#line 1853 "bison_parser.cpp"
        break;

    case 177: /* opt_file_type  */
#line 145 "bison_parser.y"
      { }
#line 1859 "bison_parser.cpp"
        break;

    case 178: /* export_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).export_stmt)); }
#line 1865 "bison_parser.cpp"
        break;

    case 179: /* show_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).show_stmt)); }
#line 1871 "bison_parser.cpp"
        break;

    case 180: /* create_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).create_stmt)); }
#line 1877 "bison_parser.cpp"
        break;

    case 181: /* opt_not_exists  */
#line 145 "bison_parser.y"
      { }
#line 1883 "bison_parser.cpp"
        break;

    case 182: /* column_def_commalist  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1896 "bison_parser.cpp"
        break;

    case 183: /* column_def  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).column_t)); }
#line 1902 "bison_parser.cpp"
        break;

    case 184: /* column_type  */
#line 145 "bison_parser.y"
      { }
#line 1908 "bison_parser.cpp"
        break;

    case 185: /* opt_column_nullable  */
#line 145 "bison_parser.y"
      { }
#line 1914 "bison_parser.cpp"
        break;

    case 186: /* drop_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).drop_stmt)); }
#line 1920 "bison_parser.cpp"
        break;

    case 187: /* opt_exists  */
#line 145 "bison_parser.y"
      { }
#line 1926 "bison_parser.cpp"
        break;

    case 188: /* delete_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).delete_stmt)); }
#line 1932 "bison_parser.cpp"
        break;

    case 189: /* truncate_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).delete_stmt)); }
#line 1938 "bison_parser.cpp"
        break;

    case 190: /* insert_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).insert_stmt)); }
#line 1944 "bison_parser.cpp"
        break;

    case 191: /* opt_column_list  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1957 "bison_parser.cpp"
        break;

    case 192: /* update_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).update_stmt)); }
#line 1963 "bison_parser.cpp"
        break;

    case 193: /* update_clause_commalist  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1976 "bison_parser.cpp"
        break;

    case 194: /* update_clause  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).update_t)); }
#line 1982 "bison_parser.cpp"
        break;

    case 195: /* select_statement  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 1988 "bison_parser.cpp"
        break;

    case 196: /* select_with_paren  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 1994 "bison_parser.cpp"
        break;

    case 197: /* select_paren_or_clause  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2000 "bison_parser.cpp"
        break;

    case 198: /* select_no_paren  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2006 "bison_parser.cpp"
        break;

    case 202: /* select_clause  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).select_stmt)); }
#line 2012 "bison_parser.cpp"
        break;

    case 203: /* opt_distinct  */
#line 145 "bison_parser.y"
      { }
#line 2018 "bison_parser.cpp"
        break;

    case 204: /* select_list  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2031 "bison_parser.cpp"
        break;

    case 205: /* opt_from_clause  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2037 "bison_parser.cpp"
        break;

    case 206: /* from_clause  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2043 "bison_parser.cpp"
        break;

    case 207: /* opt_where  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2049 "bison_parser.cpp"
        break;

    case 208: /* opt_group  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).group_t)); }
#line 2055 "bison_parser.cpp"
        break;

    case 209: /* opt_having  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2061 "bison_parser.cpp"
        break;

    case 210: /* opt_order  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2074 "bison_parser.cpp"
        break;

    case 211: /* order_list  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2087 "bison_parser.cpp"
        break;

    case 212: /* order_desc  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).order)); }
#line 2093 "bison_parser.cpp"
        break;

    case 213: /* opt_order_type  */
#line 145 "bison_parser.y"
      { }
#line 2099 "bison_parser.cpp"
        break;

    case 214: /* opt_top  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).limit)); }
#line 2105 "bison_parser.cpp"
        break;

    case 215: /* opt_limit  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).limit)); }
#line 2111 "bison_parser.cpp"
        break;

    case 216: /* expr_list  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2124 "bison_parser.cpp"
        break;

    case 217: /* opt_literal_list  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2137 "bison_parser.cpp"
        break;

    case 218: /* literal_list  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2150 "bison_parser.cpp"
        break;

    case 219: /* expr_alias  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2156 "bison_parser.cpp"
        break;

    case 220: /* expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2162 "bison_parser.cpp"
        break;

    case 221: /* operand  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2168 "bison_parser.cpp"
        break;

    case 222: /* scalar_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2174 "bison_parser.cpp"
        break;

    case 223: /* unary_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2180 "bison_parser.cpp"
        break;

    case 224: /* binary_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2186 "bison_parser.cpp"
        break;

    case 225: /* logic_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2192 "bison_parser.cpp"
        break;

    case 226: /* in_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2198 "bison_parser.cpp"
        break;

    case 227: /* case_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2204 "bison_parser.cpp"
        break;

    case 228: /* case_list  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2210 "bison_parser.cpp"
        break;

    case 229: /* exists_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2216 "bison_parser.cpp"
        break;

    case 230: /* comp_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2222 "bison_parser.cpp"
        break;

    case 231: /* function_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2228 "bison_parser.cpp"
        break;

    case 232: /* extract_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2234 "bison_parser.cpp"
        break;

    case 233: /* datetime_field  */
#line 145 "bison_parser.y"
      { }
#line 2240 "bison_parser.cpp"
        break;

    case 234: /* array_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2246 "bison_parser.cpp"
        break;

    case 235: /* array_index  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2252 "bison_parser.cpp"
        break;

    case 236: /* between_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2258 "bison_parser.cpp"
        break;

    case 237: /* column_name  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2264 "bison_parser.cpp"
        break;

    case 238: /* literal  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2270 "bison_parser.cpp"
        break;

    case 239: /* string_literal  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2276 "bison_parser.cpp"
        break;

    case 240: /* bool_literal  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2282 "bison_parser.cpp"
        break;

    case 241: /* num_literal  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2288 "bison_parser.cpp"
        break;

    case 242: /* int_literal  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2294 "bison_parser.cpp"
        break;

    case 243: /* null_literal  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2300 "bison_parser.cpp"
        break;

    case 244: /* param_expr  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2306 "bison_parser.cpp"
        break;

    case 245: /* table_ref  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2312 "bison_parser.cpp"
        break;

    case 246: /* table_ref_atomic  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2318 "bison_parser.cpp"
        break;

    case 247: /* nonjoin_table_ref_atomic  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2324 "bison_parser.cpp"
        break;

    case 248: /* table_ref_commalist  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2337 "bison_parser.cpp"
        break;

    case 249: /* table_ref_name  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2343 "bison_parser.cpp"
        break;

    case 250: /* table_ref_name_no_alias  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2349 "bison_parser.cpp"
        break;

    case 251: /* table_name  */
#line 146 "bison_parser.y"
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2355 "bison_parser.cpp"
        break;

    case 252: /* table_alias  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2361 "bison_parser.cpp"
        break;

    case 253: /* opt_table_alias  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2367 "bison_parser.cpp"
        break;

    case 254: /* alias  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2373 "bison_parser.cpp"
        break;

    case 255: /* opt_alias  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).alias_t)); }
#line 2379 "bison_parser.cpp"
        break;

    case 256: /* opt_with_clause  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2385 "bison_parser.cpp"
        break;

    case 257: /* with_clause  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2391 "bison_parser.cpp"
        break;

    case 258: /* with_description_list  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).with_description_vec)); }
#line 2397 "bison_parser.cpp"
        break;

    case 259: /* with_description  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).with_description_t)); }
#line 2403 "bison_parser.cpp"
        break;

    case 260: /* join_clause  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).table)); }
#line 2409 "bison_parser.cpp"
        break;

    case 261: /* opt_join_type  */
#line 145 "bison_parser.y"
      { }
#line 2415 "bison_parser.cpp"
        break;

    case 262: /* join_condition  */
#line 156 "bison_parser.y"
      { delete (((*yyvaluep).expr)); }
#line 2421 "bison_parser.cpp"
        break;

    case 264: /* ident_commalist  */
#line 148 "bison_parser.y"
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2434 "bison_parser.cpp"
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

#line 2552 "bison_parser.cpp"

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
#line 264 "bison_parser.y"
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
#line 2763 "bison_parser.cpp"
    break;

  case 3:
#line 285 "bison_parser.y"
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2774 "bison_parser.cpp"
    break;

  case 4:
#line 291 "bison_parser.y"
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2785 "bison_parser.cpp"
    break;

  case 5:
#line 300 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2794 "bison_parser.cpp"
    break;

  case 6:
#line 304 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2803 "bison_parser.cpp"
    break;

  case 7:
#line 308 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2811 "bison_parser.cpp"
    break;

  case 8:
#line 311 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 2819 "bison_parser.cpp"
    break;

  case 9:
#line 314 "bison_parser.y"
    {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 2827 "bison_parser.cpp"
    break;

  case 10:
#line 321 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2833 "bison_parser.cpp"
    break;

  case 11:
#line 322 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2839 "bison_parser.cpp"
    break;

  case 12:
#line 323 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2845 "bison_parser.cpp"
    break;

  case 13:
#line 324 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2851 "bison_parser.cpp"
    break;

  case 14:
#line 325 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2857 "bison_parser.cpp"
    break;

  case 15:
#line 326 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2863 "bison_parser.cpp"
    break;

  case 16:
#line 327 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2869 "bison_parser.cpp"
    break;

  case 17:
#line 328 "bison_parser.y"
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2875 "bison_parser.cpp"
    break;

  case 18:
#line 337 "bison_parser.y"
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2881 "bison_parser.cpp"
    break;

  case 19:
#line 338 "bison_parser.y"
    { (yyval.expr_vec) = nullptr; }
#line 2887 "bison_parser.cpp"
    break;

  case 20:
#line 343 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2893 "bison_parser.cpp"
    break;

  case 21:
#line 344 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2899 "bison_parser.cpp"
    break;

  case 22:
#line 348 "bison_parser.y"
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2908 "bison_parser.cpp"
    break;

  case 23:
#line 352 "bison_parser.y"
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2918 "bison_parser.cpp"
    break;

  case 24:
#line 364 "bison_parser.y"
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2928 "bison_parser.cpp"
    break;

  case 26:
#line 374 "bison_parser.y"
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2937 "bison_parser.cpp"
    break;

  case 27:
#line 378 "bison_parser.y"
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2947 "bison_parser.cpp"
    break;

  case 28:
#line 392 "bison_parser.y"
    {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2958 "bison_parser.cpp"
    break;

  case 29:
#line 398 "bison_parser.y"
    {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 2969 "bison_parser.cpp"
    break;

  case 30:
#line 407 "bison_parser.y"
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
#line 2988 "bison_parser.cpp"
    break;

  case 31:
#line 424 "bison_parser.y"
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2994 "bison_parser.cpp"
    break;

  case 32:
#line 428 "bison_parser.y"
    {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3002 "bison_parser.cpp"
    break;

  case 33:
#line 431 "bison_parser.y"
    { (yyval.import_type_t) = kImportAuto; }
#line 3008 "bison_parser.cpp"
    break;

  case 34:
#line 440 "bison_parser.y"
    {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3019 "bison_parser.cpp"
    break;

  case 35:
#line 454 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3027 "bison_parser.cpp"
    break;

  case 36:
#line 457 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3037 "bison_parser.cpp"
    break;

  case 37:
#line 462 "bison_parser.y"
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3047 "bison_parser.cpp"
    break;

  case 38:
#line 476 "bison_parser.y"
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
#line 3065 "bison_parser.cpp"
    break;

  case 39:
#line 489 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3077 "bison_parser.cpp"
    break;

  case 40:
#line 496 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3089 "bison_parser.cpp"
    break;

  case 41:
#line 503 "bison_parser.y"
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3102 "bison_parser.cpp"
    break;

  case 42:
#line 514 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3108 "bison_parser.cpp"
    break;

  case 43:
#line 515 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3114 "bison_parser.cpp"
    break;

  case 44:
#line 519 "bison_parser.y"
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3120 "bison_parser.cpp"
    break;

  case 45:
#line 520 "bison_parser.y"
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3126 "bison_parser.cpp"
    break;

  case 46:
#line 524 "bison_parser.y"
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3134 "bison_parser.cpp"
    break;

  case 47:
#line 530 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3140 "bison_parser.cpp"
    break;

  case 48:
#line 531 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3146 "bison_parser.cpp"
    break;

  case 49:
#line 532 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3152 "bison_parser.cpp"
    break;

  case 50:
#line 533 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3158 "bison_parser.cpp"
    break;

  case 51:
#line 534 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3164 "bison_parser.cpp"
    break;

  case 52:
#line 535 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3170 "bison_parser.cpp"
    break;

  case 53:
#line 536 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3176 "bison_parser.cpp"
    break;

  case 54:
#line 537 "bison_parser.y"
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3182 "bison_parser.cpp"
    break;

  case 55:
#line 541 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3188 "bison_parser.cpp"
    break;

  case 56:
#line 542 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3194 "bison_parser.cpp"
    break;

  case 57:
#line 543 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3200 "bison_parser.cpp"
    break;

  case 58:
#line 553 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3211 "bison_parser.cpp"
    break;

  case 59:
#line 559 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3222 "bison_parser.cpp"
    break;

  case 60:
#line 565 "bison_parser.y"
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3232 "bison_parser.cpp"
    break;

  case 61:
#line 573 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3238 "bison_parser.cpp"
    break;

  case 62:
#line 574 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3244 "bison_parser.cpp"
    break;

  case 63:
#line 583 "bison_parser.y"
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3255 "bison_parser.cpp"
    break;

  case 64:
#line 592 "bison_parser.y"
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3265 "bison_parser.cpp"
    break;

  case 65:
#line 605 "bison_parser.y"
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3277 "bison_parser.cpp"
    break;

  case 66:
#line 612 "bison_parser.y"
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3289 "bison_parser.cpp"
    break;

  case 67:
#line 623 "bison_parser.y"
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3295 "bison_parser.cpp"
    break;

  case 68:
#line 624 "bison_parser.y"
    { (yyval.str_vec) = nullptr; }
#line 3301 "bison_parser.cpp"
    break;

  case 69:
#line 634 "bison_parser.y"
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3312 "bison_parser.cpp"
    break;

  case 70:
#line 643 "bison_parser.y"
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3318 "bison_parser.cpp"
    break;

  case 71:
#line 644 "bison_parser.y"
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3324 "bison_parser.cpp"
    break;

  case 72:
#line 648 "bison_parser.y"
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3334 "bison_parser.cpp"
    break;

  case 73:
#line 660 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3343 "bison_parser.cpp"
    break;

  case 74:
#line 664 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3352 "bison_parser.cpp"
    break;

  case 75:
#line 668 "bison_parser.y"
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
#line 3372 "bison_parser.cpp"
    break;

  case 76:
#line 686 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3378 "bison_parser.cpp"
    break;

  case 77:
#line 687 "bison_parser.y"
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3384 "bison_parser.cpp"
    break;

  case 80:
#line 696 "bison_parser.y"
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3399 "bison_parser.cpp"
    break;

  case 81:
#line 706 "bison_parser.y"
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
#line 3418 "bison_parser.cpp"
    break;

  case 88:
#line 738 "bison_parser.y"
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3432 "bison_parser.cpp"
    break;

  case 89:
#line 750 "bison_parser.y"
    { (yyval.bval) = true; }
#line 3438 "bison_parser.cpp"
    break;

  case 90:
#line 751 "bison_parser.y"
    { (yyval.bval) = false; }
#line 3444 "bison_parser.cpp"
    break;

  case 92:
#line 759 "bison_parser.y"
    { (yyval.table) = (yyvsp[0].table); }
#line 3450 "bison_parser.cpp"
    break;

  case 93:
#line 760 "bison_parser.y"
    { (yyval.table) = nullptr; }
#line 3456 "bison_parser.cpp"
    break;

  case 94:
#line 764 "bison_parser.y"
    { (yyval.table) = (yyvsp[0].table); }
#line 3462 "bison_parser.cpp"
    break;

  case 95:
#line 769 "bison_parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3468 "bison_parser.cpp"
    break;

  case 96:
#line 770 "bison_parser.y"
    { (yyval.expr) = nullptr; }
#line 3474 "bison_parser.cpp"
    break;

  case 97:
#line 774 "bison_parser.y"
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3484 "bison_parser.cpp"
    break;

  case 98:
#line 779 "bison_parser.y"
    { (yyval.group_t) = nullptr; }
#line 3490 "bison_parser.cpp"
    break;

  case 99:
#line 783 "bison_parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3496 "bison_parser.cpp"
    break;

  case 100:
#line 784 "bison_parser.y"
    { (yyval.expr) = nullptr; }
#line 3502 "bison_parser.cpp"
    break;

  case 101:
#line 788 "bison_parser.y"
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3508 "bison_parser.cpp"
    break;

  case 102:
#line 789 "bison_parser.y"
    { (yyval.order_vec) = nullptr; }
#line 3514 "bison_parser.cpp"
    break;

  case 103:
#line 793 "bison_parser.y"
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3520 "bison_parser.cpp"
    break;

  case 104:
#line 794 "bison_parser.y"
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3526 "bison_parser.cpp"
    break;

  case 105:
#line 798 "bison_parser.y"
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3532 "bison_parser.cpp"
    break;

  case 106:
#line 802 "bison_parser.y"
    { (yyval.order_type) = kOrderAsc; }
#line 3538 "bison_parser.cpp"
    break;

  case 107:
#line 803 "bison_parser.y"
    { (yyval.order_type) = kOrderDesc; }
#line 3544 "bison_parser.cpp"
    break;

  case 108:
#line 804 "bison_parser.y"
    { (yyval.order_type) = kOrderAsc; }
#line 3550 "bison_parser.cpp"
    break;

  case 109:
#line 810 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3556 "bison_parser.cpp"
    break;

  case 110:
#line 811 "bison_parser.y"
    { (yyval.limit) = nullptr; }
#line 3562 "bison_parser.cpp"
    break;

  case 111:
#line 815 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3568 "bison_parser.cpp"
    break;

  case 112:
#line 816 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3574 "bison_parser.cpp"
    break;

  case 113:
#line 817 "bison_parser.y"
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3580 "bison_parser.cpp"
    break;

  case 114:
#line 818 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3586 "bison_parser.cpp"
    break;

  case 115:
#line 819 "bison_parser.y"
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3592 "bison_parser.cpp"
    break;

  case 116:
#line 820 "bison_parser.y"
    { (yyval.limit) = nullptr; }
#line 3598 "bison_parser.cpp"
    break;

  case 117:
#line 827 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3604 "bison_parser.cpp"
    break;

  case 118:
#line 828 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3610 "bison_parser.cpp"
    break;

  case 119:
#line 832 "bison_parser.y"
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3616 "bison_parser.cpp"
    break;

  case 120:
#line 833 "bison_parser.y"
    { (yyval.expr_vec) = nullptr; }
#line 3622 "bison_parser.cpp"
    break;

  case 121:
#line 837 "bison_parser.y"
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3628 "bison_parser.cpp"
    break;

  case 122:
#line 838 "bison_parser.y"
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3634 "bison_parser.cpp"
    break;

  case 123:
#line 842 "bison_parser.y"
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3646 "bison_parser.cpp"
    break;

  case 129:
#line 860 "bison_parser.y"
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3652 "bison_parser.cpp"
    break;

  case 138:
#line 869 "bison_parser.y"
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3658 "bison_parser.cpp"
    break;

  case 141:
#line 878 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3664 "bison_parser.cpp"
    break;

  case 142:
#line 879 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3670 "bison_parser.cpp"
    break;

  case 143:
#line 880 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3676 "bison_parser.cpp"
    break;

  case 144:
#line 881 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3682 "bison_parser.cpp"
    break;

  case 145:
#line 882 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3688 "bison_parser.cpp"
    break;

  case 147:
#line 887 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3694 "bison_parser.cpp"
    break;

  case 148:
#line 888 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3700 "bison_parser.cpp"
    break;

  case 149:
#line 889 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3706 "bison_parser.cpp"
    break;

  case 150:
#line 890 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3712 "bison_parser.cpp"
    break;

  case 151:
#line 891 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3718 "bison_parser.cpp"
    break;

  case 152:
#line 892 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3724 "bison_parser.cpp"
    break;

  case 153:
#line 893 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3730 "bison_parser.cpp"
    break;

  case 154:
#line 894 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3736 "bison_parser.cpp"
    break;

  case 155:
#line 895 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3742 "bison_parser.cpp"
    break;

  case 156:
#line 896 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3748 "bison_parser.cpp"
    break;

  case 157:
#line 900 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3754 "bison_parser.cpp"
    break;

  case 158:
#line 901 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3760 "bison_parser.cpp"
    break;

  case 159:
#line 905 "bison_parser.y"
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3766 "bison_parser.cpp"
    break;

  case 160:
#line 906 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3772 "bison_parser.cpp"
    break;

  case 161:
#line 907 "bison_parser.y"
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3778 "bison_parser.cpp"
    break;

  case 162:
#line 908 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3784 "bison_parser.cpp"
    break;

  case 163:
#line 914 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3790 "bison_parser.cpp"
    break;

  case 164:
#line 915 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3796 "bison_parser.cpp"
    break;

  case 165:
#line 916 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3802 "bison_parser.cpp"
    break;

  case 166:
#line 917 "bison_parser.y"
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3808 "bison_parser.cpp"
    break;

  case 167:
#line 921 "bison_parser.y"
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3814 "bison_parser.cpp"
    break;

  case 168:
#line 922 "bison_parser.y"
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3820 "bison_parser.cpp"
    break;

  case 169:
#line 926 "bison_parser.y"
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3826 "bison_parser.cpp"
    break;

  case 170:
#line 927 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3832 "bison_parser.cpp"
    break;

  case 171:
#line 931 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3838 "bison_parser.cpp"
    break;

  case 172:
#line 932 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3844 "bison_parser.cpp"
    break;

  case 173:
#line 933 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3850 "bison_parser.cpp"
    break;

  case 174:
#line 934 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3856 "bison_parser.cpp"
    break;

  case 175:
#line 935 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3862 "bison_parser.cpp"
    break;

  case 176:
#line 936 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3868 "bison_parser.cpp"
    break;

  case 177:
#line 937 "bison_parser.y"
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3874 "bison_parser.cpp"
    break;

  case 178:
#line 941 "bison_parser.y"
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3880 "bison_parser.cpp"
    break;

  case 179:
#line 942 "bison_parser.y"
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3886 "bison_parser.cpp"
    break;

  case 180:
#line 946 "bison_parser.y"
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3892 "bison_parser.cpp"
    break;

  case 181:
#line 950 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3898 "bison_parser.cpp"
    break;

  case 182:
#line 951 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3904 "bison_parser.cpp"
    break;

  case 183:
#line 952 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3910 "bison_parser.cpp"
    break;

  case 184:
#line 953 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3916 "bison_parser.cpp"
    break;

  case 185:
#line 954 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3922 "bison_parser.cpp"
    break;

  case 186:
#line 955 "bison_parser.y"
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3928 "bison_parser.cpp"
    break;

  case 187:
#line 959 "bison_parser.y"
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3934 "bison_parser.cpp"
    break;

  case 188:
#line 963 "bison_parser.y"
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3940 "bison_parser.cpp"
    break;

  case 189:
#line 967 "bison_parser.y"
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3946 "bison_parser.cpp"
    break;

  case 190:
#line 971 "bison_parser.y"
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3952 "bison_parser.cpp"
    break;

  case 191:
#line 972 "bison_parser.y"
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3958 "bison_parser.cpp"
    break;

  case 192:
#line 973 "bison_parser.y"
    { (yyval.expr) = Expr::makeStar(); }
#line 3964 "bison_parser.cpp"
    break;

  case 193:
#line 974 "bison_parser.y"
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3970 "bison_parser.cpp"
    break;

  case 199:
#line 986 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3976 "bison_parser.cpp"
    break;

  case 200:
#line 990 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3982 "bison_parser.cpp"
    break;

  case 201:
#line 991 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3988 "bison_parser.cpp"
    break;

  case 202:
#line 995 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3994 "bison_parser.cpp"
    break;

  case 204:
#line 1000 "bison_parser.y"
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4000 "bison_parser.cpp"
    break;

  case 205:
#line 1004 "bison_parser.y"
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4006 "bison_parser.cpp"
    break;

  case 206:
#line 1008 "bison_parser.y"
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4016 "bison_parser.cpp"
    break;

  case 208:
#line 1021 "bison_parser.y"
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4027 "bison_parser.cpp"
    break;

  case 212:
#line 1037 "bison_parser.y"
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4038 "bison_parser.cpp"
    break;

  case 213:
#line 1046 "bison_parser.y"
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4044 "bison_parser.cpp"
    break;

  case 214:
#line 1047 "bison_parser.y"
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4050 "bison_parser.cpp"
    break;

  case 215:
#line 1052 "bison_parser.y"
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4062 "bison_parser.cpp"
    break;

  case 216:
#line 1063 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4072 "bison_parser.cpp"
    break;

  case 217:
#line 1072 "bison_parser.y"
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4078 "bison_parser.cpp"
    break;

  case 218:
#line 1073 "bison_parser.y"
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4084 "bison_parser.cpp"
    break;

  case 220:
#line 1079 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4090 "bison_parser.cpp"
    break;

  case 222:
#line 1085 "bison_parser.y"
    { (yyval.alias_t) = nullptr; }
#line 4096 "bison_parser.cpp"
    break;

  case 223:
#line 1090 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4102 "bison_parser.cpp"
    break;

  case 224:
#line 1091 "bison_parser.y"
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4108 "bison_parser.cpp"
    break;

  case 226:
#line 1097 "bison_parser.y"
    { (yyval.alias_t) = nullptr; }
#line 4114 "bison_parser.cpp"
    break;

  case 228:
#line 1107 "bison_parser.y"
    { (yyval.with_description_vec) = nullptr; }
#line 4120 "bison_parser.cpp"
    break;

  case 229:
#line 1111 "bison_parser.y"
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4126 "bison_parser.cpp"
    break;

  case 230:
#line 1115 "bison_parser.y"
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4135 "bison_parser.cpp"
    break;

  case 231:
#line 1119 "bison_parser.y"
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4144 "bison_parser.cpp"
    break;

  case 232:
#line 1126 "bison_parser.y"
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4154 "bison_parser.cpp"
    break;

  case 233:
#line 1140 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4166 "bison_parser.cpp"
    break;

  case 234:
#line 1148 "bison_parser.y"
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4179 "bison_parser.cpp"
    break;

  case 235:
#line 1158 "bison_parser.y"
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
#line 4199 "bison_parser.cpp"
    break;

  case 236:
#line 1176 "bison_parser.y"
    { (yyval.uval) = kJoinInner; }
#line 4205 "bison_parser.cpp"
    break;

  case 237:
#line 1177 "bison_parser.y"
    { (yyval.uval) = kJoinLeft; }
#line 4211 "bison_parser.cpp"
    break;

  case 238:
#line 1178 "bison_parser.y"
    { (yyval.uval) = kJoinLeft; }
#line 4217 "bison_parser.cpp"
    break;

  case 239:
#line 1179 "bison_parser.y"
    { (yyval.uval) = kJoinRight; }
#line 4223 "bison_parser.cpp"
    break;

  case 240:
#line 1180 "bison_parser.y"
    { (yyval.uval) = kJoinRight; }
#line 4229 "bison_parser.cpp"
    break;

  case 241:
#line 1181 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4235 "bison_parser.cpp"
    break;

  case 242:
#line 1182 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4241 "bison_parser.cpp"
    break;

  case 243:
#line 1183 "bison_parser.y"
    { (yyval.uval) = kJoinFull; }
#line 4247 "bison_parser.cpp"
    break;

  case 244:
#line 1184 "bison_parser.y"
    { (yyval.uval) = kJoinCross; }
#line 4253 "bison_parser.cpp"
    break;

  case 245:
#line 1185 "bison_parser.y"
    { (yyval.uval) = kJoinInner; }
#line 4259 "bison_parser.cpp"
    break;

  case 249:
#line 1205 "bison_parser.y"
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4265 "bison_parser.cpp"
    break;

  case 250:
#line 1206 "bison_parser.y"
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4271 "bison_parser.cpp"
    break;


#line 4275 "bison_parser.cpp"

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
#line 1209 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
