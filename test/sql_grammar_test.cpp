
#include <stdio.h>
#include <string>
#include <chrono>
#include <fstream>
#include <sstream>
#include <vector>

#include "thirdparty/microtest/microtest.h"
#include "SQLParser.h"

using namespace hsql;


std::vector<std::string> readlines(std::string path) {
  std::ifstream infile(path);
  std::vector<std::string> lines;
  std::string line;
  while (std::getline(infile, line)) {
    std::istringstream iss(line);

    // Skip comments
    if (line[0] == '#' ||
        (line[0] == '-' && line[1] == '-')) {
      continue;
    }

    lines.push_back(line);
  }
  return lines;
}

#define STREQ(a, b) (std::string(a).compare(std::string(b)) == 0)

TEST(AutoGrammarTest) {
  const std::vector<std::string>& args = mt::Runtime::args();
  if (args.size() <= 1) {
    fprintf(stderr, "Usage: grammar_test [--false] [-f path] query, ...\n");
    return;
  }

  bool globalExpectFalse = false;
  bool useFile = false;
  std::string filePath = "";

  // Parse command line arguments
  uint i = 1;
  for (; i < args.size(); ++i) {
    if (STREQ(args[i], "--false")) globalExpectFalse = true;
    else if (STREQ(args[i], "-f")) {
      useFile = true;
      filePath = args[++i];
    } else {
      break;
    }
  }


  // Read list of queries for this rest
  std::vector<std::string> queries;
  if (useFile) {
    queries = readlines(filePath);
  } else {
    for (; i < args.size(); ++i) queries.push_back(args[i]);
  }


  // Execute queries
  int numFailed = 0;
  for (std::string sql : queries) {
    bool expectFalse = globalExpectFalse;
    if (sql.at(0) == '!') {
      expectFalse = !expectFalse;
      sql = sql.substr(1);
    }

    // Measuring the parsing time
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();

    // Parsing
    SQLParserResult* result = SQLParser::parseSQLString(sql.c_str());

    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    double us = elapsed_seconds.count() * 1000 * 1000;

    if (expectFalse == result->isValid()) {
      printf("\033[0;31m{  failed}\033[0m\n");
      printf("\t\033[0;31m%s (L%d:%d)\n\033[0m", result->errorMsg(), result->errorLine(), result->errorColumn());
      printf("\t%s\n", sql.c_str());
      numFailed++;
    } else {
      // TODO: indicate whether expectFalse was set
      printf("\033[0;32m{      ok} (%.1fus)\033[0m %s\n", us, sql.c_str());
    }

    delete result;
  }

  if (numFailed == 0) {
    printf("\033[0;32m{      ok} \033[0mAll %lu grammar tests completed successfully!\n", queries.size());
  } else {
    fprintf(stderr, "\033[0;31m{  failed} \033[0mSome grammar tests failed! %d out of %lu tests failed!\n", numFailed, queries.size());
  }
  ASSERT_EQ(numFailed, 0);
}

