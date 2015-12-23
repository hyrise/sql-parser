
#include "SQLParser.h"

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "Usage: ./example \"SELECT * FROM test;\"\n");
        return -1;
    }


    std::string query = argv[1];

    hsql::SQLStatementList* stmt_list = hsql::SQLParser::parseSQLString(query);

    if (stmt_list->isValid) {
        printf("Parsed successfully!\n");
        printf("Number of statements: %lu\n", stmt_list->numStatements());
        // process the statements...
    } else {
        printf("Invalid SQL!\n");
    }

    return 0;
}