//4. Program to Read Two Matrices of Order 3x2, Add Them, and Display the Resultant Matrix
#include <stdio.h>

int main() {
    int mat1[3][2], mat2[3][2], result[3][2];

    printf("Enter elements for matrix 1 (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements for matrix 2 (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
