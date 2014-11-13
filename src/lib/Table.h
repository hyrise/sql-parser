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
		name(NULL),
		alias(NULL),
		select(NULL),
		list(NULL),
		left(NULL),
		right(NULL),
		join_condition(NULL) {}
		
	virtual ~TableRef(); // defined in destructors.cpp

	TableRefType type;

	char* name;
	char* alias;

	SelectStatement* select;
	List<TableRef*>* list;

	// Join memberbs
	TableRef* left;
	TableRef* right;
	JoinType join_type;
	Expr* join_condition;
};


} // namespace hsql

#endif
