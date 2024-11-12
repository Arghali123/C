//NUll pointer
/*
1.)A NULL pointer is a special pointer value that points nowhere or nothing.
2.)The predefined constant NULL in stdio.h is used to define the null pointer.
*/
#include<stdio.h>
int main()
{
    int *daenish=NULL;//Initialize a pointer to NULL
    if(daenish==NULL)
    {
        printf("Pointer is NULL,it doesnot point to any valid memory.\n");
    }

}