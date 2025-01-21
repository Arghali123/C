#include<stdio.h>
int main()
{
    //Array to store the data read from the file
    int numbers[5];

    //Open the file for reading in binary mode
    FILE *file=fopen("data.bin","rb");
    if(file==NULL)
    {
        printf("Couldnot open the file for reading.\n");
        return 1;
    }

    //Read the data from the file into the array
    size_t numElementsRead=fread(numbers,sizeof(int),5,file);
    if(numElementsRead!=5)
    {
        printf("Error reading from file.\n");
    }
    else
    {
        printf("Data read Sucessfully.\n");
    }

    //Print the read data
    for(int i=0;i<5;i++)
    {
        printf("Number %d= %d\n",i+1,numbers[i]);
    }
    //Close the file
    fclose(file);
    return 0;
}

//Program that demonstrate the reading of the records of the employee from the employee.dat file using fread() functio.
// #include<stdio.h>
// int main()
// {
//     FILE *fp;
//     char another='y';
//     struct employee
//     {
//         char name[20];
//         int age;
//         float salary;
//     };
//     struct employee emp;
//     fp=fopen("employee.dat","rb");
//     if(fp==NULL)
//     {
//         printf("Couldnot open file.\n");
//         return 1;
//     }
//     printf("The records in the file employee are:\n");
//     while(fread(&emp,sizeof(emp),1,fp)==1)
//     {
//         printf("%s %d %f",emp.name,emp.age,emp.salary);
//     }
//     fclose(fp);
//     return 0;
// }