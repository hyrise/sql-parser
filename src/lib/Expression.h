#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__

#include <cstdlib>


class Expression {
public:
	Expression(char* name) : name(name), func_name(NULL) {};
	Expression(char* name, char* func_name) : name(name), func_name(func_name) {};

	char* name;
	char* func_name;
};


#endif