//Program using function value and no arguments.
#include<stdio.h>
int sum();
int main()
{
    int r;
    r=sum();
    printf("Sum: %d\n",r);
    printf("It is a function with no arguments and return value");
    return 0;
}
int sum()
{
    int a,b,sum;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}