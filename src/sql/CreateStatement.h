#ifndef SQLPARSER_CREATE_STATEMENT_H
#define SQLPARSER_CREATE_STATEMENT_H

#include "SQLStatement.h"
#include "ColumnType.h"

#include <ostream>

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {
  struct SelectStatement;

  enum struct ConstraintType {PRIMARY_KEY, UNIQUE, NOT_SET};

  // Superclass for both TableConstraint and Column Definition
  struct TableElement {
    enum {
      TABLECONSTRAINT,
      COLUMNDEF
    } elemType;

    virtual ~TableElement(){}
  };

  // Represents definition of a key constraint
  struct TableConstraint : TableElement {
    struct TableElement;
    TableConstraint(ConstraintType keyType, std::vector<char*>* columnNames);

    ~TableConstraint() override;

    ConstraintType type;
    std::vector<char*>* columnNames;
  };

  // Represents definition of a table column
  struct ColumnDefinition: TableElement {
    struct TableElement;
    ColumnDefinition(char* name, ColumnType type, bool nullable, ConstraintType constraintType);

    ColumnDefinition() ;

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

    void setColumnDefsAndConstraints(std::vector<TableElement*>* tableElements) {
      for(auto tableElem: *tableElements) {
        if(auto *colDef = dynamic_cast<ColumnDefinition*>(tableElem)) {
          columns->emplace_back(colDef);
        } else if(auto *tableConstraint = dynamic_cast<TableConstraint*>(tableElem)) {
          tableConstraints->emplace_back(tableConstraint);
        }
      }
    }

    CreateType type;
    bool ifNotExists; // default: false
    char* filePath;   // default: nullptr
    char* schema;     // default: nullptr
    char* tableName;  // default: nullptr
    char* indexName;  // default: nullptr
    std::vector<char*>* indexColumns;
    std::vector<ColumnDefinition*>* columns; // default: nullptr
    std::vector<TableConstraint*>* tableConstraints; // default: nullptr
    std::vector<char*>* viewColumns;
    SelectStatement* select;
  };

} // namespace hsql

#endif
