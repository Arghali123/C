//Wap that creates a file named "student.dat" to keep the records of N students of a school and print the records
//in accending order of the student_id.A typical record will be student_id,name,address and marks.
#include<stdio.h>
int main()
{
    struct record
    {
       int student_id;
       char name[30];
       char address[30];
       float marks;
    };
    struct record student,t;
    struct record temp[100];
    int count=0,i,j;
    FILE *fp;
    char ch;
    fp=fopen("student.dat","wb+");
    if(fp==NULL)
    {
        printf("ERROR-Cannot open the destination file.\n");
        return 1;
    }
    else
    {
        printf("Enter student Information:\n");
    }
    do
    {
        printf("Enter id: ");
        scanf("%d",&student.student_id);
        getchar();
        printf("Enter name: ");
        scanf("%s",student.name);
        getchar();
        printf("Enter address: ");
        scanf("%s",student.address);
        printf("Enter marks: ");
        scanf("%f",&student.marks);
        fwrite(&student,sizeof(struct record),1,fp);
        printf("Do you want to add more info(y/n)");
        scanf(" %c",&ch);
    } while (ch!='n');
    rewind(fp);//sets file pointer at the beginning
    fread(&student,sizeof(struct record),1,fp);
    while(!feof(fp))
    {
        temp[count]=student;
        count++;
        fread(&student,sizeof(struct record),1,fp);
    }
    fclose(fp);
    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(temp[i].student_id>temp[j].student_id)
            {
                t=temp[i];
                temp[i]=temp[j];
                temp[j]=t;
            }
        }
    }
    printf("Sorted list:\n");
    for(i=0;i<count;i++)
    {
        printf("\nId: %d\n",temp[i].student_id);
        printf("Name: %s\n",temp[i].name);
        printf("Address: %s\n",temp[i].address);
        printf("Marks: %.2f\n",temp[i].marks);
    }
    return 0;
}