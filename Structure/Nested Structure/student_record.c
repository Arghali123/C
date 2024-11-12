//Program to read 3 students record with following fields and display the record of BCA facaulty only
/*
Roll No.  Name  Faulty  DOB(Date of birth)
                        dd  mm  yy
*/

#include<stdio.h>
#include<string.h>
#define NUM 3
int main()
{
    struct dob
    {
        int dd;
        int mm;
        int yy;
    };

    struct student
    {
        int roll_no;
        char name[20];
        char faculty[10];
        struct dob date_of_birth;
    };
    struct student s[NUM];
    int i;
    for(i=0;i<NUM;i++)
    {
        printf("Enter the data for student %d\n",i+1);
        printf("Enter roll no: \n");
        scanf("%d",&s[i].roll_no);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter facaulty: ");
        scanf("%s",s[i].faculty);
        printf("Enter Day of birthday: ");
        scanf("%d",&s[i].date_of_birth.dd);
        printf("Enter month of birthday: ");
        scanf("%d",&s[i].date_of_birth.mm);
        printf("Enter year of birthday: ");
        scanf("%d",&s[i].date_of_birth.yy);
    }
    printf("Students record of BCA only:\n");
    for(i=0;i<NUM;i++)
    {
        if(strcmp(s[i].faculty,"BCA")==0)
        {
            printf("Roll no: %d\n",s[i].roll_no);
            printf("Name: %s\n",s[i].name);
            printf("Birthday: %d/%d/%d\n",s[i].date_of_birth.dd,s[i].date_of_birth.mm,s[i].date_of_birth.yy);
        }
    }
    return 0;
}