# Load Tables
CREATE TABLE IF NOT EXISTS students FROM TBL FILE 'test/students.tbl';
CREATE TABLE IF NOT EXISTS test FROM TBL FILE 'test/lin_xxs.tbl';
CREATE TABLE IF NOT EXISTS companies FROM TBL FILE 'test/tables/companies.tbl';
CREATE TABLE IF NOT EXISTS employees FROM TBL FILE 'test/tables/employees.tbl';
# SELECT (1)
SELECT * FROM students;
# SELECT (2)
SELECT name, city, grade FROM (SELECT * FROM students WHERE city = 'Potsdam') t1 WHERE grade <= 1.5 OR grade >= 3.5;
# GROUP
SELECT city, AVG(grade) AS average|, MIN(grade) AS best, MAX(grade) AS worst FROM students GROUP BY city;
# UNION
SELECT * FROM students WHERE grade = 1.3 UNION SELECT * FROM students WHERE grade = 3.7;
# JOIN
SELECT * FROM companies JOIN employees ON company_id = employee_company_id