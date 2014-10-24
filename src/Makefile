# Makefile

# define which parser to use. Either bison or lemon
PARSER = bison


LIB_FILES = $(PARSER)/$(PARSER)_parser.cpp $(PARSER)/flex_lexer.cpp $(PARSER)/SQLParser.cpp lib/Expr.cpp lib/sqlhelper.cpp

TESTS_MAIN = sql_tests.cpp
TESTS_BIN = bin/tests

EXECUTION_MAIN = sql_execution.cpp
EXECUTION_BIN = bin/sql_execution

CC = g++
CFLAGS = -g -O3 -Ilib/ -I./ -I$(PARSER)/ -std=c++11 -pthread


tests: $(LIB_FILES) $(TESTS_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(TESTS_MAIN) -o $(TESTS_BIN)


execution: $(LIB_FILES) $(EXECUTION_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(EXECUTION_MAIN) -o $(EXECUTION_BIN)


bison/bison_parser.cpp:
	make -C bison/

lemon/lemon_parser.cpp:
	make -C lemon/


clean:
	rm -f *.o *~ $(EXECUTION_BIN) $(TESTS_BIN)
	make clean -C bison/
	make clean -C lemon/
