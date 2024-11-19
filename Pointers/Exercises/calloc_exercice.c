//Program that reads the n elements of an array using calloc()and display the elements using pointer variable
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int *daeinsh;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    daeinsh=(int*)calloc(n,sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(daeinsh+i));
    }
    printf("The elements in the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(daeinsh+i));
    }
    free(daeinsh);
    return 0;
}