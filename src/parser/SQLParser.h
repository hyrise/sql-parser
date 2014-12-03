#ifndef __SQLPARSER_H_
#define __SQLPARSER_H_

#include "sqllib.h"
#include "bison_parser.h"

namespace hsql {

class SQLParser {
public:
	static SQLStatementList* parseSQLString(const char* sql);

private:
	SQLParser();
};

	
} // namespace hsql


#endif