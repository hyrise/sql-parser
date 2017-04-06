#ifndef __SQLPARSER__SQLPARSER_H__
#define __SQLPARSER__SQLPARSER_H__

#include "SQLParserResult.h"
#include "sql/statements.h"

namespace hsql {

  // Static methods used to parse SQL strings.
  class SQLParser {
   public:
    // Parses a given constant character SQL string.
    static SQLParserResult* parseSQLString(const char* sql);

    // Parses an SQL std::string.
    static SQLParserResult* parseSQLString(const std::string& sql);

   private:
    // Static class can't be instatiated.
    SQLParser();
  };


} // namespace hsql


#endif