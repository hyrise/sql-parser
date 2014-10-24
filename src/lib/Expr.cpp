
#include "Expr.h"
#include <stdio.h>
#include <string.h>

char* substr(const char* source, int from, int to) {
	int len = to-from;
	char* copy = new char[len+1];
	strncpy(copy, source+from, len);
	copy[len] = '\0';
	return copy;
}

Expr* makeColumnRef(char* name) {
	ALLOC_EXPR(e, eExprColumnRef);
	e->name = name;
	return e;
}

Expr* makeFunctionRef(char* func_name, Expr* expr) {
	ALLOC_EXPR(e, eExprFunctionRef);
	e->name = func_name;
	e->expr = expr;
	return e;
}

Expr* makeFloatLiteral(float value) {
	ALLOC_EXPR(e, eExprLiteralFloat);
	e->float_literal = value;
	return e;
}

Expr* makeStringLiteral(char* string) {
	ALLOC_EXPR(e, eExprLiteralString);
	e->name = substr(string, 1, strlen(string)-1);
	delete string;
	return e;
}


Expr* Expr::makeOpUnary(OperatorType op, Expr* expr) {
	ALLOC_EXPR(e, eExprOperator);
	e->op_type = op;
	e->expr = expr;
	return e;
}

Expr* Expr::makeOpBinary(Expr* expr1, OperatorType op, Expr* expr2) {
	ALLOC_EXPR(e, eExprOperator);
	e->op_type = op;
	e->op_char = 0;
	e->expr = expr1;
	e->expr2 = expr2;
	return e;
}

Expr* Expr::makeOpBinary(Expr* expr1, char op, Expr* expr2) {
	ALLOC_EXPR(e, eExprOperator);
	e->op_type = TRIVIAL_OP;
	e->op_char = op;
	e->expr = expr1;
	e->expr2 = expr2;
	return e;
}
