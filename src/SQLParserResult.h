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
    // Takes ownership of the statement.
    SQLParserResult(SQLStatement* stmt);

    // Deletes all statements in the resul.
    virtual ~SQLParserResult();

    // Returns true if parsing was successful.
    bool isValid() const;

    // Returns the number of statements in the result.
    size_t size() const;

    // Returns the error message, if an error occurred.
    const char* errorMsg() const;

    // Returns the line number of the occurrance of the error in the query.
    int errorLine() const;

    // Returns the column number of the occurrance of the error in the query.
    int errorColumn() const;

    // Gets the SQL statement with the given index.
    const SQLStatement* getStatement(int index) const;

    // Gets the non const SQL statement with the given index.
    SQLStatement* getMutableStatement(int index);

    // Adds a statement to the result list of statements.
    // Takes ownership of the statement.
    void addStatement(SQLStatement* stmt);

    // Set whether parsing was successful.
    void setIsValid(bool isValid);

    // Set the details of the error, if available.
    // Takes ownership of errorMsg.
    void setErrorDetails(char* errorMsg, int errorLine, int errorColumn);


   private:
    // List of statements within the result.
    std::vector<SQLStatement*> statements_;

    // Flag indicating the parsing was successful.
    bool isValid_;

    // Error message, if an error occurred.
    char* errorMsg_;

    // Line number of the occurrance of the error in the query.
    int errorLine_;

    // Column number of the occurrance of the error in the query.
    int errorColumn_;
  };

} // namespace hsql

#endif // __SQLPARSERRESULT__