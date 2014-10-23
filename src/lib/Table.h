#ifndef __TABLEREF_H_
#define __TABLEREF_H_

class SelectStatement;

/**
 * TableRef
 * Holds reference to tables. Can be either table names or a select statement.
 */
typedef enum {
	eTableName,
	eTableSelect,
	eTableCrossProduct
} ETableRefType;

typedef struct TableRef TableRef;

struct TableRef {
	TableRef(ETableRefType type) : type(type) {}

	ETableRefType type;

	char* name;
	SelectStatement* stmt;
	List<TableRef*>* list;
};



#endif
