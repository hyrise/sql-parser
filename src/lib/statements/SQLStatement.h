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
	kStmtPrepare,
	kStmtExecute,
	kStmtExport,
	kStmtRename,
	kStmtAlter
} StatementType;


/**
 * @struct SQLStatement
 * @brief Base class for every SQLStatement
 */
struct SQLStatement {
	SQLStatement(StatementType type) :
		_type(type) {};

	virtual ~SQLStatement() {}

	virtual StatementType type() { return _type; }

private:
	StatementType _type;
};


/**
 * @struct SQLStatementList
 * @brief Represents the result of the SQLParser. If parsing was successful it is a list of SQLStatement.
 */
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
		
	virtual ~SQLStatementList() {
		delete parser_msg;
	}

	bool isValid;
	const char* parser_msg;
	int error_line;
	int error_col;
};



} // namespace hsql

#endif // __STATEMENT_H__
