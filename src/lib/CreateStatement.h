#ifndef __CREATE_STATEMENT_H__
#define __CREATE_STATEMENT_H__

#include "Statement.h"

namespace hsql {


typedef enum {
	kTable,
	kTableFromTbl, // Hyrise file format
} CreateType;


/**
 * @struct CreateStatement
 */
struct CreateStatement : Statement {
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