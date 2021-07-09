#ifndef SQLPARSER_CREATE_STATEMENT_H
#define SQLPARSER_CREATE_STATEMENT_H

#include "SQLStatement.h"
#include "ColumnType.h"

#include <ostream>

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {
  struct SelectStatement;

  enum struct ConstraintType {PRIMARY_KEY, UNIQUE};

  // Represents definition of a key constraint
  struct TableKeyConstraint {

    TableKeyConstraint(ConstraintType keyType, std::vector<char*>* columnNames);

    virtual~TableKeyConstraint();

    ConstraintType type;
    std::vector<char*>* columnNames;
  };

  // Represents definition of a table column
  struct ColumnDefinition {
    ColumnDefinition(char* name, ColumnType type, bool nullable, ConstraintType constraintType);
    virtual~ColumnDefinition();

    char* name;
    ColumnType type;
    bool nullable;
    ConstraintType constraintType;
  };

  enum CreateType {
    kCreateTable,
    kCreateTableFromTbl, // Hyrise file format
    kCreateView,
    kCreateIndex
  };

  // Represents SQL Create statements.
  // Example: "CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)"
  struct CreateStatement : SQLStatement {
    CreateStatement(CreateType type);
    ~CreateStatement() override;

    CreateType type;
    bool ifNotExists; // default: false
    char* filePath;   // default: nullptr
    char* schema;     // default: nullptr
    char* tableName;  // default: nullptr
    char* indexName;  // default: nullptr
    std::vector<char*>* indexColumns;
    std::vector<ColumnDefinition*>* columns; // default: nullptr
    std::vector<TableKeyConstraint*>* tableKeyConstraints; // default: nullptr
    std::vector<char*>* viewColumns;
    SelectStatement* select;
  };

} // namespace hsql

#endif
