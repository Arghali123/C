//11.)Write a program to find the largest and smallest number in a list of N number using DMA.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int n, i;
    int largest, smallest;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input the elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize largest and smallest with the first element
    largest = smallest = numbers[0];

    // Traverse the array to find largest and smallest
    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Display the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    // Free the dynamically allocated memory
    free(numbers);

    return 0;
}
