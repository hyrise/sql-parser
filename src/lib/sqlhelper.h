
#ifndef __SQLHELPER_H__
#define __SQLHELPER_H__


#include "sqllib.h"

namespace hsql {

void printSelectStatementInfo(SelectStatement* stmt, uint num_indent);

} // namespace hsql

#endif