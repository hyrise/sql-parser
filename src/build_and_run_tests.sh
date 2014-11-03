
make clean

# make tests
# ./bin/tests

# make execution
# ./bin/sql_execution "SELECT a FROM foo WHERE a > 12 OR b > 3 AND c = 3"
# ./bin/sql_execution "SELECT col1, col2, 'test' FROM table, foo WHERE age > 12 AND zipcode = 12345 GROUP BY col1;"
# ./bin/sql_execution "SELECT * from table WHERE (b OR NOT a) AND a = 12.5 JOIN table2 ON a = b"

make grammar_test

echo "\n\n"

./bin/grammar_test "SELECT a FROM foo WHERE a > 12 OR b > 3 AND c = 3 LIMIT 10"
./bin/grammar_test "SELECT col1, col2, 'test' FROM table, foo WHERE age > 12 AND zipcode = 12345 GROUP BY col1;"
./bin/grammar_test "SELECT age FROM table, (SELECT * FROM table2) ORDER BY age DESC"
./bin/grammar_test "SELECT * from table WHERE (b OR NOT a) AND a = 12.5 JOIN table2 ON a = b"

./bin/grammar_test -f "(SELECT a FROM foo WHERE a > 12 OR b > 3 AND c = 3 LIMIT 10)"

echo "\n\n"