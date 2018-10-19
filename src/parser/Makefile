# bison's version is too old on OSX, allow user to pass in custom path
BISON?=bison

BISON_VERSION=$(shell $(BISON) --version | head -n 1 | grep -o '[0-9.]\+')
BISON_VERSION_SUPPORTED=$(shell echo 3.1 \<= $(BISON_VERSION) | bc)
ifneq ($(BISON_VERSION_SUPPORTED), 1)
$(error Bison version $(BISON_VERSION) not supported. If you are using OS X, `bison` uses the system default instead of the brew version. Run BISON=/usr/local/opt/bison/bin/bison make)
endif

all: bison_parser.cpp flex_lexer.cpp

bison_parser.cpp: bison_parser.y
	$(BISON) bison_parser.y --output=bison_parser.cpp --defines=bison_parser.h --verbose

flex_lexer.cpp: flex_lexer.l
	@flex --version
	flex flex_lexer.l

clean:
	rm -f bison_parser.cpp flex_lexer.cpp bison_parser.h flex_lexer.h *.output

# Tests if the parser builds correctly and doesn't contain conflicts.
test:
	! $(BISON) bison_parser.y -v --output=conflict_test.cpp 2>&1 | grep "conflict" >&2
