//Program to demonstrate the use of union
#include<stdio.h>
union student
{
    char name[30];
    int roll_no;
    float marks;
};
int main()
{
    union student s;
    printf("Enter name: ");
    gets(s.name);
    puts(s.name);
    printf("Enter Roll_no: ");
    scanf("%d",&s.roll_no);
    printf("Roll no: %d",s.roll_no);
    printf("\nEnter marks: ");
    scanf("%f",&s.marks);
    printf("\nMarks: %.2f",s.marks);
    return 0;
}