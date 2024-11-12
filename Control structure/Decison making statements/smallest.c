//Wap that finds the smallest amomg three numbers using nested if else statements
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        printf("Number 1 is the greatest number");
    }
    else if (n2>n1 && n2>n3)
    {
       printf("Number 2 is the greatest number");
    }
    else
    {
        printf("Number 3 is the greatest number");
    }
    return 0;
}