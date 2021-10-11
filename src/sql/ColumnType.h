#ifndef SQLPARSER_COLUMN_TYPE_H
#define SQLPARSER_COLUMN_TYPE_H

#include <ostream>

namespace hsql {
  enum class DataType {
    UNKNOWN,
    INT,
    LONG,
    FLOAT,
    DOUBLE,
    DECIMAL,
    REAL,
    CHAR,
    VARCHAR,
    TEXT,
    DATETIME,
    DATE,
    TIME,
    SMALLINT,
  };

  struct ColumnSpecification {
    ColumnSpecification() = default;
    ColumnSpecification(int64_t precision, int64_t scale);
    ColumnSpecification(int64_t precision);
    int64_t precision;
    int64_t scale;
  };



  // Represents the type of a column, e.g., FLOAT or VARCHAR(10)
  struct ColumnType {
    ColumnType() = default;
    ColumnType(DataType data_type, int64_t length = 0,
               ColumnSpecification column_specification = ColumnSpecification{});
    DataType data_type;
    int64_t length;  // Used for, e.g., VARCHAR(10)
    ColumnSpecification columnSpecification; // used for, e.g. DECIMAL (6, 4) or TIME (5)
  };

  bool operator==(const ColumnType& lhs, const ColumnType& rhs);
  bool operator!=(const ColumnType& lhs, const ColumnType& rhs);
  std::ostream& operator<<(std::ostream&, const ColumnType&);

} // namespace hsql

#endif
