/*
 * sql_tests.cpp
 */

#include "tests/test.h"
#include "tests/helper.h"
#include "SQLParser.h"
#include "sqlhelper.h"

using namespace hsql;


TEST(DeleteStatementTest) {
	SQLStatementList* stmt_list = SQLParser::parseSQLString("DELETE FROM students WHERE grade > 2.0;");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->numStatements(), 1);
	ASSERT(stmt_list->getStatement(0)->type() == kStmtDelete);

	DeleteStatement* stmt = (DeleteStatement*) stmt_list->getStatement(0);
	ASSERT_STREQ(stmt->table_name, "students");
	ASSERT_NOTNULL(stmt->expr);
	ASSERT(stmt->expr->isType(kExprOperator));
	ASSERT_STREQ(stmt->expr->expr->name, "grade");
	ASSERT_EQ(stmt->expr->expr2->fval, 2.0);
}

TEST(CreateStatementTest) {
	SQLStatementList* stmt_list = SQLParser::parseSQLString("CREATE TABLE students (name TEXT, student_number INT, city INTEGER, grade DOUBLE)");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->numStatements(), 1);
	ASSERT_EQ(stmt_list->getStatement(0)->type(), kStmtCreate);

	CreateStatement* stmt = (CreateStatement*) stmt_list->getStatement(0);
	ASSERT_EQ(stmt->type, CreateStatement::kTable);
	ASSERT_STREQ(stmt->table_name, "students");
	ASSERT_NOTNULL(stmt->columns);
	ASSERT_EQ(stmt->columns->size(), 4);
	ASSERT_STREQ(stmt->columns->at(0)->name, "name");
	ASSERT_STREQ(stmt->columns->at(1)->name, "student_number");
	ASSERT_STREQ(stmt->columns->at(2)->name, "city");
	ASSERT_STREQ(stmt->columns->at(3)->name, "grade");
	ASSERT_EQ(stmt->columns->at(0)->type, ColumnDefinition::TEXT);
	ASSERT_EQ(stmt->columns->at(1)->type, ColumnDefinition::INT);
	ASSERT_EQ(stmt->columns->at(2)->type, ColumnDefinition::INT);
	ASSERT_EQ(stmt->columns->at(3)->type, ColumnDefinition::DOUBLE);
}


TEST(UpdateStatementTest) {
	SQLStatementList* stmt_list = SQLParser::parseSQLString("UPDATE students SET grade = 5.0, name = 'test' WHERE name = 'Max Mustermann';");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->numStatements(), 1);
	ASSERT_EQ(stmt_list->getStatement(0)->type(), kStmtUpdate);

	UpdateStatement* stmt = (UpdateStatement*) stmt_list->getStatement(0);
	ASSERT_NOTNULL(stmt->table);
	ASSERT_STREQ(stmt->table->name, "students");
	
	ASSERT_NOTNULL(stmt->updates);
	ASSERT_EQ(stmt->updates->size(), 2);
	ASSERT_STREQ(stmt->updates->at(0)->column, "grade");
	ASSERT_STREQ(stmt->updates->at(1)->column, "name");
	ASSERT(stmt->updates->at(0)->value->isType(kExprLiteralFloat));
	ASSERT(stmt->updates->at(1)->value->isType(kExprLiteralString));
	ASSERT_EQ(stmt->updates->at(0)->value->fval, 5.0);
	ASSERT_STREQ(stmt->updates->at(1)->value->name, "test");

	ASSERT_NOTNULL(stmt->where);
	ASSERT(stmt->where->isType(kExprOperator));
	ASSERT(stmt->where->isSimpleOp('='));
	ASSERT_STREQ(stmt->where->expr->name, "name");
	ASSERT_STREQ(stmt->where->expr2->name, "Max Mustermann");

}


TEST(InsertStatementTest) {
	SQLStatementList* stmt_list = SQLParser::parseSQLString("INSERT INTO students VALUES ('Max Mustermann', 12345, 'Musterhausen', 2.0)");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->numStatements(), 1);
	ASSERT_EQ(stmt_list->getStatement(0)->type(), kStmtInsert);

	// TODO
}


TEST(DropTableStatementTest) {
	SQLStatementList* stmt_list = SQLParser::parseSQLString("DROP TABLE students");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->numStatements(), 1);
	ASSERT_EQ(stmt_list->getStatement(0)->type(), kStmtDrop);

	DropStatement* stmt = (DropStatement*) stmt_list->getStatement(0);
	ASSERT_EQ(stmt->type, DropStatement::kTable);
	ASSERT_NOTNULL(stmt->name);
	ASSERT_STREQ(stmt->name, "students");
}


TEST(PrepareStatementTest) {
	TEST_PARSE_SINGLE_SQL("PREPARE test:"
		"INSERT INTO test VALUES(?);"
		"SELECT ?, test FROM test WHERE c1 = ?;"
		"", kStmtPrepare, PrepareStatement, prep_stmt);

	ASSERT_STREQ(prep_stmt->name, "test");
	ASSERT_EQ(prep_stmt->placeholders.size(), 3);


	ASSERT_EQ(prep_stmt->query->numStatements(), 2);
	ASSERT_EQ(prep_stmt->query->getStatement(0)->type(), kStmtInsert);
	ASSERT_EQ(prep_stmt->query->getStatement(1)->type(), kStmtSelect);


	InsertStatement* insert = (InsertStatement*) prep_stmt->query->getStatement(0);
	SelectStatement* select = (SelectStatement*) prep_stmt->query->getStatement(1);

	ASSERT(insert->values->at(0)->isType(kExprPlaceholder));
	ASSERT(select->select_list->at(0)->isType(kExprPlaceholder));
	ASSERT(select->where_clause->expr2->isType(kExprPlaceholder));

	// Check IDs of placeholders
	ASSERT_EQ(insert->values->at(0)->ival, 0);
	ASSERT_EQ(insert->values->at(0), prep_stmt->placeholders[0]);

	ASSERT_EQ(select->select_list->at(0)->ival, 1);
	ASSERT_EQ(select->select_list->at(0), prep_stmt->placeholders[1]);

	ASSERT_EQ(select->where_clause->expr2->ival, 2);
	ASSERT_EQ(select->where_clause->expr2, prep_stmt->placeholders[2]);
}


TEST(ExecuteStatementTest) {
	TEST_PARSE_SINGLE_SQL("EXECUTE test(1, 2);", kStmtExecute, ExecuteStatement, stmt);

	ASSERT_STREQ(stmt->name, "test");
	ASSERT_EQ(stmt->parameters->size(), 2);
}