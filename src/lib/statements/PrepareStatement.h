#ifndef __PREPARE_STATEMENT_H__
#define __PREPARE_STATEMENT_H__

#include "SQLStatement.h"
#include "SelectStatement.h"

namespace hsql {


/**
 * @struct PrepareStatement
 *
 */
struct PrepareStatement : SQLStatement {
	PrepareStatement() :
		SQLStatement(kStmtPrepare),
		name(NULL),
		stmt(NULL) {}
	
	virtual ~PrepareStatement(); // defined in destructors.cpp

	const char* name;
	SQLStatement* stmt;
};




} // namsepace hsql
#endif