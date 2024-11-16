//4.)Sum of Series p+p^2+p^3+......p^n.
#include <stdio.h>
#include <math.h>

int main() {
    int p, n;
    long long sum = 0;
    printf("Enter base p: ");
    scanf("%d", &p);
    printf("Enter number of terms n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += pow(p, i);
    }

    printf("Sum of the series is: %lld\n", sum);
    return 0;
}
