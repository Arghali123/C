#include<stdio.h>
#include<string.h>
void display(struct employee e);
struct employee
{
    char name[40];
    int id;
    float salary;
};
int main()
{
    struct employee emp;
    printf("Employee name: ");
    scanf("%s",emp.name);
    printf("Employee Id: ");
    scanf("%d",&emp.id);
    printf("Enter salary of Employee: ");
    scanf("%f",&emp.salary);
    display(emp);
    printf("\n\n\nAfter function Call\n");
    printf("\nName\t\t\tId\tSalary\n");
    printf("%s\t\t\t%d\t%.2f",emp.name,emp.id,emp.salary);
    return 0;

}
void display(struct employee e)
{
 printf("\nName\t\tId\t\tSalary\n");
 printf("%s\t\t%d\t\t%.2f",e.name,e.id,e.salary);
 strcat(e.name,"Arghali");
 e.id=e.id+100;
 e.salary=e.salary+1000;
}