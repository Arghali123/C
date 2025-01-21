// e.)
// 1   6   10  13  15
// 2   7   11  14
// 3   8   12 
// 4   9
// 5
#include<stdio.h>
int main()
{
    int i,j,sum,d;
    for(i=1;i<=5;i++)
    {
        sum=i;
        printf("%d\t",sum);
        for(j=1,d=5;j<=5-i;j++,d--)
        {
            sum=sum+d;
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return 0;
}