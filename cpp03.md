#Basics II

##Memory Layout
###Typical Memory Layout of Running Process
- Memory Layout

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

###Stack
- LIFO
- Call Stack

###Heap
- Dynamic memory allocation
- External Fragmentation

![Image](https://github.com/limingjie/cpp/blob/master/images/ExternalFragmentation.png?raw=true)

##Arrays
###Concept
- An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.
  - Elements
  - Same type
  - Index

###Defining Arrays
- Constant expressions
  - Integral literal constant
  - Enumerators `enum Shapes {circle = 0, rectangle = 1, triange = 2};`
  - const objects of interal `const int bar = 50;`
- Examples

    ```c++
    char str[128];         // const
    const int size = 256;
    int identities[size];  // const
    int count = 1024;
    double rates[count];   // error
    ```

###Initializing Arrays
- Elements of an array of built-in type defined outside the body of a function are initialized to zero.
- Elements of an array of built-in type defined inside of body of a function are uninitialized.
- Class type are initialized by the default constructor regardless of where the array is defined.

    ```c++
    int ia[10] = {0, 1, 2, 3, 4, 5};
    int ib[] = {0, 1, 2, 3};
    char ca1[] = {'f', 'o', 'o'};
    char ca2[] = {'f', 'o', 'o', '\0'};
    char ca3[] = "bar";
    ```

###Using Arrays
- Access array using subscript operator.

    ```c++
    ca1[0] = 'z';
    ca2[0] = ca1[0];
    ```

###Memory Layout of Arrays
- `char foo[12] = "Hello world";`

 | Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 |
 |:-----:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:--:|:--:|
 | foo   | H | e | l | l | o |   | w | o | r | l | d  | \0 |

###Multidimentioned Arrays
- Sample

    ```c++
    int ia[3][5] = {      // 3x5 array
        {0, 1, 2, 3, 4},  // ia[0]
        {5, 6, 7, 8, 9},  // ia[1]
        {10, 11}          // ia[2]
    };

    ia[2][2] = 12;
    ia[2][3] = ia[2][2] * 2;
    ```

### Arrays Common Mistakes
- Index starts from 0
- The last element of `int a[size];` is `a[size - 1]`
- Do not define array with non-const variable
- Random value of uninitialized array

##Pointers
###Concept
- Reference a location in memory
- Type

###Syntax
- Declaration `T *var;`

###Address-of Operator `&`
- The unary address-of operator (&) takes the address of its operand.

###Indirection Operator `*`
- The unary indirection operator (*) dereferences a pointer; that is, it converts a pointer value to an l-value.

###Address of Array

###Example

```c++
int n = 10;
int *pn = &n;
int **ppn = &pn;

cout << "Value of n:\n"
     << "direct value: " << n << endl
     << "indirect value: " << *pn << endl
     << "doubly indirect value: " << **ppn << endl
     << "address of n: " << pn << endl
     << "address of n via indirection: " << *ppn << endl
```

###Constness

 | Syntax          | meaning                             |
 | :-------------- | :---------------------------------- |
 | const T *       | pointer to constant object          |
 | T const *       | pointer to constant object          |
 | T * const       | constant pointer to object          |
 | const T * const | constant pointer to constant object |

###lab03: array.cpp, pointer.cpp

##Reference
###lvalue Reference

```c++
T &ref = object;
T &ref (object);
T &ref {object};
```

###rvalue Reference

```c++
T &&ref = object;
T &&ref (object);
T &&ref {object};
```

###Examples

```c++
int n = 10;
int &rn = n; // refer to lvalue
int &re = 1; // error
int &&r = 1; // refer to rvalue
```

##Functions
###Math Functions
![Image](https://github.com/limingjie/cpp/blob/master/images/MathFunction.png?raw=true)

###Declaration

```c++
T f([argument list]) [const]
{
    statements;
}
```

###Default arguments

```c++
int person(string name, string title = "Mr.");
```

###Function Overload

```c++
int func(int a, int b, int c);
int func(double a, double b, double c);
int func(int a, double b);
int func(string s);
```

###Pass Arguments
- Examples

    ```c++
    swap(a, b);    // Will this work or not?
    swap(&a, &b);  // Will this work or not?
    ```

- Pass by value
  - `void swap(int a, int b);`
- Pass by reference
  - `void swap(int &a, int &b);`
- Pass address
  - `void swap(int *a, int *b);`

###lab03: function.cpp

##string

http://en.cppreference.com/w/cpp/string

##iostream

http://en.cppreference.com/w/cpp/io/basic_iostream
