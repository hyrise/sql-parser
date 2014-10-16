#ifndef __SQLPARSER_H_
#define __SQLPARSER_H_

#include "Statement.h"

class SQLParser {
public:
	static Statement* parseSQL(const char* sql);

private:
	SQLParser();
};



#endif