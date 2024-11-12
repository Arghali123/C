//Program to print the following outputs using for loops
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d\t",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//WAP to display following 
// 1
// 2 3
// 3 4 5
// 4 5 6 7 
// 5 6 7 8 9
// #include<stdio.h>
// int main()
// {
//     int i,j,p;
//     for(i=0;i<=4;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             p=(i+j)+1;
//             printf("%d\t",p);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Program to display following:
// 5  10 15 20 25
// 10 15 20 25 30
// 15 20 25 30 35
// 20 25 30 35 40
// 25 30 35 40 45
#include<stdio.h>
int main()
{
    int i,j,sum;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=5;j++)
        {
            sum=(i+j)*5;
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return 0;
}