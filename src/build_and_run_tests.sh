
make clean

# make tests
# ./bin/tests

make analysis
make grammar_test

echo "\n\n"

./bin/grammar_test "SELECT a FROM foo WHERE a > 12 OR b > 3 AND c = 3 LIMIT 10"
./bin/grammar_test "SELECT col1, col2, 'test' FROM table, foo AS t WHERE age > 12 AND zipcode = 12345 GROUP BY col1;"
./bin/grammar_test "SELECT age FROM table AS t1, (SELECT * FROM table2) AS t2 ORDER BY age DESC"
./bin/grammar_test "SELECT * from table JOIN table2 ON a = b WHERE (b OR NOT a) AND a = 12.5"
./bin/grammar_test "(SELECT a FROM foo WHERE a > 12 OR b > 3 AND c LIKE 's%' LIMIT 10);"
./bin/grammar_test "(SELECT a FROM foo WHERE a > 12 OR b > 3 AND c NOT LIKE 's%' LIMIT 10);"
./bin/grammar_test "SELECT t1.a, t1.b, t2.c FROM table AS t1 JOIN (SELECT * FROM foo JOIN bar ON foo.id = bar.id) t2 ON t1.a = t2.b WHERE (t1.b OR NOT t1.a) AND t2.c = 12.5"

./bin/grammar_test "IMPORT FROM TBL FILE 'students.tbl' INTO table"

# Error: Where clause in between join statement
# ./bin/grammar_test -f "SELECT * from table WHERE (b OR NOT a) AND a = 12.5 AS t1 JOIN table2 ON a = b"
# ./bin/grammar_test -f "SELECT * table WHERE (b OR NOT a) AND a = 12.5 AS t1 JOIN table2 ON a = b"

echo "\n\n"

# ./bin/analysis "SELECT a FROM foo WHERE a > 12 OR b > 3 AND c = 3"
# ./bin/analysis "SELECT col1, col2, 'test' FROM table t1, foo WHERE age > 12 AND zipcode = 12345 GROUP BY col1 ORDER BY col2 DESC LIMIT 100;"
# ./bin/analysis "SELECT * from table AS t1 JOIN table2 AS t2 ON t1.a = t2.b WHERE (b OR NOT a) AND a = 12.5"
# ./bin/analysis "SELECT t1.a, t1.b, t2.c FROM table AS t1 JOIN (SELECT * FROM foo JOIN bar ON foo.id = bar.id) t2 ON t1.a = t2.b WHERE (t1.b OR NOT t1.a) AND t2.c = 12.5"
# ./bin/analysis "-- test
# SELECT * FROM table WHERE a NOT LIKE '%s' -- inline comment
# --my comment"
# ./bin/analysis "SELECT * from table WHERE (b OR NOT a) AND a = 12.5 JOIN table2 ON a = b"

echo "\n\n"