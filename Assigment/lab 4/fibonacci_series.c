//3. Fibonacci Series Up to 300
#include <stdio.h>

int main() {
    int a = 0, b = 1, next = 0;
    printf("Fibonacci series up to 300:\n");

    while (next <= 300) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
    return 0;
}
