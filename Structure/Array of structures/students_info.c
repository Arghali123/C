//Create a structure named student has name,roll,marks and remark as members.Assume appropriate types and
//size of members.Use this structure to read and display the records of 10 students.
// #include<stdio.h>
// struct student
// {
//     char name[20];
//     int roll;
//     int marks;
//     char remarks;
// };
// int main()
// {
//     struct student s[15];
//     int i;
//     //float temp;
//     for(i=0;i<2;i++)
//     {
//         printf("Enter the info about student%d\n",i+1);
//         printf("Name: ");
//         scanf(" %s",s[i].name);
//         printf("Roll no: ");
//         scanf("%d",&s[i].roll);
//         printf("Marks: ");
//         scanf("%d",&s[i].marks);
//         printf("Remarks(P/F): ");
//         scanf(" %c",&s[i].remarks);//Reads a single character in the instant it is typed without waiting enter key to be it.,it displays it on the screen
//     }
//     printf("\n");
//     printf("Studen name \tRoll\tMarks\t\tRemarks\n");
//     for(i=0;i<2;i++)
//     {
//         printf("%s\t\t%d\t%d\t\t%c\n",s[i].name,s[i].roll,s[i].marks,s[i].remarks);
//     }
//     return 0;
// }

#include<stdio.h>
struct student
{
    char name[5];
    int marks[5];
    // float sum[5];
    // float average[5];
};
int main()
{
    struct student s[5];
    int i,j;
    float averaget,sumt;
    float average[5],sum[5];
    for(i=0;i<2;i++)
    {
        printf("\nEnter your name: ");
        scanf(" %s",s[i].name);
        printf("\nEnter your marks\n");
        for(j=0;j<5;j++)
        {
            printf("Marks on %d sub: ",j+1);
            scanf("%d",&s[i].marks[j]);
            sumt+=s[i].marks[j];
        }
        sum[i]=sumt;
        average[i]=sumt/5;  
    }
    for(i=0;i<2;i++)
    {
        printf("Your name is %s\n",s[i].name);
        printf("Sum: %.2f\n",sum[i]);
        printf("Average: %.2f\n",average[i]);
    }
    return 0;
}
