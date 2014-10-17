%{

#include "lemon_parser.h"
#include <stdlib.h>
#include "token_def.h"


%}


%option reentrant
%option noyywrap
%option bison-bridge


%%
[0-9]+|[0-9]+.[0-9]+      { yylval->fval = atof(yytext); return NUMBER; }
[+]         return PLUS;
[\n]        return NL;
[ \t]       ;       /* skip whitespace */
.           {printf("Unknown character '%c'\n", yytext[0]); return 0;}
%%
