//Program to copy the content of one string to another without using strcpy().
#include<stdio.h>
int main()
{
    char copy[50],paste[50];
    int i=0;
    printf("Enter Something to copy: ");
    gets(copy);
    while(copy[i]!='\0')
    {
        paste[i]=copy[i];
        i++;
    }
    paste[i]='\0';
    printf("The name is Pasted as: %s",paste);
    return 0;
}

