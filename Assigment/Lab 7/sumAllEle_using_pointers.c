//2. Sum of All Elements in an Array Using Pointers
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}
