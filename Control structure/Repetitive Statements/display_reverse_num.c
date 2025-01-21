//Program to read a number and display it's reverse.
#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("Enter a number: ",&num);
    scanf("%d",&num);
    int Input_num=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("The reverse of %d number is %d.\n",Input_num,rev);
    return 0;
}