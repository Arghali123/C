//7. Concatenate Two Strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0; // Remove newline
    strcat(str1, str2);
    printf("Concatenated string: %s", str1);
    return 0;
}
