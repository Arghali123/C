//Program to append some text to a file by reading file name from user
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char filename[30];
    char c;
    printf("Enter the file name: ");
    gets(filename);
    fp=fopen(filename,"a");
    if(fp==NULL)
    {
        printf("Cannot create or open file");
        exit(0);
    }
    else
    {
        printf("Enter text to append to file %s:\n",filename);
        while((c=getchar())!='\n')
        {
            fputc(c,fp);
        }
    }
    fclose(fp);
}