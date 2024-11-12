#include<stdio.h>
#include<stdlib.h>//Include for malloc and free
//Define a structure for Student
struct Student
{
    int id;
    char name[20];
    float grades[5];//Array to store grades for 5 subjects
};
int main()
{
    int num_students;
    printf("Enter the number of Students: ");
    scanf("%d",&num_students);

    //Allocate memory for an array of Student Structures
    struct Students *student=(struct Student*)malloc(num_students*sizeof(struct Student));

    //Check if memory allocation was sucessful
    if(student==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;//Exit if allocaion fails
    }
}