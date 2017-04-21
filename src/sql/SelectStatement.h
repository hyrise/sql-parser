#ifndef __SQLPARSER__SELECT_STATEMENT_H__
#define __SQLPARSER__SELECT_STATEMENT_H__

#include "SQLStatement.h"
#include "Expr.h"
#include "Table.h"

namespace hsql {
  enum OrderType {
    kOrderAsc,
    kOrderDesc
  };


  // Description of the order by clause within a select statement.
  struct OrderDescription {
    OrderDescription(OrderType type, Expr* expr);
    virtual ~OrderDescription();

    OrderType type;
    Expr* expr;
  };

  const int64_t kNoLimit = -1;
  const int64_t kNoOffset = -1;

  // Description of the limit clause within a select statement.
  struct LimitDescription {
    LimitDescription(int64_t limit, int64_t offset);

    int64_t limit;
    int64_t offset;
  };

  // Description of the group-by clause within a select statement.
  struct GroupByDescription {
    GroupByDescription();
    virtual ~GroupByDescription();

    std::vector<Expr*>* columns;
    Expr* having;
  };

  // Representation of a full SQL select statement.
  // TODO: add union_order and union_limit.
  struct SelectStatement : SQLStatement {
    SelectStatement();
    virtual ~SelectStatement();

    TableRef* fromTable;
    bool selectDistinct;
    std::vector<Expr*>* selectList;
    Expr* whereClause;
    GroupByDescription* groupBy;

    SelectStatement* unionSelect;
    std::vector<OrderDescription*>* order;
    LimitDescription* limit;
  };

} // namespace hsql

#endif
