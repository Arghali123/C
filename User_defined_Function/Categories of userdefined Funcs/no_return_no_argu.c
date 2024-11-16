//Program to illustrate the function with no arguments and no return value.
#include<stdio.h>
void sum();
int main()
{
    sum();
    printf("It is a function with no arguments and no reuturn value");
    return 0;
}
void sum()
{
    int a,b,s;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("The sum of 2 number: %d\n",s);
}