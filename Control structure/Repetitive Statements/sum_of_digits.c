//Program to find the sum of digits of any number supplied by the user.
#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("The sum of the given number is %d\n",sum);
    return 0;
}
/*
example:Input=5678,Output=26
*/