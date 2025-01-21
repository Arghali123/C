#include<stdio.h>
int main()
{
    int array[3][3];
    int i,j;
    int *p;
    p=&array[0][0];//or use array
    printf("Enter the elements of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",*(array+i)+j);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*(*(array+i)+j));
        }
        printf("\n");
    }
    return 0;
}