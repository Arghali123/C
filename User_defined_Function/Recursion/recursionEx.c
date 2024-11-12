#include<stdio.h>
//Recursive function to calulate factorial
int factorial(int n)
{
    //Base Case
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        //Recursive Case
        return n*factorial(n-1);
    }
}
int main()
{
int number=5;
int result=factorial(number);
printf("Factorial of %d is: %d",number,result);
return 0;
}