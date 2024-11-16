//Create a structure named company which has name, address, phone and noOfEmployee as member variables. Read name of company, its address, phone and noOfEmployee. Finally display these members’ value.
#include <stdio.h>

struct Company {
    char name[100];
    char address[150];
    char phone[15];
    int noOfEmployee;
};

void inputCompanyDetails(struct Company *c) {
    printf("Enter Company Name: ");
    scanf(" %[^\n]", c->name);
    printf("Enter Company Address: ");
    scanf(" %[^\n]", c->address);
    printf("Enter Company Phone: ");
    scanf(" %[^\n]", c->phone);
    printf("Enter Number of Employees: ");
    scanf("%d", &c->noOfEmployee);
}

void displayCompanyDetails(struct Company c) {
    printf("\n--- Company Details ---\n");
    printf("Name: %s\n", c.name);
    printf("Address: %s\n", c.address);
    printf("Phone: %s\n", c.phone);
    printf("Number of Employees: %d\n", c.noOfEmployee);
}

int main() {
    struct Company company;
    
    inputCompanyDetails(&company);
    displayCompanyDetails(company);

    return 0;
}
