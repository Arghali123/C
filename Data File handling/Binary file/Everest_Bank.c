// Program to create a file named "employee.dat" and store records of N employee in the file.These records contain
// name,identification number,office name and occupation of the employee.Also display name of those employees whose
// office name is "Everest Bank" and occupation is "manager".


#include <stdio.h>
#include <string.h>
//#define NULL 0
int main()
{
    struct record
    {
        char name[30];
        int id;
        char office_name[30];
        char occupation[30];
    };
    struct record employee;
    FILE *fp;
    char c;

    fp = fopen("employee.dat", "wb+");
    if (fp == NULL)
    {
        printf("\nError - Cannot open the destination file.\n");
        return 1;
    }
    else
    {
        printf("Enter Employee Information:\n");
    }

    do
    {
        // Clearing input buffer before reading strings
        getchar();

        printf("Enter name: ");
        scanf("%[^\n]", employee.name);

        printf("Enter identification number: ");
        scanf("%d", &employee.id);

        getchar(); // Consume the newline character left by the previous scanf

        printf("Enter office name: ");
        scanf("%[^\n]", employee.office_name);

        getchar(); // Consume the newline character

        printf("Enter occupation: ");
        scanf("%[^\n]", employee.occupation);

        fwrite(&employee, sizeof(struct record), 1, fp);

        printf("Do you want to add another record (y/n): ");
        scanf(" %c", &c); // Space before %c to consume newline
    } while (c != 'n');

    rewind(fp); // Set the file pointer at the beginning of file

    printf("\nName of the employees whose office name is Everest Bank and occupation is Manager:\n");

    while (fread(&employee, sizeof(struct record), 1, fp) == 1)//The condition fread(..., fp) == 1 checks if one record was successfully read.
    {
        if ((strcmp(employee.office_name, "Everest Bank") == 0) && (strcmp(employee.occupation, "Manager") == 0))
        {
            printf("%s\n", employee.name);
        }
    }

    fclose(fp);
    return 0;
}
