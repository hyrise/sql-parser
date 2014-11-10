
# Makefile

SOURCES = $(shell find lib/ -name '*.cpp') parser/bison_parser.cpp parser/flex_lexer.cpp parser/SQLParser.cpp

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


analysis: $(SOURCES) sql_analysis.cpp
	$(CC) $(CFLAGS) $(SOURCES) sql_analysis.cpp -o bin/analysis


grammar_test: $(SOURCES) sql_grammar_test.cpp
	$(CC) $(CFLAGS) $(SOURCES) sql_grammar_test.cpp -o bin/grammar_test


tests: $(SOURCES) $(TESTS_MAIN)
	$(CC) $(CFLAGS) $(SOURCES) $(TESTS_MAIN) -o $(TESTS_BIN)


parser/bison_parser.cpp:
	make -C parser/


clean:
	rm -f *.o *~ bin/analysis $(TESTS_BIN) bin/grammar_test
	rm -rf build/
	make clean -C parser/
