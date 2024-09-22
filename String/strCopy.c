//Copying string
//The string function strcpy() is used to copy one string into another string.There is another function strncpy()
//used to copy n characters to string.

//Program to illustrate the use of strcpy() functions
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char x[]="Hello my name is Daenish Arghali";
//     char y[50],z[50];
//     printf("Original string: %s\n",x);
//     strcpy(y,x);
//     printf("Copied string: %s",y);
//     return 0;
// }

//Program to copy the content of one string to another without using strcpy()
// #include<stdio.h>
// int main()
// {
//     char copy[50],paste[50];
//     int i;
//     printf("Enter your name: ");
//     gets(copy);
//     for(i=0;copy[i]!='\0';i++)
//     {
//         paste[i]=copy[i];
//     }
//     paste[i]='\0';
//     printf("%d\n",i);
//     printf("The name is: ");
//     puts(paste);
//     return 0;
// }

