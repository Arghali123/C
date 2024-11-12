#include<stdio.h>
int main()
{
    int a,b,c;
    //using comma operator
    a=(b=4,c=5,b+c);

    //b and c are assigned first,then their sum is assigned to a
    printf("Value of a: %d\n",a);
    printf("Memory Used by a is %zu",a);
    return 0;
}