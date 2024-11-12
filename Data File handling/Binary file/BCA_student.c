// Program to open a file named "student.txt" to keep the records of students(roll_no,name,course and semister)
// in a write mode and perform the following operations:
// 1.)Insert records in file.
// 2.)Diplay all those records for which course is BCA and semister is 2nd.
#include <stdio.h>
#include <string.h>
int main()
{
    struct record
    {
        int roll_no;
        char name[30];
        char course[30];
        int semister;
    };
    struct record student;
    FILE *fp;
    char ch;
    fp = fopen("student.txt", "wb+");
    if (fp == NULL)
    {
        printf("\nERROR -cannot open the destination file.\n");
        return 1;
    }
    else
    {
        printf("Enter Student Information:\n");
    }

    do
    {
        printf("Enter Rollno: ");
        scanf("%d", &student.roll_no);

        getchar();

        printf("Enter name: ");
        scanf("%[^\n]", student.name);

        getchar();

        printf("Enter course: ");
        scanf("%[^\n]", student.course);

        getchar();

        printf("Enter Semister: ");
        scanf("%d", &student.semister);
        fwrite(&student, sizeof(struct record), 1, fp);
        printf("Do you want to add another record (y/n): ");
        scanf(" %c", &ch);

    } while (ch != 'n');
    rewind(fp); // sets the file pointer at the beginning of the file
    fread(&student, sizeof(struct record), 1, fp);
    printf("Students for which course is BCA and 2nd semister: \n");
    while (!feof(fp))
    {
        if ((strcmp(student.course,"BCA") == 0) && (student.semister == 2))
        {
            printf("Roll no: %d\n",student.roll_no);
            printf("Name: %s\n",student.name);
            printf("Course: %s\n",student.course);
            printf("Semister: %d\n",student.semister);
        }
        fread(&student,sizeof(struct record),1,fp);
    }
    fclose(fp);
    return 0;
}