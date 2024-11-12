#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    struct record
    {
        char empname[30];
        int age;
        float salary;
    };

    struct record emp;
    char name[30];
    int Found=0;

    fp=fopen("employee.txt","rb+");
    if(fp==NULL)
    {
        printf("File doesnot exist.\n");
        exit(0);
    }
    printf("Data record before:\n") ;
    fread(&emp,sizeof(struct record),1,fp);
    while(!feof(fp))
    {
        printf("\nName: %s\n",emp.empname);
        printf("Age: %d\n",emp.age);
        printf("Salaey: %.2f\n",emp.salary);
        fread(&emp,sizeof(struct record),1,fp);
    }
    rewind(fp);

    printf("Enter name of the employee which is to be mofified: ");
    scanf("%s",name);//Puran
    while(fread(&emp,sizeof(struct record),1,fp))
    {
        if(strcmp(emp.empname,name)==0)
        {
          Found=1;
          //Modify empliyee details
          printf("Enter new age: ");
          scanf("%d",&emp.age);
          printf("Enter new salary: ");
          scanf("%f",&emp.salary);

          //// Move file pointer back to the position of the record to overwrite it
          fseek(fp,-sizeof(struct record),SEEK_CUR);//After calling fseek(fp, -sizeof(struct record), SEEK_CUR);, the file pointer moves back to the start of Puran.

          // Write the modified record back to the file
          fwrite(&emp,sizeof(struct record),1,fp);
          printf("Record updated succuessfully.\n");
          break;
        }
    }
        if(Found==0)
        {
            printf("Employee with name '%s' is not found.\n",name);
        }
    fclose(fp);
    return 0;
}