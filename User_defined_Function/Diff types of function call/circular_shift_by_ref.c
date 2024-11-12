//Given three variables x,y and z ,write a function to circular shift their values.In other words,if x=5,y=9,z=8
//after circular shift y=5,z=9 and x=8.Call the function with variables a,b and c to circularly shift their values.
#include<stdio.h>
void circularshift(int *,int *,int *);
int main()
{
int x,y,z;
x=5;
y=9;
z=8;
printf("Before Circular shift x=%d y=%d and z=%d\n",x,y,z);
circularshift(&x,&y,&z);
printf("After circular shift x=%d y=%d and z=%d",x,y,z);
return 0;
}
void circularshift(int *a,int *b,int *c)
{
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
    printf("The value of x=%d y=%d and z=%d\n",*a,*b,*c);
}