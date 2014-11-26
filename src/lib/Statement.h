/*
 * Statement.h
 * Definition of the structure used to build the syntax tree.
 */
#ifndef __STATEMENT_H__
#define __STATEMENT_H__

#include "List.h"

namespace hsql {


typedef enum {
	kStmtError, // Unused
	kStmtSelect,
	kStmtImport,
	kStmtInsert,
	kStmtUpdate,
	// Following types are planned but not supported yet
	kStmtDelete,
	kStmtCreate,
	kStmtDrop,
	kStmtExport,
	kStmtRename,
	kStmtAlter
} StatementType;


struct Statement {
	Statement(StatementType type) :
		type(type) {};

	virtual ~Statement(); // defined in destructors.cpp

	StatementType type;
};


class StatementList : public List<Statement*> {
public:
	StatementList() :
		List<Statement*>(),
		isValid(true),
		parser_msg(NULL) {};

	StatementList(Statement* stmt) :
		List<Statement*>(stmt),
		isValid(true),
		parser_msg(NULL) {};
		
	virtual ~StatementList(); // defined in destructors.cpp

	bool isValid;
	const char* parser_msg;
};
// typedef List<Statement*> StatementList;


} // namespace hsql

#endif // __STATEMENT_H__
