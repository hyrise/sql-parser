# bison's version is too old on OSX, allow user to pass in custom path
BISON?=bison

all: bison_parser.cpp flex_lexer.cpp

bison_parser.cpp: bison_parser.y
	@$(BISON) --version | head -n 1
	$(BISON) bison_parser.y --output=bison_parser.cpp --defines=bison_parser.h --verbose

flex_lexer.cpp: flex_lexer.l
	@flex --version
	flex flex_lexer.l

clean:
	rm -f bison_parser.cpp flex_lexer.cpp bison_parser.h flex_lexer.h *.output

# Tests if the parser builds correctly and doesn't contain conflicts.
test:
	! $(BISON) bison_parser.y -v --output=conflict_test.cpp 2>&1 | grep "conflict" >&2
