#!/bin/bash

# Has to be executed from the root of the repository.
# Usually invoked by `make test`.
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./

RET=0

bin/sql_tests -f "test/valid_queries.sql"
RET=$?

if [ $RET -eq 0 ]; then
	# Running memory leak checks.
	echo ""
	echo "Running memory leak checks..."
	valgrind --leak-check=full --error-exitcode=1 --log-fd=3 \
	  ./bin/sql_tests -f "test/valid_queries.sql" 3>&1 >/dev/null 2>/dev/null
	RET=$?
fi

exit $RET
