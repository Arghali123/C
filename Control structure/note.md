# Introduction
In general,the program statements are executed in same order in which they appear the source program but if we want to alter the flow of normal execution of a program,control statements are used.Thus,programming contains control statements to control the flow of execution in a program is called control structure.It combines instructions into logical unit.Logical unit has one entry point and one exit point.**Control structures** enables us to specify the flow of program control.They make it possible to make decisions,to perform tasks repeatedly or to jump from one section of code to another.
Control statements can be categorized into three sub categories:
1. Decision Making Statements
   - if statement
   - if...else statement
   - if...elseif statement
   - nested if...else statement
   - switch statement

1. Iteration (Looping) Statements
   - for loop
   - while loop
   - do while loop

1. Jumping Statements
   - return
   - break
   - continue
   - goto

# Decision Making Statements
The decision making statements test a condition and allow executing some program statements on the basis of result of the test condition(either true or false).The statements have capability to decide whether specified statement have to be executed or not,they are called selection statements.

1. **if Statement**:The if statement checks a condition, and if it’s true, the block of code within the if   statement is executed.
```
#include <stdio.h>

int main() {
    int number = 10;
    if (number > 5) {
        printf("Number is greater than 5\n");
    }
    return 0;
}
```
2. **if...else statement**:The if...else statement lets you specify an alternate action if the condition is false.
```
#include <stdio.h>

int main() {
    int number = 3;
    if (number > 5) {
        printf("Number is greater than 5\n");
    } else {
        printf("Number is 5 or less\n");
    }
    return 0;
}
```
3. **if...elseif statements**:The if...else if...else ladder is used when multiple conditions need to be checked in sequence.
```
#include <stdio.h>
int main() {
    int number = 8;
    if (number > 10) {
        printf("Number is greater than 10\n");
    } else if (number > 5) {
        printf("Number is between 6 and 10\n");
    } else {
        printf("Number is 5 or less\n");
    }
    return 0;
}
```
4. **nested if...else statement**:You can nest if statements within each other to check more complex conditions.
```
#include <stdio.h>

int main() {
    int number = 15;
    if (number > 10) {
        if (number < 20) {
            printf("Number is between 10 and 20\n");
        }
    }
    return 0;
}

```
5. **switch statement**:The switch statement is useful when a variable is compared against multiple values.
```
#include <stdio.h>
int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            printf("Choice is 1\n");
            break;
        case 2:
            printf("Choice is 2\n");
            break;
        case 3:
            printf("Choice is 3\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
```
# Repetative Statements(Loops)
Repetative is the process of executing a group of statements more then one time as long as some conditions remain true.So,a loop may be defined as a block of statements which are repeateadly executed for certai number of times or until a particular condition is satisfied.There are 3 types of loop statements in C:
- The **for** loop
- The **while** loop
- The **do-while** loop

## for loop
In C, the for loop is a control structure that allows you to repeat a block of code a specific number of times. It has the following syntax:
```
for(initialization; condition; increment/decrement) {
    // Code to be executed repeatedly
}

```
### Components of a for Loop
- Initialization: Sets the starting point, typically by defining and initializing a loop counter variable.
- Condition: The loop runs as long as this condition is true. Once it's false, the loop stops.
- Increment/Decrement: Updates the loop counter after each iteration. This step controls how the loop variable changes, which affects when the loop will end.

### Code for for loop
```
#include <stdio.h>
int main() {
    for(int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}
```
## while loop
In C, a while loop allows you to repeat a block of code as long as a specified condition is true. It has the following syntax:
```
while(condition) {
    // Code to be executed repeatedly
}
```
### Components of a while Loop
- Condition: This is a Boolean expression that’s evaluated before each loop iteration. If the condition is true, the code inside the loop is executed. If it’s false, the loop stops.
- Loop Body: The block of code that runs as long as the condition remains true.
### Code for while loop
```
#include <stdio.h>
int main() {
    int i = 1;

    while(i <= 5) {
        printf("Iteration %d\n", i);
        i++;  // Increment to eventually break out of the loop
    }

    return 0;
}
```
## do-while loop
do-while loop executes a body first without checking any condition and then checks the test condition to determine whether the body of loop is to be executed for next time or not.In the **do-while** the statement body is always executed at least once as the condition is tested at the end of the body.syntax:
```
do
{
    statement body;
}while(condition);
```
### Code for do-while loop
```
#include<stdio.h>
int main()
{
    int fib1,fib2,prev,next,num;
    fib1=1;
    fib2=1;
    prev=fib1;
    printf("Enter number upto which you want Fibonacci Series: ");
    scanf("%d",&num);
    printf("%d",fib1);
    do
    {
      next=fib2+prev;
      prev=fib2;
      fib2=next;
      printf(",%d",&prev);

    } while (num>next);
    return 0;
}
```
# Jumping Statements
The C statements which uncoditionally branch(jump) are as follow:
- The **break** statement
- The **continue** statement
- The **return** statement
- The **goto** statement
## The break statement
The break statement terminates the excution of the loop and the control is transferred to the statement immediately following the loop.When the **break** statement is encountered inside a *while,for,do/while or switch* statement and the statement is immediately terminated and execution resumes at the next statement following it.
### Code to illustrate the use of break within loop
```
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
        if(i==6)
        {
            break;
        }
    }
    return 0;
}
```
## The continue statement
The **continue** statement terminates the current iteration of **while,for,do-while statement** and resumes execution back at the beginning of the loop body with the next iteration.
```
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("hey ram\n");
        if(i==6)
        {
            printf("hey sita\n");
            continue;
        }
    }
    return 0;
}
```
## The return statement
The **return** statement is used to return from a function.It is categorized as a jump statement because it causes execution to return back to the point at which the call to the function was made.A return may or maynot 
have value associated with it.If the return has a value associated with it,that value becomes return value of the function.The general form of the return statement is:
> return expression;
### Code to illustrate use of return statement
```
#include<stdio.h>
int findMax(int,int);
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    int result=findMax(a,b);
    printf("The maximum value is %d\n",result);
    return 0;
}
int findMax(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
```
## The goto statement
The **goto** statement is used to alter the normal sequence of program execution by unconditionally transferring control to some other part of the program.The goto statement transfer the control to the labeled statement somewhere in the current function.The general syntax of goto statement:
```
goto label;
..........
..........
label:
statement;
..........
..........
```
### Code to illustrate the use of goto statement
```
#include<stdio.h>
int main()
{
    int x=1;
    daenish:
    printf("%d\n",x);
    x++;
    if(x<=10)
    {
        goto daenish;
    }
    return 0;
}
```

