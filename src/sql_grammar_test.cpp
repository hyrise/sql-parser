
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

    for (int n = 1; n < argc; ++n) {
        char* sql = argv[n];

        // Measuring the parsing time
        std::chrono::time_point<std::chrono::system_clock> start, end;
        start = std::chrono::system_clock::now();

        // Parsing
        Statement* stmt = SQLParser::parseSQLString(sql);

        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;

        if (stmt == NULL) {
        	fprintf(stderr, "-> Failed (%.3fms)! \"%s\"\n", elapsed_seconds.count()*1000, sql);
        	continue;
        } else {
            fprintf(stderr, "Success (%.3fms)! \"%s\"\n", elapsed_seconds.count()*1000, sql);
        }
    }

	return 0;
}