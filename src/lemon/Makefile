
all: lemon_parser.c flex_lexer.c

lemon_parser.c: lemon_parser.y
	lemon lemon_parser.y

flex_lexer.c: flex_lexer.l
	flex --outfile=flex_lexer.c --header-file=flex_lexer.h flex_lexer.l

clean:
	rm -f lemon_parser.c flex_lexer.c lemon_parser.h flex_lexer.h lemon_parser.out