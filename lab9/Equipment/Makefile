CXX = g++
CXXFLAGS = -Wall -std=c++17
SOURCES = $(wildcard *.cpp)
EXECUTABLE = test

all: $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)
