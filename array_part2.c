// Multi Dimensional array
//=>The arrays with more then one dimension is called multi dimensional array.Example:
// int a[3][4];->2 dimensional array with 3-rows and 4-columns

// Accessing Elements of 2D-Array
// The element of ith row and jth column of 2D-array can be accessed with a[i][j].

// Initializing 2D-array
// Two dimensional arrays can be initialized rows by rows by seperating the each elements by commas and rows by {}
// e.g:int a[4][2]={{1,2},{3,4},{5,6},{7,8}}; or int s[4][2]={a,b,c,d,e,f,g,h};
// It is important to remember that while initializing a 2D-array,it is necessary to mention column dimension,whereas
//the first dimension(row)is optional
//Thus the declarations,
//int a[2][3]={12,34,23,45,56,45};acceptable
//int a[][3]={12,34,23,45,56,45};acceptable

//wrong
//int a[2][]={12,34,23,45,56,45};
//int a[][]={12,34,23,45,56,45};

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

//WAP to find transpose of a matrix
// #include<stdio.h>
// #define M 3
// #define N 3
// int main()
// {
//     int matrix[M][N],transpose[N][M];
//     int i,j;
//     printf("Enter the matrix: \n");
//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("The Matrix You entered are: \n");
//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             printf("%d\t",matrix[i][j]);
//             transpose[j][i]=matrix[i][j];
//         }
//         printf("\n");
//     }
//     printf("Transpose of your matrix is : \n");
//     for(i=0;i<M;i++)
//     {
//         for(j=0;j<N;j++)
//         {
//             printf("%d\t",transpose[i][j]);
//         }
//         printf("\n");
//     }
// }