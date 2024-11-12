//Program to read n numbers in an array and display their sum and average.Use function to read input,find sum & average.
#include<stdio.h>
#include<conio.h>
#define SIZE 100
int i;
void main()
{
    float a[SIZE],s,av;
    int n;
    void Input(float a[],int);
    float Sum(float a[],int);
    float Average(float a[],int);
    printf("How many number: ");
    scanf("%d",&n);
    Input(a,n);
    s=Sum(a,n);
    av=Average(a,n);
    printf("Sum= %.2f\n",s);
    printf("Average= %.2f\n",av);
}
void Input(float a[],int n)
{
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
}

float Sum(float a[],int n)
{
    int s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
}

float Average(float a[],int n)
{
    float avg;
    avg=Sum(a,n)/n;
    return avg;
}