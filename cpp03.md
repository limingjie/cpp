#TBD

##Memory Layout
###Typical Memory Layout of Running Process

 | Memory Layout         |
 | :-------------------: |
 | High address          |
 | args & env var        |
 | stack                 |
 | &#124;                |
 | v                     |
 | un-used               |
 | ^                     |
 | &#124;                |
 | heap                  |
 | uninitialized data    |
 | initialized data      |
 | text                  |
 | Low address           |

### Sections
- Text segment - Code segment
- Initialized data segment - Data segment (global variables and static variables)
- Uninitialized data segment - bss (block started by symbol)
- Stack
- Heap

##Array and Pointer
##string
##iostream
