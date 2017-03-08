#include "thirdparty/microtest/microtest.h"
#include "sql_asserts.h"
#include "SQLParser.h"
#include "sqlhelper.h"

#include <string>
#include <fstream>
#include <streambuf>
#include <iostream>

using namespace hsql;

std::string readFileContents(std::string file_path) {
  std::ifstream t(file_path.c_str());
  std::string text((std::istreambuf_iterator<char>(t)),
                   std::istreambuf_iterator<char>());
  return text;
}

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
    std::string query = readFileContents(file_path);

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

TEST(TPCHQueryDetailTest) {
  std::string query = readFileContents("test/queries/tpc-h-16-22.sql");

  SQLParserResult* result = SQLParser::parseSQLString(query.c_str());
  ASSERT(result->isValid());
  ASSERT_EQ(result->size(), 7);

  const SQLStatement* stmt20 = result->getStatement(4);
  ASSERT_EQ(stmt20->type(), kStmtSelect);

  const SelectStatement* select20 = (const SelectStatement*) stmt20;
  ASSERT_EQ(select20->selectList->size(), 2);
  ASSERT_STREQ(select20->selectList->at(0)->getName(), "S_NAME");
  ASSERT_STREQ(select20->selectList->at(1)->getName(), "S_ADDRESS");

  // Test WHERE Clause.
  Expr* where = select20->whereClause;
  ASSERT_NOTNULL(where);
  ASSERT(where->isType(kExprOperator));
  ASSERT_EQ(where->opType, Expr::AND);

  Expr* andExpr2 = where->expr;
  ASSERT_NOTNULL(andExpr2);
  ASSERT(andExpr2->isType(kExprOperator));
  ASSERT_EQ(andExpr2->opType, Expr::AND);

  // Test IN expression.
  Expr* inExpr = andExpr2->expr;
  ASSERT_NOTNULL(inExpr);
  ASSERT(inExpr->isType(kExprOperator));
  ASSERT_EQ(inExpr->opType, Expr::IN);

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

  delete result;
}