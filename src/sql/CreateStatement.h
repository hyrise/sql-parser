#ifndef __CREATE_STATEMENT_H__
#define __CREATE_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {
    /**
     * Represents definition of a table column
     */
    struct ColumnDefinition {
        enum DataType {
            TEXT,
            INT,
            DOUBLE
        };

        ColumnDefinition(char* name, DataType type) :
            name(name),
            type(type) {}

        virtual ~ColumnDefinition() {
            delete name;
        }

        char* name;
        DataType type;
    };

    /**
     * Represents SQL Create statements.
     * Example: "CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)"
     */
    struct CreateStatement : SQLStatement {
        enum CreateType {
            kTable,
            kTableFromTbl // Hyrise file format
        };

        CreateStatement(CreateType type) :
            SQLStatement(kStmtCreate),
            type(type),
            ifNotExists(false),
            filePath(NULL),
            tableName(NULL),
            columns(NULL) {};

        virtual ~CreateStatement() {
            delete columns;
            delete filePath;
            delete tableName;
        }

        CreateType type;

        bool ifNotExists;
        const char* filePath;
        const char* tableName;
        std::vector<ColumnDefinition*>* columns;
    };

} // namespace hsql
#endif