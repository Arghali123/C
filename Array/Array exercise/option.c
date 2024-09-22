#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
int main()
{
    int choice;
    int M, N;
    int i, j, temp;
    int matrix1_small_element,matrix2_largest_element;

    printf("Enter the value of M and N:\n");
    scanf("%d%d", &M, &N);
    int a[M], b[N];
    printf("Enter the elements of matrix1:\n");
    for (i = 0; i < M; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of matrix2:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }
    // use of while
    while (TRUE)
    {
        printf("Press 1 to display both matrix:\n");
        printf("Press 2 to display both matrix in ascending order:\n");
        printf("Press 3 to display smallest element in matrix1:\n");
        printf("Press 4 to display largest element in matrix2:\n");
        printf("Press 5 to exit:\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // display of matrix 1 and matrix 2
            for (i = 0; i < M; i++)
            {
                printf("%d\t", a[i]);
            }
            printf("\n");
            for (i = 0; i < N; i++)
            {
                printf("%d\t", b[i]);
            }
            printf("\n");
            break;
        case 2:
            // ascending order
            for (i = 0; i < M - 1; i++)
            {
                for (j = i + 1; j < M; j++)
                {
                    if (a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            for (i = 0; i < N - 1; i++)
            {
                for (j = i + 1; j < N; j++)
                {
                    if (b[i] > b[j])
                    {
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                }
            }
            printf("The asecending order of matrix1:\n");
            for (i = 0; i < M; i++)
            {
                printf("%d\t", a[i]);
            }
            printf("\n");

            printf("The asecending order of matrix2:\n");
            for (i = 0; i < N; i++)
            {
                printf("%d\t", b[i]);
            }
            printf("\n");
            break;

        case 3:
            matrix1_small_element = a[0];
            for (i = 1; i < M; i++)
            {
                if (matrix1_small_element > a[i])
                {
                    matrix1_small_element = a[i];
                }
            }
            printf("The smallest element matrix is : %d\n", matrix1_small_element);
            break;

        case 4:
          matrix2_largest_element=b[0];
          for(i=1;i<N;i++)
          {
            if(matrix2_largest_element<b[i])
            {
                matrix2_largest_element=b[i];
            }
          }
          printf("The largest element in matrix2 is %d \n",matrix2_largest_element);
          break;

        case 5:
         exit(0);
         

        default:
            printf("Illigal option man");
            break;
        }
    }

    return 0;
}