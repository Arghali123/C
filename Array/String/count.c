// Program to read a string from keyboard(until enter key) and count the numbers of vowels,consonants,spaces,semi-colons and commas in that string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[80];
    int len, vowels = 0, consonants = 0, spaces = 0, semi_colons = 0, commas = 0;
    printf("Enter String: ");
    gets(s);
    len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
          vowels++;
        }
        else if(s[i]==' ')
        {
            spaces++;
        }
        else if(s[i]==',')
        {
            commas++;
        }
        else if(s[i]==';')
        {
            semi_colons++;
        }
        else
        {
            consonants++;
        }
    }
    printf("There are %d vowels\n",vowels);
    printf("There are %d consonants\n",consonants);
    printf("There are %d spaces\n",spaces);
    printf("There are %d semi-colons\n",semi_colons);
    printf("There are %d commas\n",commas);

}