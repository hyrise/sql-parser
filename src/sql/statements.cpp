
#include "statements.h"

namespace hsql {

  // ColumnDefinition
  ColumnDefinition::ColumnDefinition(char* name, DataType type) :
    name(name),
    type(type) {};

  ColumnDefinition::~ColumnDefinition() {
    free(name);
  }

  // CreateStatemnet
  CreateStatement::CreateStatement(CreateType type) :
    SQLStatement(kStmtCreate),
    type(type),
    ifNotExists(false),
    filePath(nullptr),
    tableName(nullptr),
    columns(nullptr),
    viewColumns(nullptr),
    select(nullptr) {};

  CreateStatement::~CreateStatement() {
    free(filePath);
    free(tableName);
    delete select;

    if (columns != nullptr) {
      for (ColumnDefinition* def : *columns) {
        delete def;
      }
      delete columns;
    }

    if (viewColumns != nullptr) {
      for (char* column : *viewColumns) {
        free(column);
      }
      delete viewColumns;
    }
  }

  // DeleteStatement
  DeleteStatement::DeleteStatement() :
    SQLStatement(kStmtDelete),
    tableName(nullptr),
    expr(nullptr) {};

  DeleteStatement::~DeleteStatement() {
    free(tableName);
    delete expr;
  }

  // DropStatament
  DropStatement::DropStatement(DropType type) :
    SQLStatement(kStmtDrop),
    type(type),
    name(nullptr) {}

  DropStatement::~DropStatement() {
    free(name);
  }

  // ExecuteStatement
  ExecuteStatement::ExecuteStatement() :
    SQLStatement(kStmtExecute),
    name(nullptr),
    parameters(nullptr) {}

  ExecuteStatement::~ExecuteStatement() {
    free(name);

    if (parameters != nullptr) {
      for (Expr* param : *parameters) {
        delete param;
      }
      delete parameters;
    }
  }

  // ImportStatement
  ImportStatement::ImportStatement(ImportType type) :
    SQLStatement(kStmtImport),
    type(type),
    filePath(nullptr),
    tableName(nullptr) {};

  ImportStatement::~ImportStatement() {
    delete filePath;
    delete tableName;
  }

  // InsertStatement
  InsertStatement::InsertStatement(InsertType type) :
    SQLStatement(kStmtInsert),
    type(type),
    tableName(nullptr),
    columns(nullptr),
    values(nullptr),
    select(nullptr) {}

  InsertStatement::~InsertStatement() {
    free(tableName);
    delete select;

    if (columns != nullptr) {
      for (char* column : *columns) {
        free(column);
      }
      delete columns;
    }

    if (values != nullptr) {
      for (Expr* expr : *values) {
        delete expr;
      }
      delete values;
    }
  }

  // ShowStatament
  ShowStatement::ShowStatement(ShowType type) :
    SQLStatement(kStmtShow),
    type(type),
    name(nullptr) {}

  ShowStatement::~ShowStatement() {
    free(name);
  }

  // SelectStatement.h

  // OrderDescription
  OrderDescription::OrderDescription(OrderType type, Expr* expr) :
    type(type),
    expr(expr) {}

  OrderDescription::~OrderDescription() {
    delete expr;
  }

  // LimitDescription
  LimitDescription::LimitDescription(int64_t limit, int64_t offset) :
    limit(limit),
    offset(offset) {}

  // GroypByDescription
  GroupByDescription::GroupByDescription() :
    columns(nullptr),
    having(nullptr) {}

  GroupByDescription::~GroupByDescription() {
    delete having;

    if (columns != nullptr) {
      for (Expr* expr : *columns) {
        delete expr;
      }
      delete columns;
    }
  }

  // SelectStatement
  SelectStatement::SelectStatement() :
    SQLStatement(kStmtSelect),
    fromTable(nullptr),
    selectDistinct(false),
    selectList(nullptr),
    whereClause(nullptr),
    groupBy(nullptr),
    unionSelect(nullptr),
    order(nullptr),
    limit(nullptr) {};

  SelectStatement::~SelectStatement() {
    delete fromTable;
    delete whereClause;
    delete groupBy;
    delete unionSelect;
    delete limit;

    // Delete each element in the select list.
    if (selectList != nullptr) {
      for (Expr* expr : *selectList) {
        delete expr;
      }
      delete selectList;
    }

    if (order != nullptr) {
      for (OrderDescription* desc : *order) {
        delete desc;
      }
      delete order;
    }
  }

  // UpdateStatement
  UpdateStatement::UpdateStatement() :
    SQLStatement(kStmtUpdate),
    table(nullptr),
    updates(nullptr),
    where(nullptr) {}

  UpdateStatement::~UpdateStatement() {
    delete table;
    delete where;

    if (updates != nullptr) {
      for (UpdateClause* update : *updates) {
        free(update->column);
        delete update->value;
        delete update;
      }
      delete updates;
    }
  }

  // TableRef
  TableRef::TableRef(TableRefType type) :
    type(type),
    schema(nullptr),
    name(nullptr),
    alias(nullptr),
    select(nullptr),
    list(nullptr),
    join(nullptr) {}

  TableRef::~TableRef() {
    free(schema);
    free(name);
    free(alias);

    delete select;
    delete join;

    if (list != nullptr) {
      for (TableRef* table : *list) {
        delete table;
      }
      delete list;
    }
  }

  bool TableRef::hasSchema() const {
    return schema != nullptr;
  }

  const char* TableRef::getName() const {
    if (alias != nullptr) return alias;
    else return name;
  }

  // JoinDefinition
  JoinDefinition::JoinDefinition() :
    left(nullptr),
    right(nullptr),
    condition(nullptr),
    type(kJoinInner) {}

  JoinDefinition::~JoinDefinition() {
    delete left;
    delete right;
    delete condition;
  }

} // namespace hsql
