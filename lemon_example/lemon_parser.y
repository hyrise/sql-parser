%include {
	#include <assert.h>
	#include <cstdlib>
	#include "token_def.h"
}
%syntax_error { printf("Lemon syntax error\n"); }

%token_type {LexerToken*}
%extra_argument { float* result }

%type expr {float}
%left PLUS MINUS .

start   ::= prog.

prog    ::= prog print NL .
prog    ::= prog print .
prog    ::= .

print   ::= expr(a) .         { *result = a; }

expr(a) ::= NUMBER(b) .                { a = b->fval; }
expr(a) ::= expr(b) PLUS expr(c) .      { a = b + c; }