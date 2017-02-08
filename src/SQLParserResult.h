#ifndef __SQLPARSERRESULT__
#define __SQLPARSERRESULT__

#include "sql/SQLStatement.h"

namespace hsql {
  // Represents the result of the SQLParser.
  // If parsing was successful it contains a list of SQLStatement.
  class SQLParserResult {
   public:
    // Initialize with empty statement list.
    SQLParserResult();

    // Initialize with a single statement.
    SQLParserResult(SQLStatement* stmt);

    // Deletes all statements in the resul.
    virtual ~SQLParserResult();

    // Returns the number of statements in the result.
    size_t size();

    // Gets the SQL statement with the given index.
    SQLStatement* getStatement(int id);

    // Adds a statement to the result list of statements.
    void addStatement(SQLStatement* stmt);

    // List of statements within the result.
    std::vector<SQLStatement*> statements;

    // Flag indicating the parsing was successful.
    bool isValid;

    // Error message, if an error occurred.
    const char* errorMsg;

    // Line number of the occurrance of the error in the query.
    int errorLine;

    // Column number of the occurrance of the error in the query.
    int errorColumn;
  };

} // namespace hsql

#endif // __SQLPARSERRESULT__