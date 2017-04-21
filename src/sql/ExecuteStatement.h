#ifndef __SQLPARSER__EXECUTE_STATEMENT_H__
#define __SQLPARSER__EXECUTE_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {

  // Represents SQL Execute statements.
  // Example: "EXECUTE ins_prep(100, "test", 2.3);"
  struct ExecuteStatement : SQLStatement {
    ExecuteStatement();
    virtual ~ExecuteStatement();

    char* name;
    std::vector<Expr*>* parameters;
  };

} // namsepace hsql

#endif
