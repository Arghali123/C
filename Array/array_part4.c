//Program to convert 4x4 matrix to lower trangular and display the result in matrix form
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
//     //transform into lower trangular matrix 
//     for(j=1;j<COL;j++)
//     {
//         for(i=0;i<j;i++)
//         {
//             matrix[i][j]=0;
//         }
//     }
//     printf("The lower trangular matrix is :\n");
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

// #include<stdio.h>
// int main()
// {
//     int i;
//     int matrix[5]={1,2,3,4,5};
//     int reverse[5];
//     for(i=0;i<5;i++)
//     {
//         reverse[i]=matrix[4-i];
//     }
//     for(i=0;i<5;i++)
//     {
//         printf("%d",reverse[i]);
//     }
//     return 0;
// }

//Program to multiply two rectangular matrices and display the resultant matrix
// #include<stdio.h>
// int main()
// {
//     int a[2][3],b[3][2],i,j,k,mul;
//     printf("Enter the first matrix:\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the second matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("The matrix 1 is :\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The second matrix is:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d\t",b[i][j]);
//         }
//         printf("\n");
//     }
//     //multiplication of matrix a and b 
//     printf("The multiplication of matrix a and b is :\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             mul=0;
//             for(k=0;k<3;k++)
//             {
//               mul+=a[i][k]*b[k][j];
//             }
//             printf("%d\t",mul);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Program to read n numbers in an array and display their sum and average;use functions to read input and find
//sum and average
#include<stdio.h>
#include<conio.h>
#define SIZE 100
int i;
void main()
{
    float a[SIZE],s,av;
    int n;
    void input(float a[],int);
    float sum(float a[],int);
    float avg(float a[],int);

    printf("How many numbers??\n");
    scanf("%d",&n);
    printf("Enter numbers:\n");
    input(a,n);
    s=sum(a,n);
    av=avg(a,n);
    printf("Sum=%f\n",s);
    printf("Average=%f\n",av);
}
void input(float a[],int n)
{
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
}
float sum(float[a],int n)
{
    float s=0;
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    return s;
}
float avg(float a[],int n)
{
    float av;
    av=sum(a,n)/n;
    return av;
}
