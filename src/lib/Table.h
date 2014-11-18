#ifndef __TABLEREF_H__
#define __TABLEREF_H__

#include <stdio.h>

namespace hsql {

struct SelectStatement;
struct JoinDefinition;
struct TableRef;

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




struct TableRef {
	TableRef(TableRefType type) :
		type(type),
		schema(NULL),
		name(NULL),
		alias(NULL),
		select(NULL),
		list(NULL),
		join(NULL) {}
		
	virtual ~TableRef(); // defined in destructors.cpp

	TableRefType type;

	char* schema;
	char* name;
	char* alias;

	SelectStatement* select;
	List<TableRef*>* list;
	JoinDefinition* join;


	/**
	 * Convenience accessor methods
	 */
	inline bool hasSchema() { return schema != NULL; }

	inline char* getName() {
		if (alias != NULL) return alias;
		else return name;
	}
};


/**
 * Following are definitions needed to specify join tables
 */ 

typedef enum {
	kJoinInner,
	kJoinOuter,
	kJoinLeft,
	kJoinRight,
} JoinType;

/**
 * Definition of a join table
 */
struct JoinDefinition {
	JoinDefinition() :
		left(NULL),
		right(NULL),
		condition(NULL),
		type(kJoinInner) {}

	virtual ~JoinDefinition(); // defined in destructors.cpp

	TableRef* left;
	TableRef* right;
	Expr* condition;

	JoinType type;
};



} // namespace hsql
#endif
