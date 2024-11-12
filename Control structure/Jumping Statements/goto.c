//Program to print numbers 1 to 10 using goto statement(without using loop).
#include<stdio.h>
int main()
{
    int x=1;
    daenish:
    printf("%d\n",x);
    x++;
    if(x<=10)
    {
        goto daenish;
    }
    return 0;
}