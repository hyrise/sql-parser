/*
 * Statement.cpp
 * Implementation of functions used to build the syntax tree.
 */

#include "Statement.h"
#include <stdlib.h>

Statement::Statement(EStatementType type) : type(type) {

};

SelectStatement::SelectStatement() : Statement(eSelect) {

};