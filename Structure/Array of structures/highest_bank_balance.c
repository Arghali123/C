//In a bank there are n customers with attributes name,account_no,and bank balance;WAP to find out who has the highest balance in the bank.
#include<stdio.h>
#include<stdlib.h>
#define N 5
struct customers
{
    char name[20];
    int acc_no;
    float balalnce;
};
int main()
{
    struct  customers c[N];
    int i,max_index=0;
    float max_balance;

    for(i=0;i<N;i++)
    {
        printf("\nEnter the Info of customer%d.\n",i+1);
        printf("Enter your name: ");
        scanf("%s",c[i].name);
        getchar();
        printf("Enter Account number: ");
        scanf("%d",&c[i].acc_no);
        printf("Enter balance: ");
        scanf("%f",&c[i].balalnce);
    }
    max_balance=c[0].balalnce;
    for(i=1;i<N;i++)
    {
        if(max_balance<c[i].balalnce)
        {
            max_balance=c[i].balalnce;
            max_index=i;
            
        }
    }
    printf("\nCustomer having highest balance.\n");
    printf("Account number: %d\n",c[max_index].acc_no);
    printf("Name: %s\n",c[max_index].name);
    printf("Bank balance: %f.\n",c[max_index].balalnce);
    return 0;
}