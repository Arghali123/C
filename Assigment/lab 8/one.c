//Write a program to read RollNo, Name, Address, Age & marks in physics, C, math in three students and display the student details with average marks achieved.
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float physicsMarks;
    float cMarks;
    float mathMarks;
    float averageMarks;
};

void inputStudentDetails(struct Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", s->name);
    printf("Enter Address: ");
    scanf(" %[^\n]", s->address);
    printf("Enter Age: ");
    scanf("%d", &s->age);
    printf("Enter marks in Physics: ");
    scanf("%f", &s->physicsMarks);
    printf("Enter marks in C: ");
    scanf("%f", &s->cMarks);
    printf("Enter marks in Math: ");
    scanf("%f", &s->mathMarks);
    s->averageMarks = (s->physicsMarks + s->cMarks + s->mathMarks) / 3.0;
}

void displayStudentDetails(struct Student s) {
    printf("\nRoll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Address: %s\n", s.address);
    printf("Age: %d\n", s.age);
    printf("Marks - Physics: %.2f, C: %.2f, Math: %.2f\n", s.physicsMarks, s.cMarks, s.mathMarks);
    printf("Average Marks: %.2f\n", s.averageMarks);
}

int main() {
    struct Student students[3];
    
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudentDetails(&students[i]);
    }
    
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 3; i++) {
        displayStudentDetails(students[i]);
    }

    return 0;
}
