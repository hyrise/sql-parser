#ifndef __INSERT_STATEMENT_H__
#define __INSERT_STATEMENT_H__

#include "SQLStatement.h"
#include "SelectStatement.h"

namespace hsql {
  /**
   * Represents SQL Insert statements.
   * Example: "INSERT INTO students VALUES ('Max', 1112233, 'Musterhausen', 2.3)"
   */
  struct InsertStatement : SQLStatement {
    enum InsertType {
      kInsertValues,
      kInsertSelect
    };

    InsertStatement(InsertType type);
    virtual ~InsertStatement();

    InsertType type;
    char* tableName;
    std::vector<char*>* columns;
    std::vector<Expr*>* values;
    SelectStatement* select;
  };

} // namsepace hsql
#endif