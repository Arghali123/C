// 7 number are entered through the keyboard into an array;Wap that count number of even and even.
#include<stdio.h>
#define SIZE 7
int main()
{
    int Number[SIZE],i;
    int even_count=0,odd_count=0;
    printf("Enter 7 numbers:\n");
    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d",&Number[i]);
        if(Number[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("There are %d even numbers\n",even_count);
    printf("There are %d odd numbers.\n",odd_count);
    return 0;

    
}