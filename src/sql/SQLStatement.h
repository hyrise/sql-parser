#ifndef __SQLSTATEMENT_H__
#define __SQLSTATEMENT_H__

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

  /**
   * Base struct for every SQL statement
   */
  struct SQLStatement {
    SQLStatement(StatementType type);

    virtual ~SQLStatement();

    virtual StatementType type() const;

   private:
    StatementType type_;
  };

} // namespace hsql
#endif // __SQLSTATEMENT_H__
