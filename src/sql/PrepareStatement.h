#ifndef __SQLPARSER__PREPARE_STATEMENT_H__
#define __SQLPARSER__PREPARE_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {

  // Represents SQL Prepare statements.
  // Example: PREPARE test FROM 'SELECT * FROM test WHERE a = ?;'
  struct PrepareStatement : SQLStatement {
    PrepareStatement();
    virtual ~PrepareStatement();

    char* name;

    // The query that is supposed to be prepared.
    char* query;
  };

} // namsepace hsql

#endif
