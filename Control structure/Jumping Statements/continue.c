#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("hey ram\n");
        if(i==6)
        {
            printf("hey sita\n");
            continue;
        }
    }
    return 0;
}