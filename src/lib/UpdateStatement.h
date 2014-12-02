#ifndef __UPDATE_STATEMENT_H__
#define __UPDATE_STATEMENT_H__

#include "Statement.h"

namespace hsql {

struct UpdateClause {
	char* column;
	Expr* value;
};

struct UpdateStatement : Statement {
	UpdateStatement() :
		Statement(kStmtUpdate),
		table(NULL),
		updates(NULL),
		where(NULL) {}
	
	virtual ~UpdateStatement(); // defined in destructors.cpp

	TableRef* table;
	List<UpdateClause*>* updates;
	Expr* where;
};



} // namsepace hsql
#endif