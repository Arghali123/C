//Program to display all the prime numbers less then 100
#include<stdio.h>
int main()
{
    int i,j,prime;
    printf("Prime numbers from 1 to 100:\n");
    for(i=2;i<100;i++)
    {
        prime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}