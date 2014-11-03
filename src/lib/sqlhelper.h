
#ifndef __SQLHELPER_H__
#define __SQLHELPER_H__


#include "Statement.h"

namespace hsql {

void printSelectStatementInfo(SelectStatement* stmt, uint num_indent);
void printJoinStatementInfo(JoinStatement* stmt, uint num_indent);

} // namespace hsql

#endif