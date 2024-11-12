#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char filename[30];
    char c;
    printf("Enter the file name: ");
    gets(filename);
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Cannot create file\n");
    }
    else
    {
        printf("Sucessfully file created.\n");
        printf("Enter txt: ");
        while ((c = getchar()) != '\n')
        {
            fputc(c, fp);
        }
    }
    fclose(fp);
}