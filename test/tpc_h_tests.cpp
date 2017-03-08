#include "thirdparty/microtest/microtest.h"
#include "sql_asserts.h"
#include "SQLParser.h"
#include "sqlhelper.h"

#include <string>
#include <fstream>
#include <streambuf>
#include <iostream>

using namespace hsql;

TEST(TPCHQueryGrammarTests) {
  std::vector<std::string> files = {
    "test/queries/tpc-h-01.sql",
    "test/queries/tpc-h-02.sql",
    "test/queries/tpc-h-03.sql",
    "test/queries/tpc-h-04.sql",
    "test/queries/tpc-h-05.sql",
    "test/queries/tpc-h-06.sql",
    "test/queries/tpc-h-07.sql",
    "test/queries/tpc-h-08.sql",
    "test/queries/tpc-h-09.sql",
    "test/queries/tpc-h-10.sql",
    "test/queries/tpc-h-11-15.sql",
    "test/queries/tpc-h-16-22.sql"
  };

  int testsFailed = 0;
  for (const std::string& file_path : files) {
    std::ifstream t(file_path.c_str());
    std::string query((std::istreambuf_iterator<char>(t)),
                      std::istreambuf_iterator<char>());

    SQLParserResult* result = SQLParser::parseSQLString(query.c_str());
    if (!result->isValid()) {
      mt::printFailed(file_path.c_str());
      printf("%s           %s (L%d:%d)%s\n", mt::red(), result->errorMsg(), result->errorLine(), result->errorColumn(), mt::def());
      ++testsFailed;
    } else {
      mt::printOk(file_path.c_str());
    }
    delete result;
  }
  ASSERT_EQ(testsFailed, 0);
}
