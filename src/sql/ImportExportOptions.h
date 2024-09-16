#ifndef SQLPARSER_IMPORT_EXPORT_OPTIONS_H
#define SQLPARSER_IMPORT_EXPORT_OPTIONS_H

namespace hsql {

// Name unchanged for compatibility. Historically, this was only used for import statements before we introduced export
// statements (`COPY ... TO`). We did not change the enum name to accomodate forks.
enum ImportType {
  kImportCSV,
  kImportTbl,  // Hyrise file format.
  kImportBinary,
  kImportAuto
};

struct ImportExportOptions {
  ImportExportOptions();
  ~ImportExportOptions();

  ImportType format;
  char* encoding;
};

}  // namespace hsql

#endif
