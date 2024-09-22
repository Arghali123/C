//WAP to that reads the elements of the matrix size 3*4 and perform the transpose of a matrix.
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int matrix[ROW][COL],transpose[COL][ROW];
    int i,j;
    printf("Enter the elements of matrix :\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    //traspose 
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("The transpose of the given matix is :\n");
    for(i=0;i<COL;i++)
    {
        for(j=0;j<ROW;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}