#ifndef __TABLEREF_H_
#define __TABLEREF_H_

class SelectStatement;

/**
 * TableRef
 * Holds reference to tables. Can be either table names or a select statement.
 */
typedef enum {
	eTableName,
	eTableSelect
} ETableRefType;


struct TableRef {
	TableRef(ETableRefType type) : type(type) {}

	ETableRefType type;
	SelectStatement* stmt;
	List<char*>* table_names;
};



#endif
