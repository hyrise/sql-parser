

#include "sqllib.h"

namespace hsql {

Statement::~Statement() {
	/* empty */
}

StatementList::~StatementList() {
	delete parser_msg;
}

SelectStatement::~SelectStatement() {
	delete from_table;
	delete select_list;
	delete where_clause;
	delete group_by;
	delete order;
	delete limit;
}

ImportStatement::~ImportStatement() {
	delete file_path;
	delete table_name;
}

CreateStatement::~CreateStatement() {
	delete file_path;
	delete table_name;
}

OrderDescription::~OrderDescription() {
	delete expr;
}

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