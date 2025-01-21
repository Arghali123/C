//Program to read 3 students record with following fields and display the record of BCA facaulty only
/*
Roll No.  Name  Faulty  DOB(Date of birth)
                        dd  mm  yy
*/
#include <stdio.h>
#include <string.h>
#define N 5
struct birthday
{
    int dd;
    int mm;
    int yy;
};
struct students
{
    char name[20];
    char faculty[10];
    struct birthday b;
};
int main()
{
    struct students s[N];
    int i;
    for (i = 0; i < N; i++)
    {
        printf("\nEnter the info of Student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        getchar();

        printf("Enter faculty (BCA or CSIT): ");
        scanf("%s", s[i].faculty);
        getchar();

        printf("Enter day of birth: ");
        scanf("%d", &s[i].b.dd);
        printf("Enter month of birthday: ");
        scanf("%d", &s[i].b.mm);
        printf("Enter year of birthday: ");
        scanf("%d", &s[i].b.yy);
    }
    printf("\nThe list of Students Info\n");
    printf("Name\t\tFaculty\tDate of birthday\n");
    for (i = 0; i < N; i++)
    {
        if ((strcmp(s[i].faculty,"bca")==0) || (strcmp(s[i].faculty,"BCA")==0))
        {
            printf("%s\t\t%s\t%d/%d/%d\n", s[i].name, s[i].faculty, s[i].b.dd, s[i].b.mm, s[i].b.yy);
        }
    }
    return 0;
}