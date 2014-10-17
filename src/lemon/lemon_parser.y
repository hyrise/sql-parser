%include {
	#include <assert.h>
	#include <cstdlib>
	#include "lib/Statement.h"
}
%syntax_error { printf("Lemon syntax error\n"); }

%extra_argument { Statement** result }
%token_type {const char*}
%type expr {Statement*}

%left PLUS MINUS .


start   ::= prog.

prog    ::= prog print NL .
prog    ::= prog print .
prog    ::= .

print   ::= expr(a) .         { *result = a; }

expr(a) ::= NUMBER .                { a = new Statement(eSelect); }
expr(a) ::= expr(b) PLUS expr .      { a = b; }