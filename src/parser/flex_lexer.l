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
DATABASE	TOKEN(DATABASE)
NATURAL		TOKEN(NATURAL)
CONTROL		TOKEN(CONTROL)
BETWEEN		TOKEN(BETWEEN)
SELECT		TOKEN(SELECT)
HAVING		TOKEN(HAVING)
OFFSET		TOKEN(OFFSET)
CREATE		TOKEN(CREATE)
IMPORT		TOKEN(IMPORT)
RENAME		TOKEN(RENAME)
DELETE		TOKEN(DELETE)
INSERT		TOKEN(INSERT)
UPDATE		TOKEN(UPDATE)
UNLOAD		TOKEN(UNLOAD)
COLUMN		TOKEN(COLUMN)
ISNULL		TOKEN(ISNULL)
WHERE		TOKEN(WHERE)
GROUP		TOKEN(GROUP)
ORDER		TOKEN(ORDER)
LIMIT		TOKEN(LIMIT)
INNER		TOKEN(INNER)
OUTER		TOKEN(OUTER)
RIGHT		TOKEN(RIGHT)
CROSS		TOKEN(CROSS)
USING		TOKEN(USING)
TABLE		TOKEN(TABLE)
INDEX		TOKEN(INDEX)
ALTER		TOKEN(ALTER)
FROM		TOKEN(FROM)
DESC		TOKEN(DESC)
JOIN		TOKEN(JOIN)
LEFT		TOKEN(LEFT)
FILE		TOKEN(FILE)
DROP		TOKEN(DROP)
LOAD		TOKEN(LOAD)
INTO		TOKEN(INTO)
NULL		TOKEN(NULL)
LIKE		TOKEN(LIKE)
TOP			TOKEN(TOP)
ASC			TOKEN(ASC)
CSV			TOKEN(CSV)
TBL			TOKEN(TBL)
NOT			TOKEN(NOT)
AND			TOKEN(AND)
BY			TOKEN(BY)
ON			TOKEN(ON)
AS			TOKEN(AS)
OR			TOKEN(OR)
IN			TOKEN(IN)
IS			TOKEN(IS)


"<>" 		TOKEN(NOTEQUALS)
"<="		TOKEN(LESSEQ)
">="		TOKEN(GREATEREQ)


[-+*/(),.;<>=^%]	{ return yytext[0]; }


[0-9]+"."[0-9]* |
"."[0-9]*	{
	yylval->fval = atof(yytext);
	return SQL_FLOAT;
}

[0-9]+	{
	yylval->ival = atol(yytext);
	return SQL_INT;
}

\"[^\"\n]+\" {
	// Crop the leading and trailing quote char
	yylval->sval = hsql::substr(yytext, 1, strlen(yytext)-1);
	return SQL_NAME;
}

[A-Za-z][A-Za-z0-9_]* {
	yylval->sval = strdup(yytext);
	return SQL_NAME;
}


'[^'\n]*' {
	// Crop the leading and trailing quote char
	yylval->sval = hsql::substr(yytext, 1, strlen(yytext)-1);
	return SQL_STRING;
}




%%
/***************************
 ** Section 3: User code
 ***************************/

int yyerror(const char *msg) {
    fprintf(stderr, "[Error] SQL Lexer: %s\n",msg); return 0;
}