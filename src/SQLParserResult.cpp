
#include "SQLParserResult.h"

namespace hsql {

  SQLParserResult::SQLParserResult() :
    isValid_(true),
    errorMsg_(NULL) {};

  SQLParserResult::SQLParserResult(SQLStatement* stmt) :
    isValid_(true),
    errorMsg_(NULL) {
    addStatement(stmt);
  };

  SQLParserResult::~SQLParserResult() {
    for (SQLStatement* statement : statements_) {
      delete statement;
    }

    free(errorMsg_);
  }

  void SQLParserResult::addStatement(SQLStatement* stmt) {
    statements_.push_back(stmt);
  }

  const SQLStatement* SQLParserResult::getStatement(int index) const {
    return statements_[index];
  }

  SQLStatement* SQLParserResult::getMutableStatement(int index) {
    return statements_[index];
  }

  size_t SQLParserResult::size() const {
    return statements_.size();
  }

  bool SQLParserResult::isValid() const {
    return isValid_;
  }

  const char* SQLParserResult::errorMsg() const {
    return errorMsg_;
  }

  int SQLParserResult::errorLine() const {
    return errorLine_;
  }

  int SQLParserResult::errorColumn() const {
    return errorColumn_;
  }

  void SQLParserResult::setIsValid(bool isValid) {
    isValid_ = isValid;
  }

  void SQLParserResult::setErrorDetails(char* errorMsg, int errorLine, int errorColumn) {
    errorMsg_ = errorMsg;
    errorLine_ = errorLine;
    errorColumn_ = errorColumn;
  }

} // namespace hsql