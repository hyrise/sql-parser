%{
    #include "lemon_parser.h"
    #include <stdlib.h>
%}


%option reentrant
%option noyywrap


%%
[0-9]+|[0-9]+.[0-9]+      return NUMBER;
[+]         return PLUS;
[\n]        return NL;
[ \t]       ;       /* skip whitespace */
.           {printf("Unknown character '%c'\n", yytext[0]); return 0;}
%%
