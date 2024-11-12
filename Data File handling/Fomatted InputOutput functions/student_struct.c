#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    struct Student
    {
        char name[30];
        char address[30];
        int roll_no;
        float marks;
    };
    struct Student s[2],s1[2];
    int i;
    fp=fopen("studentInfo.txt","w");
    if(fp==NULL)
    {
        printf("Couldnot open or create file.");
        exit(0);
    }
    for(i = 0; i < 2; i++)
    {
        printf("Enter the information of student %d\n", i + 1);

        printf("Enter name: ");
        gets(s[i].name);  // Unsafe but used as per your request

        printf("Enter address: ");
        gets(s[i].address);  // Unsafe but used as per your request

        printf("Enter Rollno: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        fprintf(fp,"%s\t%s\t%d\t%f\n",s[i].name,s[i].address,s[i].roll_no,s[i].marks);
        // Clear the input buffer using fflush(stdin)
        fflush(stdin);
    }
    fclose(fp);
    fp=fopen("studentInfo.txt","r");
    if(fp==NULL)
    {
        printf("Couldnot Open Student file");
        exit(0);
    }
    for(i=0;i<2;i++)
    {
        fscanf(fp,"%s%s%d%f",&s1[i].name,&s1[i].address,&s1[i].roll_no,&s1[i].marks);
        printf("%s\t%s\t%d\t%.2f\n",s1[i].name,s1[i].address,s1[i].roll_no,s1[i].marks);
    }
    fclose(fp);
  
}
