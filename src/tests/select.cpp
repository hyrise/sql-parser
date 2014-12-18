

#include "test.h"
#include "helper.h"
#include "SQLParser.h"

using namespace hsql;

TEST(SelectTest) {
	TEST_PARSE_SINGLE_SQL("SELECT * FROM students;", kStmtSelect, SelectStatement, stmt);

	ASSERT_NULL(stmt->where_clause);
	ASSERT_NULL(stmt->group_by);
}


TEST(SelectHavingTest) {
	TEST_PARSE_SINGLE_SQL("SELECT city, AVG(grade) AS avg_grade FROM students GROUP BY city HAVING AVG(grade) < 2.0", kStmtSelect, SelectStatement, stmt);
	ASSERT_FALSE(stmt->select_distinct);

	GroupByDescription* group = stmt->group_by;
	ASSERT_NOTNULL(group);
	ASSERT_EQ(group->columns->size(), 1);
	ASSERT(group->having->isSimpleOp('<'));
	ASSERT(group->having->expr->isType(kExprFunctionRef));
	ASSERT(group->having->expr2->isType(kExprLiteralFloat));
}


TEST(SelectDistinctTest) {
	TEST_PARSE_SINGLE_SQL("SELECT DISTINCT grade, city FROM students;", kStmtSelect, SelectStatement, stmt);

	ASSERT(stmt->select_distinct);
	ASSERT_NULL(stmt->where_clause);
}

TEST(SelectGroupDistinctTest) {
	TEST_PARSE_SINGLE_SQL("SELECT city, COUNT(name), COUNT(DISTINCT grade) FROM students GROUP BY city;", kStmtSelect, SelectStatement, stmt);

	ASSERT_FALSE(stmt->select_distinct);
	ASSERT_EQ(stmt->select_list->size(), 3);
	ASSERT(!stmt->select_list->at(1)->distinct);
	ASSERT(stmt->select_list->at(2)->distinct);
}


