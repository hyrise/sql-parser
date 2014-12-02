/*
 * sql_tests.cpp
 */

#include "SQLParser.h"
#include "sqlhelper.h"
#include "tests/test.h"



using namespace hsql;



TEST(Select) {
	StatementList* stmt_list = SQLParser::parseSQLString("SELECT * FROM students;");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->size(), 1);
	ASSERT(stmt_list->at(0)->type == kStmtSelect);

	SelectStatement* stmt = (SelectStatement*) stmt_list->at(0);
	ASSERT_NULL(stmt->where_clause);
}


TEST(Delete) {
	StatementList* stmt_list = SQLParser::parseSQLString("DELETE FROM students WHERE grade > 2.0;");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->size(), 1);
	ASSERT(stmt_list->at(0)->type == kStmtDelete);

	DeleteStatement* stmt = (DeleteStatement*) stmt_list->at(0);
	ASSERT_STREQ(stmt->table_name, "students");
	ASSERT_NOTNULL(stmt->expr);
	ASSERT(stmt->expr->isType(kExprOperator));
	ASSERT_STREQ(stmt->expr->expr->name, "grade");
	ASSERT_EQ(stmt->expr->expr2->fval, 2.0);
}

TEST(Create) {
	StatementList* stmt_list = SQLParser::parseSQLString("CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->size(), 1);
	ASSERT_EQ(stmt_list->at(0)->type, kStmtCreate);

	CreateStatement* stmt = (CreateStatement*) stmt_list->at(0);
	ASSERT_EQ(stmt->create_type, CreateStatement::kTable);
	ASSERT_STREQ(stmt->table_name, "students");
	ASSERT_NOTNULL(stmt->columns);
	ASSERT_EQ(stmt->columns->size(), 4);
	ASSERT_STREQ(stmt->columns->at(0)->name, "name");
	ASSERT_EQ(stmt->columns->at(0)->type, ColumnDefinition::TEXT);
	ASSERT_STREQ(stmt->columns->at(3)->name, "grade");
	ASSERT_EQ(stmt->columns->at(3)->type, ColumnDefinition::DOUBLE);
}


TEST(Update) {
	StatementList* stmt_list = SQLParser::parseSQLString("UPDATE students SET grade = 5.0, name = 'test' WHERE name = 'Max Mustermann';");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->size(), 1);
	ASSERT_EQ(stmt_list->at(0)->type, kStmtUpdate);

	UpdateStatement* stmt = (UpdateStatement*) stmt_list->at(0);
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


TEST(Insert) {
	StatementList* stmt_list = SQLParser::parseSQLString("INSERT INTO students VALUES ('Max Mustermann', 12345, 'Musterhausen', 2.0)");
	ASSERT(stmt_list->isValid);
	ASSERT_EQ(stmt_list->size(), 1);
	ASSERT_EQ(stmt_list->at(0)->type, kStmtInsert);

	// TODO
}