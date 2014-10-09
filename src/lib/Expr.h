#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__

#include <cstdlib>


class Expr {
public:
	Expr(char* name) : name(name), func_name(NULL) {};
	Expr(char* name, char* func_name) : name(name), func_name(func_name) {};

	char* name;
	char* func_name;
};


#endif