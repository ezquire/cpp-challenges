.SUFFIXES: .o .cpp

CXXFLAGS = -ggdb -Wall -Werror -Wpedantic -std=c++11
GCC = g++

srcs = $(wildcard *.cpp)
objs = $(srcs:.cpp=.o)

all: report

report: $(objs)
	$(GCC) $(CXXFLAGS) -o $@ $^

clean: 
	rm -rf *.o report

.PHONY: all clean