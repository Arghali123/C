//Program that accepts marks for 5 subjects from the keyboard and finds sum and average.
#include<stdio.h>
int main()
{
    int i,sum=0;
    float average;
    int marks[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the marks in %d subject: ",i+1);
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    average=sum/5.0;
    printf("Sum= %d\n",sum);
    printf("Average= %.2f\n",average);
    return 0;
}