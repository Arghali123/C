//The realloc() function
/*
This function is used to modify the size of previously allocated space
syntax:ptr = realloc(ptr, newSize);
where ptr is reallocated with new size 'newSize'.
note:Re-allocation of memory maintains the already present value and new blocks will be initialized with the
 default garbage value.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 3;  // Initial size of the array

    // Allocate memory for an array of 3 integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Exit the program with an error
    }

    // Initialize the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Use realloc() to resize the array to 5 elements
    n = 5;
    arr = (int *)realloc(arr, n * sizeof(int));

    // Check if realloc() was successful
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;  // Exit the program with an error
    }

    // Initialize the new elements of the array
    for (int i = 3; i < n; i++) {
        arr[i] = i + 1;  // Initialize the new elements
    }

    // Print the resized array
    printf("Resized array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
