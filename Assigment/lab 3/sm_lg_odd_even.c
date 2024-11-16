//1. Largest, smallest, and even/odd status of three numbers:
#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    smallest = (a < b) ? (a < c ? a : c) : (b < c ? b : c);

    printf("Largest: %d (%s)\n", largest, largest % 2 == 0 ? "Even" : "Odd");
    printf("Smallest: %d (%s)\n", smallest, smallest % 2 == 0 ? "Even" : "Odd");

    return 0;
}
