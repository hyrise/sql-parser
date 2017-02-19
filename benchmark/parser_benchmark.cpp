
#include <chrono>
#include "benchmark/benchmark.h"

#include "SQLParser.h"
#include "parser/bison_parser.h"
#include "parser/flex_lexer.h"

#define TIME_DIFF(start, end) \
  std::chrono::duration_cast<std::chrono::duration<double>>(end - start);

const std::string simpleQuery = "SELECT * FROM test;";
const std::string subSelect = "SELECT age, street AS address FROM (SELECT d, e, f FROM a, b);";


static void BM_SimpleSelect(benchmark::State& st) {
  while (st.KeepRunning()) {
    hsql::SQLParserResult* result = hsql::SQLParser::parseSQLString(simpleQuery);
    delete result;
  }
}
BENCHMARK(BM_SimpleSelect);


static void BM_SubSelectFull(benchmark::State& st) {
  while (st.KeepRunning()) {
    hsql::SQLParserResult* result = hsql::SQLParser::parseSQLString(subSelect.c_str());
    delete result;
  }
}
BENCHMARK(BM_SubSelectFull);



static void BM_SubSelectLex(benchmark::State& st) {
  while (st.KeepRunning()) {
    // auto start = std::chrono::high_resolution_clock::now();
    
    // Run the lexer.
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (hsql_lex_init(&scanner)) {
      // Couldn't initialize the lexer.
      fprintf(stderr, "[Error] SQLParser: Error when initializing lexer!\n");
      break;
    }

    state = hsql__scan_string(subSelect.c_str(), scanner);

    hsql__delete_buffer(state, scanner);
    hsql_lex_destroy(scanner);
  }
}
BENCHMARK(BM_SubSelectLex);


BENCHMARK_MAIN();
