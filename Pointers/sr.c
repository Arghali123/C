//Sorting in ascending order using DMA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int *array,temp;
    printf("Enter the no of elements in your array: ");
    scanf("%d",&n);
    array=(int *)malloc(n*sizeof(int));
    if(array==NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(array+i));
    }
    //sorting
    
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(*(array+i)>*(array+j))
        {
            temp=*(array+i);
            *(array+i)=*(array+j);
            *(array+j)=temp;
        }
      }
    }
    printf("After sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(array+i));
    }
    free(array);
    return 0;
}