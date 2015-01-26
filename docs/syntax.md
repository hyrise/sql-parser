Syntax Examples
===============

This page contains some samples of SQL statements that can be executed in Hyrise.


**Create Tables**
```sql
CREATE TABLE IF NOT EXISTS students FROM TBL FILE 'test/students.tbl';
CREATE TABLE test (v1 INTEGER, v2 INTEGER, v3 INTEGER);
```


**Select with Join**
```sql
SELECT name, city, * FROM students AS t1 JOIN students AS t2 ON t1.city = t2.city WHERE t1.grade < 2.0 AND t2.grade > 2.0 AND t1.city = 'Frohnau' ORDER BY t1.grade DESC;
```


**Group By**
```sql
SELECT city, AVG(grade) AS average, MIN(grade) AS best, MAX(grade) AS worst FROM students GROUP BY city;
```


**Update and Delete**
```sql
UPDATE students SET name='Max Mustermann' WHERE name = 'Ralf Stiebitz';
DELETE FROM students WHERE name = 'Max Mustermann';
```


**Prepare and Execute**
```sql
PREPARE batch_insert {
	INSERT INTO test VALUES (?, 0, 0);
	INSERT INTO test VALUES (?, 0, 0);
	INSERT INTO test VALUES (?, 0, 0);
	INSERT INTO test VALUES (?, 0, 0);
	INSERT INTO test VALUES (?, 0, 0);
};

EXECUTE insert_test(1, 2, 3, 4 ,5);
```
