#ifndef SQLPARSER_SELECT_STATEMENT_H
#define SQLPARSER_SELECT_STATEMENT_H

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
    virtual ~SelectStatement();

    TableRef* fromTable;
    bool selectDistinct;
    std::vector<Expr*>* selectList;
    Expr* whereClause;
    GroupByDescription* groupBy;

    // Note that a SetOperator is always connected to a
    // different SelectStatement. This statement can itself
    // have SetOperator connections to other SelectStatements.
    // To evaluate the operators in the correct order: 
    //    1. Fully evaluate the nested SelectStatement
    //    2. Connect the nested SelectStatement to our original
    //       with the given SetOperation
    //    3. Connect the result with the next SetOperator in the
    //       vector
    //    4. Repeat until all SetOperators in the vector are
    //       connected 
    std::vector<SetOperation*>* setOperations;

    std::vector<OrderDescription*>* order;
    std::vector<WithDescription*>* withDescriptions;
    LimitDescription* limit;
  };


} // namespace hsql

#endif
