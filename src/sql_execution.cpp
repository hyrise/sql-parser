
#include "SQLParser.h"
#include <stdio.h>
#include <string>

typedef int* Table;
Table executeSelect(SelectStatement* stmt);


int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "No SQL-Statement given!\n");
        return -1;
    }

    // Statement *stmt = NULL;

    for (int n = 1; n < argc; ++n) {
        char* sql = argv[n];

        printf("\nEvaluating Statement \"%s\"\n", sql);
        Statement* stmt = SQLParser::parseSQLString(sql);

        if (stmt == NULL) {
        	fprintf(stderr, "Parsing of \"%s\" failed!\n", sql);
        	continue;
        }

        if (stmt->type == eSelect) {
        	executeSelect((SelectStatement*)stmt);
        } else {
			fprintf(stderr, "Only Supporting Select Statements!\n");
		}
    }

	return 0;
}


// Dummy Database
int NUM_COLUMNS = 4;
int NUM_ROWS = 100;
int TABLE[] = {40,59,8,7,74,28,7,10,15,17,2,20,15,82,41,20,25,72,89,67,74,0,70,31,67,75,74,30,0,45,82,6,9,35,73,83,13,46,39,45,28,34,11,41,20,30,72,78,51,36,32,71,16,70,39,88,59,25,0,68,73,54,0,4,7,35,19,4,6,23,30,25,51,31,52,14,65,95,95,85,94,90,65,35,51,64,68,44,80,7,78,23,99,30,17,72,8,22,40,47,15,30,9,51,77,9,67,94,15,69,49,21,51,99,91,36,5,91,69,55,36,36,74,63,1,87,24,67,51,52,21,10,60,37,6,43,53,4,25,35,19,4,61,61,16,83,9,69,32,46,36,74,96,47,90,27,48,48,79,95,55,64,48,40,42,77,33,18,36,80,23,24,1,75,2,63,9,23,17,99,82,56,9,92,17,94,76,35,28,86,61,58,38,61,16,4,69,61,51,33,53,23,6,48,81,62,46,51,61,34,97,100,53,7,41,61,45,15,46,91,85,29,73,75,39,24,99,38,0,32,68,23,76,25,62,40,58,67,85,33,18,51,70,45,27,62,30,89,85,53,87,91,61,37,33,69,2,2,9,24,23,55,45,76,0,59,72,12,75,5,10,52,59,32,34,24,86,72,97,2,5,4,0,70,6,98,29,22,11,69,74,90,19,12,68,7,55,22,70,83,20,72,88,61,46,38,98,4,15,63,14,42,16,94,100,33,58,65,53,56,26,94,63,80,88,22,49,20,57,81,89,30,82,83,62,87,21,91,36,98,78,53,24,69,60,31,24,71,9,95,94,30,42,35,97,56,51,14,31,0,73,80,11,83,77,9,51,93,37,16,41,99,24,93,100,12,23,59,61,36,70,69,100,4,14,73,47,81,54,44,12,34,14,55,95,19,79,95,77,69};

int getValue(int col, int row) {
	return TABLE[row*NUM_COLUMNS+col];
}
int getValue(std::string col_name, int row) {
	if (col_name.compare("col1") == 0) return getValue(0, row);
	if (col_name.compare("col2") == 0) return getValue(1, row);
	if (col_name.compare("col3") == 0) return getValue(2, row);
	if (col_name.compare("col4") == 0) return getValue(3, row);
    return 0;
}



Table executeGroupBySelect(SelectStatement* stmt, Table source) {
	fprintf(stderr, "GROUP BY not yet implemented!\n");
	return NULL;
}


Table executeSelect(SelectStatement* stmt) {

	// Step 1:
	// Determine source table
	TableRef* from_table = stmt->from_table;
	Table source;

	if (from_table->type == eTableSelect) {
		// Nested Select Statements
		source = executeSelect(from_table->stmt);

	} else if (from_table->type == eTableName) {
		if (from_table->table_names->size() == 1) {
			if (std::string(from_table->table_names->at(0)).compare("table") == 0) {
				source = TABLE;
			} else {
				fprintf(stderr, "Couldn't find table!\n");
				return NULL;
			}
		} else {
			// Cross product of table
			fprintf(stderr, "We're not supporting cross product of tables atm.\n");
			return NULL;
		}
	}

	// Step 2
	// Check if group by
	if (stmt->group_by != NULL) {
		return executeGroupBySelect(stmt, source);
	}

	return NULL;
}
