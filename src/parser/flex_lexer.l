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


INTERSECT	TOKEN(INTERSECT)
TEMPORARY	TOKEN(TEMPORARY)
DISTINCT	TOKEN(DISTINCT)
RESTRICT	TOKEN(RESTRICT)
TRUNCATE	TOKEN(TRUNCATE)
ANALYZE		TOKEN(ANALYZE)
BETWEEN		TOKEN(BETWEEN)
CASCADE		TOKEN(CASCADE)
COLUMNS		TOKEN(COLUMNS)
CONTROL		TOKEN(CONTROL)
DEFAULT		TOKEN(DEFAULT)
EXPLAIN		TOKEN(EXPLAIN)
HISTORY		TOKEN(HISTORY)
NATURAL		TOKEN(NATURAL)
PRIMARY		TOKEN(PRIMARY)
SCHEMAS		TOKEN(SCHEMAS)
SPATIAL		TOKEN(SPATIAL)
BEFORE		TOKEN(BEFORE)
COLUMN		TOKEN(COLUMN)
CREATE		TOKEN(CREATE)
DELETE		TOKEN(DELETE)
DIRECT		TOKEN(DIRECT)
ESCAPE		TOKEN(ESCAPE)
EXCEPT		TOKEN(EXCEPT)
EXISTS		TOKEN(EXISTS)
GLOBAL		TOKEN(GLOBAL)
HAVING		TOKEN(HAVING)
IMPORT		TOKEN(IMPORT)
INSERT		TOKEN(INSERT)
ISNULL		TOKEN(ISNULL)
OFFSET		TOKEN(OFFSET)
RENAME		TOKEN(RENAME)
SCHEMA		TOKEN(SCHEMA)
SELECT		TOKEN(SELECT)
SORTED		TOKEN(SORTED)
TABLES		TOKEN(TABLES)
UNIQUE		TOKEN(UNIQUE)
UNLOAD		TOKEN(UNLOAD)
UPDATE		TOKEN(UPDATE)
VALUES		TOKEN(VALUES)
AFTER		TOKEN(AFTER)
ALTER		TOKEN(ALTER)
CROSS		TOKEN(CROSS)
GROUP		TOKEN(GROUP)
INDEX		TOKEN(INDEX)
INNER		TOKEN(INNER)
LIMIT		TOKEN(LIMIT)
LOCAL		TOKEN(LOCAL)
MINUS		TOKEN(MINUS)
ORDER		TOKEN(ORDER)
OUTER		TOKEN(OUTER)
RIGHT		TOKEN(RIGHT)
TABLE		TOKEN(TABLE)
UNION		TOKEN(UNION)
USING		TOKEN(USING)
WHERE		TOKEN(WHERE)
CALL		TOKEN(CALL)
DESC		TOKEN(DESC)
DROP		TOKEN(DROP)
FILE		TOKEN(FILE)
FROM		TOKEN(FROM)
FULL		TOKEN(FULL)
HASH		TOKEN(HASH)
INTO		TOKEN(INTO)
JOIN		TOKEN(JOIN)
LEFT		TOKEN(LEFT)
LIKE		TOKEN(LIKE)
LOAD		TOKEN(LOAD)
NULL		TOKEN(NULL)
PLAN		TOKEN(PLAN)
SHOW		TOKEN(SHOW)
WITH		TOKEN(WITH)
ADD			TOKEN(ADD)
ALL			TOKEN(ALL)
AND			TOKEN(AND)
ASC			TOKEN(ASC)
CSV			TOKEN(CSV)
FOR			TOKEN(FOR)
KEY			TOKEN(KEY)
NOT			TOKEN(NOT)
SET			TOKEN(SET)
TBL			TOKEN(TBL)
TOP			TOKEN(TOP)
AS			TOKEN(AS)
BY			TOKEN(BY)
IF			TOKEN(IF)
IN			TOKEN(IN)
IS			TOKEN(IS)
ON			TOKEN(ON)
OR			TOKEN(OR)
TO			TOKEN(TO)


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