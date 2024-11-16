//6. C Program to Calculate Sum of Natural Numbers up to N Using Recursion
#include <stdio.h>

int sumNatural(int n) {
    if (n <= 0)
        return 0;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of natural numbers up to %d: %d\n", n, sumNatural(n));
    return 0;
}
