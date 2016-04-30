
#include "sqlhelper.h"
#include <stdio.h>
#include <string>

namespace hsql {

    void printOperatorExpression(Expr* expr, uintmax_t numIndent);

    std::string indent(uintmax_t numIndent) {
        return std::string(numIndent, '\t');
    }
    void inprint(int64_t val, uintmax_t numIndent) {
        printf("%s%lld  \n", indent(numIndent).c_str(), val);
    }
    void inprint(float val, uintmax_t numIndent) {
        printf("%s%f\n", indent(numIndent).c_str(), val);
    }
    void inprint(const char* val, uintmax_t numIndent) {
        printf("%s%s\n", indent(numIndent).c_str(), val);
    }
    void inprint(const char* val, const char* val2, uintmax_t numIndent) {
        printf("%s%s->%s\n", indent(numIndent).c_str(), val, val2);
    }
    void inprintC(char val, uintmax_t numIndent) {
        printf("%s%c\n", indent(numIndent).c_str(), val);
    }
    void inprintU(uint64_t val, uintmax_t numIndent) {
        printf("%s%llu\n", indent(numIndent).c_str(), val);
    }

    void printTableRefInfo(TableRef* table, uintmax_t numIndent) {
        switch (table->type) {
        case kTableName:
            inprint(table->name, numIndent);
            break;
        case kTableSelect:
            printSelectStatementInfo(table->select, numIndent);
            break;
        case kTableJoin:
            inprint("Join Table", numIndent);
            inprint("Left", numIndent+1);
            printTableRefInfo(table->join->left, numIndent+2);
            inprint("Right", numIndent+1);
            printTableRefInfo(table->join->right, numIndent+2);
            inprint("Join Condition", numIndent+1);
            printExpression(table->join->condition, numIndent+2);
            break;
        case kTableCrossProduct:
            for (TableRef* tbl : *table->list) printTableRefInfo(tbl, numIndent);
            break;
        }
        if (table->alias != NULL) {
            inprint("Alias", numIndent+1);
            inprint(table->alias, numIndent+2);
        }
    }

    void printOperatorExpression(Expr* expr, uintmax_t numIndent) {
        if (expr == NULL) {
            inprint("null", numIndent);
            return;
        }

        switch (expr->op_type) {
        case Expr::SIMPLE_OP:
            inprintC(expr->op_char, numIndent);
            break;
        case Expr::AND:
            inprint("AND", numIndent);
            break;
        case Expr::OR:
            inprint("OR", numIndent);
            break;
        case Expr::NOT:
            inprint("NOT", numIndent);
            break;
        default:
            inprintU(expr->op_type, numIndent);
            break;
        }
        printExpression(expr->expr, numIndent+1);
        if (expr->expr2 != NULL) printExpression(expr->expr2, numIndent+1);
    }

    void printExpression(Expr* expr, uintmax_t numIndent) {
        switch (expr->type) {
        case kExprStar:
            inprint("*", numIndent);
            break;
        case kExprColumnRef:
            inprint(expr->name, numIndent);
            break;
        // case kExprTableColumnRef: inprint(expr->table, expr->name, numIndent); break;
        case kExprLiteralFloat:
            inprint(expr->fval, numIndent);
            break;
        case kExprLiteralInt:
            inprint(expr->ival, numIndent);
            break;
        case kExprLiteralString:
            inprint(expr->name, numIndent);
            break;
        case kExprFunctionRef:
            inprint(expr->name, numIndent);
            inprint(expr->expr->name, numIndent+1);
            break;
        case kExprOperator:
            printOperatorExpression(expr, numIndent);
            break;
        default:
            fprintf(stderr, "Unrecognized expression type %d\n", expr->type);
            return;
        }
        if (expr->alias != NULL) {
            inprint("Alias", numIndent+1);
            inprint(expr->alias, numIndent+2);
        }
    }

    void printSelectStatementInfo(SelectStatement* stmt, uintmax_t numIndent) {
        inprint("SelectStatement", numIndent);
        inprint("Fields:", numIndent+1);
        for (Expr* expr : *stmt->selectList) printExpression(expr, numIndent+2);

        inprint("Sources:", numIndent+1);
        printTableRefInfo(stmt->fromTable, numIndent+2);

        if (stmt->whereClause != NULL) {
            inprint("Search Conditions:", numIndent+1);
            printExpression(stmt->whereClause, numIndent+2);
        }


        if (stmt->unionSelect != NULL) {
            inprint("Union:", numIndent+1);
            printSelectStatementInfo(stmt->unionSelect, numIndent+2);
        }

        if (stmt->order != NULL) {
            inprint("OrderBy:", numIndent+1);
            printExpression(stmt->order->expr, numIndent+2);
            if (stmt->order->type == kOrderAsc) inprint("ascending", numIndent+2);
            else inprint("descending", numIndent+2);
        }

        if (stmt->limit != NULL) {
            inprint("Limit:", numIndent+1);
            inprint(stmt->limit->limit, numIndent+2);
        }
    }



    void printImportStatementInfo(ImportStatement* stmt, uintmax_t numIndent) {
        inprint("ImportStatment", numIndent);
        inprint(stmt->filePath, numIndent+1);
        inprint(stmt->tableName, numIndent+1);
    }

    void printCreateStatementInfo(CreateStatement* stmt, uintmax_t numIndent) {
        inprint("CreateStatment", numIndent);
        inprint(stmt->tableName, numIndent+1);
        inprint(stmt->filePath, numIndent+1);
    }

    void printInsertStatementInfo(InsertStatement* stmt, uintmax_t numIndent) {
        inprint("InsertStatment", numIndent);
        inprint(stmt->tableName, numIndent+1);
        if (stmt->columns != NULL) {
            inprint("Columns", numIndent+1);
            for (char* col_name : *stmt->columns) {
                inprint(col_name, numIndent+2);
            }
        }
        switch (stmt->type) {
        case InsertStatement::kInsertValues:
            inprint("Values", numIndent+1);
            for (Expr* expr : *stmt->values) {
                printExpression(expr, numIndent+2);
            }
            break;
        case InsertStatement::kInsertSelect:
            printSelectStatementInfo(stmt->select, numIndent+1);
            break;
        }
    }

    void printStatementInfo(SQLStatement* stmt) {
        switch (stmt->type()) {
        case kStmtSelect:
            printSelectStatementInfo((SelectStatement*) stmt, 0);
            break;
        case kStmtInsert:
            printInsertStatementInfo((InsertStatement*) stmt, 0);
            break;
        case kStmtCreate:
            printCreateStatementInfo((CreateStatement*) stmt, 0);
            break;
        case kStmtImport:
            printImportStatementInfo((ImportStatement*) stmt, 0);
            break;
        default:
            break;
        }
    }

} // namespace hsql