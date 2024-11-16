//Program to illustrate the functions with argumets and return value.
#include<stdio.h>
int addition(int,int);
int main()
{
    int a,b,sum;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    sum=addition(a,b);
    printf("Sum: %d\n",sum);
    return 0;
}
int addition(int x,int y)
{
    int s=x+y;
    return s;
}