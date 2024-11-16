//6. Copy One String to Another With and Without Using String Handling Function
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char src[100], dest[100];
//     printf("Enter a string: ");
//     fgets(src, sizeof(src), stdin);

//     strcpy(dest, src);
//     printf("Copied string: %s", dest);
//     return 0;
// }

#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter a string: ");
    fgets(src, sizeof(src), stdin);

    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    printf("Copied string: %s", dest);
    return 0;
}
