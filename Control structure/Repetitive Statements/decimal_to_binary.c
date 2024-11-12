//WAP to convert decimal number into binary number
 #include<stdio.h>
 int main()
 {
 long int decnum,binNum,rev=0,q=1,rem,i=1;
 printf("Enter the decimal number: ");
 scanf("%ld",&decnum);
 while (q!=0)
 {
     q=decnum/2;
     rem=decnum%2;
     decnum=q;
     rev=rev+rem*i;
     i=i*10;
 }
 printf("\nThe coressponding binary number is %ld",rev);
 return 0;

}