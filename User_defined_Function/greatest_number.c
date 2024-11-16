//WAP using the fucntion to find the greatest numbers among three numbers
#include<stdio.h>
int greater(int,int);
int main()
{
   int a,b,c,d,e;
   printf("Enter three numbers: ");
   scanf("%d%d%d",&a,&b,&c);
   d=greater(a,b);
   e=greater(d,c);
   printf("The greatest number is: %d\n",e);
   return 0;
}

int greater(int x,int y)
{
   if(x>y)
   {
      return x;
   }
   else
   {
      return y;
   }
}