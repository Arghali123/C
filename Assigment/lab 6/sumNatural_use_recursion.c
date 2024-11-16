//2. Program to Calculate Sum of First 50 Natural Numbers Using Recursive Function
#include <stdio.h>

int sumNatural(int n) {
    if (n == 1)
        return 1;
    return n + sumNatural(n - 1);
}

int main() {
    int result = sumNatural(50);
    printf("Sum of first 50 natural numbers: %d\n", result);
    return 0;
}
