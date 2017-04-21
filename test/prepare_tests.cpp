
#include "thirdparty/microtest/microtest.h"
#include "sql_asserts.h"
#include "SQLParser.h"

using hsql::kExprPlaceholder;

using hsql::kStmtDrop;
using hsql::kStmtExecute;
using hsql::kStmtInsert;
using hsql::kStmtPrepare;
using hsql::kStmtSelect;

using hsql::kDropPreparedStatement;

using hsql::DropStatement;
using hsql::ExecuteStatement;
using hsql::InsertStatement;
using hsql::PrepareStatement;
using hsql::SelectStatement;


TEST(PrepareSingleStatementTest) {
  const std::string query = "PREPARE test: SELECT * FROM students WHERE grade = ?;";
  TEST_PARSE_SINGLE_SQL(query, kStmtPrepare, PrepareStatement, result, prepare);

  const SelectStatement* select = (const SelectStatement*) prepare->query->getStatement(0);

  ASSERT(select->whereClause->isSimpleOp('='));
  ASSERT_EQ(select->whereClause->expr2, prepare->placeholders[0])
}

TEST(PrepareMultiStatementTest) {
  const std::string query = "PREPARE test {"
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

  TEST_CAST_STMT((*prep1->query), 0, kStmtInsert, InsertStatement, insert);
  TEST_CAST_STMT((*prep1->query), 1, kStmtSelect, SelectStatement, select);

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
  ASSERT_EQ(drop->type, kDropPreparedStatement);
  ASSERT_STREQ(drop->name, "stmt");
}


TEST(ExecuteStatementTest) {
  TEST_PARSE_SINGLE_SQL("EXECUTE test(1, 2);", kStmtExecute, ExecuteStatement, result, stmt);

  ASSERT_STREQ(stmt->name, "test");
  ASSERT_EQ(stmt->parameters->size(), 2);
}
