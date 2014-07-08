#Object-oriented Programming

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

##C++ Class
###Class and Object
- Class = Type
- Object = Variable

###Syntax
- Basic Class Declaration with Member Variables

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
- Default Member Functions
  - Default Constructor `point()`
  - Destructor `~point()`
  - Copy Constructor `point(point const&)`
  - Copy-assignment Operator `point& operator=(point const&)`
  - Move Constructor (C++11)
  - Move-assignment Operator (C++11)
