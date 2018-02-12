# This file contains a list of strings that are NOT valid SQL queries.
# Each line contains a single SQL query.
# Each line starts with a '!' char to indicate that parsing should fail.
!
!1
!gibberish;
!SELECT abc;
!CREATE TABLE "table" FROM TBL FILE 'students.tbl';SELECT 1
!CREATE TABLE "table" FROM TBL FILE 'students.tbl';1
!INSERT INTO test_table VALUESd (1, 2, 'test');
!SELECT * FROM t WHERE a = ? AND b = ?;SELECT 1;
!SHOW COLUMNS;
!select a + 2 as b(spam, eggs) from B;
