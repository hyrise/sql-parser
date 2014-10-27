
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
	ALLOC_EXPR(e, kExprColumnRef);
	e->name = name;
	return e;
}

Expr* makeFunctionRef(char* func_name, Expr* expr) {
	ALLOC_EXPR(e, kExprFunctionRef);
	e->name = func_name;
	e->expr = expr;
	return e;
}



Expr* Expr::makeOpUnary(OperatorType op, Expr* expr) {
	ALLOC_EXPR(e, kExprOperator);
	e->op_type = op;
	e->expr = expr;
	e->expr2 = NULL;
	return e;
}



Expr* Expr::makeOpBinary(Expr* expr1, OperatorType op, Expr* expr2) {
	ALLOC_EXPR(e, kExprOperator);
	e->op_type = op;
	e->op_char = 0;
	e->expr = expr1;
	e->expr2 = expr2;
	return e;
}

Expr* Expr::makeOpBinary(Expr* expr1, char op, Expr* expr2) {
	ALLOC_EXPR(e, kExprOperator);
	e->op_type = SIMPLE_OP;
	e->op_char = op;
	e->expr = expr1;
	e->expr2 = expr2;
	return e;
}



Expr* Expr::makeLiteral(int64_t val) {
	ALLOC_EXPR(e, kExprLiteralInt);
	e->ival = val;
	return e;
}

Expr* Expr::makeLiteral(double value) {
	ALLOC_EXPR(e, kExprLiteralFloat);
	e->float_literal = value;
	return e;
}

Expr* Expr::makeLiteral(char* string) {
	ALLOC_EXPR(e, kExprLiteralString);
	e->name = substr(string, 1, strlen(string)-1);
	delete string;
	return e;
}

