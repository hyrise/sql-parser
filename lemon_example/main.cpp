#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include "token_def.h"
#include "lemon_parser.h"
#include "flex_scanner.h"

// Based on https://github.com/theory/flex-lemon-example
// and http://stackoverflow.com/questions/24833465/bison-yacc-vs-lemon-vs-standard-input
typedef float ResultType;

void *ParseAlloc(void *(*mallocProc)(size_t));
void ParseFree(void *p, void (*freeProc)(void*));
void Parse(void *yyp, int yymajor, LexerToken* token, ResultType*);

// int yylex(void);
// int yylval;


float parseString(const char* string) {
	yyscan_t scanner;
	yylex_init(&scanner);
	
	// Scan the provided string
	YY_BUFFER_STATE state = yy_scan_string(string, scanner);

	void* lemonParser = ParseAlloc(malloc);
	int tokenCode;
	ResultType result;
	do {
		LexerToken token;
		tokenCode = yylex(&token, scanner);
		Parse(lemonParser, tokenCode, &token, &result);
		// printf("Token %d\n", tokenCode);
	} while (tokenCode > 0);

	return result;
}

int parse_count = 0;
void multithreadTest(int numOfParses, int id) {
	for (int n = 0; n < numOfParses; ++n) {
		int a = rand() % 1000 + 1;
		int b = rand() % 1000 + 1;
		int c = a + b;
		char string[32];
		sprintf(string, "%d + %d", a, b);

		parse_count++;
		int result = parseString(string);
		if (parse_count != 1) printf("+");
		parse_count--;

		if (result != c) printf("Error[%d]! %s != %d\n", id, string, result);
	}
}

int main(void) {
	const int numThreads = 20;
	int numRuns = 300;

	std::thread threads[numThreads];
	for (int n = 0; n < numThreads; ++n) {
		threads[n] = std::thread(multithreadTest, numRuns, n);
	}

	for (int n = 0; n < numThreads; ++n) {
		threads[n].join();
	}
	return 0;
}