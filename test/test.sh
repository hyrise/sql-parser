#!/bin/bash

# has to be executed from the root of the repository
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./

bin/sql_grammar_test -f "test/lib/valid_queries.sql"
RET1=$?

bin/sql_tests
RET2=$?

if [[ $RET1 != 0 ]]; then exit $RET1; fi
if [[ $RET2 != 0 ]]; then exit $RET2; fi

exit 0
