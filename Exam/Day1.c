/*
Daenish
aenis
sni
n
*/

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[]="Daenish";
//     int len=strlen(str);
//     for(int i=0;i<len;i++)
//     {
//         for(int j=i;j<len-i;j++)
//         {
//             printf("%c",str[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//WAP to find the sum of even digits of any numbes supplied by the users
//n=126,sum_of_even=2+6=8
// #include<stdio.h>
// int main()
// {
//     int number,digit,sum=0;
//     printf("Enter the number:\n");
//     scanf("%d",&number);
//     while (number>0)
//     {
//         digit=number%10;
//         if(digit%2==0)
//         {
//             sum+=digit;
//         }
//         number/=10;

//     }
//     printf("The sum of the even number in a given numbers is= %d\n",sum);
//     return 0;
// }

//WAP to display the following pattern
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
//     for(i=0;i<=4;i++)//0,1
//     {
//         for(j=0;j<=i;j++)//0 0
//         {
//             p=(i+j)+1;
//             printf("%d",p);//
//         }
//         printf("\n");
//     }
// }

//WAP to find the febonacci sequence:1,1,2,3,5,8,13,21,.....upto n term
// #include<stdio.h>
// int main()
// {
//   int a=0;b=1;sum;
//   for(i=1;i<=n;i++)//
//   {
//     sum=;//1
//     printf("%d",sum);//
    
//     a=b //a=1
//     b=sum;//b=1
//   }
// }

//Wap to find the sum of the number from 1 to 100 which are exactly divisible by 5 but not by 3
// #include<stdio.h>
// int main()
// {
//   int sum=0;
//   for(int i=1;i<=100;i++)
//   { j 
    
//     if(i%5==0 && i%3 != 0)
//     {
//       sum+=i;
//     }
//   }
//   printf("The number is %d",sum);
//   return 0;
// }

/*Print
3 6 9 12
6 9 12 15
9 12 15 18
*/
// #include<stdio.h>
// int main()
// {
//   int sum=0;
//   for(int i=0;i<3;i++)
//   {
//     for(int j=1;j<=4;j++)
//     {
//       sum=(i+j)*3;
//       printf("%d\t",sum);
//     }
//     printf("\n");

//   }
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//   int a=1;
//   int b=1;
//   int n,sum=0;
//   printf("Enter the number:");
//   scanf("%d",&n);
//   do
//   {
//     printf("%d\t",a);
//     sum=a+b;
//     a=b;
//     b=sum;
//   }while (n>=a);
  
  
//   return 0;
// }

#include<stdio.h>
int main()
{
  int a=1,b=1,sum=0,n;
  printf("Enter the number\n");
  scanf("%d",&n);
  do{
    printf("%d\t",a);//1 1 2 
    sum=a+b;//2 3 5  
    a=b;//1 2 3 5
    b=sum;//2 3 5 8
  }while(n>=a);
  return 0;
}