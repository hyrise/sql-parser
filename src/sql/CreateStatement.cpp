
#include "CreateStatement.h"

namespace hsql {

void CreateStatement::setColumnDefsAndConstraints(std::vector<TableElement*>* tableElements) {
  columns = new std::vector<ColumnDefinition*>();
  tableConstraints = new std::vector<TableConstraint*>();

  for (auto tableElem : *tableElements) {
    if (auto* colDef = dynamic_cast<ColumnDefinition*>(tableElem)) {
      columns->emplace_back(colDef);
    } else if (auto* tableConstraint = dynamic_cast<TableConstraint*>(tableElem)) {
      tableConstraints->emplace_back(tableConstraint);
    }
  }
}

}  // namespace hsql
