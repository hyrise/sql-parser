#!/bin/sh
make clean -C src/
make analysis -C src/

echo "\n\n"

./bin/analysis "SELECT * FROM t1 UNION SELECT abc AS t FROM t2 ORDER BY col3 LIMIT 10;"
./bin/analysis "INSERT INTO students (name, city, age) VALUES ('Max', 'Musterhausen', 5);"
./bin/analysis "INSERT INTO students (name, city) SELECT * FROM employees;"

echo "\n\n"