#
# make source (build the source code into build/)
#
# make library
#
#
#
#

# directories
BIN        = bin
SRC        = src
SRCSQL     = src/lib/sql
SRCPARSER  = src/parser

# files
PARSERFILES = $(SRCPARSER)/bison_parser.cpp $(SRCPARSER)/flex_lexer.cpp
LIBCPP      = $(shell find $(SRC)/ -name '*.cpp' -not -path "$(SRCPARSER)/*") $(SRCPARSER)/bison_parser.cpp $(SRCPARSER)/flex_lexer.cpp
LIBOBJ      = $(LIBCPP:%.cpp=%.o)
LIBHEADERS  = $(shell find $(SRCSQL)/ -name '*.h') $(SRC)/SQLParser.h
TESTCPP     = $(shell find test/lib/ -name '*.cpp')

# compile & link flages
CC         = g++
CFLAGS     = -std=c++11 -Wall -fPIC
LIBFLAGS   = -shared
TARGET     = libsqlparser.so

CTESTFLAGS = -Wall -Isrc/ -Itest/ -L./ -std=c++11

all: library

library: $(TARGET)

$(TARGET): $(LIBOBJ)
	$(CC) $(LIBFLAGS) -o $(TARGET) $(LIBOBJ)


%.o: %.cpp $(PARSERFILES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(SRCPARSER)/bison_parser.cpp: parser
$(SRCPARSER)/flex_lexer.cpp: parser

parser:
	make -C $(SRCPARSER)/

clean:
	rm -f $(TARGET)
	rm -rf $(BIN)
	find $(SRC) -type f -name '*.o' -delete

cleanparser:
	make -C $(SRCPARSER)/ clean


############
### Test ###
############

test: $(BIN)/sql_tests $(BIN)/sql_grammar_test
	LD_LIBRARY_PATH=./ $(BIN)/sql_grammar_test -f "test/lib/valid_queries.sql"
	LD_LIBRARY_PATH=./ $(BIN)/sql_tests

$(BIN)/sql_tests: library
	@mkdir -p $(BIN)/
	$(CC) $(CTESTFLAGS) $(TESTCPP) test/sql_tests.cpp -o $(BIN)/sql_tests -lsqlparser

$(BIN)/sql_grammar_test: library
	@mkdir -p $(BIN)/
	$(CC) $(CTESTFLAGS) test/sql_grammar_test.cpp -o $(BIN)/sql_grammar_test -lsqlparser

FORCE:
