#ifndef __SQLPARSER_H_
#define __SQLPARSER_H_

#include "Statement.h"
#include "bison_parser.h"

namespace hsql {

class SQLParser {
public:
	static Statement* parseSQLString(const char* sql);

private:
	SQLParser();
};

	
} // namespace hsql


#endif