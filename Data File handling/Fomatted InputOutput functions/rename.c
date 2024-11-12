//Some text file is given,create another file replacing the following words "Ram" to "Hari",
//"Sita" to "Gita" and "Govinda" to "Shiva".
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp,*fpp;
    char c[15];
    fp=fopen("test1.txt","r");
    if(fp==NULL)
    {
        printf("Couldnot Open file");
        exit(0);
    }
    fpp=fopen("replace.txt","w");
    if(fpp==NULL)
    {
        printf("Couldnot open or create file");
        exit(0);
    }
    while(fscanf(fp,"%s",&c)!=EOF)
    {
        if(strcmp(c,"Ram")==0)
        {
            fprintf(fpp,"Hari ",c);
        }
        else if(strcmp(c,"Sita")==0)
        {
            fprintf(fpp,"Gita ",c);
        }
        else if(strcmp(c,"Govinda")==0)
        {
            fprintf(fpp,"Shiva ",c);
        }
        else
        {
            fprintf(fpp,"%s ",c);
        }
    }
    printf("Completed sucessfully");
    fclose(fp);
    fclose(fpp);
}