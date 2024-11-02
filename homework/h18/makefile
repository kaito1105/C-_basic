EXE = h18
CXX = @g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) -L./ -l$(LIBS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

lint:
	clang++ --analyze -Xanalyzer -analyzer-output=text $(EXE).cpp

debug: $(EXE)
	debug150 ./$(EXE)

run: $(EXE)
	./$(EXE)

test: $(EXE)
	./$(EXE) -t ; true

submit: $(EXE)
	@./$(EXE) -t 1> /dev/null 2> results.txt; true
	@curl `cat /workspaces/$(RepositoryName)/.submit.txt``tail -n 1 results.txt` https://cs170-console.appspot.com/update ; true
	@rm -rf errors.txt 2> /dev/null ; true
