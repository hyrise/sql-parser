#ifndef __PREPARE_STATEMENT_H__
#define __PREPARE_STATEMENT_H__

#include "SQLStatement.h"
#include "SelectStatement.h"

namespace hsql {


/**
 * @struct PrepareStatement
 * @brief Represents "PREPARE ins_prep: SELECT * FROM t1 WHERE c1 = ? AND c2 = ?"
 */
struct PrepareStatement : SQLStatement {
	PrepareStatement() :
		SQLStatement(kStmtPrepare),
		name(NULL),
		stmt(NULL) {}
	
	virtual ~PrepareStatement() {
		delete stmt;
		delete name;
	}

	const char* name;
	SQLStatement* stmt;
};




} // namsepace hsql
#endif