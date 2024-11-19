//Program that reads the marks of n cources and finds sum and average using dynamic array using DMA function malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    float *p,sum=0,average=0;
    printf("How many cources of the students: ");
    scanf("%d",&n);
    printf("Enter the marks of each cource: ");
    p=(float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        scanf("%f",(p+i));
        sum+=*(p+i);
    }
    average=sum/n;
    printf("The sum of the marks is %.2f\n",sum);
    printf("The average of the marks is %.2f\n",average);
    free(p);
    return 0;
}