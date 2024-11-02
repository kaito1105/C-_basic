EXE = arrays
CXX = @g++
CXXFLAGS = -std=c++17 -pedantic -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -Wno-unused-parameter -Wno-unused-variable -Wshadow
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

lint:
	clang++ --analyze -Xanalyzer -analyzer-output=text $(EXE).cpp

run: $(EXE)
	./$(EXE)

debug: $(EXE)
	debug150 ./$(EXE)
