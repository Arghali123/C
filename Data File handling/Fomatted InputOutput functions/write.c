#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char c[200];
    fp=fopen("test.txt","w");
    if(fp==NULL)
    {
        printf("Couldnot open file");
        exit(0);
    }
    printf("Enter string: ");
    gets(c);
    fprintf(fp,"%s",c);
    printf("Completed man");
    fclose(fp);
}