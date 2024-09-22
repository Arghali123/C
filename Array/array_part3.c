// #include<stdio.h>
// int main()
// {
//     int i;
//     int numbers[7]={95,86,10,20,300,40,50};
//     int lowest=numbers[0];
//     int highest=numbers[0];
//     for(i=0;i<7;i++)
//     {
//         if(lowest>numbers[i])
//         {
//             lowest=numbers[i];
//         }
//         if(highest<numbers[i])
//         {
//             highest=numbers[i];
//         }
//     }
//     printf("The lowest is %d\n",lowest);
//     printf("The highess is %d",highest);
//     return 0;
// }

// WAP that reads the elements of two matrices A3x4 and B4x3,then verify BxA is not equal to AxB
// #include <stdio.h>
// #define M 3
// #define N 4
// int main()
// {
//     int A[M][N], B[N][M],AbyB[M][M], BbyA[N][N], row_mul_col = 0;
//     int i, j, k;
//     printf("Enter the elements of matrix A of order %d*%d \n", M, N);
//     for (i = 0; i < M; i++)
//     {
//         for (j = 0; j < N; j++)
//         {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("The elements of A matrix are:\n");
//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             printf("%d\t",A[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Enter the elements of matrix B of order %d**d \n", N, M);
//     for (i = 0; i < N; i++)
//     {

//         for (j = 0; j < M; j++)
//         {
//             scanf("%d",&B[i][j]);
//         }
//     }
//     printf("The elements of Matrix B are:\n");
//     for(i=0;i<N;i++){

//         for (j = 0; j < M; j++)
//         {
//             printf("%d\t",B[i][j]);
//         }
//         printf("\n");
//     }

//     //Multiplication of matrix A and B
//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<M;j++)
//         {
//             for(k=0;k<N;k++)
//             {
//                 row_mul_col=row_mul_col+A[i][k]*B[k][j];
//             }
//             AbyB[i][j]=row_mul_col;
//             row_mul_col=0;
//         }
//     }
//     printf("Matrix A*B:\n");
//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<M;j++)
//         {
//             printf("%d\t",AbyB[i][j]);
//         }
//         printf("\n");
//     }

//     //Multiplication of matrix B*A
//     for(i=0;i<N;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             for(k=0;k<M;k++)
//             {
//                 row_mul_col=row_mul_col+B[i][k]*A[k][j];
//             }
//             BbyA[i][j]=row_mul_col;
//             row_mul_col=0;
//         }
//     }
//     printf("\nThe matrix B*A:\n");
//     for(i=0;i<N;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             printf("%d\t",BbyA[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5 numbers are entered through the keyboards into an array;WAP to find how many of them are even and how many of
// them are odd
//  #include<stdio.h>
//  #include<conio.h>//h is a C header file used mostly by MS-DOS compilers to provide console input/output. It is not part of the C standard library or ISO C, nor is it defined by POSIX.
//  #define SIZE 5
//  int main()
//  {
//  int numbers[SIZE],countEven=0,countOdd=0,i;
//  printf("Enter the Five numbers:\n");
//  for(i=0;i<SIZE;i++)
//  {
//      scanf("%d",&numbers[i]);
//      if(numbers[i]%2==0)
//      {
//          countEven++;
//      }
//      else
//      {
//          countOdd++;
//      }
//  }
//  printf("Even numbers=%d\n",countEven);
//  printf("Odd numbers =%d\n",countOdd);
//  return 0;
//  }

// WAP that accepts the elements 3x3matrix and calculate the sum of all elements of the matrix
// #include <stdio.h>
// #define ROW 3
// #define COL 3
// int main()

// {
//     int matrix[ROW][COL], sum = 0, i, j;
//     printf("Enter the elements of Matix 3x3: \n");
//     for (i = 0; i < ROW; i++)
//     {
//         for (j = 0; j < COL; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//             sum = sum + matrix[i][j];
//         }
//     }
//     printf("The sum of all the elements in the matrix 3x3 is %d", sum);
//     return 0;
// }

// Program to read 4x4 matrix and find the sum of each row
//  #include<stdio.h>
//  #define ROW 4
//  #define COL 4
//  int main()
//  {
//      int matrix[ROW][COL],sum,i,j;
//      printf("Enter the elements 4x4 matrix: \n");
//      for(i=0;i<ROW;i++)
//      {

//         for(j=0;j<COL;j++)
//         {
//           scanf("%d",&matrix[i][j]);
//         }
//     }
//     for(i=0;i<ROW;i++)
//     {
//         sum=0;
//         for(j=0;j<COL;j++)
//         {
//             sum=sum+matrix[i][j];
//         }
//         printf("\nThe sum of row %d is %d\n",i+1,sum);
//     }
//     return 0;
// }

// WAP to read 2D matrix and display its transposed form
// #include <stdio.h>
// #define ROW 2
// #define COL 3
// int main()
// {
//     int matrix[ROW][COL], i, j;
//     printf("Enter the elements of matrx 2x3:\n");
//     for (i = 0; i < ROW; i++)
//     {
//         for (j = 0; j < COL; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The Original matrix:\n");
//     for (i = 0; i < ROW; i++)
//     {

//         for (j = 0; j < COL; j++)
//         {
//             printf("%d\t", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The transpose matrix :\n");
//     for(i=0;i<COL;i++)
//     {
//         for(j=0;j<ROW;j++)
//         {
//             printf("%d\t",matrix[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//WAP to convert a 4x4 matrix to upper matrix and display the result in the matrix form
// #include<stdio.h>
// #define ROW 4
// #define COL 4
// int main()
// {
//     int matrix[ROW][COL],i,j;
//     printf("Enter the elements of matrix 4x4:\n");
//     for(i=0;i<ROW;i++)
//     {
//         for(j=0;j<COL;j++)
//         {
//             scanf("%d",&matrix[i][j]);
           
//         }
//     }
//     printf("The original matrix is :\n");
//     for(i=0;i<ROW;i++)
//     {
//         for(j=0;j<COL;j++)
//         {
//             printf("%d\t",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     //Changing in upper trangular matrix
//     for(i=1;i<ROW;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             matrix[i][j]=0;
//         }
//     }
//     printf("\nThe upper matrix is :\n");
//     for(i=0;i<ROW;i++)
//     {
//         for(j=0;j<COL;j++)
//         {
//             printf("%d\t",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }