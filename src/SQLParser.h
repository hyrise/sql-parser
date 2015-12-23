#ifndef __SQLPARSER_H_
#define __SQLPARSER_H_

#include "sqltypes.h"

namespace hsql {

/*!
 * \mainpage SQLParser (C++)
 */

/*!
 * @brief Main class for parsing SQL strings
 */
class SQLParser {
public:
	static SQLStatementList* parseSQLString(const char* sql);
	static SQLStatementList* parseSQLString(const std::string& sql);

private:
	SQLParser();
};

	
} // namespace hsql


#endif