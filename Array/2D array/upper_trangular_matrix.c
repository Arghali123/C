//Wap to convert a 4*4 matrx to upper triangular and display the result in the matrix form.
#include<stdio.h>
#define ROW 4
#define COLUMN 4
int main()
{
    int matrix[ROW][COLUMN];
    int i,j;
    printf("Enter the elements of Matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The original matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<ROW;i++)
    {
        for(j=0;j<i;j++)
        {
            matrix[i][j]=0;
        }
    }
    printf("Upper trangular matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}