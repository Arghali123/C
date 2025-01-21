//Write a menu driven program which performs the following jobs.
//1.)Create a structure named student with members variables:roll,name,grade,gender,age.
//2.)Define 10 structure variables of type student and using loop take input for all 10 structure variables.
//3.)Display names of all male students.
//4.)Exit
#include <stdio.h>
#include <string.h>
#define N 5

int count = 0;

struct students
{
    int roll_no;
    char name[20];
    char gender;
};

void display(struct students s[]);

int main()
{
    struct students s[N];
    char ch = 'y';
    int choose;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Create New Account\n");
        printf("2. Display All Male's List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            if (count < N)
            {
                printf("Enter Roll no: ");
                scanf("%d", &s[count].roll_no);
                printf("Enter Name: ");
                scanf("%s", s[count].name);
                getchar(); // To consume leftover newline
                printf("Male or Female (M/F): ");
                scanf(" %c", &s[count].gender);
                count++;
            }
            else
            {
                printf("Student list is full!\n");
            }
            break;

        case 2:
            display(s);
            break;

        case 3:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid Option!\n");
        }

        // Prompt to continue after each iteration
        if (choose != 3)
        {
            printf("Do you want to continue (y/n): ");
            scanf(" %c", &ch);
        }
    } while (ch == 'y');

    return 0;
}

void display(struct students s[])
{
    printf("\nThe list of male students:\n");
    printf("Roll no\tName\n");
    for (int i = 0; i < count; i++)
    {
        if (s[i].gender == 'M' || s[i].gender == 'm')
        {
            printf("%d\t%s\n", s[i].roll_no, s[i].name);
        }
    }
}
