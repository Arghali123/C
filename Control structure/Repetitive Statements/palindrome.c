//WAP to read a number from keyboard and check whether it is palindrome or not.
#include<stdio.h>
int main()
{
    int num,rev=0,digit,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(temp==rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
    return 0;
}