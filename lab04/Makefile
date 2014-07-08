##
## Lab
##

# Compiler
CC        = gcc
CXX       = g++

# Flags
CXXFLAGS  = -Wall -O3 -std=c++11

# Executables
EXES      = legacy.exe template.exe quicksort.exe

# Targets
all: $(EXES)

%.exe: %.cpp
	@echo "==>Compiling & Linking" $<
	$(CXX)  $(CXXFLAGS)  -o $@  $<
	@echo

clean:
	rm -f $(EXES)
	rm -f *.o
