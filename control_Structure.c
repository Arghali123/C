
// print 1111
//  #include<stdio.h>
//  int main()
//  {
//      for(int i=1;i<=4;i++)
//      {
//        printf("1");
//      }
//      return 0;
//  }

// print
//  1
//  1
//  1
//  1
//  #include<stdio.h>
//  int main()
//  {
//      for(int i=1;i<=4;i++)
//      {
//          printf("1\n");
//      }
//      return 0;
//  }

// print
//  1111
//  1111
//  #include<stdio.h>
//  int main()
//  {
//      for(int i=1;i<=2;i++)
//      {
//          for(int j=1;j<=4;j++)
//          {
//              printf("1");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// Print
//  1
//  12
//  123
//  1234
//  12345
//  #include<stdio.h>
//  int main()
//  {
//      for(int i=1;i<=5;i++)
//      {
//          for(int j=1;j<=i;j++)
//          {
//              printf("%d",j);
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// Print
//  12345
//  1234
//  123
//  12
//  1
//  #include<stdio.h>
//  int main()
//  {
//      for(int i=5;i>=1;i--)
//      {
//          for(int j=1;j<=i;j++)
//          {
//              printf("%d",j);
//          }
//          printf("\n");
//      }
//      return 0;

// }

// C program to print left half pyramid pattern of star
//  c program to print left half pyramid pattern of star
//  #include <stdio.h>

// int main()
// {
//     int rows = 5;

//     // first loop is for printing the rows
//     for (int i = 0; i < rows; i++) {

//         // loop for printing leading whitespaces
//         for (int j = 0; j < 2 * (rows - i) - 1; j++) {
//             printf(" ");
//         }

//         // loop for printing * character
//         for (int k = 0; k <= i; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

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

// WAP that checks whether the number is Armstrong or not
//  #include<stdio.h>
//  int main()
//  {
//      int num,digit,sum=0;
//      int temp;
//      printf("Enter the number: ");
//      scanf("%d",&num);
//      temp=num;
//      while (num!=0)
//      {
//          digit=num%10;
//          sum+=digit*digit*digit;
//          num=num/10;
//      }
//      if(temp==sum)
//      {
//          printf("\n The number is armstrong");
//      }
//      else{
//          printf("\nThe number is not armstrong");
//      }
//      printf("\n%d",temp);

//     return 0;
// }

// WAP to convert decimal number into binary number
//  #include<stdio.h>
//  int main()
//  {
//  long int decnum,binNum,rev=0,q=1,rem,i=1;
//  printf("Enter the decimal number: ");
//  scanf("%ld",&decnum);
//  while (q!=0)
//  {
//      q=decnum/2;
//      rem=decnum%2;
//      decnum=q;
//      rev=rev+rem*i;
//      i=i*10;
//  }
//  printf("\nThe coressponding binary number is %ld",rev);
//  return 0;

// }

// WAP to calculate the factorial of positive number read from the users
//  #include<stdio.h>
//  int main()
//  {
//      long int num,fact=1;
//      printf("Enter the positive number: ");
//      scanf("%ld",&num);
//      for(int i=1;i<=num;i++)
//      {
//          fact=fact*i;
//      }
//      printf("The factorial of your number is %ld ",fact);
//      return 0;
//  }

// Jumping Statements
/*
The C statements which unconditionally branch(jump) are as follow:
1.)The break statement
2.)The continue statement
3.)The return statement
4.)The goto statement
*/

// 1.)The break statement:terminate the execution of the loop and the control is transferred to the statement immdiately
// following it
//  #include<stdio.h>
//  int main()
//  {
//      int x;
//      for(x=1;x<10;x++)
//      {
//          if(x==5)
//          {
//              break;
//          }
//          printf("%d\t",x);
//      }
//      return 0;
//  }

// 2.)The continue statement:terminates the current iteration of a while,for,do/while statement ans resumes execution back at
// the beginning of the loop body with the next iteration
//  #include<stdio.h>
//  int main()
//  {
//      int x;
//      for(x=1;x<10;x++)
//      {
//          if(x==3)
//          {
//              continue;
//          }
//          printf("%d\t",x);
//      }
//      return 0;
//  }

// The return statement

// 4.)The goto statement
//  #include<stdio.h>
//  int main()
//  {
//      int x=1;
//      daenish:
//      printf("%d\n",x);
//      x++;
//      if(x<10)
//      goto daenish;
//      return 0;
//  }

// WAP to determine the sum of the harmonic series :(1+1/2+1/3+1/4....+1/n) for a given value
//  #include<stdio.h>
//  int main()
//  {
//      float sum=0;
//      int i,n;
//      printf("Enter the number: ");
//      scanf("%d",&n);
//      for(i=1;i<=n;i++)
//      {
//          sum=sum+1.0/i;
//      }
//      printf("The sum of the harmonic series of your number is %.2f",sum);
//      return 0;

// }

// WAP to find the sum of the series :1+x^2+3x^2+4^2+......+nx^2
//  #include<stdio.h>

// int main() {
//     int x, n, i;
//     int sum;

//     // Read x and n values
//     printf("Enter the value of x and n: ");
//     scanf("%d%d", &x, &n);m

//     // Initialize sum after x is known
//     sum = 1 + x * x;

//     // Calculate the sum
//     for (i = 3; i <= n; i++) {
//         sum = sum + i * x * x;
//     }

//     // Print the result
//     printf("The sum is %d\n", sum);

//     return 0;
// }

// WAP to calculate the sum of the sequence :(1/1!+2/2!+3/3!+4/4!.....n/n!)
//  #include<stdio.h>

// int main() {
//     int i, j, n, fact;
//     float sum = 0;

//     printf("Enter n: ");
//     scanf("%d", &n);

//     for(i = 1; i <= n; i++) {
//         fact = 1;
//         for(j = 1; j <= i; j++) {
//             fact *= j;
//         }
//         sum += (float)i / fact;
//     }

//     printf("The sum is %.3f\n", sum);
//     return 0;
// }

