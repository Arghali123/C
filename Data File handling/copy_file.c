// Program to open a file and copy all its content to another file.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *sfp, *dfp;
    char source_file[30], destination_file[30];
    char c;
    printf("Enter name of Source File: ");
    gets(source_file);
    printf("Enter name of Destionaion File: ");
    gets(destination_file);
    sfp = fopen(source_file, "r");
    if (sfp == NULL)
    {
        printf("Couldnot open Source File\n");
        exit(0);
    }
    else
    {
        printf("Sucessfully opened Source File\n");
        dfp = fopen(destination_file, "w");
        if (dfp == NULL)
        {
            printf("Could not open destination file.\n");
            exit(0);
        }
        else
        {
            printf("Sucessfully opened/created destination file\n");
            while ((c = fgetc(sfp)) != EOF)
            {
                fputc(c, dfp);
            }
            printf("Copied sucessfully");
        }
    }
    fclose(sfp);
    fclose(dfp);
}