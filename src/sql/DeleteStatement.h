#ifndef __DELETE_STATEMENT_H__
#define __DELETE_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {
    /**
     * Represents SQL Delete statements.
     * Example: "DELETE FROM students WHERE grade > 3.0"
     *
     * Note: if (expr == NULL) => delete all rows (truncate)
     */
    struct DeleteStatement : SQLStatement {
        DeleteStatement() :
            SQLStatement(kStmtDelete),
            tableName(NULL),
            expr(NULL) {};

        virtual ~DeleteStatement() {
            delete tableName;
            delete expr;
        }

        char* tableName;
        Expr* expr;
    };

} // namespace hsql
#endif