//Program to create a structure named student with members roll,name,and percentage,read records of n student and 
//display the records of students who passed in distinction division.
#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int roll;
        char name[30];
        float percentage;
    }st[10];
    int i,n;
    float t;
    printf("How many records you want to enter: ");
    scanf("%d",&n);
    printf("\nEnter the records of students:");
    for(i=0;i<n;i++)
    {
        printf("\nRoll: ");
        scanf("%d",&st[i].roll);
        printf("Name: ");
        scanf("%s",st[i].name);
        printf("Percentage: ");
        scanf("%f",&t);
        st[i].percentage=t;
    }
    printf("\nThe records of students who passed in distinction");
    printf("\nRoll_no\t\tName\t\tPercentage");
    for(i=0;i<n;i++)
    {
        if(st[i].percentage>=80)
        {
          printf("\n%d\t\t%s\t\t%.2f",st[i].roll,st[i].name,st[i].percentage);
        }
    }
    return 0;

}