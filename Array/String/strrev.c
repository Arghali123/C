#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter the string: ");
    gets(string);
    strrev(string);
    printf("String After strrev: %s",string);
    return 0;
}