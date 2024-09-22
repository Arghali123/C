// Concatinating two strings
// The string function strcat() is used to concatenate two strings.

// Example
//  #include<stdio.h>
//  #include<string.h>
//  int main()
//  {
//      char fname[20]="Daenish";
//      char lname[]="Arghali";
//      char space[10]=" ";
//      printf("The concatinated value is %s",strcat(fname,lname));
//      return 0;
//  }

// WAP to read a string from keyboard(until enter key) and count the number of vowels,consonants,spaces,semi-colon and commas in the strig
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include this to use the isalpha() function

int main()
{
    char s[50]; // Change to char array
    int len, i, space = 0, vowel = 0, consonant = 0, semicolon = 0, comma = 0;

    printf("Enter the string:\n");
    fgets(s, sizeof(s), stdin); // Use fgets for safer input

    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I') // Include uppercase vowels
        {
            vowel++;
        }
        else if (s[i] == ' ')
        {
            space++;
        }
        else if (s[i] == ';')
        {
            semicolon++;
        }
        else if (s[i] == ',')
        {
            comma++;
        }
        else if (isalpha(s[i])) // Check if it's an alphabetic character
        {
            consonant++;
        }
    }

    printf("The number of vowels is %d\n", vowel);
    printf("The number of spaces is %d\n", space);
    printf("The number of semicolons is %d\n", semicolon);
    printf("The number of commas is %d\n", comma);
    printf("The number of consonants is %d\n", consonant);

    return 0;
}
