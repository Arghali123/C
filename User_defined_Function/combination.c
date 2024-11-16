//Program to find the combination C(n,r).
#include<stdio.h>
long factotorial(int n)
{
 int fact=1;
 for(int i=1;i<=n;i++)
 {
    fact*=i;
 }
 return fact;
}
int main()
{
    long f1=1,f2=1,f3=1,comb;
    int n,r;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    f1=factotorial(n);
    f2=factotorial(n-r);
    f3=factotorial(r);
    comb=f1/(f2*f3);
    printf("The combination is: %ld\n",comb);
    return 0;

}