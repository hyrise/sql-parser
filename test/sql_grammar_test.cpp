
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

    bool expectFalse = false;
    bool useFile = false;
    std::string filePath = "";
    
    // Parse command line arguments
    int i = 1;
    for (; i < argc; ++i) {
        if (STREQ(argv[i], "--false")) expectFalse = true;
        else if (STREQ(argv[i], "-f")) {
            useFile = true;
            filePath = argv[++i];
        } else {
            break;
        }
    }


    // Read list of queries for this rest
    std::vector<std::string> queries;
    if (useFile) {
        queries = readlines(filePath);
    } else {
        for (; i < argc; ++i) queries.push_back(argv[i]);
    }


    // Execute queries
    int numFailed = 0;
    for (std::string sql : queries) {
        // Measuring the parsing time
        std::chrono::time_point<std::chrono::system_clock> start, end;
        start = std::chrono::system_clock::now();

        // Parsing
        SQLParserResult* stmt_list = SQLParser::parseSQLString(sql.c_str());

        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;
        double us = elapsed_seconds.count() * 1000 * 1000;

        if (expectFalse == stmt_list->isValid) {
            printf("\033[0;31m{  failed}\033[0m\n");
            printf("\t\033[0;31m%s (L%d:%d)\n\033[0m", stmt_list->errorMsg, stmt_list->errorLine, stmt_list->errorColumn);
            printf("\t%s\n", sql.c_str());
            numFailed++;
        } else {
            // TODO: indicate whether expectFalse was set
            printf("\033[0;32m{      ok} (%.1fus)\033[0m %s\n", us, sql.c_str());
        }
    }

    if (numFailed == 0) {
        printf("\033[0;32m{      ok} \033[0mAll %lu grammar tests completed successfully!\n", queries.size());
        return 0;
    } else {
        fprintf(stderr, "\033[0;31m{  failed} \033[0mSome grammar tests failed! %d out of %lu tests failed!\n", numFailed, queries.size());
        return -1;
    }
}