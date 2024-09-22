#include<stdio.h>

//Function declaration
int addNumbers(int a,int b);

//Function defination
int addNumbers(int a,int b)
{
    return a+b;//adds two numbers and returns the result
}

int main()
{
    int result=addNumbers(10,20);//Function Call
    printf("Sum: %d",result);
    return 0;
}