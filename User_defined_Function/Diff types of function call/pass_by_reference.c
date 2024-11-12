//Function Call By Reference(Pass arguments by address)
//In call by reference method the address of actual argument in calling function are copied into formal arguments of 
//of called function.Using these addresses we can access the actual arguments and use for further processing.Since
//the references of arguments are used,the values of actual argument change with changes in values of corresponding
//formal arguments.



// #include<stdio.h>
// //Function that modifies the value using pointer
// void modifyValue(int *num)
// {
//     *num=20;//This change will effect the value
// }
// int main()
// {
//     int a=10;
//     printf("Before modifyValue a= %d\n",a);
//     modifyValue(&a);//Pass by reference/(address of a)
//     printf("After modifyValue: a= %d",a);// Original value is modified
//     return 0;
// }

//Program to swap 2 numbers using call by reference method
// #include<stdio.h>
// void swap(int *,int *);
// int main()
// {
//     int a,b;
//     printf("Enter 2 numbers:\n");
//     scanf("%d%d",&a,&b);
//     printf("Before swap a=%d and b=%d\n",a,b);
//     swap(&a,&b);
//     printf("After swap a=%d and b=%d\n",a,b);
//     return 0;
// }
// void swap(int *x,int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
//     printf("x=%d and y=%d\n",*x,*y);
// }

//Given three variables x,y,z.Write a function to circularly shift their values.In other words,if x=5,y=9,z=8,after
//circular shift y=5,z=9 and x=8.Call the function with the variables a,b,c to circularly shift their values.
#include<stdio.h>
void circularity(int *,int *,int *);
int main()
{
    int x,y,z;
    x=5,y=9,z=8;
    printf("Before Circularity x=%d y=%d and z=%d\n",x,y,z);
    circularity(&x,&y,&z);
    printf("After Circularity x=%d y=%d and z=%d\n",x,y,z);
    return 0;  
}
void circularity(int *a,int *b,int *c)
{
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
    printf("After circularity a=%d b=%d and c=%d\n",*a,*b,*c);
}