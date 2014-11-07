
# Makefile

LIB_FILES = parser/bison_parser.cpp parser/flex_lexer.cpp parser/SQLParser.cpp lib/Expr.cpp lib/sqlhelper.cpp lib/destructors.cpp

TESTS_MAIN = sql_tests.cpp
TESTS_BIN = bin/tests

CC = g++
CFLAGS = -g -O3 -Ilib/ -I./ -Iparser/ -std=c++11 -pthread


# release build is always using bison
build: clean
	make -C parser/
	mkdir build/
	cp lib/* build/
	cp parser/*.h build/
	cp parser/*.cpp build/


analysis: $(LIB_FILES) sql_analysis.cpp
	$(CC) $(CFLAGS) $(LIB_FILES) sql_analysis.cpp -o bin/analysis


grammar_test: $(LIB_FILES) sql_grammar_test.cpp
	$(CC) $(CFLAGS) $(LIB_FILES) sql_grammar_test.cpp -o bin/grammar_test


tests: $(LIB_FILES) $(TESTS_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(TESTS_MAIN) -o $(TESTS_BIN)


parser/bison_parser.cpp:
	make -C parser/


clean:
	rm -f *.o *~ bin/analysis $(TESTS_BIN) bin/grammar_test
	rm -rf build/
	make clean -C parser/
