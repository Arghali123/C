/*
1.)If a[] is an 1 dimensonal array,then address of 1 array element can be expressed as either &a[0] or simply a.
Similarly address of second array element can be written as &a[1] or(a+1) and so on.=>&a[i] or (a+i).
2.)Value of 1 array element can be expressed as either a[0] or *a and value of second array can be expressed as
a[1] or *(a+1) and so on.
*/

//Write a program to find the sum of all the elements of an array using pointers.
#include<stdio.h>
int main()
{ 
    int i;
    int a[5]={10,20,30,40,50};
    int *ptr[5];
    int sum=0;
    for(i=0;i<5;i++)
    {
        ptr[i]=&a[i];
    }
    for(i=0;i<5;i++)
    {
        sum+=*ptr[i];
    }
    printf("The sum of all the number is %d",sum);
    return 0;
}