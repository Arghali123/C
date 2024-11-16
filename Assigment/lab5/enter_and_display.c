//1. Program to Enter 10 Floating Numbers in an Array and Display It
#include <stdio.h>

int main() {
    float arr[10];
    printf("Enter 10 floating point numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    printf("The array elements are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
