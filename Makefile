# Directories.
BIN        = bin
SRC        = src
SRCPARSER  = src/parser

# Files.
PARSERCPP   = $(SRCPARSER)/bison_parser.cpp $(SRCPARSER)/flex_lexer.cpp
LIBCPP      = $(shell find $(SRC) -name '*.cpp' -not -path "$(SRCPARSER)/*") $(PARSERCPP)
LIBOBJ      = $(LIBCPP:%.cpp=%.o)
TESTCPP     = $(shell find test/ -name '*.cpp')

ALLLIB      = $(shell find $(SRC) -name '*.cpp' -not -path "$(SRCPARSER)/*") $(shell find $(SRC) -name '*.h' -not -path "$(SRCPARSER)/*")
ALLTEST     = $(shell find test/ -name '*.cpp') $(shell find test/ -name '*.h')
EXAMPLESRC  = $(shell find example/ -name '*.cpp') $(shell find example/ -name '*.h')

# Compiler & linker flags.
CFLAGS     = -std=c++11 -Wall -fPIC
LIBFLAGS   = -shared
TARGET     = libsqlparser.so
INSTALL    = /usr/local

CTESTFLAGS = -Wall -Isrc/ -Itest/ -L./ -std=c++11 -lstdc++ -O3

# Set compile mode to -g or -O3.
mode ?= release
ifeq ($(mode), debug)
	CFLAGS += -g
else
	CFLAGS += -O3
endif

GMAKE = make mode=$(mode)

all: library

library: $(TARGET)

$(TARGET): $(LIBOBJ)
	echo $(mode)
	$(CXX) $(LIBFLAGS) -o $(TARGET) $(LIBOBJ)

$(SRCPARSER)/flex_lexer.o: $(SRCPARSER)/flex_lexer.cpp $(SRCPARSER)/bison_parser.cpp
	$(CXX) $(CFLAGS) -c -o $@ $< -Wno-sign-compare -Wno-unneeded-internal-declaration -Wno-deprecated-register

%.o: %.cpp $(PARSERCPP)
	$(CXX) $(CFLAGS) -c -o $@ $<

$(SRCPARSER)/bison_parser.cpp: $(SRCPARSER)/bison_parser.y
	$(GMAKE) -C $(SRCPARSER)/ bison_parser.cpp

$(SRCPARSER)/flex_lexer.cpp: $(SRCPARSER)/flex_lexer.l
	$(GMAKE) -C $(SRCPARSER)/ flex_lexer.cpp

clean:
	rm -f $(TARGET)
	rm -rf $(BIN)
	find $(SRC) -type f -name '*.o' -delete
	$(GMAKE) -C benchmark/ clean

cleanparser:
	$(GMAKE) -C $(SRCPARSER)/ clean

cleanall: clean cleanparser

install:
	cp $(TARGET) $(INSTALL)/lib/$(TARGET)
	rm -rf $(INSTALL)/include/hsql
	cp -r src $(INSTALL)/include/hsql
	find $(INSTALL)/include/hsql -not -name '*.h' -type f | xargs rm

#################
### Benchmark ###
#################

benchmark: library
	$(GMAKE) -C benchmark/ clean run

build_benchmark: library
	$(GMAKE) -C benchmark/ parser_benchmark

############
### Test ###
############

test: $(BIN)/sql_tests
	bash test/test.sh

test_example:
	$(GMAKE) -C example/
	LD_LIBRARY_PATH=./ \
	  ./example/example "SELECT * FROM students WHERE name = 'Max Mustermann';"

test_format:
	@! astyle --options=astyle.options $(ALLLIB) | grep -q "Formatted"
	@! astyle --options=astyle.options $(ALLTEST) | grep -q "Formatted"

$(BIN)/sql_tests: library
	@mkdir -p $(BIN)/
	$(CXX) $(CTESTFLAGS) $(TESTCPP) -o $(BIN)/sql_tests -lsqlparser


############
### Misc ###
############

format:
	astyle --options=astyle.options $(ALLLIB)
	astyle --options=astyle.options $(ALLTEST)
	astyle --options=astyle.options $(EXAMPLESRC)

