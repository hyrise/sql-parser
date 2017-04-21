#ifndef __SQLPARSER__DROP_STATEMENT_H__
#define __SQLPARSER__DROP_STATEMENT_H__

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {

  enum DropType {
    kDropTable,
    kDropSchema,
    kDropIndex,
    kDropView,
    kDropPreparedStatement
  };

  // Represents SQL Delete statements.
  // Example "DROP TABLE students;"
  struct DropStatement : SQLStatement {

    DropStatement(DropType type);
    virtual ~DropStatement();

    DropType type;
    char* name;
  };

} // namespace hsql
#endif