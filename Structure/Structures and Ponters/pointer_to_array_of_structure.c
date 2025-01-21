//Pointers to array of Structure
#include<stdio.h>
struct student
{
    char name[30];
    int roll_no;
    float marks[3];
    float percentage;
};

//Function to sort students by percentage in decending order
void sort_students(struct student *s,int n)
{
  struct student temp;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if((s+i)->percentage<(s+j)->percentage)
        {
            temp=*(s+i);
            *(s+i)=*(s+j);
            *(s+j)=temp;
        }
    }
  }
}

int main()
{
    struct student s[5],*sptr;
    int i,j;
    sptr=s;
    for(i=0;i<5;i++)
    {
        printf("Enter info of student%d:\n",i+1);
        printf("Enter name: ");
        scanf("%s",(sptr+i)->name);
        getchar();
        printf("Enter Roll no: ");
        scanf("%d",&(sptr+i)->roll_no);
        printf("Enter marks in 3 subjects:\n");
        float total=0;
        for(j=0;j<3;j++)
        {
            scanf("%f",&(sptr+i)->marks[j]);
            total+=(sptr+i)->marks[j];
        }
        (sptr+i)->percentage=(total/300)*100;
    }

    //Sort students by percentage
    sort_students(sptr,5);

    //Display and sort
    printf("\nSorted list of students by percentage:\n");
    for(i=0;i<5;i++)
    {
        printf("\nName: %s\n",(sptr+i)->name);
        printf("Rollno: %d\n",(sptr+i)->roll_no);
        for(j=0;j<3;j++)
        {
            printf("%.2f\n",(sptr+i)->marks[j]);
        }
        printf("\nPercentage: %.2f\n",(sptr+i)->percentage);
    }
   
    return 0;
}
