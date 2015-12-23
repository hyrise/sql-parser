
all: bison_parser.cpp flex_lexer.cpp

bison_parser.cpp: bison_parser.y
	bison bison_parser.y -v

flex_lexer.cpp: flex_lexer.l
	flex flex_lexer.l

clean:
	rm -f bison_parser.cpp flex_lexer.cpp bison_parser.h flex_lexer.h *.output