# directories
BIN        = bin
SRC        = src
SRCPARSER  = src/parser

# files
PARSERCPP   = $(SRCPARSER)/bison_parser.cpp $(SRCPARSER)/flex_lexer.cpp
LIBCPP      = $(shell find $(SRC) -name '*.cpp' -not -path "$(SRCPARSER)/*") $(PARSERCPP)
LIBOBJ      = $(LIBCPP:%.cpp=%.o)
TESTCPP     = $(shell find test/ -name '*.cpp')

ALLLIB      = $(shell find $(SRC) -name '*.cpp' -not -path "$(SRCPARSER)/*") $(shell find $(SRC) -name '*.h' -not -path "$(SRCPARSER)/*")
ALLTEST     = $(shell find test/ -name '*.cpp') $(shell find test/ -name '*.h')

# compile & link flages
CFLAGS     = -std=c++11 -Wall -fPIC -g
LIBFLAGS   = -shared
TARGET     = libsqlparser.so
INSTALL    = /usr/local

CTESTFLAGS = -Wall -Isrc/ -Itest/ -L./ -std=c++11 -lstdc++ -g

all: library

library: $(TARGET)

$(TARGET): $(LIBOBJ)
	$(CXX) $(LIBFLAGS) -o $(TARGET) $(LIBOBJ)

$(SRCPARSER)/flex_lexer.o: $(SRCPARSER)/flex_lexer.cpp
	$(CXX) $(CFLAGS) -c -o $@ $< -Wno-sign-compare -Wno-unneeded-internal-declaration -Wno-deprecated-register

%.o: %.cpp $(PARSERCPP)
	$(CXX) $(CFLAGS) -c -o $@ $<

$(SRCPARSER)/bison_parser.cpp: $(SRCPARSER)/bison_parser.y
	make -C $(SRCPARSER)/ bison_parser.cpp

$(SRCPARSER)/flex_lexer.cpp: $(SRCPARSER)/flex_lexer.l
	make -C $(SRCPARSER)/ flex_lexer.cpp

parser:
	make -C $(SRCPARSER) all

clean:
	rm -f $(TARGET)
	rm -rf $(BIN)
	find $(SRC) -type f -name '*.o' -delete

cleanparser:
	make -C $(SRCPARSER)/ clean

cleanall: clean cleanparser

install:
	cp $(TARGET) $(INSTALL)/lib/$(TARGET)
	rm -rf $(INSTALL)/include/hsql
	cp -r src $(INSTALL)/include/hsql
	find $(INSTALL)/include/hsql -not -name '*.h' -type f | xargs rm

format:
	astyle --options=astyle.options $(ALLLIB)
	astyle --options=astyle.options $(ALLTEST)

run_benchmark:
	make -C benchmark/ clean run

############
### Test ###
############

test: $(BIN)/sql_tests
	bash test/test.sh

# test whete
test_install:
	make -C example/
	./example/example "SELECT * FROM students WHERE name = 'Max Mustermann';"

$(BIN)/sql_tests: library
	@mkdir -p $(BIN)/
	$(CXX) $(CTESTFLAGS) $(TESTCPP) -o $(BIN)/sql_tests -lsqlparser
