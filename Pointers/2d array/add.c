#include<stdio.h>
#include<stdlib.h> // For malloc and free

#define M 2
#define N 3

int main()
{
    // Allocate memory for the matrices
    int (*a)[N] = malloc(M * N * sizeof(int));
    int (*b)[N] = malloc(M * N * sizeof(int));
    int (*sum)[N] = malloc(M * N * sizeof(int));
    
    if (a == NULL || b == NULL || sum == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Input for Matrix A
    printf("Enter elements of Matrix A of order %d*%d:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", *(a + i) + j);
        }
    }

    // Display Matrix A
    printf("The Matrix A:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", *(*(a + i) + j));
        }
        printf("\n");
    }

    // Input for Matrix B
    printf("Enter elements of Matrix B of order %d*%d:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", *(b + i) + j);
        }
    }

    // Display Matrix B
    printf("The Matrix B:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", *(*(b + i) + j));
        }
        printf("\n");
    }

    // Free allocated memory
    free(a);
    free(b);
    free(sum);

    return 0;
}
