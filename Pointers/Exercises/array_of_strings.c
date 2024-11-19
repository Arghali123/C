#include<stdio.h>
int main()
{
    //Array of strings (array of pointers to char)
    const char *arr[]={
        "hello",
        "World",
        "this",
        "is",
        "an",
        "array",
        "of",
        "strings"
    };

    //Size of the array(number of strings)
    int size=sizeof(arr)/sizeof(arr[0]);

    //Printing each string using pointers
    printf("Array of strings:\n");
    for(int i=0;i<size;i++)
    {
        printf("%s\n",arr[i]);
    }

    //Accessing individual characters in each string using pointers
    printf("\nIndividual characters of each strings:\n");
    for(int i=0;i<size;i++)
    {
        const char *ptr=arr[i];//points to the first character of the string
        printf("String %d:",i+1);
        while(*ptr!='\0')
        {
            printf("%c ",*ptr);//Dereference the pointer to get the character
            ptr++;//Move pointer to the next character
        }
        printf("\n");
    }
    return 0;

}

//Array name itself is an address or pointer which points to the first or 0th element of the array(called base address)
//.Thus if a is a 1D array,then address of first array element can be written as either &a[0] or a.