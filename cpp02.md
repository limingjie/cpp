# Basics

## Types
### Primitive Built-in Types
- Integer types (signed / unsigned)

|Signed Type|Unsigned Type      |Size             |
|:----------|:------------------|:----------------|
|char       |unsigned char      |at least 8 bits  |
|short      |unsigned short     |at least 16 bits |
|int        |unsigned int       |at least 16 bits |
|long       |unsigned long      |at least 32 bits |
|long long  |unsigned long long |at least 64 bits |

- Floating-point types (IEEE 754)

|Type        |Range                       |Precision             |Size         |
|:-----------|:---------------------------|:---------------------|:------------|
|float       |±1.18×10−38 to ±3.4×1038    | ~ 7 decimal digits   | 32 bits     |
|double      |±2.23×10−308 to ±1.80×10308 | ~ 15 decimal digits  | 64 bits     |
|long double | -                          | -                    | 80-128 bits |

- Character types
  - char
  - wchar_t
  - char16_t
  - char32_t
- Boolean type
  - bool
- Void type
  - void

### Lab02: type.cpp

### Type Common Mistakes
- Infinite loop
```c++
for (size_t i = 100; i >= 0; --i)
```
- Overflow
```c++
char         a = 1024;
int          i = UINT_MAX;
unsigned int u = -16;
```
- Precision
  - floating-point types
  - type cast

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
  - Return first, increment/decrement first?
  - Undefined behavior
    - `x = y++ + y++ + y++;`
    - `x = ++y + ++y + ++y;`
- Logical or Bitwise

## Statements
- Statement
```c++
int i = 0;
std::cout << "i = " << i << std::endl;
```
- Compound statement
```c++
{
    std::string s = "foo bar!";
    std::cout << s << std::endl;
}
```

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
// statement2 is not in if statement
if (condition)
    statement1;
    statement2; // always be executed
// put statements in a block
if (condition)
{
    statement1;
    statement2;
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
