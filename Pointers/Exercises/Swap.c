//Wap to SWAP pointers value
#include<stdio.h>
int main()
{
    int a=5,b=10,temp;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("Before Swaping:\n");
    printf("Value of *ptr1=%d\n",*ptr1);
    printf("Value of *ptr2=%d\n",*ptr2);
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swapping:\n");
    printf("Value of *ptr1=%d\n",*ptr1);//
    printf("Value of *ptr2=%d\n",*ptr2);
    return 0;
}

