/*
 * sql_tests.cpp
 */

#include "thirdparty/microtest/microtest.h"
#include "sql_asserts.h"
#include "SQLParser.h"
#include "sqlhelper.h"

using namespace hsql;


TEST(DeleteStatementTest) {
  const SQLParserResult* result = SQLParser::parseSQLString("DELETE FROM students WHERE grade > 2.0;");
  ASSERT(result->isValid());
  ASSERT_EQ(result->size(), 1);
  ASSERT(result->getStatement(0)->type() == kStmtDelete);

  const DeleteStatement* stmt = (const DeleteStatement*) result->getStatement(0);
  ASSERT_STREQ(stmt->tableName, "students");
  ASSERT_NOTNULL(stmt->expr);
  ASSERT(stmt->expr->isType(kExprOperator));
  ASSERT_STREQ(stmt->expr->expr->name, "grade");
  ASSERT_EQ(stmt->expr->expr2->fval, 2.0);

  delete result;
}

TEST(CreateStatementTest) {
  const SQLParserResult* result = SQLParser::parseSQLString("CREATE TABLE students (name TEXT, student_number INT, city INTEGER, grade DOUBLE)");
  ASSERT(result->isValid());
  ASSERT_EQ(result->size(), 1);
  ASSERT_EQ(result->getStatement(0)->type(), kStmtCreate);

  const CreateStatement* stmt = (const CreateStatement*) result->getStatement(0);
  ASSERT_EQ(stmt->type, CreateStatement::kTable);
  ASSERT_STREQ(stmt->tableName, "students");
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

  delete result;
}


TEST(UpdateStatementTest) {
  const SQLParserResult* result = SQLParser::parseSQLString("UPDATE students SET grade = 5.0, name = 'test' WHERE name = 'Max Mustermann';");
  ASSERT(result->isValid());
  ASSERT_EQ(result->size(), 1);
  ASSERT_EQ(result->getStatement(0)->type(), kStmtUpdate);

  const UpdateStatement* stmt = (const UpdateStatement*) result->getStatement(0);
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
  \

  delete result;
}


TEST(InsertStatementTest) {
  TEST_PARSE_SINGLE_SQL(
    "INSERT INTO students VALUES ('Max Mustermann', 12345, 'Musterhausen', 2.0)",
    kStmtInsert,
    InsertStatement,
    result,
    stmt);

  ASSERT_EQ(stmt->values->size(), 4);
  // TODO

  delete result;
}


TEST(DropTableStatementTest) {
  TEST_PARSE_SINGLE_SQL(
    "DROP TABLE students",
    kStmtDrop,
    DropStatement,
    result,
    stmt);

  ASSERT_EQ(stmt->type, DropStatement::kTable);
  ASSERT_NOTNULL(stmt->name);
  ASSERT_STREQ(stmt->name, "students");

  delete result;
}


TEST(PrepareStatementTest) {
  std::string query = "PREPARE test {"
                      "INSERT INTO test VALUES(?);"
                      "SELECT ?, test FROM test WHERE c1 = ?;"
                      "};"
                      "PREPARE stmt: SELECT * FROM data WHERE c1 = ?;"
                      "DEALLOCATE PREPARE stmt;";

  TEST_PARSE_SQL_QUERY(query, result, 3);

  TEST_CAST_STMT(result, 0, kStmtPrepare, PrepareStatement, prep1);
  TEST_CAST_STMT(result, 1, kStmtPrepare, PrepareStatement, prep2);
  TEST_CAST_STMT(result, 2, kStmtDrop, DropStatement, drop);

  // Prepare Statement #1
  ASSERT_STREQ(prep1->name, "test");
  ASSERT_EQ(prep1->placeholders.size(), 3);
  ASSERT_EQ(prep1->query->size(), 2);

  TEST_CAST_STMT(prep1->query, 0, kStmtInsert, InsertStatement, insert);
  TEST_CAST_STMT(prep1->query, 1, kStmtSelect, SelectStatement, select);

  ASSERT(insert->values->at(0)->isType(kExprPlaceholder));
  ASSERT(select->selectList->at(0)->isType(kExprPlaceholder));
  ASSERT(select->whereClause->expr2->isType(kExprPlaceholder));

  // Check IDs of placeholders
  ASSERT_EQ(insert->values->at(0)->ival, 0);
  ASSERT_EQ(insert->values->at(0), prep1->placeholders[0]);

  ASSERT_EQ(select->selectList->at(0)->ival, 1);
  ASSERT_EQ(select->selectList->at(0), prep1->placeholders[1]);

  ASSERT_EQ(select->whereClause->expr2->ival, 2);
  ASSERT_EQ(select->whereClause->expr2, prep1->placeholders[2]);

  // Prepare Statement #2
  ASSERT_STREQ(prep2->name, "stmt");
  ASSERT_EQ(prep2->placeholders.size(), 1);

  // Deallocate Statement
  ASSERT_EQ(drop->type, DropStatement::kPreparedStatement);
  ASSERT_STREQ(drop->name, "stmt");

  delete result;
}


TEST(ExecuteStatementTest) {
  TEST_PARSE_SINGLE_SQL("EXECUTE test(1, 2);", kStmtExecute, ExecuteStatement, result, stmt);

  ASSERT_STREQ(stmt->name, "test");
  ASSERT_EQ(stmt->parameters->size(), 2);

  delete result;
}

TEST_MAIN();