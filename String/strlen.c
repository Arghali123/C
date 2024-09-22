//Finding the length of string
//The function strlen() returns a interger which denotes the length of the string passed into the function.The
//length of string defined as the number of characters present in the string,excluding the null character.

//Program to find the length of string 
#include<stdio.h>
#include<string.h>
int main()
{
    char string[50];
    int len;
    printf("Enter the string: ");
    gets(string);
    len=strlen(string);
    printf("The length of your string is %d",len);
    return 0;
}