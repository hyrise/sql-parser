
#include <chrono>
#include "benchmark/benchmark.h"

#include "SQLParser.h"
#include "parser/bison_parser.h"
#include "parser/flex_lexer.h"

#include "benchmark_utils.h"


PARSE_QUERY_BENCHMARK(BM_SimpleSelect,
  "SELECT * FROM test;");

PARSE_QUERY_BENCHMARK(BM_SimpleSubSelect, 
  "SELECT age, street AS address FROM (SELECT * FROM data);");

PARSE_QUERY_BENCHMARK(BM_TwoSelects, 
  "SELECT * FROM test; SELECT age, street AS address FROM data;");

// Benchmark the influence of increasing size of the query, while
// the number of tokens remain unchanged.
static void BM_CharacterCount(benchmark::State& st) {
  std::string query = "SELECT %name% FROM test;";
  std::string filler = std::string(st.range(0), 'a');
  query.replace(7, 6, filler);

  while (st.KeepRunning()) {
    hsql::SQLParserResult* result = hsql::SQLParser::parseSQLString(query);
    delete result;
  }
}
BENCHMARK(BM_CharacterCount)->RangeMultiplier(4)->Range(1 << 4, 1 << 16);


BENCHMARK_MAIN();
