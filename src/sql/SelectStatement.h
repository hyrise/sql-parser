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

  enum SetType {
    kSetUnion,
    kSetIntersect,
    kSetExcept
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

  // Description of the union/intersect/except clause within a select statement
  struct SetDescription {
    SetDescription(SetType type, bool all);
    virtual ~SetDescription();

    SetType type;
    bool all;
  };

  // Representation of a full SQL select statement.
  struct SelectStatement : SQLStatement {
    SelectStatement();
    virtual ~SelectStatement();

    TableRef* fromTable;
    bool selectDistinct;
    std::vector<Expr*>* selectList;
    Expr* whereClause;
    GroupByDescription* groupBy;

    std::vector<SelectStatement*>* setStatement;
    std::vector<SetDescription*>* setType;
    std::vector<OrderDescription*>* order;
    LimitDescription* limit;
  };

  SelectStatement* MakeOrAppendUnionList(SelectStatement* stmt, 
                                         SetDescription* desc, 
                                         SelectStatement* stmt2);

} // namespace hsql

#endif
