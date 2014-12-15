#ifndef __EXECUTE_STATEMENT_H__
#define __EXECUTE_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {


/**
 * @struct ExecuteStatement
 *
 */
struct ExecuteStatement : SQLStatement {
	ExecuteStatement() :
		SQLStatement(kStmtExecute),
		name(NULL),
		parameters(NULL) {}
	
	virtual ~ExecuteStatement(); // defined in destructors.cpp

	const char* name;
	List<Expr*>* parameters;
};




} // namsepace hsql
#endif