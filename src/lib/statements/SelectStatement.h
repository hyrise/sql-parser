#ifndef __SELECT_STATEMENT_H__
#define __SELECT_STATEMENT_H__

#include "SQLStatement.h"
#include "Expr.h"
#include "List.h"
#include "Table.h"

namespace hsql {


/**
 * @struct OrderDescription
 * Description of the order by clause within a select statement
 * TODO: hold multiple expressions to be sorted by
 */
typedef enum {
	kOrderAsc,
	kOrderDesc
} OrderType;

struct OrderDescription {
	OrderDescription(OrderType type, Expr* expr) :
		type(type),
		expr(expr) {}
		
	virtual ~OrderDescription(); // defined in destructors.cpp

	OrderType type;
	Expr* expr;	
};

/**
 * @struct LimitDescription
 * Description of the limit clause within a select statement
 */
const int64_t kNoLimit = -1;
const int64_t kNoOffset = -1;
struct LimitDescription {
	LimitDescription(int64_t limit, int64_t offset) :
		limit(limit),
		offset(offset) {}

	int64_t limit;
	int64_t offset;	
};

/**
 * @struct SelectStatement
 * Representation of a full select statement.
 * TODO: add union_order and union_limit
 */
struct SelectStatement : SQLStatement {
	SelectStatement() : 
		SQLStatement(kStmtSelect),
		from_table(NULL),
		select_list(NULL),
		where_clause(NULL),
		group_by(NULL),
		union_select(NULL),
		order(NULL),
		limit(NULL) {};

	virtual ~SelectStatement(); // defined in destructors.cpp

	TableRef* from_table;
	List<Expr*>* select_list;
	Expr* where_clause;	
	List<Expr*>* group_by;

	SelectStatement* union_select;
	OrderDescription* order;
	LimitDescription* limit;
};


} // namespace hsql

#endif