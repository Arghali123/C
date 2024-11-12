//Make a calculater using Switch case statements
#include<stdio.h>
int main()
{
    int a,b;
    float result;
    char ch;
    printf("Enter 1 number: ");
    scanf("%d",&a);
    printf("Enter 2 number: ");
    scanf("%d",&b);
    printf("Type '+' for addition\n");
    printf("Type '-' for subtraction\n");
    printf("Type '/' for division\n");
    printf("Type '*' for multiplication\n");
    printf("Enter your choice: ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
        result=a+b;
        printf("The addition result= %.2f",result);
        break;

        case '-':
        result=a-b;
        printf("The subraction result= %.2f",result);
        break;

        case '/':
        result=a/b;
        printf("The division result= %.2f",result);
        break;

        case '*':
        result=a*b;
        printf("The multiplication result= %.2f",result);
        break;

        default:
        printf("Invalid option");
    }
    return 0;
}