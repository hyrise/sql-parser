
#include "PrepareStatement.h"

namespace hsql {
  // PrepareStatement
  PrepareStatement::PrepareStatement() :
    SQLStatement(kStmtPrepare),
    name(NULL),
    query(NULL) {}

  PrepareStatement::~PrepareStatement() {
    free(name);
    free(query);
  }
} // namespace hsql
