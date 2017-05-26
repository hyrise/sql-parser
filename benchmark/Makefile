
SRC = ./
CPP  = $(shell find $(SRC) -name '*.cpp')

CFLAGS = -std=c++11 -lstdc++ -Wall -I../src/ -L../ -O3

all: parser_benchmark

run: parser_benchmark
	@export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:../ &&\
		./parser_benchmark

parser_benchmark: $(CPP)
	$(CXX) $(CFLAGS) $(CPP) -o parser_benchmark -lbenchmark -lpthread -lsqlparser

clean:
	rm -f parser_benchmark
