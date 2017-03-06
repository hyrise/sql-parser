# Benchmark

This directory contains the scripts to execute benchmarks of the parser. We use [Google Benchmark](https://github.com/google/benchmark) to define and run benchmarks.

## Install Google Benchmark

```bash
cmake -DCMAKE_BUILD_TYPE=Release

make

make install
```

## Run the benchmarks

Build the libary from the parent directory and then execute:

```bash
make run

# or manually...

make
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../
./parser_benchmark
```

... or run this from the parent directory:

```bash
# From root of Git repository.
make run_benchmark
```