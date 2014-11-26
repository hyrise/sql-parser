#!/bin/sh
echo "Compiling..."
make clean -C src/ >/dev/null
make tests -C src/ >/dev/null
echo "Running tests:"
./bin/tests