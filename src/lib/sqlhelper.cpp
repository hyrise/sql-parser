
#include "sqlhelper.h"
#include <stdio.h>
#include <string>

namespace hsql {

void printExpression(Expr* expr, uint num_indent);
void printOperatorExpression(Expr* expr, uint num_indent);

const char* indent(uint num_indent) { return std::string(num_indent, '\t').c_str(); }
void inprint(int64_t val, uint num_indent) { printf("%s%ld  \n", indent(num_indent), val); }
void inprint(float val, uint num_indent) { printf("%s%f\n", indent(num_indent), val); }
void inprint(const char* val, uint num_indent) { printf("%s%s\n", indent(num_indent), val); }
void inprintC(char val, uint num_indent) { printf("%s%c\n", indent(num_indent), val); }
void inprintU(uint64_t val, uint num_indent) { printf("%s%lu\n", indent(num_indent), val); }

void printTableRefInfo(TableRef* table, uint num_indent) {
  switch (table->type) {
    case kTableName:
      inprint(table->name, num_indent);
      break;
    case kTableSelect:
      printSelectStatementInfo(table->select, num_indent);
      break;
    case kTableCrossProduct:
      for (TableRef* tbl : table->list->_vector) printTableRefInfo(tbl, num_indent);
      break;
  }
}

void printOperatorExpression(Expr* expr, uint num_indent) {
  if (expr == NULL) { inprint("null", num_indent); return; }

  switch (expr->op_type) {
    case Expr::SIMPLE_OP: inprintC(expr->op_char, num_indent); break;
    case Expr::AND: inprint("AND", num_indent); break;
    case Expr::OR: inprint("OR", num_indent); break;
    case Expr::NOT: inprint("NOT", num_indent); break;
    default: inprintU(expr->op_type, num_indent); break;
  }
  printExpression(expr->expr, num_indent+1);
  if (expr->expr2 != NULL) printExpression(expr->expr2, num_indent+1);
}

void printExpression(Expr* expr, uint num_indent) {
  switch (expr->type) {
    case kExprStar: inprint("*", num_indent); break;
    case kExprColumnRef: inprint(expr->name, num_indent); break;
    case kExprLiteralFloat: inprint(expr->fval, num_indent); break;
    case kExprLiteralInt: inprint(expr->ival, num_indent); break;
    case kExprLiteralString: inprint(expr->name, num_indent); break;
    case kExprFunctionRef: /* todo */ break;
    case kExprOperator: printOperatorExpression(expr, num_indent); break;
    default: fprintf(stderr, "Unrecognized expression type %d\n", expr->type); break;
  }
}

void printSelectStatementInfo(SelectStatement* stmt, uint num_indent) {
  inprint("SelectStatement", num_indent);
  inprint("Fields:", num_indent+1);
  for (Expr* expr : stmt->select_list->_vector) printExpression(expr, num_indent+2);

  inprint("Sources:", num_indent+1);
  printTableRefInfo(stmt->from_table, num_indent+2);

  inprint("Search Conditions:", num_indent+1);
  if (stmt->where_clause != NULL) {
    printExpression(stmt->where_clause, num_indent+2);
  } else inprint("null", num_indent+2);

}


} // namespace hsql