//Program to read the name,address,and salary of 5 employees using array of structure.Display information of each employees accoding to their
//name.
#include<stdio.h>
#include<string.h>
#define N 4
struct  employees
{
    char name[20];
    char address[20];
    float salary;
};
int main()
{
    struct employees e[N],temp;
    int i,j;

    for(i=0;i<N;i++)
    {
        printf("Enter the information of Employee %d.\n",i+1);
        printf("Enter Name: ");
        scanf("%s",e[i].name);
        getchar();
        printf("Enter Address: ");
        scanf("%s",e[i].address);
        getchar();
        printf("Enter Salary: ");
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    printf("Info of employees according to alphabet.\n");
    printf("Name\t\tAddress\t\tSalary\n");
    for(i=0;i<N;i++)
    {
        printf("%s\t\t%s\t\t%.2f\n",e[i].name,e[i].address,e[i].salary);
    } 
    return 0;
}
