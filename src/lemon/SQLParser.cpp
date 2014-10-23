#include "SQLParser.h"
#include "lemon_parser.h"
#include "flex_lexer.h"
#include <stdio.h>



void *ParseAlloc(void *(*mallocProc)(size_t));
void ParseFree(void *p, void (*freeProc)(void*));
void Parse(void *yyp, int yymajor, const char* text, Statement**);


SQLParser::SQLParser() {
	fprintf(stderr, "SQLParser only has static methods atm! Do not initialize!\n");
}


Statement* SQLParser::parseSQLString(const char *text) {
    yyscan_t scanner;
    yylex_init(&scanner);
    
    // Scan the provided string
    YY_BUFFER_STATE state = yy_scan_string(text, scanner);

    void* lemonParser = ParseAlloc(malloc);
    int tokenCode;
    Statement* result;
    do {
        tokenCode = yylex(scanner);
        Parse(lemonParser, tokenCode, yyget_text(scanner), &result);
        // printf("Token %d\n", tokenCode);
    } while (tokenCode > 0);

    yy_delete_buffer(state, scanner);
    yylex_destroy(scanner);
    return result;
}