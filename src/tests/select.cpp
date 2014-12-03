
#include "test.h"
#include "SQLParser.h"

using namespace hsql;

TEST(Select) {
	SQLStatementList* stmt_list = SQLParser::parseSQLString("SELECT * FROM students;");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->size(), 1);
	ASSERT_EQ(stmt_list->at(0)->type(), kStmtSelect);

	SelectStatement* stmt = (SelectStatement*) stmt_list->at(0);
	ASSERT_NULL(stmt->where_clause);
}
