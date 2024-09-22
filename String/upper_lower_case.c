//Converting a string to Uppercase
//The string function strupr() is used to convert the given string into uppercase.

//Program to convert a string to uppercase using library functions:
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char string[100];
//     printf("Enter a string: ");
//     gets(string);
//     strupr(string);
//     printf("String after strupr : %s",string);
//     return 0;
// }

//WAP to read line of text and convert it into uppercase.
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// int main()
// {
//     char str[100];
//     int i=0;
//     printf("Enter a text: ");
//     gets(str);
//     while(str[i]!='\0')
//     {
//         if(!isspace(str[i]))
//         {
//             str[i]=str[i]-32;
//         }
//         i++;
//     }
//     puts(str);
//     return 0;
// }

//Converting a string to lower case
//The string function strlwr() is used to convert the given string into lowercase.
//Program to convert a string to lowercase using libary functions:
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char string[100];
//     printf("Enter the string:\n");
//     gets(string);
//     strlwr(string);
//     puts(string);
//     return 0;
// }