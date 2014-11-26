/*
 * sql_tests.cpp
 */

#include "SQLParser.h"
#include "tests/test.h"


using namespace hsql;



TEST(SelectTest) {
	StatementList* stmt_list = SQLParser::parseSQLString("SELECT * FROM students;");
	ASSERT(stmt_list->isValid);
	ASSERT(stmt_list->size() == 1);
	ASSERT(stmt_list->at(0)->type == kStmtSelect);

	SelectStatement* stmt = (SelectStatement*) stmt_list->at(0);
	ASSERT(stmt->where_clause == NULL);
}


TEST(DeleteTest) {
	StatementList* stmt_list = SQLParser::parseSQLString("DELETE FROM students WHERE grade > 2.0;");
	ASSERT(stmt_list->isValid);
	ASSERT(stmt_list->size() == 1);
	ASSERT(stmt_list->at(0)->type == kStmtDelete);

	DeleteStatement* stmt = (DeleteStatement*) stmt_list->at(0);
	ASSERT_STREQ(stmt->table_name, "students");
	ASSERT(stmt->expr != NULL);
	ASSERT(stmt->expr->isType(kExprOperator));
	ASSERT_STREQ(stmt->expr->expr->name, "grade");
	ASSERT_EQ(stmt->expr->expr2->fval, 2.0);
}

