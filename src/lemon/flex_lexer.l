%{
/**
 * flex_lexer.l file
 */

#include "lemon_parser.h"
#include <stdlib.h>

#define TOK(name) { return name; }
%}


%option reentrant
%option noyywrap

%%

[ \t\n]+	; /* skip whitespace */

SELECT		TOK(SELECT)
FROM		TOK(FROM)
GROUP		TOK(GROUP)
BY			TOK(BY)
WHERE		TOK(WHERE)
NOT			TOK(NOT)
AND			TOK(AND)
OR			TOK(OR)

"="		|
"<>" 	|
"<"		|
">"		|
"<="	|
">="		TOK(COMPARISON)


[-+*/(),.;]	TOK(yytext[0])

[0-9]+	|
[0-9]+"."[0-9]* |
"."[0-9]*	TOK(INTNUM)

[A-Za-z][A-Za-z0-9_]*	TOK(NAME)


'[^'\n]*'	TOK(STRING)

%%

int yyerror(const char *msg) {
    fprintf(stderr,"Error:%s\n",msg); return 0;
}