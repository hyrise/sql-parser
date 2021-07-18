#ifndef SQLPARSER_ALTER_STATEMENT_H
#define SQLPARSER_ALTER_STATEMENT_H

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {

  enum AlterType {
    kAlterDropColumn,
  };

  // Represents SQL Alter Table statements.
  // Example "ALTER TABLE students DROP COLUMN name;"
  struct AlterStatement : SQLStatement {

    AlterStatement(AlterType type);
    ~AlterStatement() override;

    AlterType type;
    char* schema;
    bool if_exists;
    char* name;
    char* column_name;
  };

} // namespace hsql
#endif