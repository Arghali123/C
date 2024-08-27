//1.)Print 
/*
daenish
aenis
eni
n
*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//   char str[]="daenish";
//   int len=strlen(str);
//   for(int i=0;i<len;i++)
//   {
//     for(int j=i;j<len-i;j++)
//     {
//       printf("%c",str[j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }

//2.)WAP to find the sum and average of 5 subjects using while
// #include<stdio.h>
// int main()
// {
//   int n=5,marks,sum=0;
//   float avg;
//   int count=0;
  
//   //loop to get the marks for 5 subjects
//   while(count<5)
//   {
//     printf("Enter the marks %d:",count+1);
//     scanf("%d",&marks);
//     sum+=marks;
//     count++;
//   }
//   avg=sum/n;
//   printf("Sum of marks: %d\n",sum);
//   printf("Average of marks is %.3f",avg);
//   return 0;
// }

//3.)WAP to check whether the given number is palindrome or not
// #include<stdio.h>
// int main()
// {
//   int n,digit,sum=0;
//   printf("Enter the number:\n");
//   scanf("%d",&n);
//   const int p=n;
//   while(n>0)
//   {
//     digit=n%10;//for the last digit
//     sum=10*sum+digit;
//     n/=10;//For the last digit
//   }
  
//   if(p==sum)
//   {
//   printf("The number is palindrome");
//   }
//   else
//   {
//     printf("The number is not palindrome");
//   }
//   return 0;
// }

//4.)WAP to find the sum of even digits of a given number
//example:input(123456) output(2,4,6)=12
// #include<stdio.h>
// int main()
// {
//     int num,digit,sum=0;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         digit=num%10;//for the last number
//         if(digit%2==0)
//         {
//             sum+=digit;
//         }
//         num/=10;

//     }
//     printf("The sum of even digits is: %d",sum);
//     return 0;
// }

//5.)WAP to display the following pattern
/*
1
23
345
4567
56789
*/
// #include<stdio.h>
// int main()
// {
//     int i,j,p;
//     for(i=0;i<=4;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             p=(i+j)+1;
//             printf("%d\t",p);
//         }
//         printf("\n");

//     }
//     return 0;
// }

// //6.)WAP to print fibonacci series:1,1,2,3,5,8.....upto n term 
// #include <stdio.h>
// int main()
// {
//     int a=1,b=1,sum=0,n;
//     printf("Enter the number:");
//     scanf("%d",&n);

//     do
//     {
//         printf("%d\t",a);
//         sum=a+b;
//         a=b;
//         b=sum;
//     }while(n>=a);
//     return 0;
// }

//7.)WAP to find the sum of number from 1-100 which is exactly divisible by 5 but not by 3
// #include <stdio.h>
// int main()
// {
//     int sum=0;
//     for(int i=1;i<=100;i++)
//     {
//         if(i%5 ==0 && i%3!=0 )
//         {
//             sum=sum+i;
//         }
//     }
//     printf("The sum is %d",sum);
//     return 0;
// }

//8.)Print 
/*
3 6 9 12
6 9 12 15
9 12 15 18
*/
// #include<stdio.h>
// int main()
// {
//     int p;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=1;j<=4;j++)//2
//         {
//           p=(i+j)*3;
//           printf("%d\t",p);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//9.)WAP to display sum of the series upto the n terms 
//sum=x-x^2+x^3-x^4+x^5+....
#include<stdio.h>
#include<math.h>
int main()
{
  int x,n,sum=0;
  printf("Enter the value of x and n: ");
  scanf("%d%d",&x,&n);
  for(int i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      sum=sum-pow(x,i);
    }
    else
    {
      sum=sum+pow(x,i);
    }
  }
  printf("sum is %d",sum);
  return 0;
}

