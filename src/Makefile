# Makefile

LIB_FILES = lex_lexer.c lex_parser.c lib/Statement.cpp lib/SQLParser.cpp


TESTS_MAIN = sql_tests.cpp
TESTS_BIN = bin/tests

EXECUTION_MAIN = sql_execution.cpp
EXECUTION_BIN = bin/sql_execution

CC = g++
CFLAGS = -g -O3 -Ilib/ -I./


tests: $(LIB_FILES) $(TESTS_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(TESTS_MAIN) -o $(TESTS_BIN)


execution: $(LIB_FILES) $(EXECUTION_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(EXECUTION_MAIN) -o $(EXECUTION_BIN)


lex_lexer.c: lex_lexer.l 
	flex lex_lexer.l


lex_parser.c: lex_parser.y lex_lexer.c
	bison lex_parser.y


clean:
	rm -f *.o *~ lex_lexer.c lex_lexer.h lex_parser.c lex_parser.h $(EXECUTION_BIN) $(TESTS_BIN)