//WAP to read a number and display its reverse.
#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    printf("Enter number to be reversed: ");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    printf("The reverse number is %d",rev);
    return 0;
}