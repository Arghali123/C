// Program to reverse the contents of string without using strrev()function
//  #include<stdio.h>
//  #include<string.h>
//  int main()
//  {
//      char str[20],rev[20];
//      int i,j;
//      printf("Enter String: ");
//      gets(str);
//      for(i=strlen(str)-1,j=0;i>=0;i--,j++)
//      {
//          rev[j]=str[i];
//      }
//      rev[j]='\0';
//      puts(rev);
//      return 0;
//  }

// WAP for combining two strings without usinf strcat()function.
#include <stdio.h>
int main()
{
    int i, j, k;
    char f_name[10] = "Bijay";
    char m_name[10] = "Kumar";
    char l_name[10] = "Sharma";
    char name[30];
    for (i = 0; f_name[i] != '\0'; i++)
    {
        name[i] = f_name[i];
    }
    name[i] = ' ';

    for (j = 0; m_name[j] != '\0'; j++)
    {
        name[i + j + 1] = m_name[j];
    }
    name[i + j + 1] = ' ';
   
    for (k = 0; l_name != '\0'; k++)
    {
        name[i + j + k + 2] = l_name[k];
    }
    name[i + j + k + 2] = '\0';

    printf("%s", name);
    return 0;
}