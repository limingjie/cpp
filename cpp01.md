#Hello World!

##Setup C++ Development Environment
 - MinGW (http://nuwen.net/mingw.html)
   - GCC
   - Make
 - Dependency Walker (http://www.dependencywalker.com/)
 - UPX (http://upx.sourceforge.net/)

##lab01: Say Hello
 - hello.cpp
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

##More Options of g++
 - Warning
   - `-Wall`
 - Assembly
   - `-s`
 - Optimization
   - `-O1` `-O2` `-O3` `-Os`
 - C++11
   - `-std=c++11`
 - Include Additional Path for head files
   - `-I` `-Ipath`
 - Include Additional Path for library
   - `-L` `-Lpath`
 - Link to library
   - `-l` `-lstatic`

##lab01: Complex Case
```
$ g++ -c -o unblock.o unblock.cpp
$ g++ -c -o block.o block.cpp
$ g++ -c -o board.o board.cpp
$ g++ -o unblock.exe unblock.o block.o board.o
```

##Compile & Link
 - Compile
 - Link

##Further Optimize Executable Size
 - Optimization flags
   - `-O1` `-O2` `-O3` `-Os`
 - Discards symbols
   - `$ strip -s hello.exe`
 - UPX
   - `$ UPX -9 hello.exe`

##Include Guard
```c++
#ifndef __BOARD_H__
#define __BOARD_H__

#include "block.h"

#endif // __BOARD_H__

```

##Deliver
- Debug build / Release build
- Dependencies
  - OS
  - Dynamic Libraries

