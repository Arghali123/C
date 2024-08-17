// #include <stdio.h>

// int main() {
//     int a;
//     double b;
  //  char c;
//     char str[100];

//     printf("Enter an integer: ");
//     scanf("%d", &a);
//     printf("You entered: %d\n", a);

//     printf("Enter a floating-point number: ");
//     scanf("%lf", &b);
//     printf("You entered: %lf\n", b);

    // printf("Enter a character:");
    // scanf(" %c", &c); // Note the space before %c to consume any leftover newline
    // printf("You entered: %c\n", c);

//     printf("Enter a string: ");
//     scanf("%s", str); // Reads a string until a whitespace is encountered
//     printf("You entered: %s\n", str);

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int value=42;
//     int negative=-42;

//     printf("Basic integer: %d\n",value);
//     printf("Field width 5: %5d\n",value);
//     printf("Left justified field width 5: %-5d\n",value);
//     printf("Right justified field width 5: %5d\n",value);
//     printf("Zero-padded field width 5: %05d\n",value);

//     printf("Signed positive: %+d\n",value);
//     printf("Signed negative: %+d\n",negative);

//     printf("Left-justified,signed,field width 5: %-+5d\n",value);
//     return 0;
// }

//Formatted I/O
/*
The function which allow input or output data to format according to the user's requirement are known as formatted I\O
functions.The input function scanf() and output function printf() are formatted I/O functions.For e.g:The formatted
functions can be used to specify the numbers of digits to be displayed after decimal point,number of spaces before the 
data items and the position where the output is to be displayed.
*/

//WAP to take input string from the users.Your program should allow the user to input uppercase only.
// #include <stdio.h>

// int main() {
//     char inputString[20];

//     // Input for the string
//     printf("Enter a string in uppercase only: ");
//     scanf("%19[A-Z]", inputString); => %[character],means that only the characters specified by the breackets are allowed.

//     // Output the valid input
//     printf("Your input: %s\n", inputString);

//     return 0;
// }

//WAP to read a string with a multiple words(i.e. with space) using scanf() function and display on the screen.
// #include<stdio.h>
// int main()
// {
//     char string[100];
//     printf("Enter your name:");
//     scanf("%[^\n]",string);=> %[^character],the characters specified after the caret(^) are not allowed
//     printf("Your name is %s",string);
//     return 0;
// }

