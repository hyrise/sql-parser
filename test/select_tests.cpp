

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
}

TEST(SelectExprTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT a, MAX(b), CUSTOM(c, F(un)) FROM students;",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  ASSERT_NULL(stmt->whereClause);
  ASSERT_NULL(stmt->groupBy);

  ASSERT_EQ(stmt->selectList->size(), 3);

  ASSERT(stmt->selectList->at(0)->isType(kExprColumnRef));
  ASSERT_STREQ(stmt->selectList->at(0)->getName(), "a");

  ASSERT(stmt->selectList->at(1)->isType(kExprFunctionRef));
  ASSERT_STREQ(stmt->selectList->at(1)->getName(), "MAX");
  ASSERT_NOTNULL(stmt->selectList->at(1)->exprList);
  ASSERT_EQ(stmt->selectList->at(1)->exprList->size(), 1);
  ASSERT(stmt->selectList->at(1)->exprList->at(0)->isType(kExprColumnRef));
  ASSERT_STREQ(stmt->selectList->at(1)->exprList->at(0)->getName(), "b");

  ASSERT(stmt->selectList->at(2)->isType(kExprFunctionRef));
  ASSERT_STREQ(stmt->selectList->at(2)->getName(), "CUSTOM");
  ASSERT_NOTNULL(stmt->selectList->at(2)->exprList);
  ASSERT_EQ(stmt->selectList->at(2)->exprList->size(), 2);
  ASSERT(stmt->selectList->at(2)->exprList->at(0)->isType(kExprColumnRef));
  ASSERT_STREQ(stmt->selectList->at(2)->exprList->at(0)->getName(), "c");

  ASSERT(stmt->selectList->at(2)->exprList->at(1)->isType(kExprFunctionRef));
  ASSERT_STREQ(stmt->selectList->at(2)->exprList->at(1)->getName(), "F");
  ASSERT_EQ(stmt->selectList->at(2)->exprList->at(1)->exprList->size(), 1);
  ASSERT(stmt->selectList->at(2)->exprList->at(1)->exprList->at(0)->isType(kExprColumnRef));
  ASSERT_STREQ(stmt->selectList->at(2)->exprList->at(1)->exprList->at(0)->getName(), "un");
}


TEST(SelectHavingTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT city, AVG(grade) AS avg_grade FROM students GROUP BY city HAVING AVG(grade) < -2.0",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  ASSERT_FALSE(stmt->selectDistinct);

  GroupByDescription* group = stmt->groupBy;
  ASSERT_NOTNULL(group);
  ASSERT_EQ(group->columns->size(), 1);
  ASSERT_EQ(group->having->opType, kOpLess);
  ASSERT(group->having->expr->isType(kExprFunctionRef));
  ASSERT(group->having->expr2->isType(kExprLiteralFloat));
  ASSERT_EQ(group->having->expr2->fval, -2.0);
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
}

TEST(OrderByTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT grade, city FROM students ORDER BY grade, city DESC;",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  ASSERT_NULL(stmt->whereClause);
  ASSERT_NOTNULL(stmt->order);

  ASSERT_EQ(stmt->order->size(), 2);
  ASSERT_EQ(stmt->order->at(0)->type, kOrderAsc);
  ASSERT_STREQ(stmt->order->at(0)->expr->name, "grade");

  ASSERT_EQ(stmt->order->at(1)->type, kOrderDesc);
  ASSERT_STREQ(stmt->order->at(1)->expr->name, "city");
}

TEST(SelectBetweenTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT grade, city FROM students WHERE grade BETWEEN -1 and c;",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);


  Expr* where = stmt->whereClause;
  ASSERT_NOTNULL(where);
  ASSERT(where->isType(kExprOperator));
  ASSERT_EQ(where->opType, kOpBetween);

  ASSERT_STREQ(where->expr->getName(), "grade");
  ASSERT(where->expr->isType(kExprColumnRef));

  ASSERT_EQ(where->exprList->size(), 2);
  ASSERT(where->exprList->at(0)->isType(kExprLiteralInt));
  ASSERT_EQ(where->exprList->at(0)->ival, -1);
  ASSERT(where->exprList->at(1)->isType(kExprColumnRef));
  ASSERT_STREQ(where->exprList->at(1)->getName(), "c");
}

TEST(SelectConditionalSelectTest) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT * FROM t WHERE a = (SELECT MIN(v) FROM tt) AND EXISTS (SELECT * FROM test WHERE x < a);",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  Expr* where = stmt->whereClause;
  ASSERT_NOTNULL(where);
  ASSERT(where->isType(kExprOperator));
  ASSERT_EQ(where->opType, kOpAnd);

  // a = (SELECT ...)
  Expr* cond1 = where->expr;
  ASSERT_NOTNULL(cond1);
  ASSERT_NOTNULL(cond1->expr);
  ASSERT_EQ(cond1->opType, kOpEquals);
  ASSERT_STREQ(cond1->expr->getName(), "a");
  ASSERT(cond1->expr->isType(kExprColumnRef));

  ASSERT_NOTNULL(cond1->expr2);
  ASSERT(cond1->expr2->isType(kExprSelect));

  SelectStatement* select2 = cond1->expr2->select;
  ASSERT_NOTNULL(select2);
  ASSERT_STREQ(select2->fromTable->getName(), "tt");


  // EXISTS (SELECT ...)
  Expr* cond2 = where->expr2;
  ASSERT_EQ(cond2->opType, kOpExists);
  ASSERT_NOTNULL(cond2->select);

  SelectStatement* ex_select = cond2->select;
  ASSERT_STREQ(ex_select->fromTable->getName(), "test");
}

TEST(SelectCaseWhen) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT MAX(CASE WHEN a = 'foo' THEN x ELSE 0 END) FROM test;",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  ASSERT_EQ(stmt->selectList->size(), 1);
  Expr* func = stmt->selectList->at(0);

  ASSERT_NOTNULL(func);
  ASSERT(func->isType(kExprFunctionRef));
  ASSERT_EQ(func->exprList->size(), 1);

  Expr* caseExpr = func->exprList->at(0);
  ASSERT_NOTNULL(caseExpr);
  ASSERT(caseExpr->isType(kExprOperator));
  ASSERT_EQ(caseExpr->opType, kOpCase);
  ASSERT(caseExpr->expr->isType(kExprOperator));
  ASSERT_EQ(caseExpr->expr->opType, kOpEquals);
  ASSERT_EQ(caseExpr->exprList->size(), 2);
}

TEST(SelectJoin) {
  TEST_PARSE_SINGLE_SQL(
    "SELECT City.name, Product.category, SUM(price) FROM fact\
      INNER JOIN City ON fact.city_id = City.id\
      OUTER JOIN Product ON fact.product_id = Product.id\
      GROUP BY City.name, Product.category;",
    kStmtSelect,
    SelectStatement,
    result,
    stmt);

  const TableRef* table = stmt->fromTable;
  const JoinDefinition* outer_join = table->join;
  ASSERT_EQ(table->type, kTableJoin);
  ASSERT_EQ(outer_join->type, kJoinOuter);

  ASSERT_EQ(outer_join->right->type, kTableName);
  ASSERT_STREQ(outer_join->right->name, "Product");
  ASSERT_EQ(outer_join->condition->opType, kOpEquals);
  ASSERT_STREQ(outer_join->condition->expr->table, "fact");
  ASSERT_STREQ(outer_join->condition->expr->name, "product_id");
  ASSERT_STREQ(outer_join->condition->expr2->table, "Product");
  ASSERT_STREQ(outer_join->condition->expr2->name, "id");

  // Joins are are left associative.
  // So the second join should be on the left.
  ASSERT_EQ(outer_join->left->type, kTableJoin);

  const JoinDefinition* inner_join = outer_join->left->join;
  ASSERT_EQ(inner_join->type, kJoinInner);
  ASSERT_EQ(inner_join->left->type, kTableName);
  ASSERT_STREQ(inner_join->left->name, "fact");
  ASSERT_EQ(inner_join->right->type, kTableName);
  ASSERT_STREQ(inner_join->right->name, "City");

  ASSERT_EQ(inner_join->condition->opType, kOpEquals);
  ASSERT_STREQ(inner_join->condition->expr->table, "fact");
  ASSERT_STREQ(inner_join->condition->expr->name, "city_id");
  ASSERT_STREQ(inner_join->condition->expr2->table, "City");
  ASSERT_STREQ(inner_join->condition->expr2->name, "id");
}
