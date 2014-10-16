# Makefile

LIB_FILES = flex_lexer.c bison_parser.c lib/Statement.cpp lib/Expr.cpp lib/SQLParser.cpp


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


flex_lexer.c: flex_lexer.l 
	flex flex_lexer.l


bison_parser.c: bison_parser.y flex_lexer.c
	bison bison_parser.y


clean:
	rm -f *.o *~ flex_lexer.c flex_lexer.h bison_parser.c bison_parser.h $(EXECUTION_BIN) $(TESTS_BIN)