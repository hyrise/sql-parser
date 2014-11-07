
#include <stdio.h>
#include <string>
#include "lib/sqlhelper.h"
#include "SQLParser.h"

using namespace hsql;

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "No SQL-Statement given!\n");
        return -1;
    }

    for (int n = 1; n < argc; ++n) {
        char* sql = argv[n];

        printf("\nEvaluating Query \"%s\"\n", sql);
        StatementList* stmt_list = SQLParser::parseSQLString(sql);

        if (!stmt_list->isValid) {
        	fprintf(stderr, "Parsing of \"%s\" failed! Reason: %s\n", sql, stmt_list->parser_msg);
        	continue;
        }

        int i = 0;
        for (Statement* stmt : stmt_list->vector()) {
            printf("Statement %d:\n", i++);
            switch (stmt->type) {
                case kStmtSelect:
                    printSelectStatementInfo((SelectStatement*) stmt, 1);
                    break;
                case kStmtImport:
                    printImportStatementInfo((ImportStatement*) stmt, 1);
                    break;
                default:
                    fprintf(stderr, "\tStatement Type %u. No detailed print method available.\n", stmt->type);
                    break;

            }
        }
    }

	return 0;
}