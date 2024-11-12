//Create a structure named Employee with members name,id,salary.Use this structure to read and display records of
//n employee.Create two functions one is to read information of employee and other to display the information.
//Pass array of structure to these functions.
#include<stdio.h>
#define n 5
int i;
struct employee
{
    char name[30];
    int id;
    float salary;
};
void read(struct employee e[])
{
    float temp;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the info of employee:%d",i+1);
        printf("\nName: ");
        scanf("%s",e[i].name);
        printf("Id: ");
        scanf("%d",&e[i].id);
        printf("Salary: ");
        scanf("%f",&temp);
        e[i].salary=temp;
    }
}
void display(struct employee e[])
{
    printf("Name\t\tID\t\tSalary");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t\t%d\t\t%.2f",e[i].name,e[i].id,e[i].salary);
    }
}
int main()
{
    struct employee e[n];
    printf("Read information of employee from user:");
    read(e);
    printf("\nThe details of employee is:\n");
    display(e);
    return 0;
}