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
# Function Parameters
Function parameters are the means for communication between the calling and the called functions.Two types:**formal parameters and actual parameters**.

- Formal parameters are given in the function defination while actual parameters are given in the function call.
- The name of the formal and actual parameters need not be same but data types and the number of parameters must be match.
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
# Passing array to function
Like any other variables,we can pass entire array to a function.An array name can be named as an argument for the prototype declaration and in function header.When we call the function no need to subscript or square brackets.When we pass array that pass as a call by reference because the array name is address for that array.When array is passed,it's base address is passed as call-by-value.The array elements themselves are not copied.
### Code to demonstrate passing array to function.
```
//Program to read 5 numbers in an array and finds their sum and display using the function.
#include<stdio.h>
int sum(int a[]);
void display(int a[]);
int main()
{
    int array[5],s,i;
    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    display(array);//passing array to sum function
    s=sum(array);//passing array to sum function
    printf("\nSum of array elements is: %d\n",s);
    return 0;
}
int sum(int a[])
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void display(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}
```
## Different types of function call
In C programming, arguments can be passed to functions in two primary ways: pass by value and pass by reference. Each method has its own implications on how data is handled within functions.
1. **Pass by Value**:

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

2. **Pass by Reference**:

In pass by reference, the address of the actual argument is passed to the function. This allows the function to modify the original variable directly. To achieve this in C, pointers are used.

Example of Pass by Reference
```
//Program to swap two numbers using call by address method.
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before Swap a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swap a=%d and b=%d\n",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x=%d and y=%d\n",*x,*y);

}
```
### Summary of Differences
**Pass by Value**: Protecting Original Data and Lightweight Operations

- A copy of the variable's value is passed.
- Changes made to the parameter do not affect the original variable.
- Generally safer as it prevents unintended side effects.
Practical Use Cases:

- When you don't want to modify the original data: In many situations, you want to ensure that the original data passed to a function remains unchanged. By passing a copy of the variable, the function works with the copy, leaving the original variable intact.

  - Use Case: In banking software, when processing transactions, you want to calculate new values (e.g., account balances) without altering the current values before confirming a transaction.
- Small data types or variables: For small data types like integers, floats, and chars, passing by value is efficient because copying small pieces of data is not performance-heavy.

  - Use Case: In games or scientific calculations, when passing simple scalar values, there's no need to modify the original values (e.g., coordinates or scores).

**Pass by Reference**: Efficiency and Direct Modifications
- The address of the variable is passed.
- Changes made to the parameter affect the original variable.
- More efficient for large data structures (like arrays) since no copy is made.

Practical Use Cases:
- Modifying the original data: When you need to change the original variable, passing by reference allows the function to directly modify it. This is common in functions that manage or update objects, collections, or large data structures.

  - Use Case: In sorting algorithms (like quicksort or mergesort), pass by reference is essential for swapping or updating values in place efficiently.
- Large data structures: For large objects, arrays, or structures, passing by reference avoids the overhead of copying the entire structure. Instead, only the memory address is passed, which is much more efficient.

  - Use Case: In data-heavy applications like image processing, machine learning, or database management, passing large arrays, matrices, or structs by reference is crucial for performance reasons.

### Key Considerations for Choosing Pass by Value vs Pass by Reference
**When to Use Pass by Value**:

- When the data is small (e.g., integers, floats) and copying is not performance-intensive.
- When you want to protect the original data from being changed.
- When the operation is lightweight and doesn't require modifying the original data.

**When to Use Pass By Reference**:

- When you need to modify the original variable.
- When you're dealing with large data structures (arrays, structs) where copying would be costly.
- When you want to return multiple values from a function.
- When memory efficiency is a concern, especially with large data or recursive calls.

Real-World Example
- **Pass by Value**: In cryptographic libraries, you might want to calculate hash values of data. Since you don’t want to modify the original data (like passwords or files), you’ll pass the data by value to ensure its integrity.

- **Pass by Reference**: In machine learning, when you are training a model using large datasets, you need to pass data structures (like matrices or tensors) by reference to avoid memory overhead, as copying the entire dataset would be inefficient.

## Storage Class and Scaope rules
In C,Storage classes and scope rules define the lifetime,visibility and intialization of variables in a program.There are main four main storage classes:**auto,extern,static and register**.These control how and where variables are stored and their accessibility within different parts of the code.

1. Storage Class:auto(Automatic Storage Class)
   - Default storage class for local variables.
   - Variables are local to the function in which they are defined.
   - Lifetime: The variable exists only during the execution of the block in which it is defined (inside a function).
   - Initialization: Not automatically initialized; it contains garbage values if not initialized explicitly.
```
#include<stdio.h>
void function()
{
    auto int x=10;//auto is optional,x is a local variable.
    printf("Inside function:x= %d\n",x);
}
int main()
{
    function();
    //x is not accessible here
    return 0;
}
//Explanation:x is a local variable with the auto storage class
//Scope:Local to the block/function in which it's declared.
```
2. Storage Class:extern(External Storage Class)

  - Used to declare a variable that is defined elsewhere, usually in another file or earlier in the same file.
  - Lifetime: Exists for the entire duration of the program (global).
  - Initialization: Default is 0 for uninitialized extern variables.
  - Scope: The variable can be accessed across multiple files (global).
```
#include<stdio.h>
extern int count;//Declaration of an external variable
void function()
{
    count=10;//Modify the external variable
    printf("Inside function:count= %d\n",count);

}
int count=0;//Defination of the external variable
int main()
{
    function();
    printf("Inside main function:count= %d\n",count);
    return 0;
}
//Explanation: The extern keyword tells the compiler that the variable count is defined somewhere else. In this case, count is defined later in the same file. The variable persists for the duration of the program and can be accessed and modified by multiple functions.
//Scope:Global accross files or the entire program.
```
2. Storage Class:static(Static Storage Class)

- Used to retain the value of a variable across function calls or to limit the scope of a global variable to the file in which it is declared.
- Lifetime: Exists for the entire duration of the program (global), but its scope is limited to the block or function where it is declared.
- Initialization: Automatically initialized to 0 if not explicitly initialized.
```
#include<stdio.h>
void function()
{
    static int x=0;//Static local variable retain its value between function calls
    x++;
    printf("x= %d\n",x);
}
int main()
{
    function();//x is incremented to 1
    function();//x is incremented to 2
    function();//x is incremented to 3
    return 0;
}
//Explanation:The static variable x is local to the function() but retains its value between function calls.Unlike an auto variable,which is reinitialized everytime the function is called,x is initialized only once,and its value persists.
//Scope:Local to the function but exists throughout the program.
```
4. Storage Class:register(Register Storage Class)

- Suggests to the compiler that the variable be stored in a CPU register instead of RAM for faster access.
- Lifetime: Same as an auto variable (local to the block).
- Scope: Local to the block or function in which it is declared.
- Initialization: Not automatically initialized; contains garbage values if not explicitly initialized.
```
#include<stdio.h>
void function()
{
    register int i;//Request to store i in a CPU register
    for(i=0;i<5;i++)
    {
        printf("i= %d\n",i);
    }
}
int main()
{
    function();
    return 0;
}
//Explanation: The register keyword requests the compiler to store the variable i in a CPU register, which may lead to faster access during repetitive operations, like loops. However, it's just a suggestion, and the compiler may ignore it if registers are unavailable.
//Scope: Local to the block or function in which it is declared.
```