//Program to find the transpose of the matrix using function
#include<stdio.h>
void display(int[10][10],int,int);
void transpose(int [10][10],int [10][10],int,int);
int main()
{
    int i,j,r,c;
    int a[10][10],t[10][10];
    printf("Enter the no.of rows and no.of columns (<10):\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of your matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The original matrix is:\n");
    display(a,r,c);
    transpose(a,t,r,c);
    printf("The transpose matrix is:\n");
    display(t,r,c);
    return 0;
}
void display(int arr[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void transpose(int matrix[10][10],int trans[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            trans[j][i]=matrix[i][j];
        }
    }
}
