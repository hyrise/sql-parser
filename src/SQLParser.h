#ifndef __SQLPARSER_H_
#define __SQLPARSER_H_

#include "SQLParserResult.h"
#include "sql/statements.h"

namespace hsql {
    /**
     * Main class for parsing SQL strings
     */
    class SQLParser {
    public:
        static SQLParserResult* parseSQLString(const char* sql);
        static SQLParserResult* parseSQLString(const std::string& sql);

    private:
        SQLParser();
    };


} // namespace hsql


#endif