SRC = $(wildcard src/*.cpp)
EXE = $(patsubst %.c,%,$(SRC))

all: $(EXE)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<
