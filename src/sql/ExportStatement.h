#ifndef SQLPARSER_EXPORT_STATEMENT_H
#define SQLPARSER_EXPORT_STATEMENT_H

#include "CsvImportExportOptions.h"
#include "ImportExportOptions.h"
#include "SQLStatement.h"
#include "SelectStatement.h"

namespace hsql {
// Represents SQL Export statements.
struct ExportStatement : SQLStatement {
  ExportStatement(ImportType type);
  ~ExportStatement() override;

  // ImportType is used for compatibility reasons
  ImportType type;
  char* filePath;
  char* schema;
  char* tableName;
  SelectStatement* select;
  char* encoding;
  CsvImportExportOptions* csv_options;
};

}  // namespace hsql

#endif
