

#include "test.h"
#include "helper.h"
#include "SQLParser.h"

using namespace hsql;

TEST(SelectTest) {
    TEST_PARSE_SINGLE_SQL("SELECT * FROM students;", kStmtSelect, SelectStatement, stmt);

    ASSERT_NULL(stmt->whereClause);
    ASSERT_NULL(stmt->groupBy);
}


TEST(SelectHavingTest) {
    TEST_PARSE_SINGLE_SQL("SELECT city, AVG(grade) AS avg_grade FROM students GROUP BY city HAVING AVG(grade) < 2.0", kStmtSelect, SelectStatement, stmt);
    ASSERT_FALSE(stmt->selectDistinct);

    GroupByDescription* group = stmt->groupBy;
    ASSERT_NOTNULL(group);
    ASSERT_EQ(group->columns->size(), 1);
    ASSERT(group->having->isSimpleOp('<'));
    ASSERT(group->having->expr->isType(kExprFunctionRef));
    ASSERT(group->having->expr2->isType(kExprLiteralFloat));
}


TEST(SelectDistinctTest) {
    TEST_PARSE_SINGLE_SQL("SELECT DISTINCT grade, city FROM students;", kStmtSelect, SelectStatement, stmt);

    ASSERT(stmt->selectDistinct);
    ASSERT_NULL(stmt->whereClause);
}

TEST(SelectGroupDistinctTest) {
    TEST_PARSE_SINGLE_SQL("SELECT city, COUNT(name), COUNT(DISTINCT grade) FROM students GROUP BY city;", kStmtSelect, SelectStatement, stmt);

    ASSERT_FALSE(stmt->selectDistinct);
    ASSERT_EQ(stmt->selectList->size(), 3);
    ASSERT(!stmt->selectList->at(1)->distinct);
    ASSERT(stmt->selectList->at(2)->distinct);
}


