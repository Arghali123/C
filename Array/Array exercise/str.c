// WAP to copy the content of one string to another sting without the use of strcpy() function
//  #include<stdio.h>
//  #include<string.h>
//  int main()
//  {
//      char copy[20],paste[20];
//      int i;
//      printf("Enter any string: ");
//      gets(copy);
//      for(i=0;copy[i]!='\0';i++)
//      {
//          paste[i]=copy[i];
//      }
//      paste[i]='\0';
//      puts(paste);
//      return 0;
//  }

// WAP to read a string from keyboard and count the numbers of vowel,consonant,space,semi-colons and commas in the string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, len;
//     int vowel = 0, consonant = 0, space = 0, semi_colon = 0, comma = 0;
//     char str[50];
//     printf("Enter the string: ");
//     gets(str);
//     len = strlen(str);
//     for (i = 0; i < len; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str == 'u')
//         {
//             vowel++;
//         }
//         else if(str[i]==' ')
//         {
//             space++;
//         }
//         else if(str[i]==';')
//         {
//             semi_colon++;
//         }
//         else if(str[i]==',')
//         {
//             comma++;
//         }
//         else
//         {
//             consonant++;
//         }
//     }
//     printf("The number of vowel is %d\n",vowel);
//     printf("The number of consonant is %d\n",consonant);
//     printf("The number of space  is %d\n",space);
//     printf("The number of comma  is %d\n",comma);
//     printf("The number of semi-colons  is %d\n",semi_colon);
//     return 0;
// }

