//1.)WAP to calculate b^n using recursion function
// #include<stdio.h>
// long power(int,int);//declaration
// int main()
// {
//     int b,n;
//     long p;
//     printf("Enter value b and n: ");
//     scanf("%d%d",&b,&n);
//     p=power(b,n);//Function call
//     printf("Power = %ld",p);
//     return 0;
// }
// long power(int b,int n)
// {
//     if(n==0)
//     {
//         return 1;//base case
//     }
//     else
//     {
//         return b*power(b,n-1);//recursion case
//     }
// }

//Program to compute a x^n using function
#include<stdio.h>
long double power(int,int);
int main()
{
    int x,n,result;
    printf("Enter the value of x and n: ");
    scanf("%d%d",&x,&n);
    result=power(x,n);
    printf("The %d to power %d is %d",x,n,result);
    return 0;
}
long double power(int x,int n)
{
    int result=1.0;
    for(int i=1;i<=n;i++)
    {
        result*=x;
    }
    return result;
}