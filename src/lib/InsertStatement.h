#ifndef __INSERT_STATEMENT_H__
#define __INSERT_STATEMENT_H__

#include "Statement.h"
#include "SelectStatement.h"

namespace hsql {


/**
 * @struct InsertStatement
 * INSERT INTO students VALUES ('Max', 1112233, 'Musterhausen', 2.3)
 * INSERT INTO employees SELECT * FROM stundents
 */
struct InsertStatement : Statement {
	typedef enum {
		kInsertValues,
		kInsertSelect
	} Type;

	InsertStatement() :
		Statement(kStmtInsert),
		table_name(NULL),
		columns(NULL),
		values(NULL),
		select(NULL) {}
	
	virtual ~InsertStatement(); // defined in destructors.cpp

	Type insert_type;
	const char* table_name;
	List<char*>* columns;
	List<Expr*>* values;
	SelectStatement* select;
};




} // namsepace hsql
#endif