/*
 * Statement.h
 * Definition of the structure used to build the syntax tree.
 */
#ifndef __STATEMENT_H__
#define __STATEMENT_H__

#include "Expr.h"
#include "List.h"
#include "Table.h"

namespace hsql {

typedef enum {
	kStmtError,
	kStmtSelect,
	kStmtJoin,
	kStmtDelete,
	kStmtInsert,
	kStmtCreate
} StatementType;


typedef enum {
	kOrderNone,
	kOrderAsc,
	kOrderDesc
} OrderType;


struct OrderDescription {
	OrderDescription(OrderType type, Expr* expr) : type(type), expr(expr) {}
	OrderType type;
	Expr* expr;	
};

const int64_t kNoLimit = -1;
const int64_t kNoOffset = -1;
struct LimitDescription {
	LimitDescription(int64_t limit, int64_t offset) : limit(limit), offset(offset) {}
	int64_t limit;
	int64_t offset;	
};


typedef enum {
	kJoinInner,
	kJoinOuter,
	kJoinLeft,
	kJoinRight
} JoinType;




struct Statement {
	Statement(StatementType type) : type(type) {};

	StatementType type;
	const char* parser_msg;
};


struct SelectStatement : Statement {
	SelectStatement() : Statement(kStmtSelect) {};

	TableRef* from_table;
	List<Expr*>* select_list;
	Expr* where_clause;
	
	List<Expr*>* group_by;

	OrderDescription* order;
	LimitDescription* limit;
};


struct JoinStatement : Statement {
	JoinStatement() : Statement(kStmtJoin) {};

	TableRef* table1;
	TableRef* table2;
	JoinType join_type;
	Expr* join_condition;
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

} // namespace hsql

#endif // __STATEMENT_H__
