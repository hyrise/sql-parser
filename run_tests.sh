#!/bin/sh


make clean -C src/

# make tests
make analysis -C src/
make grammar_test -C src/

echo "\n\n"


./bin/analysis "SELECT t1.a AS id, t1.b, t2.c FROM \"tbl\" AS t1 JOIN (SELECT * FROM foo JOIN bar ON foo.id = bar.id) t2 ON t1.a = t2.b WHERE (t1.b OR NOT t1.a) AND t2.c = 12.5"
# ./bin/analysis "CREATE TABLE \"table\" FROM TBL FILE 'students.tbl'"

echo "\n\n"

./bin/grammar_test -f "test/valid_queries.sql"

echo "\n\n"