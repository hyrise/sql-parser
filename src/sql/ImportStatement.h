#ifndef __IMPORT_STATEMENT_H__
#define __IMPORT_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {
    /**
     * Represents SQL Import statements.
     */
    struct ImportStatement : SQLStatement {
        enum ImportType {
            kImportCSV,
            kImportTbl, // Hyrise file format
        };

        ImportStatement(ImportType type) :
            SQLStatement(kStmtImport),
            type(type),
            filePath(NULL),
            tableName(NULL) {};

        virtual ~ImportStatement() {
            delete filePath;
            delete tableName;
        }

        ImportType type;
        const char* filePath;
        const char* tableName;
    };

} // namespace hsql


#endif