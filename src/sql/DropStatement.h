#ifndef __SQLPARSER__DROP_STATEMENT_H__
#define __SQLPARSER__DROP_STATEMENT_H__

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {
  // Represents SQL Delete statements.
  // Example "DROP TABLE students;"
  struct DropStatement : SQLStatement {
    enum EntityType {
      kTable,
      kSchema,
      kIndex,
      kView,
      kPreparedStatement
    };

    DropStatement(EntityType type);
    virtual ~DropStatement();

    EntityType type;
    char* name;
  };

} // namespace hsql
#endif