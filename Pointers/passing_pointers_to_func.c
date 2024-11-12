//A pointer can be passed to a function as an argument.Passing a pointer means passing address of a variable instead
//of value of a variable.

//Example
#include<stdio.h>
//Function that take a pointer to an int as a argument
void modifyValue(int *p)
{
*p=10;
}
int main()
{
    int a=5;
    printf("Before moddifyValue a=%d\n",a);
    modifyValue(&a);
    printf("After modifyValue a=%d\n",a);
    return 0;
}