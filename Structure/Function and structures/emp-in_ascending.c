//Wap to read name,address and salary of 5 employees and display the record of each employee in ascendinng order
//of their name.
#include<stdio.h>
#include<string.h>
#define SIZE 5
int main()
{
    struct employee
    {
        char name[30];
        char address[30];
        float salary;
    };
    struct employee emp[5],temp;
    int i,j;
    float salary;
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter the information of employe no.%d",i+1);
        printf("\nName: ");
        scanf("%s",emp[i].name);
        printf("\nAddress: ");
        scanf("%s",emp[i].address);
        printf("\nSalary: ");
        scanf("%f",&salary);
        emp[i].salary=salary;
    }
    for(i=0;i<SIZE-1;i++)
    {
        for(j=i+1;j<SIZE;j++)
        {
          if(strcmp(emp[i].name,emp[j].name)>0)
          {
            temp=emp[i];
            emp[i]=emp[j];
            emp[j]=temp;
          }
        }
    }

    printf("\nName\tAddress\tSalary");
    for(i=0;i<SIZE;i++)
    printf("\n%s\t%s\t%.2f",emp[i].name,emp[i].address,emp[i].salary);
    return 0;
}
