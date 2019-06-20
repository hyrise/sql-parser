#include "thirdparty/microtest/microtest.h"

#include "SQLParser.h"
#include "util/sqlhelper.h"
#include "sql_asserts.h"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>
#include <vector>


using namespace hsql;
namespace fs = std::filesystem;


std::string readFileContents(const std::string& file_path) {
  std::ifstream t(file_path.c_str());
  std::string text((std::istreambuf_iterator<char>(t)),
                   std::istreambuf_iterator<char>());
  return text;
}

bool runSqlQueryFromFile(const std::string &file_path) {
  std::string query = readFileContents(file_path);

  SQLParserResult result;
  SQLParser::parse(query.c_str(), &result);
  if (!result.isValid()) {
    mt::printFailed(file_path.c_str());
    printf("%s           %s (L%d:%d)%s\n", mt::red(), result.errorMsg(), result.errorLine(), result.errorColumn(), mt::def());
  } else {
    mt::printOk(file_path.c_str());
    return true;
  }
  return false;
}

TEST(FileBasedSQLGrammarTests) {
  std::string rootPath = "test/queries/";

  // Create sorted list of filepaths to .sql files
  std::vector<std::string> filePaths;
  for(auto& entry : fs::recursive_directory_iterator(rootPath)) {
    if (fs::is_regular_file(entry) && fs::path(entry).extension() == ".sql") {
      filePaths.emplace_back(entry.path());
    }
  }
  sort(filePaths.begin(), filePaths.end());

  // Run queries
  int queryRuns = 0;
  int queryFails = 0;
  for(auto& filePath : filePaths) {
    bool success = runSqlQueryFromFile(filePath);
    if(!success) queryFails++;
    queryRuns++;
  }

  ASSERT_EQ(queryFails, 46)
}

TEST(QueryDetailTestTPCH20) {
  std::string query = readFileContents("test/queries/tpc-h-20.sql");

  SQLParserResult result;
  SQLParser::parse(query.c_str(), &result);
  ASSERT(result.isValid());
  ASSERT_EQ(result.size(), 1);

  const SQLStatement* stmt20 = result.getStatement(0);
  ASSERT_EQ(stmt20->type(), kStmtSelect);

  const SelectStatement* select20 = (const SelectStatement*) stmt20;
  ASSERT_EQ(select20->selectList->size(), 2);
  ASSERT_STREQ(select20->selectList->at(0)->getName(), "S_NAME");
  ASSERT_STREQ(select20->selectList->at(1)->getName(), "S_ADDRESS");

  // Test WHERE Clause.
  Expr* where = select20->whereClause;
  ASSERT_NOTNULL(where);
  ASSERT(where->isType(kExprOperator));
  ASSERT_EQ(where->opType, kOpAnd);

  Expr* andExpr2 = where->expr;
  ASSERT_NOTNULL(andExpr2);
  ASSERT(andExpr2->isType(kExprOperator));
  ASSERT_EQ(andExpr2->opType, kOpAnd);

  // Test IN expression.
  Expr* inExpr = andExpr2->expr;
  ASSERT_NOTNULL(inExpr);
  ASSERT(inExpr->isType(kExprOperator));
  ASSERT_EQ(inExpr->opType, kOpIn);

  ASSERT_STREQ(inExpr->expr->getName(), "S_SUPPKEY");
  ASSERT_NOTNULL(inExpr->select);
  ASSERT_EQ(inExpr->select->selectList->size(), 1);
  ASSERT(inExpr->select->selectList->at(0)->isType(kExprColumnRef));
  ASSERT_STREQ(inExpr->select->selectList->at(0)->getName(), "PS_SUPPKEY");

  // Test ORDER BY clause.
  ASSERT_NOTNULL(select20->order);
  ASSERT_EQ(select20->order->size(), 1);
  ASSERT(select20->order->at(0)->expr->isType(kExprColumnRef));
  ASSERT_STREQ(select20->order->at(0)->expr->getName(), "S_NAME");
}