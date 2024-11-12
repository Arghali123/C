//Program to display the sum of even numbers upto n terms
#include<stdio.h>
int main()
{
    int n,i,j,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sum=0;
    j=2;
    for(i=0;i<n;i++)
    {
        sum=sum+j;
        j=j+2;
    }
    printf("The sum of even numbers upto %d terms= %d",n,sum);
    return 0;
}