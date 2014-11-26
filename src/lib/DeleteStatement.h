#ifndef __DELETE_STATEMENT_H__
#define __DELETE_STATEMENT_H__

#include "Statement.h"

namespace hsql {


/**
 * @struct DeleteStatement
 * DELETE FROM students WHERE grade > 3.0
 * DELETE FROM students <=> TRUNCATE students
 *
 * If expr == NULL => delete all rows (truncate)
 */
struct DeleteStatement : Statement {
	DeleteStatement() :
		Statement(kStmtDelete),
		table_name(NULL),
		expr(NULL) {};

	virtual ~DeleteStatement(); // defined in destructors.cpp

	char* table_name;
	Expr* expr;
};



} // namespace hsql
#endif