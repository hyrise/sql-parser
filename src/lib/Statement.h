/*
 * Statement.h
 * Definition of the structure used to build the syntax tree.
 */
#ifndef __STATEMENT_H__
#define __STATEMENT_H__

#include "Expr.h"
#include "List.h"
#include "Table.h"

typedef enum {
	eSelect,
	eDelete,
	eInsert,
	eCreate
} EStatementType;


struct Statement {
	Statement(EStatementType type);

	EStatementType type;
};


struct SelectStatement : Statement {
	SelectStatement();

	TableRef* from_table;
	List<Expr*>* select_list;
	List<Expr*>* group_by;
	Expr* where_clause;
};


struct DeleteStatement : Statement {
	// TODO
};

struct InsertStatement : Statement {
	// TODO
};

struct CreateStatement : Statement {
	// TODO
};


#endif // __STATEMENT_H__
