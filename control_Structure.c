//1.)for loop

//WAP to display numbers "Ram" upto 10 times
// #include <stdio.h>
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         if(i==5)
//         {
//             printf("Sita\n");
//             continue;
//         }
//         printf("Ram\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         printf("Ram\n");
//     }
// }

//print 1111
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//       printf("1");
//     }
//     return 0;
// }

//print
// 1
// 1
// 1
// 1
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         printf("1\n");
//     }
//     return 0;
// }

//print 
// 1111
// 1111
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=2;i++)
//     {
//         for(int j=1;j<=4;j++)
//         {
//             printf("1");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Print 
// 1
// 12
// 123
// 1234
// 12345
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Print
// 12345
// 1234
// 123
// 12
// 1
// #include<stdio.h>
// int main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;

// }

//C program to print left half pyramid pattern of star
// c program to print left half pyramid pattern of star
#include <stdio.h>

int main()
{
    int rows = 5;

    // first loop is for printing the rows
    for (int i = 0; i < rows; i++) {

        // loop for printing leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // loop for printing * character
        for (int k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}