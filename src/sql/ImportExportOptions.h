#ifndef SQLPARSER_IMPORT_EXPORT_OPTIONS_H
#define SQLPARSER_IMPORT_EXPORT_OPTIONS_H

namespace hsql {

// Name unchanged for compatibility. Historically, this was only used for import statements before we introduced export
// statements (`COPY ... TO`). We did not change the enum name to accomodate forks. In the grammar, however, we call the
// corresponding terminal symbol `file_type` and use it for both `ImportStatement` and `ExportStatement`.
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
