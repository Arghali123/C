//C program to input an interger number and checks whether it is prime or not.
#include<stdio.h>
int main()
{
    int i,n;
    int prime=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            
            prime=0;
            break;
        }
    }
    if(prime)
    {
        printf("It is prime number");
    }
    else
    {
        printf("%d is not prime number.\n",n);
    }
    return 0;
}