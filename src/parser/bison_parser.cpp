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
	hsql::TableKeyConstraint* table_key_constraint_t;
	hsql::ConstraintType column_constraint_t;
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
	std::vector<hsql::TableKeyConstraint*>* table_key_constraint_vec;

#line 399 "bison_parser.cpp"

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
#define YYLAST   894

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  279
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  518

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
       0,   277,   277,   298,   304,   313,   317,   321,   324,   327,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   351,
     352,   357,   358,   362,   366,   378,   381,   384,   390,   391,
     398,   405,   408,   412,   426,   432,   441,   458,   462,   465,
     474,   488,   491,   496,   510,   523,   531,   538,   545,   556,
     557,   561,   562,   566,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   589,   590,
     591,   595,   596,   597,   601,   602,   603,   607,   608,   616,
     622,   628,   633,   641,   642,   651,   660,   673,   680,   691,
     692,   702,   711,   712,   716,   728,   732,   736,   750,   751,
     754,   755,   766,   767,   771,   781,   794,   801,   805,   809,
     816,   819,   825,   837,   838,   842,   846,   847,   851,   856,
     857,   861,   866,   870,   871,   875,   876,   880,   881,   885,
     889,   890,   891,   897,   898,   902,   903,   904,   905,   906,
     907,   914,   915,   919,   920,   924,   925,   929,   939,   940,
     941,   942,   943,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   961,   962,   966,   967,   968,   969,
     970,   974,   975,   976,   977,   978,   979,   980,   981,   982,
     983,   984,   988,   989,   993,   994,   995,   996,  1002,  1003,
    1004,  1005,  1009,  1010,  1014,  1015,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1029,  1030,  1034,  1038,  1042,  1043,  1044,
    1045,  1046,  1047,  1051,  1055,  1059,  1063,  1064,  1065,  1066,
    1070,  1071,  1072,  1073,  1074,  1078,  1082,  1083,  1087,  1088,
    1092,  1096,  1100,  1112,  1113,  1123,  1124,  1128,  1129,  1138,
    1139,  1144,  1155,  1164,  1165,  1169,  1170,  1174,  1179,  1180,
    1185,  1186,  1191,  1192,  1197,  1198,  1207,  1208,  1212,  1216,
    1220,  1227,  1240,  1248,  1258,  1277,  1278,  1279,  1280,  1281,
    1282,  1283,  1284,  1285,  1286,  1291,  1300,  1301,  1306,  1307
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
  "opt_column_nullable", "opt_column_constraint",
  "opt_table_key_constraints", "table_key_constraint", "drop_statement",
  "opt_exists", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
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

#define YYPACT_NINF (-400)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-277)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     570,    18,    42,    62,    71,    42,     6,    -4,    -3,     3,
      42,    42,     7,    20,   126,    56,    56,    56,   158,    37,
    -400,   125,  -400,   125,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,   -36,  -400,   164,    69,  -400,
      82,   155,  -400,   181,   138,   138,    42,   257,    42,   157,
    -400,   -45,   283,   161,   161,    42,  -400,   167,   121,  -400,
    -400,  -400,  -400,  -400,  -400,   539,  -400,   197,  -400,  -400,
     178,   -36,    25,  -400,   110,  -400,   310,    10,   314,  -400,
     138,   199,    42,    42,   242,  -400,   228,   165,   322,   327,
     327,  -400,   196,   293,    42,    42,  -400,   175,   126,  -400,
     182,   351,   347,   192,   193,  -400,  -400,  -400,   -36,   250,
     239,   -36,   -13,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,   198,   194,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,   245,   334,   -66,   165,   299,  -400,   327,   369,
     162,   240,   -57,  -400,   278,  -400,   278,    42,  -400,  -400,
    -400,  -400,  -400,   390,  -400,  -400,   299,  -400,  -400,   320,
    -400,  -400,    25,  -400,  -400,   299,   320,   299,   156,  -400,
    -400,    10,    42,  -400,   396,   289,   398,   279,    -1,   237,
     244,   246,   238,   331,   241,   381,  -400,   249,   -11,   408,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,   315,  -400,   -41,   247,
    -400,   299,   322,  -400,   359,  -400,  -400,  -400,   251,    97,
    -400,   324,   252,  -400,    64,   -13,   -36,   253,  -400,   -51,
     -13,   -11,   366,   -32,  -400,   255,   337,  -400,   776,   259,
    -400,   289,    11,    15,   374,   134,   299,   299,    -8,    73,
     266,   381,   598,   299,    53,   258,   -71,   299,   299,   381,
    -400,   381,    -2,   268,   109,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     351,    42,  -400,   433,    10,   -11,  -400,   257,    10,  -400,
     390,    14,   242,  -400,   299,  -400,   434,  -400,  -400,  -400,
    -400,   299,  -400,  -400,  -400,  -400,   299,   299,   369,   327,
    -400,   409,  -400,   271,   273,  -400,  -400,   276,  -400,  -400,
    -400,  -400,  -400,  -400,   117,    34,   129,  -400,  -400,  -400,
     299,  -400,  -400,   277,  -400,  -400,  -400,  -400,  -400,  -400,
     353,    80,    49,    81,   299,   299,  -400,   374,   344,    85,
    -400,  -400,  -400,   333,   545,   634,   381,   281,   249,  -400,
     346,   285,   634,   634,   634,   634,   670,   670,   670,   670,
      53,    53,   -72,   -72,   -72,   -10,   286,  -400,  -400,   139,
    -400,   140,  -400,   289,  -400,   168,  -400,   282,  -400,    23,
    -400,   385,  -400,  -400,  -400,   -11,   -11,   141,  -400,   288,
     450,   451,   454,  -400,   360,    13,   343,   301,  -400,  -400,
      28,  -400,   146,  -400,   299,   776,   299,   299,  -400,   116,
      91,   302,  -400,   381,   634,   249,   304,   159,  -400,  -400,
    -400,  -400,   307,   371,  -400,  -400,  -400,   399,   400,   401,
     382,    14,   476,  -400,  -400,  -400,   357,  -400,  -400,   477,
     316,   317,   318,  -400,   370,  -400,  -400,   321,   369,  -400,
     -60,   325,   -11,   119,  -400,   299,  -400,   598,   326,   172,
    -400,  -400,    23,    14,  -400,  -400,  -400,    14,   296,   328,
     299,   329,   486,  -400,  -400,  -400,   369,   179,  -400,  -400,
    -400,   -11,  -400,  -400,  -400,  -400,   456,   369,   -22,  -400,
     332,   183,  -400,   335,   299,   185,   299,  -400,  -400,  -400,
      17,   -11,  -400,  -400,   -11,   330,   336,  -400
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   277,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   256,     0,   243,    86,
      32,     0,    43,   246,    50,    50,     0,     0,     0,     0,
     242,     0,     0,    84,    84,     0,    41,     0,   258,   259,
      28,    25,    27,    26,     1,   257,     2,     0,     6,     5,
     134,     0,    95,    96,   126,    81,     0,   144,     0,   245,
      50,     0,     0,     0,   120,    36,     0,    90,     0,     0,
       0,   247,     0,     0,     0,     0,    42,     0,     0,     4,
       0,     0,   114,     0,     0,   108,   109,   107,     0,   111,
       0,     0,   140,   244,   225,   228,   230,   231,   226,   227,
     232,     0,   143,   145,   220,   221,   222,   229,   223,   224,
      31,    30,     0,     0,     0,    90,     0,    85,     0,     0,
       0,     0,   120,    92,    39,    37,    39,     0,    83,    79,
      80,   261,   260,     0,   133,   113,     0,   103,   102,   126,
      99,    98,   100,   110,   106,     0,   126,     0,     0,   104,
      33,     0,     0,    49,     0,   257,     0,     0,   216,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   119,   148,
     155,   156,   157,   150,   152,   158,   151,   171,   159,   160,
     161,   162,   154,   149,   164,   165,     0,   278,     0,     0,
      88,     0,     0,    91,     0,    35,    40,    82,    23,     0,
      21,   117,   115,   141,   255,   140,     0,   125,   127,   132,
     140,   136,   138,   135,   146,     0,     0,    46,     0,    76,
      51,   257,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,     0,   166,     0,     0,     0,     0,     0,
     168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,     0,    94,    93,     0,     0,    19,
       0,     0,   120,   116,     0,   253,     0,   254,   147,    97,
     101,     0,   131,   130,   129,   105,     0,     0,     0,     0,
      55,     0,    60,     0,     0,    59,    57,     0,    67,    66,
      56,    64,    65,    54,    70,     0,     0,    74,    48,   203,
       0,   217,   219,     0,   207,   208,   209,   210,   211,   212,
       0,     0,     0,     0,     0,     0,   190,     0,     0,     0,
     163,   153,   182,   183,     0,   178,     0,     0,     0,   169,
       0,   181,   180,   196,   197,   198,   199,   200,   201,   202,
     173,   172,   175,   174,   176,   177,     0,    34,   279,     0,
      38,     0,    22,   257,   118,   233,   235,     0,   237,   251,
     236,   122,   142,   252,   128,   139,   137,     0,    44,     0,
       0,     0,     0,    68,     0,    73,     0,     0,    52,    45,
       0,    75,     0,   194,     0,     0,     0,     0,   188,     0,
       0,     0,   213,     0,   179,     0,     0,     0,   170,   214,
      87,    24,     0,     0,   273,   265,   271,   269,   272,   267,
       0,     0,     0,   250,   241,   248,     0,   112,    47,     0,
       0,     0,     0,    69,     0,    72,    53,     0,     0,   204,
       0,     0,   192,     0,   191,     0,   195,   215,     0,     0,
     186,   184,   251,     0,   268,   270,   266,     0,   234,   252,
       0,     0,     0,    61,    63,    71,     0,     0,   205,   206,
     189,   193,   187,   185,   238,   262,   274,     0,   124,    62,
       0,     0,    78,     0,     0,     0,     0,   121,    58,    77,
       0,   275,   263,   249,   123,   216,     0,   264
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -400,  -400,  -400,   431,  -400,   482,  -400,   216,  -400,   210,
    -400,  -400,  -400,  -400,   220,   -85,   363,  -400,  -400,  -400,
      27,  -400,   186,    95,  -400,  -400,  -400,   187,  -400,   458,
    -400,  -400,  -400,   380,  -400,  -400,   305,  -173,   -76,  -400,
      -5,   -70,   -50,  -400,  -400,   -75,   274,  -400,  -400,  -400,
    -123,  -400,  -400,    40,  -400,   217,  -400,  -400,    33,  -249,
    -400,   -27,   225,  -136,  -133,  -400,  -400,  -400,  -400,  -400,
    -400,   272,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,    16,   -67,   -81,  -400,  -400,   -88,  -400,  -400,  -400,
    -399,    48,  -400,  -400,  -400,     1,  -400,  -400,  -400,    57,
     306,  -400,  -400,  -400,  -400,   427,  -400,  -400,  -400,  -400,
    -301
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    68,   219,   220,    22,    61,
      23,   131,    24,    25,    86,   144,   215,    26,    27,    28,
      82,   239,   240,   324,   405,   456,   326,   327,    29,    94,
      30,    31,    32,   140,    33,   142,   143,    34,   159,   160,
     161,    73,   108,   109,   164,    74,   156,   221,   292,   293,
     137,   447,   507,   112,   227,   228,   304,   102,   169,   222,
     121,   122,   223,   224,   189,   190,   191,   192,   193,   194,
     195,   249,   196,   197,   198,   199,   200,   340,   201,   202,
     203,   204,   205,   124,   125,   126,   127,   128,   129,   384,
     385,   386,   387,   388,    49,   389,    80,    92,   443,   444,
     445,   298,    35,    36,    58,    59,   390,   440,   512,    66,
     208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     188,   104,   237,    39,   349,   146,    42,   397,   145,   145,
     123,    50,    51,   154,   114,   115,   116,    38,   331,   213,
     515,    70,   307,   155,   111,   136,   295,   174,   506,   229,
      72,   231,   233,   162,   105,   166,   162,   238,   302,    55,
     454,   167,   478,   257,    37,    38,   248,    84,    89,    87,
     252,   256,   254,   206,   257,   406,    96,   145,   175,   168,
     258,   406,   265,   257,   303,    40,   103,   295,   328,   106,
     210,   258,    83,   455,    41,   285,    43,    52,   496,    56,
     258,   412,   257,   134,   135,    44,    53,    90,   407,    46,
      47,   279,   151,   280,   407,   149,   150,   351,   356,   258,
      48,   176,   247,   257,   234,   107,   257,   132,   488,   427,
     341,   342,   226,   117,   212,    45,    54,   255,   252,   105,
     258,   352,   353,   258,   265,   357,   354,   282,   355,    57,
     283,    71,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   442,   217,   294,
     300,   162,   118,   119,   106,   280,   416,   487,    64,   178,
     114,   115,   116,   257,   344,   229,   242,    75,   243,   391,
     395,   396,   417,   235,   333,   332,   469,   186,   257,   329,
     258,   383,   120,   345,    79,   501,   110,   265,   296,   346,
     107,   345,   376,   433,   257,   258,   505,   418,   465,   225,
      60,   179,   180,   181,   415,   257,   230,    65,   419,   420,
     432,   258,   359,   276,   277,   278,   279,   123,   280,    70,
     403,   123,   258,   424,   398,   209,    62,    63,   145,   360,
     257,   498,   464,   257,   434,   490,    67,   404,    76,   435,
     182,   178,   114,   115,   116,   436,   437,   258,    78,    77,
     258,   422,   178,   114,   115,   116,   294,   379,   299,   117,
      85,   381,   438,   305,    81,   289,  -274,   439,   290,   232,
     334,   335,   336,   337,   338,   339,   183,   421,   460,    88,
     462,   463,   377,   179,   180,   181,    91,    93,   426,   184,
     467,    97,    98,   100,   179,   180,   181,   409,   118,   119,
     410,   101,   178,   114,   115,   116,    70,   430,   431,   448,
     171,   171,   283,   113,   459,   185,   186,   294,   130,   133,
     138,   433,   182,   187,   136,   141,   147,   471,   120,   491,
     294,   114,   139,   182,   178,   114,   115,   116,   148,  -239,
     493,   117,    71,   294,   179,   180,   181,   502,   247,   153,
     283,   509,   117,   513,   283,   468,   283,   116,   183,   155,
     157,   158,   434,   163,   165,   171,   170,   435,   511,   183,
     514,   184,   207,   436,   437,   172,   250,   180,   181,   173,
     118,   119,   184,   182,   178,   114,   115,   116,   211,   214,
     438,   118,   119,   218,  -274,   439,   110,   185,   186,   236,
      14,   238,   117,   241,   244,   187,   253,   287,   185,   186,
     120,   245,   281,   246,   284,   182,   187,   291,   288,   183,
     306,   120,   308,   294,   301,   259,   350,   180,   181,   309,
     325,    70,   184,   347,   117,   358,   378,   393,   400,   399,
     401,   118,   119,   402,   356,   413,   414,   257,   425,   428,
     280,   251,   429,   441,   446,   449,   450,   451,   185,   186,
     452,   260,   457,   453,   184,   182,   187,  -240,   458,   473,
     466,   120,   470,   118,   119,   472,   474,   475,   476,   479,
     477,   433,   480,   481,   117,   483,   484,   482,   486,   485,
     185,   186,   500,   489,   492,   497,    99,   499,   187,   243,
     508,   251,   510,   120,   517,    69,   382,   380,   261,   216,
     461,   408,    95,   411,   184,   177,   330,   286,   394,   392,
     343,   495,   434,   118,   119,   152,   516,   435,   262,   494,
     297,     0,     0,   436,   437,   263,   264,   503,     0,  -276,
     185,   186,   265,   266,     0,     0,     1,     0,   187,     0,
     438,     0,     0,   120,     2,   439,   267,   268,   269,   270,
     271,     3,     0,   272,   273,     4,   274,   275,   276,   277,
     278,   279,     0,   280,     0,     5,     0,     1,     6,     7,
       0,     0,     0,     0,     0,     2,   504,     0,     0,     0,
       8,     9,     3,     0,     0,     0,     4,     0,   260,     0,
       0,    10,     0,     0,     0,     0,     5,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,    11,     0,     0,     0,    12,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,   261,     0,     0,     0,     0,
      14,   260,     0,     0,     0,     0,    11,     0,     0,   423,
      12,     0,     0,     0,     0,   348,     0,     0,     0,     0,
       0,     0,     0,   264,     0,    13,     0,     0,     0,   265,
     266,    14,     0,     0,    15,    16,    17,   260,     0,     0,
       0,     0,     0,   267,   268,   269,   270,   271,   261,     0,
     272,   273,     0,   274,   275,   276,   277,   278,   279,     0,
     280,     0,     0,     0,     0,    15,    16,    17,   348,     0,
       0,     0,     0,   260,     0,     0,   264,     0,     0,     0,
       0,     0,   265,   266,  -277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   267,   268,   269,   270,
     271,     0,     0,   272,   273,     0,   274,   275,   276,   277,
     278,   279,   264,   280,     0,     0,     0,     0,   265,  -277,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -277,  -277,  -277,   270,   271,     0,     0,   272,
     273,     0,   274,   275,   276,   277,   278,   279,   264,   280,
     310,     0,     0,     0,   265,   311,     0,   312,   313,     0,
     314,     0,     0,     0,     0,     0,     0,     0,   315,     0,
       0,  -277,  -277,     0,     0,  -277,  -277,     0,   274,   275,
     276,   277,   278,   279,     0,   280,     0,     0,     0,     0,
       0,     0,     0,     0,   316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   317,     0,   318,   319,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   320,     0,
       0,     0,   321,     0,   322,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   323
};

static const yytype_int16 yycheck[] =
{
     136,    71,   175,     2,   253,    90,     5,   308,    89,    90,
      77,    10,    11,   101,     4,     5,     6,     3,     3,   142,
       3,    57,    54,    12,    74,    82,     3,    93,    50,   165,
      35,   167,   168,   108,     9,   111,   111,     3,    89,    19,
      27,    54,   441,   114,    26,     3,   182,    46,    93,    48,
     183,   187,   185,   138,   114,    27,    55,   138,   124,    72,
     131,    27,   134,   114,   115,     3,    71,     3,   241,    44,
     140,   131,    45,    60,     3,   211,    70,    70,   477,    59,
     131,   330,   114,    82,    83,    79,    79,   132,    60,    93,
      93,   163,    97,   165,    60,    94,    95,   168,   100,   131,
      97,   167,   110,   114,   171,    80,   114,    80,   168,   358,
     246,   247,   162,   103,   171,   109,   109,   187,   251,     9,
     131,   257,   258,   131,   134,   127,   259,   168,   261,     3,
     171,   167,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   124,   147,   171,
     226,   226,   142,   143,    44,   165,   107,   458,     0,     3,
       4,     5,     6,   114,    91,   301,   167,     3,   169,   292,
     306,   307,    91,   172,   244,   160,   425,   160,   114,   168,
     131,   167,   172,   110,     3,   486,    76,   134,   124,   116,
      80,   110,   280,    25,   114,   131,   497,   116,   107,   159,
     144,    45,    46,    47,   124,   114,   166,   170,   344,   345,
     383,   131,   103,   160,   161,   162,   163,   284,   165,    57,
     103,   288,   131,   356,   309,    63,    16,    17,   309,   120,
     114,   480,   116,   114,    66,   116,   111,   120,   169,    71,
      84,     3,     4,     5,     6,    77,    78,   131,    93,   167,
     131,   166,     3,     4,     5,     6,   171,   284,   225,   103,
       3,   288,    94,   230,   126,   168,    98,    99,   171,   113,
     136,   137,   138,   139,   140,   141,   120,   347,   414,   122,
     416,   417,   281,    45,    46,    47,     3,   126,   358,   133,
     423,   124,   171,    96,    45,    46,    47,   168,   142,   143,
     171,   123,     3,     4,     5,     6,    57,   168,   168,   168,
     171,   171,   171,     3,   168,   159,   160,   171,     4,   120,
      92,    25,    84,   167,    82,     3,   130,   168,   172,   465,
     171,     4,   167,    84,     3,     4,     5,     6,    45,   171,
     168,   103,   167,   171,    45,    46,    47,   168,   110,   167,
     171,   168,   103,   168,   171,   425,   171,     6,   120,    12,
     168,   168,    66,   113,   125,   171,   168,    71,   504,   120,
     506,   133,     3,    77,    78,   130,    45,    46,    47,    45,
     142,   143,   133,    84,     3,     4,     5,     6,   148,   111,
      94,   142,   143,     3,    98,    99,    76,   159,   160,     3,
     111,     3,   103,   124,   167,   167,   165,    48,   159,   160,
     172,   167,    97,   167,   167,    84,   167,    93,   167,   120,
      54,   172,   167,   171,   171,    17,   168,    46,    47,    92,
     171,    57,   133,   167,   103,   167,     3,     3,   167,    30,
     167,   142,   143,   167,   100,   168,    93,   114,   167,   103,
     165,   120,   166,   171,    69,   167,     6,     6,   159,   160,
       6,    53,   119,   103,   133,    84,   167,   171,   167,    98,
     168,   172,   168,   142,   143,   168,    77,    77,    77,     3,
      98,    25,   125,     6,   103,   168,   168,   171,   167,   119,
     159,   160,     6,   168,   168,   167,    65,   168,   167,   169,
     168,   120,   167,   172,   168,    23,   290,   287,   100,   146,
     415,   325,    54,   326,   133,   135,   242,   212,   301,   294,
     248,   473,    66,   142,   143,    98,   510,    71,   120,   472,
     224,    -1,    -1,    77,    78,   127,   128,    81,    -1,     0,
     159,   160,   134,   135,    -1,    -1,     7,    -1,   167,    -1,
      94,    -1,    -1,   172,    15,    99,   148,   149,   150,   151,
     152,    22,    -1,   155,   156,    26,   158,   159,   160,   161,
     162,   163,    -1,   165,    -1,    36,    -1,     7,    39,    40,
      -1,    -1,    -1,    -1,    -1,    15,   130,    -1,    -1,    -1,
      51,    52,    22,    -1,    -1,    -1,    26,    -1,    53,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    36,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    86,    -1,    -1,    -1,    90,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   100,    -1,    -1,    -1,    -1,
     111,    53,    -1,    -1,    -1,    -1,    86,    -1,    -1,   114,
      90,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,   105,    -1,    -1,    -1,   134,
     135,   111,    -1,    -1,   145,   146,   147,    53,    -1,    -1,
      -1,    -1,    -1,   148,   149,   150,   151,   152,   100,    -1,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,    -1,
     165,    -1,    -1,    -1,    -1,   145,   146,   147,   120,    -1,
      -1,    -1,    -1,    53,    -1,    -1,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,
     152,    -1,    -1,   155,   156,    -1,   158,   159,   160,   161,
     162,   163,   128,   165,    -1,    -1,    -1,    -1,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,   150,   151,   152,    -1,    -1,   155,
     156,    -1,   158,   159,   160,   161,   162,   163,   128,   165,
      24,    -1,    -1,    -1,   134,    29,    -1,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,   151,   152,    -1,    -1,   155,   156,    -1,   158,   159,
     160,   161,   162,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      62,    86,    90,   105,   111,   145,   146,   147,   174,   175,
     176,   177,   181,   183,   185,   186,   190,   191,   192,   201,
     203,   204,   205,   207,   210,   275,   276,    26,     3,   268,
       3,     3,   268,    70,    79,   109,    93,    93,    97,   267,
     268,   268,    70,    79,   109,    19,    59,     3,   277,   278,
     144,   182,   182,   182,     0,   170,   282,   111,   178,   178,
      57,   167,   213,   214,   218,     3,   169,   167,    93,     3,
     269,   126,   193,   193,   268,     3,   187,   268,   122,    93,
     132,     3,   270,   126,   202,   202,   268,   124,   171,   176,
      96,   123,   230,   213,   214,     9,    44,    80,   215,   216,
      76,   215,   226,     3,     4,     5,     6,   103,   142,   143,
     172,   233,   234,   255,   256,   257,   258,   259,   260,   261,
       4,   184,   193,   120,   268,   268,    82,   223,    92,   167,
     206,     3,   208,   209,   188,   256,   188,   130,    45,   268,
     268,   213,   278,   167,   259,    12,   219,   168,   168,   211,
     212,   213,   218,   113,   217,   125,   211,    54,    72,   231,
     168,   171,   130,    45,    93,   124,   167,   206,     3,    45,
      46,    47,    84,   120,   133,   159,   160,   167,   236,   237,
     238,   239,   240,   241,   242,   243,   245,   246,   247,   248,
     249,   251,   252,   253,   254,   255,   188,     3,   283,    63,
     214,   148,   171,   223,   111,   189,   189,   268,     3,   179,
     180,   220,   232,   235,   236,   226,   215,   227,   228,   236,
     226,   236,   113,   236,   255,   268,     3,   210,     3,   194,
     195,   124,   167,   169,   167,   167,   167,   110,   236,   244,
      45,   120,   237,   165,   237,   214,   236,   114,   131,    17,
      53,   100,   120,   127,   128,   134,   135,   148,   149,   150,
     151,   152,   155,   156,   158,   159,   160,   161,   162,   163,
     165,    97,   168,   171,   167,   236,   209,    48,   167,   168,
     171,    93,   221,   222,   171,     3,   124,   273,   274,   231,
     211,   171,    89,   115,   229,   231,    54,    54,   167,    92,
      24,    29,    31,    32,    34,    42,    68,    85,    87,    88,
     102,   106,   108,   118,   196,   171,   199,   200,   210,   168,
     219,     3,   160,   214,   136,   137,   138,   139,   140,   141,
     250,   236,   236,   244,    91,   110,   116,   167,   120,   232,
     168,   168,   236,   236,   237,   237,   100,   127,   167,   103,
     120,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   259,   268,     3,   234,
     187,   234,   180,   167,   262,   263,   264,   265,   266,   268,
     279,   223,   235,     3,   228,   236,   236,   283,   188,    30,
     167,   167,   167,   103,   120,   197,    27,    60,   195,   168,
     171,   200,   232,   168,    93,   124,   107,    91,   116,   236,
     236,   214,   166,   114,   237,   167,   214,   232,   103,   166,
     168,   168,   210,    25,    66,    71,    77,    78,    94,    99,
     280,   171,   124,   271,   272,   273,    69,   224,   168,   167,
       6,     6,     6,   103,    27,    60,   198,   119,   167,   168,
     236,   196,   236,   236,   116,   107,   168,   237,   214,   232,
     168,   168,   168,    98,    77,    77,    77,    98,   263,     3,
     125,     6,   171,   168,   168,   119,   167,   283,   168,   168,
     116,   236,   168,   168,   272,   264,   263,   167,   232,   168,
       6,   283,   168,    81,   130,   283,    50,   225,   168,   168,
     167,   236,   281,   168,   236,     3,   254,   168
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
     197,   198,   198,   198,   199,   199,   199,   200,   200,   201,
     201,   201,   201,   202,   202,   203,   204,   205,   205,   206,
     206,   207,   208,   208,   209,   210,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   215,   216,   216,   216,
     217,   217,   218,   219,   219,   220,   221,   221,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   227,   228,
     229,   229,   229,   230,   230,   231,   231,   231,   231,   231,
     231,   232,   232,   233,   233,   234,   234,   235,   236,   236,
     236,   236,   236,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   238,   238,   239,   239,   239,   239,
     239,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   241,   241,   242,   242,   242,   242,   243,   243,
     243,   243,   244,   244,   245,   245,   246,   246,   246,   246,
     246,   246,   246,   247,   247,   248,   249,   250,   250,   250,
     250,   250,   250,   251,   252,   253,   254,   254,   254,   254,
     255,   255,   255,   255,   255,   256,   257,   257,   258,   258,
     259,   260,   261,   262,   262,   263,   263,   264,   264,   265,
     265,   266,   267,   268,   268,   269,   269,   270,   271,   271,
     272,   272,   273,   273,   274,   274,   275,   275,   276,   277,
     277,   278,   279,   279,   279,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   281,   282,   282,   283,   283
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     8,     6,     9,     7,     3,
       0,     1,     3,     4,     1,     1,     1,     1,     6,     1,
       1,     4,     5,     4,     1,     1,     1,     1,     1,     2,
       0,     2,     1,     0,     1,     2,     0,     6,     5,     4,
       4,     3,     5,     2,     0,     4,     2,     8,     5,     3,
       0,     5,     1,     3,     3,     2,     2,     6,     1,     1,
       1,     3,     3,     3,     3,     5,     2,     1,     1,     1,
       1,     0,     7,     1,     0,     1,     1,     0,     2,     2,
       0,     4,     0,     2,     0,     3,     0,     1,     3,     2,
       1,     1,     0,     2,     0,     2,     2,     4,     2,     4,
       0,     1,     3,     1,     0,     1,     3,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     5,     6,     5,     6,     4,     6,
       3,     5,     4,     5,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     6,     6,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     4,     1,
       3,     2,     1,     1,     3,     1,     0,     1,     1,     5,
       1,     0,     2,     1,     1,     0,     1,     0,     2,     1,
       3,     3,     4,     6,     8,     1,     2,     1,     2,     1,
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
#line 152 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1909 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 152 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1915 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 150 "bison_parser.y"
            { }
#line 1921 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 150 "bison_parser.y"
            { }
#line 1927 "bison_parser.cpp"
        break;

    case 175: /* statement_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1940 "bison_parser.cpp"
        break;

    case 176: /* statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1946 "bison_parser.cpp"
        break;

    case 177: /* preparable_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1952 "bison_parser.cpp"
        break;

    case 178: /* opt_hints  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1965 "bison_parser.cpp"
        break;

    case 179: /* hint_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1978 "bison_parser.cpp"
        break;

    case 180: /* hint  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 1984 "bison_parser.cpp"
        break;

    case 181: /* transaction_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 1990 "bison_parser.cpp"
        break;

    case 183: /* prepare_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 1996 "bison_parser.cpp"
        break;

    case 184: /* prepare_target_query  */
#line 152 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2002 "bison_parser.cpp"
        break;

    case 185: /* execute_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2008 "bison_parser.cpp"
        break;

    case 186: /* import_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2014 "bison_parser.cpp"
        break;

    case 187: /* file_type  */
#line 150 "bison_parser.y"
            { }
#line 2020 "bison_parser.cpp"
        break;

    case 188: /* file_path  */
#line 152 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2026 "bison_parser.cpp"
        break;

    case 189: /* opt_file_type  */
#line 150 "bison_parser.y"
            { }
#line 2032 "bison_parser.cpp"
        break;

    case 190: /* export_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2038 "bison_parser.cpp"
        break;

    case 191: /* show_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2044 "bison_parser.cpp"
        break;

    case 192: /* create_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2050 "bison_parser.cpp"
        break;

    case 193: /* opt_not_exists  */
#line 150 "bison_parser.y"
            { }
#line 2056 "bison_parser.cpp"
        break;

    case 194: /* column_def_commalist  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2069 "bison_parser.cpp"
        break;

    case 195: /* column_def  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2075 "bison_parser.cpp"
        break;

    case 196: /* column_type  */
#line 150 "bison_parser.y"
            { }
#line 2081 "bison_parser.cpp"
        break;

    case 197: /* opt_column_nullable  */
#line 150 "bison_parser.y"
            { }
#line 2087 "bison_parser.cpp"
        break;

    case 198: /* opt_column_constraint  */
#line 150 "bison_parser.y"
            { }
#line 2093 "bison_parser.cpp"
        break;

    case 199: /* opt_table_key_constraints  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table_key_constraint_vec)); }
#line 2099 "bison_parser.cpp"
        break;

    case 200: /* table_key_constraint  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table_key_constraint_t)); }
#line 2105 "bison_parser.cpp"
        break;

    case 201: /* drop_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2111 "bison_parser.cpp"
        break;

    case 202: /* opt_exists  */
#line 150 "bison_parser.y"
            { }
#line 2117 "bison_parser.cpp"
        break;

    case 203: /* delete_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2123 "bison_parser.cpp"
        break;

    case 204: /* truncate_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2129 "bison_parser.cpp"
        break;

    case 205: /* insert_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2135 "bison_parser.cpp"
        break;

    case 206: /* opt_column_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2148 "bison_parser.cpp"
        break;

    case 207: /* update_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2154 "bison_parser.cpp"
        break;

    case 208: /* update_clause_commalist  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2167 "bison_parser.cpp"
        break;

    case 209: /* update_clause  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2173 "bison_parser.cpp"
        break;

    case 210: /* select_statement  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2179 "bison_parser.cpp"
        break;

    case 211: /* select_within_set_operation  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2185 "bison_parser.cpp"
        break;

    case 212: /* select_within_set_operation_no_parentheses  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2191 "bison_parser.cpp"
        break;

    case 213: /* select_with_paren  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2197 "bison_parser.cpp"
        break;

    case 214: /* select_no_paren  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2203 "bison_parser.cpp"
        break;

    case 215: /* set_operator  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2209 "bison_parser.cpp"
        break;

    case 216: /* set_type  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2215 "bison_parser.cpp"
        break;

    case 217: /* opt_all  */
#line 150 "bison_parser.y"
            { }
#line 2221 "bison_parser.cpp"
        break;

    case 218: /* select_clause  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2227 "bison_parser.cpp"
        break;

    case 219: /* opt_distinct  */
#line 150 "bison_parser.y"
            { }
#line 2233 "bison_parser.cpp"
        break;

    case 220: /* select_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2246 "bison_parser.cpp"
        break;

    case 221: /* opt_from_clause  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2252 "bison_parser.cpp"
        break;

    case 222: /* from_clause  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2258 "bison_parser.cpp"
        break;

    case 223: /* opt_where  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2264 "bison_parser.cpp"
        break;

    case 224: /* opt_group  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2270 "bison_parser.cpp"
        break;

    case 225: /* opt_having  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2276 "bison_parser.cpp"
        break;

    case 226: /* opt_order  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2289 "bison_parser.cpp"
        break;

    case 227: /* order_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2302 "bison_parser.cpp"
        break;

    case 228: /* order_desc  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2308 "bison_parser.cpp"
        break;

    case 229: /* opt_order_type  */
#line 150 "bison_parser.y"
            { }
#line 2314 "bison_parser.cpp"
        break;

    case 230: /* opt_top  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2320 "bison_parser.cpp"
        break;

    case 231: /* opt_limit  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2326 "bison_parser.cpp"
        break;

    case 232: /* expr_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2339 "bison_parser.cpp"
        break;

    case 233: /* opt_literal_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2352 "bison_parser.cpp"
        break;

    case 234: /* literal_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2365 "bison_parser.cpp"
        break;

    case 235: /* expr_alias  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2371 "bison_parser.cpp"
        break;

    case 236: /* expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2377 "bison_parser.cpp"
        break;

    case 237: /* operand  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2383 "bison_parser.cpp"
        break;

    case 238: /* scalar_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2389 "bison_parser.cpp"
        break;

    case 239: /* unary_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2395 "bison_parser.cpp"
        break;

    case 240: /* binary_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2401 "bison_parser.cpp"
        break;

    case 241: /* logic_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2407 "bison_parser.cpp"
        break;

    case 242: /* in_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2413 "bison_parser.cpp"
        break;

    case 243: /* case_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2419 "bison_parser.cpp"
        break;

    case 244: /* case_list  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2425 "bison_parser.cpp"
        break;

    case 245: /* exists_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2431 "bison_parser.cpp"
        break;

    case 246: /* comp_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2437 "bison_parser.cpp"
        break;

    case 247: /* function_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2443 "bison_parser.cpp"
        break;

    case 248: /* extract_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2449 "bison_parser.cpp"
        break;

    case 249: /* cast_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2455 "bison_parser.cpp"
        break;

    case 250: /* datetime_field  */
#line 150 "bison_parser.y"
            { }
#line 2461 "bison_parser.cpp"
        break;

    case 251: /* array_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2467 "bison_parser.cpp"
        break;

    case 252: /* array_index  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2473 "bison_parser.cpp"
        break;

    case 253: /* between_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2479 "bison_parser.cpp"
        break;

    case 254: /* column_name  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2485 "bison_parser.cpp"
        break;

    case 255: /* literal  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2491 "bison_parser.cpp"
        break;

    case 256: /* string_literal  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2497 "bison_parser.cpp"
        break;

    case 257: /* bool_literal  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2503 "bison_parser.cpp"
        break;

    case 258: /* num_literal  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2509 "bison_parser.cpp"
        break;

    case 259: /* int_literal  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2515 "bison_parser.cpp"
        break;

    case 260: /* null_literal  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2521 "bison_parser.cpp"
        break;

    case 261: /* param_expr  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2527 "bison_parser.cpp"
        break;

    case 262: /* table_ref  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2533 "bison_parser.cpp"
        break;

    case 263: /* table_ref_atomic  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2539 "bison_parser.cpp"
        break;

    case 264: /* nonjoin_table_ref_atomic  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2545 "bison_parser.cpp"
        break;

    case 265: /* table_ref_commalist  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2558 "bison_parser.cpp"
        break;

    case 266: /* table_ref_name  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2564 "bison_parser.cpp"
        break;

    case 267: /* table_ref_name_no_alias  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2570 "bison_parser.cpp"
        break;

    case 268: /* table_name  */
#line 151 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2576 "bison_parser.cpp"
        break;

    case 269: /* opt_index_name  */
#line 152 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2582 "bison_parser.cpp"
        break;

    case 270: /* index_name  */
#line 152 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2588 "bison_parser.cpp"
        break;

    case 271: /* table_alias  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2594 "bison_parser.cpp"
        break;

    case 272: /* opt_table_alias  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2600 "bison_parser.cpp"
        break;

    case 273: /* alias  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2606 "bison_parser.cpp"
        break;

    case 274: /* opt_alias  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2612 "bison_parser.cpp"
        break;

    case 275: /* opt_with_clause  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2618 "bison_parser.cpp"
        break;

    case 276: /* with_clause  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2624 "bison_parser.cpp"
        break;

    case 277: /* with_description_list  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2630 "bison_parser.cpp"
        break;

    case 278: /* with_description  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2636 "bison_parser.cpp"
        break;

    case 279: /* join_clause  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2642 "bison_parser.cpp"
        break;

    case 280: /* opt_join_type  */
#line 150 "bison_parser.y"
            { }
#line 2648 "bison_parser.cpp"
        break;

    case 281: /* join_condition  */
#line 161 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2654 "bison_parser.cpp"
        break;

    case 283: /* ident_commalist  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2667 "bison_parser.cpp"
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

#line 2785 "bison_parser.cpp"

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
#line 277 "bison_parser.y"
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
#line 3000 "bison_parser.cpp"
    break;

  case 3:
#line 298 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3011 "bison_parser.cpp"
    break;

  case 4:
#line 304 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3022 "bison_parser.cpp"
    break;

  case 5:
#line 313 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3031 "bison_parser.cpp"
    break;

  case 6:
#line 317 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3040 "bison_parser.cpp"
    break;

  case 7:
#line 321 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3048 "bison_parser.cpp"
    break;

  case 8:
#line 324 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3056 "bison_parser.cpp"
    break;

  case 9:
#line 327 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3064 "bison_parser.cpp"
    break;

  case 10:
#line 334 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3070 "bison_parser.cpp"
    break;

  case 11:
#line 335 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3076 "bison_parser.cpp"
    break;

  case 12:
#line 336 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3082 "bison_parser.cpp"
    break;

  case 13:
#line 337 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3088 "bison_parser.cpp"
    break;

  case 14:
#line 338 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3094 "bison_parser.cpp"
    break;

  case 15:
#line 339 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3100 "bison_parser.cpp"
    break;

  case 16:
#line 340 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3106 "bison_parser.cpp"
    break;

  case 17:
#line 341 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3112 "bison_parser.cpp"
    break;

  case 18:
#line 342 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3118 "bison_parser.cpp"
    break;

  case 19:
#line 351 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3124 "bison_parser.cpp"
    break;

  case 20:
#line 352 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3130 "bison_parser.cpp"
    break;

  case 21:
#line 357 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3136 "bison_parser.cpp"
    break;

  case 22:
#line 358 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3142 "bison_parser.cpp"
    break;

  case 23:
#line 362 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3151 "bison_parser.cpp"
    break;

  case 24:
#line 366 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3161 "bison_parser.cpp"
    break;

  case 25:
#line 378 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3169 "bison_parser.cpp"
    break;

  case 26:
#line 381 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3177 "bison_parser.cpp"
    break;

  case 27:
#line 384 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3185 "bison_parser.cpp"
    break;

  case 30:
#line 398 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3195 "bison_parser.cpp"
    break;

  case 32:
#line 408 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3204 "bison_parser.cpp"
    break;

  case 33:
#line 412 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3214 "bison_parser.cpp"
    break;

  case 34:
#line 426 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3225 "bison_parser.cpp"
    break;

  case 35:
#line 432 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3236 "bison_parser.cpp"
    break;

  case 36:
#line 441 "bison_parser.y"
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
#line 3255 "bison_parser.cpp"
    break;

  case 37:
#line 458 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3261 "bison_parser.cpp"
    break;

  case 38:
#line 462 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3269 "bison_parser.cpp"
    break;

  case 39:
#line 465 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3275 "bison_parser.cpp"
    break;

  case 40:
#line 474 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3286 "bison_parser.cpp"
    break;

  case 41:
#line 488 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3294 "bison_parser.cpp"
    break;

  case 42:
#line 491 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3304 "bison_parser.cpp"
    break;

  case 43:
#line 496 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3314 "bison_parser.cpp"
    break;

  case 44:
#line 510 "bison_parser.y"
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
#line 3332 "bison_parser.cpp"
    break;

  case 45:
#line 523 "bison_parser.y"
                                                                                                              {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-2].column_vec);
			(yyval.create_stmt)->tableKeyConstraints = (yyvsp[-1].table_key_constraint_vec);
		}
#line 3345 "bison_parser.cpp"
    break;

  case 46:
#line 531 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3357 "bison_parser.cpp"
    break;

  case 47:
#line 538 "bison_parser.y"
                                                                                                 {
			(yyval.create_stmt) = new CreateStatement(kCreateIndex);
			(yyval.create_stmt)->indexName = (yyvsp[-6].sval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
         	}
#line 3369 "bison_parser.cpp"
    break;

  case 48:
#line 545 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3382 "bison_parser.cpp"
    break;

  case 49:
#line 556 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3388 "bison_parser.cpp"
    break;

  case 50:
#line 557 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3394 "bison_parser.cpp"
    break;

  case 51:
#line 561 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3400 "bison_parser.cpp"
    break;

  case 52:
#line 562 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3406 "bison_parser.cpp"
    break;

  case 53:
#line 566 "bison_parser.y"
                                                                                {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-3].sval), (yyvsp[-2].column_type_t), (yyvsp[-1].bval), (yyvsp[0].column_constraint_t));
		}
#line 3414 "bison_parser.cpp"
    break;

  case 54:
#line 572 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3420 "bison_parser.cpp"
    break;

  case 55:
#line 573 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3426 "bison_parser.cpp"
    break;

  case 56:
#line 574 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3432 "bison_parser.cpp"
    break;

  case 57:
#line 575 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3438 "bison_parser.cpp"
    break;

  case 58:
#line 576 "bison_parser.y"
                                              { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3444 "bison_parser.cpp"
    break;

  case 59:
#line 577 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3450 "bison_parser.cpp"
    break;

  case 60:
#line 578 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3456 "bison_parser.cpp"
    break;

  case 61:
#line 579 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3462 "bison_parser.cpp"
    break;

  case 62:
#line 580 "bison_parser.y"
                                                { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3468 "bison_parser.cpp"
    break;

  case 63:
#line 581 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3474 "bison_parser.cpp"
    break;

  case 64:
#line 582 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3480 "bison_parser.cpp"
    break;

  case 65:
#line 583 "bison_parser.y"
                 { (yyval.column_type_t) = ColumnType{DataType::TIME}; }
#line 3486 "bison_parser.cpp"
    break;

  case 66:
#line 584 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3492 "bison_parser.cpp"
    break;

  case 67:
#line 585 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3498 "bison_parser.cpp"
    break;

  case 68:
#line 589 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3504 "bison_parser.cpp"
    break;

  case 69:
#line 590 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3510 "bison_parser.cpp"
    break;

  case 70:
#line 591 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3516 "bison_parser.cpp"
    break;

  case 71:
#line 595 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::PRIMARY_KEY; }
#line 3522 "bison_parser.cpp"
    break;

  case 72:
#line 596 "bison_parser.y"
               { (yyval.column_constraint_t) = ConstraintType::UNIQUE; }
#line 3528 "bison_parser.cpp"
    break;

  case 73:
#line 597 "bison_parser.y"
                    { (yyval.column_constraint_t) = ConstraintType::NOT_SET; }
#line 3534 "bison_parser.cpp"
    break;

  case 74:
#line 601 "bison_parser.y"
                                     {(yyval.table_key_constraint_vec) = new std::vector<TableKeyConstraint*>(); (yyval.table_key_constraint_vec)->push_back((yyvsp[0].table_key_constraint_t)); }
#line 3540 "bison_parser.cpp"
    break;

  case 75:
#line 602 "bison_parser.y"
                                                               {  (yyvsp[-1].table_key_constraint_vec)->push_back((yyvsp[0].table_key_constraint_t)); (yyval.table_key_constraint_vec) = (yyvsp[-1].table_key_constraint_vec); }
#line 3546 "bison_parser.cpp"
    break;

  case 76:
#line 603 "bison_parser.y"
                            {(yyval.table_key_constraint_vec) = new std::vector<TableKeyConstraint*>(); }
#line 3552 "bison_parser.cpp"
    break;

  case 77:
#line 607 "bison_parser.y"
                                                 { (yyval.table_key_constraint_t) = new TableKeyConstraint(ConstraintType::PRIMARY_KEY, (yyvsp[-1].str_vec)); }
#line 3558 "bison_parser.cpp"
    break;

  case 78:
#line 608 "bison_parser.y"
                                            { (yyval.table_key_constraint_t) = new TableKeyConstraint(ConstraintType::UNIQUE, (yyvsp[-1].str_vec)); }
#line 3564 "bison_parser.cpp"
    break;

  case 79:
#line 616 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3575 "bison_parser.cpp"
    break;

  case 80:
#line 622 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3586 "bison_parser.cpp"
    break;

  case 81:
#line 628 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3596 "bison_parser.cpp"
    break;

  case 82:
#line 633 "bison_parser.y"
                                                    {
    			(yyval.drop_stmt) = new DropStatement(kDropIndex);
    			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
    			(yyval.drop_stmt)->index_name = (yyvsp[-2].sval);
    		}
#line 3606 "bison_parser.cpp"
    break;

  case 83:
#line 641 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3612 "bison_parser.cpp"
    break;

  case 84:
#line 642 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3618 "bison_parser.cpp"
    break;

  case 85:
#line 651 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3629 "bison_parser.cpp"
    break;

  case 86:
#line 660 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3639 "bison_parser.cpp"
    break;

  case 87:
#line 673 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3651 "bison_parser.cpp"
    break;

  case 88:
#line 680 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3663 "bison_parser.cpp"
    break;

  case 89:
#line 691 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3669 "bison_parser.cpp"
    break;

  case 90:
#line 692 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3675 "bison_parser.cpp"
    break;

  case 91:
#line 702 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3686 "bison_parser.cpp"
    break;

  case 92:
#line 711 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3692 "bison_parser.cpp"
    break;

  case 93:
#line 712 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3698 "bison_parser.cpp"
    break;

  case 94:
#line 716 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3708 "bison_parser.cpp"
    break;

  case 95:
#line 728 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3717 "bison_parser.cpp"
    break;

  case 96:
#line 732 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3726 "bison_parser.cpp"
    break;

  case 97:
#line 736 "bison_parser.y"
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
#line 3742 "bison_parser.cpp"
    break;

  case 100:
#line 754 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3748 "bison_parser.cpp"
    break;

  case 101:
#line 755 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3761 "bison_parser.cpp"
    break;

  case 102:
#line 766 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3767 "bison_parser.cpp"
    break;

  case 103:
#line 767 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3773 "bison_parser.cpp"
    break;

  case 104:
#line 771 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3788 "bison_parser.cpp"
    break;

  case 105:
#line 781 "bison_parser.y"
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
#line 3803 "bison_parser.cpp"
    break;

  case 106:
#line 794 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3812 "bison_parser.cpp"
    break;

  case 107:
#line 801 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3821 "bison_parser.cpp"
    break;

  case 108:
#line 805 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3830 "bison_parser.cpp"
    break;

  case 109:
#line 809 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3839 "bison_parser.cpp"
    break;

  case 110:
#line 816 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3847 "bison_parser.cpp"
    break;

  case 111:
#line 819 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3855 "bison_parser.cpp"
    break;

  case 112:
#line 825 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3869 "bison_parser.cpp"
    break;

  case 113:
#line 837 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3875 "bison_parser.cpp"
    break;

  case 114:
#line 838 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3881 "bison_parser.cpp"
    break;

  case 116:
#line 846 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3887 "bison_parser.cpp"
    break;

  case 117:
#line 847 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3893 "bison_parser.cpp"
    break;

  case 118:
#line 851 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3899 "bison_parser.cpp"
    break;

  case 119:
#line 856 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3905 "bison_parser.cpp"
    break;

  case 120:
#line 857 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3911 "bison_parser.cpp"
    break;

  case 121:
#line 861 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3921 "bison_parser.cpp"
    break;

  case 122:
#line 866 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3927 "bison_parser.cpp"
    break;

  case 123:
#line 870 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3933 "bison_parser.cpp"
    break;

  case 124:
#line 871 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3939 "bison_parser.cpp"
    break;

  case 125:
#line 875 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3945 "bison_parser.cpp"
    break;

  case 126:
#line 876 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3951 "bison_parser.cpp"
    break;

  case 127:
#line 880 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3957 "bison_parser.cpp"
    break;

  case 128:
#line 881 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3963 "bison_parser.cpp"
    break;

  case 129:
#line 885 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3969 "bison_parser.cpp"
    break;

  case 130:
#line 889 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3975 "bison_parser.cpp"
    break;

  case 131:
#line 890 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3981 "bison_parser.cpp"
    break;

  case 132:
#line 891 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3987 "bison_parser.cpp"
    break;

  case 133:
#line 897 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3993 "bison_parser.cpp"
    break;

  case 134:
#line 898 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3999 "bison_parser.cpp"
    break;

  case 135:
#line 902 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4005 "bison_parser.cpp"
    break;

  case 136:
#line 903 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4011 "bison_parser.cpp"
    break;

  case 137:
#line 904 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4017 "bison_parser.cpp"
    break;

  case 138:
#line 905 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4023 "bison_parser.cpp"
    break;

  case 139:
#line 906 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4029 "bison_parser.cpp"
    break;

  case 140:
#line 907 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4035 "bison_parser.cpp"
    break;

  case 141:
#line 914 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4041 "bison_parser.cpp"
    break;

  case 142:
#line 915 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4047 "bison_parser.cpp"
    break;

  case 143:
#line 919 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4053 "bison_parser.cpp"
    break;

  case 144:
#line 920 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4059 "bison_parser.cpp"
    break;

  case 145:
#line 924 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4065 "bison_parser.cpp"
    break;

  case 146:
#line 925 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4071 "bison_parser.cpp"
    break;

  case 147:
#line 929 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4083 "bison_parser.cpp"
    break;

  case 153:
#line 947 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4089 "bison_parser.cpp"
    break;

  case 163:
#line 957 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4095 "bison_parser.cpp"
    break;

  case 166:
#line 966 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4101 "bison_parser.cpp"
    break;

  case 167:
#line 967 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4107 "bison_parser.cpp"
    break;

  case 168:
#line 968 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4113 "bison_parser.cpp"
    break;

  case 169:
#line 969 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4119 "bison_parser.cpp"
    break;

  case 170:
#line 970 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4125 "bison_parser.cpp"
    break;

  case 172:
#line 975 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4131 "bison_parser.cpp"
    break;

  case 173:
#line 976 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4137 "bison_parser.cpp"
    break;

  case 174:
#line 977 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4143 "bison_parser.cpp"
    break;

  case 175:
#line 978 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4149 "bison_parser.cpp"
    break;

  case 176:
#line 979 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4155 "bison_parser.cpp"
    break;

  case 177:
#line 980 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4161 "bison_parser.cpp"
    break;

  case 178:
#line 981 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4167 "bison_parser.cpp"
    break;

  case 179:
#line 982 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4173 "bison_parser.cpp"
    break;

  case 180:
#line 983 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4179 "bison_parser.cpp"
    break;

  case 181:
#line 984 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4185 "bison_parser.cpp"
    break;

  case 182:
#line 988 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4191 "bison_parser.cpp"
    break;

  case 183:
#line 989 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4197 "bison_parser.cpp"
    break;

  case 184:
#line 993 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4203 "bison_parser.cpp"
    break;

  case 185:
#line 994 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4209 "bison_parser.cpp"
    break;

  case 186:
#line 995 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4215 "bison_parser.cpp"
    break;

  case 187:
#line 996 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4221 "bison_parser.cpp"
    break;

  case 188:
#line 1002 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4227 "bison_parser.cpp"
    break;

  case 189:
#line 1003 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4233 "bison_parser.cpp"
    break;

  case 190:
#line 1004 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4239 "bison_parser.cpp"
    break;

  case 191:
#line 1005 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4245 "bison_parser.cpp"
    break;

  case 192:
#line 1009 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4251 "bison_parser.cpp"
    break;

  case 193:
#line 1010 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4257 "bison_parser.cpp"
    break;

  case 194:
#line 1014 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4263 "bison_parser.cpp"
    break;

  case 195:
#line 1015 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4269 "bison_parser.cpp"
    break;

  case 196:
#line 1019 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4275 "bison_parser.cpp"
    break;

  case 197:
#line 1020 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4281 "bison_parser.cpp"
    break;

  case 198:
#line 1021 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4287 "bison_parser.cpp"
    break;

  case 199:
#line 1022 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4293 "bison_parser.cpp"
    break;

  case 200:
#line 1023 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4299 "bison_parser.cpp"
    break;

  case 201:
#line 1024 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4305 "bison_parser.cpp"
    break;

  case 202:
#line 1025 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4311 "bison_parser.cpp"
    break;

  case 203:
#line 1029 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4317 "bison_parser.cpp"
    break;

  case 204:
#line 1030 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4323 "bison_parser.cpp"
    break;

  case 205:
#line 1034 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4329 "bison_parser.cpp"
    break;

  case 206:
#line 1038 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4335 "bison_parser.cpp"
    break;

  case 207:
#line 1042 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4341 "bison_parser.cpp"
    break;

  case 208:
#line 1043 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4347 "bison_parser.cpp"
    break;

  case 209:
#line 1044 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4353 "bison_parser.cpp"
    break;

  case 210:
#line 1045 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4359 "bison_parser.cpp"
    break;

  case 211:
#line 1046 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4365 "bison_parser.cpp"
    break;

  case 212:
#line 1047 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4371 "bison_parser.cpp"
    break;

  case 213:
#line 1051 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4377 "bison_parser.cpp"
    break;

  case 214:
#line 1055 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4383 "bison_parser.cpp"
    break;

  case 215:
#line 1059 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4389 "bison_parser.cpp"
    break;

  case 216:
#line 1063 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4395 "bison_parser.cpp"
    break;

  case 217:
#line 1064 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4401 "bison_parser.cpp"
    break;

  case 218:
#line 1065 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4407 "bison_parser.cpp"
    break;

  case 219:
#line 1066 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4413 "bison_parser.cpp"
    break;

  case 225:
#line 1078 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4419 "bison_parser.cpp"
    break;

  case 226:
#line 1082 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4425 "bison_parser.cpp"
    break;

  case 227:
#line 1083 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4431 "bison_parser.cpp"
    break;

  case 228:
#line 1087 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4437 "bison_parser.cpp"
    break;

  case 230:
#line 1092 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4443 "bison_parser.cpp"
    break;

  case 231:
#line 1096 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4449 "bison_parser.cpp"
    break;

  case 232:
#line 1100 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4459 "bison_parser.cpp"
    break;

  case 234:
#line 1113 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4470 "bison_parser.cpp"
    break;

  case 238:
#line 1129 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4481 "bison_parser.cpp"
    break;

  case 239:
#line 1138 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4487 "bison_parser.cpp"
    break;

  case 240:
#line 1139 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4493 "bison_parser.cpp"
    break;

  case 241:
#line 1144 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4505 "bison_parser.cpp"
    break;

  case 242:
#line 1155 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4515 "bison_parser.cpp"
    break;

  case 243:
#line 1164 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4521 "bison_parser.cpp"
    break;

  case 244:
#line 1165 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4527 "bison_parser.cpp"
    break;

  case 245:
#line 1169 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4533 "bison_parser.cpp"
    break;

  case 246:
#line 1170 "bison_parser.y"
                                                { (yyval.sval) = nullptr;}
#line 4539 "bison_parser.cpp"
    break;

  case 247:
#line 1174 "bison_parser.y"
                                                { (yyval.sval) = (yyvsp[0].sval);}
#line 4545 "bison_parser.cpp"
    break;

  case 249:
#line 1180 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4551 "bison_parser.cpp"
    break;

  case 251:
#line 1186 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4557 "bison_parser.cpp"
    break;

  case 252:
#line 1191 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4563 "bison_parser.cpp"
    break;

  case 253:
#line 1192 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4569 "bison_parser.cpp"
    break;

  case 255:
#line 1198 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4575 "bison_parser.cpp"
    break;

  case 257:
#line 1208 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4581 "bison_parser.cpp"
    break;

  case 258:
#line 1212 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4587 "bison_parser.cpp"
    break;

  case 259:
#line 1216 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4596 "bison_parser.cpp"
    break;

  case 260:
#line 1220 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4605 "bison_parser.cpp"
    break;

  case 261:
#line 1227 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4615 "bison_parser.cpp"
    break;

  case 262:
#line 1241 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4627 "bison_parser.cpp"
    break;

  case 263:
#line 1249 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4640 "bison_parser.cpp"
    break;

  case 264:
#line 1259 "bison_parser.y"
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
#line 4660 "bison_parser.cpp"
    break;

  case 265:
#line 1277 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4666 "bison_parser.cpp"
    break;

  case 266:
#line 1278 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4672 "bison_parser.cpp"
    break;

  case 267:
#line 1279 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4678 "bison_parser.cpp"
    break;

  case 268:
#line 1280 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4684 "bison_parser.cpp"
    break;

  case 269:
#line 1281 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4690 "bison_parser.cpp"
    break;

  case 270:
#line 1282 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4696 "bison_parser.cpp"
    break;

  case 271:
#line 1283 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4702 "bison_parser.cpp"
    break;

  case 272:
#line 1284 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4708 "bison_parser.cpp"
    break;

  case 273:
#line 1285 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4714 "bison_parser.cpp"
    break;

  case 274:
#line 1286 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4720 "bison_parser.cpp"
    break;

  case 278:
#line 1306 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4726 "bison_parser.cpp"
    break;

  case 279:
#line 1307 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4732 "bison_parser.cpp"
    break;


#line 4736 "bison_parser.cpp"

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
#line 1310 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
