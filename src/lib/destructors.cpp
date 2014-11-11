

#include "sqllib.h"

namespace hsql {

Statement::~Statement() {
	/* empty */
}

StatementList::~StatementList() {
	delete parser_msg;
}

TableRef::~TableRef() {
	delete name;
	delete alias;
	delete select;
	delete list;
	delete left;
	delete right;
	delete join_condition;
}

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

ImportStatement::~ImportStatement() {
	delete file_path;
	delete table_name;
}

CreateStatement::~CreateStatement() {
	delete file_path;
	delete table_name;
}

} // namespace hsql