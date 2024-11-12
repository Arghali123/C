#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char c='y';
    struct record
    {
        char empname[30];
        int age;
        float salary;
    };
    fp=fopen("employee.txt","wb+");
    if(fp==NULL)
    {
        printf("Cannot open a file.\n");
        exit(1);
    }
    struct record employee;
    printf("Enter the employee information:\n");
    do
    {
        printf("Enter Name: ");
        scanf("%s",employee.empname);
        printf("Enter age: ");
        scanf("%d",&employee.age);
        printf("Enter salary: ");
        scanf("%f",&employee.salary);
        fwrite(&employee,sizeof(struct record),1,fp);
        printf("Do you want to add more records (y/n): ");
        scanf(" %c",&c);
    }while(c!='n');
    rewind(fp);
    fread(&employee,sizeof(struct record),1,fp);
    while(!feof(fp))
    {
        printf("\nName: %s\n",employee.empname);
        printf("Age: %d\n",employee.age);
        printf("Salary: %.2f\n",employee.salary);
        fread(&employee,sizeof(struct record),1,fp);
    }
    fclose(fp);
    return 0;
}