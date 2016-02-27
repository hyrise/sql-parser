#ifndef __SELECT_STATEMENT_H__
#define __SELECT_STATEMENT_H__

#include "SQLStatement.h"
#include "Expr.h"
#include "Table.h"

namespace hsql {
    typedef enum {
        kOrderAsc,
        kOrderDesc
    } OrderType;

    /**
     * Description of the order by clause within a select statement
     * TODO: hold multiple expressions to be sorted by
     */
    struct OrderDescription {
        OrderDescription(OrderType type, Expr* expr) :
            type(type),
            expr(expr) {}

        virtual ~OrderDescription() {
            delete expr;
        }

        OrderType type;
        Expr* expr;
    };

    const int64_t kNoLimit = -1;
    const int64_t kNoOffset = -1;

    /**
     * Description of the limit clause within a select statement
     */
    struct LimitDescription {
        LimitDescription(int64_t limit, int64_t offset) :
            limit(limit),
            offset(offset) {}

        int64_t limit;
        int64_t offset;
    };

    /**
     * Description of the group-by clause within a select statement
     */
    struct GroupByDescription {
        GroupByDescription() :
            columns(NULL),
            having(NULL) {}

        ~GroupByDescription() {
            delete columns;
            delete having;
        }

        std::vector<Expr*>* columns;
        Expr* having;
    };

    /**
     * Representation of a full SQL select statement.
     * TODO: add union_order and union_limit
     */
    struct SelectStatement : SQLStatement {
        SelectStatement() :
            SQLStatement(kStmtSelect),
            fromTable(NULL),
            selectDistinct(false),
            selectList(NULL),
            whereClause(NULL),
            groupBy(NULL),
            unionSelect(NULL),
            order(NULL),
            limit(NULL) {};

        virtual ~SelectStatement() {
            delete fromTable;
            delete selectList;
            delete whereClause;
            delete groupBy;
            delete order;
            delete limit;
        }

        TableRef* fromTable;
        bool selectDistinct;
        std::vector<Expr*>* selectList;
        Expr* whereClause;
        GroupByDescription* groupBy;

        SelectStatement* unionSelect;
        OrderDescription* order;
        LimitDescription* limit;
    };

} // namespace hsql
#endif