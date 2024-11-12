#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter the string: ");
    gets(string);
    strupr(string);
    printf("String after strupr: %s",string);
    return 0;
}