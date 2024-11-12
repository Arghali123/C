//Wap to display the following menu 
/*
1. To find the area of circle.
2. To check the number is odd or even.
3. To find the sum of N number.
4. Exit.
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define PI 3.1415
int main()
{
    int choice,n,N,i;
    float r,a,num,sum;
    printf("1. Find the area area of Cirle.\n");
    printf("2. Check the number is odd or even.\n");
    printf("3. Find the sum of N numbers.\n");
    printf("4. Exit\n");
    while(TRUE)
    {
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter radius: ");
            scanf("%f",&r);
            a=PI*r*r;
            printf("The area of Circle= %.2f\n",a);
            break;

            case 2:
            printf("Enter the number: ");
            scanf("%d",&n);
            if(n%2==0)
            {
                printf("The number is even.\n");
            }
            else
            {
                printf("The number is odd.\n");
            }
            break;

            case 3:
            sum=0;
            printf("Enter the value of n: ");
            scanf("%d",&N);
            for(i=0;i<N;i++)
            { 
                scanf("%f",&num);
                sum=sum+num;
            }
            printf("Sum= %.2f\n",sum);
            break;

            case 4:
            exit(0);

            default:
            printf("Invalid option");
        }
    }
    return 0;

}