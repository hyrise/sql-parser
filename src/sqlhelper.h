#ifndef __SQLHELPER_H__
#define __SQLHELPER_H__

#include "sql/statements.h"

namespace hsql {

    void printStatementInfo(SQLStatement* stmt);
    void printSelectStatementInfo(SelectStatement* stmt, unsigned num_indent);
    void printImportStatementInfo(ImportStatement* stmt, unsigned num_indent);
    void printInsertStatementInfo(InsertStatement* stmt, unsigned num_indent);
    void printCreateStatementInfo(CreateStatement* stmt, unsigned num_indent);
    void printExpression(Expr* expr, unsigned num_indent);

} // namespace hsql

#endif