//Pointer and 2D array
/*
Using pointers with a two-dimensional array (2D array) in C allows you to navigate through the elements of the 
array efficiently. Let's explore a simple example of how pointers interact with 2D arrays.
*/
// Basic Concept:
// A 2D array in C is essentially an array of arrays. For example, a 2D array of size m x n can be visualized as m arrays, each containing n elements.
// A pointer can be used to navigate through the elements of the 2D array.
#include <stdio.h>

int main() {
    // Declare and initialize a 2D array
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*ptr)[4];  // Declare a pointer to an array of 4 integers
    ptr = arr;      // Point to the first array (first row) of the 2D array

    // Accessing elements using the pointer
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("arr[%d][%d] = %d, *(*(ptr + %d) + %d) = %d\n", 
                        i, j, arr[i][j], i, j, *(*(ptr + i) + j));
        }
    }

    return 0;
}
