#ifndef __SQLPARSER__UPDATE_STATEMENT_H__
#define __SQLPARSER__UPDATE_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {

  // Represents "column = value" expressions.
  struct UpdateClause {
    char* column;
    Expr* value;
  };

  // Represents SQL Update statements.
  struct UpdateStatement : SQLStatement {
    UpdateStatement();
    virtual ~UpdateStatement();

    // TODO: switch to char* instead of TableRef
    TableRef* table;
    std::vector<UpdateClause*>* updates;
    Expr* where;
  };

} // namsepace hsql

#endif
