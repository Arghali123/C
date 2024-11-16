//1. Find the Biggest Among Three Numbers Using Pointers
#include <stdio.h>

int main() {
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", p1, p2, p3);

    if (*p1 > *p2 && *p1 > *p3)
        printf("The biggest number is %d\n", *p1);
    else if (*p2 > *p1 && *p2 > *p3)
        printf("The biggest number is %d\n", *p2);
    else
        printf("The biggest number is %d\n", *p3);

    return 0;
}
