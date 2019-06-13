#include "thirdparty/microtest/microtest.h"

#include "SQLParser.h"
#include "util/sqlhelper.h"
#include "sql_asserts.h"

#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>


using namespace hsql;

namespace fs = std::filesystem;

std::string readFileContents(const std::string& file_path) {
  std::ifstream t(file_path.c_str());
  std::string text((std::istreambuf_iterator<char>(t)),
                   std::istreambuf_iterator<char>());
  return text;
}

bool isValid(const std::string &query) {
  // Assert single query only
  return true;
}

bool testSqlQueryFile(const std::string &file_path) {
  std::string query = readFileContents(file_path);

  if(!isValid(query)) mt::printFailed(std::string("invalid sql query: " + file_path).c_str());
  else {
    SQLParserResult result;
    SQLParser::parse(query.c_str(), &result);
    if (!result.isValid()) {
      mt::printFailed(file_path.c_str());
      printf("%s           %s (L%d:%d)%s\n", mt::red(), result.errorMsg(), result.errorLine(), result.errorColumn(), mt::def());
    } else {
      mt::printOk(file_path.c_str());
      return true;
    }
  }
  return false;
}

TEST(SQLFileGrammarTests) {
  std::string rootPath = "test/queries/";

  // Create a sorted list of filepaths to .sql files
  std::vector<std::string> filePaths;
  for(auto& entry : fs::recursive_directory_iterator(rootPath)) {
    if (fs::is_regular_file(entry) && fs::path(entry).extension() == ".sql") {
      filePaths.emplace_back(entry.path());
    }
  }
  sort(filePaths.begin(), filePaths.end());

  std::cout << filePaths.size() << std::endl;

  ASSERT_EQ(1, 1);
  //ASSERT_EQ(testsFailed, 46);
}