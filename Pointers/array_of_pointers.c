//Array of pointers:A pointer variable always contains an address of a variable.so,an array of pointers is actually
//an array of memory addresses of different variables.
//syntax:data_type *pointername[size];

//Program to illustrate use of array of pointers
// #include<stdio.h>
// int main()
// {
//     int i;
//     int a=1,b=2,c=3,d=4,e=5;
//     int *ptr[5];
//     ptr[0]=&a;
//     ptr[1]=&b;
//     ptr[2]=&c;
//     ptr[3]=&d;
//     ptr[4]=&e;
//     for(i=0;i<5;i++)
//     {
//         printf("ptr[%d]=%d\n",i,*ptr[i]);
//     }
//     return 0;
// }

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