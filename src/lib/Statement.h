/*
 * Statement.h
 * Definition of the structure used to build the syntax tree.
 */
#ifndef __STATEMENT_H__
#define __STATEMENT_H__

#include "List.h"

namespace hsql {


typedef enum {
	kStmtError,
	kStmtSelect,
	kStmtImport,
	// Following types are planned but not supported yet
	kStmtDelete,
	kStmtInsert,
	kStmtCreate,
	kStmtDrop,
	kStmtExport,
	kStmtRename,
	kStmtAlter
} StatementType;


struct Statement {
	Statement(StatementType type) : type(type) {};

	StatementType type;
};


class StatementList : public List<Statement*> {
public:
	StatementList() : List<Statement*>(), isValid(true) {};
	StatementList(Statement* stmt) : List<Statement*>(stmt), isValid(true) {};

	bool isValid;
	const char* parser_msg;
};
// typedef List<Statement*> StatementList;


} // namespace hsql

#endif // __STATEMENT_H__
