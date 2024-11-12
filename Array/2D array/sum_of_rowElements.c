//Program to read 3*3 matrix and find the sum of row matrix.
#include<stdio.h>
int main()
{
    int Matrix[3][3],sum=0,total[3];
    int i,j;
    printf("Enter the Elements of Matrix:\n");
    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            scanf("%d",&Matrix[i][j]);
            sum=sum+Matrix[i][j];
        }
        total[i]=sum;
        sum=0;
    }
    for(i=0;i<3;i++)
    {
        printf("The sum of %d row is %d.\n",i+1,total[i]);
    }
    return 0;
}