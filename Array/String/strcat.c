#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="Happy ";
    char s2[20]="New Year";
    char s3[50];
    printf("After concatination: %s",strcat(s1,s2));
    return 0;
}