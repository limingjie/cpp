#TBD

##Memory Layout
- Typical Memory Layout of Running Process

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

##Array
- An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.
  - Elements
  - Same type
  - Index
- Define
  - Constant expression
    - Integral literal constant
    - Enumerators
    - const objects of interal `const int bar = 50;`
  - Define Array

        ```c++
        char str[128];         // const
        const int size = 256;
        int identities[size];  // const
        int count = 1024;
        double rates[count];   // error
        ```

- Initialize Array
  - Elements of an array of built-in type defined outside the body of a function are initialized to zero.
  - Elements of an array of built-in type defined inside of body of a function are uninitialized.
  - Class type are initialized by the default constructor regardless of where the array is defined.

    ```c++
    int a[10] = {0, 1, 2, 3, 4, 5};
    int b[] = {0, 1, 2, 3};
    char ca1[] = {'f', 'o', 'o'};
    char ca2[] = {'f', 'o', 'o', '\0'};
    char ca3[] = "bar";
    ```

- Memory Layout of Array

  - `char foo[12] = "Hello world";`

 | Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 |
 |:------|:--|:--|:--|:--|:--|:--|:--|:--|:--|:--|:---|:---|
 | foo   | H | e | l | l | o |   | w | o | r | l | d  | \0 |

##Pointer

##string
##iostream
