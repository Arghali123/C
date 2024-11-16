//Program to illustrate the function with arguments but no return type.
#include<stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    sum(a,b);
    printf("It a function with arguments but no return type");
    return 0;
}
void sum(int x,int y)
{
    int sum;
    sum=x+y;
    printf("The sum: %d\n",sum);
}