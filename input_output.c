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


//Unformatted I/O
//The I/O functions that donot allow to read and display the data in desired format,basically deals with single 
//character or string of characters.

//1.)getChar() and putChar()
//Wap to read the single character from keyboard using getChar()func & display on the screen using putChar()func
// #include<stdio.h>
// int main()
// {
//   char gender;
//   printf("Enter Gender M or F:");
//   gender=getchar();//waits until a key is pressed & then assigns this char to char_var.
//   printf("%c",gender);
//   return 0;

// }

//2.)getch(),getche() and putch()
//Wap to read 2 characters from keyboars:one using getch() & anothee using getche() func and display
//using putch()func
// #include<stdio.h>
// int main()
// {
//   char ch1,ch2;
//   printf("Enter 1st char:");
//   ch1=getch();
//   printf("\nEnter the 2nd char:");
//   ch2=getche();
//   printf("\n1st char:");
//   putch(ch1);
//   printf("\n2nd char:");
//   putch(ch2);
//   return 0;
// }

//3.)gets() and puts()
//WAP to read a string with multiple words(i.e. string with space) using gets() & display using puts()func
// #include<stdio.h>
// int main()
// {
//   char name[20];
//   printf("Enter the name: ");
//   gets(name);
//   printf("Your name is : ");
//   puts(name);
//   return 0;
// }

#include<stdio.h>
int main()
{
    int a=10;
    double b=15.5;
    char c='p';


    //size ko lai %zu use hunxa

    printf("The size of int: %zu bytes\n",sizeof(int));
    printf("The size of double: %zu bytes\n",sizeof(double));
    printf("The size of char: %zu bytes\n",sizeof(char));
    return 0;

}
// #include<stdio.h>
// int main()
// {
//   char n [7]="1234";
//   printf("%s\n",n);
//   printf("%10.3s",n);
//  printf("%10.2s",n);
//  printf("%10.1s",n);
//        return 0;
// }
