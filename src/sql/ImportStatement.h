#ifndef __SQLPARSER__IMPORT_STATEMENT_H__
#define __SQLPARSER__IMPORT_STATEMENT_H__

#include "SQLStatement.h"

namespace hsql {
  enum ImportType {
    kImportCSV,
    kImportTbl, // Hyrise file format
  };

  // Represents SQL Import statements.
  struct ImportStatement : SQLStatement {
    ImportStatement(ImportType type);
    virtual ~ImportStatement();

    ImportType type;
    const char* filePath;
    const char* tableName;
  };

} // namespace hsql

#endif
