#ifndef __DROP_STATEMENT_H__
#define __DROP_STATEMENT_H__

#include "Statement.h"

namespace hsql {

struct DropStatement : Statement {
	enum ObjectType {
		kTable,
		kSchema,
		kIndex,
		kView
	};


	DropStatement(ObjectType type) :
		Statement(kStmtDrop),
		obj_type(type),
		name(NULL) {}


	ObjectType obj_type;
	const char* name;



	virtual ~DropStatement() {
		delete name;
	}
};





} // namespace hsql
#endif