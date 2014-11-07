/*
 * Statement.h
 * Definition of the structure used to build the syntax tree.
 */
#ifndef __STATEMENT_H__
#define __STATEMENT_H__


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
	const char* parser_msg;
};

} // namespace hsql

#endif // __STATEMENT_H__
