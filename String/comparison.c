//String Comparison
//The function strcmp(s1,s2):compares the string s1 to the string s2.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the String1: ");
    gets(str1);
    printf("Enter the String2: ");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Two strings are identical!!");
    }
    if(strcmp(str1,str2)<0)
    {
        printf("String1 is less than String2!!");
    }
    if(strcmp(str1,str2)>0)
    {
        printf("String1 is greater then String2!!");
    }
    return 0;
}