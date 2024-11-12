#include<stdio.h>
#include<string.h>
//void display(struct employee ee[]);
struct employee
{
    char name[20];
    int id;
    float salary;
};
int main()
{
    struct employee emp[2];
    float temp;
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nEnter the info about employee%d",i+1);
        printf("\nEmployee name: ");
        scanf("%s",emp[i].name);
        printf("\nEmployee Id: ");
        scanf("%d",&emp[i].id);
        printf("\nEnter salary of employee: ");
        scanf("%f",&temp);
        emp[i].salary=temp;
    }
    display(emp);
    printf("\n\n\nAfter function call\n");
    printf("\nName\t\t\tId\t\tSalary\n");
    for(i=0;i<2;i++)
    {
        printf("%s \t\t%d\t%.2f\n",emp[i].name,emp[i].id,emp[i].salary);
    }
    return 0;
}
void display(struct employee ee[])
{
    int i;
    printf("\n Name\t\tId\t\tSalary\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t\t%d\t\t%.2f\n",ee[i].name,ee[i].id,ee[i].salary);
        strcat(ee[i].name," Arghali");
        ee[i].id=ee[i].id+100;
        ee[i].salary=ee[i].salary+500;
    }
}