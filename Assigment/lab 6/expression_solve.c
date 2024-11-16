//Write a C program to calculate following expression: 5x √(y^2 +5)
#include <stdio.h>
#include <math.h>

float calculateExpression(float x, float y) {
    return 5 * x * sqrt(y * y + 5);
}

int main() {
    float x, y;
    printf("Enter values for x and y: ");
    scanf("%f %f", &x, &y);

    printf("Result: %.2f\n", calculateExpression(x, y));
    return 0;
}
