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
all: $(EXES)

hello: hello.exe
	@echo "hello build successfully."

unblock: unblock.exe
	@echo "unblock build successfully."

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
