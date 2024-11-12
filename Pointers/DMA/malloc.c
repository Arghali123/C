//The malloc() function
/*
It allocates requested size of bytes and returns a pointer to the first byte of the allocated space.
syntax:p=(data_type*)malloc(size_of_block);
1.)Here ,p is a pointer of type data_type.The malloc()returns a pointer to the first byte to an area of memory
with size size_of_block.
2.)e.g: x=(int*)malloc(100*sizeof(int));
        x=(int*)malloc(200);
3.)This statement allocates a memory space equivalent to 100 times the size of an interger(100*2B=200b)and the 
address of first byte is assigned to the pointer x of type int.        
*/

#include <stdio.h>
#include <stdlib.h>  // For malloc and free

int main() {
    // Request memory for 5 integers using malloc
    int *arr = (int *)malloc(5 * sizeof(int));//(int*) forces void pointer to become a integer pointer.

    // Check if malloc was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit program if malloc fails
    }

    // Initialize the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;  // Assign values 1 to 5
    }

    // Print the array elements
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

