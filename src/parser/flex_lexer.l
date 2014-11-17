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
%option nounput
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


DATABASE	TOKEN(DATABASE)
DISTINCT	TOKEN(DISTINCT)
BETWEEN		TOKEN(BETWEEN)
CONTROL		TOKEN(CONTROL)
NATURAL		TOKEN(NATURAL)
COLUMN		TOKEN(COLUMN)
CREATE		TOKEN(CREATE)
DELETE		TOKEN(DELETE)
EXISTS		TOKEN(EXISTS)
HAVING		TOKEN(HAVING)
IMPORT		TOKEN(IMPORT)
INSERT		TOKEN(INSERT)
ISNULL		TOKEN(ISNULL)
OFFSET		TOKEN(OFFSET)
RENAME		TOKEN(RENAME)
SELECT		TOKEN(SELECT)
UNLOAD		TOKEN(UNLOAD)
UPDATE		TOKEN(UPDATE)
ALTER		TOKEN(ALTER)
CROSS		TOKEN(CROSS)
GROUP		TOKEN(GROUP)
INDEX		TOKEN(INDEX)
INNER		TOKEN(INNER)
LIMIT		TOKEN(LIMIT)
ORDER		TOKEN(ORDER)
OUTER		TOKEN(OUTER)
RADIX		TOKEN(RADIX)
RIGHT		TOKEN(RIGHT)
TABLE		TOKEN(TABLE)
UNION		TOKEN(UNION)
USING		TOKEN(USING)
WHERE		TOKEN(WHERE)
DESC		TOKEN(DESC)
DROP		TOKEN(DROP)
FILE		TOKEN(FILE)
FROM		TOKEN(FROM)
HASH		TOKEN(HASH)
INTO		TOKEN(INTO)
JOIN		TOKEN(JOIN)
LEFT		TOKEN(LEFT)
LIKE		TOKEN(LIKE)
LOAD		TOKEN(LOAD)
NULL		TOKEN(NULL)
SCAN		TOKEN(SCAN)
ALL			TOKEN(ALL)
AND			TOKEN(AND)
ASC			TOKEN(ASC)
CSV			TOKEN(CSV)
NOT			TOKEN(NOT)
TBL			TOKEN(TBL)
TOP			TOKEN(TOP)
AS			TOKEN(AS)
BY			TOKEN(BY)
IF			TOKEN(IF)
IN			TOKEN(IN)
IS			TOKEN(IS)
ON			TOKEN(ON)
OR			TOKEN(OR)


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
	return SQL_IDENTIFIER;
}

[A-Za-z][A-Za-z0-9_]* {
	yylval->sval = strdup(yytext);
	return SQL_IDENTIFIER;
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