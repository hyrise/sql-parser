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
	kStmtSelect,
	kStmtDelete,
	kStmtInsert,
	kStmtCreate
} StatementType;


const int64_t kNoLimit = -1;
const int64_t kNoOffset = -1;

typedef enum {
	kOrderNone,
	kOrderAsc,
	kOrderDesc
} OrderType;


struct OrderDescription {
	OrderType type;
	Expr* expr;	
};


struct Statement {
	Statement(StatementType type) : type(type) {};
	StatementType type;
};


struct SelectStatement : Statement {
	SelectStatement() : Statement(kStmtSelect) {};

	TableRef* from_table;
	List<Expr*>* select_list;
	Expr* where_clause;
	
	List<Expr*>* group_by;
	Expr* having;

	OrderDescription *order;
	int64_t limit;
	int64_t offset;
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
