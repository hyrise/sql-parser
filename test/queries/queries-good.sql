# This file contains a list of strings that are NOT valid SQL queries.
# Each line contains a single SQL query.
# SELECT statement
SELECT * FROM orders;
SELECT a FROM foo WHERE a > 12 OR b > 3 AND NOT c LIMIT 10
SELECT a FROM some_schema.foo WHERE a > 12 OR b > 3 AND NOT c LIMIT 10
SELECT col1 AS myname, col2, 'test' FROM "table", foo AS t WHERE age > 12 AND zipcode = 12345 GROUP BY col1;
SELECT * from "table" JOIN table2 ON a = b WHERE (b OR NOT a) AND a = 12.5
(SELECT a FROM foo WHERE a > 12 OR b > 3 AND c NOT LIKE 's%' LIMIT 10);
SELECT * FROM "table" LIMIT 10 OFFSET 10; SELECT * FROM another;
SELECT * FROM t1 UNION SELECT * FROM t2 ORDER BY col1;
SELECT * FROM (SELECT * FROM t1);
SELECT * FROM t1 UNION (SELECT * FROM t2 UNION SELECT * FROM t3) ORDER BY col1;
SELECT TOP 10 * FROM t1 ORDER BY col1, col2;
SELECT a, MAX(b), MAX(c, d), CUSTOM(q, UP(r)) AS f FROM t1;
SELECT * FROM t WHERE a BETWEEN 1 and c;
SELECT * FROM t WHERE a = ? AND b = ?;
SELECT City.name, Product.category, SUM(price) FROM fact INNER JOIN City ON fact.city_id = City.id INNER JOIN Product ON fact.product_id = Product.id GROUP BY City.name, Product.category;
SELECT SUBSTR(a, 3, 5) FROM t;
# JOIN
SELECT t1.a, t1.b, t2.c FROM "table" AS t1 JOIN (SELECT * FROM foo JOIN bar ON foo.id = bar.id) t2 ON t1.a = t2.b WHERE (t1.b OR NOT t1.a) AND t2.c = 12.5
SELECT * FROM t1 JOIN t2 ON c1 = c2;
SELECT a, SUM(b) FROM t2 GROUP BY a HAVING SUM(b) > 100;
# CREATE statement
CREATE TABLE "table" FROM TBL FILE 'students.tbl'
CREATE TABLE IF NOT EXISTS "table" FROM TBL FILE 'students.tbl'
CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)
CREATE TABLE teachers (name VARCHAR(30), student_number LONG, city CHAR(10), grade FLOAT)
CREATE TABLE students_2 AS SELECT * FROM students
CREATE TABLE students_3 AS SELECT city, grade FROM students WHERE grade > 3.0
# Multiple statements
CREATE TABLE "table" FROM TBL FILE 'students.tbl'; SELECT * FROM "table";
# INSERT
INSERT INTO test_table VALUES (1, 2, 'test');
INSERT INTO test_table (id, value, name) VALUES (1, 2, 'test');
INSERT INTO test_table SELECT * FROM students;
INSERT INTO some_schema.test_table SELECT * FROM another_schema.students;
# DELETE
DELETE FROM students WHERE grade > 3.0
DELETE FROM students
TRUNCATE students
# UPDATE
UPDATE students SET grade = 1.3 WHERE name = 'Max Mustermann';
UPDATE students SET grade = 1.3, name='Felix Fürstenberg' WHERE name = 'Max Mustermann';
UPDATE students SET grade = 1.0;
UPDATE some_schema.students SET grade = 1.0;
# DROP
DROP TABLE students;
DROP TABLE IF EXISTS students;
DROP VIEW IF EXISTS students;
# PREPARE
PREPARE prep_inst FROM 'INSERT INTO test VALUES (?, ?, ?)';
PREPARE prep2 FROM 'INSERT INTO test VALUES (?, 0, 0); INSERT INTO test VALUES (0, ?, 0); INSERT INTO test VALUES (0, 0, ?);';
EXECUTE prep_inst(1, 2, 3);
EXECUTE prep;
DEALLOCATE PREPARE prep;
# HINTS
SELECT * FROM test WITH HINT(NO_CACHE);
SELECT * FROM test WITH HINT(NO_CACHE, NO_SAMPLING);
SELECT * FROM test WITH HINT(NO_CACHE, SAMPLE_RATE(0.1), OMW(1.0, 'test'));
SHOW TABLES;
SHOW COLUMNS students;
