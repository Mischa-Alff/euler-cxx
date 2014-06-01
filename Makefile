SRC = $(wildcard src/*.cpp)
EXE = $(patsubst %.cpp,%,$(SRC))

CXXFLAGS=-std=c++11

all: $(EXE)
	@echo $(SRC)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm $(EXE)