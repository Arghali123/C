//Program to find the minimum value in the array by passing array to function
#include<stdio.h>
#define N 10
int minimum(int []);
int main()
{
    int scores[10],i,minScore;
    printf("Enter 10 scores:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&scores[i]);
    }
    minScore=minimum(scores);
    printf("Minimum scores is %d",minScore);
    return 0;
}

int minimum(int values[])
{
    int minValue,i;
    minValue=values[0];
    for(i=1;i<N;i++)
    {
        if(minValue>values[i])
        {
            minValue=values[i];
        }
    }
    return minValue;
}