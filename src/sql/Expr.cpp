
#include "Expr.h"
#include <stdio.h>
#include <string.h>

namespace hsql {

  Expr::Expr(ExprType type) :
    type(type),
    expr(NULL),
    expr2(NULL),
    name(NULL),
    table(NULL),
    alias(NULL) {};

  Expr::~Expr() {
    delete expr;
    delete expr2;
    free(name);
    free(table);
    free(alias);
  }

  Expr* Expr::makeOpUnary(OperatorType op, Expr* expr) {
    Expr* e = new Expr(kExprOperator);
    e->opType = op;
    e->expr = expr;
    e->expr2 = NULL;
    return e;
  }

  Expr* Expr::makeOpBinary(Expr* expr1, OperatorType op, Expr* expr2) {
    Expr* e = new Expr(kExprOperator);
    e->opType = op;
    e->opChar = 0;
    e->expr = expr1;
    e->expr2 = expr2;
    return e;
  }

  Expr* Expr::makeOpBinary(Expr* expr1, char op, Expr* expr2) {
    Expr* e = new Expr(kExprOperator);
    e->opType = SIMPLE_OP;
    e->opChar = op;
    e->expr = expr1;
    e->expr2 = expr2;
    return e;
  }

  Expr* Expr::makeBetween(Expr* expr, Expr* left, Expr* right) {
    Expr* e = new Expr(kExprOperator);
    e->expr = expr;
    e->exprList = new std::vector<Expr*>();
    e->exprList->push_back(left);
    e->exprList->push_back(right);
    return e;
  }

  Expr* Expr::makeLiteral(int64_t val) {
    Expr* e = new Expr(kExprLiteralInt);
    e->ival = val;
    return e;
  }

  Expr* Expr::makeLiteral(double value) {
    Expr* e = new Expr(kExprLiteralFloat);
    e->fval = value;
    return e;
  }

  Expr* Expr::makeLiteral(char* string) {
    Expr* e = new Expr(kExprLiteralString);
    e->name = string;
    return e;
  }


  Expr* Expr::makeColumnRef(char* name) {
    Expr* e = new Expr(kExprColumnRef);
    e->name = name;
    return e;
  }

  Expr* Expr::makeColumnRef(char* table, char* name) {
    Expr* e = new Expr(kExprColumnRef);
    e->name = name;
    e->table = table;
    return e;
  }

  Expr* Expr::makeFunctionRef(char* func_name, std::vector<Expr*>* exprList, bool distinct) {
    Expr* e = new Expr(kExprFunctionRef);
    e->name = func_name;
    e->exprList = exprList;
    e->distinct = distinct;
    return e;
  }

  Expr* Expr::makePlaceholder(int id) {
    Expr* e = new Expr(kExprPlaceholder);
    e->ival = id;
    return e;
  }

  Expr* Expr::makeSelect(SelectStatement* select) {
    Expr* e = new Expr(kExprSelect);
    e->select = select;
    return e;
  }

  bool Expr::isType(ExprType e_type) {
    return e_type == type;
  }

  bool Expr::isLiteral() {
    return isType(kExprLiteralInt) || isType(kExprLiteralFloat) || isType(kExprLiteralString) || isType(kExprPlaceholder);
  }

  bool Expr::hasAlias() {
    return alias != NULL;
  }

  bool Expr::hasTable() {
    return table != NULL;
  }

  char* Expr::getName() {
    if (alias != NULL) return alias;
    else return name;
  }

  bool Expr::isSimpleOp() {
    return opType == SIMPLE_OP;
  }

  bool Expr::isSimpleOp(char op) {
    return isSimpleOp() && opChar == op;
  }

  char* substr(const char* source, int from, int to) {
    int len = to - from;
    char* copy = (char*) malloc(len + 1);;
    strncpy(copy, source + from, len);
    copy[len] = '\0';
    return copy;
  }
} // namespace hsql
