/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
#define YYBISON_VERSION "3.5.1"

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


#line 106 "bison_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#line 181 "bison_parser.cpp"

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
    SQL_CHARACTER = 284,
    SQL_VARYING = 285,
    SQL_REAL = 286,
    SQL_DECIMAL = 287,
    SQL_SPATIAL = 288,
    SQL_VARCHAR = 289,
    SQL_VIRTUAL = 290,
    SQL_DESCRIBE = 291,
    SQL_BEFORE = 292,
    SQL_COLUMN = 293,
    SQL_CREATE = 294,
    SQL_DELETE = 295,
    SQL_DIRECT = 296,
    SQL_DOUBLE = 297,
    SQL_ESCAPE = 298,
    SQL_EXCEPT = 299,
    SQL_EXISTS = 300,
    SQL_EXTRACT = 301,
    SQL_CAST = 302,
    SQL_FORMAT = 303,
    SQL_GLOBAL = 304,
    SQL_HAVING = 305,
    SQL_IMPORT = 306,
    SQL_INSERT = 307,
    SQL_ISNULL = 308,
    SQL_OFFSET = 309,
    SQL_RENAME = 310,
    SQL_SCHEMA = 311,
    SQL_SELECT = 312,
    SQL_SORTED = 313,
    SQL_TABLES = 314,
    SQL_UNIQUE = 315,
    SQL_UNLOAD = 316,
    SQL_UPDATE = 317,
    SQL_VALUES = 318,
    SQL_AFTER = 319,
    SQL_ALTER = 320,
    SQL_CROSS = 321,
    SQL_DELTA = 322,
    SQL_FLOAT = 323,
    SQL_GROUP = 324,
    SQL_INDEX = 325,
    SQL_INNER = 326,
    SQL_LIMIT = 327,
    SQL_LOCAL = 328,
    SQL_MERGE = 329,
    SQL_MINUS = 330,
    SQL_ORDER = 331,
    SQL_OUTER = 332,
    SQL_RIGHT = 333,
    SQL_TABLE = 334,
    SQL_UNION = 335,
    SQL_USING = 336,
    SQL_WHERE = 337,
    SQL_CALL = 338,
    SQL_CASE = 339,
    SQL_CHAR = 340,
    SQL_COPY = 341,
    SQL_DATE = 342,
    SQL_DATETIME = 343,
    SQL_DESC = 344,
    SQL_DROP = 345,
    SQL_ELSE = 346,
    SQL_FILE = 347,
    SQL_FROM = 348,
    SQL_FULL = 349,
    SQL_HASH = 350,
    SQL_HINT = 351,
    SQL_INTO = 352,
    SQL_JOIN = 353,
    SQL_LEFT = 354,
    SQL_LIKE = 355,
    SQL_LOAD = 356,
    SQL_LONG = 357,
    SQL_NULL = 358,
    SQL_PLAN = 359,
    SQL_SHOW = 360,
    SQL_TEXT = 361,
    SQL_THEN = 362,
    SQL_TIME = 363,
    SQL_VIEW = 364,
    SQL_WHEN = 365,
    SQL_WITH = 366,
    SQL_ADD = 367,
    SQL_ALL = 368,
    SQL_AND = 369,
    SQL_ASC = 370,
    SQL_END = 371,
    SQL_FOR = 372,
    SQL_INT = 373,
    SQL_KEY = 374,
    SQL_NOT = 375,
    SQL_OFF = 376,
    SQL_SET = 377,
    SQL_TOP = 378,
    SQL_AS = 379,
    SQL_BY = 380,
    SQL_IF = 381,
    SQL_IN = 382,
    SQL_IS = 383,
    SQL_OF = 384,
    SQL_ON = 385,
    SQL_OR = 386,
    SQL_TO = 387,
    SQL_ARRAY = 388,
    SQL_CONCAT = 389,
    SQL_ILIKE = 390,
    SQL_SECOND = 391,
    SQL_MINUTE = 392,
    SQL_HOUR = 393,
    SQL_DAY = 394,
    SQL_MONTH = 395,
    SQL_YEAR = 396,
    SQL_TRUE = 397,
    SQL_FALSE = 398,
    SQL_TRANSACTION = 399,
    SQL_BEGIN = 400,
    SQL_COMMIT = 401,
    SQL_ROLLBACK = 402,
    SQL_EQUALS = 403,
    SQL_NOTEQUALS = 404,
    SQL_LESS = 405,
    SQL_GREATER = 406,
    SQL_LESSEQ = 407,
    SQL_GREATEREQ = 408,
    SQL_NOTNULL = 409,
    SQL_UMINUS = 410
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
	hsql::TableKeyConstraint table_key_constraint_t;
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
	std::vector<hsql::TableKeyConstraint> table_key_constraint_vec;

#line 398 "bison_parser.cpp"

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

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
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
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   859

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  514

#define YYUNDEFTOK  2
#define YYMAXUTOK   410


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   162,     2,     2,
     167,   168,   160,   158,   171,   159,   169,   161,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   170,
     151,   148,   152,   172,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   165,     2,   166,   163,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   149,   150,   153,   154,   155,   156,   157,
     164
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   275,   275,   296,   302,   311,   315,   319,   322,   325,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   349,
     350,   355,   356,   360,   364,   376,   379,   382,   388,   389,
     396,   403,   406,   410,   424,   430,   439,   456,   460,   463,
     472,   486,   489,   494,   508,   521,   528,   535,   542,   553,
     554,   558,   559,   563,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   586,   587,
     588,   592,   593,   594,   598,   599,   607,   613,   619,   624,
     632,   633,   642,   651,   664,   671,   682,   683,   693,   702,
     703,   707,   719,   723,   727,   741,   742,   745,   746,   757,
     758,   762,   772,   785,   792,   796,   800,   807,   810,   816,
     828,   829,   833,   837,   838,   842,   847,   848,   852,   857,
     861,   862,   866,   867,   871,   872,   876,   880,   881,   882,
     888,   889,   893,   894,   895,   896,   897,   898,   905,   906,
     910,   911,   915,   916,   920,   930,   931,   932,   933,   934,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   947,
     948,   952,   953,   957,   958,   959,   960,   961,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   979,
     980,   984,   985,   986,   987,   993,   994,   995,   996,  1000,
    1001,  1005,  1006,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1020,  1021,  1025,  1029,  1033,  1034,  1035,  1036,  1037,  1038,
    1042,  1046,  1050,  1054,  1055,  1056,  1057,  1061,  1062,  1063,
    1064,  1065,  1069,  1073,  1074,  1078,  1079,  1083,  1087,  1091,
    1103,  1104,  1114,  1115,  1119,  1120,  1129,  1130,  1135,  1146,
    1155,  1156,  1160,  1161,  1165,  1170,  1171,  1176,  1177,  1182,
    1183,  1188,  1189,  1198,  1199,  1203,  1207,  1211,  1218,  1231,
    1239,  1249,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,
    1276,  1277,  1282,  1291,  1292,  1297,  1298
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
  "CHARACTER", "VARYING", "REAL", "DECIMAL", "SPATIAL", "VARCHAR",
  "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT",
  "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST", "FORMAT",
  "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME",
  "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE",
  "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX",
  "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT",
  "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "COPY",
  "DATE", "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL",
  "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL",
  "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD",
  "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET",
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
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "opt_table_key_constraints",
  "table_key_constraint", "drop_statement", "opt_exists",
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
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "opt_index_name", "index_name",
  "table_alias", "opt_table_alias", "alias", "opt_alias",
  "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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
     395,   396,   397,   398,   399,   400,   401,   402,    61,   403,
     404,    60,    62,   405,   406,   407,   408,   409,    43,    45,
      42,    47,    37,    94,   410,    91,    93,    40,    41,    46,
      59,    44,    63
};
# endif

#define YYPACT_NINF (-403)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-274)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     555,    19,    30,    66,    82,    30,   -16,    34,    98,    -6,
      30,    30,    -8,     6,   103,   -19,   -19,   -19,   175,    28,
    -403,    69,  -403,    69,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,   -14,  -403,   222,    65,  -403,
      39,   145,  -403,   242,   120,   120,    30,   250,    30,   135,
    -403,   -66,   265,   143,   143,    30,  -403,   151,   115,  -403,
    -403,  -403,  -403,  -403,  -403,   497,  -403,   183,  -403,  -403,
     164,   -14,    32,  -403,   114,  -403,   293,    13,   298,  -403,
     120,   186,    30,    30,   215,  -403,   220,   146,   321,   327,
     327,  -403,   195,   287,    30,    30,  -403,   166,   103,  -403,
     170,   333,   329,   184,   190,  -403,  -403,  -403,   -14,   241,
     238,   -14,    26,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,   199,   205,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,   247,   344,   -67,   146,   258,  -403,   327,   382,
      -2,   248,   -58,  -403,   279,  -403,   279,    30,  -403,  -403,
    -403,  -403,  -403,   392,  -403,  -403,   258,  -403,  -403,   322,
    -403,  -403,    32,  -403,  -403,   258,   322,   258,    84,  -403,
    -403,    13,    30,  -403,   394,   299,   401,   288,   -75,   246,
     249,   252,   156,   289,   255,   304,  -403,   227,    55,   340,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,   317,  -403,    87,   254,
    -403,   258,   321,  -403,   367,  -403,  -403,  -403,   256,   172,
    -403,   334,   257,  -403,    33,    26,   -14,   262,  -403,    74,
      26,    55,   372,   -32,  -403,   267,   337,  -403,   741,   264,
    -403,   299,    11,    12,   379,   243,   258,   258,   108,   104,
     271,   304,   563,   258,   157,   273,    53,   258,   258,   304,
    -403,   304,   -41,   272,     4,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     333,    30,  -403,   439,    13,    55,  -403,   250,    13,  -403,
     392,    10,   215,  -403,   258,  -403,   441,  -403,  -403,  -403,
    -403,   258,  -403,  -403,  -403,  -403,   258,   258,   382,   327,
    -403,   413,  -403,   278,   283,  -403,  -403,   284,  -403,  -403,
    -403,  -403,  -403,  -403,    80,    37,   177,  -403,  -403,  -403,
     258,  -403,  -403,   285,  -403,  -403,  -403,  -403,  -403,  -403,
     359,   136,   140,   125,   258,   258,  -403,   379,   354,   -52,
    -403,  -403,  -403,   341,   519,   599,   304,   290,   227,  -403,
     355,   294,   599,   599,   599,   599,   635,   635,   635,   635,
     157,   157,   -60,   -60,   -60,   -86,   296,  -403,  -403,   178,
    -403,   185,  -403,   299,  -403,   440,  -403,   295,  -403,    25,
    -403,   400,  -403,  -403,  -403,    55,    55,   191,  -403,   303,
     466,   467,   471,  -403,   375,  -403,   360,   313,  -403,  -403,
      17,  -403,   197,  -403,   258,   741,   258,   258,  -403,   169,
     207,   314,  -403,   304,   599,   227,   315,   203,  -403,  -403,
    -403,  -403,   316,   383,  -403,  -403,  -403,   408,   409,   410,
     395,    10,   504,  -403,  -403,  -403,   384,  -403,  -403,   502,
     339,   345,   346,  -403,   348,   382,  -403,    68,   352,    55,
     213,  -403,   258,  -403,   563,   353,   204,  -403,  -403,    25,
      10,  -403,  -403,  -403,    10,   469,   349,   258,   356,   516,
    -403,  -403,   382,   234,  -403,  -403,  -403,    55,  -403,  -403,
    -403,  -403,   171,   382,   -20,  -403,   357,   235,  -403,   361,
     258,   240,   258,  -403,  -403,  -403,    18,    55,  -403,  -403,
      55,   358,   362,  -403
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   274,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   253,     0,   240,    83,
      32,     0,    43,   243,    50,    50,     0,     0,     0,     0,
     239,     0,     0,    81,    81,     0,    41,     0,   255,   256,
      28,    25,    27,    26,     1,   254,     2,     0,     6,     5,
     131,     0,    92,    93,   123,    78,     0,   141,     0,   242,
      50,     0,     0,     0,   117,    36,     0,    87,     0,     0,
       0,   244,     0,     0,     0,     0,    42,     0,     0,     4,
       0,     0,   111,     0,     0,   105,   106,   104,     0,   108,
       0,     0,   137,   241,   222,   225,   227,   228,   223,   224,
     229,     0,   140,   142,   217,   218,   219,   226,   220,   221,
      31,    30,     0,     0,     0,    87,     0,    82,     0,     0,
       0,     0,   117,    89,    39,    37,    39,     0,    80,    76,
      77,   258,   257,     0,   130,   110,     0,   100,    99,   123,
      96,    95,    97,   107,   103,     0,   123,     0,     0,   101,
      33,     0,     0,    49,     0,   254,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,   215,     0,   116,   145,
     152,   153,   154,   147,   149,   155,   148,   168,   156,   157,
     158,   159,   151,   146,   161,   162,     0,   275,     0,     0,
      85,     0,     0,    88,     0,    35,    40,    79,    23,     0,
      21,   114,   112,   138,   252,   137,     0,   122,   124,   129,
     137,   133,   135,   132,   143,     0,     0,    46,     0,    73,
      51,   254,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,     0,   163,     0,     0,     0,     0,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,    91,    90,     0,     0,    19,
       0,     0,   117,   113,     0,   250,     0,   251,   144,    94,
      98,     0,   128,   127,   126,   102,     0,     0,     0,     0,
      55,     0,    60,     0,     0,    59,    57,     0,    67,    66,
      56,    64,    65,    54,    70,     0,     0,    71,    48,   200,
       0,   214,   216,     0,   204,   205,   206,   207,   208,   209,
       0,     0,     0,     0,     0,     0,   187,     0,     0,     0,
     160,   150,   179,   180,     0,   175,     0,     0,     0,   166,
       0,   178,   177,   193,   194,   195,   196,   197,   198,   199,
     170,   169,   172,   171,   173,   174,     0,    34,   276,     0,
      38,     0,    22,   254,   115,   230,   232,     0,   234,   248,
     233,   119,   139,   249,   125,   136,   134,     0,    44,     0,
       0,     0,     0,    68,     0,    53,     0,     0,    52,    45,
       0,    72,     0,   191,     0,     0,     0,     0,   185,     0,
       0,     0,   210,     0,   176,     0,     0,     0,   167,   211,
      84,    24,     0,     0,   270,   262,   268,   266,   269,   264,
       0,     0,     0,   247,   238,   245,     0,   109,    47,     0,
       0,     0,     0,    69,     0,     0,   201,     0,     0,   189,
       0,   188,     0,   192,   212,     0,     0,   183,   181,   248,
       0,   265,   267,   263,     0,   231,   249,     0,     0,     0,
      61,    63,     0,     0,   202,   203,   186,   190,   184,   182,
     235,   259,   271,     0,   121,    62,     0,     0,    75,     0,
       0,     0,     0,   118,    58,    74,     0,   272,   260,   246,
     120,   213,     0,   261
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -403,  -403,  -403,   461,  -403,   506,  -403,   251,  -403,   196,
    -403,  -403,  -403,  -403,   244,   -85,   386,  -403,  -403,  -403,
      -7,  -403,   217,   128,  -403,  -403,   218,  -403,   491,  -403,
    -403,  -403,   415,  -403,  -403,   342,  -173,   -76,  -403,     7,
     -70,   -54,  -403,  -403,   -74,   309,  -403,  -403,  -403,  -126,
    -403,  -403,   -99,  -403,   259,  -403,  -403,  -110,  -249,  -403,
     -77,   261,  -136,  -133,  -403,  -403,  -403,  -403,  -403,  -403,
     305,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
      46,   -69,   -80,  -403,  -403,   -87,  -403,  -403,  -403,  -402,
      86,  -403,  -403,  -403,     1,  -403,  -403,  -403,    88,   347,
    -403,  -403,  -403,  -403,   460,  -403,  -403,  -403,  -403,  -301
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    68,   219,   220,    22,    61,
      23,   131,    24,    25,    86,   144,   215,    26,    27,    28,
      82,   239,   240,   324,   405,   326,   327,    29,    94,    30,
      31,    32,   140,    33,   142,   143,    34,   159,   160,   161,
      73,   108,   109,   164,    74,   156,   221,   292,   293,   137,
     447,   503,   112,   227,   228,   304,   102,   169,   222,   121,
     122,   223,   224,   189,   190,   191,   192,   193,   194,   195,
     249,   196,   197,   198,   199,   200,   340,   201,   202,   203,
     204,   205,   124,   125,   126,   127,   128,   129,   384,   385,
     386,   387,   388,    49,   389,    80,    92,   443,   444,   445,
     298,    35,    36,    58,    59,   390,   440,   508,    66,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     188,   104,   237,    39,   349,   146,    42,   397,   123,   145,
     145,    50,    51,    38,   154,   331,   213,   114,   115,   116,
     111,   511,   307,   155,   136,    55,   174,    89,   295,   229,
     502,   231,   233,    38,   162,   166,   295,   162,    83,   475,
     238,   105,    72,    70,   406,    37,   248,    84,   265,    87,
     252,   256,   254,   206,    43,    70,    96,   175,   145,   356,
     225,   209,    52,    44,   406,    56,    90,   230,   328,    40,
     210,    53,   492,   132,   265,   285,   106,   407,   103,   280,
     167,   412,   257,   134,   135,    41,   357,   178,   114,   115,
     116,    48,   242,    45,   243,   149,   150,   407,   168,   258,
     176,    54,   234,   279,   151,   280,    57,   359,   226,   427,
     341,   342,   107,   212,   422,   299,   117,   255,   252,   294,
     305,   352,   353,   105,   360,    60,   354,    46,   355,   179,
     180,   181,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   257,   217,   442,
     300,   294,   162,    71,   483,   118,   119,   296,   106,   178,
     114,   115,   116,   302,   258,   229,   391,   257,   182,   257,
     395,   396,   332,   235,   333,    64,   466,   383,   186,   329,
      67,   497,   257,   403,   258,   120,   258,   117,   257,   303,
     110,    47,   501,   376,   107,   344,   433,   232,    65,   258,
     404,   179,   180,   181,   183,   258,    77,   379,   419,   420,
     432,   381,    62,    63,   345,   123,   417,   184,   247,   123,
     346,   351,   257,   424,   398,    75,   118,   119,   494,   145,
     178,   114,   115,   116,    76,   345,   484,   434,    78,   258,
     182,   418,   435,   185,   186,    79,    81,   416,   436,   437,
     257,   187,   499,    85,   257,   282,   120,    88,   283,   117,
     415,   178,   114,   115,   116,   438,   247,   258,    91,    93,
     439,   258,   179,   180,   181,    97,   183,   421,   457,   100,
     459,   460,   377,   257,    70,   461,    98,   101,   426,   184,
     464,   265,   178,   114,   115,   116,   113,   136,   118,   119,
     258,   500,   130,   179,   180,   181,   133,   178,   114,   115,
     116,   182,   138,   139,   462,   185,   186,   276,   277,   278,
     279,   257,   280,   187,   141,   147,   487,   257,   120,   486,
     117,   114,   148,    71,   250,   180,   181,   153,   258,   116,
     289,   155,   182,   290,   258,   409,   430,   183,   410,   171,
     180,   181,   157,   431,   163,   465,   171,   259,   158,   448,
     184,   117,   283,   165,   507,   456,   510,   170,   294,   118,
     119,   468,   489,   182,   294,   294,   171,   172,   183,   334,
     335,   336,   337,   338,   339,   207,   185,   186,   182,   173,
     214,   184,   117,   260,   187,   218,   211,   236,   110,   120,
     118,   119,   498,   505,   238,   283,   283,   117,   509,   251,
      14,   283,   241,   244,   281,   287,   245,   185,   186,   246,
     253,   284,   184,   288,   251,   187,   306,   291,   294,   309,
     120,   118,   119,   301,   308,   325,    70,   184,   347,   358,
     261,   350,   378,   399,   393,   400,   118,   119,   185,   186,
     401,   402,   414,   413,   356,   257,   187,   425,   428,   280,
     262,   120,   429,   185,   186,   433,   441,   263,   264,   446,
     449,   187,   450,   451,   265,   266,   120,   452,   453,   454,
     455,   470,   463,   467,   469,   471,   472,   473,   267,   268,
     269,   270,   271,   474,   433,   272,   273,  -273,   274,   275,
     276,   277,   278,   279,     1,   280,   434,   476,   478,   477,
     479,   435,     2,   480,   481,   482,   493,   436,   437,     3,
     485,   488,   496,     4,   495,   504,    99,   243,   506,    69,
     513,   380,   216,     5,   438,   434,     6,     7,  -271,   439,
     435,   382,   408,   458,   411,    95,   436,   437,     8,     9,
     177,   330,   512,   343,   286,   392,   491,   490,   152,    10,
     394,     0,     1,   438,     0,     0,     0,  -271,   439,     0,
       2,   297,   260,     0,     0,     0,     0,     3,     0,     0,
       0,     4,     0,    11,     0,     0,     0,    12,     0,     0,
       0,     5,     0,     0,     6,     7,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,     8,     9,    14,     0,
       0,  -236,     0,     0,     0,     0,   260,    10,     0,   261,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   423,     0,     0,     0,     0,     0,   348,
    -237,    11,    15,    16,    17,    12,     0,   264,     0,     0,
       0,     0,   260,   265,   266,     0,     0,     0,     0,     0,
      13,     0,     0,   261,     0,     0,    14,   267,   268,   269,
     270,   271,     0,     0,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   348,   280,     0,     0,     0,   260,     0,
       0,   264,     0,     0,     0,     0,     0,   265,   266,  -274,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,   267,   268,   269,   270,   271,     0,     0,   272,   273,
       0,   274,   275,   276,   277,   278,   279,   264,   280,     0,
       0,     0,     0,   265,  -274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -274,  -274,  -274,
     270,   271,     0,     0,   272,   273,     0,   274,   275,   276,
     277,   278,   279,   264,   280,   310,     0,     0,     0,   265,
     311,     0,   312,   313,     0,   314,     0,     0,     0,     0,
       0,     0,     0,   315,     0,     0,  -274,  -274,     0,     0,
    -274,  -274,     0,   274,   275,   276,   277,   278,   279,     0,
     280,     0,     0,     0,     0,     0,     0,     0,     0,   316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   317,     0,   318,   319,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   320,     0,     0,     0,   321,     0,   322,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   323
};

static const yytype_int16 yycheck[] =
{
     136,    71,   175,     2,   253,    90,     5,   308,    77,    89,
      90,    10,    11,     3,   101,     3,   142,     4,     5,     6,
      74,     3,    54,    12,    82,    19,    93,    93,     3,   165,
      50,   167,   168,     3,   108,   111,     3,   111,    45,   441,
       3,     9,    35,    57,    27,    26,   182,    46,   134,    48,
     183,   187,   185,   138,    70,    57,    55,   124,   138,   100,
     159,    63,    70,    79,    27,    59,   132,   166,   241,     3,
     140,    79,   474,    80,   134,   211,    44,    60,    71,   165,
      54,   330,   114,    82,    83,     3,   127,     3,     4,     5,
       6,    97,   167,   109,   169,    94,    95,    60,    72,   131,
     167,   109,   171,   163,    97,   165,     3,   103,   162,   358,
     246,   247,    80,   171,   166,   225,   103,   187,   251,   171,
     230,   257,   258,     9,   120,   144,   259,    93,   261,    45,
      46,    47,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   114,   147,   124,
     226,   171,   226,   167,   455,   142,   143,   124,    44,     3,
       4,     5,     6,    89,   131,   301,   292,   114,    84,   114,
     306,   307,   160,   172,   244,     0,   425,   167,   160,   168,
     111,   482,   114,   103,   131,   172,   131,   103,   114,   115,
      76,    93,   493,   280,    80,    91,    25,   113,   170,   131,
     120,    45,    46,    47,   120,   131,   167,   284,   344,   345,
     383,   288,    16,    17,   110,   284,    91,   133,   110,   288,
     116,   168,   114,   356,   309,     3,   142,   143,   477,   309,
       3,     4,     5,     6,   169,   110,   168,    66,    93,   131,
      84,   116,    71,   159,   160,     3,   126,   107,    77,    78,
     114,   167,    81,     3,   114,   168,   172,   122,   171,   103,
     124,     3,     4,     5,     6,    94,   110,   131,     3,   126,
      99,   131,    45,    46,    47,   124,   120,   347,   414,    96,
     416,   417,   281,   114,    57,   116,   171,   123,   358,   133,
     423,   134,     3,     4,     5,     6,     3,    82,   142,   143,
     131,   130,     4,    45,    46,    47,   120,     3,     4,     5,
       6,    84,    92,   167,   107,   159,   160,   160,   161,   162,
     163,   114,   165,   167,     3,   130,   462,   114,   172,   116,
     103,     4,    45,   167,    45,    46,    47,   167,   131,     6,
     168,    12,    84,   171,   131,   168,   168,   120,   171,   171,
      46,    47,   168,   168,   113,   425,   171,    17,   168,   168,
     133,   103,   171,   125,   500,   168,   502,   168,   171,   142,
     143,   168,   168,    84,   171,   171,   171,   130,   120,   136,
     137,   138,   139,   140,   141,     3,   159,   160,    84,    45,
     111,   133,   103,    53,   167,     3,   148,     3,    76,   172,
     142,   143,   168,   168,     3,   171,   171,   103,   168,   120,
     111,   171,   124,   167,    97,    48,   167,   159,   160,   167,
     165,   167,   133,   167,   120,   167,    54,    93,   171,    92,
     172,   142,   143,   171,   167,   171,    57,   133,   167,   167,
     100,   168,     3,    30,     3,   167,   142,   143,   159,   160,
     167,   167,    93,   168,   100,   114,   167,   167,   103,   165,
     120,   172,   166,   159,   160,    25,   171,   127,   128,    69,
     167,   167,     6,     6,   134,   135,   172,     6,   103,   119,
     167,    98,   168,   168,   168,    77,    77,    77,   148,   149,
     150,   151,   152,    98,    25,   155,   156,     0,   158,   159,
     160,   161,   162,   163,     7,   165,    66,     3,     6,   125,
     171,    71,    15,   168,   168,   167,   167,    77,    78,    22,
     168,   168,     6,    26,   168,   168,    65,   169,   167,    23,
     168,   287,   146,    36,    94,    66,    39,    40,    98,    99,
      71,   290,   325,   415,   326,    54,    77,    78,    51,    52,
     135,   242,   506,   248,   212,   294,   470,   469,    98,    62,
     301,    -1,     7,    94,    -1,    -1,    -1,    98,    99,    -1,
      15,   224,    53,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    86,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    36,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    51,    52,   111,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    53,    62,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,   120,
     171,    86,   145,   146,   147,    90,    -1,   128,    -1,    -1,
      -1,    -1,    53,   134,   135,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,   100,    -1,    -1,   111,   148,   149,   150,
     151,   152,    -1,    -1,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,   120,   165,    -1,    -1,    -1,    53,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   100,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,   150,   151,   152,    -1,    -1,   155,   156,
      -1,   158,   159,   160,   161,   162,   163,   128,   165,    -1,
      -1,    -1,    -1,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,
     151,   152,    -1,    -1,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,   128,   165,    24,    -1,    -1,    -1,   134,
      29,    -1,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,   151,   152,    -1,    -1,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      62,    86,    90,   105,   111,   145,   146,   147,   174,   175,
     176,   177,   181,   183,   185,   186,   190,   191,   192,   200,
     202,   203,   204,   206,   209,   274,   275,    26,     3,   267,
       3,     3,   267,    70,    79,   109,    93,    93,    97,   266,
     267,   267,    70,    79,   109,    19,    59,     3,   276,   277,
     144,   182,   182,   182,     0,   170,   281,   111,   178,   178,
      57,   167,   212,   213,   217,     3,   169,   167,    93,     3,
     268,   126,   193,   193,   267,     3,   187,   267,   122,    93,
     132,     3,   269,   126,   201,   201,   267,   124,   171,   176,
      96,   123,   229,   212,   213,     9,    44,    80,   214,   215,
      76,   214,   225,     3,     4,     5,     6,   103,   142,   143,
     172,   232,   233,   254,   255,   256,   257,   258,   259,   260,
       4,   184,   193,   120,   267,   267,    82,   222,    92,   167,
     205,     3,   207,   208,   188,   255,   188,   130,    45,   267,
     267,   212,   277,   167,   258,    12,   218,   168,   168,   210,
     211,   212,   217,   113,   216,   125,   210,    54,    72,   230,
     168,   171,   130,    45,    93,   124,   167,   205,     3,    45,
      46,    47,    84,   120,   133,   159,   160,   167,   235,   236,
     237,   238,   239,   240,   241,   242,   244,   245,   246,   247,
     248,   250,   251,   252,   253,   254,   188,     3,   282,    63,
     213,   148,   171,   222,   111,   189,   189,   267,     3,   179,
     180,   219,   231,   234,   235,   225,   214,   226,   227,   235,
     225,   235,   113,   235,   254,   267,     3,   209,     3,   194,
     195,   124,   167,   169,   167,   167,   167,   110,   235,   243,
      45,   120,   236,   165,   236,   213,   235,   114,   131,    17,
      53,   100,   120,   127,   128,   134,   135,   148,   149,   150,
     151,   152,   155,   156,   158,   159,   160,   161,   162,   163,
     165,    97,   168,   171,   167,   235,   208,    48,   167,   168,
     171,    93,   220,   221,   171,     3,   124,   272,   273,   230,
     210,   171,    89,   115,   228,   230,    54,    54,   167,    92,
      24,    29,    31,    32,    34,    42,    68,    85,    87,    88,
     102,   106,   108,   118,   196,   171,   198,   199,   209,   168,
     218,     3,   160,   213,   136,   137,   138,   139,   140,   141,
     249,   235,   235,   243,    91,   110,   116,   167,   120,   231,
     168,   168,   235,   235,   236,   236,   100,   127,   167,   103,
     120,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   258,   267,     3,   233,
     187,   233,   180,   167,   261,   262,   263,   264,   265,   267,
     278,   222,   234,     3,   227,   235,   235,   282,   188,    30,
     167,   167,   167,   103,   120,   197,    27,    60,   195,   168,
     171,   199,   231,   168,    93,   124,   107,    91,   116,   235,
     235,   213,   166,   114,   236,   167,   213,   231,   103,   166,
     168,   168,   209,    25,    66,    71,    77,    78,    94,    99,
     279,   171,   124,   270,   271,   272,    69,   223,   168,   167,
       6,     6,     6,   103,   119,   167,   168,   235,   196,   235,
     235,   116,   107,   168,   236,   213,   231,   168,   168,   168,
      98,    77,    77,    77,    98,   262,     3,   125,     6,   171,
     168,   168,   167,   282,   168,   168,   116,   235,   168,   168,
     271,   263,   262,   167,   231,   168,     6,   282,   168,    81,
     130,   282,    50,   224,   168,   168,   167,   235,   280,   168,
     235,     3,   253,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   173,   174,   175,   175,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   182,   182,
     183,   184,   185,   185,   186,   186,   187,   188,   189,   189,
     190,   191,   191,   191,   192,   192,   192,   192,   192,   193,
     193,   194,   194,   195,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   197,   197,
     197,   198,   198,   198,   199,   199,   200,   200,   200,   200,
     201,   201,   202,   203,   204,   204,   205,   205,   206,   207,
     207,   208,   209,   209,   209,   210,   210,   211,   211,   212,
     212,   213,   213,   214,   215,   215,   215,   216,   216,   217,
     218,   218,   219,   220,   220,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   226,   226,   227,   228,   228,   228,
     229,   229,   230,   230,   230,   230,   230,   230,   231,   231,
     232,   232,   233,   233,   234,   235,   235,   235,   235,   235,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   237,   237,   238,   238,   238,   238,   238,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   240,
     240,   241,   241,   241,   241,   242,   242,   242,   242,   243,
     243,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     246,   246,   247,   248,   249,   249,   249,   249,   249,   249,
     250,   251,   252,   253,   253,   253,   253,   254,   254,   254,
     254,   254,   255,   256,   256,   257,   257,   258,   259,   260,
     261,   261,   262,   262,   263,   263,   264,   264,   265,   266,
     267,   267,   268,   268,   269,   270,   270,   271,   271,   272,
     272,   273,   273,   274,   274,   275,   276,   276,   277,   278,
     278,   278,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   280,   281,   281,   282,   282
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     8,     6,     9,     7,     3,
       0,     1,     3,     3,     1,     1,     1,     1,     6,     1,
       1,     4,     5,     4,     1,     1,     1,     1,     1,     2,
       0,     1,     2,     0,     6,     5,     4,     4,     3,     5,
       2,     0,     4,     2,     8,     5,     3,     0,     5,     1,
       3,     3,     2,     2,     6,     1,     1,     1,     3,     3,
       3,     3,     5,     2,     1,     1,     1,     1,     0,     7,
       1,     0,     1,     1,     0,     2,     2,     0,     4,     0,
       2,     0,     3,     0,     1,     3,     2,     1,     1,     0,
       2,     0,     2,     2,     4,     2,     4,     0,     1,     3,
       1,     0,     1,     3,     2,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     2,     2,     2,     3,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     5,     6,     5,     6,     4,     6,     3,     5,     4,
       5,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     6,     6,     1,     1,     1,     1,     1,     1,
       4,     4,     5,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     1,     0,     1,     1,     5,     1,     0,     2,
       1,     1,     0,     1,     0,     2,     1,     3,     3,     4,
       6,     8,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     0,     1,     1,     0,     1,     3
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
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
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
          ++yyp;
          ++yyformat;
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
#line 151 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1897 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 151 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1903 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 149 "bison_parser.y"
            { }
#line 1909 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 149 "bison_parser.y"
            { }
#line 1915 "bison_parser.cpp"
        break;

    case 175: /* statement_list  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1928 "bison_parser.cpp"
        break;

    case 176: /* statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1934 "bison_parser.cpp"
        break;

    case 177: /* preparable_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1940 "bison_parser.cpp"
        break;

    case 178: /* opt_hints  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1953 "bison_parser.cpp"
        break;

    case 179: /* hint_list  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1966 "bison_parser.cpp"
        break;

    case 180: /* hint  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 1972 "bison_parser.cpp"
        break;

    case 181: /* transaction_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 1978 "bison_parser.cpp"
        break;

    case 183: /* prepare_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 1984 "bison_parser.cpp"
        break;

    case 184: /* prepare_target_query  */
#line 151 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1990 "bison_parser.cpp"
        break;

    case 185: /* execute_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 1996 "bison_parser.cpp"
        break;

    case 186: /* import_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2002 "bison_parser.cpp"
        break;

    case 187: /* file_type  */
#line 149 "bison_parser.y"
            { }
#line 2008 "bison_parser.cpp"
        break;

    case 188: /* file_path  */
#line 151 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2014 "bison_parser.cpp"
        break;

    case 189: /* opt_file_type  */
#line 149 "bison_parser.y"
            { }
#line 2020 "bison_parser.cpp"
        break;

    case 190: /* export_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2026 "bison_parser.cpp"
        break;

    case 191: /* show_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2032 "bison_parser.cpp"
        break;

    case 192: /* create_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2038 "bison_parser.cpp"
        break;

    case 193: /* opt_not_exists  */
#line 149 "bison_parser.y"
            { }
#line 2044 "bison_parser.cpp"
        break;

    case 194: /* column_def_commalist  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2057 "bison_parser.cpp"
        break;

    case 195: /* column_def  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2063 "bison_parser.cpp"
        break;

    case 196: /* column_type  */
#line 149 "bison_parser.y"
            { }
#line 2069 "bison_parser.cpp"
        break;

    case 197: /* opt_column_nullable  */
#line 149 "bison_parser.y"
            { }
#line 2075 "bison_parser.cpp"
        break;

    case 198: /* opt_table_key_constraints  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table_key_constraint_vec)); }
#line 2081 "bison_parser.cpp"
        break;

    case 199: /* table_key_constraint  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table_key_constraint_t)); }
#line 2087 "bison_parser.cpp"
        break;

    case 200: /* drop_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2093 "bison_parser.cpp"
        break;

    case 201: /* opt_exists  */
#line 149 "bison_parser.y"
            { }
#line 2099 "bison_parser.cpp"
        break;

    case 202: /* delete_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2105 "bison_parser.cpp"
        break;

    case 203: /* truncate_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2111 "bison_parser.cpp"
        break;

    case 204: /* insert_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2117 "bison_parser.cpp"
        break;

    case 205: /* opt_column_list  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2130 "bison_parser.cpp"
        break;

    case 206: /* update_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2136 "bison_parser.cpp"
        break;

    case 207: /* update_clause_commalist  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2149 "bison_parser.cpp"
        break;

    case 208: /* update_clause  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2155 "bison_parser.cpp"
        break;

    case 209: /* select_statement  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2161 "bison_parser.cpp"
        break;

    case 210: /* select_within_set_operation  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2167 "bison_parser.cpp"
        break;

    case 211: /* select_within_set_operation_no_parentheses  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2173 "bison_parser.cpp"
        break;

    case 212: /* select_with_paren  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2179 "bison_parser.cpp"
        break;

    case 213: /* select_no_paren  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2185 "bison_parser.cpp"
        break;

    case 214: /* set_operator  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2191 "bison_parser.cpp"
        break;

    case 215: /* set_type  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2197 "bison_parser.cpp"
        break;

    case 216: /* opt_all  */
#line 149 "bison_parser.y"
            { }
#line 2203 "bison_parser.cpp"
        break;

    case 217: /* select_clause  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2209 "bison_parser.cpp"
        break;

    case 218: /* opt_distinct  */
#line 149 "bison_parser.y"
            { }
#line 2215 "bison_parser.cpp"
        break;

    case 219: /* select_list  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2228 "bison_parser.cpp"
        break;

    case 220: /* opt_from_clause  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2234 "bison_parser.cpp"
        break;

    case 221: /* from_clause  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2240 "bison_parser.cpp"
        break;

    case 222: /* opt_where  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2246 "bison_parser.cpp"
        break;

    case 223: /* opt_group  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2252 "bison_parser.cpp"
        break;

    case 224: /* opt_having  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2258 "bison_parser.cpp"
        break;

    case 225: /* opt_order  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2271 "bison_parser.cpp"
        break;

    case 226: /* order_list  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2284 "bison_parser.cpp"
        break;

    case 227: /* order_desc  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2290 "bison_parser.cpp"
        break;

    case 228: /* opt_order_type  */
#line 149 "bison_parser.y"
            { }
#line 2296 "bison_parser.cpp"
        break;

    case 229: /* opt_top  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2302 "bison_parser.cpp"
        break;

    case 230: /* opt_limit  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2308 "bison_parser.cpp"
        break;

    case 231: /* expr_list  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2321 "bison_parser.cpp"
        break;

    case 232: /* opt_literal_list  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2334 "bison_parser.cpp"
        break;

    case 233: /* literal_list  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2347 "bison_parser.cpp"
        break;

    case 234: /* expr_alias  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2353 "bison_parser.cpp"
        break;

    case 235: /* expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2359 "bison_parser.cpp"
        break;

    case 236: /* operand  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2365 "bison_parser.cpp"
        break;

    case 237: /* scalar_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2371 "bison_parser.cpp"
        break;

    case 238: /* unary_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2377 "bison_parser.cpp"
        break;

    case 239: /* binary_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2383 "bison_parser.cpp"
        break;

    case 240: /* logic_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2389 "bison_parser.cpp"
        break;

    case 241: /* in_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2395 "bison_parser.cpp"
        break;

    case 242: /* case_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2401 "bison_parser.cpp"
        break;

    case 243: /* case_list  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2407 "bison_parser.cpp"
        break;

    case 244: /* exists_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2413 "bison_parser.cpp"
        break;

    case 245: /* comp_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2419 "bison_parser.cpp"
        break;

    case 246: /* function_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2425 "bison_parser.cpp"
        break;

    case 247: /* extract_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2431 "bison_parser.cpp"
        break;

    case 248: /* cast_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2437 "bison_parser.cpp"
        break;

    case 249: /* datetime_field  */
#line 149 "bison_parser.y"
            { }
#line 2443 "bison_parser.cpp"
        break;

    case 250: /* array_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2449 "bison_parser.cpp"
        break;

    case 251: /* array_index  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2455 "bison_parser.cpp"
        break;

    case 252: /* between_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2461 "bison_parser.cpp"
        break;

    case 253: /* column_name  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2467 "bison_parser.cpp"
        break;

    case 254: /* literal  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2473 "bison_parser.cpp"
        break;

    case 255: /* string_literal  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2479 "bison_parser.cpp"
        break;

    case 256: /* bool_literal  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2485 "bison_parser.cpp"
        break;

    case 257: /* num_literal  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2491 "bison_parser.cpp"
        break;

    case 258: /* int_literal  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2497 "bison_parser.cpp"
        break;

    case 259: /* null_literal  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2503 "bison_parser.cpp"
        break;

    case 260: /* param_expr  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2509 "bison_parser.cpp"
        break;

    case 261: /* table_ref  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2515 "bison_parser.cpp"
        break;

    case 262: /* table_ref_atomic  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2521 "bison_parser.cpp"
        break;

    case 263: /* nonjoin_table_ref_atomic  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2527 "bison_parser.cpp"
        break;

    case 264: /* table_ref_commalist  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2540 "bison_parser.cpp"
        break;

    case 265: /* table_ref_name  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2546 "bison_parser.cpp"
        break;

    case 266: /* table_ref_name_no_alias  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2552 "bison_parser.cpp"
        break;

    case 267: /* table_name  */
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2558 "bison_parser.cpp"
        break;

    case 268: /* opt_index_name  */
#line 151 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2564 "bison_parser.cpp"
        break;

    case 269: /* index_name  */
#line 151 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2570 "bison_parser.cpp"
        break;

    case 270: /* table_alias  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2576 "bison_parser.cpp"
        break;

    case 271: /* opt_table_alias  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2582 "bison_parser.cpp"
        break;

    case 272: /* alias  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2588 "bison_parser.cpp"
        break;

    case 273: /* opt_alias  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2594 "bison_parser.cpp"
        break;

    case 274: /* opt_with_clause  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2600 "bison_parser.cpp"
        break;

    case 275: /* with_clause  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2606 "bison_parser.cpp"
        break;

    case 276: /* with_description_list  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2612 "bison_parser.cpp"
        break;

    case 277: /* with_description  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2618 "bison_parser.cpp"
        break;

    case 278: /* join_clause  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2624 "bison_parser.cpp"
        break;

    case 279: /* opt_join_type  */
#line 149 "bison_parser.y"
            { }
#line 2630 "bison_parser.cpp"
        break;

    case 280: /* join_condition  */
#line 160 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2636 "bison_parser.cpp"
        break;

    case 282: /* ident_commalist  */
#line 152 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2649 "bison_parser.cpp"
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

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

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

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

#line 2767 "bison_parser.cpp"

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
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
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
#line 275 "bison_parser.y"
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
#line 2982 "bison_parser.cpp"
    break;

  case 3:
#line 296 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2993 "bison_parser.cpp"
    break;

  case 4:
#line 302 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3004 "bison_parser.cpp"
    break;

  case 5:
#line 311 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3013 "bison_parser.cpp"
    break;

  case 6:
#line 315 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3022 "bison_parser.cpp"
    break;

  case 7:
#line 319 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3030 "bison_parser.cpp"
    break;

  case 8:
#line 322 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3038 "bison_parser.cpp"
    break;

  case 9:
#line 325 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3046 "bison_parser.cpp"
    break;

  case 10:
#line 332 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3052 "bison_parser.cpp"
    break;

  case 11:
#line 333 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3058 "bison_parser.cpp"
    break;

  case 12:
#line 334 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3064 "bison_parser.cpp"
    break;

  case 13:
#line 335 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3070 "bison_parser.cpp"
    break;

  case 14:
#line 336 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3076 "bison_parser.cpp"
    break;

  case 15:
#line 337 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3082 "bison_parser.cpp"
    break;

  case 16:
#line 338 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3088 "bison_parser.cpp"
    break;

  case 17:
#line 339 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3094 "bison_parser.cpp"
    break;

  case 18:
#line 340 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3100 "bison_parser.cpp"
    break;

  case 19:
#line 349 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3106 "bison_parser.cpp"
    break;

  case 20:
#line 350 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3112 "bison_parser.cpp"
    break;

  case 21:
#line 355 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3118 "bison_parser.cpp"
    break;

  case 22:
#line 356 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3124 "bison_parser.cpp"
    break;

  case 23:
#line 360 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3133 "bison_parser.cpp"
    break;

  case 24:
#line 364 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3143 "bison_parser.cpp"
    break;

  case 25:
#line 376 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3151 "bison_parser.cpp"
    break;

  case 26:
#line 379 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3159 "bison_parser.cpp"
    break;

  case 27:
#line 382 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3167 "bison_parser.cpp"
    break;

  case 30:
#line 396 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3177 "bison_parser.cpp"
    break;

  case 32:
#line 406 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3186 "bison_parser.cpp"
    break;

  case 33:
#line 410 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3196 "bison_parser.cpp"
    break;

  case 34:
#line 424 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3207 "bison_parser.cpp"
    break;

  case 35:
#line 430 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3218 "bison_parser.cpp"
    break;

  case 36:
#line 439 "bison_parser.y"
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
#line 3237 "bison_parser.cpp"
    break;

  case 37:
#line 456 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3243 "bison_parser.cpp"
    break;

  case 38:
#line 460 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3251 "bison_parser.cpp"
    break;

  case 39:
#line 463 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3257 "bison_parser.cpp"
    break;

  case 40:
#line 472 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3268 "bison_parser.cpp"
    break;

  case 41:
#line 486 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3276 "bison_parser.cpp"
    break;

  case 42:
#line 489 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3286 "bison_parser.cpp"
    break;

  case 43:
#line 494 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3296 "bison_parser.cpp"
    break;

  case 44:
#line 508 "bison_parser.y"
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
#line 3314 "bison_parser.cpp"
    break;

  case 45:
#line 521 "bison_parser.y"
                                                                                                              {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-2].column_vec);
		}
#line 3326 "bison_parser.cpp"
    break;

  case 46:
#line 528 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3338 "bison_parser.cpp"
    break;

  case 47:
#line 535 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-6].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3350 "bison_parser.cpp"
    break;

  case 48:
#line 542 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3363 "bison_parser.cpp"
    break;

  case 49:
#line 553 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3369 "bison_parser.cpp"
    break;

  case 50:
#line 554 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3375 "bison_parser.cpp"
    break;

  case 51:
#line 558 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3381 "bison_parser.cpp"
    break;

  case 52:
#line 559 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3387 "bison_parser.cpp"
    break;

  case 53:
#line 563 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3395 "bison_parser.cpp"
    break;

  case 54:
#line 569 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3401 "bison_parser.cpp"
    break;

  case 55:
#line 570 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3407 "bison_parser.cpp"
    break;

  case 56:
#line 571 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3413 "bison_parser.cpp"
    break;

  case 57:
#line 572 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3419 "bison_parser.cpp"
    break;

  case 58:
#line 573 "bison_parser.y"
                                              { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3425 "bison_parser.cpp"
    break;

  case 59:
#line 574 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3431 "bison_parser.cpp"
    break;

  case 60:
#line 575 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3437 "bison_parser.cpp"
    break;

  case 61:
#line 576 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3443 "bison_parser.cpp"
    break;

  case 62:
#line 577 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3449 "bison_parser.cpp"
    break;

  case 63:
#line 578 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3455 "bison_parser.cpp"
    break;

  case 64:
#line 579 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3461 "bison_parser.cpp"
    break;

  case 65:
#line 580 "bison_parser.y"
                 { (yyval.column_type_t) = ColumnType{DataType::TIME}; }
#line 3467 "bison_parser.cpp"
    break;

  case 66:
#line 581 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3473 "bison_parser.cpp"
    break;

  case 67:
#line 582 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3479 "bison_parser.cpp"
    break;

  case 68:
#line 586 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3485 "bison_parser.cpp"
    break;

  case 69:
#line 587 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3491 "bison_parser.cpp"
    break;

  case 70:
#line 588 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3497 "bison_parser.cpp"
    break;

  case 71:
#line 592 "bison_parser.y"
                                     {(yyval.table_key_constraint_vec) = new std::vector<TableKeyConstraint>(); (yyval.table_key_constraint_vec)->push_back((yyvsp[0].table_key_constraint_t)); }
#line 3503 "bison_parser.cpp"
    break;

  case 72:
#line 593 "bison_parser.y"
                                                               {  (yyvsp[-1].table_key_constraint_vec)->push_back((yyvsp[0].table_key_constraint_t)); (yyval.table_key_constraint_vec) = (yyvsp[-1].table_key_constraint_vec); }
#line 3509 "bison_parser.cpp"
    break;

  case 73:
#line 594 "bison_parser.y"
                            {(yyval.table_key_constraint_vec) = new std::vector<TableKeyConstraint>(); }
#line 3515 "bison_parser.cpp"
    break;

  case 74:
#line 598 "bison_parser.y"
                                                 { (yyval.table_key_constraint_t) = TableKeyConstraint{KeyType::PRIMARY_KEY, (yyvsp[-1].str_vec)}; }
#line 3521 "bison_parser.cpp"
    break;

  case 75:
#line 599 "bison_parser.y"
                                            { (yyval.table_key_constraint_t) = TableKeyConstraint{KeyType::UNIQUE, (yyvsp[-1].str_vec)}; }
#line 3527 "bison_parser.cpp"
    break;

  case 76:
#line 607 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3538 "bison_parser.cpp"
    break;

  case 77:
#line 613 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3549 "bison_parser.cpp"
    break;

  case 78:
#line 619 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3559 "bison_parser.cpp"
    break;

  case 79:
#line 624 "bison_parser.y"
                                                    {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
    			(yyval.drop_stmt)->index_name = (yyvsp[-2].sval);
    		}
#line 3569 "bison_parser.cpp"
    break;

  case 80:
#line 632 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3575 "bison_parser.cpp"
    break;

  case 81:
#line 633 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3581 "bison_parser.cpp"
    break;

  case 82:
#line 642 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3592 "bison_parser.cpp"
    break;

  case 83:
#line 651 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3602 "bison_parser.cpp"
    break;

  case 84:
#line 664 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3614 "bison_parser.cpp"
    break;

  case 85:
#line 671 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3626 "bison_parser.cpp"
    break;

  case 86:
#line 682 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3632 "bison_parser.cpp"
    break;

  case 87:
#line 683 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3638 "bison_parser.cpp"
    break;

  case 88:
#line 693 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3649 "bison_parser.cpp"
    break;

  case 89:
#line 702 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3655 "bison_parser.cpp"
    break;

  case 90:
#line 703 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3661 "bison_parser.cpp"
    break;

  case 91:
#line 707 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3671 "bison_parser.cpp"
    break;

  case 92:
#line 719 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3680 "bison_parser.cpp"
    break;

  case 93:
#line 723 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3689 "bison_parser.cpp"
    break;

  case 94:
#line 727 "bison_parser.y"
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
#line 3705 "bison_parser.cpp"
    break;

  case 97:
#line 745 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3711 "bison_parser.cpp"
    break;

  case 98:
#line 746 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3724 "bison_parser.cpp"
    break;

  case 99:
#line 757 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3730 "bison_parser.cpp"
    break;

  case 100:
#line 758 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3736 "bison_parser.cpp"
    break;

  case 101:
#line 762 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3751 "bison_parser.cpp"
    break;

  case 102:
#line 772 "bison_parser.y"
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
#line 3766 "bison_parser.cpp"
    break;

  case 103:
#line 785 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3775 "bison_parser.cpp"
    break;

  case 104:
#line 792 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3784 "bison_parser.cpp"
    break;

  case 105:
#line 796 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3793 "bison_parser.cpp"
    break;

  case 106:
#line 800 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3802 "bison_parser.cpp"
    break;

  case 107:
#line 807 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3810 "bison_parser.cpp"
    break;

  case 108:
#line 810 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3818 "bison_parser.cpp"
    break;

  case 109:
#line 816 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3832 "bison_parser.cpp"
    break;

  case 110:
#line 828 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3838 "bison_parser.cpp"
    break;

  case 111:
#line 829 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3844 "bison_parser.cpp"
    break;

  case 113:
#line 837 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3850 "bison_parser.cpp"
    break;

  case 114:
#line 838 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3856 "bison_parser.cpp"
    break;

  case 115:
#line 842 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3862 "bison_parser.cpp"
    break;

  case 116:
#line 847 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3868 "bison_parser.cpp"
    break;

  case 117:
#line 848 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3874 "bison_parser.cpp"
    break;

  case 118:
#line 852 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3884 "bison_parser.cpp"
    break;

  case 119:
#line 857 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3890 "bison_parser.cpp"
    break;

  case 120:
#line 861 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3896 "bison_parser.cpp"
    break;

  case 121:
#line 862 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3902 "bison_parser.cpp"
    break;

  case 122:
#line 866 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3908 "bison_parser.cpp"
    break;

  case 123:
#line 867 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3914 "bison_parser.cpp"
    break;

  case 124:
#line 871 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3920 "bison_parser.cpp"
    break;

  case 125:
#line 872 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3926 "bison_parser.cpp"
    break;

  case 126:
#line 876 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3932 "bison_parser.cpp"
    break;

  case 127:
#line 880 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3938 "bison_parser.cpp"
    break;

  case 128:
#line 881 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3944 "bison_parser.cpp"
    break;

  case 129:
#line 882 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3950 "bison_parser.cpp"
    break;

  case 130:
#line 888 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3956 "bison_parser.cpp"
    break;

  case 131:
#line 889 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3962 "bison_parser.cpp"
    break;

  case 132:
#line 893 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3968 "bison_parser.cpp"
    break;

  case 133:
#line 894 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3974 "bison_parser.cpp"
    break;

  case 134:
#line 895 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3980 "bison_parser.cpp"
    break;

  case 135:
#line 896 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3986 "bison_parser.cpp"
    break;

  case 136:
#line 897 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3992 "bison_parser.cpp"
    break;

  case 137:
#line 898 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3998 "bison_parser.cpp"
    break;

  case 138:
#line 905 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4004 "bison_parser.cpp"
    break;

  case 139:
#line 906 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4010 "bison_parser.cpp"
    break;

  case 140:
#line 910 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4016 "bison_parser.cpp"
    break;

  case 141:
#line 911 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4022 "bison_parser.cpp"
    break;

  case 142:
#line 915 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4028 "bison_parser.cpp"
    break;

  case 143:
#line 916 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4034 "bison_parser.cpp"
    break;

  case 144:
#line 920 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4046 "bison_parser.cpp"
    break;

  case 150:
#line 938 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4052 "bison_parser.cpp"
    break;

  case 160:
#line 948 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4058 "bison_parser.cpp"
    break;

  case 163:
#line 957 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4064 "bison_parser.cpp"
    break;

  case 164:
#line 958 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4070 "bison_parser.cpp"
    break;

  case 165:
#line 959 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4076 "bison_parser.cpp"
    break;

  case 166:
#line 960 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4082 "bison_parser.cpp"
    break;

  case 167:
#line 961 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4088 "bison_parser.cpp"
    break;

  case 169:
#line 966 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4094 "bison_parser.cpp"
    break;

  case 170:
#line 967 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4100 "bison_parser.cpp"
    break;

  case 171:
#line 968 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4106 "bison_parser.cpp"
    break;

  case 172:
#line 969 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4112 "bison_parser.cpp"
    break;

  case 173:
#line 970 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4118 "bison_parser.cpp"
    break;

  case 174:
#line 971 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4124 "bison_parser.cpp"
    break;

  case 175:
#line 972 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4130 "bison_parser.cpp"
    break;

  case 176:
#line 973 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4136 "bison_parser.cpp"
    break;

  case 177:
#line 974 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4142 "bison_parser.cpp"
    break;

  case 178:
#line 975 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4148 "bison_parser.cpp"
    break;

  case 179:
#line 979 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4154 "bison_parser.cpp"
    break;

  case 180:
#line 980 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4160 "bison_parser.cpp"
    break;

  case 181:
#line 984 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4166 "bison_parser.cpp"
    break;

  case 182:
#line 985 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4172 "bison_parser.cpp"
    break;

  case 183:
#line 986 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4178 "bison_parser.cpp"
    break;

  case 184:
#line 987 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4184 "bison_parser.cpp"
    break;

  case 185:
#line 993 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4190 "bison_parser.cpp"
    break;

  case 186:
#line 994 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4196 "bison_parser.cpp"
    break;

  case 187:
#line 995 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4202 "bison_parser.cpp"
    break;

  case 188:
#line 996 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4208 "bison_parser.cpp"
    break;

  case 189:
#line 1000 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4214 "bison_parser.cpp"
    break;

  case 190:
#line 1001 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4220 "bison_parser.cpp"
    break;

  case 191:
#line 1005 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4226 "bison_parser.cpp"
    break;

  case 192:
#line 1006 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4232 "bison_parser.cpp"
    break;

  case 193:
#line 1010 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4238 "bison_parser.cpp"
    break;

  case 194:
#line 1011 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4244 "bison_parser.cpp"
    break;

  case 195:
#line 1012 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4250 "bison_parser.cpp"
    break;

  case 196:
#line 1013 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4256 "bison_parser.cpp"
    break;

  case 197:
#line 1014 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4262 "bison_parser.cpp"
    break;

  case 198:
#line 1015 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4268 "bison_parser.cpp"
    break;

  case 199:
#line 1016 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4274 "bison_parser.cpp"
    break;

  case 200:
#line 1020 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4280 "bison_parser.cpp"
    break;

  case 201:
#line 1021 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4286 "bison_parser.cpp"
    break;

  case 202:
#line 1025 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4292 "bison_parser.cpp"
    break;

  case 203:
#line 1029 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4298 "bison_parser.cpp"
    break;

  case 204:
#line 1033 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4304 "bison_parser.cpp"
    break;

  case 205:
#line 1034 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4310 "bison_parser.cpp"
    break;

  case 206:
#line 1035 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4316 "bison_parser.cpp"
    break;

  case 207:
#line 1036 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4322 "bison_parser.cpp"
    break;

  case 208:
#line 1037 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4328 "bison_parser.cpp"
    break;

  case 209:
#line 1038 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4334 "bison_parser.cpp"
    break;

  case 210:
#line 1042 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4340 "bison_parser.cpp"
    break;

  case 211:
#line 1046 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4346 "bison_parser.cpp"
    break;

  case 212:
#line 1050 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4352 "bison_parser.cpp"
    break;

  case 213:
#line 1054 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4358 "bison_parser.cpp"
    break;

  case 214:
#line 1055 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4364 "bison_parser.cpp"
    break;

  case 215:
#line 1056 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4370 "bison_parser.cpp"
    break;

  case 216:
#line 1057 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4376 "bison_parser.cpp"
    break;

  case 222:
#line 1069 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4382 "bison_parser.cpp"
    break;

  case 223:
#line 1073 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4388 "bison_parser.cpp"
    break;

  case 224:
#line 1074 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4394 "bison_parser.cpp"
    break;

  case 225:
#line 1078 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4400 "bison_parser.cpp"
    break;

  case 227:
#line 1083 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4406 "bison_parser.cpp"
    break;

  case 228:
#line 1087 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4412 "bison_parser.cpp"
    break;

  case 229:
#line 1091 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4422 "bison_parser.cpp"
    break;

  case 231:
#line 1104 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4433 "bison_parser.cpp"
    break;

  case 235:
#line 1120 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4444 "bison_parser.cpp"
    break;

  case 236:
#line 1129 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4450 "bison_parser.cpp"
    break;

  case 237:
#line 1130 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4456 "bison_parser.cpp"
    break;

  case 238:
#line 1135 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4468 "bison_parser.cpp"
    break;

  case 239:
#line 1146 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4478 "bison_parser.cpp"
    break;

  case 240:
#line 1155 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4484 "bison_parser.cpp"
    break;

  case 241:
#line 1156 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4490 "bison_parser.cpp"
    break;

  case 242:
#line 1160 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4496 "bison_parser.cpp"
    break;

  case 243:
#line 1161 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4502 "bison_parser.cpp"
    break;

  case 244:
#line 1165 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4508 "bison_parser.cpp"
    break;

  case 246:
#line 1171 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4514 "bison_parser.cpp"
    break;

  case 248:
#line 1177 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4520 "bison_parser.cpp"
    break;

  case 249:
#line 1182 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4526 "bison_parser.cpp"
    break;

  case 250:
#line 1183 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4532 "bison_parser.cpp"
    break;

  case 252:
#line 1189 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4538 "bison_parser.cpp"
    break;

  case 254:
#line 1199 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4544 "bison_parser.cpp"
    break;

  case 255:
#line 1203 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4550 "bison_parser.cpp"
    break;

  case 256:
#line 1207 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4559 "bison_parser.cpp"
    break;

  case 257:
#line 1211 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4568 "bison_parser.cpp"
    break;

  case 258:
#line 1218 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4578 "bison_parser.cpp"
    break;

  case 259:
#line 1232 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4590 "bison_parser.cpp"
    break;

  case 260:
#line 1240 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4603 "bison_parser.cpp"
    break;

  case 261:
#line 1250 "bison_parser.y"
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
#line 4623 "bison_parser.cpp"
    break;

  case 262:
#line 1268 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4629 "bison_parser.cpp"
    break;

  case 263:
#line 1269 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4635 "bison_parser.cpp"
    break;

  case 264:
#line 1270 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4641 "bison_parser.cpp"
    break;

  case 265:
#line 1271 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4647 "bison_parser.cpp"
    break;

  case 266:
#line 1272 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4653 "bison_parser.cpp"
    break;

  case 267:
#line 1273 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4659 "bison_parser.cpp"
    break;

  case 268:
#line 1274 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4665 "bison_parser.cpp"
    break;

  case 269:
#line 1275 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4671 "bison_parser.cpp"
    break;

  case 270:
#line 1276 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4677 "bison_parser.cpp"
    break;

  case 271:
#line 1277 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4683 "bison_parser.cpp"
    break;

  case 275:
#line 1297 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4689 "bison_parser.cpp"
    break;

  case 276:
#line 1298 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4695 "bison_parser.cpp"
    break;


#line 4699 "bison_parser.cpp"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                  yystos[+*yyssp], yyvsp, yylsp, result, scanner);
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
#line 1301 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
