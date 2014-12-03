#ifndef __DROP_STATEMENT_H__
#define __DROP_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {

struct DropStatement : SQLStatement {
	enum EntityType {
		kTable,
		kSchema,
		kIndex,
		kView
	};


	DropStatement(EntityType type) :
		SQLStatement(kStmtDrop),
		type(type),
		name(NULL) {}


	EntityType type;
	const char* name;


	virtual ~DropStatement() {
		delete name;
	}
};





} // namespace hsql
#endif