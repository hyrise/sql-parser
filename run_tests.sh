#!/bin/sh
echo "Compiling..."
make clean -C src/ >/dev/null
make tests -C src/ >/dev/null
make grammar_test -C src/ >/dev/null
echo "Running tests:"
./bin/grammar_test -f "test/valid_queries.sql"
./bin/tests
