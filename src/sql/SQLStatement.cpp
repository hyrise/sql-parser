#include "SQLStatement.h"

namespace hsql {

  // SQLStatement
  SQLStatement::SQLStatement(StatementType type) :
    hints(nullptr),
    type_(type) {};

  SQLStatement::~SQLStatement() {
    if (hints != nullptr) {
      for (Expr* hint : *hints) {
        delete hint;
      }
    }
    delete hints;
  }

  StatementType SQLStatement::type() const {
    return type_;
  }

  bool SQLStatement::isType(StatementType type) const {
    return (type_ == type);
  }

  bool SQLStatement::is(StatementType type) const {
    return isType(type);
  }

  bool SQLStatement::isDataDefinitionStatement() const {
    switch (type_) {
      case kStmtImport:
      case kStmtExport:
      case kStmtCreate:
      case kStmtDrop:
      case kStmtAlter:
      case kStmtRename:
        return true;
      default:
        return false;
    }
  }

  bool SQLStatement::isDataManipulationStatement() const {
    switch (type_) {
      case kStmtDelete:
      case kStmtInsert:
      case kStmtUpdate:
        return true;
      default:
        return false;
    }
  }

  bool SQLStatement::isDataQueryStatement() const {
    switch (type_) {
      case kStmtSelect:
      case kStmtShow:
        return true;
      default:
        return false;
    }
  }

}