/*
 * sql_parser.cpp
 */

#include "sql_interface.h"
#include <stdio.h>

void evaluate_statement(Statement* stmt);


int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "No SQL-Statement given!\n");
        return -1;
    }

    Statement *stmt = NULL;

    for (int n = 1; n < argc; ++n) {
        char* sql = argv[n];

        printf("\nEvaluating Statement \"%s\"\n", sql);
        Statement* stmt = parse_sql(sql);
        evaluate_statement(stmt);
    }

    return 0;
}



void evaluate_select_statement(SelectStatement* stmt) {
    // printf("Selecting %s from %s\n", stmt->_targets->toString(), stmt->_from_clause);
}



void evaluate_statement(Statement* stmt) {
    printf("Statement at %p\n", stmt);
    if (stmt == NULL) return;

    switch (stmt->_type) {
        case eSelect:
            evaluate_select_statement((SelectStatement*) stmt);
            break;
        case eInsert:
            printf("Insert Statment found!\n");
            break;
        default:
            break;
    }
}
