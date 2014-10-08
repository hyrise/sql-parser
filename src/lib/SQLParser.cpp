#include "SQLParser.h"
#include "lex_parser.h"
#include "lex_lexer.h"
#include <stdio.h>

int yyparse(Statement **expression, yyscan_t scanner);


SQLParser::SQLParser() {
	fprintf(stderr, "SQLParser only has static methods atm! Do not initialize!\n");
}


Statement* SQLParser::parseSQL(const char *text) {
    Statement* stmt;
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (yylex_init(&scanner)) {
        // couldn't initialize
        fprintf(stderr, "Error when initializing!\n");
        return NULL;
    }

    state = yy_scan_string(text, scanner);

    if (yyparse(&stmt, scanner)) {
        // error parsing
        fprintf(stderr, "Error when parsing!\n");
        return NULL;
    }

    yy_delete_buffer(state, scanner);

    yylex_destroy(scanner);
    return stmt;
}