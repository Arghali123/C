// WAP to display the sum of the following series upto n terms:
// Sum=x-x^2+x^3-x^4+.....
// #include<stdio.h>
// #include<math.h>

// int main() {
//     int x, n;
//     int sum = 0;

//     // Input the values of x and n
//     printf("Enter the value of x and n: ");
//     scanf("%d%d", &x, &n);

//     // Calculate the sum of the series
//     for(int i = 1; i <= n; i++) {
//         if(i % 2 == 0) {
//             sum = sum - pow(x, i);
//         } else {
//             sum = sum + pow(x, i);
//         }
//     }

//     // Output the result
//     printf("sum = %d\n", sum);

//     return 0;
// }

// Program to find the X=a-a^2/2+a^3/3-a^4/4.......upto n term
//  #include<stdio.h>
//  #include<math.h>
//  int main()
//  {
//      int a,n,i;
//      int X=0;
//      printf("Enter the value a and n");
//      scanf("%d%d",&a,&n);
//      for(i=1;i<=n;i++)
//      {
//          if
//      }
//  }

// Program to display all the prime numbers less then 10
//  #include<stdio.h>
//  int main()
//  {
//      int i,j,prime;
//      printf("Prime numbers from 1 to 10 are:\n");
//      for(i=2;i<10;i++)
//      {
//              prime=1;
//          for(j=2;j<i;j++)
//          {
//              if(i%j == 0)
//              {
//                  prime=0;
//                  break;
//              }

//         }
//         if(prime)
//         printf("%d\t",i);
//     }
//     return 0;
// }

// WAP to display the following menu
// 1.)To find the area of the circle
// 2.)To check the number is even or odd
// 3.)To find sum of the number
// 4.)Exit
// perform the above task until user want to exit
// #include <stdio.h>
// #include <stdlib.h>
// #define True 1
// #define PI 3.1415
// int main()
// {
//     int choice, n, N, i;
//     float r, a, num, sum;
//     printf("1. Find the area of circle\n");
//     printf("2. Check the given number is odd or even\n");
//     printf("3. Find the sum of N numbers\n");
//     printf("4. Exit\n");
//     while (True)
//     {
//         printf("Enter a choice: \n");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter the radius: \n");
//             scanf("%f", &r);
//             a = PI * r * r;
//             printf("The area of cicle is %.2f \n", a);
//             break;

//         case 2:
//             printf("Enter a number : \n");
//             scanf("%d", &n);
//             if (n % 2 == 0)
//                 printf("%d is even\n", n);
//             else
//                 printf("%d is odd number\n", n);
//             break;

//         case 3:
//             sum = 0;
//             printf("Enter the number: \n");
//             scanf("%d", &N);
//             printf("Enter %d numbers :", N);
//             for (i = 0; i < N; i++)
//             {
//                 scanf("%f", &num);
//                 sum = sum + num;
//             }
//             printf("The sum is %.3f", sum);
//             break;

//         case 4:
//             exit(0);//The exit(0) function is called to terminate the program immediately.
//                     //The 0 status typically indicates successful execution, while any non-zero value can indicate an error or abnormal termination.

//         default:
//             printf("Wrong Choice!! try again\n");
//         }
//     }
//     return 0;
// }

//WAP to input an integer number and checks whether it is prime number or not
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("Enter the number: \n");
//     scanf("%d",&n);
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             printf("%d is not a prime number",n);
//             break;
//         }
//     }
//     if(i==n)
//     {
//         printf("%d is prime number",n);
    
//     }
//     return 0;
// }

//Program to print first 10 terms of the following series using for loop:1 5 9 13......
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     n=1;
//     printf("\nThe first 10 terms of the given series are :\n");
//     for(i=1;i<=10;i++)
//     {
//      printf("%d\t",n);
//      n+=4;
//     }
//     return 0;
// }