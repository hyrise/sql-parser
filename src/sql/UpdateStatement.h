#ifndef __UPDATE_STATEMENT_H__
#define __UPDATE_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {
    /**
     * Represents "column = value" expressions
     */
    struct UpdateClause {
        char* column;
        Expr* value;
    };

    /**
     * Represents SQL Update statements.
     */
    struct UpdateStatement : SQLStatement {
        UpdateStatement() :
            SQLStatement(kStmtUpdate),
            table(NULL),
            updates(NULL),
            where(NULL) {}

        virtual ~UpdateStatement() {
            delete table;
            delete updates;
            delete where;
        }

        // TODO: switch to char* instead of TableRef
        TableRef* table;
        std::vector<UpdateClause*>* updates;
        Expr* where;
    };

} // namsepace hsql
#endif