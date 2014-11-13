#ifndef __CREATE_STATEMENT_H__
#define __CREATE_STATEMENT_H__

#include "Statement.h"

namespace hsql {


typedef enum {
	kTable,
	kTableFromTbl, // Hyrise file format
	// HANA supports a second file type CONTROL FILE
	// we don't need that so far, but we leave the option
	// to expand it here
} CreateType;


/**
 * @struct CreateStatement
 */
struct CreateStatement : Statement {
	CreateStatement() :
		Statement(kStmtCreate),
		file_path(NULL),
		table_name(NULL) {};
		
	virtual ~CreateStatement(); // defined in destructors.cpp

	CreateType create_type;
	const char* file_path;
	const char* table_name;
};



} // namespace hsql


#endif