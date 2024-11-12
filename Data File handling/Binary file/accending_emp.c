//WAP that creates a file name "employee.dat" to keep the records of N employee of a company and print the records
//in the ascending order of the employee_id.A typical employee record will be employee id,name,designation and 
//salary.
#include<stdio.h>
int main()
{
    struct record
    {
        int employee_id;
        char name[30];
        char designation[30];
        float salary;
    };
    struct record employee,t;
    struct record temp[10];
    FILE *fp;
    char ch;
    int count=0,i,j;
    fp=fopen("employee.dat","wb+");
    if(fp==NULL)
    {
        printf("ERROR-cannot open the destination file.\n");
        return 1;
    }
    else
    {
        printf("Enter employee information:\n");
    }
    do
    {
      printf("Enter Id: ");
      scanf("%d",&employee.employee_id);
      getchar();
      printf("Enter Name: ");
      scanf("%s",employee.name);
      getchar();
      printf("Enter designation: ");
      scanf("%s",employee.designation);
      printf("Enter salary: ");
      scanf("%f",&employee.salary);
      fwrite(&employee,sizeof(struct record),1,fp);
      printf("Do you want to add another record (y/n): ");
      scanf(" %c",&ch);
    }while(ch!='n');
    rewind(fp);//Sets the file pointer at the begining
    fread(&employee,sizeof(struct record),1,fp);
    while(!feof(fp))
    {
        temp[count]=employee;
        count++;
        fread(&employee,sizeof(struct record),1,fp);
    }
    fclose(fp);
    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(temp[i].employee_id>temp[j].employee_id)
            {
                t=temp[i];
                temp[i]=temp[j];
                temp[j]=t;
            }
        }
    }
    printf("Sorted list is: \n");
    for(i=0;i<count;i++)
    {
        printf("\nEmployee id: %d\n",temp[i].employee_id);
        printf("Name: %s\n",temp[i].name);
        printf("Designation: %s\n",temp[i].designation);
        printf("Salary: %f\n",temp[i].salary);
    }

    return 0;
}