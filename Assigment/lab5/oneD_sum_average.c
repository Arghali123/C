//3. Program to Initialize One-Dimensional Array of Size 8 and Display Sum and Average
#include <stdio.h>

int main() {
    float arr[8] = {2.5, 4.0, 1.2, 3.8, 6.5, 2.1, 4.9, 7.3};
    float sum = 0;
    float average;

    for (int i = 0; i < 8; i++) {
        sum += arr[i];
    }

    average = sum / 8;

    printf("Sum of array elements: %.2f\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
