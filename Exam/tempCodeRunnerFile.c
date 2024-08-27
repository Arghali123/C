  
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
#include<stdio.h>
int main()
{
    int num=123456,digit,sum=0;
    while(num!=0)
    {
        digit=num%10;//for the last number
        if(digit%2==0)
        {