

BUILD_DIR = ../build/
BIN_DIR = ../bin

CC = g++
CFLAGS = -O3 -I./ -Ilib/ -Ilib/statements/ -Iparser/ -std=c++11 -pthread -Wall -g

LIB_FILES = $(shell find lib/ -name '*.cpp') $(shell find lib/ -name '*.h') parser/bison_parser.cpp parser/flex_lexer.cpp parser/SQLParser.cpp
LIB_SOURCES = $(shell find lib/ -name '*.cpp') parser/bison_parser.cpp parser/flex_lexer.cpp parser/SQLParser.cpp
TEST_SOURCES = $(shell find tests/ -name '*.cpp')


build: clean
	make -C parser/
	mkdir $(BUILD_DIR)
	cp $(LIB_FILES) $(BUILD_DIR)


analysis: $(LIB_SOURCES) sql_analysis.cpp
	$(CC) $(CFLAGS) $(LIB_SOURCES) sql_analysis.cpp -o $(BIN_DIR)/analysis


grammar_test: $(LIB_SOURCES) sql_grammar_test.cpp
	$(CC) $(CFLAGS) $(LIB_SOURCES) sql_grammar_test.cpp -o $(BIN_DIR)/grammar_test


tests: $(LIB_SOURCES) $(TEST_SOURCES) sql_tests.cpp
	$(CC) $(CFLAGS) $(LIB_SOURCES) $(TEST_SOURCES) sql_tests.cpp -o $(BIN_DIR)/tests


parser/bison_parser.cpp:
	make -C parser/


clean:
	rm -f *.o *~ $(BIN_DIR)/analysis $(TESTS_BIN) $(BIN_DIR)/grammar_test $(BIN_DIR)/tests
	rm -rf $(BUILD_DIR)
	make clean -C parser/


test: tests grammar_test
	@./$(BIN_DIR)/grammar_test -f ../test/valid_queries.sql
	@./$(BIN_DIR)/tests