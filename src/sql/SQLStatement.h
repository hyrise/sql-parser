#ifndef __SQLSTATEMENT_H__
#define __SQLSTATEMENT_H__

#include "Expr.h"
#include <vector>

namespace hsql {
    typedef enum {
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
    } StatementType;

    /**
     * Base struct for every SQL statement
     */
    struct SQLStatement {
        SQLStatement(StatementType type) :
            _type(type) {};

        virtual ~SQLStatement() {}

        virtual StatementType type() {
            return _type;
        }

    private:
        StatementType _type;
    };

} // namespace hsql
#endif // __SQLSTATEMENT_H__
