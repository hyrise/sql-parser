
#include "statements.h"

namespace hsql {

  // SQLStatement
  SQLStatement::SQLStatement(StatementType type) :
    type_(type) {};

  SQLStatement::~SQLStatement() {}

  StatementType SQLStatement::type() const {
    return type_;
  }

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
    filePath(NULL),
    tableName(NULL),
    columns(NULL),
    viewColumns(NULL),
    select(NULL) {};

  CreateStatement::~CreateStatement() {
    free(filePath);
    free(tableName);
    delete select;

    if (columns != NULL) {
      for (ColumnDefinition* def : *columns) {
        delete def;
      }
      delete columns;
    }

    if (viewColumns != NULL) {
      for (char* column : *viewColumns) {
        free(column);
      }
      delete viewColumns;
    }
  }

  // DeleteStatement
  DeleteStatement::DeleteStatement() :
    SQLStatement(kStmtDelete),
    tableName(NULL),
    expr(NULL) {};

  DeleteStatement::~DeleteStatement() {
    free(tableName);
    delete expr;
  }

  // DropStatament
  DropStatement::DropStatement(EntityType type) :
    SQLStatement(kStmtDrop),
    type(type),
    name(NULL) {}

  DropStatement::~DropStatement() {
    free(name);
  }

  // ExecuteStatement
  ExecuteStatement::ExecuteStatement() :
    SQLStatement(kStmtExecute),
    name(NULL),
    parameters(NULL) {}

  ExecuteStatement::~ExecuteStatement() {
    free(name);

    if (parameters != NULL) {
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
    filePath(NULL),
    tableName(NULL) {};

  ImportStatement::~ImportStatement() {
    delete filePath;
    delete tableName;
  }

  // InsertStatement
  InsertStatement::InsertStatement(InsertType type) :
    SQLStatement(kStmtInsert),
    type(type),
    tableName(NULL),
    columns(NULL),
    values(NULL),
    select(NULL) {}

  InsertStatement::~InsertStatement() {
    free(tableName);
    delete select;

    if (columns != NULL) {
      for (char* column : *columns) {
        free(column);
      }
      delete columns;
    }

    if (values != NULL) {
      for (Expr* expr : *values) {
        delete expr;
      }
      delete values;
    }
  }

  // PrepareStatement
  PrepareStatement::PrepareStatement() :
    SQLStatement(kStmtPrepare),
    name(NULL),
    query(NULL) {}

  PrepareStatement::~PrepareStatement() {
    delete query;
    free(name);
  }

  void PrepareStatement::setPlaceholders(std::vector<void*> ph) {
    for (void* e : ph) {
      if (e != NULL)
        placeholders.push_back((Expr*) e);
    }
    // Sort by col-id
    std::sort(placeholders.begin(), placeholders.end(), [](Expr * i, Expr * j) -> bool { return (i->ival < j->ival); });

    // Set the placeholder id on the Expr. This replaces the previously stored column id
    for (uintmax_t i = 0; i < placeholders.size(); ++i) placeholders[i]->ival = i;
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
    columns(NULL),
    having(NULL) {}

  GroupByDescription::~GroupByDescription() {
    delete having;

    if (columns != NULL) {
      for (Expr* expr : *columns) {
        delete expr;
      }
      delete columns;
    }
  }

  // SelectStatement
  SelectStatement::SelectStatement() :
    SQLStatement(kStmtSelect),
    fromTable(NULL),
    selectDistinct(false),
    selectList(NULL),
    whereClause(NULL),
    groupBy(NULL),
    unionSelect(NULL),
    order(NULL),
    limit(NULL) {};

  SelectStatement::~SelectStatement() {
    delete fromTable;
    delete whereClause;
    delete groupBy;
    delete unionSelect;
    delete limit;

    // Delete each element in the select list.
    if (selectList != NULL) {
      for (Expr* expr : *selectList) {
        delete expr;
      }
      delete selectList;
    }

    if (order != NULL) {
      for (OrderDescription* desc : *order) {
        delete desc;
      }
      delete order;
    }
  }

  // UpdateStatement
  UpdateStatement::UpdateStatement() :
    SQLStatement(kStmtUpdate),
    table(NULL),
    updates(NULL),
    where(NULL) {}

  UpdateStatement::~UpdateStatement() {
    delete table;
    delete where;

    if (updates != NULL) {
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
    schema(NULL),
    name(NULL),
    alias(NULL),
    select(NULL),
    list(NULL),
    join(NULL) {}

  TableRef::~TableRef() {
    free(schema);
    free(name);
    free(alias);

    delete select;
    delete join;

    if (list != NULL) {
      for (TableRef* table : *list) {
        delete table;
      }
      delete list;
    }
  }

  bool TableRef::hasSchema() {
    return schema != NULL;
  }

  char* TableRef::getName() {
    if (alias != NULL) return alias;
    else return name;
  }

  // JoinDefinition
  JoinDefinition::JoinDefinition() :
    left(NULL),
    right(NULL),
    condition(NULL),
    type(kJoinInner) {}

  JoinDefinition::~JoinDefinition() {
    delete left;
    delete right;
    delete condition;
  }

} // namespace hsql
