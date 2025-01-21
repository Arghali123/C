//prime or not
#include<stdio.h>
int main()
{
    int num,prime=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            prime=1;
            break;
        }
    }
    if(prime)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }
    return 0;

}
