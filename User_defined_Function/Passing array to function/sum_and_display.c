//WAP to read 10 numbers in an array and finds their sum and display using the function.
#include<stdio.h>
int sum(int arr[],int size);
void output(int arr[],int size);

int main()
{
    int arr[10],i,l;
    int s;
    printf("Enter the elements of an array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
   l=sizeof(arr)/sizeof(arr[0]);
   output(arr,l);
   s=sum(arr,l);
   printf("The sum of all the elements in array are: %d",s);
   return 0;
}

int sum(int arr[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
      sum+=arr[i];
    }
    return sum;
}

void output(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}