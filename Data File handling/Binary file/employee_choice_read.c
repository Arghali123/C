#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct employee
    {
        char name[40];
        int age;
        float salary;
    };
    FILE *fp;
    struct employee emp;
    fp=fopen("employee.dat","rb");
    if(fp==NULL)
    {
        printf("Cannot open file.\n");
        exit(0);//Exit with error
    }
   
   //Read the file and display each employee's data
   printf("\nEmployee records:\n");
   while((fread(&emp,sizeof(emp),1,fp))==1)
   {
    printf("Name: %s\n",emp.name);
    printf("Age: %d\n",emp.age);
    printf("Salary: %f",emp.salary);
   }

   //close the file
   fclose(fp);
   return 0;
}