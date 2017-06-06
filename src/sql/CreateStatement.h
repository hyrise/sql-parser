#ifndef __SQLPARSER__CREATE_STATEMENT_H__
#define __SQLPARSER__CREATE_STATEMENT_H__

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {
  struct SelectStatement;

  // Represents definition of a table column
  struct ColumnDefinition {
    enum DataType {
      UNKNOWN,
      TEXT,
      INT,
      DOUBLE
    };

    ColumnDefinition(char* name, DataType type);
    virtual ~ColumnDefinition();

    char* name;
    DataType type;
  };

  enum CreateType {
    kCreateTable,
    kCreateTableFromTbl, // Hyrise file format
    kCreateView
  };

  // Represents SQL Create statements.
  // Example: "CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)"
  struct CreateStatement : SQLStatement {
    CreateStatement(CreateType type);
    virtual ~CreateStatement();

    CreateType type;
    bool ifNotExists; // default: false
    char* filePath; // default: nullptr
    char* tableName; // default: nullptr
    std::vector<ColumnDefinition*>* columns; // default: nullptr
    std::vector<char*>* viewColumns;
    SelectStatement* select;
  };

} // namespace hsql

#endif
