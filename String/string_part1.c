//Strings
//->Strings are the array character i.e they are characters arranged one after another in memory.Each characters
//within the string is stored within one element of tha array sucessively.A string is always terminated by a null
//character (i.e. slash zero \0)

//When the compiler assigns a character string to a character array,it automatically supplies a null character('\0')
//at the end of the string.Thus, the size should be equal to the maximum number of characters plus 1.

//Initializing strings
//Strings are initialized in either of the following two forms:
// char  name[4]={'R','A','M','\0'};
// char name[]={'R','A','M','\0'};
// char city[9]={'N','E','W',' ','Y','O','R','K','\0'};
// char name[4]="RAM";
// char name[]="RAM";
//when we initialize a character array by listing it's elements,the null terminator or the size of the array must be provided
//explicitly

//String initialization
// #include<stdio.h>
// int main()
// {
//     char city[9]={'N','E','W',' ','Y','O','R','K','\0'};
//     int i=0;
//     while(city[i]!='\0')
//     {
//         printf("%c\t",city[i]);
//         i++;
//     }
//     return 0;
// }

//Reading strings from terminal
//The input function scanf can be used with %s format specification to read in a string of characters.No ampersand(&)
//is required before variable name.

//Program to demonstrate scanf() function which terminates its input on the first white space it encounters
// #include<stdio.h>
// int main()
// {
//     char name[20];
//     printf("\nEnter your name:");
//     scanf("%s",name);
//     printf("\nYour name is %s",name);
//     return 0;
// }

//Some version of scanf() support the following conversion specifications for strings:
// %[characters]
// %[^characters]
//The specification %[characters] means that only the characters specified within the brackets are allowed in the
//input of string. If the input string contains any other characters,the reading of the string will be terminated
//at the first encounter of such a character.

//The specification %[^characters] means that the characters specified after the caret(^) are not allowed in the 
//string and the reading will be terminated.

// #include<stdio.h>
// int main()
// {
//     char name[20];
//     printf("Enter your name (in upper case):");
//     scanf("%[A-Z]",name);
//     printf("\nYour name is %s",name);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char name[20];
//     printf("Enter your full name: ");
//     scanf("%[^\n]",name);
//     printf("Your name is %s",name);
//     return 0;
// }

//String Manipulation using libary function
//The <string.h> header file defines some string handling functions such as strcopy(),strlen(),strrev(),strcmp(),
//strlen() etc which are used to manipulate the string data.
