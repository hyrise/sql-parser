
#include "statements.h"

namespace hsql {

  // SQLStatement
  SQLStatement::SQLStatement(StatementType type) :
    _type(type) {};

  SQLStatement::~SQLStatement() {}

  StatementType SQLStatement::type() const {
    return _type;
  }

  // ColumnDefinition
  ColumnDefinition::ColumnDefinition(char* name, DataType type) :
    name(name),
    type(type) {};

  ColumnDefinition::~ColumnDefinition() {
    delete name;
  }

  // CreateStatemnet
  CreateStatement::CreateStatement(CreateType type) :
    SQLStatement(kStmtCreate),
    type(type),
    ifNotExists(false),
    filePath(NULL),
    tableName(NULL),
    columns(NULL) {};

  CreateStatement::~CreateStatement() {
    delete columns;
    delete filePath;
    delete tableName;
  }

  // DeleteStatement
  DeleteStatement::DeleteStatement() :
    SQLStatement(kStmtDelete),
    tableName(NULL),
    expr(NULL) {};

  DeleteStatement::~DeleteStatement() {
    delete tableName;
    delete expr;
  }

  // DropStatament
  DropStatement::DropStatement(EntityType type) :
    SQLStatement(kStmtDrop),
    type(type),
    name(NULL) {}

  DropStatement::~DropStatement() {
    delete name;
  }

  // ExecuteStatement
  ExecuteStatement::ExecuteStatement() :
    SQLStatement(kStmtExecute),
    name(NULL),
    parameters(NULL) {}

  ExecuteStatement::~ExecuteStatement() {
    delete name;
    delete parameters;
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
    delete tableName;
    delete columns;
    delete values;
    delete select;
  }

  // PrepareStatement
  PrepareStatement::PrepareStatement() :
    SQLStatement(kStmtPrepare),
    name(NULL),
    query(NULL) {}

  PrepareStatement::~PrepareStatement() {
    delete query;
    delete name;
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
    delete columns;
    delete having;
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
    delete selectList;
    delete whereClause;
    delete groupBy;
    delete order;
    delete limit;
  }

  // UpdateStatement
  UpdateStatement::UpdateStatement() :
    SQLStatement(kStmtUpdate),
    table(NULL),
    updates(NULL),
    where(NULL) {}

  UpdateStatement::~UpdateStatement() {
    delete table;
    delete updates;
    delete where;
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
    delete name;
    delete alias;
    delete select;
    delete list;
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
