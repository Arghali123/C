//4. Swap two variables:
//a.)Using a third variable:
// #include <stdio.h>

// int main() {
//     int a, b, temp;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     temp = a;
//     a = b;
//     b = temp;

//     printf("After swapping: a = %d, b = %d\n", a, b);

//     return 0;
// }

//b.)Without using a third variable:
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

