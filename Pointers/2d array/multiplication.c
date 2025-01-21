//If A=2*3matrix,B=3*2 matrix multiplay and diplay A*B matrix using pointer
#include<stdio.h>
#include<stdlib.h>
#define M 2 
#define N 3
#define P 2
int main()
{
    int i,j,k;
    //Allocate memory for A,B and result matrix
    int (*A)[N]=malloc(M*N*sizeof(int));
    int (*B)[P]=malloc(N*P*sizeof(int));
    int (*result)[P]=malloc(M*P*sizeof(int));

    if(A==NULL||B==NULL||result==NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 1;
    }
    
    //Input for matrix A
    printf("Enter the elements of Matrix A of order %d*%d.\n",M,N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",*(A+i)+j);
        }
    }
    //Display Matrix A
    printf("Matrix A:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",*(*(A+i)+j));
        }
        printf("\n");
    }

    //Input of matrix B
    printf("Enter the elements of Matrix B of order %d*%d.\n",N,M);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",*(B+i)+j);
        }
    }
    //Display Matrix B
    printf("Matrix B:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d\t",*(*(B+i)+j));
        }
        printf("\n");
    }

    //A*B matrix
    
    for(i=0;i<M;i++)
    {
        for(j=0;j<P;j++)
        {
            *(*(result+i)+j)=0;
            for(k=0;k<N;k++)
            {
             *(*(result+i)+j)+=*(*(A+i)+k) * *(*(B+k)+j); 
            }
        }
    }
    //Display the resultant matrix 
    printf("Matrix A*B:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<P;j++)
        {
            printf("%d\t",*(*(result+i)+j));
        }
        printf("\n");
    }
    free(A);
    free(B);
    free(result);
    return 0;
}
