// Program to read two matrices from the user and multiply them if possible.
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], s[10][10];
    int m, n, l, p, i, j, k;
    printf("Enter the row of first matrix(<=10): ");
    scanf("%d", &m);
    printf("Enter the column of first matrix(<=10): ");
    scanf("%d", &n);
    printf("Enter the row of seconf matrix(<=10): ");
    scanf("%d", &l);
    printf("Enter the column of second matrix(<=10): ");
    scanf("%d", &p);
    if (n != l)
    {
        printf("Multiplication is not possible\n");
        return 1;
    }
    else
    {
        printf("Enter the first matrix:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nEnter the second matrix:\n");
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < p; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                s[i][j]=0;
                for(k=0;k<n;k++)
                {
                    s[i][j]=s[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("The matrix multiplication is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                printf("%d\t",s[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}