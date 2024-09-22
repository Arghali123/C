//WAP  to find the combination of C(n,r)5
#include<stdio.h>
long factorial(int n)
{
int i;
long fact=1;
for(i=1;i<=n;i++)
{
    fact*=i;
}
return fact;
}
int main()
{
    long f1=1,f2=1,f3=1,combination;
    int n,r;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    f1=factorial(n);
    f2=factorial(n-r);
    f3=factorial(r);
    combination=f1/(f2*f3);
    printf("The combination is %ld",combination);
    return 0;
}