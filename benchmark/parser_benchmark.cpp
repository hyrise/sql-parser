
#include <chrono>
#include <sstream>
#include "benchmark/benchmark.h"

#include "SQLParser.h"
#include "parser/bison_parser.h"
#include "parser/flex_lexer.h"

#include "benchmark_utils.h"


PARSE_QUERY_BENCHMARK(BM_Q1SimpleSelect,
  "SELECT * FROM test;");

PARSE_QUERY_BENCHMARK(BM_Q2SimpleSubSelect,
  "SELECT a, b AS address FROM (SELECT * FROM test WHERE c < 100 AND b > 3) t1 WHERE a < 10 AND b < 100;");

PARSE_QUERY_BENCHMARK(BM_Q3SingleJoin,
  "SELECT \"left\".a, \"left\".b, \"right\".a, \"right\".b FROM table_a AS \"left\" JOIN table_b AS \"right\" ON \"left\".a = \"right\".a;");

PARSE_QUERY_BENCHMARK(BM_Q4TPCHQuery,
"SELECT"
"  l_orderkey,"
"  SUM(l_extendedprice * (1 - l_discount)) AS revenue,"
"    o_orderdate,"
"    o_shippriority"
"  FROM"
"    customer,"
"    orders,"
"    lineitem"
"  WHERE"
"    c_mktsegment = '%s'"
"    and c_custkey = o_custkey"
"    and l_orderkey = o_orderkey"
"    and o_orderdate < '%s'"
"    and l_shipdate > '%s'"
"  GROUP BY"
"    l_orderkey,"
"    o_orderdate,"
"    o_shippriority"
"  ORDER BY"
"    revenue DESC,"
"    o_orderdate;"
  );
PARSE_QUERY_BENCHMARK(BM_TwoSelects,
  "SELECT * FROM test; SELECT age, street AS address FROM data;");

PARSE_QUERY_BENCHMARK(BM_LongSelectList26,
  "SELECT a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z FROM test;");

PARSE_QUERY_BENCHMARK(BM_LongSelectList52,
  "SELECT a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z FROM test;");

PARSE_QUERY_BENCHMARK(BM_LongSelectElement26,
  "SELECT aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa FROM test;");

PARSE_QUERY_BENCHMARK(BM_LongSelectElement52,
  "SELECT aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa FROM test;");

// Prepare and Execute benchmarks.
PARSE_QUERY_BENCHMARK(BM_ExecuteStatement,
  "EXECUTE procedure;");

PARSE_QUERY_BENCHMARK(BM_ExecuteWith2ParametersStatement,
  "EXECUTE procedure(11, 'test');");

PARSE_QUERY_BENCHMARK(BM_ExecuteWith10ParametersStatement,
  "EXECUTE procedure(11, 'test', 5.6, 4.2, 'abc', 6, 7, 8, 9, 10000);");



// Benchmark the influence of increasing size of the query, while
// the number of tokens remains unchanged.
static void BM_CharacterCount(benchmark::State& st) {
  const size_t querySize = st.range(0);

  // Base query has size of 18 characters.
  std::string query = "SELECT %name% FROM test;";

  const uint pad = querySize - 18;
  const std::string filler = std::string(pad, 'a');
  query.replace(7, 6, filler);

  while (st.KeepRunning()) {
    hsql::SQLParserResult* result = hsql::SQLParser::parseSQLString(query);
    delete result;
  }
}
BENCHMARK(BM_CharacterCount)
  ->RangeMultiplier(1 << 2)
  ->Ranges({{1 << 5, 1 << 15},
            {5, 5}});

// Benchmark the influence of increasing number of tokens, while
// the number of characters remains unchanged.
static void BM_ConditionalTokens(benchmark::State& st) {
  const size_t targetSize = st.range(0);
  const size_t numTokens = st.range(1);

  // Base query contains 6 tokens.
  std::string query = "SELECT * FROM test";

  // Create conditional.
  std::stringstream condStream;
  size_t missingTokens = numTokens - 4;
  if (missingTokens > 0) {
    condStream << " WHERE a";
    missingTokens -= 2;

    while (missingTokens > 0) {
      condStream << " AND a";
      missingTokens -= 2;
    }
  }

  query += condStream.str();

  if (targetSize >= query.size()) {
    const size_t pad = targetSize - query.size();
    const std::string filler = std::string(pad, 'a');
    query.replace(7, 1, filler);

  } else {
    // Query can't be the same length as in the other benchmarks.
    // Running this will result in unusable data.
    fprintf(stderr, "Too many tokens. Query too long for benchmark char limit (%lu > %lu).\n",
      query.size(), targetSize);
    return;
  }

  while (st.KeepRunning()) {
    hsql::SQLParserResult* result = hsql::SQLParser::parseSQLString(query);
    if (!result->isValid()) st.SkipWithError("Parsing failed!");\
    delete result;
  }
}
BENCHMARK(BM_ConditionalTokens)
  ->RangeMultiplier(1 << 2)
  ->Ranges({{1 << 14, 1 << 14},
            {1 << 2, 1 << 11}});


BENCHMARK_MAIN();
