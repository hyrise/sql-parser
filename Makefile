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

# compile & link flages
CC         = g++
CFLAGS     = -std=c++11 -Wall -fPIC
LIBFLAGS   = -shared
TARGET     = libsqlparser.so


all: library


library: $(LIBOBJ)
	$(CC) $(LIBFLAGS) -o $(TARGET) $(LIBOBJ)


%.o: %.cpp $(PARSERFILES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(SRCPARSER)/bison_parser.cpp: parser
$(SRCPARSER)/flex_lexer.cpp: parser

parser:
	make -C $(SRCPARSER)/

clean:
	find $(SRC) -type f -name '*.o' -delete

cleanparser:
	make -C $(SRCPARSER)/ clean

FORCE:
