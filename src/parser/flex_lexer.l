/**
 * lexer
 *
 *
 */


/***************************
 ** Section 1: Definitions
 ***************************/
%{

#include "sqllib.h"
#include "bison_parser.h"
#include <stdio.h>

#define TOKEN(name) { return SQL_##name; }

%}
/***************************
 ** Section 2: Rules
 ***************************/

/* Define the output files */
%option header-file="flex_lexer.h"
%option outfile="flex_lexer.cpp"

/* Make reentrant */
%option reentrant
%option bison-bridge

/* performance tweeks */
%option never-interactive
%option batch

/* other flags */
%option noyywrap
%option warn
%option case-insensitive
%option prefix="hsql_"
/* %option nodefault */


%s COMMENT

/***************************
 ** Section 3: Rules
 ***************************/
%%

--				BEGIN(COMMENT);
<COMMENT>[^\n]*	/* skipping comment content until a end of line is read */;
<COMMENT>\n 	BEGIN(INITIAL);


[ \t\n]+	/* skip whitespace */;


DISTINCT	TOKEN(DISTINCT)
OFFSET		TOKEN(OFFSET)
SELECT		TOKEN(SELECT)
INSERT		TOKEN(INSERT)
IMPORT		TOKEN(IMPORT)
CREATE		TOKEN(CREATE)
DELETE		TOKEN(DELETE)
HAVING		TOKEN(HAVING)
GROUP		TOKEN(GROUP)
WHERE		TOKEN(WHERE)
LIMIT		TOKEN(LIMIT)
ORDER		TOKEN(ORDER)
INNER		TOKEN(INNER)
OUTER		TOKEN(OUTER)
CROSS		TOKEN(CROSS)
FROM		TOKEN(FROM)
INTO		TOKEN(INTO)
LIKE		TOKEN(LIKE)
JOIN		TOKEN(JOIN)
FILE		TOKEN(FILE)
DESC		TOKEN(DESC)
ASC			TOKEN(ASC)
NOT			TOKEN(NOT)
TBL			TOKEN(TBL)
AND			TOKEN(AND)
BY			TOKEN(BY)
OR			TOKEN(OR)
AS			TOKEN(AS)
ON			TOKEN(ON)


"="		TOKEN(EQUALS)
"<>" 	TOKEN(NOTEQUALS)
"<"		TOKEN(LESS)
">"		TOKEN(GREATER)
"<="	TOKEN(LESSEQ)
">="	TOKEN(GREATEREQ)


[-+*/(),.;]	{ return yytext[0]; }


[0-9]+"."[0-9]* |
"."[0-9]*	{
	yylval->fval = atof(yytext);
	return SQL_FLOAT;
}

[0-9]+	{
	yylval->ival = atol(yytext);
	return SQL_INT;
}

[A-Za-z][A-Za-z0-9_]* {
	yylval->sval = strdup(yytext);
	return SQL_NAME;
}


'[^'\n]*' {
	yylval->sval = strdup(yytext);
	return SQL_STRING;
}




%%
/***************************
 ** Section 3: User code
 ***************************/

int yyerror(const char *msg) {
    fprintf(stderr, "[Error] SQL Lexer: %s\n",msg); return 0;
}