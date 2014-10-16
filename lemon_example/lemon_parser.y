%include {
	#include <assert.h>
	#include <cstdlib>
}
%syntax_error { printf("Lemon syntax error\n"); }

%token_type {const char*}
%type expr {float}

%left PLUS MINUS .

%extra_argument { float* result }

start   ::= prog.

prog    ::= prog print NL .
prog    ::= prog print .
prog    ::= .

print   ::= expr(a) .         { *result = a; }

expr(a) ::= NUMBER(b) .                { a = atof(b); }
expr(a) ::= expr(b) PLUS expr(c) .      { a = b + c; }