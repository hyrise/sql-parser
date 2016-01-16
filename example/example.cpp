
#include <stdlib.h>
#include <string>

// include the sql parser
#include "SQLParser.h"

// contains printing utilities
#include "sqlhelper.h"

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "Usage: ./example \"SELECT * FROM test;\"\n");
        return -1;
    }
    std::string query = argv[1];

    // parse a given query
    hsql::SQLStatementList* result = hsql::SQLParser::parseSQLString(query);

    // check whether the parsing was successful
    if (result->isValid) {
        printf("Parsed successfully!\n");
        printf("Number of statements: %lu\n", result->numStatements());

        for (hsql::SQLStatement* stmt : result->statements) {
            // process the statements...
            hsql::printStatementInfo(stmt);
        }
    } else {
        printf("Invalid SQL!\n");
    }

    return 0;
}