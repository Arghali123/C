# Introduction
A user-defined function in C is a block of code created by the programmer to perform a specific task. It is a way to organize and reuse code. Instead of writing the same code multiple times, a function allows you to encapsulate(to express the most important parts of the sth in a few words,a small space or a single object) the code and call it whenever needed. Functions help break down large programs into smaller, more manageable pieces, making the code cleaner, more modular, and easier to maintain.

Here's a simple structure of a user-defined function in C:
```
// Function declaration
return_type function_name(parameters) {
    // Function body
    // Code to execute
    return value; // Optional, depending on return type
}

// Function call
function_name(arguments);
```
### Example
```
#include <stdio.h>

// User-defined function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addNumbers(5, 3); // Function call
    printf("Sum: %d", result); // Output: Sum: 8
    return 0;
}
```
# Advantages Of User Defined Function
1. **Code Reusability**: Functions allow code to be written once and used multiple times. This avoids repetition and promotes reuse.
1. **Modularity**: Large problems can be divided into smaller sub-problems, making the code easier to understand, debug, and maintain.
1. **Easier Maintenance**: Changes can be made in one place (the function) and applied wherever the function is used.
1. **Improved Readability**: Functions allow programmers to break down complex logic into simpler, more understandable units.
1. **Reduced Complexity**: By dividing a large task into smaller functions, the complexity of the program is reduced.
1. **Facilitates Debugging**: Errors are easier to isolate within functions, which simplifies the debugging process.

# Types of Functions
Different types of functions are used in program according as their use,but mainly two types of functions are used:user defined and libary function.
- **Library Functions**:Library functions are those which are predefied,compiled,and placed in C-libary.The function's name,it's return type,their argument number and types have been already defined and cannot be changed.eg:printf(),scanf(),sqrt(),getch()etc.
- **User Defined Functions**:These are the functions which are defined by user at the time of writing a program.The user has choice to choose it's name,return type,arguments and their types.The job of each user defined function is defined by the user.
# Elements or components of function
1. **Function Declaration**: Introduces the function to the compiler.
1. **Return Type**: Specifies the type of value the function will return.
1. **Function Name**: The name used to call the function.
1. **Parameters**: Input values the function uses to perform a task.
1. **Function Body**: Contains the code that executes the task.
1. **Return Statement**: Sends a value back to the caller.
1. **Function Call**: The point in the program where the function is invoked.
```
#include <stdio.h>
// Function declaration
int addNumbers(int a, int b);

// Function definition
int addNumbers(int a, int b) {
    return a + b; // Adds two numbers and returns the result
}

int main() {
    int result = addNumbers(10, 20); // Function call
    printf("Sum: %d", result); // Output: Sum: 30
    return 0;
}
```
## Categories of User defined fucntions(Differrent Forms of Functions)
1. **No Parameters,No Return Value**:
These functions neither accept any input parameters nor return any value. They are typically used for performing tasks like printing messages or manipulating global variables.
```
#include <stdio.h>
void printMessage() {
    printf("Hello, World!\n");
}

int main() {
    printMessage(); // Function call
    return 0;
}
```
2. **With Parameters, No Return Value**:
These functions take input parameters but do not return any value. They are used when an action needs to be performed using the provided data, but no result is needed.
```
#include <stdio.h>
void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}
int main() {
    printSum(5, 3); // Function call with arguments
    return 0;
}
```
3. **No Parameters, With Return Value**:
These functions do not take input parameters but return a value. They are useful for generating or calculating a result.
```
#include <stdio.h>
int getNumber() {
    return 42;
}
int main() {
    int num = getNumber(); // Function call
    printf("Number: %d\n", num);
    return 0;
}
```
4. **With Parameters, With Return Value**:
These functions take input parameters and return a value. They are the most versatile form, allowing functions to process input and return a result.
```
#include <stdio.h>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addNumbers(10, 20); // Function call
    printf("Sum: %d\n", result);
    return 0;
}
```
## Recursion
- Recursion is a programming technique where a function calls itself to solve a problem.
- It is particularly useful for problems that can be broken down into smaller, similar subproblems.
- Understanding recursion involves recognizing the two main components: the base case (the condition under which the recursion stops) and the recursive case (the part of the function where it calls itself).

**Key Concepts of Recursion**
- **Base Case**:This is the condition that stops the recursion. Without a base case, the function would call itself indefinitely, leading to a stack overflow.
- **Recursive Case**: This part of the function reduces the problem into smaller instances and makes a call to itself.
### Example: Factorial Calculation
```
#include<stdio.h>
//Recursive function to calulate factorial
int factorial(int n)
{
    //Base Case
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        //Recursive Case
        return n*factorial(n-1);
    }
}
int main()
{
int number=5;
int result=factorial(number);
printf("Factorial of %d is: %d",number,result);
return 0;
}
```
## Types of function call
In C programming, arguments can be passed to functions in two primary ways: pass by value and pass by reference. Each method has its own implications on how data is handled within functions.
1. Pass by Value
In pass by value, a copy of the actual argument's value is passed to the function. This means that changes made to the parameter inside the function do not affect the original variable.
```
// #include <stdio.h>
// // Function that tries to modify the value
// void modifyValue(int num) {
//     num = 20; // This change won't affect the original variable
// }

// int main() {
//     int a = 10;
//     printf("Before modifyValue: a = %d\n", a);
//     modifyValue(a); // Pass by value
//     printf("After modifyValue: a = %d\n", a); // Original value remains unchanged
    
//     return 0;
// }
```