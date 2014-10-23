
#include "sqlhelper.h"
#include <stdio.h>
#include <string>

const char* indent(uint num_indent) { return std::string(num_indent, ' ').c_str(); }
void inprint(int val, uint num_indent) { printf("%s%d\n", indent(num_indent), val); }
void inprint(float val, uint num_indent) { printf("%s%f\n", indent(num_indent), val); }
void inprint(const char* val, uint num_indent) { printf("%s%s\n", indent(num_indent), val); }

void printTableRefInfo(TableRef* table, uint num_indent) {
  switch (table->type) {
    case eTableName:
      inprint(table->name, num_indent);
      break;
    case eTableSelect:
      printSelectStatementInfo(table->stmt, num_indent);
      break;
    case eTableCrossProduct:
      for (TableRef* tbl : table->list->_vector) printTableRefInfo(tbl, num_indent);
      break;
  }
}

void printSelectStatementInfo(SelectStatement* stmt, uint num_indent) {
  inprint("SelectStatement", num_indent);
  inprint("Fields:", num_indent+1);
  for (Expr* expr : stmt->select_list->_vector) {
    switch (expr->type) {
      case eExprStar: inprint("*", num_indent+2); break;
      case eExprColumnRef: inprint(expr->name, num_indent+2); break;
      case eExprLiteralFloat: inprint(expr->float_literal, num_indent+2); break;
      case eExprLiteralString: inprint(expr->name, num_indent+2); break;
      case eExprFunctionRef: /* todo */ break;
      case eExprPredicate: /* todo */ break;
    }
  }
  inprint("Sources:", num_indent+1);
  printTableRefInfo(stmt->from_table, num_indent+2);
}
