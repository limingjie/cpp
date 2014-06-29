#TBD

##Memory Layout
###Typical Memory Layout of Running Process

- Layout

 |              | Memory Layout              |                                       |
 | :----------- | :------------------------: | :------------------------------------ |
 | High address | Args & Env var             |                                       |
 |              | Stack                      |                                       |
 |              | &#124;                     |                                       |
 |              | v                          |                                       |
 |              | un-used                    |                                       |
 |              | ^                          |                                       |
 |              | &#124;                     |                                       |
 |              | Heap                       |                                       |
 |              | Uninitialized data segment | bss (block started by symbol)         |
 |              | Initialized data segment   | global variables and static variables |
 | Low address  | Text segment               | Code segment                          |

- Stack
  - LIFO
  - Call Stack
- Heap
  - Dynamic memory allocation
  - External Fragmentation
![Image](https://github.com/limingjie/cpp/blob/master/images/ExternalFragmentation.png?raw=true)

##Array and Pointer
##string
##iostream
