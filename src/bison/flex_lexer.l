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

#define TOKEN(name) { return name; }

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

SELECT	TOKEN(SELECT)
FROM	TOKEN(FROM)
GROUP	TOKEN(GROUP)
BY		TOKEN(BY)
WHERE	TOKEN(WHERE)
NOT		TOKEN(NOT)
AND		TOKEN(AND)
OR		TOKEN(OR)

"="		TOKEN(EQUALS)
"<>" 	TOKEN(NOTEQUALS)
"<"		TOKEN(LESS)
">"		TOKEN(GREATER)
"<="	TOKEN(LESSEQ)
">="	TOKEN(GREATEREQ)


[-+*/(),.;]	TOKEN(yytext[0])


[0-9]+	|
[0-9]+"."[0-9]* |
"."[0-9]*	{
	yylval->number = atof(yytext);
	return FLOAT;
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