
all: bison_parser.c flex_lexer.c

bison_parser.c: bison_parser.y
	bison bison_parser.y

flex_lexer.c: flex_lexer.l
	flex flex_lexer.l

clean:
	rm -f bison_parser.c flex_lexer.c bison_parser.h flex_lexer.h