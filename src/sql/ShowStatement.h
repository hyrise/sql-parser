#ifndef __SQLPARSER__SHOW_STATEMENT_H__
#define __SQLPARSER__SHOW_STATEMENT_H__

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {

  enum ShowType {
    kShowColumns,
    kShowTables
  };

  // Represents SQL SHOW statements.
  // Example "SHOW TABLES;"
  struct ShowStatement : SQLStatement {

    ShowStatement(ShowType type);
    virtual ~ShowStatement();

    ShowType type;
    char* name;
  };

} // namespace hsql
#endif
