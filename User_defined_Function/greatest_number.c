//WAP using the fucntion to find the greatest numbers among three numbers
#include<stdio.h>
int greatest(int,int);//Declaration

int main()
{
    int a,b,c;
    int d,e;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=greatest(a,b);//Function Call
    e=greatest(d,c);//Function Call
    printf("The greatest number is %d\n",e);
    return 0;
}
int greatest(int x,int y)//Function defination
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