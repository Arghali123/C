//Program to demonstrate the writing of the records of employee to file employee.dat file using fwrite()function
//reading values from the user choice.
#include<stdio.h>
#include<stdlib.h>

struct employee
{
    char name[40];
    int age;
    float salary;
};

int main()
{
    FILE *fp;
    char another = 'y';
    struct employee emp;

    // Open file for binary write
    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Cannot open file");
        exit(1);  // exit with error
    }

    // Input loop for multiple employee records
    while (another == 'y')
    {
        printf("\nEnter name, age, and basic salary:\n");
        scanf("%s %d %f", emp.name, &emp.age, &emp.salary);

        // Write the employee record to file
        fwrite(&emp, sizeof(emp), 1, fp);

        // Prompt for another record
        printf("\nAdd another record (y/n): ");
        getchar();  // to consume the newline left by scanf
        another = getchar();
    }

    // Close the file
    fclose(fp);

    return 0;
}
