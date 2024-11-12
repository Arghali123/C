//Write a menu driven program which performs the following jobs.
//1.)Create a structure named student with members variables:roll,name,grade,gender,age.
//2.)Define 10 structure variables of type student and using loop take input for all 10 structure variables.
//3.)Display names of all male students.
//4.)Exit
#include<stdio.h>
#include<stdlib.h>
#define N 5
struct student
{
 int roll;
 char name[30];
 char grade;
 char gender;
 int age;   
};
int main()
{
  struct student s[N];
  char option;
  char choice='y';
  int i;
  printf("Menu Driven Program");
  printf("\nEnter 1 for inputting student information");
  printf("\nEnter 2 to display all Male students");
  printf("\nEnter 3 for exit");
  while(choice!='n')
  {
    printf("\nEnter your option: ");
    scanf(" %c",&option);
    switch(option)

    {
        case '1':
        
        printf("Enter the info about %d student",N);
        for(i=0;i<N;i++)
        {
            printf("\nInfo. about student%d",i+1);
            printf("\nName: ");
            scanf("%s",s[i].name);
            printf("Roll no: ");
            scanf("%d",&s[i].roll);
            printf("Enter grade: ");
            scanf(" %c",&s[i].grade);
            printf("Gender(M/F): ");
            scanf(" %c",&s[i].gender);
            printf("Age: ");
            scanf("%d",&s[i].age);
        }
            break;

        case '2':
        printf("List of Male students:\n");
        for(i=0;i<N;i++)
        {
          if(s[i].gender=='M')
          {
            printf("%s\n",s[i].name);
          }
        }
          break;
        
        case '3':
        exit(0);

        default:
        printf("Invalid option!!");

    }
    printf("\nDo you want to continue?(y/n): ");
    scanf(" %c",&choice);
  }
  return 0;
}