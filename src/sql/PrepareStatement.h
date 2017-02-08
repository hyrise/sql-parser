#ifndef __PREPARE_STATEMENT_H__
#define __PREPARE_STATEMENT_H__

#include "../SQLParserResult.h"
#include "SQLStatement.h"
#include "SelectStatement.h"
#include <algorithm>

namespace hsql {
  /**
   * Represents SQL Prepare statements.
   * Example: "PREPARE ins_prep: SELECT * FROM t1 WHERE c1 = ? AND c2 = ?"
   */
  struct PrepareStatement : SQLStatement {
    PrepareStatement();
    virtual ~PrepareStatement();

    /**
     * When setting the placeholders we need to make sure that they are in the correct order.
     * To ensure that, during parsing we store the character position use that to sort the list here.
     *
     * @param vector of placeholders that the parser found
     */
    void setPlaceholders(std::vector<void*> ph);

    char* name;
    SQLParserResult* query;

    // The expressions are not owned by this statement.
    // Rather they are owned by the query and destroyed, when
    // the query is destroyed.
    std::vector<Expr*> placeholders;
  };

} // namsepace hsql
#endif