//Program to find the sum of integers 
#include<stdio.h>
int add(int a,int b)
{
 return a+b;
}
int main()
{
int a=10,b=15;
int result=add(a,b);
printf("The sum of a and b is %d",result);
return 0;
}