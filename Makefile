SRC = $(wildcard src/*.cpp)
EXE = $(patsubst %.cpp,%, $(SRC))

CXXFLAGS=-std=c++11 -O3 -I include

all: $(EXE)
	@echo $(SRC)

%: %.cpp
	mkdir -p bin
	$(CXX) $(CXXFLAGS) -o $(patsubst src/%, bin/%, $@) $<

clean:
	rm -r bin