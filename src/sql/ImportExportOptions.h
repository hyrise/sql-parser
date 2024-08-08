#ifndef SQLPARSER_IMPORT_EXPORT_OPTIONS_H
#define SQLPARSER_IMPORT_EXPORT_OPTIONS_H

namespace hsql {

// Name unchanged for compatibility.
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
