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
#define YYSTYPE HSQL_STYPE
#define YYLTYPE HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse hsql_parse
#define yylex hsql_lex
#define yyerror hsql_error
#define yydebug hsql_debug
#define yynerrs hsql_nerrs

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

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char* msg) {
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
#define HSQL_TOKENTYPE
enum hsql_tokentype {
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
#if !defined HSQL_STYPE && !defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE {
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
  hsql::LockingClause* locking_t;

  std::vector<char*>* str_vec;
  std::vector<hsql::ConstraintType>* column_constraint_vec;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;
  std::vector<hsql::LockingClause*>* locking_clause_vec;

  std::pair<int64_t, int64_t>* ival_pair;

  hsql::RowLockMode lock_mode_t;
  hsql::RowLockWaitPolicy lock_wait_policy_t;

#line 425 "bison_parser.cpp"
};
typedef union HSQL_STYPE HSQL_STYPE;
#define HSQL_STYPE_IS_TRIVIAL 1
#define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if !defined HSQL_LTYPE && !defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE {
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
#define HSQL_LTYPE_IS_DECLARED 1
#define HSQL_LTYPE_IS_TRIVIAL 1
#endif

int hsql_parse(hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */

#ifdef short
#undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
#include <limits.h> /* INFRINGES ON USER NAME SPACE */
#if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#define YY_STDINT_H
#endif
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
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
#if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#define YYPTRDIFF_T __PTRDIFF_TYPE__
#define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
#elif defined PTRDIFF_MAX
#ifndef ptrdiff_t
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#endif
#define YYPTRDIFF_T ptrdiff_t
#define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
#else
#define YYPTRDIFF_T long
#define YYPTRDIFF_MAXIMUM LONG_MAX
#endif
#endif

#ifndef YYSIZE_T
#ifdef __SIZE_TYPE__
#define YYSIZE_T __SIZE_TYPE__
#elif defined size_t
#define YYSIZE_T size_t
#elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#define YYSIZE_T size_t
#else
#define YYSIZE_T unsigned
#endif
#endif

#define YYSIZE_MAXIMUM \
  YY_CAST(YYPTRDIFF_T, (YYPTRDIFF_MAXIMUM < YY_CAST(YYSIZE_T, -1) ? YYPTRDIFF_MAXIMUM : YY_CAST(YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST(YYPTRDIFF_T, sizeof(X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
#if defined YYENABLE_NLS && YYENABLE_NLS
#if ENABLE_NLS
#include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#define YY_(Msgid) dgettext("bison-runtime", Msgid)
#endif
#endif
#ifndef YY_
#define YY_(Msgid) Msgid
#endif
#endif

#ifndef YY_ATTRIBUTE_PURE
#if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_PURE __attribute__((__pure__))
#else
#define YY_ATTRIBUTE_PURE
#endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
#if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_UNUSED __attribute__((__unused__))
#else
#define YY_ATTRIBUTE_UNUSED
#endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if !defined lint || defined __GNUC__
#define YYUSE(E) ((void)(E))
#else
#define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && !defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                                            \
  _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wuninitialized\"") \
      _Pragma("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
#define YY_IGNORE_MAYBE_UNINITIALIZED_END _Pragma("GCC diagnostic pop")
#else
#define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
#define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && !defined __ICC && 6 <= __GNUC__
#define YY_IGNORE_USELESS_CAST_BEGIN _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wuseless-cast\"")
#define YY_IGNORE_USELESS_CAST_END _Pragma("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_END
#endif

#define YY_ASSERT(E) ((void)(0 && (E)))

#if !defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

#ifdef YYSTACK_USE_ALLOCA
#if YYSTACK_USE_ALLOCA
#ifdef __GNUC__
#define YYSTACK_ALLOC __builtin_alloca
#elif defined __BUILTIN_VA_ARG_INCR
#include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#elif defined _AIX
#define YYSTACK_ALLOC __alloca
#elif defined _MSC_VER
#include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#define alloca _alloca
#else
#define YYSTACK_ALLOC alloca
#if !defined _ALLOCA_H && !defined EXIT_SUCCESS
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
/* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#endif
#endif
#endif
#endif

#ifdef YYSTACK_ALLOC
/* Pacify GCC's 'empty if-body' warning.  */
#define YYSTACK_FREE(Ptr) \
  do { /* empty */        \
    ;                     \
  } while (0)
#ifndef YYSTACK_ALLOC_MAXIMUM
/* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#endif
#else
#define YYSTACK_ALLOC YYMALLOC
#define YYSTACK_FREE YYFREE
#ifndef YYSTACK_ALLOC_MAXIMUM
#define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#endif
#if (defined __cplusplus && !defined EXIT_SUCCESS && \
     !((defined YYMALLOC || defined malloc) && (defined YYFREE || defined free)))
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#endif
#ifndef YYMALLOC
#define YYMALLOC malloc
#if !defined malloc && !defined EXIT_SUCCESS
void* malloc(YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#ifndef YYFREE
#define YYFREE free
#if !defined free && !defined EXIT_SUCCESS
void free(void*);       /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */

#if (!defined yyoverflow && (!defined __cplusplus || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL && \
                                                      defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc {
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
#define YYSTACK_GAP_MAXIMUM (YYSIZEOF(union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
#define YYSTACK_BYTES(N) \
  ((N) * (YYSIZEOF(yy_state_t) + YYSIZEOF(YYSTYPE) + YYSIZEOF(YYLTYPE)) + 2 * YYSTACK_GAP_MAXIMUM)

#define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
#define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
  do {                                                                 \
    YYPTRDIFF_T yynewbytes;                                            \
    YYCOPY(&yyptr->Stack_alloc, Stack, yysize);                        \
    Stack = &yyptr->Stack_alloc;                                       \
    yynewbytes = yystacksize * YYSIZEOF(*Stack) + YYSTACK_GAP_MAXIMUM; \
    yyptr += yynewbytes / YYSIZEOF(*yyptr);                            \
  } while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
#ifndef YYCOPY
#if defined __GNUC__ && 1 < __GNUC__
#define YYCOPY(Dst, Src, Count) __builtin_memcpy(Dst, Src, YY_CAST(YYSIZE_T, (Count)) * sizeof(*(Src)))
#else
#define YYCOPY(Dst, Src, Count)                                  \
  do {                                                           \
    YYPTRDIFF_T yyi;                                             \
    for (yyi = 0; yyi < (Count); yyi++) (Dst)[yyi] = (Src)[yyi]; \
  } while (0)
#endif
#endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL 67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST 946

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS 185
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS 125
/* YYNRULES -- Number of rules.  */
#define YYNRULES 316
/* YYNSTATES -- Number of states.  */
#define YYNSTATES 570

#define YYUNDEFTOK 2
#define YYMAXUTOK 422

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX) (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] = {
    0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   174, 2,   2,   179, 180, 172, 170, 183, 171,
    181, 173, 2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   182, 163, 160, 164, 184, 2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   177,
    2,   178, 175, 2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   1,   2,   3,   4,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,
    21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,
    44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,
    67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,
    90,  91,  92,  93,  94,  95,  96,  97,  98,  99,  100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
    113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
    159, 161, 162, 165, 166, 167, 168, 169, 176};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] = {
    0,    304,  304,  323,  329,  336,  340,  344,  345,  346,  348,  349,  350,  351,  352,  353,  354,  355,  356,
    357,  363,  364,  366,  370,  375,  379,  389,  390,  391,  393,  393,  399,  405,  407,  411,  422,  428,  435,
    450,  455,  456,  462,  474,  475,  480,  491,  504,  512,  519,  526,  535,  536,  538,  542,  547,  548,  550,
    555,  556,  557,  558,  559,  560,  564,  565,  566,  567,  568,  569,  570,  571,  572,  574,  575,  577,  578,
    579,  581,  582,  584,  588,  593,  594,  595,  596,  598,  599,  607,  613,  619,  625,  631,  632,  639,  645,
    647,  657,  664,  675,  682,  690,  691,  698,  705,  709,  714,  724,  728,  732,  744,  744,  746,  747,  756,
    757,  759,  773,  785,  790,  794,  798,  803,  804,  806,  816,  817,  819,  821,  822,  824,  826,  827,  829,
    834,  836,  837,  839,  840,  842,  846,  851,  853,  854,  855,  859,  860,  862,  863,  864,  865,  866,  867,
    872,  876,  881,  882,  884,  888,  893,  901,  901,  901,  901,  901,  903,  904,  904,  904,  904,  904,  904,
    904,  904,  905,  905,  909,  909,  911,  912,  913,  914,  915,  917,  917,  918,  919,  920,  921,  922,  923,
    924,  925,  926,  928,  929,  931,  932,  933,  934,  938,  939,  940,  941,  943,  944,  946,  947,  949,  950,
    951,  952,  953,  954,  955,  957,  958,  960,  962,  964,  965,  966,  967,  968,  969,  971,  972,  973,  974,
    975,  976,  978,  978,  980,  982,  984,  986,  987,  988,  989,  991,  991,  991,  991,  991,  991,  991,  993,
    995,  996,  998,  999,  1001, 1003, 1005, 1016, 1020, 1031, 1063, 1072, 1072, 1079, 1079, 1081, 1081, 1088, 1092,
    1097, 1105, 1111, 1115, 1120, 1121, 1123, 1123, 1125, 1125, 1127, 1128, 1130, 1130, 1136, 1137, 1139, 1143, 1148,
    1154, 1161, 1162, 1163, 1164, 1166, 1167, 1168, 1174, 1174, 1176, 1178, 1182, 1187, 1197, 1204, 1212, 1228, 1229,
    1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1239, 1245, 1245, 1248, 1252};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char* const yytname[] = {"$end",
                                      "error",
                                      "$undefined",
                                      "IDENTIFIER",
                                      "STRING",
                                      "FLOATVAL",
                                      "INTVAL",
                                      "DEALLOCATE",
                                      "PARAMETERS",
                                      "INTERSECT",
                                      "TEMPORARY",
                                      "TIMESTAMP",
                                      "DISTINCT",
                                      "NVARCHAR",
                                      "RESTRICT",
                                      "TRUNCATE",
                                      "ANALYZE",
                                      "BETWEEN",
                                      "CASCADE",
                                      "COLUMNS",
                                      "CONTROL",
                                      "DEFAULT",
                                      "EXECUTE",
                                      "EXPLAIN",
                                      "INTEGER",
                                      "NATURAL",
                                      "PREPARE",
                                      "PRIMARY",
                                      "SCHEMAS",
                                      "CHARACTER_VARYING",
                                      "REAL",
                                      "DECIMAL",
                                      "SMALLINT",
                                      "SPATIAL",
                                      "VARCHAR",
                                      "VIRTUAL",
                                      "DESCRIBE",
                                      "BEFORE",
                                      "COLUMN",
                                      "CREATE",
                                      "DELETE",
                                      "DIRECT",
                                      "DOUBLE",
                                      "ESCAPE",
                                      "EXCEPT",
                                      "EXISTS",
                                      "EXTRACT",
                                      "CAST",
                                      "FORMAT",
                                      "GLOBAL",
                                      "HAVING",
                                      "IMPORT",
                                      "INSERT",
                                      "ISNULL",
                                      "OFFSET",
                                      "RENAME",
                                      "SCHEMA",
                                      "SELECT",
                                      "SORTED",
                                      "TABLES",
                                      "UNIQUE",
                                      "UNLOAD",
                                      "UPDATE",
                                      "VALUES",
                                      "AFTER",
                                      "ALTER",
                                      "CROSS",
                                      "DELTA",
                                      "FLOAT",
                                      "GROUP",
                                      "INDEX",
                                      "INNER",
                                      "LIMIT",
                                      "LOCAL",
                                      "MERGE",
                                      "MINUS",
                                      "ORDER",
                                      "OUTER",
                                      "RIGHT",
                                      "TABLE",
                                      "UNION",
                                      "USING",
                                      "WHERE",
                                      "CALL",
                                      "CASE",
                                      "CHAR",
                                      "COPY",
                                      "DATE",
                                      "DATETIME",
                                      "DESC",
                                      "DROP",
                                      "ELSE",
                                      "FILE",
                                      "FROM",
                                      "FULL",
                                      "HASH",
                                      "HINT",
                                      "INTO",
                                      "JOIN",
                                      "LEFT",
                                      "LIKE",
                                      "LOAD",
                                      "LONG",
                                      "NULL",
                                      "PLAN",
                                      "SHOW",
                                      "TEXT",
                                      "THEN",
                                      "TIME",
                                      "VIEW",
                                      "WHEN",
                                      "WITH",
                                      "ADD",
                                      "ALL",
                                      "AND",
                                      "ASC",
                                      "END",
                                      "FOR",
                                      "INT",
                                      "KEY",
                                      "NOT",
                                      "OFF",
                                      "SET",
                                      "TOP",
                                      "AS",
                                      "BY",
                                      "IF",
                                      "IN",
                                      "IS",
                                      "OF",
                                      "ON",
                                      "OR",
                                      "TO",
                                      "NO",
                                      "ARRAY",
                                      "CONCAT",
                                      "ILIKE",
                                      "SECOND",
                                      "MINUTE",
                                      "HOUR",
                                      "DAY",
                                      "MONTH",
                                      "YEAR",
                                      "SECONDS",
                                      "MINUTES",
                                      "HOURS",
                                      "DAYS",
                                      "MONTHS",
                                      "YEARS",
                                      "INTERVAL",
                                      "TRUE",
                                      "FALSE",
                                      "TRANSACTION",
                                      "BEGIN",
                                      "COMMIT",
                                      "ROLLBACK",
                                      "NOWAIT",
                                      "SKIP",
                                      "LOCKED",
                                      "SHARE",
                                      "'='",
                                      "EQUALS",
                                      "NOTEQUALS",
                                      "'<'",
                                      "'>'",
                                      "LESS",
                                      "GREATER",
                                      "LESSEQ",
                                      "GREATEREQ",
                                      "NOTNULL",
                                      "'+'",
                                      "'-'",
                                      "'*'",
                                      "'/'",
                                      "'%'",
                                      "'^'",
                                      "UMINUS",
                                      "'['",
                                      "']'",
                                      "'('",
                                      "')'",
                                      "'.'",
                                      "';'",
                                      "','",
                                      "'?'",
                                      "$accept",
                                      "input",
                                      "statement_list",
                                      "statement",
                                      "preparable_statement",
                                      "opt_hints",
                                      "hint_list",
                                      "hint",
                                      "transaction_statement",
                                      "opt_transaction_keyword",
                                      "prepare_statement",
                                      "prepare_target_query",
                                      "execute_statement",
                                      "import_statement",
                                      "file_type",
                                      "file_path",
                                      "opt_file_type",
                                      "export_statement",
                                      "show_statement",
                                      "create_statement",
                                      "opt_not_exists",
                                      "table_elem_commalist",
                                      "table_elem",
                                      "column_def",
                                      "column_type",
                                      "opt_time_precision",
                                      "opt_decimal_specification",
                                      "opt_column_constraints",
                                      "column_constraint_list",
                                      "column_constraint",
                                      "table_constraint",
                                      "drop_statement",
                                      "opt_exists",
                                      "alter_statement",
                                      "alter_action",
                                      "drop_action",
                                      "delete_statement",
                                      "truncate_statement",
                                      "insert_statement",
                                      "opt_column_list",
                                      "update_statement",
                                      "update_clause_commalist",
                                      "update_clause",
                                      "select_statement",
                                      "select_within_set_operation",
                                      "select_within_set_operation_no_parentheses",
                                      "select_with_paren",
                                      "select_no_paren",
                                      "set_operator",
                                      "set_type",
                                      "opt_all",
                                      "select_clause",
                                      "opt_distinct",
                                      "select_list",
                                      "opt_from_clause",
                                      "from_clause",
                                      "opt_where",
                                      "opt_group",
                                      "opt_having",
                                      "opt_order",
                                      "order_list",
                                      "order_desc",
                                      "opt_order_type",
                                      "opt_top",
                                      "opt_limit",
                                      "expr_list",
                                      "opt_literal_list",
                                      "literal_list",
                                      "expr_alias",
                                      "expr",
                                      "operand",
                                      "scalar_expr",
                                      "unary_expr",
                                      "binary_expr",
                                      "logic_expr",
                                      "in_expr",
                                      "case_expr",
                                      "case_list",
                                      "exists_expr",
                                      "comp_expr",
                                      "function_expr",
                                      "extract_expr",
                                      "cast_expr",
                                      "datetime_field",
                                      "datetime_field_plural",
                                      "duration_field",
                                      "array_expr",
                                      "array_index",
                                      "between_expr",
                                      "column_name",
                                      "literal",
                                      "string_literal",
                                      "bool_literal",
                                      "num_literal",
                                      "int_literal",
                                      "null_literal",
                                      "date_literal",
                                      "interval_literal",
                                      "param_expr",
                                      "table_ref",
                                      "table_ref_atomic",
                                      "nonjoin_table_ref_atomic",
                                      "table_ref_commalist",
                                      "table_ref_name",
                                      "table_ref_name_no_alias",
                                      "table_name",
                                      "opt_index_name",
                                      "table_alias",
                                      "opt_table_alias",
                                      "alias",
                                      "opt_alias",
                                      "opt_locking_clause",
                                      "opt_locking_clause_list",
                                      "locking_clause",
                                      "row_lock_mode",
                                      "opt_row_lock_policy",
                                      "opt_with_clause",
                                      "with_clause",
                                      "with_description_list",
                                      "with_description",
                                      "join_clause",
                                      "opt_join_type",
                                      "join_condition",
                                      "opt_semicolon",
                                      "ident_commalist",
                                      YY_NULLPTR};
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] = {
    0,   256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275,
    276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296,
    297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317,
    318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338,
    339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359,
    360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380,
    381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401,
    402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 61,  415, 416, 60,  62,  417, 418, 419,
    420, 421, 43,  45,  42,  47,  37,  94,  422, 91,  93,  40,  41,  46,  59,  44,  63};
#endif

#define YYPACT_NINF (-456)

#define yypact_value_is_default(Yyn) ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-314)

#define yytable_value_is_error(Yyn) ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] = {
    619,  16,   48,   72,   123,  48,   -11,  -38,  78,   87,   48,   109,  48,   102,  33,   196,  51,   51,   51,
    217,  46,   -456, 132,  -456, 132,  -456, -456, -456, -456, -456, -456, -456, -456, -456, -456, -456, -456, -31,
    -456, 241,  74,   -456, 82,   164,  -456, 142,  142,  142,  48,   273,  48,   167,  -456, 170,  -59,  170,  170,
    170,  48,   -456, 178,  112,  -456, -456, -456, -456, -456, -456, 614,  -456, 207,  -456, -456, 187,  -31,  57,
    -456, 138,  -456, 306,  75,   307,  192,  318,  48,   48,   246,  -456, 231,  154,  332,  310,  48,   367,  367,
    369,  48,   48,   -456, 195,  196,  -456, 197,  376,  363,  204,  206,  -456, -456, -456, -31,  270,  262,  -31,
    -10,  -456, -456, -456, -456, 385,  -456, 390,  -456, -456, -456, 215,  216,  -456, -456, -456, -456, 300,  -456,
    -456, -456, -456, -456, -456, 355,  -456, 271,  -54,  154,  333,  -456, 367,  399,  43,   248,  -53,  -456, -456,
    316,  296,  -456, 296,  -456, -456, -456, -456, -456, 406,  -456, -456, 333,  -456, -456, 334,  -456, -456, 57,
    -456, -456, 333,  334,  333,  129,  294,  -456, 203,  -456, 75,   -456, -456, -456, -456, -456, -456, -456, -456,
    -456, -456, -456, -456, -456, -456, -456, -456, 48,   409,  302,  150,  291,  96,   249,  250,  251,  247,  387,
    272,  419,  -456, 301,  -64,  445,  -456, -456, -456, -456, -456, -456, -456, -456, -456, -456, -456, -456, -456,
    -456, -456, -456, 330,  -456, 47,   275,  -456, 333,  332,  -456, 417,  -456, -456, 408,  -456, -456, 278,  137,
    -456, 365,  276,  -456, 42,   -10,  -31,  277,  -456, -43,  -10,  -64,  407,  24,   27,   -456, 294,  -456, -456,
    -456, 284,  372,  -456, 828,  349,  290,  147,  -456, -456, -456, 302,  11,   13,   413,  203,  333,  333,  156,
    77,   297,  419,  655,  333,  61,   295,  -83,  333,  333,  419,  -456, 419,  52,   299,  -17,  419,  419,  419,
    419,  419,  419,  419,  419,  419,  419,  419,  419,  419,  419,  419,  376,  48,   -456, 476,  75,   -64,  -456,
    170,  273,  75,   -456, 406,  15,   246,  -456, 333,  -456, 478,  -456, -456, -456, -456, 333,  -456, -456, -456,
    294,  333,  333,  -456, 327,  368,  -456, 90,   -456, 399,  367,  -456, 309,  -456, 312,  -456, 313,  -456, -456,
    314,  -456, -456, -456, -456, 315,  -456, 101,  317,  399,  -456, 150,  -456, -456, 333,  -456, -456, 319,  396,
    84,   76,   148,  333,  333,  -456, 413,  395,  91,   -456, -456, -456, 383,  575,  676,  419,  321,  301,  -456,
    398,  325,  676,  676,  676,  676,  625,  625,  625,  625,  61,   61,   45,   45,   45,   -95,  331,  -456, -456,
    149,  505,  -456, 169,  -456, 302,  -456, 65,   -456, 328,  -456, 25,   -456, 441,  -456, -456, -456, -456, -64,
    -64,  -456, 451,  399,  -456, 356,  -456, 171,  -456, 509,  510,  -456, 513,  514,  518,  -456, 412,  -456, -456,
    422,  -456, 101,  -456, 399,  173,  -456, 179,  -456, 333,  828,  333,  333,  -456, 140,  98,   346,  -456, 419,
    676,  301,  347,  180,  -456, -456, -456, -456, -456, 348,  434,  -456, -456, -456, 457,  458,  463,  443,  15,
    539,  -456, -456, -456, 418,  -456, -456, -96,  -456, -456, 364,  181,  370,  374,  375,  -456, -456, -456, 185,
    -456, -456, -73,  377,  -64,  168,  -456, 333,  -456, 655,  380,  186,  -456, -456, 25,   15,   -456, -456, -456,
    15,   220,  373,  333,  -456, -456, -456, 541,  -456, -456, -456, -456, -456, -456, -456, -64,  -456, -456, -456,
    -456, 452,  399,  -29,  381,  384,  333,  190,  333,  -456, -456, 17,   -64,  -456, -456, -64,  386,  382,  -456};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] = {
    294, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   30,  30,  30,  0,   314, 3,   21,
    19,  21,  18,  8,   9,   7,   11,  16,  17,  13,  14,  12,  15,  10,  0,   293, 0,   268, 97,  33,  0,   44,  51,
    51,  51,  0,   0,   0,   0,   267, 92,  0,   92,  92,  92,  0,   42,  0,   295, 296, 29,  26,  28,  27,  1,   294,
    2,   0,   6,   5,   145, 0,   106, 107, 137, 89,  0,   155, 0,   0,   271, 0,   0,   131, 37,  0,   101, 0,   0,
    0,   0,   0,   0,   0,   0,   43,  0,   0,   4,   0,   0,   125, 0,   0,   119, 120, 118, 0,   122, 0,   0,   151,
    269, 246, 249, 251, 0,   252, 0,   247, 248, 257, 0,   154, 156, 239, 240, 241, 250, 242, 243, 244, 245, 32,  31,
    0,   270, 0,   0,   101, 0,   96,  0,   0,   0,   0,   131, 103, 91,  0,   40,  38,  40,  90,  87,  88,  298, 297,
    0,   144, 124, 0,   114, 113, 137, 110, 109, 111, 121, 117, 0,   137, 0,   0,   281, 253, 256, 34,  0,   218, 219,
    220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 254, 50,  0,   0,   294, 0,   0,   235, 0,   0,   0,
    0,   0,   0,   0,   237, 0,   130, 159, 166, 167, 168, 161, 163, 169, 162, 182, 170, 171, 172, 173, 165, 160, 175,
    176, 0,   315, 0,   0,   99,  0,   0,   102, 0,   93,  94,  0,   36,  41,  24,  0,   22,  128, 126, 152, 279, 151,
    0,   136, 138, 143, 151, 147, 149, 146, 0,   115, 280, 282, 255, 157, 0,   0,   47,  0,   0,   0,   0,   52,  54,
    55,  294, 125, 0,   0,   0,   0,   0,   0,   0,   0,   0,   178, 0,   177, 0,   0,   0,   0,   0,   179, 0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   100, 0,   0,   105,
    104, 92,  0,   0,   20,  0,   0,   131, 127, 0,   277, 0,   278, 158, 108, 112, 0,   142, 141, 140, 281, 0,   0,
    286, 0,   0,   288, 292, 283, 0,   0,   65,  0,   67,  76,  68,  0,   63,  64,  0,   60,  61,  66,  69,  73,  57,
    78,  0,   0,   46,  0,   49,  214, 0,   236, 238, 0,   0,   0,   0,   0,   0,   0,   201, 0,   0,   0,   174, 164,
    193, 194, 0,   189, 0,   0,   0,   180, 0,   192, 191, 207, 208, 209, 210, 211, 212, 213, 184, 183, 186, 185, 187,
    188, 0,   35,  316, 0,   0,   39,  0,   23,  294, 129, 258, 260, 0,   262, 275, 261, 133, 153, 276, 139, 116, 150,
    148, 289, 0,   0,   291, 0,   284, 0,   45,  0,   0,   62,  0,   0,   0,   70,  0,   82,  83,  0,   56,  77,  79,
    0,   0,   53,  0,   205, 0,   0,   0,   0,   199, 0,   0,   0,   232, 0,   190, 0,   0,   0,   181, 233, 98,  95,
    25,  0,   0,   310, 302, 308, 306, 309, 304, 0,   0,   0,   274, 266, 272, 0,   123, 287, 292, 290, 48,  0,   0,
    0,   0,   0,   81,  84,  80,  0,   86,  215, 0,   0,   203, 0,   202, 0,   206, 234, 0,   0,   197, 195, 275, 0,
    305, 307, 303, 0,   259, 276, 0,   285, 59,  75,  0,   71,  58,  72,  85,  216, 217, 200, 204, 198, 196, 263, 299,
    311, 0,   135, 0,   0,   0,   0,   0,   132, 74,  0,   312, 300, 273, 134, 235, 0,   301};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] = {
    -456, -456, -456, 480,  -456, 525,  -456, 229,  -456, 152,  -456, -456, -456, -456, 240,  -92,  420,  -456,
    -456, -456, 111,  -456, 202,  -456, 110,  -456, -456, -456, -456, 119,  -456, -456, -50,  -456, -456, -456,
    -456, -456, -456, 436,  -456, -456, 342,  -192, -88,  -456, 0,    -71,  -41,  -456, -456, -86,  305,  -456,
    -456, -456, -137, -456, -456, -111, -456, 254,  -456, -456, 31,   -270, -456, -35,  253,  -143, -193, -456,
    -456, -456, -456, -456, -456, 303,  -456, -456, -456, -456, -456, -136, -456, -456, -456, -456, -456, 23,
    -58,  -80,  -456, -456, -93,  -456, -456, -456, -456, -456, -455, 58,   -456, -456, -456, -1,   -456, -456,
    62,   337,  -456, 252,  -456, 336,  -456, 92,   -456, -456, -456, 495,  -456, -456, -456, -456, -316};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] = {
    -1,  19,  20,  21,  22,  71,  246, 247, 23,  64,  24,  137, 25,  26,  88,  153, 243, 27,  28,  29,  83,
    273, 274, 275, 368, 452, 448, 457, 458, 459, 276, 30,  92,  31,  240, 241, 32,  33,  34,  147, 35,  149,
    150, 36,  167, 168, 169, 76,  110, 111, 172, 77,  164, 248, 329, 330, 144, 499, 560, 114, 254, 255, 341,
    104, 177, 249, 125, 126, 250, 251, 214, 215, 216, 217, 218, 219, 220, 285, 221, 222, 223, 224, 225, 194,
    195, 196, 226, 227, 228, 229, 230, 128, 129, 130, 131, 132, 133, 134, 135, 424, 425, 426, 427, 428, 51,
    429, 140, 495, 496, 497, 335, 262, 263, 264, 349, 443, 37,  38,  61,  62,  430, 492, 564, 69,  233};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] = {
    213, 41,  155, 106,  44,   95,   96,  97,  269, 52,  162, 54,   238,  154, 154,  288,  376,  290,  40,   388,  567,
    559, 127, 163, 170,  174,  73,   170, 332, 143, 256, 293, 258,  260,  93,  444,  113,  75,   533,  199,  301,  293,
    39,  265, 175, 332,  339,  86,   294, 89,  293, 40,  58,  231,  461,  48,  252,  98,   294,  45,   441,  442,  176,
    257, 284, 154, 107,  294,  46,   292, 200, 293, 340, 94,  105,  42,   235, 552,  344,  116,  117,  118,  316,  141,
    142, 373, 398, 319,  294,  345,  485, 152, 59,  321, 288, 157,  158,  390, 47,   159,  73,   108,  393,  399,  394,
    463, 234, 544, 400,  401,  402,  403, 404, 405, 406, 407, 408,  409,  410, 411,  412,  413,  414,  266,  501,  201,
    43,  478, 453, 253,  237,  486,  203, 116, 117, 118, 487, 109,  293,  380, 381,  291,  488,  489,  512,  379,  346,
    107, 74,  494, 391,  392,  395,  270, 331, 294, 293, 84,  85,   490,  347, 454,  119,  -311, 491,  337,  333,  170,
    383, 65,  66,  49,   55,   294,  204, 205, 206, 271, 120, 396,  301,  56,  108,  467,  50,   377,  348,  384,  53,
    211, 293, 374, 431,  385,  423,  256, 301, 267, 293, 60,  436,  437,  475, 63,   455,  520,  524,  294,  466,  378,
    272, 57,  293, 207,  112,  294,  119, 67,  109, 440, 315, 456,  316,  415, 121,  122,  123,  318,  68,   294,  319,
    484, 120, 312, 313,  314,  315,  558, 316, 468, 470, 471, 259,  70,   78,  485,  441,  442,  -264, 208,  203,  116,
    117, 118, 293, 79,   519,  81,   384, 124, 445, 80,  127, 209,  469,  554, 283,  127,  82,   473,  293,  294,  154,
    419, 331, 278, 87,   279,  121,  122, 123, 522, 293, 336, 546,  418,  486, 294,  342,  90,   421,  487,  204,  205,
    206, 100, 91,  488,  489,  294,  210, 211, 99,  102, 203, 116,  117,  118, 212,  115,  103,  136,  138,  124,  490,
    472, 416, 326, -311, 491,  327,  139, 515, 145, 517, 518, 477,  371,  143, 481,  372,  207,  181,  146,  119,  148,
    203, 116, 117, 118,  182,  183,  184, 185, 186, 187, 204, 205,  206,  483, 120,  503,  181,  513,  319,  151,  319,
    283, 73,  514, 526,  538,  331,  331, 539, 543, 549, 208, 319,  331,  565, 116,  156,  319,  74,   163,  161,  547,
    204, 205, 206, 209,  118,  171,  165, 207, 166, 173, 119, 178,  203,  116, 117,  118,  179,  180,  121,  122,  123,
    181, 197, 198, 232,  -265, 120,  523, 239, 242, 236, 245, 112,  261,  268, 15,   563,  277,  566,  207,  210,  211,
    119, 208, 203, 116,  117,  118,  212, 317, 280, 281, 282, 124,  286,  205, 206,  209,  120,  182,  183,  184,  185,
    186, 187, 188, 189,  190,  191,  192, 193, 289, 121, 122, 123,  208,  320, 323,  324,  325,  328,  331,  338,  343,
    295, 351, 352, 205,  206,  209,  369, 370, 73,  207, 210, 211,  119,  389, 386,  485,  397,  417,  212,  433,  121,
    122, 123, 124, 438,  439,  446,  465, 120, 447, 449, 450, 451,  395,  460, 293,  296,  464,  476,  479,  316,  207,
    210, 211, 119, 287,  482,  480,  498, 493, 212, 500, 502, 504,  505,  124, 486,  506,  507,  209,  120,  487,  508,
    510, 521, 525, 527,  488,  489,  509, 528, 556, 529, 530, 121,  122,  123, 287,  531,  532,  534,  535,  537,  297,
    490, 555, 101, 72,   540,  491,  553, 209, 541, 542, 422, 545,  210,  211, 548,  561,  569,  562,  420,  298,  212,
    279, 121, 122, 123,  124,  299,  300, 462, 244, 516, 511, 202,  322,  301, 302,  557,  375,  432,  568,  551,  382,
    334, 550, 210, 211,  434,  536,  435, 160, 0,   0,   212, 350,  0,    0,   0,    124,  0,    303,  304,  305,  306,
    307, 0,   0,   308,  309,  -313, 310, 311, 312, 313, 314, 315,  1,    316, 0,    0,    0,    1,    0,    296,  2,
    0,   0,   0,   0,    2,    0,    3,   0,   0,   0,   4,   3,    0,    0,   0,    4,    0,    0,    0,    0,    5,
    0,   0,   6,   7,    5,    0,    0,   6,   7,   0,   0,   0,    0,    0,   8,    9,    0,    0,    0,    8,    9,
    0,   0,   0,   297,  10,   0,    296, 11,  0,   10,  0,   0,    11,   0,   0,    0,    0,    474,  0,    0,    0,
    0,   0,   387, 0,    0,    0,    0,   12,  0,   0,   300, 13,   12,   0,   0,    296,  13,   301,  302,  0,    0,
    0,   0,   0,   0,    0,    14,   0,   0,   0,   0,   14,  15,   0,    0,   0,    296,  15,   0,    0,    0,    0,
    303, 304, 305, 306,  307,  0,    0,   308, 309, 0,   310, 311,  312,  313, 314,  315,  0,    316,  300,  0,    297,
    0,   0,   0,   0,    301,  0,    0,   0,   0,   0,   0,   16,   17,   18,  0,    0,    16,   17,   18,   387,  -314,
    0,   0,   0,   0,    0,    0,    300, 0,   0,   0,   0,   -314, -314, 301, 302,  -314, -314, 0,    310,  311,  312,
    313, 314, 315, 0,    316,  0,    300, 0,   0,   0,   0,   0,    0,    301, -314, 0,    0,    303,  304,  305,  306,
    307, 0,   0,   308,  309,  0,    310, 311, 312, 313, 314, 315,  0,    316, 0,    0,    0,    -314, -314, -314, 306,
    307, 0,   0,   308,  309,  0,    310, 311, 312, 313, 314, 315,  353,  316, 0,    0,    0,    354,  355,  356,  357,
    0,   358, 0,   0,    0,    0,    0,   0,   0,   359, 0,   0,    0,    0,   0,    0,    0,    0,    0,    0,    0,
    0,   0,   0,   0,    0,    0,    0,   0,   0,   0,   0,   0,    0,    0,   360,  0,    0,    0,    0,    0,    0,
    0,   0,   0,   0,    0,    0,    0,   0,   0,   0,   361, 0,    362,  363, 0,    0,    0,    0,    0,    0,    0,
    0,   0,   0,   0,    0,    0,    364, 0,   0,   0,   365, 0,    366,  0,   0,    0,    0,    0,    0,    0,    0,
    0,   367};

static const yytype_int16 yycheck[] = {
    143, 2,   94,  74,  5,   55,  56,  57,  200, 10,  103, 12,  149, 93,  94,  208, 3,   210, 3,   289, 3,   50,  80,
    12,  110, 113, 57,  113, 3,   82,  173, 114, 175, 176, 93,  351, 77,  37,  493, 93,  135, 114, 26,  179, 54,  3,
    89,  48,  131, 50,  114, 3,   19,  145, 370, 93,  167, 58,  131, 70,  156, 157, 72,  174, 207, 145, 9,   131, 79,
    212, 124, 114, 115, 132, 74,  3,   147, 532, 54,  4,   5,   6,   177, 84,  85,  277, 103, 183, 131, 62,  25,  92,
    59,  236, 287, 96,  97,  180, 109, 99,  57,  44,  295, 120, 297, 375, 63,  180, 301, 302, 303, 304, 305, 306, 307,
    308, 309, 310, 311, 312, 313, 314, 315, 181, 440, 179, 3,   397, 27,  170, 183, 66,  3,   4,   5,   6,   71,  80,
    114, 282, 283, 212, 77,  78,  460, 281, 119, 9,   179, 124, 293, 294, 100, 3,   183, 131, 114, 46,  47,  94,  133,
    60,  87,  98,  99,  253, 124, 253, 91,  17,  18,  93,  70,  131, 45,  46,  47,  27,  103, 127, 135, 79,  44,  107,
    97,  172, 159, 110, 79,  172, 114, 180, 329, 116, 179, 338, 135, 198, 114, 3,   343, 344, 395, 152, 103, 107, 476,
    131, 124, 280, 60,  109, 114, 84,  76,  131, 87,  0,   80,  129, 175, 120, 177, 316, 149, 150, 151, 180, 182, 131,
    183, 423, 103, 172, 173, 174, 175, 553, 177, 91,  383, 384, 113, 111, 3,   25,  156, 157, 183, 120, 3,   4,   5,
    6,   114, 181, 116, 93,  110, 184, 352, 179, 320, 134, 116, 535, 110, 325, 126, 178, 114, 131, 352, 323, 183, 179,
    3,   181, 149, 150, 151, 474, 114, 252, 116, 320, 66,  131, 257, 122, 325, 71,  45,  46,  47,  183, 126, 77,  78,
    131, 171, 172, 124, 96,  3,   4,   5,   6,   179, 3,   123, 4,   120, 184, 94,  386, 317, 180, 98,  99,  183, 3,
    465, 92,  467, 468, 397, 180, 82,  180, 183, 84,  183, 179, 87,  3,   3,   4,   5,   6,   137, 138, 139, 140, 141,
    142, 45,  46,  47,  180, 103, 180, 183, 180, 183, 45,  183, 110, 57,  180, 180, 180, 183, 183, 183, 180, 180, 120,
    183, 183, 180, 4,   3,   183, 179, 12,  179, 520, 45,  46,  47,  134, 6,   113, 180, 84,  180, 125, 87,  4,   3,
    4,   5,   6,   4,   180, 149, 150, 151, 183, 45,  130, 3,   183, 103, 476, 90,  111, 160, 3,   76,  117, 3,   111,
    557, 124, 559, 84,  171, 172, 87,  120, 3,   4,   5,   6,   179, 97,  179, 179, 179, 184, 45,  46,  47,  134, 103,
    137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 177, 149, 150, 151, 120, 179, 38,  48,  179, 93,  183,
    183, 54,  17,  179, 92,  46,  47,  134, 119, 179, 57,  84,  171, 172, 87,  180, 179, 25,  179, 3,   179, 3,   149,
    150, 151, 184, 159, 119, 179, 93,  103, 179, 179, 179, 179, 100, 179, 114, 53,  180, 179, 103, 177, 84,  171, 172,
    87,  120, 3,   178, 69,  183, 179, 62,  158, 6,   6,   184, 66,  6,   6,   134, 103, 71,  6,   103, 180, 180, 180,
    77,  78,  119, 98,  81,  77,  77,  149, 150, 151, 120, 77,  98,  3,   125, 180, 100, 94,  6,   68,  24,  180, 99,
    179, 134, 180, 180, 327, 180, 171, 172, 180, 180, 180, 179, 324, 120, 179, 181, 149, 150, 151, 184, 127, 128, 372,
    155, 466, 458, 142, 237, 135, 136, 130, 278, 331, 562, 528, 284, 251, 527, 171, 172, 338, 501, 342, 100, -1,  -1,
    179, 263, -1,  -1,  -1,  184, -1,  160, 161, 162, 163, 164, -1,  -1,  167, 168, 0,   170, 171, 172, 173, 174, 175,
    7,   177, -1,  -1,  -1,  7,   -1,  53,  15,  -1,  -1,  -1,  -1,  15,  -1,  22,  -1,  -1,  -1,  26,  22,  -1,  -1,
    -1,  26,  -1,  -1,  -1,  -1,  36,  -1,  -1,  39,  40,  36,  -1,  -1,  39,  40,  -1,  -1,  -1,  -1,  -1,  51,  52,
    -1,  -1,  -1,  51,  52,  -1,  -1,  -1,  100, 62,  -1,  53,  65,  -1,  62,  -1,  -1,  65,  -1,  -1,  -1,  -1,  114,
    -1,  -1,  -1,  -1,  -1,  120, -1,  -1,  -1,  -1,  86,  -1,  -1,  128, 90,  86,  -1,  -1,  53,  90,  135, 136, -1,
    -1,  -1,  -1,  -1,  -1,  -1,  105, -1,  -1,  -1,  -1,  105, 111, -1,  -1,  -1,  53,  111, -1,  -1,  -1,  -1,  160,
    161, 162, 163, 164, -1,  -1,  167, 168, -1,  170, 171, 172, 173, 174, 175, -1,  177, 128, -1,  100, -1,  -1,  -1,
    -1,  135, -1,  -1,  -1,  -1,  -1,  -1,  153, 154, 155, -1,  -1,  153, 154, 155, 120, 100, -1,  -1,  -1,  -1,  -1,
    -1,  128, -1,  -1,  -1,  -1,  163, 164, 135, 136, 167, 168, -1,  170, 171, 172, 173, 174, 175, -1,  177, -1,  128,
    -1,  -1,  -1,  -1,  -1,  -1,  135, 136, -1,  -1,  160, 161, 162, 163, 164, -1,  -1,  167, 168, -1,  170, 171, 172,
    173, 174, 175, -1,  177, -1,  -1,  -1,  160, 161, 162, 163, 164, -1,  -1,  167, 168, -1,  170, 171, 172, 173, 174,
    175, 24,  177, -1,  -1,  -1,  29,  30,  31,  32,  -1,  34,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  42,  -1,  -1,  -1,
    -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  68,
    -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  85,  -1,  87,  88,  -1,  -1,  -1,
    -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  102, -1,  -1,  -1,  106, -1,  108, -1,  -1,  -1,  -1,  -1,  -1,
    -1,  -1,  -1,  118};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] = {
    0,   7,   15,  22,  26,  36,  39,  40,  51,  52,  62,  65,  86,  90,  105, 111, 153, 154, 155, 186, 187, 188, 189,
    193, 195, 197, 198, 202, 203, 204, 216, 218, 221, 222, 223, 225, 228, 301, 302, 26,  3,   290, 3,   3,   290, 70,
    79,  109, 93,  93,  97,  289, 290, 79,  290, 70,  79,  109, 19,  59,  3,   303, 304, 152, 194, 194, 194, 0,   182,
    308, 111, 190, 190, 57,  179, 231, 232, 236, 3,   181, 179, 93,  126, 205, 205, 205, 290, 3,   199, 290, 122, 126,
    217, 93,  132, 217, 217, 217, 290, 124, 183, 188, 96,  123, 248, 231, 232, 9,   44,  80,  233, 234, 76,  233, 244,
    3,   4,   5,   6,   87,  103, 149, 150, 151, 184, 251, 252, 275, 276, 277, 278, 279, 280, 281, 282, 283, 4,   196,
    120, 3,   291, 290, 290, 82,  241, 92,  179, 224, 3,   226, 227, 45,  290, 200, 276, 200, 3,   290, 290, 231, 304,
    179, 279, 12,  237, 180, 180, 229, 230, 231, 236, 113, 235, 125, 229, 54,  72,  249, 4,   4,   180, 183, 137, 138,
    139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 268, 269, 270, 45,  130, 93,  124, 179, 224, 3,   45,  46,  47,
    84,  120, 134, 171, 172, 179, 254, 255, 256, 257, 258, 259, 260, 261, 263, 264, 265, 266, 267, 271, 272, 273, 274,
    275, 200, 3,   309, 63,  232, 160, 183, 241, 90,  219, 220, 111, 201, 201, 3,   191, 192, 238, 250, 253, 254, 244,
    233, 245, 246, 254, 244, 254, 113, 254, 117, 296, 297, 298, 268, 275, 290, 3,   228, 3,   27,  60,  206, 207, 208,
    215, 124, 179, 181, 179, 179, 179, 110, 254, 262, 45,  120, 255, 177, 255, 232, 254, 114, 131, 17,  53,  100, 120,
    127, 128, 135, 136, 160, 161, 162, 163, 164, 167, 168, 170, 171, 172, 173, 174, 175, 177, 97,  180, 183, 179, 254,
    227, 38,  48,  179, 180, 183, 93,  239, 240, 183, 3,   124, 294, 295, 249, 229, 183, 89,  115, 247, 249, 54,  54,
    62,  119, 133, 159, 299, 298, 179, 92,  24,  29,  30,  31,  32,  34,  42,  68,  85,  87,  88,  102, 106, 108, 118,
    209, 119, 179, 180, 183, 228, 180, 237, 3,   172, 232, 268, 254, 254, 262, 91,  110, 116, 179, 120, 250, 180, 180,
    254, 254, 255, 255, 100, 127, 179, 103, 120, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 279, 290, 3,   252, 217, 199, 252, 192, 179, 284, 285, 286, 287, 288, 290, 305, 241, 253, 3,   246, 296, 254,
    254, 159, 119, 129, 156, 157, 300, 309, 200, 179, 179, 211, 179, 179, 179, 210, 27,  60,  103, 120, 212, 213, 214,
    179, 309, 207, 250, 180, 93,  124, 107, 91,  116, 254, 254, 232, 178, 114, 255, 179, 232, 250, 103, 178, 180, 3,
    180, 228, 25,  66,  71,  77,  78,  94,  99,  306, 183, 124, 292, 293, 294, 69,  242, 62,  309, 158, 180, 6,   6,
    6,   6,   6,   119, 103, 214, 309, 180, 180, 254, 209, 254, 254, 116, 107, 180, 255, 232, 250, 180, 180, 180, 98,
    77,  77,  77,  98,  285, 3,   125, 300, 180, 180, 183, 180, 180, 180, 180, 180, 180, 116, 254, 180, 180, 293, 286,
    285, 179, 250, 6,   81,  130, 309, 50,  243, 180, 179, 254, 307, 180, 254, 3,   274, 180};

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] = {
    0,   185, 186, 187, 187, 188, 188, 188, 188, 188, 189, 189, 189, 189, 189, 189, 189, 189, 189, 189, 190, 190, 191,
    191, 192, 192, 193, 193, 193, 194, 194, 195, 196, 197, 197, 198, 198, 199, 200, 201, 201, 202, 203, 203, 203, 204,
    204, 204, 204, 204, 205, 205, 206, 206, 207, 207, 208, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
    209, 209, 209, 210, 210, 211, 211, 211, 212, 212, 213, 213, 214, 214, 214, 214, 215, 215, 216, 216, 216, 216, 217,
    217, 218, 219, 220, 221, 222, 223, 223, 224, 224, 225, 226, 226, 227, 228, 228, 228, 229, 229, 230, 230, 231, 231,
    232, 232, 233, 234, 234, 234, 235, 235, 236, 237, 237, 238, 239, 239, 240, 241, 241, 242, 242, 243, 243, 244, 244,
    245, 245, 246, 247, 247, 247, 248, 248, 249, 249, 249, 249, 249, 249, 250, 250, 251, 251, 252, 252, 253, 254, 254,
    254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 256, 256, 257, 257, 257, 257, 257, 258, 258,
    258, 258, 258, 258, 258, 258, 258, 258, 258, 259, 259, 260, 260, 260, 260, 261, 261, 261, 261, 262, 262, 263, 263,
    264, 264, 264, 264, 264, 264, 264, 265, 265, 266, 267, 268, 268, 268, 268, 268, 268, 269, 269, 269, 269, 269, 269,
    270, 270, 271, 272, 273, 274, 274, 274, 274, 275, 275, 275, 275, 275, 275, 275, 276, 277, 277, 278, 278, 279, 280,
    281, 282, 282, 282, 283, 284, 284, 285, 285, 286, 286, 287, 287, 288, 289, 290, 290, 291, 291, 292, 292, 293, 293,
    294, 294, 295, 295, 296, 296, 297, 297, 298, 298, 299, 299, 299, 299, 300, 300, 300, 301, 301, 302, 303, 303, 304,
    305, 305, 305, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 307, 308, 308, 309, 309};

/* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] = {
    0, 2, 2, 1, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 0, 1, 3, 1, 4, 2, 2, 2, 1, 0, 4, 1, 2, 5, 7,
    5, 1, 1, 3, 0, 5, 2, 3, 2, 8, 7, 6, 9, 7, 3, 0, 1, 3, 1, 1, 3, 1, 4, 4, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 4,
    3, 0, 5, 3, 0, 1, 0, 1, 2, 2, 1, 1, 2, 5, 4, 4, 4, 3, 4, 2, 0, 5, 1, 4, 4, 2, 8, 5, 3, 0, 5, 1, 3, 3, 2, 2,
    6, 1, 1, 1, 3, 3, 3, 4, 6, 2, 1, 1, 1, 1, 0, 7, 1, 0, 1, 1, 0, 2, 2, 0, 4, 0, 2, 0, 3, 0, 1, 3, 2, 1, 1, 0,
    2, 0, 2, 2, 4, 2, 4, 0, 1, 3, 1, 0, 1, 3, 2, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 2, 2, 2,
    3, 4, 1, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 5, 6, 5, 6, 4, 6, 3, 5, 4, 5, 4, 5, 3, 3, 3, 3, 3, 3, 3, 3, 5,
    6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 5, 1, 3, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 2, 2, 3, 2, 1, 1, 3, 1, 1, 1, 4, 1, 3, 2, 1, 1, 3, 1, 0, 1, 5, 1, 0, 2, 1, 1, 0, 1, 0, 1, 2, 3, 5, 1, 3,
    1, 2, 2, 1, 0, 1, 0, 2, 1, 3, 3, 4, 6, 8, 1, 2, 1, 2, 1, 2, 1, 1, 1, 0, 1, 1, 0, 1, 3};

#define yyerrok (yyerrstatus = 0)
#define yyclearin (yychar = YYEMPTY)
#define YYEMPTY (-2)
#define YYEOF 0

#define YYACCEPT goto yyacceptlab
#define YYABORT goto yyabortlab
#define YYERROR goto yyerrorlab

#define YYRECOVERING() (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                                \
  do                                                                          \
    if (yychar == YYEMPTY) {                                                  \
      yychar = (Token);                                                       \
      yylval = (Value);                                                       \
      YYPOPSTACK(yylen);                                                      \
      yystate = *yyssp;                                                       \
      goto yybackup;                                                          \
    } else {                                                                  \
      yyerror(&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                                \
    }                                                                         \
  while (0)

/* Error token number */
#define YYTERROR 1
#define YYERRCODE 256

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(Current, Rhs, N)                                              \
  do                                                                                 \
    if (N) {                                                                         \
      (Current).first_line = YYRHSLOC(Rhs, 1).first_line;                            \
      (Current).first_column = YYRHSLOC(Rhs, 1).first_column;                        \
      (Current).last_line = YYRHSLOC(Rhs, N).last_line;                              \
      (Current).last_column = YYRHSLOC(Rhs, N).last_column;                          \
    } else {                                                                         \
      (Current).first_line = (Current).last_line = YYRHSLOC(Rhs, 0).last_line;       \
      (Current).first_column = (Current).last_column = YYRHSLOC(Rhs, 0).last_column; \
    }                                                                                \
  while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])

/* Enable debugging if requested.  */
#if HSQL_DEBUG

#ifndef YYFPRINTF
#include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#define YYFPRINTF fprintf
#endif

#define YYDPRINTF(Args)          \
  do {                           \
    if (yydebug) YYFPRINTF Args; \
  } while (0)

/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
#if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int yy_location_print_(FILE* yyo, YYLTYPE const* const yylocp) {
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line) {
    res += YYFPRINTF(yyo, "%d", yylocp->first_line);
    if (0 <= yylocp->first_column) res += YYFPRINTF(yyo, ".%d", yylocp->first_column);
  }
  if (0 <= yylocp->last_line) {
    if (yylocp->first_line < yylocp->last_line) {
      res += YYFPRINTF(yyo, "-%d", yylocp->last_line);
      if (0 <= end_col) res += YYFPRINTF(yyo, ".%d", end_col);
    } else if (0 <= end_col && yylocp->first_column < end_col)
      res += YYFPRINTF(yyo, "-%d", end_col);
  }
  return res;
}

#define YY_LOCATION_PRINT(File, Loc) yy_location_print_(File, &(Loc))

#else
#define YY_LOCATION_PRINT(File, Loc) ((void)0)
#endif
#endif

#define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                 \
    if (yydebug) {                                                     \
      YYFPRINTF(stderr, "%s ", Title);                                 \
      yy_symbol_print(stderr, Type, Value, Location, result, scanner); \
      YYFPRINTF(stderr, "\n");                                         \
    }                                                                  \
  } while (0)

/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void yy_symbol_value_print(FILE* yyo, int yytype, YYSTYPE const* const yyvaluep,
                                  YYLTYPE const* const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner) {
  FILE* yyoutput = yyo;
  YYUSE(yyoutput);
  YYUSE(yylocationp);
  YYUSE(result);
  YYUSE(scanner);
  if (!yyvaluep) return;
#ifdef YYPRINT
  if (yytype < YYNTOKENS) YYPRINT(yyo, yytoknum[yytype], *yyvaluep);
#endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE(yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void yy_symbol_print(FILE* yyo, int yytype, YYSTYPE const* const yyvaluep, YYLTYPE const* const yylocationp,
                            hsql::SQLParserResult* result, yyscan_t scanner) {
  YYFPRINTF(yyo, "%s %s (", yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT(yyo, *yylocationp);
  YYFPRINTF(yyo, ": ");
  yy_symbol_value_print(yyo, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF(yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void yy_stack_print(yy_state_t* yybottom, yy_state_t* yytop) {
  YYFPRINTF(stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++) {
    int yybot = *yybottom;
    YYFPRINTF(stderr, " %d", yybot);
  }
  YYFPRINTF(stderr, "\n");
}

#define YY_STACK_PRINT(Bottom, Top)               \
  do {                                            \
    if (yydebug) yy_stack_print((Bottom), (Top)); \
  } while (0)

/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void yy_reduce_print(yy_state_t* yyssp, YYSTYPE* yyvsp, YYLTYPE* yylsp, int yyrule,
                            hsql::SQLParserResult* result, yyscan_t scanner) {
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF(stderr, "Reducing stack by rule %d (line %d):\n", yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++) {
    YYFPRINTF(stderr, "   $%d = ", yyi + 1);
    yy_symbol_print(stderr, yystos[+yyssp[yyi + 1 - yynrhs]], &yyvsp[(yyi + 1) - (yynrhs)],
                    &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
    YYFPRINTF(stderr, "\n");
  }
}

#define YY_REDUCE_PRINT(Rule)                                                 \
  do {                                                                        \
    if (yydebug) yy_reduce_print(yyssp, yyvsp, yylsp, Rule, result, scanner); \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
#define YYDPRINTF(Args)
#define YY_SYMBOL_PRINT(Title, Type, Value, Location)
#define YY_STACK_PRINT(Bottom, Top)
#define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

#if YYERROR_VERBOSE

#ifndef yystrlen
#if defined __GLIBC__ && defined _STRING_H
#define yystrlen(S) (YY_CAST(YYPTRDIFF_T, strlen(S)))
#else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T yystrlen(const char* yystr) {
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++) continue;
  return yylen;
}
#endif
#endif

#ifndef yystpcpy
#if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#define yystpcpy stpcpy
#else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char* yystpcpy(char* yydest, const char* yysrc) {
  char* yyd = yydest;
  const char* yys = yysrc;

  while ((*yyd++ = *yys++) != '\0') continue;

  return yyd - 1;
}
#endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T yytnamerr(char* yyres, const char* yystr) {
  if (*yystr == '"') {
    YYPTRDIFF_T yyn = 0;
    char const* yyp = yystr;

    for (;;) switch (*++yyp) {
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
          if (yyres) yyres[yyn] = *yyp;
          yyn++;
          break;

        case '"':
          if (yyres) yyres[yyn] = '\0';
          return yyn;
      }
  do_not_strip_quotes:;
  }

  if (yyres)
    return yystpcpy(yyres, yystr) - yyres;
  else
    return yystrlen(yystr);
}
#endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int yysyntax_error(YYPTRDIFF_T* yymsg_alloc, char** yymsg, yy_state_t* yyssp, int yytoken) {
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char* yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const* yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
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
  if (yytoken != YYEMPTY) {
    int yyn = yypact[+*yyssp];
    YYPTRDIFF_T yysize0 = yytnamerr(YY_NULLPTR, yytname[yytoken]);
    yysize = yysize0;
    yyarg[yycount++] = yytname[yytoken];
    if (!yypact_value_is_default(yyn)) {
      /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR && !yytable_value_is_error(yytable[yyx + yyn])) {
          if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM) {
            yycount = 1;
            yysize = yysize0;
            break;
          }
          yyarg[yycount++] = yytname[yyx];
          {
            YYPTRDIFF_T yysize1 = yysize + yytnamerr(YY_NULLPTR, yytname[yyx]);
            if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
              yysize = yysize1;
            else
              return 2;
          }
        }
    }
  }

  switch (yycount) {
#define YYCASE_(N, S) \
  case N:             \
    yyformat = S;     \
    break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
  }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen(yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize) {
    *yymsg_alloc = 2 * yysize;
    if (!(yysize <= *yymsg_alloc && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM)) *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
    return 1;
  }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char* yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount) {
        yyp += yytnamerr(yyp, yyarg[yyi++]);
        yyformat += 2;
      } else {
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

static void yydestruct(const char* yymsg, int yytype, YYSTYPE* yyvaluep, YYLTYPE* yylocationp,
                       hsql::SQLParserResult* result, yyscan_t scanner) {
  YYUSE(yyvaluep);
  YYUSE(yylocationp);
  YYUSE(result);
  YYUSE(scanner);
  if (!yymsg) yymsg = "Deleting";
  YY_SYMBOL_PRINT(yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype) {
    case 3: /* IDENTIFIER  */
#line 168 "bison_parser.y"
    {
      free((((*yyvaluep).sval)));
    }
#line 1980 "bison_parser.cpp"
    break;

    case 4: /* STRING  */
#line 168 "bison_parser.y"
    {
      free((((*yyvaluep).sval)));
    }
#line 1986 "bison_parser.cpp"
    break;

    case 5: /* FLOATVAL  */
#line 166 "bison_parser.y"
    {
    }
#line 1992 "bison_parser.cpp"
    break;

    case 6: /* INTVAL  */
#line 166 "bison_parser.y"
    {
    }
#line 1998 "bison_parser.cpp"
    break;

    case 187: /* statement_list  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2011 "bison_parser.cpp"
    break;

    case 188: /* statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).statement));
    }
#line 2017 "bison_parser.cpp"
    break;

    case 189: /* preparable_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).statement));
    }
#line 2023 "bison_parser.cpp"
    break;

    case 190: /* opt_hints  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2036 "bison_parser.cpp"
    break;

    case 191: /* hint_list  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2049 "bison_parser.cpp"
    break;

    case 192: /* hint  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2055 "bison_parser.cpp"
    break;

    case 193: /* transaction_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).transaction_stmt));
    }
#line 2061 "bison_parser.cpp"
    break;

    case 195: /* prepare_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).prep_stmt));
    }
#line 2067 "bison_parser.cpp"
    break;

    case 196: /* prepare_target_query  */
#line 168 "bison_parser.y"
    {
      free((((*yyvaluep).sval)));
    }
#line 2073 "bison_parser.cpp"
    break;

    case 197: /* execute_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).exec_stmt));
    }
#line 2079 "bison_parser.cpp"
    break;

    case 198: /* import_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).import_stmt));
    }
#line 2085 "bison_parser.cpp"
    break;

    case 199: /* file_type  */
#line 166 "bison_parser.y"
    {
    }
#line 2091 "bison_parser.cpp"
    break;

    case 200: /* file_path  */
#line 168 "bison_parser.y"
    {
      free((((*yyvaluep).sval)));
    }
#line 2097 "bison_parser.cpp"
    break;

    case 201: /* opt_file_type  */
#line 166 "bison_parser.y"
    {
    }
#line 2103 "bison_parser.cpp"
    break;

    case 202: /* export_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).export_stmt));
    }
#line 2109 "bison_parser.cpp"
    break;

    case 203: /* show_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).show_stmt));
    }
#line 2115 "bison_parser.cpp"
    break;

    case 204: /* create_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).create_stmt));
    }
#line 2121 "bison_parser.cpp"
    break;

    case 205: /* opt_not_exists  */
#line 166 "bison_parser.y"
    {
    }
#line 2127 "bison_parser.cpp"
    break;

    case 206: /* table_elem_commalist  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2140 "bison_parser.cpp"
    break;

    case 207: /* table_elem  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table_element_t));
    }
#line 2146 "bison_parser.cpp"
    break;

    case 208: /* column_def  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).column_t));
    }
#line 2152 "bison_parser.cpp"
    break;

    case 209: /* column_type  */
#line 166 "bison_parser.y"
    {
    }
#line 2158 "bison_parser.cpp"
    break;

    case 210: /* opt_time_precision  */
#line 166 "bison_parser.y"
    {
    }
#line 2164 "bison_parser.cpp"
    break;

    case 211: /* opt_decimal_specification  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).ival_pair));
    }
#line 2170 "bison_parser.cpp"
    break;

    case 212: /* opt_column_constraints  */
#line 166 "bison_parser.y"
    {
    }
#line 2176 "bison_parser.cpp"
    break;

    case 213: /* column_constraint_list  */
#line 166 "bison_parser.y"
    {
    }
#line 2182 "bison_parser.cpp"
    break;

    case 214: /* column_constraint  */
#line 166 "bison_parser.y"
    {
    }
#line 2188 "bison_parser.cpp"
    break;

    case 215: /* table_constraint  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table_constraint_t));
    }
#line 2194 "bison_parser.cpp"
    break;

    case 216: /* drop_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).drop_stmt));
    }
#line 2200 "bison_parser.cpp"
    break;

    case 217: /* opt_exists  */
#line 166 "bison_parser.y"
    {
    }
#line 2206 "bison_parser.cpp"
    break;

    case 218: /* alter_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).alter_stmt));
    }
#line 2212 "bison_parser.cpp"
    break;

    case 219: /* alter_action  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).alter_action_t));
    }
#line 2218 "bison_parser.cpp"
    break;

    case 220: /* drop_action  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).drop_action_t));
    }
#line 2224 "bison_parser.cpp"
    break;

    case 221: /* delete_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).delete_stmt));
    }
#line 2230 "bison_parser.cpp"
    break;

    case 222: /* truncate_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).delete_stmt));
    }
#line 2236 "bison_parser.cpp"
    break;

    case 223: /* insert_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).insert_stmt));
    }
#line 2242 "bison_parser.cpp"
    break;

    case 224: /* opt_column_list  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2255 "bison_parser.cpp"
    break;

    case 225: /* update_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).update_stmt));
    }
#line 2261 "bison_parser.cpp"
    break;

    case 226: /* update_clause_commalist  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2274 "bison_parser.cpp"
    break;

    case 227: /* update_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).update_t));
    }
#line 2280 "bison_parser.cpp"
    break;

    case 228: /* select_statement  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).select_stmt));
    }
#line 2286 "bison_parser.cpp"
    break;

    case 229: /* select_within_set_operation  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).select_stmt));
    }
#line 2292 "bison_parser.cpp"
    break;

    case 230: /* select_within_set_operation_no_parentheses  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).select_stmt));
    }
#line 2298 "bison_parser.cpp"
    break;

    case 231: /* select_with_paren  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).select_stmt));
    }
#line 2304 "bison_parser.cpp"
    break;

    case 232: /* select_no_paren  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).select_stmt));
    }
#line 2310 "bison_parser.cpp"
    break;

    case 233: /* set_operator  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).set_operator_t));
    }
#line 2316 "bison_parser.cpp"
    break;

    case 234: /* set_type  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).set_operator_t));
    }
#line 2322 "bison_parser.cpp"
    break;

    case 235: /* opt_all  */
#line 166 "bison_parser.y"
    {
    }
#line 2328 "bison_parser.cpp"
    break;

    case 236: /* select_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).select_stmt));
    }
#line 2334 "bison_parser.cpp"
    break;

    case 237: /* opt_distinct  */
#line 166 "bison_parser.y"
    {
    }
#line 2340 "bison_parser.cpp"
    break;

    case 238: /* select_list  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2353 "bison_parser.cpp"
    break;

    case 239: /* opt_from_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table));
    }
#line 2359 "bison_parser.cpp"
    break;

    case 240: /* from_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table));
    }
#line 2365 "bison_parser.cpp"
    break;

    case 241: /* opt_where  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2371 "bison_parser.cpp"
    break;

    case 242: /* opt_group  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).group_t));
    }
#line 2377 "bison_parser.cpp"
    break;

    case 243: /* opt_having  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2383 "bison_parser.cpp"
    break;

    case 244: /* opt_order  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2396 "bison_parser.cpp"
    break;

    case 245: /* order_list  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2409 "bison_parser.cpp"
    break;

    case 246: /* order_desc  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).order));
    }
#line 2415 "bison_parser.cpp"
    break;

    case 247: /* opt_order_type  */
#line 166 "bison_parser.y"
    {
    }
#line 2421 "bison_parser.cpp"
    break;

    case 248: /* opt_top  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).limit));
    }
#line 2427 "bison_parser.cpp"
    break;

    case 249: /* opt_limit  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).limit));
    }
#line 2433 "bison_parser.cpp"
    break;

    case 250: /* expr_list  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2446 "bison_parser.cpp"
    break;

    case 251: /* opt_literal_list  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2459 "bison_parser.cpp"
    break;

    case 252: /* literal_list  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2472 "bison_parser.cpp"
    break;

    case 253: /* expr_alias  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2478 "bison_parser.cpp"
    break;

    case 254: /* expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2484 "bison_parser.cpp"
    break;

    case 255: /* operand  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2490 "bison_parser.cpp"
    break;

    case 256: /* scalar_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2496 "bison_parser.cpp"
    break;

    case 257: /* unary_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2502 "bison_parser.cpp"
    break;

    case 258: /* binary_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2508 "bison_parser.cpp"
    break;

    case 259: /* logic_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2514 "bison_parser.cpp"
    break;

    case 260: /* in_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2520 "bison_parser.cpp"
    break;

    case 261: /* case_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2526 "bison_parser.cpp"
    break;

    case 262: /* case_list  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2532 "bison_parser.cpp"
    break;

    case 263: /* exists_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2538 "bison_parser.cpp"
    break;

    case 264: /* comp_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2544 "bison_parser.cpp"
    break;

    case 265: /* function_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2550 "bison_parser.cpp"
    break;

    case 266: /* extract_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2556 "bison_parser.cpp"
    break;

    case 267: /* cast_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2562 "bison_parser.cpp"
    break;

    case 268: /* datetime_field  */
#line 166 "bison_parser.y"
    {
    }
#line 2568 "bison_parser.cpp"
    break;

    case 269: /* datetime_field_plural  */
#line 166 "bison_parser.y"
    {
    }
#line 2574 "bison_parser.cpp"
    break;

    case 270: /* duration_field  */
#line 166 "bison_parser.y"
    {
    }
#line 2580 "bison_parser.cpp"
    break;

    case 271: /* array_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2586 "bison_parser.cpp"
    break;

    case 272: /* array_index  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2592 "bison_parser.cpp"
    break;

    case 273: /* between_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2598 "bison_parser.cpp"
    break;

    case 274: /* column_name  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2604 "bison_parser.cpp"
    break;

    case 275: /* literal  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2610 "bison_parser.cpp"
    break;

    case 276: /* string_literal  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2616 "bison_parser.cpp"
    break;

    case 277: /* bool_literal  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2622 "bison_parser.cpp"
    break;

    case 278: /* num_literal  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2628 "bison_parser.cpp"
    break;

    case 279: /* int_literal  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2634 "bison_parser.cpp"
    break;

    case 280: /* null_literal  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2640 "bison_parser.cpp"
    break;

    case 281: /* date_literal  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2646 "bison_parser.cpp"
    break;

    case 282: /* interval_literal  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2652 "bison_parser.cpp"
    break;

    case 283: /* param_expr  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2658 "bison_parser.cpp"
    break;

    case 284: /* table_ref  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table));
    }
#line 2664 "bison_parser.cpp"
    break;

    case 285: /* table_ref_atomic  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table));
    }
#line 2670 "bison_parser.cpp"
    break;

    case 286: /* nonjoin_table_ref_atomic  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table));
    }
#line 2676 "bison_parser.cpp"
    break;

    case 287: /* table_ref_commalist  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2689 "bison_parser.cpp"
    break;

    case 288: /* table_ref_name  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table));
    }
#line 2695 "bison_parser.cpp"
    break;

    case 289: /* table_ref_name_no_alias  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table));
    }
#line 2701 "bison_parser.cpp"
    break;

    case 290: /* table_name  */
#line 167 "bison_parser.y"
    {
      free((((*yyvaluep).table_name).name));
      free((((*yyvaluep).table_name).schema));
    }
#line 2707 "bison_parser.cpp"
    break;

    case 291: /* opt_index_name  */
#line 168 "bison_parser.y"
    {
      free((((*yyvaluep).sval)));
    }
#line 2713 "bison_parser.cpp"
    break;

    case 292: /* table_alias  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).alias_t));
    }
#line 2719 "bison_parser.cpp"
    break;

    case 293: /* opt_table_alias  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).alias_t));
    }
#line 2725 "bison_parser.cpp"
    break;

    case 294: /* alias  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).alias_t));
    }
#line 2731 "bison_parser.cpp"
    break;

    case 295: /* opt_alias  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).alias_t));
    }
#line 2737 "bison_parser.cpp"
    break;

    case 296: /* opt_locking_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).locking_clause_vec));
    }
#line 2743 "bison_parser.cpp"
    break;

    case 297: /* opt_locking_clause_list  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).locking_clause_vec));
    }
#line 2749 "bison_parser.cpp"
    break;

    case 298: /* locking_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).locking_t));
    }
#line 2755 "bison_parser.cpp"
    break;

    case 299: /* row_lock_mode  */
#line 166 "bison_parser.y"
    {
    }
#line 2761 "bison_parser.cpp"
    break;

    case 300: /* opt_row_lock_policy  */
#line 166 "bison_parser.y"
    {
    }
#line 2767 "bison_parser.cpp"
    break;

    case 301: /* opt_with_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).with_description_vec));
    }
#line 2773 "bison_parser.cpp"
    break;

    case 302: /* with_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).with_description_vec));
    }
#line 2779 "bison_parser.cpp"
    break;

    case 303: /* with_description_list  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).with_description_vec));
    }
#line 2785 "bison_parser.cpp"
    break;

    case 304: /* with_description  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).with_description_t));
    }
#line 2791 "bison_parser.cpp"
    break;

    case 305: /* join_clause  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).table));
    }
#line 2797 "bison_parser.cpp"
    break;

    case 306: /* opt_join_type  */
#line 166 "bison_parser.y"
    {
    }
#line 2803 "bison_parser.cpp"
    break;

    case 307: /* join_condition  */
#line 177 "bison_parser.y"
    {
      delete (((*yyvaluep).expr));
    }
#line 2809 "bison_parser.cpp"
    break;

    case 309: /* ident_commalist  */
#line 169 "bison_parser.y"
    {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2822 "bison_parser.cpp"
    break;

    default:
      break;
  }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/*----------.
| yyparse.  |
`----------*/

int yyparse(hsql::SQLParserResult* result, yyscan_t scanner) {
  /* The lookahead symbol.  */
  int yychar;

  /* The semantic value of the lookahead symbol.  */
  /* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
  YY_INITIAL_VALUE(static YYSTYPE yyval_default;)
  YYSTYPE yylval YY_INITIAL_VALUE(= yyval_default);

  /* Location data for the lookahead symbol.  */
  static YYLTYPE yyloc_default
#if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
      = { 1,
          1,
          1,
          1 }
#endif
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
  yy_state_t* yyss;
  yy_state_t* yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE* yyvs;
  YYSTYPE* yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE* yyls;
  YYLTYPE* yylsp;

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
  char* yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N) (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF((stderr, "Starting parse\n"));

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

#line 2940 "bison_parser.cpp"

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
  YYDPRINTF((stderr, "Entering state %d\n", yystate));
  YY_ASSERT(0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST(yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
  {
    /* Get the current used size of the three stacks, in elements.  */
    YYPTRDIFF_T yysize = yyssp - yyss + 1;

#if defined yyoverflow
    {
      /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
      yy_state_t* yyss1 = yyss;
      YYSTYPE* yyvs1 = yyvs;
      YYLTYPE* yyls1 = yyls;

      /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
      yyoverflow(YY_("memory exhausted"), &yyss1, yysize * YYSIZEOF(*yyssp), &yyvs1, yysize * YYSIZEOF(*yyvsp), &yyls1,
                 yysize * YYSIZEOF(*yylsp), &yystacksize);
      yyss = yyss1;
      yyvs = yyvs1;
      yyls = yyls1;
    }
#else /* defined YYSTACK_RELOCATE */
    /* Extend the stack our own way.  */
    if (YYMAXDEPTH <= yystacksize) goto yyexhaustedlab;
    yystacksize *= 2;
    if (YYMAXDEPTH < yystacksize) yystacksize = YYMAXDEPTH;

    {
      yy_state_t* yyss1 = yyss;
      union yyalloc* yyptr = YY_CAST(union yyalloc*, YYSTACK_ALLOC(YY_CAST(YYSIZE_T, YYSTACK_BYTES(yystacksize))));
      if (!yyptr) goto yyexhaustedlab;
      YYSTACK_RELOCATE(yyss_alloc, yyss);
      YYSTACK_RELOCATE(yyvs_alloc, yyvs);
      YYSTACK_RELOCATE(yyls_alloc, yyls);
#undef YYSTACK_RELOCATE
      if (yyss1 != yyssa) YYSTACK_FREE(yyss1);
    }
#endif

    yyssp = yyss + yysize - 1;
    yyvsp = yyvs + yysize - 1;
    yylsp = yyls + yysize - 1;

    YY_IGNORE_USELESS_CAST_BEGIN
    YYDPRINTF((stderr, "Stack size increased to %ld\n", YY_CAST(long, yystacksize)));
    YY_IGNORE_USELESS_CAST_END

    if (yyss + yystacksize - 1 <= yyssp) YYABORT;
  }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL) YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default(yyn)) goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY) {
    YYDPRINTF((stderr, "Reading a token: "));
    yychar = yylex(&yylval, &yylloc, scanner);
  }

  if (yychar <= YYEOF) {
    yychar = yytoken = YYEOF;
    YYDPRINTF((stderr, "Now at end of input.\n"));
  } else {
    yytoken = YYTRANSLATE(yychar);
    YY_SYMBOL_PRINT("Next token is", yytoken, &yylval, &yylloc);
  }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken) goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0) {
    if (yytable_value_is_error(yyn)) goto yyerrlab;
    yyn = -yyn;
    goto yyreduce;
  }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus) yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT("Shifting", yytoken, &yylval, &yylloc);
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
  if (yyn == 0) goto yyerrlab;
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
  yyval = yyvsp[1 - yylen];

  /* Default location. */
  YYLLOC_DEFAULT(yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT(yyn);
  switch (yyn) {
    case 2:
#line 304 "bison_parser.y"
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
#line 3155 "bison_parser.cpp"
    break;

    case 3:
#line 323 "bison_parser.y"
    {
      (yyvsp[0].statement)->stringLength = yylloc.string_length;
      yylloc.string_length = 0;
      (yyval.stmt_vec) = new std::vector<SQLStatement*>();
      (yyval.stmt_vec)->push_back((yyvsp[0].statement));
    }
#line 3166 "bison_parser.cpp"
    break;

    case 4:
#line 329 "bison_parser.y"
    {
      (yyvsp[0].statement)->stringLength = yylloc.string_length;
      yylloc.string_length = 0;
      (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
      (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
    }
#line 3177 "bison_parser.cpp"
    break;

    case 5:
#line 336 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[-1].prep_stmt);
      (yyval.statement)->hints = (yyvsp[0].expr_vec);
    }
#line 3186 "bison_parser.cpp"
    break;

    case 6:
#line 340 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[-1].statement);
      (yyval.statement)->hints = (yyvsp[0].expr_vec);
    }
#line 3195 "bison_parser.cpp"
    break;

    case 7:
#line 344 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].show_stmt);
    }
#line 3201 "bison_parser.cpp"
    break;

    case 8:
#line 345 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].import_stmt);
    }
#line 3207 "bison_parser.cpp"
    break;

    case 9:
#line 346 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].export_stmt);
    }
#line 3213 "bison_parser.cpp"
    break;

    case 10:
#line 348 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].select_stmt);
    }
#line 3219 "bison_parser.cpp"
    break;

    case 11:
#line 349 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].create_stmt);
    }
#line 3225 "bison_parser.cpp"
    break;

    case 12:
#line 350 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].insert_stmt);
    }
#line 3231 "bison_parser.cpp"
    break;

    case 13:
#line 351 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].delete_stmt);
    }
#line 3237 "bison_parser.cpp"
    break;

    case 14:
#line 352 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].delete_stmt);
    }
#line 3243 "bison_parser.cpp"
    break;

    case 15:
#line 353 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].update_stmt);
    }
#line 3249 "bison_parser.cpp"
    break;

    case 16:
#line 354 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].drop_stmt);
    }
#line 3255 "bison_parser.cpp"
    break;

    case 17:
#line 355 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].alter_stmt);
    }
#line 3261 "bison_parser.cpp"
    break;

    case 18:
#line 356 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].exec_stmt);
    }
#line 3267 "bison_parser.cpp"
    break;

    case 19:
#line 357 "bison_parser.y"
    {
      (yyval.statement) = (yyvsp[0].transaction_stmt);
    }
#line 3273 "bison_parser.cpp"
    break;

    case 20:
#line 363 "bison_parser.y"
    {
      (yyval.expr_vec) = (yyvsp[-1].expr_vec);
    }
#line 3279 "bison_parser.cpp"
    break;

    case 21:
#line 364 "bison_parser.y"
    {
      (yyval.expr_vec) = nullptr;
    }
#line 3285 "bison_parser.cpp"
    break;

    case 22:
#line 366 "bison_parser.y"
    {
      (yyval.expr_vec) = new std::vector<Expr*>();
      (yyval.expr_vec)->push_back((yyvsp[0].expr));
    }
#line 3294 "bison_parser.cpp"
    break;

    case 23:
#line 370 "bison_parser.y"
    {
      (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
      (yyval.expr_vec) = (yyvsp[-2].expr_vec);
    }
#line 3303 "bison_parser.cpp"
    break;

    case 24:
#line 375 "bison_parser.y"
    {
      (yyval.expr) = Expr::make(kExprHint);
      (yyval.expr)->name = (yyvsp[0].sval);
    }
#line 3312 "bison_parser.cpp"
    break;

    case 25:
#line 379 "bison_parser.y"
    {
      (yyval.expr) = Expr::make(kExprHint);
      (yyval.expr)->name = (yyvsp[-3].sval);
      (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
    }
#line 3322 "bison_parser.cpp"
    break;

    case 26:
#line 389 "bison_parser.y"
    {
      (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
    }
#line 3328 "bison_parser.cpp"
    break;

    case 27:
#line 390 "bison_parser.y"
    {
      (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
    }
#line 3334 "bison_parser.cpp"
    break;

    case 28:
#line 391 "bison_parser.y"
    {
      (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
    }
#line 3340 "bison_parser.cpp"
    break;

    case 31:
#line 399 "bison_parser.y"
    {
      (yyval.prep_stmt) = new PrepareStatement();
      (yyval.prep_stmt)->name = (yyvsp[-2].sval);
      (yyval.prep_stmt)->query = (yyvsp[0].sval);
    }
#line 3350 "bison_parser.cpp"
    break;

    case 33:
#line 407 "bison_parser.y"
    {
      (yyval.exec_stmt) = new ExecuteStatement();
      (yyval.exec_stmt)->name = (yyvsp[0].sval);
    }
#line 3359 "bison_parser.cpp"
    break;

    case 34:
#line 411 "bison_parser.y"
    {
      (yyval.exec_stmt) = new ExecuteStatement();
      (yyval.exec_stmt)->name = (yyvsp[-3].sval);
      (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
    }
#line 3369 "bison_parser.cpp"
    break;

    case 35:
#line 422 "bison_parser.y"
    {
      (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
      (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
      (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
      (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
    }
#line 3380 "bison_parser.cpp"
    break;

    case 36:
#line 428 "bison_parser.y"
    {
      (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
      (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
      (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
      (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
    }
#line 3391 "bison_parser.cpp"
    break;

    case 37:
#line 435 "bison_parser.y"
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
#line 3410 "bison_parser.cpp"
    break;

    case 38:
#line 450 "bison_parser.y"
    {
      (yyval.sval) = strdup((yyvsp[0].expr)->name);
      delete (yyvsp[0].expr);
    }
#line 3419 "bison_parser.cpp"
    break;

    case 39:
#line 455 "bison_parser.y"
    {
      (yyval.import_type_t) = (yyvsp[0].import_type_t);
    }
#line 3425 "bison_parser.cpp"
    break;

    case 40:
#line 456 "bison_parser.y"
    {
      (yyval.import_type_t) = kImportAuto;
    }
#line 3431 "bison_parser.cpp"
    break;

    case 41:
#line 462 "bison_parser.y"
    {
      (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
      (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
      (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
      (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
    }
#line 3442 "bison_parser.cpp"
    break;

    case 42:
#line 474 "bison_parser.y"
    {
      (yyval.show_stmt) = new ShowStatement(kShowTables);
    }
#line 3448 "bison_parser.cpp"
    break;

    case 43:
#line 475 "bison_parser.y"
    {
      (yyval.show_stmt) = new ShowStatement(kShowColumns);
      (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
      (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
    }
#line 3458 "bison_parser.cpp"
    break;

    case 44:
#line 480 "bison_parser.y"
    {
      (yyval.show_stmt) = new ShowStatement(kShowColumns);
      (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
      (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
    }
#line 3468 "bison_parser.cpp"
    break;

    case 45:
#line 491 "bison_parser.y"
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
#line 3486 "bison_parser.cpp"
    break;

    case 46:
#line 504 "bison_parser.y"
    {
      (yyval.create_stmt) = new CreateStatement(kCreateTable);
      (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
      (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
      (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
      (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
      delete (yyvsp[-1].table_element_vec);
    }
#line 3499 "bison_parser.cpp"
    break;

    case 47:
#line 512 "bison_parser.y"
    {
      (yyval.create_stmt) = new CreateStatement(kCreateTable);
      (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
      (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
      (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
      (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
    }
#line 3511 "bison_parser.cpp"
    break;

    case 48:
#line 519 "bison_parser.y"
    {
      (yyval.create_stmt) = new CreateStatement(kCreateIndex);
      (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
      (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
      (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
      (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
    }
#line 3523 "bison_parser.cpp"
    break;

    case 49:
#line 526 "bison_parser.y"
    {
      (yyval.create_stmt) = new CreateStatement(kCreateView);
      (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
      (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
      (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
      (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
      (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
    }
#line 3536 "bison_parser.cpp"
    break;

    case 50:
#line 535 "bison_parser.y"
    {
      (yyval.bval) = true;
    }
#line 3542 "bison_parser.cpp"
    break;

    case 51:
#line 536 "bison_parser.y"
    {
      (yyval.bval) = false;
    }
#line 3548 "bison_parser.cpp"
    break;

    case 52:
#line 538 "bison_parser.y"
    {
      (yyval.table_element_vec) = new std::vector<TableElement*>();
      (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
    }
#line 3557 "bison_parser.cpp"
    break;

    case 53:
#line 542 "bison_parser.y"
    {
      (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
      (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
    }
#line 3566 "bison_parser.cpp"
    break;

    case 54:
#line 547 "bison_parser.y"
    {
      (yyval.table_element_t) = (yyvsp[0].column_t);
    }
#line 3572 "bison_parser.cpp"
    break;

    case 55:
#line 548 "bison_parser.y"
    {
      (yyval.table_element_t) = (yyvsp[0].table_constraint_t);
    }
#line 3578 "bison_parser.cpp"
    break;

    case 56:
#line 550 "bison_parser.y"
    {
      (yyval.column_t) =
          new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
      (yyval.column_t)->setNullableExplicit();
    }
#line 3587 "bison_parser.cpp"
    break;

    case 57:
#line 555 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::INT};
    }
#line 3593 "bison_parser.cpp"
    break;

    case 58:
#line 556 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)};
    }
#line 3599 "bison_parser.cpp"
    break;

    case 59:
#line 557 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)};
    }
#line 3605 "bison_parser.cpp"
    break;

    case 60:
#line 558 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::DATE};
    }
#line 3611 "bison_parser.cpp"
    break;

    case 61:
#line 559 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::DATETIME};
    }
#line 3617 "bison_parser.cpp"
    break;

    case 62:
#line 560 "bison_parser.y"
    {
      (yyval.column_type_t) =
          ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
      delete (yyvsp[0].ival_pair);
    }
#line 3626 "bison_parser.cpp"
    break;

    case 63:
#line 564 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::DOUBLE};
    }
#line 3632 "bison_parser.cpp"
    break;

    case 64:
#line 565 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::FLOAT};
    }
#line 3638 "bison_parser.cpp"
    break;

    case 65:
#line 566 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::INT};
    }
#line 3644 "bison_parser.cpp"
    break;

    case 66:
#line 567 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::LONG};
    }
#line 3650 "bison_parser.cpp"
    break;

    case 67:
#line 568 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::REAL};
    }
#line 3656 "bison_parser.cpp"
    break;

    case 68:
#line 569 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::SMALLINT};
    }
#line 3662 "bison_parser.cpp"
    break;

    case 69:
#line 570 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::TEXT};
    }
#line 3668 "bison_parser.cpp"
    break;

    case 70:
#line 571 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)};
    }
#line 3674 "bison_parser.cpp"
    break;

    case 71:
#line 572 "bison_parser.y"
    {
      (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)};
    }
#line 3680 "bison_parser.cpp"
    break;

    case 72:
#line 574 "bison_parser.y"
    {
      (yyval.ival) = (yyvsp[-1].ival);
    }
#line 3686 "bison_parser.cpp"
    break;

    case 73:
#line 575 "bison_parser.y"
    {
      (yyval.ival) = 0;
    }
#line 3692 "bison_parser.cpp"
    break;

    case 74:
#line 577 "bison_parser.y"
    {
      (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)};
    }
#line 3698 "bison_parser.cpp"
    break;

    case 75:
#line 578 "bison_parser.y"
    {
      (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0};
    }
#line 3704 "bison_parser.cpp"
    break;

    case 76:
#line 579 "bison_parser.y"
    {
      (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0};
    }
#line 3710 "bison_parser.cpp"
    break;

    case 77:
#line 581 "bison_parser.y"
    {
      (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec);
    }
#line 3716 "bison_parser.cpp"
    break;

    case 78:
#line 582 "bison_parser.y"
    {
      (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
    }
#line 3722 "bison_parser.cpp"
    break;

    case 79:
#line 584 "bison_parser.y"
    {
      (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
      (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
    }
#line 3731 "bison_parser.cpp"
    break;

    case 80:
#line 588 "bison_parser.y"
    {
      (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
      (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec);
    }
#line 3740 "bison_parser.cpp"
    break;

    case 81:
#line 593 "bison_parser.y"
    {
      (yyval.column_constraint_t) = ConstraintType::PrimaryKey;
    }
#line 3746 "bison_parser.cpp"
    break;

    case 82:
#line 594 "bison_parser.y"
    {
      (yyval.column_constraint_t) = ConstraintType::Unique;
    }
#line 3752 "bison_parser.cpp"
    break;

    case 83:
#line 595 "bison_parser.y"
    {
      (yyval.column_constraint_t) = ConstraintType::Null;
    }
#line 3758 "bison_parser.cpp"
    break;

    case 84:
#line 596 "bison_parser.y"
    {
      (yyval.column_constraint_t) = ConstraintType::NotNull;
    }
#line 3764 "bison_parser.cpp"
    break;

    case 85:
#line 598 "bison_parser.y"
    {
      (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec));
    }
#line 3770 "bison_parser.cpp"
    break;

    case 86:
#line 599 "bison_parser.y"
    {
      (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec));
    }
#line 3776 "bison_parser.cpp"
    break;

    case 87:
#line 607 "bison_parser.y"
    {
      (yyval.drop_stmt) = new DropStatement(kDropTable);
      (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
      (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
      (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
    }
#line 3787 "bison_parser.cpp"
    break;

    case 88:
#line 613 "bison_parser.y"
    {
      (yyval.drop_stmt) = new DropStatement(kDropView);
      (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
      (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
      (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
    }
#line 3798 "bison_parser.cpp"
    break;

    case 89:
#line 619 "bison_parser.y"
    {
      (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
      (yyval.drop_stmt)->ifExists = false;
      (yyval.drop_stmt)->name = (yyvsp[0].sval);
    }
#line 3808 "bison_parser.cpp"
    break;

    case 90:
#line 625 "bison_parser.y"
    {
      (yyval.drop_stmt) = new DropStatement(kDropIndex);
      (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
      (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
    }
#line 3818 "bison_parser.cpp"
    break;

    case 91:
#line 631 "bison_parser.y"
    {
      (yyval.bval) = true;
    }
#line 3824 "bison_parser.cpp"
    break;

    case 92:
#line 632 "bison_parser.y"
    {
      (yyval.bval) = false;
    }
#line 3830 "bison_parser.cpp"
    break;

    case 93:
#line 639 "bison_parser.y"
    {
      (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
      (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
      (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
    }
#line 3840 "bison_parser.cpp"
    break;

    case 94:
#line 645 "bison_parser.y"
    {
      (yyval.alter_action_t) = (yyvsp[0].drop_action_t);
    }
#line 3846 "bison_parser.cpp"
    break;

    case 95:
#line 647 "bison_parser.y"
    {
      (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
      (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
    }
#line 3855 "bison_parser.cpp"
    break;

    case 96:
#line 657 "bison_parser.y"
    {
      (yyval.delete_stmt) = new DeleteStatement();
      (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
      (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
      (yyval.delete_stmt)->expr = (yyvsp[0].expr);
    }
#line 3866 "bison_parser.cpp"
    break;

    case 97:
#line 664 "bison_parser.y"
    {
      (yyval.delete_stmt) = new DeleteStatement();
      (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
      (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
    }
#line 3876 "bison_parser.cpp"
    break;

    case 98:
#line 675 "bison_parser.y"
    {
      (yyval.insert_stmt) = new InsertStatement(kInsertValues);
      (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
      (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
      (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
      (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
    }
#line 3888 "bison_parser.cpp"
    break;

    case 99:
#line 682 "bison_parser.y"
    {
      (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
      (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
      (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
      (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
      (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
    }
#line 3900 "bison_parser.cpp"
    break;

    case 100:
#line 690 "bison_parser.y"
    {
      (yyval.str_vec) = (yyvsp[-1].str_vec);
    }
#line 3906 "bison_parser.cpp"
    break;

    case 101:
#line 691 "bison_parser.y"
    {
      (yyval.str_vec) = nullptr;
    }
#line 3912 "bison_parser.cpp"
    break;

    case 102:
#line 698 "bison_parser.y"
    {
      (yyval.update_stmt) = new UpdateStatement();
      (yyval.update_stmt)->table = (yyvsp[-3].table);
      (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
      (yyval.update_stmt)->where = (yyvsp[0].expr);
    }
#line 3923 "bison_parser.cpp"
    break;

    case 103:
#line 705 "bison_parser.y"
    {
      (yyval.update_vec) = new std::vector<UpdateClause*>();
      (yyval.update_vec)->push_back((yyvsp[0].update_t));
    }
#line 3932 "bison_parser.cpp"
    break;

    case 104:
#line 709 "bison_parser.y"
    {
      (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
      (yyval.update_vec) = (yyvsp[-2].update_vec);
    }
#line 3941 "bison_parser.cpp"
    break;

    case 105:
#line 714 "bison_parser.y"
    {
      (yyval.update_t) = new UpdateClause();
      (yyval.update_t)->column = (yyvsp[-2].sval);
      (yyval.update_t)->value = (yyvsp[0].expr);
    }
#line 3951 "bison_parser.cpp"
    break;

    case 106:
#line 724 "bison_parser.y"
    {
      (yyval.select_stmt) = (yyvsp[0].select_stmt);
      (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
    }
#line 3960 "bison_parser.cpp"
    break;

    case 107:
#line 728 "bison_parser.y"
    {
      (yyval.select_stmt) = (yyvsp[0].select_stmt);
      (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
    }
#line 3969 "bison_parser.cpp"
    break;

    case 108:
#line 732 "bison_parser.y"
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
#line 3985 "bison_parser.cpp"
    break;

    case 111:
#line 746 "bison_parser.y"
    {
      (yyval.select_stmt) = (yyvsp[0].select_stmt);
    }
#line 3991 "bison_parser.cpp"
    break;

    case 112:
#line 747 "bison_parser.y"
    {
      (yyval.select_stmt) = (yyvsp[-2].select_stmt);
      if ((yyval.select_stmt)->setOperations == nullptr) {
        (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
      }
      (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
      (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
    }
#line 4004 "bison_parser.cpp"
    break;

    case 113:
#line 756 "bison_parser.y"
    {
      (yyval.select_stmt) = (yyvsp[-1].select_stmt);
    }
#line 4010 "bison_parser.cpp"
    break;

    case 114:
#line 757 "bison_parser.y"
    {
      (yyval.select_stmt) = (yyvsp[-1].select_stmt);
    }
#line 4016 "bison_parser.cpp"
    break;

    case 115:
#line 759 "bison_parser.y"
    {
      (yyval.select_stmt) = (yyvsp[-3].select_stmt);
      (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

      // Limit could have been set by TOP.
      if ((yyvsp[-1].limit) != nullptr) {
        delete (yyval.select_stmt)->limit;
        (yyval.select_stmt)->limit = (yyvsp[-1].limit);
      }

      if ((yyvsp[0].locking_clause_vec) != nullptr) {
        (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
      }
    }
#line 4035 "bison_parser.cpp"
    break;

    case 116:
#line 773 "bison_parser.y"
    {
      (yyval.select_stmt) = (yyvsp[-5].select_stmt);
      if ((yyval.select_stmt)->setOperations == nullptr) {
        (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
      }
      (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
      (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
      (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
      (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
      (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
    }
#line 4051 "bison_parser.cpp"
    break;

    case 117:
#line 785 "bison_parser.y"
    {
      (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
      (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
    }
#line 4060 "bison_parser.cpp"
    break;

    case 118:
#line 790 "bison_parser.y"
    {
      (yyval.set_operator_t) = new SetOperation();
      (yyval.set_operator_t)->setType = SetType::kSetUnion;
    }
#line 4069 "bison_parser.cpp"
    break;

    case 119:
#line 794 "bison_parser.y"
    {
      (yyval.set_operator_t) = new SetOperation();
      (yyval.set_operator_t)->setType = SetType::kSetIntersect;
    }
#line 4078 "bison_parser.cpp"
    break;

    case 120:
#line 798 "bison_parser.y"
    {
      (yyval.set_operator_t) = new SetOperation();
      (yyval.set_operator_t)->setType = SetType::kSetExcept;
    }
#line 4087 "bison_parser.cpp"
    break;

    case 121:
#line 803 "bison_parser.y"
    {
      (yyval.bval) = true;
    }
#line 4093 "bison_parser.cpp"
    break;

    case 122:
#line 804 "bison_parser.y"
    {
      (yyval.bval) = false;
    }
#line 4099 "bison_parser.cpp"
    break;

    case 123:
#line 806 "bison_parser.y"
    {
      (yyval.select_stmt) = new SelectStatement();
      (yyval.select_stmt)->limit = (yyvsp[-5].limit);
      (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
      (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
      (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
      (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
      (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
    }
#line 4113 "bison_parser.cpp"
    break;

    case 124:
#line 816 "bison_parser.y"
    {
      (yyval.bval) = true;
    }
#line 4119 "bison_parser.cpp"
    break;

    case 125:
#line 817 "bison_parser.y"
    {
      (yyval.bval) = false;
    }
#line 4125 "bison_parser.cpp"
    break;

    case 127:
#line 821 "bison_parser.y"
    {
      (yyval.table) = (yyvsp[0].table);
    }
#line 4131 "bison_parser.cpp"
    break;

    case 128:
#line 822 "bison_parser.y"
    {
      (yyval.table) = nullptr;
    }
#line 4137 "bison_parser.cpp"
    break;

    case 129:
#line 824 "bison_parser.y"
    {
      (yyval.table) = (yyvsp[0].table);
    }
#line 4143 "bison_parser.cpp"
    break;

    case 130:
#line 826 "bison_parser.y"
    {
      (yyval.expr) = (yyvsp[0].expr);
    }
#line 4149 "bison_parser.cpp"
    break;

    case 131:
#line 827 "bison_parser.y"
    {
      (yyval.expr) = nullptr;
    }
#line 4155 "bison_parser.cpp"
    break;

    case 132:
#line 829 "bison_parser.y"
    {
      (yyval.group_t) = new GroupByDescription();
      (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
      (yyval.group_t)->having = (yyvsp[0].expr);
    }
#line 4165 "bison_parser.cpp"
    break;

    case 133:
#line 834 "bison_parser.y"
    {
      (yyval.group_t) = nullptr;
    }
#line 4171 "bison_parser.cpp"
    break;

    case 134:
#line 836 "bison_parser.y"
    {
      (yyval.expr) = (yyvsp[0].expr);
    }
#line 4177 "bison_parser.cpp"
    break;

    case 135:
#line 837 "bison_parser.y"
    {
      (yyval.expr) = nullptr;
    }
#line 4183 "bison_parser.cpp"
    break;

    case 136:
#line 839 "bison_parser.y"
    {
      (yyval.order_vec) = (yyvsp[0].order_vec);
    }
#line 4189 "bison_parser.cpp"
    break;

    case 137:
#line 840 "bison_parser.y"
    {
      (yyval.order_vec) = nullptr;
    }
#line 4195 "bison_parser.cpp"
    break;

    case 138:
#line 842 "bison_parser.y"
    {
      (yyval.order_vec) = new std::vector<OrderDescription*>();
      (yyval.order_vec)->push_back((yyvsp[0].order));
    }
#line 4204 "bison_parser.cpp"
    break;

    case 139:
#line 846 "bison_parser.y"
    {
      (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
      (yyval.order_vec) = (yyvsp[-2].order_vec);
    }
#line 4213 "bison_parser.cpp"
    break;

    case 140:
#line 851 "bison_parser.y"
    {
      (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr));
    }
#line 4219 "bison_parser.cpp"
    break;

    case 141:
#line 853 "bison_parser.y"
    {
      (yyval.order_type) = kOrderAsc;
    }
#line 4225 "bison_parser.cpp"
    break;

    case 142:
#line 854 "bison_parser.y"
    {
      (yyval.order_type) = kOrderDesc;
    }
#line 4231 "bison_parser.cpp"
    break;

    case 143:
#line 855 "bison_parser.y"
    {
      (yyval.order_type) = kOrderAsc;
    }
#line 4237 "bison_parser.cpp"
    break;

    case 144:
#line 859 "bison_parser.y"
    {
      (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr);
    }
#line 4243 "bison_parser.cpp"
    break;

    case 145:
#line 860 "bison_parser.y"
    {
      (yyval.limit) = nullptr;
    }
#line 4249 "bison_parser.cpp"
    break;

    case 146:
#line 862 "bison_parser.y"
    {
      (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr);
    }
#line 4255 "bison_parser.cpp"
    break;

    case 147:
#line 863 "bison_parser.y"
    {
      (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr));
    }
#line 4261 "bison_parser.cpp"
    break;

    case 148:
#line 864 "bison_parser.y"
    {
      (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 4267 "bison_parser.cpp"
    break;

    case 149:
#line 865 "bison_parser.y"
    {
      (yyval.limit) = new LimitDescription(nullptr, nullptr);
    }
#line 4273 "bison_parser.cpp"
    break;

    case 150:
#line 866 "bison_parser.y"
    {
      (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr));
    }
#line 4279 "bison_parser.cpp"
    break;

    case 151:
#line 867 "bison_parser.y"
    {
      (yyval.limit) = nullptr;
    }
#line 4285 "bison_parser.cpp"
    break;

    case 152:
#line 872 "bison_parser.y"
    {
      (yyval.expr_vec) = new std::vector<Expr*>();
      (yyval.expr_vec)->push_back((yyvsp[0].expr));
    }
#line 4294 "bison_parser.cpp"
    break;

    case 153:
#line 876 "bison_parser.y"
    {
      (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
      (yyval.expr_vec) = (yyvsp[-2].expr_vec);
    }
#line 4303 "bison_parser.cpp"
    break;

    case 154:
#line 881 "bison_parser.y"
    {
      (yyval.expr_vec) = (yyvsp[0].expr_vec);
    }
#line 4309 "bison_parser.cpp"
    break;

    case 155:
#line 882 "bison_parser.y"
    {
      (yyval.expr_vec) = nullptr;
    }
#line 4315 "bison_parser.cpp"
    break;

    case 156:
#line 884 "bison_parser.y"
    {
      (yyval.expr_vec) = new std::vector<Expr*>();
      (yyval.expr_vec)->push_back((yyvsp[0].expr));
    }
#line 4324 "bison_parser.cpp"
    break;

    case 157:
#line 888 "bison_parser.y"
    {
      (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
      (yyval.expr_vec) = (yyvsp[-2].expr_vec);
    }
#line 4333 "bison_parser.cpp"
    break;

    case 158:
#line 893 "bison_parser.y"
    {
      (yyval.expr) = (yyvsp[-1].expr);
      if ((yyvsp[0].alias_t)) {
        (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
        delete (yyvsp[0].alias_t);
      }
    }
#line 4345 "bison_parser.cpp"
    break;

    case 164:
#line 903 "bison_parser.y"
    {
      (yyval.expr) = (yyvsp[-1].expr);
    }
#line 4351 "bison_parser.cpp"
    break;

    case 174:
#line 905 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
    }
#line 4359 "bison_parser.cpp"
    break;

    case 177:
#line 911 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr));
    }
#line 4365 "bison_parser.cpp"
    break;

    case 178:
#line 912 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr));
    }
#line 4371 "bison_parser.cpp"
    break;

    case 179:
#line 913 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr));
    }
#line 4377 "bison_parser.cpp"
    break;

    case 180:
#line 914 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr));
    }
#line 4383 "bison_parser.cpp"
    break;

    case 181:
#line 915 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr)));
    }
#line 4389 "bison_parser.cpp"
    break;

    case 183:
#line 917 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr));
    }
#line 4395 "bison_parser.cpp"
    break;

    case 184:
#line 918 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr));
    }
#line 4401 "bison_parser.cpp"
    break;

    case 185:
#line 919 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr));
    }
#line 4407 "bison_parser.cpp"
    break;

    case 186:
#line 920 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr));
    }
#line 4413 "bison_parser.cpp"
    break;

    case 187:
#line 921 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr));
    }
#line 4419 "bison_parser.cpp"
    break;

    case 188:
#line 922 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr));
    }
#line 4425 "bison_parser.cpp"
    break;

    case 189:
#line 923 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr));
    }
#line 4431 "bison_parser.cpp"
    break;

    case 190:
#line 924 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr));
    }
#line 4437 "bison_parser.cpp"
    break;

    case 191:
#line 925 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr));
    }
#line 4443 "bison_parser.cpp"
    break;

    case 192:
#line 926 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr));
    }
#line 4449 "bison_parser.cpp"
    break;

    case 193:
#line 928 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr));
    }
#line 4455 "bison_parser.cpp"
    break;

    case 194:
#line 929 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr));
    }
#line 4461 "bison_parser.cpp"
    break;

    case 195:
#line 931 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec));
    }
#line 4467 "bison_parser.cpp"
    break;

    case 196:
#line 932 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec)));
    }
#line 4473 "bison_parser.cpp"
    break;

    case 197:
#line 933 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt));
    }
#line 4479 "bison_parser.cpp"
    break;

    case 198:
#line 934 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt)));
    }
#line 4485 "bison_parser.cpp"
    break;

    case 199:
#line 938 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr);
    }
#line 4491 "bison_parser.cpp"
    break;

    case 200:
#line 939 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr));
    }
#line 4497 "bison_parser.cpp"
    break;

    case 201:
#line 940 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr);
    }
#line 4503 "bison_parser.cpp"
    break;

    case 202:
#line 941 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr));
    }
#line 4509 "bison_parser.cpp"
    break;

    case 203:
#line 943 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr)));
    }
#line 4515 "bison_parser.cpp"
    break;

    case 204:
#line 944 "bison_parser.y"
    {
      (yyval.expr) =
          Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr)));
    }
#line 4521 "bison_parser.cpp"
    break;

    case 205:
#line 946 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt));
    }
#line 4527 "bison_parser.cpp"
    break;

    case 206:
#line 947 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt)));
    }
#line 4533 "bison_parser.cpp"
    break;

    case 207:
#line 949 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr));
    }
#line 4539 "bison_parser.cpp"
    break;

    case 208:
#line 950 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr));
    }
#line 4545 "bison_parser.cpp"
    break;

    case 209:
#line 951 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr));
    }
#line 4551 "bison_parser.cpp"
    break;

    case 210:
#line 952 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr));
    }
#line 4557 "bison_parser.cpp"
    break;

    case 211:
#line 953 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr));
    }
#line 4563 "bison_parser.cpp"
    break;

    case 212:
#line 954 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr));
    }
#line 4569 "bison_parser.cpp"
    break;

    case 213:
#line 955 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr));
    }
#line 4575 "bison_parser.cpp"
    break;

    case 214:
#line 957 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false);
    }
#line 4581 "bison_parser.cpp"
    break;

    case 215:
#line 958 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval));
    }
#line 4587 "bison_parser.cpp"
    break;

    case 216:
#line 960 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr));
    }
#line 4593 "bison_parser.cpp"
    break;

    case 217:
#line 962 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
    }
#line 4599 "bison_parser.cpp"
    break;

    case 218:
#line 964 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeSecond;
    }
#line 4605 "bison_parser.cpp"
    break;

    case 219:
#line 965 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeMinute;
    }
#line 4611 "bison_parser.cpp"
    break;

    case 220:
#line 966 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeHour;
    }
#line 4617 "bison_parser.cpp"
    break;

    case 221:
#line 967 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeDay;
    }
#line 4623 "bison_parser.cpp"
    break;

    case 222:
#line 968 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeMonth;
    }
#line 4629 "bison_parser.cpp"
    break;

    case 223:
#line 969 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeYear;
    }
#line 4635 "bison_parser.cpp"
    break;

    case 224:
#line 971 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeSecond;
    }
#line 4641 "bison_parser.cpp"
    break;

    case 225:
#line 972 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeMinute;
    }
#line 4647 "bison_parser.cpp"
    break;

    case 226:
#line 973 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeHour;
    }
#line 4653 "bison_parser.cpp"
    break;

    case 227:
#line 974 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeDay;
    }
#line 4659 "bison_parser.cpp"
    break;

    case 228:
#line 975 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeMonth;
    }
#line 4665 "bison_parser.cpp"
    break;

    case 229:
#line 976 "bison_parser.y"
    {
      (yyval.datetime_field) = kDatetimeYear;
    }
#line 4671 "bison_parser.cpp"
    break;

    case 232:
#line 980 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec));
    }
#line 4677 "bison_parser.cpp"
    break;

    case 233:
#line 982 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival);
    }
#line 4683 "bison_parser.cpp"
    break;

    case 234:
#line 984 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 4689 "bison_parser.cpp"
    break;

    case 235:
#line 986 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval));
    }
#line 4695 "bison_parser.cpp"
    break;

    case 236:
#line 987 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval));
    }
#line 4701 "bison_parser.cpp"
    break;

    case 237:
#line 988 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeStar();
    }
#line 4707 "bison_parser.cpp"
    break;

    case 238:
#line 989 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeStar((yyvsp[-2].sval));
    }
#line 4713 "bison_parser.cpp"
    break;

    case 246:
#line 993 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval));
    }
#line 4719 "bison_parser.cpp"
    break;

    case 247:
#line 995 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeLiteral(true);
    }
#line 4725 "bison_parser.cpp"
    break;

    case 248:
#line 996 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeLiteral(false);
    }
#line 4731 "bison_parser.cpp"
    break;

    case 249:
#line 998 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval));
    }
#line 4737 "bison_parser.cpp"
    break;

    case 251:
#line 1001 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival));
    }
#line 4743 "bison_parser.cpp"
    break;

    case 252:
#line 1003 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeNullLiteral();
    }
#line 4749 "bison_parser.cpp"
    break;

    case 253:
#line 1005 "bison_parser.y"
    {
      int day{0}, month{0}, year{0}, chars_parsed{0};
      // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
      if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 ||
          (yyvsp[0].sval)[chars_parsed] != 0) {
        free((yyvsp[0].sval));
        yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
        YYERROR;
      }
      (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
    }
#line 4764 "bison_parser.cpp"
    break;

    case 254:
#line 1016 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
      delete (yyvsp[-1].expr);
    }
#line 4773 "bison_parser.cpp"
    break;

    case 255:
#line 1020 "bison_parser.y"
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
#line 4789 "bison_parser.cpp"
    break;

    case 256:
#line 1031 "bison_parser.y"
    {
      int duration{0}, chars_parsed{0};
      // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
      char unit_string[8];
      // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
      if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 ||
          (yyvsp[0].sval)[chars_parsed] != 0) {
        free((yyvsp[0].sval));
        yyerror(&yyloc, result, scanner,
                "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
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
#line 4825 "bison_parser.cpp"
    break;

    case 257:
#line 1063 "bison_parser.y"
    {
      (yyval.expr) = Expr::makeParameter(yylloc.total_column);
      (yyval.expr)->ival2 = yyloc.param_list.size();
      yyloc.param_list.push_back((yyval.expr));
    }
#line 4835 "bison_parser.cpp"
    break;

    case 259:
#line 1072 "bison_parser.y"
    {
      (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
      auto tbl = new TableRef(kTableCrossProduct);
      tbl->list = (yyvsp[-2].table_vec);
      (yyval.table) = tbl;
    }
#line 4846 "bison_parser.cpp"
    break;

    case 263:
#line 1081 "bison_parser.y"
    {
      auto tbl = new TableRef(kTableSelect);
      tbl->select = (yyvsp[-2].select_stmt);
      tbl->alias = (yyvsp[0].alias_t);
      (yyval.table) = tbl;
    }
#line 4857 "bison_parser.cpp"
    break;

    case 264:
#line 1088 "bison_parser.y"
    {
      (yyval.table_vec) = new std::vector<TableRef*>();
      (yyval.table_vec)->push_back((yyvsp[0].table));
    }
#line 4866 "bison_parser.cpp"
    break;

    case 265:
#line 1092 "bison_parser.y"
    {
      (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
      (yyval.table_vec) = (yyvsp[-2].table_vec);
    }
#line 4875 "bison_parser.cpp"
    break;

    case 266:
#line 1097 "bison_parser.y"
    {
      auto tbl = new TableRef(kTableName);
      tbl->schema = (yyvsp[-1].table_name).schema;
      tbl->name = (yyvsp[-1].table_name).name;
      tbl->alias = (yyvsp[0].alias_t);
      (yyval.table) = tbl;
    }
#line 4887 "bison_parser.cpp"
    break;

    case 267:
#line 1105 "bison_parser.y"
    {
      (yyval.table) = new TableRef(kTableName);
      (yyval.table)->schema = (yyvsp[0].table_name).schema;
      (yyval.table)->name = (yyvsp[0].table_name).name;
    }
#line 4897 "bison_parser.cpp"
    break;

    case 268:
#line 1111 "bison_parser.y"
    {
      (yyval.table_name).schema = nullptr;
      (yyval.table_name).name = (yyvsp[0].sval);
    }
#line 4906 "bison_parser.cpp"
    break;

    case 269:
#line 1115 "bison_parser.y"
    {
      (yyval.table_name).schema = (yyvsp[-2].sval);
      (yyval.table_name).name = (yyvsp[0].sval);
    }
#line 4915 "bison_parser.cpp"
    break;

    case 270:
#line 1120 "bison_parser.y"
    {
      (yyval.sval) = (yyvsp[0].sval);
    }
#line 4921 "bison_parser.cpp"
    break;

    case 271:
#line 1121 "bison_parser.y"
    {
      (yyval.sval) = nullptr;
    }
#line 4927 "bison_parser.cpp"
    break;

    case 273:
#line 1123 "bison_parser.y"
    {
      (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec));
    }
#line 4933 "bison_parser.cpp"
    break;

    case 275:
#line 1125 "bison_parser.y"
    {
      (yyval.alias_t) = nullptr;
    }
#line 4939 "bison_parser.cpp"
    break;

    case 276:
#line 1127 "bison_parser.y"
    {
      (yyval.alias_t) = new Alias((yyvsp[0].sval));
    }
#line 4945 "bison_parser.cpp"
    break;

    case 277:
#line 1128 "bison_parser.y"
    {
      (yyval.alias_t) = new Alias((yyvsp[0].sval));
    }
#line 4951 "bison_parser.cpp"
    break;

    case 279:
#line 1130 "bison_parser.y"
    {
      (yyval.alias_t) = nullptr;
    }
#line 4957 "bison_parser.cpp"
    break;

    case 280:
#line 1136 "bison_parser.y"
    {
      (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec);
    }
#line 4963 "bison_parser.cpp"
    break;

    case 281:
#line 1137 "bison_parser.y"
    {
      (yyval.locking_clause_vec) = nullptr;
    }
#line 4969 "bison_parser.cpp"
    break;

    case 282:
#line 1139 "bison_parser.y"
    {
      (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
      (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
    }
#line 4978 "bison_parser.cpp"
    break;

    case 283:
#line 1143 "bison_parser.y"
    {
      (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
      (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
    }
#line 4987 "bison_parser.cpp"
    break;

    case 284:
#line 1148 "bison_parser.y"
    {
      (yyval.locking_t) = new LockingClause();
      (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
      (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
      (yyval.locking_t)->tables = nullptr;
    }
#line 4998 "bison_parser.cpp"
    break;

    case 285:
#line 1154 "bison_parser.y"
    {
      (yyval.locking_t) = new LockingClause();
      (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
      (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
      (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
    }
#line 5009 "bison_parser.cpp"
    break;

    case 286:
#line 1161 "bison_parser.y"
    {
      (yyval.lock_mode_t) = RowLockMode::ForUpdate;
    }
#line 5015 "bison_parser.cpp"
    break;

    case 287:
#line 1162 "bison_parser.y"
    {
      (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate;
    }
#line 5021 "bison_parser.cpp"
    break;

    case 288:
#line 1163 "bison_parser.y"
    {
      (yyval.lock_mode_t) = RowLockMode::ForShare;
    }
#line 5027 "bison_parser.cpp"
    break;

    case 289:
#line 1164 "bison_parser.y"
    {
      (yyval.lock_mode_t) = RowLockMode::ForKeyShare;
    }
#line 5033 "bison_parser.cpp"
    break;

    case 290:
#line 1166 "bison_parser.y"
    {
      (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked;
    }
#line 5039 "bison_parser.cpp"
    break;

    case 291:
#line 1167 "bison_parser.y"
    {
      (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait;
    }
#line 5045 "bison_parser.cpp"
    break;

    case 292:
#line 1168 "bison_parser.y"
    {
      (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None;
    }
#line 5051 "bison_parser.cpp"
    break;

    case 294:
#line 1174 "bison_parser.y"
    {
      (yyval.with_description_vec) = nullptr;
    }
#line 5057 "bison_parser.cpp"
    break;

    case 295:
#line 1176 "bison_parser.y"
    {
      (yyval.with_description_vec) = (yyvsp[0].with_description_vec);
    }
#line 5063 "bison_parser.cpp"
    break;

    case 296:
#line 1178 "bison_parser.y"
    {
      (yyval.with_description_vec) = new std::vector<WithDescription*>();
      (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
    }
#line 5072 "bison_parser.cpp"
    break;

    case 297:
#line 1182 "bison_parser.y"
    {
      (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
      (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
    }
#line 5081 "bison_parser.cpp"
    break;

    case 298:
#line 1187 "bison_parser.y"
    {
      (yyval.with_description_t) = new WithDescription();
      (yyval.with_description_t)->alias = (yyvsp[-2].sval);
      (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
    }
#line 5091 "bison_parser.cpp"
    break;

    case 299:
#line 1197 "bison_parser.y"
    {
      (yyval.table) = new TableRef(kTableJoin);
      (yyval.table)->join = new JoinDefinition();
      (yyval.table)->join->type = kJoinNatural;
      (yyval.table)->join->left = (yyvsp[-3].table);
      (yyval.table)->join->right = (yyvsp[0].table);
    }
#line 5103 "bison_parser.cpp"
    break;

    case 300:
#line 1204 "bison_parser.y"
    {
      (yyval.table) = new TableRef(kTableJoin);
      (yyval.table)->join = new JoinDefinition();
      (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
      (yyval.table)->join->left = (yyvsp[-5].table);
      (yyval.table)->join->right = (yyvsp[-2].table);
      (yyval.table)->join->condition = (yyvsp[0].expr);
    }
#line 5116 "bison_parser.cpp"
    break;

    case 301:
#line 1212 "bison_parser.y"
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
#line 5136 "bison_parser.cpp"
    break;

    case 302:
#line 1228 "bison_parser.y"
    {
      (yyval.join_type) = kJoinInner;
    }
#line 5142 "bison_parser.cpp"
    break;

    case 303:
#line 1229 "bison_parser.y"
    {
      (yyval.join_type) = kJoinLeft;
    }
#line 5148 "bison_parser.cpp"
    break;

    case 304:
#line 1230 "bison_parser.y"
    {
      (yyval.join_type) = kJoinLeft;
    }
#line 5154 "bison_parser.cpp"
    break;

    case 305:
#line 1231 "bison_parser.y"
    {
      (yyval.join_type) = kJoinRight;
    }
#line 5160 "bison_parser.cpp"
    break;

    case 306:
#line 1232 "bison_parser.y"
    {
      (yyval.join_type) = kJoinRight;
    }
#line 5166 "bison_parser.cpp"
    break;

    case 307:
#line 1233 "bison_parser.y"
    {
      (yyval.join_type) = kJoinFull;
    }
#line 5172 "bison_parser.cpp"
    break;

    case 308:
#line 1234 "bison_parser.y"
    {
      (yyval.join_type) = kJoinFull;
    }
#line 5178 "bison_parser.cpp"
    break;

    case 309:
#line 1235 "bison_parser.y"
    {
      (yyval.join_type) = kJoinFull;
    }
#line 5184 "bison_parser.cpp"
    break;

    case 310:
#line 1236 "bison_parser.y"
    {
      (yyval.join_type) = kJoinCross;
    }
#line 5190 "bison_parser.cpp"
    break;

    case 311:
#line 1237 "bison_parser.y"
    {
      (yyval.join_type) = kJoinInner;
    }
#line 5196 "bison_parser.cpp"
    break;

    case 315:
#line 1248 "bison_parser.y"
    {
      (yyval.str_vec) = new std::vector<char*>();
      (yyval.str_vec)->push_back((yyvsp[0].sval));
    }
#line 5205 "bison_parser.cpp"
    break;

    case 316:
#line 1252 "bison_parser.y"
    {
      (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
      (yyval.str_vec) = (yyvsp[-2].str_vec);
    }
#line 5214 "bison_parser.cpp"
    break;

#line 5218 "bison_parser.cpp"

    default:
      break;
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
  YY_SYMBOL_PRINT("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK(yylen);
  yylen = 0;
  YY_STACK_PRINT(yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp ? yytable[yyi] : yydefgoto[yylhs]);
  }

  goto yynewstate;

/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE(yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus) {
    ++yynerrs;
#if !YYERROR_VERBOSE
    yyerror(&yylloc, result, scanner, YY_("syntax error"));
#else
#define YYSYNTAX_ERROR yysyntax_error(&yymsg_alloc, &yymsg, yyssp, yytoken)
    {
      char const* yymsgp = YY_("syntax error");
      int yysyntax_error_status;
      yysyntax_error_status = YYSYNTAX_ERROR;
      if (yysyntax_error_status == 0)
        yymsgp = yymsg;
      else if (yysyntax_error_status == 1) {
        if (yymsg != yymsgbuf) YYSTACK_FREE(yymsg);
        yymsg = YY_CAST(char*, YYSTACK_ALLOC(YY_CAST(YYSIZE_T, yymsg_alloc)));
        if (!yymsg) {
          yymsg = yymsgbuf;
          yymsg_alloc = sizeof yymsgbuf;
          yysyntax_error_status = 2;
        } else {
          yysyntax_error_status = YYSYNTAX_ERROR;
          yymsgp = yymsg;
        }
      }
      yyerror(&yylloc, result, scanner, yymsgp);
      if (yysyntax_error_status == 2) goto yyexhaustedlab;
    }
#undef YYSYNTAX_ERROR
#endif
  }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3) {
    /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

    if (yychar <= YYEOF) {
      /* Return failure if at end of input.  */
      if (yychar == YYEOF) YYABORT;
    } else {
      yydestruct("Error: discarding", yytoken, &yylval, &yylloc, result, scanner);
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
  if (0) YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK(yylen);
  yylen = 0;
  YY_STACK_PRINT(yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;

/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3; /* Each real token shifted decrements this.  */

  for (;;) {
    yyn = yypact[yystate];
    if (!yypact_value_is_default(yyn)) {
      yyn += YYTERROR;
      if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR) {
        yyn = yytable[yyn];
        if (0 < yyn) break;
      }
    }

    /* Pop the current state because it cannot handle the error token.  */
    if (yyssp == yyss) YYABORT;

    yyerror_range[1] = *yylsp;
    yydestruct("Error: popping", yystos[yystate], yyvsp, yylsp, result, scanner);
    YYPOPSTACK(1);
    yystate = *yyssp;
    YY_STACK_PRINT(yyss, yyssp);
  }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT(yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT("Shifting", yystos[yyn], yyvsp, yylsp);

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
  yyerror(&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY) {
    /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
    yytoken = YYTRANSLATE(yychar);
    yydestruct("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc, result, scanner);
  }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK(yylen);
  YY_STACK_PRINT(yyss, yyssp);
  while (yyssp != yyss) {
    yydestruct("Cleanup: popping", yystos[+*yyssp], yyvsp, yylsp, result, scanner);
    YYPOPSTACK(1);
  }
#ifndef yyoverflow
  if (yyss != yyssa) YYSTACK_FREE(yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf) YYSTACK_FREE(yymsg);
#endif
  return yyresult;
}
#line 1258 "bison_parser.y"

// clang-format on
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
