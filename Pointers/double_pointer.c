//Double pointer 
/*
1.)A double pointer(or pointer to a pointer)in C is a pointer that holds the address of another pointer,which in turn points
to some data.
2.)They are often used when you need to change the value of a pointer (e.g., in dynamic memory allocation, 
passing 2D arrays, or modifying pointers in functions).
*/
#include<stdio.h>
int main()
{
    int a=10;
    int *ptr1=&a;//ptr1 points to address of a
    int **ptr2=&ptr1;//ptr2 points to the address of ptr1

    //Output the values
    printf("Value of a:%d\n",a);//Value of a
    printf("Value of ptr1:%d\n",*ptr1);//value at address stored in ptr1
    printf("Value of ptr2:%d\n",**ptr2);//value at adress stored in ptr2,which is the address of ptr1
    //Output the addresses
    printf("The addess of a:%p\n",&a);
    printf("Value of ptr1(address of a):%p\n",ptr1);
    printf("Value of ptr2(address of ptr1):%p\n",ptr2);
    printf("Address of ptr1:%p\n",&ptr1);
    return 0;
}