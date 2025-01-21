//WAP to read 5 students records with fields(roll_no,name,marks in 5 subjects,percentage) and print the records in the ascending order of the total 
//percentage obtained.
#include<stdio.h>
#define N 5
struct students
{
    int roll_no;
    char name[20];
    float marks[5];
    float percentage;
};
int main()
{
    struct students s[N],temp;
    int i,j;
    float sum,percentage;

    for(i=0;i<N;i++)
    {
        printf("\nEnter the Info of Student %d\n",i+1);
        printf("Enter Rollno: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        getchar();
        sum=0;
        percentage=0;
        printf("Enter marks in 5 subjects\n");
        for(j=0;j<5;j++)
        {
            printf("Enter marks of Subject %d: ",j+1);
            scanf("%f",&s[i].marks[j]);
            sum=sum+s[i].marks[j];
        }
        percentage=(sum/250)*100;
        s[i].percentage=percentage;
    }

    for(i=0;i<N-1;i++)
    {
      for(j=i+1;j<N;j++)
      {
        if(s[i].percentage<s[j].percentage)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
      }
    }
    printf("List according to the percentage.\n");
    printf("Roll no\tName\tPecentage\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t\t%s\t\t%.2f\n",s[i].roll_no,s[i].name,s[i].percentage);
    }
    return 0;
}
