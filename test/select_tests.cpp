

#include "thirdparty/microtest/microtest.h"
#include "sql_asserts.h"
#include "SQLParser.h"

using namespace hsql;

TEST(SelectTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT * FROM students;",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  ASSERT_NULL(stmt->whereClause);
  ASSERT_NULL(stmt->groupBy);

  delete result;
}


TEST(SelectHavingTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT city, AVG(grade) AS avg_grade FROM students GROUP BY city HAVING AVG(grade) < 2.0",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  ASSERT_FALSE(stmt->selectDistinct);

  GroupByDescription* group = stmt->groupBy;
  ASSERT_NOTNULL(group);
  ASSERT_EQ(group->columns->size(), 1);
  ASSERT(group->having->isSimpleOp('<'));
  ASSERT(group->having->expr->isType(kExprFunctionRef));
  ASSERT(group->having->expr2->isType(kExprLiteralFloat));

  delete result;
}


TEST(SelectDistinctTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT DISTINCT grade, city FROM students;",
    kStmtSelect,
    SelectStatement, 
    result,
    stmt);

  ASSERT(stmt->selectDistinct);
  ASSERT_NULL(stmt->whereClause);

  delete result;
}

TEST(SelectGroupDistinctTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT city, COUNT(name), COUNT(DISTINCT grade) FROM students GROUP BY city;",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  ASSERT_FALSE(stmt->selectDistinct);
  ASSERT_EQ(stmt->selectList->size(), 3);
  ASSERT(!stmt->selectList->at(1)->distinct);
  ASSERT(stmt->selectList->at(2)->distinct);

  delete result;
}


