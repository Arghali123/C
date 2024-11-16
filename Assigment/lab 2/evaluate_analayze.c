//6. Evaluate and analyze expressions for x=2, z=4:
#include <stdio.h>

int main() {
    int x = 2, z = 4, y;

    y = x++ + ++x;   // x = 2 -> x++ = 2, ++x = 4 -> y = 2 + 4 = 6
    printf("y = x++ + ++x: %d\n", y);

    x = 2;           // Reset x
    y = ++x + ++x;   // ++x = 3, ++x = 4 -> y = 3 + 4 = 7
    printf("y = ++x + ++x: %d\n", y);

    x = 2;           // Reset x
    y = ++x + ++x + ++x; // ++x = 3, ++x = 4, ++x = 5 -> y = 3 + 4 + 5 = 12
    printf("y = ++x + ++x + ++x: %d\n", y);

    x = 2;           // Reset x
    y = x > z;       // x=2, z=4 -> y = 0 (false)
    printf("y = x > z: %d\n", y);

    y = x > z ? x : z; // x=2, z=4 -> y = z = 4
    printf("y = x > z ? x : z: %d\n", y);

    y = x & z;       // x=2 (10), z=4 (100) -> y = 0 (binary AND)
    printf("y = x & z: %d\n", y);

    y = x >> 2 + z << 1; // x >> 2 = 0, z << 1 = 8 -> y = 8
    printf("y = x >> 2 + z << 1: %d\n", y);

    return 0;
}
