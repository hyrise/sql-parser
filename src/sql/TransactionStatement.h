#ifndef HYRISE_TRANSACTIONSTATEMENT_H
#define HYRISE_TRANSACTIONSTATEMENT_H

#include "SQLStatement.h"

namespace hsql {
  enum TransactionAction {
    kBeginTransaction,
    kCommitTransaction,
    kRollbackTransaction
  };

  struct TransactionStatement : SQLStatement {
    TransactionStatement(TransactionAction action);
    virtual ~TransactionStatement();

    TransactionAction action;
  };
}

#endif
