//7. Program to Compute the Sum of Diagonal Elements of a Square Matrix
#include <stdio.h>

int main() {
    int matrix[3][3], sum = 0;

    printf("Enter elements for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
