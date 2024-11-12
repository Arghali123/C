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