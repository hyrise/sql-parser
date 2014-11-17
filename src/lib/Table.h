#ifndef __TABLEREF_H__
#define __TABLEREF_H__

#include <stdio.h>
namespace hsql {

class SelectStatement;

/**
 * TableRef
 * Holds reference to tables. Can be either table names or a select statement.
 */
typedef enum {
	kTableName,
	kTableSelect,
	kTableJoin,
	kTableCrossProduct
} TableRefType;


typedef enum {
	kJoinInner,
	kJoinOuter,
	kJoinLeft,
	kJoinRight
} JoinType;


typedef struct TableRef TableRef;

struct TableRef {
	TableRef(TableRefType type) :
		type(type),
		schema(NULL),
		name(NULL),
		alias(NULL),
		select(NULL),
		list(NULL),
		left(NULL),
		right(NULL),
		join_condition(NULL) {}
		
	virtual ~TableRef(); // defined in destructors.cpp

	TableRefType type;

	char* schema;
	char* name;
	char* alias;

	SelectStatement* select;
	List<TableRef*>* list;

	// Join members
	TableRef* left;
	TableRef* right;
	JoinType join_type;
	Expr* join_condition;


	/**
	 * Convenience accessor methods
	 */
	inline bool hasSchema() { return schema != NULL; }

	inline char* getName() {
		if (alias != NULL) return alias;
		else return name;
	}
};


} // namespace hsql

#endif
