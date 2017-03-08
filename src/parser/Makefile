
all: bison_parser.cpp flex_lexer.cpp

bison_parser.cpp: bison_parser.y
	@bison --version | head -n 1
	bison bison_parser.y -v

flex_lexer.cpp: flex_lexer.l
	@flex --version
	flex flex_lexer.l

clean:
	rm -f bison_parser.cpp flex_lexer.cpp bison_parser.h flex_lexer.h *.output

# Tests if the parser builds correctly and doesn't contain conflicts.
test:
	! bison bison_parser.y -v 2>&1 | grep "conflict" >&2
