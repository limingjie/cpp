#Hello World!

##Setup C++ Development Environment
 - MinGW (http://nuwen.net/mingw.html)
   - GCC
   - Make
 - Dependency Walker (http://www.dependencywalker.com/)
 - UPX (http://upx.sourceforge.net/)

##Say Hello
 - lab/hello.cpp
```c++
 #include <iostream>

 // Never using namespace globally
 // using namespace std;

 int main()
 {
     using namespace std;

     cout << "Hello World!\nPrint any key to continue..." << endl;
     cin.ignore();

     return 0;
 }
```
 - Compile & Link
   - `$ g++ -o hello.exe hello.cpp`

##More options of g++
 - Optimization
   - `-O1` `-O2` `-O3` `-Os`
 - Warning
   - `-Wall`
 - C++11
   - `-std=c++11`
 - Assembly
   - `-s`

##Compile & Link
 - Compile
 - Link
```
$ g++ -c -o unblock.o unblock.cpp
$ g++ -c -o block.o block.cpp
$ g++ -c -o board.o board.cpp
$ g++ -o unblock.exe unblock.o block.o board.o
```

##Further Optimize Executable Size
 - Optimization flags
   -O1 -O2 -O3 -Os
 - Discards symbols
   - `$ strip -s hello.exe`
 - UPX
   - `$ UPX -9 hello.exe`

##Header file
 - Micro
