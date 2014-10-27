#ifndef __TABLEREF_H_
#define __TABLEREF_H_

class SelectStatement;

/**
 * TableRef
 * Holds reference to tables. Can be either table names or a select statement.
 */
typedef enum {
	kTableName,
	kTableSelect,
	kTableCrossProduct
} TableRefType;

typedef struct TableRef TableRef;

struct TableRef {
	TableRef(TableRefType type) : type(type) {}

	TableRefType type;

	char* name;
	SelectStatement* stmt;
	List<TableRef*>* list;
};



#endif
