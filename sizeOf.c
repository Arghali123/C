#include<stdio.h>
int main()
{
    int a=10;
    double b=15.5;
    char c='p';


    //size ko lai %zu use hunxa

    printf("The size of int: %zu bytes\n",sizeof(int));
    printf("The size of double: %zu bytes\n",sizeof(double));
    printf("The size of char: %zu bytes\n",sizeof(char));
    return 0;

}