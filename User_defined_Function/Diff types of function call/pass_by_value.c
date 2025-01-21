
//Program to illustrate function call by value.
#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    a=99,b=89;
    printf("Before function calling, a and b are:%d %d\n",a,b);
    swap(a,b);
    printf("After function calling, a and b are: %d %d",a,b);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("The values within functions are: %d %d\n",x,y);
}
