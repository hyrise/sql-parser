
#include <stdio.h>
#include <string>
#include <chrono>
#include <fstream>
#include <sstream>
#include <vector>
#include "SQLParser.h"

using namespace hsql;


std::vector<std::string> readlines(std::string path) {
    std::ifstream infile(path);
    std::vector<std::string> lines;
    std::string line;
    while (std::getline(infile, line)) {
        std::istringstream iss(line);

        // Skip comments
        if (line[0] != '#') {
            lines.push_back(line);
        }
    }
    return lines;
}


#define STREQ(a, b) (std::string(a).compare(std::string(b)) == 0)

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "Usage: grammar_test [--false] [-f path] query, ...\n");
        return -1;
    }

    bool expect_false = false;
    bool use_file = false;
    std::string file_path = "";
    
    // Parse command line arguments
    int i = 1;
    for (; i < argc; ++i) {
        if (STREQ(argv[i], "--false")) expect_false = true;
        else if (STREQ(argv[i], "-f")) {
            use_file = true;
            file_path = argv[++i];
        } else {
            break;
        }
    }


    // Read list of queries for this rest
    std::vector<std::string> queries;
    if (use_file) {
        queries = readlines(file_path);
    } else {
        for (; i < argc; ++i) queries.push_back(argv[i]);
    }


    // Execute queries
    int num_failed = 0;
    for (std::string sql : queries) {
        // Measuring the parsing time
        std::chrono::time_point<std::chrono::system_clock> start, end;
        start = std::chrono::system_clock::now();

        // Parsing
        StatementList* stmt_list = SQLParser::parseSQLString(sql.c_str());

        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;

        if (expect_false == stmt_list->isValid) {
        	fprintf(stderr, "Parsing failed (%.3fms)! %s: \"%s\"\n", elapsed_seconds.count()*1000, stmt_list->parser_msg, sql.c_str());
            num_failed++;
        } else {
            if (expect_false) {
                // printf("Success (%.3fms)! %s: \"%s\"\n", elapsed_seconds.count()*1000, stmt_list->parser_msg, sql.c_str());
            } else {
                // printf("Success (%.3fms)! \"%s\"\n", elapsed_seconds.count()*1000, sql.c_str());
            }
        }
    }

    if (num_failed == 0) {
        printf("All %lu grammar tests completed successfully!\n", queries.size());
    } else {
        fprintf(stderr, "Some grammar tests failed! %d out of %lu tests failed!\n", num_failed, queries.size());
    }


	return 0;
}