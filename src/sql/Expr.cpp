
#include "Expr.h"
#include <stdio.h>
#include <string.h>
#include "SelectStatement.h"

namespace hsql {

  Expr::Expr(ExprType type) :
    type(type),
    expr(NULL),
    expr2(NULL),
    exprList(NULL),
    select(NULL),
    name(NULL),
    table(NULL),
    alias(NULL) {};

  Expr::~Expr() {
    delete expr;
    delete expr2;
    delete select;
    free(name);
    free(table);
    free(alias);

    if (exprList != NULL) {
      for (Expr* e : *exprList) {
        delete e;
      }
      delete exprList;
    }
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
    e->opType = kOpSimple;
    e->opChar = op;
    e->expr = expr1;
    e->expr2 = expr2;
    return e;
  }

  Expr* Expr::makeBetween(Expr* expr, Expr* left, Expr* right) {
    Expr* e = new Expr(kExprOperator);
    e->expr = expr;
    e->opType = kOpBetween;
    e->exprList = new std::vector<Expr*>();
    e->exprList->push_back(left);
    e->exprList->push_back(right);
    return e;
  }

  Expr* Expr::makeCase(Expr* expr, Expr* then, Expr* other) {
    Expr* e = new Expr(kExprOperator);
    e->expr = expr;
    e->opType = kOpCase;
    e->exprList = new std::vector<Expr*>();
    e->exprList->push_back(then);
    e->exprList->push_back(other);
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

  Expr* Expr::makeParameter(int id) {
    Expr* e = new Expr(kExprParameter);
    e->ival = id;
    return e;
  }

  Expr* Expr::makeSelect(SelectStatement* select) {
    Expr* e = new Expr(kExprSelect);
    e->select = select;
    return e;
  }

  Expr* Expr::makeExists(SelectStatement* select) {
    Expr* e = new Expr(kExprOperator);
    e->opType = kOpExists;
    e->select = select;
    return e;
  }

  Expr* Expr::makeInOperator(Expr* expr, std::vector<Expr*>* exprList) {
    Expr* e = new Expr(kExprOperator);
    e->opType = kOpIn;
    e->expr = expr;
    e->exprList = exprList;

    return e;
  }

  Expr* Expr::makeInOperator(Expr* expr, SelectStatement* select) {
    Expr* e = new Expr(kExprOperator);
    e->opType = kOpIn;
    e->expr = expr;
    e->select = select;

    return e;
  }

  bool Expr::isType(ExprType exprType) const {
    return exprType == type;
  }

  bool Expr::isLiteral() const {
    return isType(kExprLiteralInt) || isType(kExprLiteralFloat) || isType(kExprLiteralString) || isType(kExprParameter);
  }

  bool Expr::hasAlias() const {
    return alias != NULL;
  }

  bool Expr::hasTable() const {
    return table != NULL;
  }

  const char* Expr::getName() const {
    if (alias != NULL) return alias;
    else return name;
  }

  bool Expr::isSimpleOp() const {
    return opType == kOpSimple;
  }

  bool Expr::isSimpleOp(char op) const {
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
