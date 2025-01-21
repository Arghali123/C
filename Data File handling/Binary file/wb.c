#include<stdio.h>
int main()
{
    int numbers[]={10,20,30,40,50};

    //Open the file in binary write mode
    FILE *file=fopen("data.bin","wb");
    if(file==NULL)
    {
        printf("Couldnot open file for writing.\n");
        return 1;
    }
    //Write the array to the file
    size_t numberElementsWritten=fwrite(numbers,sizeof(int),5,file);
    if(numberElementsWritten!=5)
    {
        printf("Error writing to file.\n");
    }
    else
    {
        printf("Data written sucessfully.\n");
    }
    //Close the file
    fclose(file);
    return 0;
}

//Program that demostrate the use writing of the records of employee to the file "employee.dat" using fwrite() function reading from user
//choice
// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char another = 'y';
//     struct employee {
//         char name[20];
//         int age;
//         float salary;
//     };
//     struct employee emp;

//     fp = fopen("employee.dat", "wb");
//     if (fp == NULL) {
//         printf("Could not create or open file.\n");
//         return 1;
//     }

//     while (another == 'y' || another == 'Y') {
//         printf("Enter Name, age, and basic salary of an employee: ");
//         scanf("%s %d %f", emp.name, &emp.age, &emp.salary);
//         fwrite(&emp, sizeof(emp), 1, fp);

//         printf("Do you want to add another record (y/n): ");
//         // Clear the input buffer to handle newline characters
//         while (getchar() != '\n');
//         scanf("%c", &another);
//     }

//     fclose(fp);
//     return 0;
// }
