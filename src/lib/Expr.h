#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__

#include <stdlib.h>



typedef enum {
	kExprLiteralFloat,
	kExprLiteralString,
	kExprLiteralInt,
	kExprStar,
	kExprColumnRef,
	kExprFunctionRef,
	kExprOperator
} ExprType;


/**
 * Trivial types are those that can be descriped by a sigle character e.g:
 * + - * / < > = %
 * Non-trivial are:
 * <> <= >= LIKE ISNULL NOT
 */
typedef enum {
	SIMPLE_OP,
	// Binary
	NOT_EQUALS,
	LESS_EQ,
	GREATER_EQ,
	LIKE,
	AND,
	OR,
	// Unary
	NOT,
	UMINUS,
	ISNULL
} OperatorType;



typedef struct Expr Expr;
struct Expr {
	Expr(ExprType type) : type(type) {};
	
	ExprType type;

	Expr* expr;
	Expr* expr2;
	char* name;
	float float_literal;
	int64_t ival;

	OperatorType op_type;
	char op_char;

	static Expr* makeOpUnary(OperatorType op, Expr* expr);
	static Expr* makeOpBinary(Expr* expr1, char op, Expr* expr2);
	static Expr* makeOpBinary(Expr* expr1, OperatorType op, Expr* expr2);

	static Expr* makeLiteral(int64_t val);
	static Expr* makeLiteral(double val);
	static Expr* makeLiteral(char* val);
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

#endif
