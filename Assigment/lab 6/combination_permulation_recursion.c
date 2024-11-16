//3. Program to Calculate Combination and Permutation Using Factorial
#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int combination(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int permutation(int n, int r) {
    return fact(n) / fact(n - r);
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("Combination (nCr): %d\n", combination(n, r));
    printf("Permutation (nPr): %d\n", permutation(n, r));

    return 0;
}
