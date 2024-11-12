#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len;
    printf("Enter the string: ");
    gets(str);
    len=strlen(str);
    printf("The lenght of String: %d",len);
    return 0;
}