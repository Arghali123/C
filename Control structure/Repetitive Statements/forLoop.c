//Wap to find the factorial number of positive number
#include<stdio.h>
int main()
{
    int n;
    long fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid number. Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
    }
    printf("Factorial of %d is %ld",n,fact);
    return 0;
}