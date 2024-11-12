//Program to demonstrate the use of nested stucture
#include<stdio.h>
struct personal_record
{
    char name[20];
    struct 
    {
        int day_of_birth;
        int month_of_birth;
        int year_of_birth;
    }birthday;
    float salary;
}person;
void main()
{
    printf("Enter the name: ");
    scanf("%s",person.name);
    printf("Enter the day of birthday: ");
    scanf("%d",&person.birthday.day_of_birth);
    printf("Enter the month of birthday: ");
    scanf("%d",&person.birthday.month_of_birth);
    printf("Enter the year of birthday: ");
    scanf("%d",&person.birthday.year_of_birth);
    printf("Enter salary: ");
    scanf("%f",&person.salary);

    printf("Name: %s\n",person.name);
    printf("Birthday: %d/%d/%d\n",person.birthday.day_of_birth,person.birthday.month_of_birth,person.birthday.year_of_birth);
    printf("Salary: %.2f",person.salary);
}