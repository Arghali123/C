//4. Check if a number is a multiple of 5 and divisible by 7 but not 11:
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("%d is a multiple of 5.\n", num);
    }
    if (num % 7 == 0 && num % 11 != 0) {
        printf("%d is divisible by 7 but not by 11.\n", num);
    }

    return 0;
}
