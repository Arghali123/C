//Sum of columns in a matrix
#include<stdio.h>
int main()
{
    int matrix[3][3];
    int col[3]={0};
    int i,j;
    printf("Enter the elements of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            col[j]=col[j]+matrix[i][j];
        }
    }
    printf("The sum of each column:\n");
    for(i=0;i<3;i++)
    {
        printf("Column %d: %d.\n",i+1,col[i]);
    }
    return 0;
}