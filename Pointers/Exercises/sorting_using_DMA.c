//Program to sort the n-elements reading from user and storing dynamic memory allocation and sorting in ascending
//order
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *jaan,n,i,j,temp;
    printf("How many numbers:");
    scanf("%d",&n);
    jaan=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(jaan+i));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(jaan+i)>*(jaan+j))
            {
                temp=*(jaan+i);
                *(jaan+i)=*(jaan+j);
                *(jaan+j)=temp;
            }
        }
    }
    printf("Sorted list:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(jaan+i));
    }
    free(jaan);
    return 0;
}