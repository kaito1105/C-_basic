EXE=test-extreme
OBJS=client.o cs150check.o extreme.o

$(EXE) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXE)

test : $(EXE)
	./$(EXE) -t