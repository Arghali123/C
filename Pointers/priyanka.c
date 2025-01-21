//String and pointer
//Programme to demostrate the relationship between pointer and string
#include<stdio.h>
#include<string.h>
int main()
{
    char *namaste="NAMASKAR SIR";
    char name[20];
    printf("Enter name: ");
    gets(name);
    puts(namaste);
    printf("\nNamaskar %s Sir",name);
    return 0;
}