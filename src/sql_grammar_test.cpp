
#include <stdio.h>
#include <string>
#include <chrono>
#include "SQLParser.h"

using namespace hsql;

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "No SQL-Statement given!\n");
        return -1;
    }

    bool expectFalse = (std::string("-f").compare(std::string(argv[1])) == 0);

    int n = (expectFalse) ? 2 : 1;
    for (; n < argc; ++n) {
        char* sql = argv[n];

        // Measuring the parsing time
        std::chrono::time_point<std::chrono::system_clock> start, end;
        start = std::chrono::system_clock::now();

        // Parsing
        StatementList* stmt_list = SQLParser::parseSQLString(sql);

        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;

        if (expectFalse == stmt_list->isValid) {
        	fprintf(stderr, "-> Failed (%.3fms)! %s: \"%s\"\n", elapsed_seconds.count()*1000, stmt_list->parser_msg, sql);
        	continue;
        } else {
            if (expectFalse) {
                printf("Success (%.3fms)! %s: \"%s\"\n", elapsed_seconds.count()*1000, stmt_list->parser_msg, sql);

            } else {
                printf("Success (%.3fms)! \"%s\"\n", elapsed_seconds.count()*1000, sql);
            }
        }
    }

	return 0;
}