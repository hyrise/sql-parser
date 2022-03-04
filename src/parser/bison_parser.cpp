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
#line 2 "bison_parser.y"

  // clang-format on
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

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 107 "bison_parser.cpp"

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
#line 38 "bison_parser.y"

  // clang-format on
  // %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 182 "bison_parser.cpp"

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
    SQL_CHARACTER_VARYING = 284,
    SQL_REAL = 285,
    SQL_DECIMAL = 286,
    SQL_SMALLINT = 287,
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
    SQL_NO = 388,
    SQL_ARRAY = 389,
    SQL_CONCAT = 390,
    SQL_ILIKE = 391,
    SQL_SECOND = 392,
    SQL_MINUTE = 393,
    SQL_HOUR = 394,
    SQL_DAY = 395,
    SQL_MONTH = 396,
    SQL_YEAR = 397,
    SQL_SECONDS = 398,
    SQL_MINUTES = 399,
    SQL_HOURS = 400,
    SQL_DAYS = 401,
    SQL_MONTHS = 402,
    SQL_YEARS = 403,
    SQL_INTERVAL = 404,
    SQL_TRUE = 405,
    SQL_FALSE = 406,
    SQL_TRANSACTION = 407,
    SQL_BEGIN = 408,
    SQL_COMMIT = 409,
    SQL_ROLLBACK = 410,
    SQL_NOWAIT = 411,
    SQL_SKIP = 412,
    SQL_LOCKED = 413,
    SQL_SHARE = 414,
    SQL_EQUALS = 415,
    SQL_NOTEQUALS = 416,
    SQL_LESS = 417,
    SQL_GREATER = 418,
    SQL_LESSEQ = 419,
    SQL_GREATEREQ = 420,
    SQL_NOTNULL = 421,
    SQL_UMINUS = 422
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 98 "bison_parser.y"

  // clang-format on
  bool bval;
  char* sval;
  double fval;
  int64_t ival;
  uintmax_t uval;

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
  hsql::ExportStatement* export_stmt;
  hsql::ImportStatement* import_stmt;
  hsql::InsertStatement* insert_stmt;
  hsql::PrepareStatement* prep_stmt;
  hsql::SelectStatement* select_stmt;
  hsql::ShowStatement* show_stmt;
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;

  hsql::Alias* alias_t;
  hsql::AlterAction* alter_action_t;
  hsql::ColumnDefinition* column_t;
  hsql::ColumnType column_type_t;
  hsql::ConstraintType column_constraint_t;
  hsql::DatetimeField datetime_field;
  hsql::DropColumnAction* drop_action_t;
  hsql::Expr* expr;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WithDescription* with_description_t;
  hsql::ForLockingClause* locking_t;

  std::vector<char*>* str_vec;
  std::vector<hsql::ConstraintType>* column_constraint_vec;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;

  std::pair<int64_t, int64_t>* ival_pair;

#line 421 "bison_parser.cpp"

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   890

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  185
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  123
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  567

#define YYUNDEFTOK  2
#define YYMAXUTOK   422


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
       2,     2,     2,     2,     2,     2,     2,   174,     2,     2,
     179,   180,   172,   170,   183,   171,   181,   173,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   182,
     163,   160,   164,   184,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   177,     2,   178,   175,     2,     2,     2,     2,     2,
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
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   161,   162,   165,   166,   167,
     168,   169,   176
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   297,   297,   316,   322,   329,   333,   337,   338,   339,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     356,   357,   359,   363,   368,   372,   382,   383,   384,   386,
     386,   392,   398,   400,   404,   415,   421,   428,   443,   448,
     449,   455,   467,   468,   473,   484,   497,   505,   512,   519,
     528,   529,   531,   535,   540,   541,   543,   548,   549,   550,
     551,   552,   553,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   567,   568,   570,   571,   572,   574,   575,   577,
     581,   586,   587,   588,   589,   591,   592,   600,   606,   612,
     618,   624,   625,   632,   638,   640,   650,   657,   668,   675,
     683,   684,   691,   698,   702,   707,   717,   721,   725,   737,
     737,   739,   740,   749,   750,   752,   764,   776,   781,   785,
     789,   794,   795,   797,   807,   808,   810,   812,   813,   815,
     817,   818,   820,   825,   827,   828,   830,   831,   833,   837,
     842,   844,   845,   846,   850,   851,   853,   854,   855,   856,
     857,   858,   863,   867,   872,   873,   875,   879,   884,   892,
     892,   892,   892,   892,   894,   895,   895,   895,   895,   895,
     895,   895,   895,   896,   896,   900,   900,   902,   903,   904,
     905,   906,   908,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   919,   920,   922,   923,   924,   925,   929,
     930,   931,   932,   934,   935,   937,   938,   940,   941,   942,
     943,   944,   945,   946,   948,   949,   951,   953,   955,   956,
     957,   958,   959,   960,   962,   963,   964,   965,   966,   967,
     969,   969,   971,   973,   975,   977,   978,   979,   980,   982,
     982,   982,   982,   982,   982,   982,   984,   986,   987,   989,
     990,   992,   994,   996,  1007,  1011,  1022,  1054,  1063,  1063,
    1070,  1070,  1072,  1072,  1079,  1083,  1088,  1096,  1102,  1106,
    1111,  1112,  1114,  1114,  1116,  1116,  1118,  1119,  1121,  1121,
    1127,  1134,  1142,  1144,  1147,  1150,  1153,  1156,  1158,  1161,
    1164,  1170,  1170,  1172,  1174,  1178,  1183,  1193,  1200,  1208,
    1224,  1225,  1226,  1227,  1228,  1229,  1230,  1231,  1232,  1233,
    1235,  1241,  1241,  1244,  1248
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
  "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "SPATIAL", "VARCHAR",
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
  "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "NO",
  "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS",
  "INTERVAL", "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT",
  "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "transaction_statement", "opt_transaction_keyword",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path", "opt_file_type",
  "export_statement", "show_statement", "create_statement",
  "opt_not_exists", "table_elem_commalist", "table_elem", "column_def",
  "column_type", "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_list", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
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
  "datetime_field_plural", "duration_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "date_literal", "interval_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
  "for_locking_clause", "for_locking_clause_xs",
  "for_locking_clause_waiting_policy", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
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
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
      61,   415,   416,    60,    62,   417,   418,   419,   420,   421,
      43,    45,    42,    47,    37,    94,   422,    91,    93,    40,
      41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF (-435)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-312)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     571,    36,    73,    88,   109,    73,   110,    99,   143,    84,
      73,   161,    73,   130,   153,   227,   121,   121,   121,   284,
     105,  -435,   195,  -435,   195,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,   -25,  -435,   305,
     136,  -435,   142,   236,  -435,   205,   205,   205,    73,   331,
      73,   213,  -435,   214,    82,   214,   214,   214,    73,  -435,
     222,   168,  -435,  -435,  -435,  -435,  -435,  -435,   540,  -435,
     259,  -435,  -435,   233,   -25,    28,  -435,    29,  -435,   342,
      13,   368,   253,   389,    73,    73,   311,  -435,   303,   223,
     409,   369,    73,   411,   411,   413,    73,    73,  -435,   239,
     227,  -435,   240,   414,   405,   242,   243,  -435,  -435,  -435,
     -25,   315,   299,   -25,   312,  -435,  -435,  -435,  -435,   426,
    -435,   427,  -435,  -435,  -435,   252,   251,  -435,  -435,  -435,
    -435,   678,  -435,  -435,  -435,  -435,  -435,  -435,   390,  -435,
     306,   -18,   223,   307,  -435,   411,   434,   114,   282,   -36,
    -435,  -435,   353,   333,  -435,   333,  -435,  -435,  -435,  -435,
    -435,   442,  -435,  -435,   307,  -435,  -435,   370,  -435,  -435,
      28,  -435,  -435,   307,   370,    94,   104,  -435,   221,  -435,
      13,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,    73,   448,   341,
      39,   329,    86,   275,   276,   280,    98,   403,   283,   393,
    -435,   199,   -47,   347,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
     364,  -435,    37,   285,  -435,   307,   409,  -435,   424,  -435,
    -435,   415,  -435,  -435,   286,    51,  -435,   373,   287,  -435,
      22,   104,   -25,   288,  -435,   137,   312,  -435,   309,   350,
    -435,   133,   307,   254,  -435,  -435,  -435,   293,   381,  -435,
     772,   357,   302,   147,  -435,  -435,  -435,   341,     4,    18,
     428,   221,   307,   307,   193,    83,   310,   393,   572,   307,
     -95,   304,   -67,   307,   307,   393,  -435,   393,   -56,   313,
     103,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   414,    73,  -435,   485,
      13,   -47,  -435,   214,   331,    13,  -435,   442,    17,   311,
    -435,   307,  -435,   490,  -435,  -435,  -435,  -435,   307,  -435,
    -435,  -435,   104,  -435,   432,    17,  -435,   337,  -435,   -47,
     443,   -20,   434,   411,  -435,   319,  -435,   320,  -435,   321,
    -435,  -435,   322,  -435,  -435,  -435,  -435,   323,  -435,   151,
     324,   434,  -435,    39,  -435,  -435,   307,  -435,  -435,   325,
     419,   -66,   -71,   175,   307,   307,  -435,   428,   404,   -10,
    -435,  -435,  -435,   402,   542,   620,   393,   346,   199,  -435,
     423,   351,   620,   620,   620,   620,   594,   594,   594,   594,
     -95,   -95,   -94,   -94,   -94,   -90,   352,  -435,  -435,   159,
     526,  -435,   164,  -435,   341,  -435,    89,  -435,   348,  -435,
      25,  -435,   463,  -435,  -435,  -435,  -435,  -435,   -68,  -435,
     307,   307,   185,  -435,   527,   528,  -435,   529,   530,   532,
    -435,   420,  -435,  -435,   438,  -435,   151,  -435,   434,   186,
    -435,   196,  -435,   307,   772,   307,   307,  -435,   162,   174,
     365,  -435,   393,   620,   199,   366,   197,  -435,  -435,  -435,
    -435,  -435,   371,   450,  -435,  -435,  -435,   472,   473,   479,
     459,    17,   555,  -435,  -435,  -435,   435,  -435,  -435,   -47,
     -47,  -435,   379,   201,   383,   387,   388,  -435,  -435,  -435,
     202,  -435,  -435,   -62,   391,   -47,   212,  -435,   307,  -435,
     572,   401,   206,  -435,  -435,    25,    17,  -435,  -435,  -435,
      17,   238,   382,   307,  -435,  -435,   563,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,   -47,  -435,  -435,  -435,  -435,   144,
     434,   -26,   408,   394,   307,   207,   307,  -435,  -435,    19,
     -47,  -435,  -435,   -47,   417,   410,  -435
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     292,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     312,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   291,     0,
     268,    97,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   267,    92,     0,    92,    92,    92,     0,    42,
       0,   293,   294,    29,    26,    28,    27,     1,   292,     2,
       0,     6,     5,   145,     0,   106,   107,   137,    89,     0,
     155,     0,     0,   271,     0,     0,   131,    37,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   125,     0,     0,   119,   120,   118,
       0,   122,     0,     0,   282,   269,   246,   249,   251,     0,
     252,     0,   247,   248,   257,     0,   154,   156,   239,   240,
     241,   250,   242,   243,   244,   245,    32,    31,     0,   270,
       0,     0,   101,     0,    96,     0,     0,     0,     0,   131,
     103,    91,     0,    40,    38,    40,    90,    87,    88,   296,
     295,     0,   144,   124,     0,   114,   113,   137,   110,   109,
     111,   121,   117,     0,   137,   287,   151,   253,   256,    34,
       0,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   254,    50,     0,     0,   292,
       0,     0,   235,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   130,   159,   166,   167,   168,   161,   163,   169,
     162,   182,   170,   171,   172,   173,   165,   160,   175,   176,
       0,   313,     0,     0,    99,     0,     0,   102,     0,    93,
      94,     0,    36,    41,    24,     0,    22,   128,   126,   152,
     279,   151,     0,   136,   138,   143,   282,   283,     0,     0,
     285,   290,     0,     0,   115,   255,   157,     0,     0,    47,
       0,     0,     0,     0,    52,    54,    55,   292,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
     177,     0,     0,     0,     0,     0,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,   105,   104,    92,     0,     0,    20,     0,     0,   131,
     127,     0,   277,     0,   278,   158,   108,   112,     0,   142,
     141,   140,   151,   286,     0,     0,   289,     0,   280,   147,
     149,   146,     0,     0,    65,     0,    67,    76,    68,     0,
      63,    64,     0,    60,    61,    66,    69,    73,    57,    78,
       0,     0,    46,     0,    49,   214,     0,   236,   238,     0,
       0,     0,     0,     0,     0,     0,   201,     0,     0,     0,
     174,   164,   193,   194,     0,   189,     0,     0,     0,   180,
       0,   192,   191,   207,   208,   209,   210,   211,   212,   213,
     184,   183,   186,   185,   187,   188,     0,    35,   314,     0,
       0,    39,     0,    23,   292,   129,   258,   260,     0,   262,
     275,   261,   133,   153,   276,   139,   116,   284,   290,   288,
       0,     0,     0,    45,     0,     0,    62,     0,     0,     0,
      70,     0,    82,    83,     0,    56,    77,    79,     0,     0,
      53,     0,   205,     0,     0,     0,     0,   199,     0,     0,
       0,   232,     0,   190,     0,     0,     0,   181,   233,    98,
      95,    25,     0,     0,   308,   300,   306,   304,   307,   302,
       0,     0,     0,   274,   266,   272,     0,   123,   281,   150,
     148,    48,     0,     0,     0,     0,     0,    81,    84,    80,
       0,    86,   215,     0,     0,   203,     0,   202,     0,   206,
     234,     0,     0,   197,   195,   275,     0,   303,   305,   301,
       0,   259,   276,     0,    59,    75,     0,    71,    58,    72,
      85,   216,   217,   200,   204,   198,   196,   263,   297,   309,
       0,   135,     0,     0,     0,     0,     0,   132,    74,     0,
     310,   298,   273,   134,   235,     0,   299
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -435,  -435,  -435,   502,  -435,   559,  -435,   257,  -435,   262,
    -435,  -435,  -435,  -435,   261,   -92,   439,  -435,  -435,  -435,
     249,  -435,   216,  -435,   132,  -435,  -435,  -435,  -435,   145,
    -435,  -435,   -48,  -435,  -435,  -435,  -435,  -435,  -435,   457,
    -435,  -435,   367,  -187,   -82,  -435,    -4,   -73,   -22,  -435,
    -435,   -87,   326,  -435,  -435,  -435,  -135,  -435,  -435,    12,
    -435,   268,  -435,  -435,  -190,  -239,  -435,   -96,   269,  -143,
    -180,  -435,  -435,  -435,  -435,  -435,  -435,   328,  -435,  -435,
    -435,  -435,  -435,  -139,  -435,  -435,  -435,  -435,  -435,    49,
     -70,   -89,  -435,  -435,   -88,  -435,  -435,  -435,  -435,   264,
    -434,    87,  -435,  -435,  -435,     1,  -435,  -435,    90,   374,
    -435,   358,  -435,   178,  -435,  -435,  -435,   517,  -435,  -435,
    -435,  -435,  -317
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    71,   245,   246,    23,    64,
      24,   137,    25,    26,    88,   153,   242,    27,    28,    29,
      83,   273,   274,   275,   369,   450,   446,   455,   456,   457,
     276,    30,    92,    31,   239,   240,    32,    33,    34,   147,
      35,   149,   150,    36,   167,   168,   169,    76,   110,   111,
     172,    77,   164,   247,   329,   330,   144,   497,   557,   114,
     253,   254,   341,   104,   264,   248,   125,   126,   249,   250,
     213,   214,   215,   216,   217,   218,   219,   285,   220,   221,
     222,   223,   224,   193,   194,   195,   225,   226,   227,   228,
     229,   128,   129,   130,   131,   132,   133,   134,   135,   425,
     426,   427,   428,   429,    51,   430,   140,   493,   494,   495,
     335,   176,   261,   348,    37,    38,    61,    62,   431,   490,
     561,    69,   232
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     212,   106,   155,    41,   154,   154,    44,    95,    96,    97,
     127,    52,   269,    54,   237,   162,   163,   116,   117,   118,
      40,   377,   564,   170,   556,   332,   170,   288,   332,   290,
     255,   174,    73,    75,   441,   442,   465,   107,   107,   265,
     301,   301,   270,   293,   396,   301,   143,   293,   293,    86,
     389,    89,   293,   230,   459,   113,   154,   531,   464,    98,
     294,   336,    39,   284,   294,   294,   271,   293,   292,   294,
     105,   397,   108,   108,   234,   198,    40,   312,   313,   314,
     315,   315,   316,   316,   294,   141,   142,   316,   346,   347,
     374,    42,   321,   152,   293,   159,   549,   157,   158,   272,
     119,   202,   116,   117,   118,   112,   199,   288,   109,   109,
     266,   294,    43,   391,   483,   394,   120,   395,   541,   349,
     351,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   293,   461,   291,   381,
     382,   510,   380,   203,   204,   205,   333,   236,   252,   492,
     392,   393,   436,   294,    74,   484,   257,   331,   262,   476,
     485,   200,   121,   122,   123,   170,   486,   487,   471,   483,
     337,    73,    58,   331,   384,    93,   263,   233,   451,   251,
      45,    50,   206,   488,   375,   119,   256,  -309,   489,    46,
     378,   210,    48,   385,   432,   255,   424,   124,   267,   386,
      55,   120,   202,   116,   117,   118,   399,   379,   283,    56,
     484,   452,    59,   258,    94,   485,   473,   318,   207,    47,
     319,   486,   487,   400,   419,   553,   339,   259,   416,   422,
      60,   326,   208,   555,   327,   522,    49,   482,   488,    57,
      53,   468,   469,   489,   203,   204,   205,   121,   122,   123,
     127,   293,   340,   260,   453,   127,    73,   202,   116,   117,
     118,   443,   345,   483,   154,   278,   466,   279,   294,   209,
     210,   454,  -264,    63,   554,   420,   293,   211,   517,    65,
      66,   518,   124,   206,    67,   385,   119,    68,   293,   346,
     347,   467,   520,   294,   551,    84,    85,   499,   500,   203,
     204,   205,   120,   283,   484,   294,    70,   293,    78,   485,
     202,   116,   117,   118,   470,   486,   487,    79,   417,   207,
     513,    80,   515,   516,   294,   475,   293,   372,   543,    81,
     373,    82,   488,   208,    87,    90,  -309,   489,   206,   479,
      91,   119,   180,   294,   481,   115,    99,   180,   121,   122,
     123,   100,   203,   204,   205,   102,   103,   120,   181,   182,
     183,   184,   185,   186,   295,   501,   511,   350,   319,   319,
     209,   210,   136,   138,   207,   544,   512,   524,   211,   331,
     331,   535,   540,   124,   536,   319,   546,   562,   208,   331,
     319,   206,   139,   143,   119,   145,   202,   116,   117,   118,
     296,   521,   146,   121,   122,   123,   202,   116,   117,   118,
     120,   560,   148,   563,   151,   116,   156,   163,    74,   161,
     118,  -265,   165,   166,   173,   209,   210,   207,   171,   175,
     177,   178,   179,   211,   180,   196,   197,   231,   124,   204,
     205,   208,   235,   238,   241,   244,   112,   297,   286,   204,
     205,   268,    15,   277,   280,   281,   121,   122,   123,   282,
     289,   317,   323,   324,   320,   325,   328,   298,   343,   344,
     331,   338,   352,   353,   299,   300,   370,   206,   209,   210,
     119,   371,   301,   302,   390,    73,   211,   206,   418,   387,
     119,   124,   398,   434,   437,   439,   120,   440,   444,   445,
     447,   448,   449,   458,   396,   462,   120,   303,   304,   305,
     306,   307,   463,   287,   308,   309,   293,   310,   311,   312,
     313,   314,   315,   287,   316,   474,   477,   208,   316,   480,
     478,   491,   496,   502,   503,   504,   505,   208,   506,   507,
    -311,   508,   121,   122,   123,   519,   523,     1,   526,   527,
     528,   525,   121,   122,   123,     2,   529,   530,   532,   534,
     533,   550,     3,   537,   209,   210,     4,   538,   539,   552,
     101,   542,   211,   559,   209,   210,     5,   124,     1,     6,
       7,   545,   211,    72,   423,   421,     2,   124,   558,   460,
     566,     8,     9,     3,   243,   296,   514,     4,   279,   201,
     433,   509,    10,   322,   376,    11,   435,     5,   565,   438,
       6,     7,   383,   548,   342,   547,   498,   160,     0,     0,
       0,     0,     8,     9,   334,   296,    12,     0,     0,     0,
      13,     0,     0,    10,     0,     0,    11,     0,     0,     0,
       0,     0,   297,     0,     0,    14,     0,   296,     0,     0,
       0,    15,     0,     0,     0,     0,   472,    12,     0,     0,
       0,    13,   388,     0,     0,     0,     0,     0,     0,     0,
     300,     0,   297,   296,     0,     0,    14,   301,   302,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   388,    16,    17,    18,     0,     0,     0,     0,
     300,     0,   303,   304,   305,   306,   307,   301,   302,   308,
     309,     0,   310,   311,   312,   313,   314,   315,     0,   316,
    -312,     0,   300,     0,    16,    17,    18,     0,     0,   301,
       0,     0,   303,   304,   305,   306,   307,     0,     0,   308,
     309,     0,   310,   311,   312,   313,   314,   315,   300,   316,
       0,     0,     0,     0,     0,   301,  -312,  -312,  -312,     0,
       0,  -312,  -312,     0,   310,   311,   312,   313,   314,   315,
       0,   316,     0,     0,     0,     0,     0,     0,     0,     0,
    -312,  -312,  -312,   306,   307,     0,     0,   308,   309,     0,
     310,   311,   312,   313,   314,   315,   354,   316,     0,     0,
       0,   355,   356,   357,   358,     0,   359,     0,     0,     0,
       0,     0,     0,     0,   360,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   362,     0,   363,
     364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   365,     0,     0,     0,   366,     0,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368
};

static const yytype_int16 yycheck[] =
{
     143,    74,    94,     2,    93,    94,     5,    55,    56,    57,
      80,    10,   199,    12,   149,   103,    12,     4,     5,     6,
       3,     3,     3,   110,    50,     3,   113,   207,     3,   209,
     173,   113,    57,    37,    54,   352,   107,     9,     9,   178,
     135,   135,     3,   114,   100,   135,    82,   114,   114,    48,
     289,    50,   114,   145,   371,    77,   145,   491,   124,    58,
     131,   251,    26,   206,   131,   131,    27,   114,   211,   131,
      74,   127,    44,    44,   147,    93,     3,   172,   173,   174,
     175,   175,   177,   177,   131,    84,    85,   177,   156,   157,
     277,     3,   235,    92,   114,    99,   530,    96,    97,    60,
      87,     3,     4,     5,     6,    76,   124,   287,    80,    80,
     180,   131,     3,   180,    25,   295,   103,   297,   180,   262,
     263,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   114,   376,   211,   282,
     283,   458,   281,    45,    46,    47,   124,   183,   170,   124,
     293,   294,   342,   131,   179,    66,    62,   183,    54,   398,
      71,   179,   149,   150,   151,   252,    77,    78,   178,    25,
     252,    57,    19,   183,    91,    93,    72,    63,    27,   167,
      70,    97,    84,    94,   180,    87,   174,    98,    99,    79,
     172,   172,    93,   110,   329,   338,   179,   184,   197,   116,
      70,   103,     3,     4,     5,     6,   103,   280,   110,    79,
      66,    60,    59,   119,   132,    71,   396,   180,   120,   109,
     183,    77,    78,   120,   320,    81,    89,   133,   316,   325,
       3,   180,   134,   550,   183,   474,    93,   424,    94,   109,
      79,   384,   385,    99,    45,    46,    47,   149,   150,   151,
     320,   114,   115,   159,   103,   325,    57,     3,     4,     5,
       6,   353,   129,    25,   353,   179,    91,   181,   131,   171,
     172,   120,   183,   152,   130,   323,   114,   179,   116,    17,
      18,   107,   184,    84,     0,   110,    87,   182,   114,   156,
     157,   116,   472,   131,   533,    46,    47,   440,   441,    45,
      46,    47,   103,   110,    66,   131,   111,   114,     3,    71,
       3,     4,     5,     6,   387,    77,    78,   181,   317,   120,
     463,   179,   465,   466,   131,   398,   114,   180,   116,    93,
     183,   126,    94,   134,     3,   122,    98,    99,    84,   180,
     126,    87,   183,   131,   180,     3,   124,   183,   149,   150,
     151,   183,    45,    46,    47,    96,   123,   103,   137,   138,
     139,   140,   141,   142,    17,   180,   180,   113,   183,   183,
     171,   172,     4,   120,   120,   518,   180,   180,   179,   183,
     183,   180,   180,   184,   183,   183,   180,   180,   134,   183,
     183,    84,     3,    82,    87,    92,     3,     4,     5,     6,
      53,   474,   179,   149,   150,   151,     3,     4,     5,     6,
     103,   554,     3,   556,    45,     4,     3,    12,   179,   179,
       6,   183,   180,   180,   125,   171,   172,   120,   113,   117,
       4,     4,   180,   179,   183,    45,   130,     3,   184,    46,
      47,   134,   160,    90,   111,     3,    76,   100,    45,    46,
      47,     3,   111,   124,   179,   179,   149,   150,   151,   179,
     177,    97,    38,    48,   179,   179,    93,   120,   159,   119,
     183,   183,   179,    92,   127,   128,   119,    84,   171,   172,
      87,   179,   135,   136,   180,    57,   179,    84,     3,   179,
      87,   184,   179,     3,    62,   158,   103,    54,   179,   179,
     179,   179,   179,   179,   100,   180,   103,   160,   161,   162,
     163,   164,    93,   120,   167,   168,   114,   170,   171,   172,
     173,   174,   175,   120,   177,   179,   103,   134,   177,     3,
     178,   183,    69,     6,     6,     6,     6,   134,     6,   119,
       0,   103,   149,   150,   151,   180,   180,     7,    98,    77,
      77,   180,   149,   150,   151,    15,    77,    98,     3,   180,
     125,   179,    22,   180,   171,   172,    26,   180,   180,     6,
      68,   180,   179,   179,   171,   172,    36,   184,     7,    39,
      40,   180,   179,    24,   327,   324,    15,   184,   180,   373,
     180,    51,    52,    22,   155,    53,   464,    26,   181,   142,
     331,   456,    62,   236,   278,    65,   338,    36,   559,   345,
      39,    40,   284,   526,   256,   525,   438,   100,    -1,    -1,
      -1,    -1,    51,    52,   250,    53,    86,    -1,    -1,    -1,
      90,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,   105,    -1,    53,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,   114,    86,    -1,    -1,
      -1,    90,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,    -1,   100,    53,    -1,    -1,   105,   135,   136,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,   153,   154,   155,    -1,    -1,    -1,    -1,
     128,    -1,   160,   161,   162,   163,   164,   135,   136,   167,
     168,    -1,   170,   171,   172,   173,   174,   175,    -1,   177,
     100,    -1,   128,    -1,   153,   154,   155,    -1,    -1,   135,
      -1,    -1,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,    -1,   170,   171,   172,   173,   174,   175,   128,   177,
      -1,    -1,    -1,    -1,    -1,   135,   136,   163,   164,    -1,
      -1,   167,   168,    -1,   170,   171,   172,   173,   174,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,    -1,
     170,   171,   172,   173,   174,   175,    24,   177,    -1,    -1,
      -1,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      62,    65,    86,    90,   105,   111,   153,   154,   155,   186,
     187,   188,   189,   193,   195,   197,   198,   202,   203,   204,
     216,   218,   221,   222,   223,   225,   228,   299,   300,    26,
       3,   290,     3,     3,   290,    70,    79,   109,    93,    93,
      97,   289,   290,    79,   290,    70,    79,   109,    19,    59,
       3,   301,   302,   152,   194,   194,   194,     0,   182,   306,
     111,   190,   190,    57,   179,   231,   232,   236,     3,   181,
     179,    93,   126,   205,   205,   205,   290,     3,   199,   290,
     122,   126,   217,    93,   132,   217,   217,   217,   290,   124,
     183,   188,    96,   123,   248,   231,   232,     9,    44,    80,
     233,   234,    76,   233,   244,     3,     4,     5,     6,    87,
     103,   149,   150,   151,   184,   251,   252,   275,   276,   277,
     278,   279,   280,   281,   282,   283,     4,   196,   120,     3,
     291,   290,   290,    82,   241,    92,   179,   224,     3,   226,
     227,    45,   290,   200,   276,   200,     3,   290,   290,   231,
     302,   179,   279,    12,   237,   180,   180,   229,   230,   231,
     236,   113,   235,   125,   229,   117,   296,     4,     4,   180,
     183,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   268,   269,   270,    45,   130,    93,   124,
     179,   224,     3,    45,    46,    47,    84,   120,   134,   171,
     172,   179,   254,   255,   256,   257,   258,   259,   260,   261,
     263,   264,   265,   266,   267,   271,   272,   273,   274,   275,
     200,     3,   307,    63,   232,   160,   183,   241,    90,   219,
     220,   111,   201,   201,     3,   191,   192,   238,   250,   253,
     254,   244,   233,   245,   246,   254,   244,    62,   119,   133,
     159,   297,    54,    72,   249,   268,   275,   290,     3,   228,
       3,    27,    60,   206,   207,   208,   215,   124,   179,   181,
     179,   179,   179,   110,   254,   262,    45,   120,   255,   177,
     255,   232,   254,   114,   131,    17,    53,   100,   120,   127,
     128,   135,   136,   160,   161,   162,   163,   164,   167,   168,
     170,   171,   172,   173,   174,   175,   177,    97,   180,   183,
     179,   254,   227,    38,    48,   179,   180,   183,    93,   239,
     240,   183,     3,   124,   294,   295,   249,   229,   183,    89,
     115,   247,   296,   159,   119,   129,   156,   157,   298,   254,
     113,   254,   179,    92,    24,    29,    30,    31,    32,    34,
      42,    68,    85,    87,    88,   102,   106,   108,   118,   209,
     119,   179,   180,   183,   228,   180,   237,     3,   172,   232,
     268,   254,   254,   262,    91,   110,   116,   179,   120,   250,
     180,   180,   254,   254,   255,   255,   100,   127,   179,   103,
     120,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   279,   290,     3,   252,
     217,   199,   252,   192,   179,   284,   285,   286,   287,   288,
     290,   303,   241,   253,     3,   246,   249,    62,   284,   158,
      54,    54,   307,   200,   179,   179,   211,   179,   179,   179,
     210,    27,    60,   103,   120,   212,   213,   214,   179,   307,
     207,   250,   180,    93,   124,   107,    91,   116,   254,   254,
     232,   178,   114,   255,   179,   232,   250,   103,   178,   180,
       3,   180,   228,    25,    66,    71,    77,    78,    94,    99,
     304,   183,   124,   292,   293,   294,    69,   242,   298,   254,
     254,   180,     6,     6,     6,     6,     6,   119,   103,   214,
     307,   180,   180,   254,   209,   254,   254,   116,   107,   180,
     255,   232,   250,   180,   180,   180,    98,    77,    77,    77,
      98,   285,     3,   125,   180,   180,   183,   180,   180,   180,
     180,   180,   180,   116,   254,   180,   180,   293,   286,   285,
     179,   250,     6,    81,   130,   307,    50,   243,   180,   179,
     254,   305,   180,   254,     3,   274,   180
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   185,   186,   187,   187,   188,   188,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   193,   193,   194,
     194,   195,   196,   197,   197,   198,   198,   199,   200,   201,
     201,   202,   203,   203,   203,   204,   204,   204,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   210,   210,   211,   211,   211,   212,   212,   213,
     213,   214,   214,   214,   214,   215,   215,   216,   216,   216,
     216,   217,   217,   218,   219,   220,   221,   222,   223,   223,
     224,   224,   225,   226,   226,   227,   228,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   234,   234,
     234,   235,   235,   236,   237,   237,   238,   239,   239,   240,
     241,   241,   242,   242,   243,   243,   244,   244,   245,   245,
     246,   247,   247,   247,   248,   248,   249,   249,   249,   249,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   254,
     254,   254,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   256,   256,   257,   257,   257,
     257,   257,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   259,   259,   260,   260,   260,   260,   261,
     261,   261,   261,   262,   262,   263,   263,   264,   264,   264,
     264,   264,   264,   264,   265,   265,   266,   267,   268,   268,
     268,   268,   268,   268,   269,   269,   269,   269,   269,   269,
     270,   270,   271,   272,   273,   274,   274,   274,   274,   275,
     275,   275,   275,   275,   275,   275,   276,   277,   277,   278,
     278,   279,   280,   281,   282,   282,   282,   283,   284,   284,
     285,   285,   286,   286,   287,   287,   288,   289,   290,   290,
     291,   291,   292,   292,   293,   293,   294,   294,   295,   295,
     296,   296,   296,   297,   297,   297,   297,   297,   298,   298,
     298,   299,   299,   300,   301,   301,   302,   303,   303,   303,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     305,   306,   306,   307,   307
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     4,     4,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     0,     5,     3,     0,     1,     0,     1,
       2,     2,     1,     1,     2,     5,     4,     4,     4,     3,
       4,     2,     0,     5,     1,     4,     4,     2,     8,     5,
       3,     0,     5,     1,     3,     3,     2,     2,     6,     1,
       1,     1,     3,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     0,     7,     1,     0,     1,     1,     0,     2,
       2,     0,     4,     0,     2,     0,     3,     0,     1,     3,
       2,     1,     1,     0,     2,     0,     2,     2,     4,     2,
       4,     0,     1,     3,     1,     0,     1,     3,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     2,     2,
       3,     4,     1,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     3,     3,     5,     6,     5,     6,     4,
       6,     3,     5,     4,     5,     4,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     6,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     2,     1,     1,     3,
       1,     1,     1,     4,     1,     3,     2,     1,     1,     3,
       1,     0,     1,     5,     1,     0,     2,     1,     1,     0,
       3,     5,     0,     1,     3,     1,     2,     0,     2,     1,
       0,     1,     0,     2,     1,     3,     3,     4,     6,     8,
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
#line 164 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 1966 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 164 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 1972 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 162 "bison_parser.y"
                { }
#line 1978 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 162 "bison_parser.y"
                { }
#line 1984 "bison_parser.cpp"
        break;

    case 187: /* statement_list  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 1997 "bison_parser.cpp"
        break;

    case 188: /* statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2003 "bison_parser.cpp"
        break;

    case 189: /* preparable_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2009 "bison_parser.cpp"
        break;

    case 190: /* opt_hints  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2022 "bison_parser.cpp"
        break;

    case 191: /* hint_list  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2035 "bison_parser.cpp"
        break;

    case 192: /* hint  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2041 "bison_parser.cpp"
        break;

    case 193: /* transaction_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2047 "bison_parser.cpp"
        break;

    case 195: /* prepare_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2053 "bison_parser.cpp"
        break;

    case 196: /* prepare_target_query  */
#line 164 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2059 "bison_parser.cpp"
        break;

    case 197: /* execute_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2065 "bison_parser.cpp"
        break;

    case 198: /* import_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2071 "bison_parser.cpp"
        break;

    case 199: /* file_type  */
#line 162 "bison_parser.y"
                { }
#line 2077 "bison_parser.cpp"
        break;

    case 200: /* file_path  */
#line 164 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2083 "bison_parser.cpp"
        break;

    case 201: /* opt_file_type  */
#line 162 "bison_parser.y"
                { }
#line 2089 "bison_parser.cpp"
        break;

    case 202: /* export_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2095 "bison_parser.cpp"
        break;

    case 203: /* show_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2101 "bison_parser.cpp"
        break;

    case 204: /* create_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2107 "bison_parser.cpp"
        break;

    case 205: /* opt_not_exists  */
#line 162 "bison_parser.y"
                { }
#line 2113 "bison_parser.cpp"
        break;

    case 206: /* table_elem_commalist  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2126 "bison_parser.cpp"
        break;

    case 207: /* table_elem  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2132 "bison_parser.cpp"
        break;

    case 208: /* column_def  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2138 "bison_parser.cpp"
        break;

    case 209: /* column_type  */
#line 162 "bison_parser.y"
                { }
#line 2144 "bison_parser.cpp"
        break;

    case 210: /* opt_time_precision  */
#line 162 "bison_parser.y"
                { }
#line 2150 "bison_parser.cpp"
        break;

    case 211: /* opt_decimal_specification  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2156 "bison_parser.cpp"
        break;

    case 212: /* opt_column_constraints  */
#line 162 "bison_parser.y"
                { }
#line 2162 "bison_parser.cpp"
        break;

    case 213: /* column_constraint_list  */
#line 162 "bison_parser.y"
                { }
#line 2168 "bison_parser.cpp"
        break;

    case 214: /* column_constraint  */
#line 162 "bison_parser.y"
                { }
#line 2174 "bison_parser.cpp"
        break;

    case 215: /* table_constraint  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2180 "bison_parser.cpp"
        break;

    case 216: /* drop_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2186 "bison_parser.cpp"
        break;

    case 217: /* opt_exists  */
#line 162 "bison_parser.y"
                { }
#line 2192 "bison_parser.cpp"
        break;

    case 218: /* alter_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2198 "bison_parser.cpp"
        break;

    case 219: /* alter_action  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2204 "bison_parser.cpp"
        break;

    case 220: /* drop_action  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2210 "bison_parser.cpp"
        break;

    case 221: /* delete_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2216 "bison_parser.cpp"
        break;

    case 222: /* truncate_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2222 "bison_parser.cpp"
        break;

    case 223: /* insert_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2228 "bison_parser.cpp"
        break;

    case 224: /* opt_column_list  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2241 "bison_parser.cpp"
        break;

    case 225: /* update_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2247 "bison_parser.cpp"
        break;

    case 226: /* update_clause_commalist  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2260 "bison_parser.cpp"
        break;

    case 227: /* update_clause  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2266 "bison_parser.cpp"
        break;

    case 228: /* select_statement  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2272 "bison_parser.cpp"
        break;

    case 229: /* select_within_set_operation  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2278 "bison_parser.cpp"
        break;

    case 230: /* select_within_set_operation_no_parentheses  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2284 "bison_parser.cpp"
        break;

    case 231: /* select_with_paren  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2290 "bison_parser.cpp"
        break;

    case 232: /* select_no_paren  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2296 "bison_parser.cpp"
        break;

    case 233: /* set_operator  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2302 "bison_parser.cpp"
        break;

    case 234: /* set_type  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2308 "bison_parser.cpp"
        break;

    case 235: /* opt_all  */
#line 162 "bison_parser.y"
                { }
#line 2314 "bison_parser.cpp"
        break;

    case 236: /* select_clause  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2320 "bison_parser.cpp"
        break;

    case 237: /* opt_distinct  */
#line 162 "bison_parser.y"
                { }
#line 2326 "bison_parser.cpp"
        break;

    case 238: /* select_list  */
#line 165 "bison_parser.y"
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

    case 239: /* opt_from_clause  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2345 "bison_parser.cpp"
        break;

    case 240: /* from_clause  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2351 "bison_parser.cpp"
        break;

    case 241: /* opt_where  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2357 "bison_parser.cpp"
        break;

    case 242: /* opt_group  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2363 "bison_parser.cpp"
        break;

    case 243: /* opt_having  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2369 "bison_parser.cpp"
        break;

    case 244: /* opt_order  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2382 "bison_parser.cpp"
        break;

    case 245: /* order_list  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2395 "bison_parser.cpp"
        break;

    case 246: /* order_desc  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2401 "bison_parser.cpp"
        break;

    case 247: /* opt_order_type  */
#line 162 "bison_parser.y"
                { }
#line 2407 "bison_parser.cpp"
        break;

    case 248: /* opt_top  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2413 "bison_parser.cpp"
        break;

    case 249: /* opt_limit  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2419 "bison_parser.cpp"
        break;

    case 250: /* expr_list  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2432 "bison_parser.cpp"
        break;

    case 251: /* opt_literal_list  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2445 "bison_parser.cpp"
        break;

    case 252: /* literal_list  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2458 "bison_parser.cpp"
        break;

    case 253: /* expr_alias  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2464 "bison_parser.cpp"
        break;

    case 254: /* expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2470 "bison_parser.cpp"
        break;

    case 255: /* operand  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2476 "bison_parser.cpp"
        break;

    case 256: /* scalar_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2482 "bison_parser.cpp"
        break;

    case 257: /* unary_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2488 "bison_parser.cpp"
        break;

    case 258: /* binary_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2494 "bison_parser.cpp"
        break;

    case 259: /* logic_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2500 "bison_parser.cpp"
        break;

    case 260: /* in_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2506 "bison_parser.cpp"
        break;

    case 261: /* case_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2512 "bison_parser.cpp"
        break;

    case 262: /* case_list  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2518 "bison_parser.cpp"
        break;

    case 263: /* exists_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2524 "bison_parser.cpp"
        break;

    case 264: /* comp_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2530 "bison_parser.cpp"
        break;

    case 265: /* function_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2536 "bison_parser.cpp"
        break;

    case 266: /* extract_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2542 "bison_parser.cpp"
        break;

    case 267: /* cast_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2548 "bison_parser.cpp"
        break;

    case 268: /* datetime_field  */
#line 162 "bison_parser.y"
                { }
#line 2554 "bison_parser.cpp"
        break;

    case 269: /* datetime_field_plural  */
#line 162 "bison_parser.y"
                { }
#line 2560 "bison_parser.cpp"
        break;

    case 270: /* duration_field  */
#line 162 "bison_parser.y"
                { }
#line 2566 "bison_parser.cpp"
        break;

    case 271: /* array_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2572 "bison_parser.cpp"
        break;

    case 272: /* array_index  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2578 "bison_parser.cpp"
        break;

    case 273: /* between_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2584 "bison_parser.cpp"
        break;

    case 274: /* column_name  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2590 "bison_parser.cpp"
        break;

    case 275: /* literal  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2596 "bison_parser.cpp"
        break;

    case 276: /* string_literal  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2602 "bison_parser.cpp"
        break;

    case 277: /* bool_literal  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2608 "bison_parser.cpp"
        break;

    case 278: /* num_literal  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2614 "bison_parser.cpp"
        break;

    case 279: /* int_literal  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2620 "bison_parser.cpp"
        break;

    case 280: /* null_literal  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2626 "bison_parser.cpp"
        break;

    case 281: /* date_literal  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2632 "bison_parser.cpp"
        break;

    case 282: /* interval_literal  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2638 "bison_parser.cpp"
        break;

    case 283: /* param_expr  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2644 "bison_parser.cpp"
        break;

    case 284: /* table_ref  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2650 "bison_parser.cpp"
        break;

    case 285: /* table_ref_atomic  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2656 "bison_parser.cpp"
        break;

    case 286: /* nonjoin_table_ref_atomic  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2662 "bison_parser.cpp"
        break;

    case 287: /* table_ref_commalist  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2675 "bison_parser.cpp"
        break;

    case 288: /* table_ref_name  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2681 "bison_parser.cpp"
        break;

    case 289: /* table_ref_name_no_alias  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2687 "bison_parser.cpp"
        break;

    case 290: /* table_name  */
#line 163 "bison_parser.y"
                { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2693 "bison_parser.cpp"
        break;

    case 291: /* opt_index_name  */
#line 164 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2699 "bison_parser.cpp"
        break;

    case 292: /* table_alias  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2705 "bison_parser.cpp"
        break;

    case 293: /* opt_table_alias  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2711 "bison_parser.cpp"
        break;

    case 294: /* alias  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2717 "bison_parser.cpp"
        break;

    case 295: /* opt_alias  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2723 "bison_parser.cpp"
        break;

    case 296: /* for_locking_clause  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2729 "bison_parser.cpp"
        break;

    case 297: /* for_locking_clause_xs  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2735 "bison_parser.cpp"
        break;

    case 298: /* for_locking_clause_waiting_policy  */
#line 162 "bison_parser.y"
                { }
#line 2741 "bison_parser.cpp"
        break;

    case 299: /* opt_with_clause  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2747 "bison_parser.cpp"
        break;

    case 300: /* with_clause  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2753 "bison_parser.cpp"
        break;

    case 301: /* with_description_list  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2759 "bison_parser.cpp"
        break;

    case 302: /* with_description  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2765 "bison_parser.cpp"
        break;

    case 303: /* join_clause  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2771 "bison_parser.cpp"
        break;

    case 304: /* opt_join_type  */
#line 162 "bison_parser.y"
                { }
#line 2777 "bison_parser.cpp"
        break;

    case 305: /* join_condition  */
#line 173 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2783 "bison_parser.cpp"
        break;

    case 307: /* ident_commalist  */
#line 165 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2796 "bison_parser.cpp"
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
#line 77 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 2914 "bison_parser.cpp"

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
#line 297 "bison_parser.y"
                                     {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param != nullptr) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3129 "bison_parser.cpp"
    break;

  case 3:
#line 316 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3140 "bison_parser.cpp"
    break;

  case 4:
#line 322 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3151 "bison_parser.cpp"
    break;

  case 5:
#line 329 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3160 "bison_parser.cpp"
    break;

  case 6:
#line 333 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3169 "bison_parser.cpp"
    break;

  case 7:
#line 337 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3175 "bison_parser.cpp"
    break;

  case 8:
#line 338 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3181 "bison_parser.cpp"
    break;

  case 9:
#line 339 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3187 "bison_parser.cpp"
    break;

  case 10:
#line 341 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3193 "bison_parser.cpp"
    break;

  case 11:
#line 342 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3199 "bison_parser.cpp"
    break;

  case 12:
#line 343 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3205 "bison_parser.cpp"
    break;

  case 13:
#line 344 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3211 "bison_parser.cpp"
    break;

  case 14:
#line 345 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3217 "bison_parser.cpp"
    break;

  case 15:
#line 346 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3223 "bison_parser.cpp"
    break;

  case 16:
#line 347 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3229 "bison_parser.cpp"
    break;

  case 17:
#line 348 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3235 "bison_parser.cpp"
    break;

  case 18:
#line 349 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3241 "bison_parser.cpp"
    break;

  case 19:
#line 350 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3247 "bison_parser.cpp"
    break;

  case 20:
#line 356 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3253 "bison_parser.cpp"
    break;

  case 21:
#line 357 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3259 "bison_parser.cpp"
    break;

  case 22:
#line 359 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3268 "bison_parser.cpp"
    break;

  case 23:
#line 363 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3277 "bison_parser.cpp"
    break;

  case 24:
#line 368 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3286 "bison_parser.cpp"
    break;

  case 25:
#line 372 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3296 "bison_parser.cpp"
    break;

  case 26:
#line 382 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3302 "bison_parser.cpp"
    break;

  case 27:
#line 383 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3308 "bison_parser.cpp"
    break;

  case 28:
#line 384 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3314 "bison_parser.cpp"
    break;

  case 31:
#line 392 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3324 "bison_parser.cpp"
    break;

  case 33:
#line 400 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3333 "bison_parser.cpp"
    break;

  case 34:
#line 404 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3343 "bison_parser.cpp"
    break;

  case 35:
#line 415 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3354 "bison_parser.cpp"
    break;

  case 36:
#line 421 "bison_parser.y"
                                               {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3365 "bison_parser.cpp"
    break;

  case 37:
#line 428 "bison_parser.y"
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
#line 3384 "bison_parser.cpp"
    break;

  case 38:
#line 443 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3393 "bison_parser.cpp"
    break;

  case 39:
#line 448 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3399 "bison_parser.cpp"
    break;

  case 40:
#line 449 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3405 "bison_parser.cpp"
    break;

  case 41:
#line 455 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3416 "bison_parser.cpp"
    break;

  case 42:
#line 467 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3422 "bison_parser.cpp"
    break;

  case 43:
#line 468 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3432 "bison_parser.cpp"
    break;

  case 44:
#line 473 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3442 "bison_parser.cpp"
    break;

  case 45:
#line 484 "bison_parser.y"
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
#line 3460 "bison_parser.cpp"
    break;

  case 46:
#line 497 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
}
#line 3473 "bison_parser.cpp"
    break;

  case 47:
#line 505 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3485 "bison_parser.cpp"
    break;

  case 48:
#line 512 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3497 "bison_parser.cpp"
    break;

  case 49:
#line 519 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3510 "bison_parser.cpp"
    break;

  case 50:
#line 528 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3516 "bison_parser.cpp"
    break;

  case 51:
#line 529 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3522 "bison_parser.cpp"
    break;

  case 52:
#line 531 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3531 "bison_parser.cpp"
    break;

  case 53:
#line 535 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3540 "bison_parser.cpp"
    break;

  case 54:
#line 540 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3546 "bison_parser.cpp"
    break;

  case 55:
#line 541 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3552 "bison_parser.cpp"
    break;

  case 56:
#line 543 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
  (yyval.column_t)->setNullableExplicit();
}
#line 3561 "bison_parser.cpp"
    break;

  case 57:
#line 548 "bison_parser.y"
                  { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3567 "bison_parser.cpp"
    break;

  case 58:
#line 549 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3573 "bison_parser.cpp"
    break;

  case 59:
#line 550 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3579 "bison_parser.cpp"
    break;

  case 60:
#line 551 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3585 "bison_parser.cpp"
    break;

  case 61:
#line 552 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3591 "bison_parser.cpp"
    break;

  case 62:
#line 553 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3600 "bison_parser.cpp"
    break;

  case 63:
#line 557 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3606 "bison_parser.cpp"
    break;

  case 64:
#line 558 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3612 "bison_parser.cpp"
    break;

  case 65:
#line 559 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3618 "bison_parser.cpp"
    break;

  case 66:
#line 560 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3624 "bison_parser.cpp"
    break;

  case 67:
#line 561 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3630 "bison_parser.cpp"
    break;

  case 68:
#line 562 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3636 "bison_parser.cpp"
    break;

  case 69:
#line 563 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3642 "bison_parser.cpp"
    break;

  case 70:
#line 564 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3648 "bison_parser.cpp"
    break;

  case 71:
#line 565 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3654 "bison_parser.cpp"
    break;

  case 72:
#line 567 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3660 "bison_parser.cpp"
    break;

  case 73:
#line 568 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3666 "bison_parser.cpp"
    break;

  case 74:
#line 570 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3672 "bison_parser.cpp"
    break;

  case 75:
#line 571 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3678 "bison_parser.cpp"
    break;

  case 76:
#line 572 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3684 "bison_parser.cpp"
    break;

  case 77:
#line 574 "bison_parser.y"
                                                { (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec); }
#line 3690 "bison_parser.cpp"
    break;

  case 78:
#line 575 "bison_parser.y"
              { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3696 "bison_parser.cpp"
    break;

  case 79:
#line 577 "bison_parser.y"
                                           {
  (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
  (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
}
#line 3705 "bison_parser.cpp"
    break;

  case 80:
#line 581 "bison_parser.y"
                                           {
  (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec);
}
#line 3714 "bison_parser.cpp"
    break;

  case 81:
#line 586 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3720 "bison_parser.cpp"
    break;

  case 82:
#line 587 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3726 "bison_parser.cpp"
    break;

  case 83:
#line 588 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3732 "bison_parser.cpp"
    break;

  case 84:
#line 589 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3738 "bison_parser.cpp"
    break;

  case 85:
#line 591 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3744 "bison_parser.cpp"
    break;

  case 86:
#line 592 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3750 "bison_parser.cpp"
    break;

  case 87:
#line 600 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3761 "bison_parser.cpp"
    break;

  case 88:
#line 606 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3772 "bison_parser.cpp"
    break;

  case 89:
#line 612 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3782 "bison_parser.cpp"
    break;

  case 90:
#line 618 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3792 "bison_parser.cpp"
    break;

  case 91:
#line 624 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3798 "bison_parser.cpp"
    break;

  case 92:
#line 625 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3804 "bison_parser.cpp"
    break;

  case 93:
#line 632 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3814 "bison_parser.cpp"
    break;

  case 94:
#line 638 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3820 "bison_parser.cpp"
    break;

  case 95:
#line 640 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3829 "bison_parser.cpp"
    break;

  case 96:
#line 650 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3840 "bison_parser.cpp"
    break;

  case 97:
#line 657 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3850 "bison_parser.cpp"
    break;

  case 98:
#line 668 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 3862 "bison_parser.cpp"
    break;

  case 99:
#line 675 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3874 "bison_parser.cpp"
    break;

  case 100:
#line 683 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3880 "bison_parser.cpp"
    break;

  case 101:
#line 684 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 3886 "bison_parser.cpp"
    break;

  case 102:
#line 691 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 3897 "bison_parser.cpp"
    break;

  case 103:
#line 698 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 3906 "bison_parser.cpp"
    break;

  case 104:
#line 702 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 3915 "bison_parser.cpp"
    break;

  case 105:
#line 707 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 3925 "bison_parser.cpp"
    break;

  case 106:
#line 717 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 3934 "bison_parser.cpp"
    break;

  case 107:
#line 721 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 3943 "bison_parser.cpp"
    break;

  case 108:
#line 725 "bison_parser.y"
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
#line 3959 "bison_parser.cpp"
    break;

  case 111:
#line 739 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3965 "bison_parser.cpp"
    break;

  case 112:
#line 740 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 3978 "bison_parser.cpp"
    break;

  case 113:
#line 749 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3984 "bison_parser.cpp"
    break;

  case 114:
#line 750 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3990 "bison_parser.cpp"
    break;

  case 115:
#line 752 "bison_parser.y"
                                                                       {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  if((yyvsp[-1].locking_t) != nullptr) (yyval.select_stmt)->lockings = (yyvsp[-1].locking_t);

  // Limit could have been set by TOP.
  if ((yyvsp[0].limit) != nullptr) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[0].limit);
  }
}
#line 4007 "bison_parser.cpp"
    break;

  case 116:
#line 764 "bison_parser.y"
                                                                                                {
  (yyval.select_stmt) = (yyvsp[-5].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->lockings = (yyvsp[-1].locking_t);
}
#line 4023 "bison_parser.cpp"
    break;

  case 117:
#line 776 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4032 "bison_parser.cpp"
    break;

  case 118:
#line 781 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4041 "bison_parser.cpp"
    break;

  case 119:
#line 785 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4050 "bison_parser.cpp"
    break;

  case 120:
#line 789 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4059 "bison_parser.cpp"
    break;

  case 121:
#line 794 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4065 "bison_parser.cpp"
    break;

  case 122:
#line 795 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4071 "bison_parser.cpp"
    break;

  case 123:
#line 797 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4085 "bison_parser.cpp"
    break;

  case 124:
#line 807 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4091 "bison_parser.cpp"
    break;

  case 125:
#line 808 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4097 "bison_parser.cpp"
    break;

  case 127:
#line 812 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4103 "bison_parser.cpp"
    break;

  case 128:
#line 813 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4109 "bison_parser.cpp"
    break;

  case 129:
#line 815 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4115 "bison_parser.cpp"
    break;

  case 130:
#line 817 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4121 "bison_parser.cpp"
    break;

  case 131:
#line 818 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4127 "bison_parser.cpp"
    break;

  case 132:
#line 820 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4137 "bison_parser.cpp"
    break;

  case 133:
#line 825 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4143 "bison_parser.cpp"
    break;

  case 134:
#line 827 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4149 "bison_parser.cpp"
    break;

  case 135:
#line 828 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4155 "bison_parser.cpp"
    break;

  case 136:
#line 830 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4161 "bison_parser.cpp"
    break;

  case 137:
#line 831 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4167 "bison_parser.cpp"
    break;

  case 138:
#line 833 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4176 "bison_parser.cpp"
    break;

  case 139:
#line 837 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4185 "bison_parser.cpp"
    break;

  case 140:
#line 842 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4191 "bison_parser.cpp"
    break;

  case 141:
#line 844 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4197 "bison_parser.cpp"
    break;

  case 142:
#line 845 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4203 "bison_parser.cpp"
    break;

  case 143:
#line 846 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4209 "bison_parser.cpp"
    break;

  case 144:
#line 850 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4215 "bison_parser.cpp"
    break;

  case 145:
#line 851 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4221 "bison_parser.cpp"
    break;

  case 146:
#line 853 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4227 "bison_parser.cpp"
    break;

  case 147:
#line 854 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4233 "bison_parser.cpp"
    break;

  case 148:
#line 855 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4239 "bison_parser.cpp"
    break;

  case 149:
#line 856 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4245 "bison_parser.cpp"
    break;

  case 150:
#line 857 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4251 "bison_parser.cpp"
    break;

  case 151:
#line 858 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4257 "bison_parser.cpp"
    break;

  case 152:
#line 863 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4266 "bison_parser.cpp"
    break;

  case 153:
#line 867 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4275 "bison_parser.cpp"
    break;

  case 154:
#line 872 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4281 "bison_parser.cpp"
    break;

  case 155:
#line 873 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4287 "bison_parser.cpp"
    break;

  case 156:
#line 875 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4296 "bison_parser.cpp"
    break;

  case 157:
#line 879 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4305 "bison_parser.cpp"
    break;

  case 158:
#line 884 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4317 "bison_parser.cpp"
    break;

  case 164:
#line 894 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4323 "bison_parser.cpp"
    break;

  case 174:
#line 896 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4331 "bison_parser.cpp"
    break;

  case 177:
#line 902 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4337 "bison_parser.cpp"
    break;

  case 178:
#line 903 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4343 "bison_parser.cpp"
    break;

  case 179:
#line 904 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4349 "bison_parser.cpp"
    break;

  case 180:
#line 905 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4355 "bison_parser.cpp"
    break;

  case 181:
#line 906 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4361 "bison_parser.cpp"
    break;

  case 183:
#line 908 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4367 "bison_parser.cpp"
    break;

  case 184:
#line 909 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4373 "bison_parser.cpp"
    break;

  case 185:
#line 910 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4379 "bison_parser.cpp"
    break;

  case 186:
#line 911 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4385 "bison_parser.cpp"
    break;

  case 187:
#line 912 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4391 "bison_parser.cpp"
    break;

  case 188:
#line 913 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4397 "bison_parser.cpp"
    break;

  case 189:
#line 914 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4403 "bison_parser.cpp"
    break;

  case 190:
#line 915 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4409 "bison_parser.cpp"
    break;

  case 191:
#line 916 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4415 "bison_parser.cpp"
    break;

  case 192:
#line 917 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4421 "bison_parser.cpp"
    break;

  case 193:
#line 919 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4427 "bison_parser.cpp"
    break;

  case 194:
#line 920 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4433 "bison_parser.cpp"
    break;

  case 195:
#line 922 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4439 "bison_parser.cpp"
    break;

  case 196:
#line 923 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4445 "bison_parser.cpp"
    break;

  case 197:
#line 924 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4451 "bison_parser.cpp"
    break;

  case 198:
#line 925 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4457 "bison_parser.cpp"
    break;

  case 199:
#line 929 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4463 "bison_parser.cpp"
    break;

  case 200:
#line 930 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4469 "bison_parser.cpp"
    break;

  case 201:
#line 931 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4475 "bison_parser.cpp"
    break;

  case 202:
#line 932 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4481 "bison_parser.cpp"
    break;

  case 203:
#line 934 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4487 "bison_parser.cpp"
    break;

  case 204:
#line 935 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4493 "bison_parser.cpp"
    break;

  case 205:
#line 937 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4499 "bison_parser.cpp"
    break;

  case 206:
#line 938 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4505 "bison_parser.cpp"
    break;

  case 207:
#line 940 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4511 "bison_parser.cpp"
    break;

  case 208:
#line 941 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4517 "bison_parser.cpp"
    break;

  case 209:
#line 942 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4523 "bison_parser.cpp"
    break;

  case 210:
#line 943 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4529 "bison_parser.cpp"
    break;

  case 211:
#line 944 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4535 "bison_parser.cpp"
    break;

  case 212:
#line 945 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4541 "bison_parser.cpp"
    break;

  case 213:
#line 946 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4547 "bison_parser.cpp"
    break;

  case 214:
#line 948 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4553 "bison_parser.cpp"
    break;

  case 215:
#line 949 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4559 "bison_parser.cpp"
    break;

  case 216:
#line 951 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4565 "bison_parser.cpp"
    break;

  case 217:
#line 953 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4571 "bison_parser.cpp"
    break;

  case 218:
#line 955 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4577 "bison_parser.cpp"
    break;

  case 219:
#line 956 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4583 "bison_parser.cpp"
    break;

  case 220:
#line 957 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4589 "bison_parser.cpp"
    break;

  case 221:
#line 958 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4595 "bison_parser.cpp"
    break;

  case 222:
#line 959 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4601 "bison_parser.cpp"
    break;

  case 223:
#line 960 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4607 "bison_parser.cpp"
    break;

  case 224:
#line 962 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4613 "bison_parser.cpp"
    break;

  case 225:
#line 963 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4619 "bison_parser.cpp"
    break;

  case 226:
#line 964 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4625 "bison_parser.cpp"
    break;

  case 227:
#line 965 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4631 "bison_parser.cpp"
    break;

  case 228:
#line 966 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4637 "bison_parser.cpp"
    break;

  case 229:
#line 967 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4643 "bison_parser.cpp"
    break;

  case 232:
#line 971 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4649 "bison_parser.cpp"
    break;

  case 233:
#line 973 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4655 "bison_parser.cpp"
    break;

  case 234:
#line 975 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4661 "bison_parser.cpp"
    break;

  case 235:
#line 977 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4667 "bison_parser.cpp"
    break;

  case 236:
#line 978 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4673 "bison_parser.cpp"
    break;

  case 237:
#line 979 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4679 "bison_parser.cpp"
    break;

  case 238:
#line 980 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4685 "bison_parser.cpp"
    break;

  case 246:
#line 984 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4691 "bison_parser.cpp"
    break;

  case 247:
#line 986 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4697 "bison_parser.cpp"
    break;

  case 248:
#line 987 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4703 "bison_parser.cpp"
    break;

  case 249:
#line 989 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4709 "bison_parser.cpp"
    break;

  case 251:
#line 992 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4715 "bison_parser.cpp"
    break;

  case 252:
#line 994 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4721 "bison_parser.cpp"
    break;

  case 253:
#line 996 "bison_parser.y"
                           {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 4736 "bison_parser.cpp"
    break;

  case 254:
#line 1007 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4745 "bison_parser.cpp"
    break;

  case 255:
#line 1011 "bison_parser.y"
                                 {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 4761 "bison_parser.cpp"
    break;

  case 256:
#line 1022 "bison_parser.y"
                  {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 4797 "bison_parser.cpp"
    break;

  case 257:
#line 1054 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4807 "bison_parser.cpp"
    break;

  case 259:
#line 1063 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 4818 "bison_parser.cpp"
    break;

  case 263:
#line 1072 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4829 "bison_parser.cpp"
    break;

  case 264:
#line 1079 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 4838 "bison_parser.cpp"
    break;

  case 265:
#line 1083 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 4847 "bison_parser.cpp"
    break;

  case 266:
#line 1088 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4859 "bison_parser.cpp"
    break;

  case 267:
#line 1096 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 4869 "bison_parser.cpp"
    break;

  case 268:
#line 1102 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4878 "bison_parser.cpp"
    break;

  case 269:
#line 1106 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4887 "bison_parser.cpp"
    break;

  case 270:
#line 1111 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 4893 "bison_parser.cpp"
    break;

  case 271:
#line 1112 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 4899 "bison_parser.cpp"
    break;

  case 273:
#line 1114 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4905 "bison_parser.cpp"
    break;

  case 275:
#line 1116 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 4911 "bison_parser.cpp"
    break;

  case 276:
#line 1118 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4917 "bison_parser.cpp"
    break;

  case 277:
#line 1119 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4923 "bison_parser.cpp"
    break;

  case 279:
#line 1121 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 4929 "bison_parser.cpp"
    break;

  case 280:
#line 1127 "bison_parser.y"
                                                                                {
   (yyval.locking_t) = (yyvsp[-1].locking_t);
   if((yyvsp[0].ival) != 2){
    (yyval.locking_t)->specifier = true;
    (yyval.locking_t)->isNoWait = (yyvsp[0].ival);
   }
 }
#line 4941 "bison_parser.cpp"
    break;

  case 281:
#line 1134 "bison_parser.y"
                                                                           {
   (yyval.locking_t) = (yyvsp[-3].locking_t);
   (yyval.locking_t)->depTable = (yyvsp[-1].table);
   if((yyvsp[0].ival) != 2){
    (yyval.locking_t)->specifier = true;
    (yyval.locking_t)->isNoWait = (yyvsp[0].ival);
   }
 }
#line 4954 "bison_parser.cpp"
    break;

  case 282:
#line 1142 "bison_parser.y"
               { (yyval.locking_t) = nullptr; }
#line 4960 "bison_parser.cpp"
    break;

  case 283:
#line 1144 "bison_parser.y"
                              {
   (yyval.locking_t) = new ForLockingClause(true, true);
 }
#line 4968 "bison_parser.cpp"
    break;

  case 284:
#line 1147 "bison_parser.y"
                {
   (yyval.locking_t) = new ForLockingClause(true, false);
 }
#line 4976 "bison_parser.cpp"
    break;

  case 285:
#line 1150 "bison_parser.y"
        {
   (yyval.locking_t) = new ForLockingClause(false, false);
 }
#line 4984 "bison_parser.cpp"
    break;

  case 286:
#line 1153 "bison_parser.y"
            {
   (yyval.locking_t) = new ForLockingClause(false, true);
 }
#line 4992 "bison_parser.cpp"
    break;

  case 287:
#line 1156 "bison_parser.y"
             { (yyval.locking_t) = nullptr; }
#line 4998 "bison_parser.cpp"
    break;

  case 288:
#line 1158 "bison_parser.y"
                                               {
   (yyval.ival) = 0;
 }
#line 5006 "bison_parser.cpp"
    break;

  case 289:
#line 1161 "bison_parser.y"
         {
   (yyval.ival) = 1;
 }
#line 5014 "bison_parser.cpp"
    break;

  case 290:
#line 1164 "bison_parser.y"
             { (yyval.ival) = 2; }
#line 5020 "bison_parser.cpp"
    break;

  case 292:
#line 1170 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5026 "bison_parser.cpp"
    break;

  case 293:
#line 1172 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5032 "bison_parser.cpp"
    break;

  case 294:
#line 1174 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5041 "bison_parser.cpp"
    break;

  case 295:
#line 1178 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5050 "bison_parser.cpp"
    break;

  case 296:
#line 1183 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5060 "bison_parser.cpp"
    break;

  case 297:
#line 1193 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5072 "bison_parser.cpp"
    break;

  case 298:
#line 1200 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5085 "bison_parser.cpp"
    break;

  case 299:
#line 1208 "bison_parser.y"
                                                                                 {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
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
#line 5105 "bison_parser.cpp"
    break;

  case 300:
#line 1224 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5111 "bison_parser.cpp"
    break;

  case 301:
#line 1225 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5117 "bison_parser.cpp"
    break;

  case 302:
#line 1226 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5123 "bison_parser.cpp"
    break;

  case 303:
#line 1227 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5129 "bison_parser.cpp"
    break;

  case 304:
#line 1228 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5135 "bison_parser.cpp"
    break;

  case 305:
#line 1229 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5141 "bison_parser.cpp"
    break;

  case 306:
#line 1230 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5147 "bison_parser.cpp"
    break;

  case 307:
#line 1231 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5153 "bison_parser.cpp"
    break;

  case 308:
#line 1232 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5159 "bison_parser.cpp"
    break;

  case 309:
#line 1233 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5165 "bison_parser.cpp"
    break;

  case 313:
#line 1244 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5174 "bison_parser.cpp"
    break;

  case 314:
#line 1248 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5183 "bison_parser.cpp"
    break;


#line 5187 "bison_parser.cpp"

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
#line 1254 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
