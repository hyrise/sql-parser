#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__

#include <stdlib.h>


typedef enum {
	eExprLiteralFloat,
	eExprLiteralString,
	eExprStar,
	eExprColumnRef,
	eExprFunctionRef,
	eExprPredicate
} EExprType;

typedef struct Expr Expr;

struct Expr {
	Expr(EExprType type) : type(type) {};
	
	EExprType type;

	Expr* expr;
	Expr* expr2;
	char* name;
	uint pred_type;
	float float_literal;
};

// Zero initializes an Expr object and assigns it to a space in the heap
// http://www.ex-parrot.com/~chris/random/initialise.html
#define ALLOC_EXPR(var, type) 		\
	Expr* var;						\
	do {							\
		Expr zero = {type};			\
		var = (Expr*)malloc(sizeof *var);	\
		*var = zero;				\
	} while(0)


Expr* makeColumnRef(char* name);
Expr* makeFunctionRef(char* func_name, Expr* expr);
Expr* makePredicate(Expr* expr1, uint op, Expr* expr2);
Expr* makeFloatLiteral(float value);
Expr* makeStringLiteral(char* string);


#endif
