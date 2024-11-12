//Program to find the size of a given file student.txt
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int size;
    FILE *fp;
    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("ERROR-opening a file.\n");
        exit(1);
    }
    fseek(fp,0,SEEK_END);//Go to the end of the file
    size=ftell(fp);
    printf("Size of the file student.txt = %ld bytes\n",size);
    fclose(fp);
    return 0;
}