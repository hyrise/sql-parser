
make clean

# make tests
# ./bin/tests

make execution
./bin/sql_execution "SELECT a FROM foo WHERE a > 12 OR b > 3 AND c = 3"
./bin/sql_execution "SELECT col1, col2, 'test' FROM table, foo WHERE age > 12 AND zipcode = 12345 GROUP BY col1;"