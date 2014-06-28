# Basics

## Basic Program Structure
### hello.cpp

```c++
#include <iostream>

// Never using namespace globally
// using namespace std;

int main()
{
    using namespace std;

    cout << "Hello World!\nPrint Enter to continue..." << endl;
    cin.ignore();

    return 0;
}
```

### Header File & Namespace
- What is namespace?
- The disadvantage of using namespace globally

### Entry Point & Return Value
- Standard `int main(int argc, char **argv)`
- Check return value `$ echo $?`

### Statement
- Statements

    ```c++
    int i = 0;
    std::cout << "i = " << i << std::endl;
    ```
- Compound statement / Block

    ```c++
    {
        std::string s = "foo bar!";
        std::cout << s << std::endl;
    }
    ```

## Tokens
### Keywords
- http://en.cppreference.com/w/cpp/keyword

### Identifiers
- Names of functions, variables and classes
- Naming rule
  - Case Sensitive

        ```c++
        int SingingInTheRain;
        int SingIngInTheRain;
        ```

  - Only allow alphabetic characters, digits and underscore
  - Leading digit is not allowed
  - Keywords is not allowed

## Data Types
### Primitive Built-in Types
- Integer types (signed / unsigned)

  | Signed Type | Unsigned Type       | Size              |
  | :---------- | :------------------ | :---------------- |
  | char        | unsigned char       | at least 8 bits   |
  | short       | unsigned short      | at least 16 bits  |
  | int         | unsigned int        | at least 16 bits  |
  | long        | unsigned long       | at least 32 bits  |
  | long long   | unsigned long long  | at least 64 bits  |

- Floating-point types (IEEE 754)

  | Type         | Range                                            | Precision            | Size         |
  | :----------- | :----------------------------                    | :------------------- | :----------- |
  | float        | ±1.18×10<sup>38</sup> to ±3.4×10<sup>38</sup>    | ~ 7 decimal digits   | 32 bits      |
  | double       | ±2.23×10<sup>308</sup> to ±1.80×10<sup>308</sup> | ~ 15 decimal digits  | 64 bits      |
  | long double  | -                                                | -                    | 80-128 bits  |

- Character types
  - char
  - wchar_t
  - char16_t
  - char32_t
- Boolean type
  - bool
- Void type
  - void

### lab02: type.cpp

### Type Common Mistakes
- Infinite loop

    ```c++
    for (size_t i = 100; i >= 0; --i)
    ```

- Overflow
  - Assigned value out of range

        ```c++
        char         a = 1024;
        int          i = UINT_MAX;
        unsigned int u = -16;
        ```

  - Caution on Calculation
    - `a * b / c` or `a / c * b`
    - `a + b - c` or `a - c + b`
- Precision
  - floating-point types
  - type cast

## Constants
### Numerals
- Suffixes

    ```c++
    10ull  // unsigned long long
    10.0f  // float
    10.0l  // long double
    ```

 | Suffix      | Type modifier    |
 | :---------- | :--------------- |
 | u or U      | unsigned         |
 | l or L      | long             |
 | ll or LL    | long long        |
 | f or F      | float            |
 | l or L      | long double      |

- Decimal / Octal / Hexadecimal

    ```c++
    32     // Decimal
    040    // Octal
    0x20   // Hexadecimal
    ```

### Character and string literals
- Escape Code

 | Escape code   | Description             |
 | :------------ | :---------------------- |
 | \n            | newline                 |
 | \r            | carriage return         |
 | \t            | tab                     |
 | \v            | vertical tab            |
 | \b            | backspace               |
 | \f            | form feed (page feed)   |
 | \a            | alert (beep)            |
 | \'            | single quote (')        |
 | \"            | double quote (")        |
 | \?            | question mark (?)       |
 | \\            | backslash (\)           |

- Character
  - `'a'` `'A'` `'1'` `'\t'`
- String literals

    ```c++
    char *foo = "Hello World!";
    char *bar = "Hello\tWorld!\n";
    ```
- Multi-line string literals

    ```c++
    string str = "This is a very very long sentence, "
                 "which is not long enough.";
    ```

- Null-terminated string
  - An extra char for '\0'

### lab02: constant.cpp

### Constants Common Mistakes
- Modify C string constants

    ```c++
    char *str = "Singin' in the Rain";
    str[6] = 'g';
    ```

- Forget escape code

    ```c++
    string path = "c:\Windows\System32";   // Wrong!
    string path = "c:\\Windows\\System32"; // Correct!
    ```

- Forget terminate char

    ```c++
    char a[4] = "Good";  // Not enough space
    char b[5] = "Good";
    b[4] = 'x';
    ```

## Variables
- Concept
  - Named storage in memory
  - Specific type
- lvalue and rvalue
  - lvalue - may appear on either side of an assignment

        ```c++
        double price = 0;
        price = price * 0.9;
        ```

  - rvalue - may appear on right but not left-hand side of an assignment
    - `0 = 1;`
- Initialize

    ```c++
    int value(10); // direct initialization
    int value = 10; // copy initialization
    ```

- Scope
  - global scope
  - local scope
  - statement scope

### lab02: scope.cpp

## Operators
### Arithmetic operators
- Unary arithmetic operators
  - Plus `+x`
  - Minus `-x`
- Binary arithmetic operators
  - Addition `x + y`
  - Subtraction `x - y`
  - Multiplication `x * y`
  - Division `x / y`
  - Modulus `x % y`
- Arithmetic assignment operators
  - Assignment `x = y`
  - Addition Assignment `x += y`
  - Subtraction Assignment `x -= y`
  - Multiplication Assignment `x *= y`
  - Division Assignment `x /= y`
  - Modulus  Assignment `x %= y`

### Increment/decrement operators
- Prefix
  - Increment `++x`
  - Decrement `--x`
- Postfix
  - Increment `x++`
  - Decrement `x--`

### Logical Operators
- NOT `!`
- AND `&&`
- OR  `||`

### Bitwise Operators
- NOT `~`
- AND `&` / Assignment `&=`
- OR  `|` / Assignment `|=`
- XOR `^` / Assignment `^=`

### Relational Operators
- `x > y`
- `x >= y`
- `x < y`
- `x <= y`
- `x == y`
- `x != y`

### Ternary Conditional Operator
- `(condition) ? (value if true) : (value if false)`

### Comma Operator
- http://en.wikipedia.org/wiki/Comma_operator

### Operator Precedence
- http://en.cppreference.com/w/cpp/language/operator_precedence

### Operator Common Mistakes
- Precedence
  http://en.cppreference.com/w/cpp/language/operator_precedence
- Divide by 0
- Division with negative numbers (round towards 0 or not)
  - `-5 / 2 = -2 or -3`
- Modulus with negative numbers
  - `-5 % 2 = -1 or 1`
- Type cast
  - `100 / 3`
  - `100 / 3.0`
- Side effect of increment/decrement
  - A deeper look at x++

        ```c++
        y = x;
        x = x + 1;
        return y;
        ```
  - Undefined behavior

        ```c++
        x = y++ + y++ + y++;
        x = ++y + ++y + ++y;
        ```

- Logical or Bitwise

## Flow Control
### Statements
- Conditional Branches
  - if-else
  - switch-case
- Loops
  - for
  - while
  - do-while
- Jumps
  - goto :no_entry_sign:
  - break
  - continue

### Flow Control Common Mistakes
- Statement not statements

    ```c++
    // statement 2 is not in if statement
    if (condition)
        statement 1;
        statement 2; // always be executed
    // put statements in a block
    if (condition)
    {
        statement 1;
        statement 2;
    }
    ```

- Extra semicolon

    ```c++
    for (i = 0; i < 100; i++);
    {
        std::cout << i << std::endl;
    }
    ```

- Infinite loop
- switch-case fall through

### lab: Write a program to print all command line arguments

```
$ argument.exe hello world
arg[0] = ?
...
arg[n] = ?
```
