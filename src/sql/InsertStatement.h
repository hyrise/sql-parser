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

        InsertStatement(InsertType type) :
            SQLStatement(kStmtInsert),
            type(type),
            tableName(NULL),
            columns(NULL),
            values(NULL),
            select(NULL) {}

        virtual ~InsertStatement() {
            free ((char*)tableName);
            if(columns) {
                while(!columns->empty()) {
                    delete columns->back();
                    columns->pop_back();
                }
                delete columns;
            }
            if(values) {
                while(!values->empty()) {
                    delete values->back();
                    values->pop_back();
                }
                delete values;
            }
            delete select;
        }

        InsertType type;
        const char* tableName;
        std::vector<char*>* columns;
        std::vector<Expr*>* values;
        SelectStatement* select;
    };

} // namsepace hsql
#endif
