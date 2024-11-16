//8. Program to Find the Smallest Number from an Array Using Function
#include <stdio.h>

int findSmallest(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    return smallest;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Smallest element: %d\n", findSmallest(arr, n));
    return 0;
}
