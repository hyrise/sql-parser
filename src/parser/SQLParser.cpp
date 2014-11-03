#include "SQLParser.h"
#include "bison_parser.h"
#include "flex_lexer.h"
#include <stdio.h>

// int yyparse(Statement **expression, yyscan_t scanner);


namespace hsql {

SQLParser::SQLParser() {
	fprintf(stderr, "SQLParser only has static methods atm! Do not initialize!\n");
}


Statement* SQLParser::parseSQLString(const char *text) {
    Statement* stmt;
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (hsql_lex_init(&scanner)) {
        // couldn't initialize
        fprintf(stderr, "[Error] SQLParser: Error when initializing lexer!\n");
        return NULL;
    }

    state = hsql__scan_string(text, scanner);

    if (hsql_parse(&stmt, scanner)) {
        // Returns an error stmt object
        return stmt;
    }

    hsql__delete_buffer(state, scanner);

    hsql_lex_destroy(scanner);
    return stmt;
}
    
} // namespace hsql