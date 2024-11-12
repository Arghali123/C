//Program to find the smallest and the largest element in the array
#include<stdio.h>
int main()
{
    int numbers[5];
    int small,large,i;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&numbers[i]);
    }
    small=numbers[0];
    large=numbers[0];
    for(i=1;i<4;i++)
    {
        if(small>numbers[i])
        {
            small=numbers[i];
        }
        if(large<numbers[i])
        {
            large=numbers[i];
        }
    }
    printf("The smallest numeber: %d\n",small);
    printf("The largest number: %d\n",large);
    return 0;
}