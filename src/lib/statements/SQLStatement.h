/*
 * SQLStatement.h
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
	kStmtDelete,
	kStmtCreate,
	kStmtDrop,
	// Following types are not supported yet
	kStmtExport,
	kStmtRename,
	kStmtAlter
} StatementType;


struct SQLStatement {
	SQLStatement(StatementType type) :
		_type(type) {};

	virtual ~SQLStatement(); // defined in destructors.cpp


	virtual StatementType type() { return _type; }
	

private:
	StatementType _type;
};


class SQLStatementList : public List<SQLStatement*> {
public:
	SQLStatementList() :
		List<SQLStatement*>(),
		isValid(true),
		parser_msg(NULL) {};

	SQLStatementList(SQLStatement* stmt) :
		List<SQLStatement*>(stmt),
		isValid(true),
		parser_msg(NULL) {};
		
	virtual ~SQLStatementList(); // defined in destructors.cpp

	bool isValid;
	const char* parser_msg;
};



} // namespace hsql

#endif // __STATEMENT_H__
