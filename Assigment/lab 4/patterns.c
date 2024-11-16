//WAP to display the following patters:
//a.)
// *****
// *****
// *****
// *****
// *****
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//b.)
// 1
// 1   2
// 1   2   3
// 1   2   3   4
// 1   2   3   4   5
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d\t",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//c.)
// 5   10  15  20
// 10  15  20  25
// 15  20  25  30
// 20  25  30  35
// #include<stdio.h>
// int main()
// {
//     int i,j,sum=0;
//     for(i=0;i<4;i++)
//     {
//         for(j=1;j<=4;j++)
//         {
//             sum=(i+j)*5;
//             printf("%d\t",sum);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//d.)
// Programming
// rogramming
// ogramming
// gramming
// ramming
// amming
// mming
// ming
// ing
// ng
// g
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char sentence[]="Programming";
//     int len=strlen(sentence);
//     printf("%s\n",sentence);
//     for(int i=0;i<len;i++)
//     {
//         for(int j=i+1;j<len;j++)
//         {
//             printf("%c",sentence[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// e.)
// 1   6   10  13  15
// 2   7   11  14
// 3   8   12 
// 4   9
// 5
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     int sum=0;
//     for(i=1;i<=5;i++)
//     {
//         printf("%d\t",i);
//         sum=sum+i;
//         for(j=0,k=5;j<5-i;j++,k--)
//         {
//             sum+=k;
//             printf("%d\t",sum);
//         }
//         printf("\n");
//         sum=0;   

//     }
//     return 0;
// }

// f.)
//  1  0   1   0   1
//     0   1   0   1
//         1   0   1
//             0   1
//                 1
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char number[]="10101";
//     int len=strlen(number);
//     for(int i=0;i<len;i++)
//     {
//         for(int k=0;k<i;k++)
//         {
//             printf("  ");
//         }
//         for(int j=0+i;j<len;j++)
//         {
//             printf("%c ",number[j]);
//         }

//         printf("\n");
//     }
//     return 0;
// }

// g.
//    *
//   ***
//  *****
#include<stdio.h>
int main()
{
    int i,j,k;
    int sum=1;
    for(i=0;i<3;i++)
    {
        for(k=0;k<2-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=sum;j++)
        {
            printf("*");
        }
            printf("\n");
            sum=sum+2;
    }
    return 0;
}
