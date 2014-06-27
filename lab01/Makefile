##
## Lab
##

# Compiler
CC        = gcc
CXX       = g++

# Flags
CXXFLAGS  = -Wall -O3 -std=c++11

# Executables
EXES      = hello.exe unblock.exe

# Targets
all: hello unblock

hello: hello.exe
	@echo "==>Build successfully -" $<
	@echo

unblock: unblock.exe
	@echo "==>Build successfully -" $<
	@echo

%.o: %.cpp
	@echo "==>Compiling" $<
	$(CXX)  $(CXXFLAGS)  -c  -o $@  $<
	@echo

hello.exe: hello.o
	@echo "==>Linking" $<
	$(CXX)  $(CXXFLAGS)  -o $@  $<
	@echo

unblock.exe: unblock.o block.o board.o
	@echo "==>Linking" unblock.o block.o board.o
	$(CXX)  $(CXXFLAGS)  -o $@  unblock.o block.o board.o
	@echo

clean:
	rm -f $(EXES)
	rm -f *.o
