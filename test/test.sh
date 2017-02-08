#!/bin/bash

# Has to be executed from the root of the repository.
# Usually invoked by `make test`.
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./

RET=0

# Running the tests.
bin/sql_grammar_test -f "test/lib/valid_queries.sql"
RET=$(($RET + $?))

bin/sql_tests
RET=$(($RET + $?))

# Running memory leak checks.
echo ""
echo "Running memory leak checks..."

valgrind --leak-check=full --error-exitcode=1 \
  ./bin/sql_grammar_test  -f "test/lib/valid_queries.sql" >> /dev/null
RET=$(($RET + $?))

valgrind --leak-check=full --error-exitcode=1 \
  ./bin/sql_tests  -f "test/lib/valid_queries.sql" >> /dev/null
RET=$(($RET + $?))

exit $RET
