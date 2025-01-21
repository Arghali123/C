#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int *ptr;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    ptr = array; // Pointer to the first element of the array

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i)); // Using pointer arithmetic to store input
    }

    // Calculate the sum of elements
    for (i = 0; i < n; i++) {
        sum += *(ptr + i); // Using pointer arithmetic to access array elements
    }

    // Output the result
    printf("Sum of elements = %d\n", sum);

    return 0;
}
