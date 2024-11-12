//Write a Menu-driven program to input a 3*3 matrix and display the menu
/*
MENU:
 - Print the input matrix.
 - Sum of even values of elements.
 - Sum of all diagonal elements.
 - Exit
*/
#include<stdio.h>
#define ROW 3
#define COLUMN 3
int main()
{
int Matrix[ROW][COLUMN];
int i,j,sum;
int choice;
char Y_N;
printf("Enter the element of Matrix:\n");
for(i=0;i<ROW;i++)
{
    for(j=0;j<COLUMN;j++)
    {
        scanf("%d",&Matrix[i][j]);
    }
}
do
{
    printf("Menu\n");
    printf("Enter 1 to Print Matrix\n");
    printf("Enter 2 to Print sum of even elements in a Matrix\n");
    printf("Enter 3 to Print sum of diagonal elements in a Matrix\n");
    printf("Enter 4 to Exit\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("The Matrix is:\n");
        for(i=0;i<ROW;i++)
        {
            for(j=0;j<COLUMN;j++)
            {
                printf("%d\t",Matrix[i][j]);
            }
            printf("\n");
        }
        printf("Do you want to Continue(y/n): ");
        scanf(" %c",&Y_N);
        break;

        case 2:
        sum=0;
        for(i=0;i<ROW;i++)
        {
            for(j=0;j<COLUMN;j++)
            {
                if(Matrix[i][j]%2==0)
                {
                    sum=sum+Matrix[i][j];
                }
            }
        }
        printf("Sum of even elements in a matrix is %d\n",sum);
        printf("Do you want to continue (y/n): ");
        scanf(" %c",&Y_N);
        break;

        case 3:
        sum=0;
        for(i=0;i<ROW;i++)
        {
            for(j=0;j<COLUMN;j++)
            {
                if(i==j)
                {
                    sum=sum+Matrix[i][j];
                }
            }
        }
        printf("The sum of diagonal is %d\n",sum);
        printf("Do you want to continue (y/n): ");
        scanf(" %c",&Y_N);
        break;

        case 4:
        return 1;

        default:
        printf("Invalid Option");
        printf("Do you want to continue (y/n): ");
        scanf(" %c",&Y_N);
        break;
    }
} while (Y_N!='n');
return 0;
}