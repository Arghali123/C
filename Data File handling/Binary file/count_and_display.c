// Program to count the  numbers of vowels,consonants,digits,space and new  lines in a file and display all the contents
// on screen.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int v=0,c=0,digit=0,sp=0,nl=0;
    fp=fopen("myfile.txt","r");
    if(fp==NULL)
    {
        printf("Couldnot open file");
        exit(1);
    }
    ch=getc(fp);
    while(ch!=EOF)
    {
        if(ch=='\n')
        {
            nl++;
        }
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            v++;
        }
        else if(ch==' ')
        {
            sp++;
        }
        else if(ch>='0'&&ch<='9')
        {
            digit++;
        }
        else
        {
            c++;
        }
        ch=getc(fp);
    }
    printf("There are:\n %d vowel,%d consonant,%d degits,%d spaces and %d newlines.\n",v,v,digit,sp,nl);
    rewind(fp);
    ch=getc(fp);
    while(ch!=EOF)
    {
        putchar(ch);
        ch=getc(fp);
    }
    fclose(fp);
    return 0;
}