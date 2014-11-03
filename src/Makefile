
# Makefile

LIB_FILES = parser/bison_parser.cpp parser/flex_lexer.cpp parser/SQLParser.cpp lib/Expr.cpp lib/sqlhelper.cpp

TESTS_MAIN = sql_tests.cpp
TESTS_BIN = bin/tests

EXECUTION_MAIN = sql_execution.cpp
EXECUTION_BIN = bin/sql_execution

CC = g++
CFLAGS = -g -O3 -Ilib/ -I./ -Iparser/ -std=c++11 -pthread


# release build is always using bison
build: clean
	make -C parser/
	mkdir build/
	cp lib/* build/
	cp parser/*.h build/
	cp parser/*.cpp build/


execution: $(LIB_FILES) $(EXECUTION_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(EXECUTION_MAIN) -o $(EXECUTION_BIN)


tests: $(LIB_FILES) $(TESTS_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(TESTS_MAIN) -o $(TESTS_BIN)


parser/bison_parser.cpp:
	make -C parser/


clean:
	rm -f *.o *~ $(EXECUTION_BIN) $(TESTS_BIN)
	make clean -C parser/
