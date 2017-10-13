#ifndef __SQLPARSER__SQLSTATEMENT_H__
#define __SQLPARSER__SQLSTATEMENT_H__

#include <vector>

#include "Expr.h"

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
    kStmtAlter,
    kStmtShow
  };

  // Base struct for every SQL statement
  struct SQLStatement {

    SQLStatement(StatementType type);

    virtual ~SQLStatement();

    StatementType type() const;

    bool isType(StatementType type) const;

    // Shorthand for isType(type).
    bool is(StatementType type) const;

    std::vector<Expr*>* hints;

   private:
    StatementType type_;

  };

} // namespace hsql

#endif // __SQLPARSER__SQLSTATEMENT_H__
