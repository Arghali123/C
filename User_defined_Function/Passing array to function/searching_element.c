//Program to search an item in an array using user-defined function
#include<stdio.h>
void search(int [],int);
int main()
{
    int arr[10],n,i;
    printf("Enter the size your array: ");
    scanf("%d",&n);
    printf("Enter the Elements of your array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    search(arr,n);
    return 0;
}
void search(int a[],int size)
{
    int found=0,i,key;
    printf("Enter item to be searching in your array: ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(key==a[i])
        {
          found=1;
          break;  
        }
    }
    if(found)
    {
        printf("The item %d you have been seaching is your array is found at position %d",key,i+1);
    }
    else
    {
        printf("The item %d you are been seaching in this array doesnot exist");
    }
}