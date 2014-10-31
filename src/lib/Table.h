#ifndef __TABLEREF_H__
#define __TABLEREF_H__


namespace hsql {

class SelectStatement;
class JoinStatement;

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

typedef struct TableRef TableRef;

struct TableRef {
	TableRef(TableRefType type) : type(type) {}

	TableRefType type;

	char* name;
	SelectStatement* select;
	JoinStatement* join;
	List<TableRef*>* list;
};


} // namespace hsql

#endif
