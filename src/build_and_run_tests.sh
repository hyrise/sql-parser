
make clean

make tests
./bin/tests

make execution
./bin/sql_execution "SELECT col1, col2 FROM table, (SELECT * FROM a, table, (SELECT * FROM (SELECT * FROM foo))) GROUP BY col1;"