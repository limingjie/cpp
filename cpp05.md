#Object-oriented Programming
The most important part of this session is to understand the concept of Class and Object.

##The C Implementation of Stack

```c
// Declare Data
typedef struct
{
    int *data;
    int size;
    int top;
} stack;

// Declare Functions
void stack_init(stack *s, int size);
void stack_destory(stack *s);
void stack_push(stack *s, int element);
int  stack_pop(stack *s);
int  stack_is_full(stack *s);
int  stack_is_empty(stack *s);

// Define 2 stacks
stack s0, s1;

// Use stack functions
stack_init(&s0, 10);
stack_init(&s1, 20);
stack_push(&s0, 1);
stack_push(&s0, 2);
stack_push(&s0, 3);
stack_push(&s1, 1);
stack_push(&s1, 2);
stack_push(&s1, 3);
```

- Separate of data and code

##C++ Class

###Class and Object
- Class = Type
- Object = Variable

###Syntax
- Basic Class Declaration with Data Members

    ```c++
    // In C++, the members of a class defined with struct keyword
    // are public by default.
    struct point
    {
        int x;
        int y;
    };
    ```

    ```c++
    class point
    {
    public :
        int x;
        int y;
    };

    point p0;
    p0.x = 10;
    p0.y = 20;

    int x = p0.x;
    int y = p0.y;
    ```

- Member Functions

    ```c++
    class point
    {
        int x; // private
        int y; // private
    public :
        point(); // Constructor
        point(int x, int y); // Overloaded Constructor
        void move(int x, int y);
    };

    point::point()
    {
        x = 0;
        y = 0;
    }

    point::point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }

    void point::move(int x, int y)
    {
        this.x += x;
        this.y += y;
    }
    ```

- The `this` keyword
  - Refer to object itself.

- Default Member Functions
  - Default Constructor `point()`
  - Destructor `~point()`
  - Copy Constructor `point(point const&)`
  - Copy-assignment Operator `point& operator=(point const&)`
  - Move Constructor (C++11)
  - Move-assignment Operator (C++11)

- Operator Overload
http://stackoverflow.com/questions/4421706/operator-overloading
  - arithmetic operators: + - * / % and += -= *= /= %= (all binary infix); + - (unary prefix); ++ -- (unary prefix and postfix)
  - bit manipulation: & | ^ << >> and &= |= ^= <<= >>= (all binary infix); ~ (unary prefix)
  - boolean algebra: == != < > <= >= || && (all binary infix); ! (unary prefix)
  - memory management: new new[] delete delete[]
  - implicit conversion operators
  - miscellany: = [] -> , (all binary infix); * & (all unary prefix) () (function call, n-ary infix)

###new & delete operators
- new - allocate memory and call constructor
- delete - call destructor and return memory
- new[] & delete[]

###Inheritance

```c++
class A
{
    int x;
};

class B : public A
{
    int y;
};
```

- Subclass & Superclass (Parent/Child, Base/Derived)
- Multi-inheritance
- Virtual Inheritance

http://en.wikipedia.org/wiki/Virtual_inheritance

###Object-oriented Programming Features
- Encapsulation enforces modularity
  - Encapsulation refers to the creation of self-contained modules that bind processing functions to the data. These user-defined data types are called "classes," and one instance of a class is an "object." For example, in a payroll system, a class could be Manager, and Pat and Jan could be two instances (two objects) of the Manager class. Encapsulation ensures good code modularity, which keeps routines separate and less prone to conflict with each other.
- Inheritance passes "knowledge" down
  - Classes are created in hierarchies, and inheritance lets the structure and methods in one class pass down the hierarchy. That means less programming is required when adding functions to complex systems. If a step is added at the bottom of a hierarchy, only the processing and data associated with that unique step must be added. Everything else above that step is inherited. The ability to reuse existing objects is considered a major advantage of object technology.
- Polymorphism takes any shape
  - Object-oriented programming lets programmers create procedures for objects whose exact type is not known until runtime. For example, a screen cursor may change its shape from an arrow to a line depending on the program mode. The routine to move the cursor on screen in response to mouse movement can be written for "cursor," and polymorphism lets that cursor take simulating system behavior.

##Patterns
- Design Patterns vs AntiPatterns vs Refactoring

http://sourcemaking.com/
