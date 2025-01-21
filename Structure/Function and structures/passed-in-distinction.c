// WAP to create a structure named student with members roll,name and percentage read records of n students and display the records of
// students and display the records of students who passed in dinstinction division.
#include <stdio.h>
#include <string.h>
#define N 5
struct students
{
    int roll_no;
    char name[20];
    float percentage;
};
int main()
{
    struct students s[N];
    void sort(struct students s[]);
    void display(struct students s[]);
    int i;

    for (i = 0; i < N; i++)
    {
        printf("\nEnter the information of Student %d\n", i + 1);
        printf("Enter Roll no: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        getchar();
        printf("Enter percentage: ");
        scanf("%f", &s[i].percentage);
    }
    sort(s);
    display(s);
    return 0;
}
void sort(struct students s[])
{
    struct students temp;
    int i, j;
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
void display(struct students s[])
{
    int i;
    printf("The list of students who got distinction\n");
    printf("Roll no\t\tName\t\tPercentage\n");
    for (i = 0; i < N; i++)
    {
        if (s[i].percentage >= 80)
        {
            printf("%d\t\t%s\t\t%f\n", s[i].roll_no, s[i].name, s[i].percentage);
        }
    }
}