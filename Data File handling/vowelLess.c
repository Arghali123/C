// Given a text file,create another file for deleting all the vowel letters(a,e,i,o,u)
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *sfp, *dfp;
    char source_file[30], destination_file[30];
    char c;
    printf("Enter the name of source file: ");
    gets(source_file);
    printf("Enter the name of destination file: ");
    gets(destination_file);
    sfp = fopen(source_file, "r");
    if (sfp == NULL)
    {
        printf("Couldnot open source file.\n");
        exit(0);
    }
    dfp = fopen(destination_file, "w");
    if (dfp == NULL)
    {
        printf("Couldnot open destination file");
        exit(0);
    }
    while ((c = fgetc(sfp)) != EOF)
    {
        if ((c != 'a') && (c != 'e') && (c != 'i') && (c != 'o') && (c != 'u'))
        {
            fputc(c, dfp);
        }
    }
    printf("Sucessfully copied source file with no vowel letters.\n");
    fclose(sfp);
    fclose(dfp);
}