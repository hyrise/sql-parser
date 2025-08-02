#ifndef SQLPARSER_CSV_IMPORT_EXPORT_OPTIONS_H
#define SQLPARSER_CSV_IMPORT_EXPORT_OPTIONS_H

namespace hsql {

struct CsvImportExportOptions {
  CsvImportExportOptions();
  ~CsvImportExportOptions();

  char* delimiter;
  char* null;
  char* quote;
};

}  // namespace hsql

#endif
