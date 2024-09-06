// Multi Dimensional array
//=>The arrays with more then one dimension is called multi dimensional array.Example:
// int a[3][4];->2 dimensional array with 3-rows and 4-columns

// Accessing Elements of 2D-Array
// The element of ith row and jth column of 2D-array can be accessed with a[i][j].

// Initializing 2D-array
// Two dimensional arrays can be initialized rows by rows by seperating the each elements by commas and rows by {}
// e.g:int a[4][2]={{1,2},{3,4},{5,6},{7,8}}; or int s[4][2]={a,b,c,d,e,f,g,h};
// It is important to remember that while initializing a 2D-array,it is necessary to mention column dimension,whereas
// the first dimension(row)is optional
// Thus the declarations,
// int a[2][3]={12,34,23,45,56,45};acceptable
// int a[][3]={12,34,23,45,56,45};acceptable

// wrong
// int a[2][]={12,34,23,45,56,45};
// int a[][]={12,34,23,45,56,45};

// #include <stdio.h>
// int main() {
//   int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

//   int i, j;
//   for (i = 0; i < 2; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("%d\t", matrix[i][j]);
//     }
//     printf("\n");
//   }

//   return 0;
// }

// WAP to read 2 R*C matrices and display their sum and differnence
// #include <stdio.h>
// #define R 3 // R Stands for num of rows
// #define C 3 // C stands for num of columns
// int main()
// {
//     int matrix1[R][C], matrix2[R][C], sum[R][C];
//     int i, j;
//     printf("Enter the Matrix 1:\n");
//     for (i = 0; i < R; i++)
//     {
//         for (j = 0; j < C; j++)
//         {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }
//     printf("The Matrix 1st is : \n");
//     for (i = 0; i < R; i++)
//     {
//         for (j = 0; j < C; j++)
//         {
//             printf("%d\t", matrix1[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Enter the second matrix: \n");
//     for (i = 0; i < R; i++)
//     {
//         for (j = 0; j < C; j++)
//         {

//             scanf("%d", &matrix2[i][j]);
//         }
//     }
//     printf("The second matrix is : \n");
//     for (i = 0; i < R; i++)
//     {
//         for (j = 0; j < C; j++)
//         {
//             printf("%d\t", matrix2[i][j]);
//             sum[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//         printf("\n");
//     }
//     printf("The sum is : \n");
//     for (i = 0; i < R; i++)
//     {
//         for (j = 0; j < C; j++)
//         {
//             printf("%d\t", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// WAP to find transpose of a matrix
//  #include<stdio.h>
//  #define M 3
//  #define N 3
//  int main()
//  {
//      int matrix[M][N],transpose[N][M];
//      int i,j;
//      printf("Enter the matrix: \n");
//      for(i=0;i<M;i++)
//      {
//          for(j=0;j<N;j++)
//          {
//              scanf("%d",&matrix[i][j]);
//          }
//      }
//      printf("The Matrix You entered are: \n");
//      for(i=0;i<M;i++)
//      {
//          for(j=0;j<N;j++)
//          {
//              printf("%d\t",matrix[i][j]);
//              transpose[j][i]=matrix[i][j];
//          }
//          printf("\n");
//      }
//      printf("Transpose of your matrix is : \n");
//      for(i=0;i<M;i++)
//      {
//          for(j=0;j<N;j++)
//          {
//              printf("%d\t",transpose[i][j]);
//          }
//          printf("\n");
//      }
//  }

// Program to find the sum of squares in a diagonal of a square matrix
//  #include<stdio.h>
//  #include<stdlib.h>
//  int main()
//  {
//      int matrix[10][10],i,j,sum=0;
//      int M,N;

//     printf("\nEnter order of square matrix (less than 10*10):\t");
//     scanf("%d%d",&M,&N);
//     if(M>10 || N>10)
//     {
//         printf("\nThe order is out of range.\n");

//         exit(0);
//     }

//     if(M!=N)
//     {
//         printf("Not a square matrix.\n");

//         exit(0);
//     }

//     printf("Enter the elements:\n");
//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("The matrix is : \n");
//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             printf("%d\t",matrix[i][j]);
//         }
//         printf("\n");
//     }

//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             if(i==j)
//             {
//                 sum=sum+matrix[i][j]*matrix[i][j];
//             }
//         }
//     }
//     printf("\nThe sum of squares of elements on a diagonal is %d ",sum);
//     return 0;
// }

// Write a menu driven program to input a 3X3 matrix and display the menu
// Menu:
// 1.)Print the input matrix
// 2.)Sum of even values of elements
// 3.)Sum of all diagonal elements
// 4.)Exit.
// #include <stdio.h>
// #define Rows 3
// #define Columns 3
// int main()
// {
//     int i, j, sum;
//     int choice;
//     int matrix[Rows][Columns];
//     for (i = 0; i < Rows; i++)
//     {
//         for (j = 0; j < Columns; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     do
//     {
//         printf("MENU");
//         printf("[1] Print Matrix\n");
//         printf("[2] Sum of even elements\n");
//         printf("[3] Sum of diagonal elements\n");
//         printf("[4] Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             for (i = 0; i < Rows; i++)
//             {
//                 for (j = 0; j < Columns; j++)
//                 {
//                     printf("%d\t", matrix[i][j]);
//                 }
//                 printf("\n");
//             }
//             break;

//         case 2:
//             sum = 0;
//             for (i = 0; i < Rows; i++)
//             {
//                 for (j = 0; j < Columns; j++)
//                 {
//                     if (matrix[i][j] % 2 == 0)
//                     {
//                         sum = sum + matrix[i][j];
//                     }
//                 }
//             }
//             printf("The sum of all even elements in a matrix is %d\n", sum);
//             break;

//         case 3:
//             sum = 0;
//             for (i = 0; i < Rows; i++)
//             {
//                 for (j = 0; j < Columns; j++)
//                 {
//                     if (i == j)
//                     {
//                         sum = sum + matrix[i][j];
//                     }
//                 }
//             }
//             printf("The sum of a diagonal elements is %d\n", sum);
//             break;

//         case 4:
//             break;

//         default:
//             printf("Illigal choice\n");
//         }
//     } while (choice != 4);
//     return 0;
// }

//Program to read two matrixes from user and multiply them if possible
// #include<stdio.h>
// int main()
// {
//     int A[10][10],B[10][10],sum[10][10];
//     int M,N,L,P;
//     int i,j,k;
//     printf("Enter Row of first matrix (<=10): ");
//     printf("Enter Column of first matrix (<=10): ");
//     scanf("%d",&N);

//     printf("Enter Row of second matrix (<=10): ");
//     scanf("%d",&L);
//     printf("Enter Column of second matrix (<=10): ");
//     scanf("%d",&P);

//     if(N!=L)
//     {
//         printf("Multiplication is not possible");
//     }
//     else
//     {
//         printf("Enter the first Matrix: \n");
//         for(i=0;i<M;i++)
//         {
//             for(j=0;j<N;j++)
//             {
//                 scanf("%d",&A[i][j]);
//             }
//         }

//         printf("Enter the Second Matrix: \n");
//         for(i=0;i<L;i++)
//         {
//             for(j=0;j<P;j++)
//             {
//                 scanf("%d",&B[i][j]);
//             }
//         }
//         for(i=0;i<M;i++)
//         {
//             for(j=0;j<P;j++)
//             {
//                 sum[i][j]=0;
//                 for(k=0;k<N;k++)
//                 {
//                     sum[i][j]=sum[i][j]+A[i][k]*B[k][j];
//                 }
//             }
//         }
//         printf("The matrix multiplication is :\n");
//         for(i=0;i<M;i++)
//         {
//             for(j=0;j<P;j++)
//             {
//                 printf("%d\t",sum[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }