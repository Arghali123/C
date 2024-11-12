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
        printf("Two strings are Identical,which are String1= %s String2= %s",str1,str2);
    }
    if(strcmp(str1,str2)<0)
    {
        printf("Two strings are not Identical and String1= %s is less then String2= %s",str1,str2); 
    }
    if(strcmp(str1,str2)>0)
    {
        printf("Two strings are not Identical and String1= %s is greater then String2= %s",str1,str2);
    }
    return 0;
}