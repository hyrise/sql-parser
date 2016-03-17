# directories
BIN        = bin
SRC        = src
SRCPARSER  = src/parser

# files
PARSERFILES = $(SRCPARSER)/bison_parser.cpp $(SRCPARSER)/flex_lexer.cpp
LIBCPP      = $(shell find $(SRC) -name '*.cpp' -not -path "$(SRCPARSER)/*") $(SRCPARSER)/bison_parser.cpp $(SRCPARSER)/flex_lexer.cpp
LIBOBJ      = $(LIBCPP:%.cpp=%.o)
TESTCPP     = $(shell find test/lib/ -name '*.cpp')

ALLLIB      = $(shell find $(SRC) -name '*.cpp' -not -path "$(SRCPARSER)/*") $(shell find $(SRC) -name '*.h' -not -path "$(SRCPARSER)/*")
ALLTEST     = $(shell find test/lib/ -name '*.cpp') $(shell find test/lib/ -name '*.h')

# compile & link flages
CFLAGS     = -std=c++11 -Wall -fPIC
LIBFLAGS   = -shared
TARGET     = libsqlparser.so
INSTALL    = /usr/local

CTESTFLAGS = -Wall -Isrc/ -Itest/ -L./ -std=c++11 -lstdc++

ifeq ($(OS),Windows_NT)
    TARGET = libsqlparser.dll
endif

all: library

library: $(TARGET)

$(TARGET): $(LIBOBJ)
	$(CXX) $(LIBFLAGS) -o $(TARGET) $(LIBOBJ)


%.o: %.cpp $(PARSERFILES)
	$(CXX) $(CFLAGS) -c -o $@ $<

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

cleanall: clean cleanparser

install:
	cp $(TARGET) $(INSTALL)/lib/$(TARGET)

format:
	astyle --options=astyle.options $(ALLLIB)
	astyle --options=astyle.options $(ALLTEST)

############
### Test ###
############

test: $(BIN)/sql_tests $(BIN)/sql_grammar_test
	bash test/test.sh

# test whete
test_install:
	make -C example/
	./example/example "SELECT * FROM students WHERE name = 'Max Mustermann';"

$(BIN)/sql_tests: library
	@mkdir -p $(BIN)/
	$(CXX) $(CTESTFLAGS) $(TESTCPP) test/sql_tests.cpp -o $(BIN)/sql_tests -lsqlparser

$(BIN)/sql_grammar_test: library
	@mkdir -p $(BIN)/
	$(CXX) $(CTESTFLAGS) test/sql_grammar_test.cpp -o $(BIN)/sql_grammar_test -lsqlparser
