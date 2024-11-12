//Prorgame for combining two strings without using strcat() function.
#include<stdio.h>
int main()
{
    int i,j,k;
    char F_name[10]="Daenish";
    char M_name[10]="Bahadur";
    char L_name[10]="Arghali";
    char name[30];
    for(i=0;F_name[i]!='\0';i++)
    {
        name[i]=F_name[i];
    }
    name[i]=' ';
    for(j=0;M_name[j]!='\0';j++)
    {
        name[i+j+1]=M_name[j];
    }
    name[i+j+1]=' ';
    for(k=0;L_name[k]!='\0';k++)
    {
        name[i+j+k+2]=L_name[k];
    }
    name[i+j+k+2]='\0';
    printf("Name: %s",name);
    return 0;
}