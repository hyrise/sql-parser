
#include "Expr.h"
#include <stdio.h>

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

Expr* makePredicate(Expr* expr1, char* op, Expr* expr2) {
	ALLOC_EXPR(e, eExprPredicate);
	e->name = op;
	e->expr = expr1;
	e->expr2 = expr2;
	return e;
}

Expr* makeFloatLiteral(float value) {
	ALLOC_EXPR(e, eExprLiteralFloat);
	e->float_literal = value;
	return e;
}

Expr* makeStringLiteral(char* string) {
	ALLOC_EXPR(e, eExprLiteralString);
	e->name = string;
	return e;
}
