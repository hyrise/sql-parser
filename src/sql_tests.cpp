/*
 * sql_tests.cpp
 */

#include "SQLParser.h"
#include <stdio.h>
#include <string>
#include <cassert>
#include <thread>
#include <time.h>

#define STREQUALS(str1, str2) std::string(str1).compare(std::string(str2)) == 0

#define ASSERT(cond) if (!(cond)) { fprintf(stderr, "failed! Assertion (" #cond ")\n"); return; }
#define ASSERT_STR(STR1, STR2) ASSERT(STREQUALS(STR1, STR2));


void SelectTest1() {
	printf("Test: SelectTest1... "); fflush(stdout);

	const char* sql = "SELECT age, (name), address from table WHERE age < 12.5;";
	Statement* sqlStatement = SQLParser::parseSQLString(sql);
	ASSERT(sqlStatement != NULL);
	ASSERT(sqlStatement->type == eSelect);

	SelectStatement* stmt = (SelectStatement*) sqlStatement;

	ASSERT(stmt->select_list->size() == 3);
	ASSERT_STR(stmt->select_list->at(0)->name, "age");
	ASSERT_STR(stmt->select_list->at(1)->name, "name");
	ASSERT_STR(stmt->select_list->at(2)->name, "address");

	ASSERT(stmt->from_table != NULL);
	ASSERT(stmt->from_table->type == eTableName);
	ASSERT_STR(stmt->from_table->name, "table");

	// WHERE
	ASSERT(stmt->where_clause != NULL);
	ASSERT(stmt->where_clause->expr->type == eExprColumnRef);
	ASSERT_STR(stmt->where_clause->expr->name, "age");
	ASSERT(stmt->where_clause->pred_type == SQL_LESS);
	ASSERT(stmt->where_clause->expr2->type == eExprLiteralFloat);
	ASSERT(stmt->where_clause->expr2->float_literal == 12.5);

	printf("passed!\n");
}

void SelectTest2() {
	printf("Test: SelectTest2... "); fflush(stdout);

	const char* sql = "SELECT * FROM (SELECT age+zipcode FROM table, table2);";
	Statement* stmt = SQLParser::parseSQLString(sql);
	ASSERT(stmt != NULL);
	ASSERT(stmt->type == eSelect);

	SelectStatement* select = (SelectStatement*) stmt;

	ASSERT(select->select_list->size() == 1);
	ASSERT(select->select_list->at(0)->type == eExprStar);

	ASSERT(select->from_table != NULL);
	ASSERT(select->from_table->type == eTableSelect);
	ASSERT(select->from_table->stmt != NULL);
	ASSERT(select->from_table->stmt->select_list->size() == 1);
	ASSERT(select->from_table->stmt->from_table->type == eTableCrossProduct);
	// ASSERT_STR(select->from_table->stmt->from_table->table_names->at(0), "table");
	// ASSERT_STR(select->from_table->stmt->from_table->table_names->at(1), "table2");

	printf("passed!\n");
}

uint parse_count = 0;
uint conflicts = 0;
void SelectTest3(bool print) {
	if (print) { printf("Test: SelectTest3... "); fflush(stdout); }

	const char* sql = "SELECT name, AVG(age) FROM table GROUP BY name";
	parse_count++;

	Statement* stmt = SQLParser::parseSQLString(sql);

	if (parse_count != 1) conflicts++;
	parse_count--;

	ASSERT(stmt != NULL);
	ASSERT(stmt->type == eSelect);

	SelectStatement* select = (SelectStatement*) stmt;

	ASSERT(select->select_list->size() == 2);

	ASSERT(select->select_list->at(0)->type == eExprColumnRef);
	ASSERT(select->select_list->at(1)->type == eExprFunctionRef);
	ASSERT_STR("name", select->select_list->at(0)->name);


	ASSERT(select->group_by != NULL);
	ASSERT(select->group_by->size() == 1);
	ASSERT_STR("name", select->group_by->at(0)->name);

	if (print) printf("passed!\n");
}


/** Multithread Test **/
void multithreadTest(int numberOfRuns, int id) {
	for (int n = 0; n < numberOfRuns; ++n) {
		SelectTest3(false);
	}
}
void ThreadSafeTest(uint numThreads, uint runsPerThread) {
	printf("Multithread-Test... ");
	conflicts = 0;
	std::thread* threads = new std::thread[numThreads];
	for (int n = 0; n < numThreads; ++n) {
		threads[n] = std::thread(multithreadTest, runsPerThread, n);
	}
	for (int n = 0; n < numThreads; ++n) {
		threads[n].join();
	}
	printf("there were %u concurrent parses... ", conflicts);
	printf("finished!\n");
}


/** Performance Test **/
void Benchmark1(uint numRuns) {
	printf("Benchmarking... ");

	clock_t start, end;
	const char* sql = "SELECT SUM(age), name, address FROM (SELECT age FROM (SELECT age FROM (SELECT age FROM table, table2))) WHERE income > 10 GROUP BY age;";

	start = clock();
	for (uint n = 0; n < numRuns; ++n) {
		Statement* stmt = SQLParser::parseSQLString(sql);
	}
	end = clock();
	
	long diff = end-start;
	printf("Total Time: %ld ticks (~%.4fms)\n", diff, 1000.0*diff/CLOCKS_PER_SEC);
	printf("Time per exec: ~%.2f ticks (~%.4fms)\n", (double)diff/numRuns, (1000.0*diff/numRuns)/CLOCKS_PER_SEC);
	printf("Benchmarking done!\n");
}


int main(int argc, char *argv[]) {

	printf("\n######################################\n");
	printf("## Running all tests...\n\n");

	SelectTest1();
	SelectTest2();
	SelectTest3(true);
	ThreadSafeTest(10, 1000);
	Benchmark1(10000);

	printf("\n## Finished running all tests...\n");
	printf("######################################\n");

	return 0;
}
