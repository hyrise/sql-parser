#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__

#include <stdlib.h>
#include <memory>

namespace hsql {

// Helper function
char* substr(const char* source, int from, int to);



typedef enum {
	kExprLiteralFloat,
	kExprLiteralString,
	kExprLiteralInt,
	kExprStar,
	kExprColumnRef,
	kExprFunctionRef,
	kExprOperator
} ExprType;

typedef struct Expr Expr;

struct Expr {
	/**
	 * Operator types. These are important for expressions of type kExprOperator
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
		NOT_LIKE,
		AND,
		OR,
		// Unary
		NOT,
		UMINUS,
		ISNULL
	} OperatorType;



	Expr(ExprType type) :
		type(type),
		expr(NULL),
		expr2(NULL),
		name(NULL),
		table(NULL),
		alias(NULL) {};

	// Interesting side-effect:
	// Making the destructor virtual causes segmentation faults
	~Expr();
	
	ExprType type;

	Expr* expr;
	Expr* expr2;
	char* name;
	char* table;
	char* alias;
	float fval;
	int64_t ival;

	OperatorType op_type;
	char op_char;


	/**
	 * Convenience accessor methods
	 */
	inline bool isType(ExprType e_type) { return e_type == type; }
	inline bool hasAlias() { return alias != NULL; }
	inline bool hasTable() { return table != NULL; }
	inline char* getName() {
		if (alias != NULL) return alias;
		else return name;
	}
	inline bool isSimpleOp() { return op_type == SIMPLE_OP; }
	inline bool isSimpleOp(char op) { return isSimpleOp() && op_char == op; }


	/**
	 * Static expression constructors
	 */
	static Expr* makeOpUnary(OperatorType op, Expr* expr);
	static Expr* makeOpBinary(Expr* expr1, char op, Expr* expr2);
	static Expr* makeOpBinary(Expr* expr1, OperatorType op, Expr* expr2);

	static Expr* makeLiteral(int64_t val);
	static Expr* makeLiteral(double val);
	static Expr* makeLiteral(char* val);

	static Expr* makeColumnRef(char* name);
	static Expr* makeColumnRef(char* table, char* name);
	static Expr* makeFunctionRef(char* func_name, Expr* expr);
};

// Zero initializes an Expr object and assigns it to a space in the heap
// For Hyrise we still had to put in the explicit NULL constructor
// http://www.ex-parrot.com/~chris/random/initialise.html
// Unused
#define ALLOC_EXPR(var, type) 		\
	Expr* var;						\
	do {							\
		Expr zero = {type};			\
		var = (Expr*)malloc(sizeof *var);	\
		*var = zero;				\
	} while(0);
#undef ALLOC_EXPR


} // namespace hsql

#endif
