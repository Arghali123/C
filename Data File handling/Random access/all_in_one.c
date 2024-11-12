//Program to illustrate the uses of fseek,ftell and rewind in random access file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("Error on opening file");
        exit(1);
    }
    printf("Position Pointer: %ld\n",ftell(fp));
    fseek(fp,0,2);
    printf("Position Pointer= %d\n",ftell(fp));
    rewind(fp);
    printf("Position Pointer= %ld\n",ftell(fp));
    fclose(fp);
    return 0;
}