/*
 * Statement.h
 * Definition of the structure used to build the syntax tree.
 */
#ifndef __STATEMENT_H__
#define __STATEMENT_H__

#include "Expr.h"
#include "List.h"

class TableRef;

typedef enum {
	eSelect,
	eDelete,
	eInsert,
	eCreate
} EStatementType;



class Statement {
public:
	Statement(EStatementType type);

	EStatementType type;
};


class SelectStatement : public Statement {
public:
	SelectStatement();

	TableRef* from_table;
	List<Expr*>* select_list;
	List<Expr*>* group_by;
	Expr* where_clause;
};


/**
 * TableRef
 * Holds reference to tables. Can be either table names or a select statement.
 */
typedef enum {
	eTableName,
	eTableSelect
} ETableRefType;

class TableRef {
public:
	TableRef(ETableRefType type);

	ETableRefType type;

	SelectStatement* stmt;
	List<char*>* table_names;

};

#endif // __STATEMENT_H__
