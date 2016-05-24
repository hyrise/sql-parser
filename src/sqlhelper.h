#ifndef __SQLHELPER_H__
#define __SQLHELPER_H__

#include "sql/statements.h"

namespace hsql {

    void printStatementInfo(SQLStatement* stmt);
    void printSelectStatementInfo(SelectStatement* stmt, uintmax_t num_indent);
    void printImportStatementInfo(ImportStatement* stmt, uintmax_t num_indent);
    void printInsertStatementInfo(InsertStatement* stmt, uintmax_t num_indent);
    void printCreateStatementInfo(CreateStatement* stmt, uintmax_t num_indent);
    void printExpression(Expr* expr, uintmax_t num_indent);

} // namespace hsql

#endif