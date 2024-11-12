//Program to convert a 4*4 matrix to lower triangular matrix and display the result in matrix form.
#include<stdio.h>
#define ROW 4
#define COLUMN 4
int main()
{
    int Matrix[ROW][COLUMN];
    int i,j;
    printf("Enter the elements of Matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            scanf("%d",&Matrix[i][j]);
        }
    }
    printf("The original matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            printf("%d\t",Matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<COLUMN;j++)
        {
            Matrix[i][j]=0;
        }
    }
    printf("Lower triangular Matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            printf("%d\t",Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}