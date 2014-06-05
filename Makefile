SRC = $(wildcard src/*.cpp)
EXE = $(patsubst %.cpp,%, $(SRC))

CXXFLAGS=-std=c++11

all: $(EXE)
	@echo $(SRC)

%: %.cpp
	mkdir -p bin
	$(CXX) $(CXXFLAGS) -o $(patsubst src/%, bin/%, $@) $<

clean:
	rm $(EXE)