#ifndef __SQLPARSER__DELETE_STATEMENT_H__
#define __SQLPARSER__DELETE_STATEMENT_H__

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {

  // Represents SQL Delete statements.
  // Example: "DELETE FROM students WHERE grade > 3.0"
  // Note: if (expr == nullptr) => delete all rows (truncate)
  struct DeleteStatement : SQLStatement {
    DeleteStatement();
    virtual ~DeleteStatement();

    char* tableName;
    Expr* expr;
  };

} // namespace hsql

#endif
