//Recursion-A recursion function is one that call itself directly or indirectly is called recursion.
//It has 2 case:
//1.)Base case:jasla afulai call grna rokxa
//2.)Recursion case:jala afu la afai lai call gari rakh xa
// #include<stdio.h>
// //Recursive function to calculate factorial
// int factorial(int n)
// {
//     //Base case
//     if(n==1 || n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         //Recursive case
//         return n*factorial(n-1);
//     }
// }
// int main()
// {
//     int number=5;
//     int result=factorial(number);
//     printf("Factorial of %d is %d",number,result);
//     return 0;
// }

//Program to generate fibonicci series upto n terms using recursive function
#include<stdio.h>
int fib(int n);

int main()
{
int n,i;
printf("Enter n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("%d\t",fib(i));
}
return 0;
}

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
