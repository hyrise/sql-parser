#ifndef __EXECUTE_STATEMENT_H__
#define __EXECUTE_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {
    /**
     * Represents SQL Execute statements.
     * Example: "EXECUTE ins_prep(100, "test", 2.3);"
     */
    struct ExecuteStatement : SQLStatement {
        ExecuteStatement() :
            SQLStatement(kStmtExecute),
            name(NULL),
            parameters(NULL) {}

        virtual ~ExecuteStatement() {
            delete name;
            if(parameters) {
                while(!parameters->empty()) {
                    delete parameters->back();
                    parameters->pop_back();
                }
                delete parameters;
            }
        }

        const char* name;
        std::vector<Expr*>* parameters;
    };

} // namsepace hsql
#endif
