//Given a text file,create another file deleting the following words "three","bad" and "time".
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    FILE *fp, *fpp;
    char c[12];
    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        printf("Couldnot Open");
        exit(0);
    }
    fpp = fopen("priyanka.txt", "w");
    if (fpp == NULL)
    {
        printf("Couldnot open or create file");
        exit(0);
    }
    while (fscanf(fp, "%s", &c) != EOF)
    {
        if ((strcmp(c, "three") != 0) && (strcmp(c, "bad") != 0) && (strcmp(c, "time") != 0))
        {

            fprintf(fpp, "%s ", c);
        }
    }
    printf("\nCompleted Sucessfully");
    fclose(fp);
    fclose(fpp);
}