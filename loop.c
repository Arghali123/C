// #include<stdio.h>
// int main()
// {
//     int i=1;
//     do{
//         printf("%d\n",i);
//         i++;
//     } while(i<=5);

//    return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     printf("I am daenish");
//    return 0;
//     // do{
//     //     printf("%d\n",i);
//     //     i++;
//     // } while(i<=5);//unreachable code

// }

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while (i<=5)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

/*
WAP to print the sum of digits

n = 12345
Expected output = 15

n = 589
Expected = 22
*/

// Multiplication of given number
//  #include<stdio.h>
//  int main()
//  {
//      int n;
//      printf("Enter the number:\n");
//      scanf("%d",&n);
//      int result=0;
//      for(int i=1;i<=10;i++)
//      {
//        result=n*i;
//        printf("%d\n",result);
//      }
//      return 0;
//  }

// WAP to sum of given number
//  #include<stdio.h>
//  int main()
//  {
//      int n,sum=0,r;
//      printf("Enter the numbers:\n");
//      scanf("%d",&n);
//      while(n>0)
//      {
//      r=n%10;//7,5
//      sum+=r;//7+5
//      n/=10;//5,0.5
//      }
//      printf("The sum is %d",sum);
//     return 0;
//  }

// program read a number and find and display its reverse
//  #include<stdio.h>
//  int main()
//  {
//      int n,r,output=0;
//      printf("Enter the number:\n");//65
//      scanf("%d",&n);
//      while (n!=0)
//      {
//          r=n%10;//5,6
//          output=output*10+r;//0*5+5,5*10+6=56
//          n/=10;//6,0.6
//      }
//      printf("The reverse of the given number is %d",output);
//      return 0;
//  }

/*Print this
4       8       12      16      20
8       12      16      20      24
12      16      20      24      28
16      20      24      28      32
20      24      28      32      36
*/
// #include<stdio.h>
// int main()
// {
//     int i,j,sum;
//     for(i=0;i<5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//           sum=(i+j)*4;
//           printf("%d\t",sum);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Break and continue
//  #include<stdio.h>
//  int main()
//  {
//      for (int i =1; i <=10; i++)
//      {
//          printf("%d\n",i);
//          if(i==7)
//          {
//              continue;//7 bahak sab print hunxa
//          }
//          //printf("%d\n",i);
//          printf("hari\n");
//      }
//      return 0;

// }

// #include<stdio.h>
// int main()
// {
//     for (int i =1; i <=10; i++)
//     {
//         if(i==7)
//         {
//             break;//6 samma print hunxa
//         }
//         printf("%d\n",i);
//     }
//     return 0;

// }

// Switch-case statement
// #include <stdio.h>
// int main()
// {
//     int day;
//     printf("Enter a number(1--7)\n");
//     scanf("%d", &day);
//     switch (day)
//     {
//     case 1:
//         printf("Sunday");
//         break;
//     case 2:
//         printf("Monday");
//         break;
//     case 3:
//         printf("Tuesday");
//         break;
//     case 4:
//         printf("Wednesday");
//         break;
//     case 5:
//         printf("Thusday");
//         break;
//     case 6:
//         printf("Friday");
//         break;
//     case 7:
//         printf("Sataurday");
//         break;

//     default:
//         printf("Invalid input\n");
//         printf("Hari\n");
//         break;
//     }
//     return 0;
// }

// Make a calulater using switch-case statement
// #include <stdio.h>

// int main()
// {
//     float operand1, operand2, result;
//     char o;
    
//     printf("Enter the first operand:\n");
//     scanf("%f", &operand1);

//     printf("Choose an operator [+,-,*,/]:\n");
//     scanf(" %c", &o);  // Note the space before %c

//     printf("Enter the second operand:\n");
//     scanf("%f", &operand2);

//     switch(o)
//     {
//         case '+':
//             result = operand1 + operand2;
//             printf("%.2f\n", result);
//             break;

//         case '-':
//             result = operand1 - operand2;
//             printf("%.2f\n", result);
//             break;

//         case '*':
//             result = operand1 * operand2;
//             printf("%.2f\n", result);
//             break;

//         case '/':
//             if (operand2 != 0) {
//                 result = operand1 / operand2;
//                 printf("%.2f\n", result);
//             } else {
//                 printf("Error: Division by zero\n");
//             }
//             break;

//         default:
//             printf("Invalid operator\n");
//             break;
//     }

//     return 0;
// }

