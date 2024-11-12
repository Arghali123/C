#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter the string: ");
    gets(string);
    strlwr(string);
    printf("String after strlwr: %s",string);
    return 0;
}