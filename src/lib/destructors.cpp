

#include "sqllib.h"

namespace hsql {

/**
 * SQLStatement.h
 */
SQLStatement::~SQLStatement() { /* empty */ }
SQLStatementList::~SQLStatementList() {
	delete parser_msg;
}

/**
 * ImportStatement.h
 */
ImportStatement::~ImportStatement() {
	delete file_path;
	delete table_name;
}

/**
 * InsertStatement.h
 */
InsertStatement::~InsertStatement() {
	delete table_name;
	delete columns;
	delete values;
	delete select;
}

/**
 * DeleteStatement.h
 */
DeleteStatement::~DeleteStatement() {
	delete table_name;
	delete expr;
}

/**
 * UpdateStatement.h
 */
UpdateStatement::~UpdateStatement() {
	delete table;
	delete updates;
	delete where;
}

/**
 * SelectStatement.h
 */
SelectStatement::~SelectStatement() {
	delete from_table;
	delete select_list;
	delete where_clause;
	delete group_by;
	delete order;
	delete limit;
}
OrderDescription::~OrderDescription() {
	delete expr;
}

/**
 * CreateStatement.h
 */ 
CreateStatement::~CreateStatement() {
	delete columns;
	delete file_path;
	delete table_name;
}
ColumnDefinition::~ColumnDefinition() {
	delete name;
}

/**
 * Table.h
 */
TableRef::~TableRef() {
	delete name;
	delete alias;
	delete select;
	delete list;
}
JoinDefinition::~JoinDefinition() {
	delete left;
	delete right;
	delete condition;
}




} // namespace hsql