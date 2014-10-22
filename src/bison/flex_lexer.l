/**
 * lexer
 *
 *
 */


/***************************
 ** Section 1: Definitions
 ***************************/
%{

#include "Statement.h"
#include "List.h"
#include "bison_parser.h"
#include <stdio.h>

#define TOK(name) { return name; }

%}
/***************************
 ** Section 2: Rules
 ***************************/

/* Define the output files */
%option header-file="flex_lexer.h"
%option outfile="flex_lexer.c"

/* Make reentrant */
%option reentrant bison-bridge

/* performance tweeks */
%option never-interactive batch

/* other flags */
%option noyywrap warn
%option case-insensitive
/* %option nodefault */



/***************************
 ** Section 3: Rules
 ***************************/
%%

[ \t\n]+	/* skip whitespace */;

SELECT	TOK(SELECT)
FROM	TOK(FROM)
GROUP	TOK(GROUP)
BY		TOK(BY)
WHERE	TOK(WHERE)
NOT		TOK(NOT)
AND		TOK(AND)
OR		TOK(OR)


"="		|
"<>" 	|
"<"		|
">"		|
"<="	|
">="	{
	yylval->sval = strdup(yytext);
	return COMPARISON;
}


[-+*/(),.;]	TOK(yytext[0])

[0-9]+	|
[0-9]+"."[0-9]* |
"."[0-9]*	{
	yylval->number = atof(yytext);
	return INTNUM;
}

[A-Za-z][A-Za-z0-9_]* {
	yylval->sval = strdup(yytext);
	return NAME;
}


'[^'\n]*' {
	yylval->sval = strdup(yytext);
	return STRING;
}




%%
/***************************
 ** Section 3: User code
 ***************************/

int yyerror(const char *msg) {
    fprintf(stderr, "[Error] SQL Lexer: %s\n",msg); return 0;
}