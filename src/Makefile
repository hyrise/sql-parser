

CC = g++
CFLAGS = -O3 -Ilib/ -I./ -Iparser/ -std=c++11 -pthread -Wall -g
SOURCES = $(shell find lib/ -name '*.cpp') parser/bison_parser.cpp parser/flex_lexer.cpp parser/SQLParser.cpp
BUILD_DIR = ../build/
BIN_DIR = ../bin


# release build is always using bison
build: clean
	make -C parser/
	mkdir $(BUILD_DIR)
	cp lib/* $(BUILD_DIR)
	cp parser/*.h $(BUILD_DIR)
	cp parser/*.cpp $(BUILD_DIR)


analysis: $(SOURCES) sql_analysis.cpp
	$(CC) $(CFLAGS) $(SOURCES) sql_analysis.cpp -o $(BIN_DIR)/analysis


grammar_test: $(SOURCES) sql_grammar_test.cpp
	$(CC) $(CFLAGS) $(SOURCES) sql_grammar_test.cpp -o $(BIN_DIR)/grammar_test


tests: $(SOURCES) $(TESTS_MAIN)
	$(CC) $(CFLAGS) $(SOURCES) sql_tests.cpp -o $(BIN_DIR)/tests


parser/bison_parser.cpp:
	make -C parser/


clean:
	rm -f *.o *~ $(BIN_DIR)/analysis $(TESTS_BIN) $(BIN_DIR)/grammar_test $(BIN_DIR)/tests
	rm -rf $(BUILD_DIR)
	make clean -C parser/
