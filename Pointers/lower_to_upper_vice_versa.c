//C program that transforms a lower letter to uppercase and vice-versa by passing of pointer to a function.
#include <stdio.h>
#include <ctype.h>  // For tolower() and toupper() functions

// Function to transform a letter's case
void transformCase(char *ch) {
    if (*ch >= 'a' && *ch <= 'z') {
        // If the character is lowercase, convert to uppercase
        *ch = toupper(*ch);
    } else if (*ch >= 'A' && *ch <= 'Z') {
        // If the character is uppercase, convert to lowercase
        *ch = tolower(*ch);
    }
}

int main() {
    char letter;

    // Input a letter from the user
    printf("Enter a letter: ");
    scanf("%c", &letter);

    // Call the function and pass the address of the letter
    transformCase(&letter);

    // Output the transformed letter
    printf("Transformed letter: %c\n", letter);

    return 0;
}