//WAP to read two matrixes A and B,then print the following result
//a.)A*5
//b.)A-2*B
//c.)A*5+2*B
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[2][2],B[2][2],option2[2][2];
    int i,j,k,sum=0;
    int choice;
      
      printf("Enter the elements of matrix A: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the elements of matrix B: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    //Display of matrix A and B
    printf("The elements of matrix A is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("The elements of matrix B is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    do
    {
      printf("Type 1 to perform A*5\n");
      printf("Type 2 to perform A-2*B\n");
      printf("Type 3 to perform A*5+B*2\n");
      printf("Type 4 to exit the program\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        printf("The value after arthematic operation A*5 is: \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",A[i][j]*5);
            }
            printf("\n");
        }
        exit(0);
        break;
        
        case 2:
        //A-2*B
        printf("The result after performing A-2*B is: \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                for(k=0;k<2;k++)
                {
                  sum=sum+(A[i][k]-2)*B[k][j];
                }
                option2[i][j]=sum;
                sum=0;
            }
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",option2[i][j]);
            }
            printf("\n");
        }
        exit(0);
        break;

        case 3:
        printf("The result after performing A*5+B*2 is: \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",(A[i][j]*5)+(B[i][j]*2));
            }
            printf("\n");
        }
        exit(0);
        break;
        
        case 4:
        exit(0);
        default:
        printf("Illigal choice");
      }
    }while(choice!=4);

    return 0;
}
