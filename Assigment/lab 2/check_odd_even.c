//5. Check odd or even number:
//a.)(a) Using modulus operator:
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//         printf("%d is even.\n", num);
//     else
//         printf("%d is odd.\n", num);

//     return 0;
// }

//b.)Using bitwise operator:
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if ((num & 1) == 0)
//         printf("%d is even.\n", num);
//     else
//         printf("%d is odd.\n", num);

//     return 0;
// }

//(c) Without modulus or bitwise:
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if ((num / 2) * 2 == num)
//         printf("%d is even.\n", num);
//     else
//         printf("%d is odd.\n", num);

//     return 0;
// }


//(d) Using conditional operator:
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d is %s.\n", num, (num % 2 == 0) ? "even" : "odd");

    return 0;
}
