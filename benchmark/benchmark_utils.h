#ifndef __BENCHMARK_UTILS_H__
#define __BENCHMARK_UTILS_H__


#define TIME_DIFF(end, start)\
  std::chrono::duration_cast<std::chrono::duration<double>>(end - start);

#define NOW()\
  std::chrono::high_resolution_clock::now();



#define PARSE_QUERY_BENCHMARK(name, query)\
  static void name(benchmark::State& st) {\
    while (st.KeepRunning()) {\
      hsql::SQLParserResult* result = hsql::SQLParser::parseSQLString(query);\
      if (!result->isValid()) st.SkipWithError("Parsing failed!");\
      delete result;\
    }\
  }\
  BENCHMARK(name);


#endif