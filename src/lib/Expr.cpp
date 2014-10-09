
#include "Expr.h"


Expr* makeColumnRef(char* name) {
	ALLOC_EXPR(e, eExprColumnRef);
	e->name = name;
	return e;
}


Expr* makeFunctionRef(char* func_name, Expr* expr) {
	ALLOC_EXPR(e, eExprFunctionRef);
	e->name = func_name;
	return e;
}