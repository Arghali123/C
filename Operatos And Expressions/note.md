# Operators
An operator is a symbol or function that indicates an operation to be performed on one or more operands in programming and mathematics. Operators help manipulate data and variables to produce a desired result, such as addition, subtraction, comparison, or logical evaluation.

## Operator Classification
- According to the Number of Operands
  - Unary Operators:Operate on a single operand.Examples: + (unary plus), - (unary minus), ++ (increment), -- (decrement).
  - Ternary (Conditional) Operator:A compact conditional expression.Syntax: condition ? expression_if_true : expression_if_false.
  - Binary Operator:A binary operator is an operator that operates on two operands and performs operations such as arithmetic, comparison, or logical operations. These operators require two values or variables to function, one on the left side and one on the right side of the operator.for eg:(a + b),(e.g., a % b).

- According to Utility and Action
  - Arithmetic Operators:Perform basic mathematical operations.
   Examples: + (addition), - (subtraction), * (multiplication), / (division), % (modulus).
  - Relational (Comparison) Operators:Compare values and return a boolean result (true or false).Examples: == (equal to), != (not equal to), > (greater than), < (less than), >= (greater than or equal to), <= (less than or equal to).
  - Logical Operators:Used to combine multiple conditions or invert a condition.Examples: && (logical AND), || (logical OR), ! (logical NOT).
  - Bitwise Operators:Perform operations on binary representations of numbers.Examples: & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift).
  - Assignment Operators:Assign values to variables.Examples: = (assign), += (add and assign), -= (subtract and assign), *= (multiply and assign), /= (divide and assign).
  - Special Operators:Unique to certain languages, like pointer and reference operators in C/C++ (*, &), or the in and is operators in Python.
  - Increment and Decrement Operators:eg-k++,++k,etc.
  - Comma Operaor:The comma operator allows multiple expressions to be evaluated in a single statement. When used, the expressions are evaluated from left to right, and the result of the entire expression is the result of the rightmost expression.Syntax:int a = (1, 2, 3); // a will be assigned the value 3, as it is the last expression.
  - sizeof Operator:The sizeof operator returns the size (in bytes) of a variable or data type. This is determined at compile time, and it’s especially useful for memory management and ensuring portability across different architectures.syntax:sizeof(type).
  ```
   int a;
   printf("%zu\n", sizeof(a));          // Size of variable `a`
   printf("%zu\n", sizeof(int));         // Size of `int` data type
   printf("%zu\n", sizeof(double));      // Size  of `double` data type
  ```

# Precedence And Associativity Of Oprators
Precedence in C refers to the order in which operators are evaluated in an expression. Operators with higher precedence are evaluated before operators with lower precedence. If operators have the same precedence, the associativity rule determines the order of evaluation.example
```
int result = 10 + 2 * 5;

```
1. Here, the * (multiplication) operator has a higher precedence than the + (addition) operator.
1. Therefore, 2 * 5 is evaluated first, yielding 10.
1. Then 10 + 10 is evaluated, resulting in 20.
1. The final result stored in result is 20.

## Diagram of the operators with it's Precedence and Associativity
![Precedence and Asscociativity](Photos/Precedence.png)

# Type Conversions in Expressions
1. Implicit Type Conversion (Automatic Conversion)
Also known as type promotion, implicit conversion occurs automatically in expressions when different data types are combined. C promotes the data types to a common type according to specific rules to prevent data loss.
Rules for Implicit Type Conversion:
   1. Integer Promotion: Smaller integer types (e.g., char, short) are promoted to int if they are used in an expression with int.
   1. Promotion to Larger Type: If an operand in an expression is of a larger data type (e.g., float, double), the other operand is converted to that larger type to ensure compatibility.
   1. Hierarchy of Conversion:C follows a specific hierarchy for conversion: int < unsigned int < long < unsigned long < float < double < long double.
   ```
   int a = 5;
   float b = 4.2;
   float result = a + b; // `a` is promotedto  `float` before addition.
   ```
   Here, a is converted to 4.0 (float), and the result is calculated as 4.0 + 4.2 = 9.2  
   
1.  Explicit Type Conversion (Type Casting)
Explicit conversion, also known as type casting, is when the programmer manually converts a variable to a specific type using the syntax (type) expression.Syntax:(type) expression;
```
int a = 5;
int b = 2;
float result = (float) a / b; // `a` is explicitly converted to `float`.

```
In this example:

- Without casting, a / b would result in 2 (integer division).
- By casting a to float, the result of 5.0 / 2 becomes 2.5 (floating-point division).




