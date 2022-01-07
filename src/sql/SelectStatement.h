#ifndef SQLPARSER_SELECT_STATEMENT_H
#define SQLPARSER_SELECT_STATEMENT_H

#include "Expr.h"
#include "SQLStatement.h"
#include "Table.h"

namespace hsql {
enum OrderType { kOrderAsc, kOrderDesc };

enum SetType { kSetUnion, kSetIntersect, kSetExcept };

// Description of the order by clause within a select statement.
struct OrderDescription {
  OrderDescription(OrderType type, Expr* expr);
  virtual ~OrderDescription();

  OrderType type;
  Expr* expr;
};

// Description of the limit clause within a select statement.
struct LimitDescription {
  LimitDescription(Expr* limit, Expr* offset);
  virtual ~LimitDescription();

  Expr* limit;
  Expr* offset;
};

// Description of the group-by clause within a select statement.
struct GroupByDescription {
  GroupByDescription();
  virtual ~GroupByDescription();

  std::vector<Expr*>* columns;
  Expr* having;
};

struct WithDescription {
  ~WithDescription();

  char* alias;
  SelectStatement* select;
};

struct SetOperation {
  SetOperation();
  virtual ~SetOperation();

  SetType setType;
  bool isAll;

  SelectStatement* nestedSelectStatement;
  std::vector<OrderDescription*>* resultOrder;
  LimitDescription* resultLimit;
};

// Representation of a full SQL select statement.
struct SelectStatement : SQLStatement {
  SelectStatement();
  ~SelectStatement() override;

  TableRef* fromTable;
  bool selectDistinct;
  std::vector<Expr*>* selectList;
  Expr* whereClause;
  GroupByDescription* groupBy;

  // Note that a SetOperation is always connected to a different SelectStatement. This statement can itself have
  // a SetOperation connection to another SelectStatement. Thus, SelectStatements connected via SetOperations form a
  // linked list. To evaluate the operations, the linked list of SelectStatements has to be traversed. The evaluation
  // order of set operations depends on the DBMS. Postgres (14), for example, specifies the following order:
  // "Without parentheses, UNION and EXCEPT associate left-to-right, but INTERSECT binds more tightly than those two
  // operators" [https://www.postgresql.org/docs/14/queries-union.html].
  //
  // Evaluation example:
  //
  //   (SELECT * FROM students INTERSECT SELECT * FROM students_2) UNION SELECT * FROM students_3 ORDER BY grade ASC;
  //
  //   1. Evaluate `Select * FROM students`
  //   2. Traverse down to the next SelectStatement via the setOperation
  //   3. Evalute the nestedSelectStatement, which is: `SELECT * FROM students_2`
  //   4. Connect the result of step 1 with the results of step 3 using the setType, which is INTERSECT
  //   5. Continue traversing down to the next SelectStatement via the setOperation
  //   6. Evaluate the new nestedSelectStatement which is: `SELECT * FROM students_3`
  //   7. Apply a Union-Operation to connect the results of 4. and 6.
  //   8. Finally, apply the resultOrder of the last SetOperation (ORDER BY grade ASC)
  SetOperation* setOperation;

  std::vector<OrderDescription*>* order;
  std::vector<WithDescription*>* withDescriptions;
  LimitDescription* limit;
};

}  // namespace hsql

#endif
