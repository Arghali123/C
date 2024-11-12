#include<stdio.h>
#include<string.h>
void display(char [],int,float);
int main()
{
    struct employee
    {
        char name[40];
        int id;
        float salary;
    };
    struct employee emp;
    printf("Employee name: \n");
    scanf("%s",emp.name);
    printf("Employee Id: \n");
    scanf("%d",&emp.id);
    printf("Enter Salary of Employee: \n");
    scanf("%f",&emp.salary);
    display(emp.name,emp.id,emp.salary);
    printf("\nName\t\tId\t\tSalary\n");
    printf("%s\t\t%d\t\t%.2f\n",emp.name,emp.id,emp.salary);
    return 0;
}
void display(char e[],int id,float salary)
{
    printf("\nName\t\tId\t\tSalary\n");
    printf("%s\t\t%d\t\t%.2f",e,id,salary);
    strcat(e,"Ramesh");
    id=id+100;
    salary=salary+500;
}