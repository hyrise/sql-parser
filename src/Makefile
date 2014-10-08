# Makefile

LIB_FILES = lex_lexer.c lex_parser.c lib/Statement.cpp lib/SQLParser.cpp


TESTS_MAIN = sql_tests.cpp
TESTS_BIN = bin/tests

PARSER_MAIN = sql_parser.cpp
PARSER_BIN = bin/parser

CC = g++
CFLAGS = -g -O3 -Ilib/ -I./


tests: $(LIB_FILES) $(TESTS_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(TESTS_MAIN) -o $(TESTS_BIN)


parser: $(LIB_FILES) $(PARSER_MAIN)
	$(CC) $(CFLAGS) $(LIB_FILES) $(PARSER_MAIN) -o $(PARSER_BIN)


lex_lexer.c: lex_lexer.l 
	flex lex_lexer.l


lex_parser.c: lex_parser.y lex_lexer.c
	bison lex_parser.y


clean:
	rm -f *.o *~ lex_lexer.c lex_lexer.h lex_parser.c lex_parser.h $(PARSER_BIN) $(TESTS_BIN)