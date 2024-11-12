//The calloc() function
/*
The calloc() function allocates an amount of memory equal to num*size.That is calloc()alocates enough memory
for an array of num objects,each object being size byte long.
syntax:p=(data_type*)calloc(no_of_blocks,size_of_each_block);
e.g.  x=(int*)calloc(5,100*sizeof(int));
This statement allocates 5 contiguous blocks of size 200B for each block,i.e we can store 5 array,each of 100 integer elements.
*/

//Program to read an array of integers using dynamic memory allocation and display the maximum and minimum value.
// #include<stdio.h>
// #include<stdlib.h>
// void minValue(int *,int);
// int main()
// {
//     int n,i;
//     int *num;
//     printf("Enter the no. of elements in your array:");
//     scanf("%d",&n);
//     num=(int *)calloc(n,sizeof(int));//(int*)forces the void pointer to become an int pointer
//     printf("Enter %d intergers:\n",n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",num+i);
//     }
//     minValue(num,n);
//     return 0;
// }

// void minValue(int *no,int n)
// {
//     int i;
//     int min;
//     min=*no;
//     for(i=0;i<n;i++)
//     {
//     if(*no>*(no+i))
//     {
//         min=*(no+i);
//     }
//     }
//     printf("The minimum number is %d",min);
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;  // Number of elements
    int *arr;

    // Allocate memory for an array of 5 integers using calloc
    arr = (int *)calloc(n, sizeof(int));

    // Check if the memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Exit the program with an error
    }

    // Display the values of the array (all elements should be initialized to zero)
    printf("Array elements after calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
