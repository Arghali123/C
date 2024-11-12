//Program to determine the sum of the harmonic series (1+1/2+1/3+1/4......+1/n)for a given value of n.
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     float sum=0;
//     printf("Enter n: ");
//     scanf("%d",n);
//     for(i=1;i<=n;i++)
//     {
//         sum=sum+1.0/i;
//     }
//     printf("Sum= %.2f",sum);
//     return 0;
// }

//Program to find the sum of the series 1+x^2+3x^2+4x^2.....+nx^2.
// #include<stdio.h>
// int main()
// {
//     int n,x,i,sum;
//     printf("Enter the value of x and n: ");
//     scanf("%d%d",&x,&n);
//     sum=1+x*x;
//     for(i=3;i<=n;i++)
//     {
//         sum=sum+i*x*x;
//     }
//     printf("Sum= %d",sum);
//     return 0;
// }

//Program that calculates sum of the sequence 1/1!+2/2!+3/3!+.....n/n!.
// #include<stdio.h>
// int main()
// {
//     int n,i,j,fact;
//     float sum=0;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=1;
//         for(j=1;j<=i;j++)
//         {
//             fact=fact*j;
//         }
//         sum=sum+(float)i/fact;
//     }
//     printf("Sum= %.2f",sum);
//     return 0;
// }

//Program to display sum of the following series upto n terms:Sum: x-x^2+x^3-x^4+...
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i,n,x;
//     float sum=0;
//     printf("Enter the value of x and n: ");
//     scanf("%d%d",&x,&n);
//     for(i=1;i<=n;i++)
//     {
//         if(i%2==0)
//         {
//             sum=sum-pow(x,i);
//         }
//         else
//         {
//             sum=sum+pow(x,i);
//         }
//     }
//     printf("Sum: %.2f",sum);
//     return 0;
// }

//Program to find X of the following series for the given value of a and n:X=a-a^2/2+a^3/3-a^4/4......upto N
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i,a,n;
//     float X=0;
//     printf("Enter the value of a and n: ");
//     scanf("%d%d",&a,&n);
//     for(i=1;i<=n;i++)
//     {
//         if(i%2==0)
//         {
//             X=X-pow(a,i)/i;
//         }
//         else
//         {
//             X=X+pow(a,i)/i;
//         }
//     }
//     printf("The Value of X= %.2f",X);
//     return 0;
// }