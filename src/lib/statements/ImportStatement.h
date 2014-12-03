#ifndef __IMPORT_STATEMENT_H__
#define __IMPORT_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {




/**
 * @struct ImportStatement
 */
struct ImportStatement : SQLStatement {
	enum ImportType {
		kImportCSV,
		kImportTbl, // Hyrise file format
	};


	ImportStatement(ImportType type) :
		SQLStatement(kStmtImport),
		type(type),
		file_path(NULL),
		table_name(NULL) {};
		
	virtual ~ImportStatement(); // defined in destructors.cpp

	ImportType type;
	const char* file_path;
	const char* table_name;
};



} // namespace hsql


#endif