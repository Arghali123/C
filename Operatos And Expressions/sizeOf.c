#include<stdio.h>
int main()
{
    int a=10;
    double b=15.5;
    char c='p';
    long d;
    //Using sizeof operator to get the size of different data types 
    printf("Size of int: %zu bytes\n",sizeof(int));
    printf("Size of double: %zu bytes\n",sizeof(double));
    printf("Size of char: %zu bytes\n",sizeof(char));
    printf("Size of long: %zu bytes\n",sizeof(long));

    //Using sizeof operator to get the size of variables
    printf("Size of variable a: %zu bytes\n",sizeof(a));
    printf("Size of variable b: %zu bytes\n",sizeof(b));
    printf("Size of variable c: %zu bytes\n",sizeof(c));
    return 0;

}