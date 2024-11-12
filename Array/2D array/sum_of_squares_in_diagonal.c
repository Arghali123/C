//Program to find the sum of squares in a diagonal of a square matrix.
#include<stdio.h>
int main()
{
    int matrix[10][10],i,j,sum=0,M,N;
    printf("Enter the order of square matrix(less then 10*10):\n");
    scanf("%d%d",&M,&N);
    if(M>10 || N>10)
    {
        printf("The order is out of the range.\n");
        return 1;
    }
    if(M!=N)
    {
        printf("Not a square matrix.\n");
        return 1;
    }
    printf("Enter the elements of Matrix:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe Matrix is:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
            {
                sum=sum+matrix[i][j]*matrix[i][j];
            }
        }
    }
    printf("The sum of squares of elements on a diagonal : %d",sum);
    return 0;
}