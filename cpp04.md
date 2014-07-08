#Generic Programming

##Concept
Generic programming is a style of computer programming in which algorithms are written in terms of to-be-specified-later types that are then instantiated when needed for specific types provided as parameters.

##Why Generic Programming
- lab04 legacy.cpp
- lab04 template.cpp

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
    struct IntArray
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
No code is generated if source only contains template definitions. Actual function is generated only after template instantiated.
- Explicit Instantiation
- Implicit Instantiation

    ```c++
    template <typename T>
    void swapAny(T &a, T &b)
    {
        T t = a;
        a = b;
        b = t;
    }

    // Explicit instantiation
    template void swapAny<int>(int &a, int &b);
    template void swapAny<string>(string &a, string &b);
    ```

###Template Argument Deduction
- Compiler will attempt to deduct missing template arguments.

###lab04 template.cpp
- Try Implicit Instantiation
- Try Argument Deduction

###lab04 quicksort.cpp
- Pseudo-random number generation

##Class Templates
n/a

##C++ Generic Programming
###Containers
http://en.cppreference.com/w/cpp/container
- Sequence containers
  - array
  - vector
  - deque (double ended queue)
  - forward_list (singly linked list)
  - list (doubly linked list)
- Associative containers
  - set/multiset
  - map/multimap
- Unordered associative containers
  - unordered_set/unordered_multiset
  - unordered_map/unordered_multimap
- Container adaptors
  - stack
  - queue
  - priority_queue

###Iterators
http://en.cppreference.com/w/cpp/iterator
- InputIterator
- OutputIterator
- ForwardIterator
- BidirectionalIterator
- RandomAccessIterator

###Utilities
http://en.cppreference.com/w/cpp/utility
- bitset
- pair
- tuple
- swap
- std::rel_ops::operator!=,>,<=,>=

###Algorithms
http://en.cppreference.com/w/cpp/algorithm
- `<algorithm>`
- `<numeric>`
- `<cstdlib>`

###Another look at iostream and string
- http://en.cppreference.com/w/cpp/io
- http://en.cppreference.com/w/cpp/string

##Effective STL
50 Specific Ways to Improve Your Use of the Standard Template Library
