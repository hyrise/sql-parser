#ifndef __SQLPARSER__SQLSTATEMENT_H__
#define __SQLPARSER__SQLSTATEMENT_H__

#include "Expr.h"
#include <vector>

namespace hsql {
  enum StatementType {
    kStmtError, // unused
    kStmtSelect,
    kStmtImport,
    kStmtInsert,
    kStmtUpdate,
    kStmtDelete,
    kStmtCreate,
    kStmtDrop,
    kStmtPrepare,
    kStmtExecute,
    kStmtExport,
    kStmtRename,
    kStmtAlter
  };

  // Base struct for every SQL statement
  struct SQLStatement {

    SQLStatement(StatementType type);

    virtual ~SQLStatement();

    StatementType type() const;

    bool isType(StatementType type) const;

    // Shorthand for isType(type).
    bool is(StatementType type) const;

   private:
    StatementType type_;

  };

} // namespace hsql

#endif // __SQLPARSER__SQLSTATEMENT_H__
