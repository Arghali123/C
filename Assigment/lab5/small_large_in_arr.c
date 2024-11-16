//2. Program to Display Largest and Smallest Element of the Array Defined Above
#include <stdio.h>

int main() {
    float arr[10];
    printf("Enter 10 floating point numbers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }

    float max = arr[0];
    float min = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest element: %.2f\n", max);
    printf("Smallest element: %.2f\n", min);

    return 0;
}
