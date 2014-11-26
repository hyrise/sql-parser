#ifndef __CREATE_STATEMENT_H__
#define __CREATE_STATEMENT_H__

#include "Statement.h"

namespace hsql {


/**
 * @struct ColumnDefinition
 */
struct ColumnDefinition {
	enum DataType {
		TEXT,
		INT,
		DOUBLE
	};

	char* name;
	DataType type;
};

/**
 * @struct CreateStatement
 * CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)
 * CREATE TABLE students FROM TBL FILE 'test/students.tbl'
 */
struct CreateStatement : Statement {
	enum CreateType {
		kTable,
		kTableFromTbl, // Hyrise file format
	};

	CreateStatement() :
		Statement(kStmtCreate),
		if_not_exists(false),
		file_path(NULL),
		table_name(NULL) {};
		
	virtual ~CreateStatement(); // defined in destructors.cpp

	CreateType create_type;
	bool if_not_exists;
	const char* file_path;
	const char* table_name;
};



} // namespace hsql
#endif