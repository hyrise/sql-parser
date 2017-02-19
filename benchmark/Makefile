
CFLAGS = -std=c++11 -lstdc++ -Wall -I../src/ -L../
LIB_PATH = ${LD_LIBRARY_PATH}:../

all: parser_benchmark
	@export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:../ && ./parser_benchmark

parser_benchmark: parser_benchmark.cpp
	$(CXX) $(CFLAGS) parser_benchmark.cpp -o parser_benchmark -lbenchmark -lpthread -lsqlparser


clean:
	rm -f parser_benchmark