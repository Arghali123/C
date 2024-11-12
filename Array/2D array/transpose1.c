//Program to read two-dimensional matrix and display it's transposed form.
#include<stdio.h>
#define ROW 2
#define COLUMN 3
int main()
{
    int matrix[ROW][COLUMN],trasnspose[COLUMN][ROW];
    int i,j;
    printf("Enter the elements of Matrix:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            scanf("%d",&matrix[i][j]);
            trasnspose[j][i]=matrix[i][j];
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
    printf("The Transpose Matrix:\n");
    for(i=0;i<COLUMN;i++)
    {
        for(j=0;j<ROW;j++)
        {
            printf("%d\t",trasnspose[i][j]);
        }
        printf("\n");
    }
    return 0;
}