#Generic Programming

##Concept
generic programming is a style of computer programming in which algorithms are written in terms of to-be-specified-later types that are then instantiated when needed for specific types provided as parameters.

##Why Generic Programming
###lab04 legacy.cpp
###lab04 template.cpp

##C++ Templates
###Syntax

```c++
template <parameter-list> declaration
```

###parameter-list
 - Non-type template parameter
    - `[type name [= default]]`
    - Example

    ```c++
    // non-type
    template<int N>
    class IntArray
    {
        int a[N];
    };

    // use non-type
    IntArray<10> a1;
    IntArray<20> a2;
    ```

 - Type template parameter
    - `typename|class [name [= default]]`
 - Template template parameter
    - `template <parameter-list> class [name [= default]]`

##Function Templates
###Function Template Instantiation
- No code is generated if source only contains template definitions. Actual function is generated only after template instantiated.
- Explicit Instantiation
- Implicit Instantiation

###Template Argument Deduction
- Compiler will attempt to deduct missing template arguments.

###lab04 template.cpp
- Try Explicit Instantiation
- Try Argument Deduction

###lab04 quicksort.cpp

##Class Templates

##STL
http://en.cppreference.com/w/cpp/container
