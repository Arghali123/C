//Pointers
/*
Pointers in C are variables that store the memory address of another variable.
They are powerful and widely used in C programming for tasks like dynamic memory allocation, array manipulation, and passing variables by reference.
*/

//Key concepts
/*a.)Pointer Declaration: A pointer is declared using an asterisk * before the variable name.
e.g int *p;
This declares a pointer p that can store the address of an integer.
*/

//b.)Adress Operator(&):This is used to get the address of a variable.
/*
int a = 10;
p = &a;  // p now holds the address of variable a
*/

//c.) Dereference Operator (*): This is used to access the value stored at the address held by the pointer.
/*
int value = *p;  
// value is now 10, the value at the address stored in p
*/

//Example
#include<stdio.h>
int main()
{
    int a=10;//Declare an integer variable
    int *p=&a;//Declare a pointer to an integer and assign address of a
    printf("Value of a:%d\n",a);//Output the value of a
    printf("Address of a:%p\n",&a);//Output the address of a
    printf("Value of p(address stored in p):%p\n",p);//ouput the address stored in p
    printf("Value pointed by p:%d\n",*p);//Output the value at the address stored in p(which is value of a)

    //Change the value of a using the pointer
    *p=20;
    printf("The new value of a:%d",a);//Output the new Value of a which is 20
    return 0;
}

//Why use pointers?
/*
1.)Efficiency:Pointers can improve efficiency by avoiding copying large amount of data.
2.)Dynamic Memory:Pointers are essential for managing dynamic memory(e.g using malloc).
3.)Pass by Reference:Pointers allow functions to modify variables directly.
*/