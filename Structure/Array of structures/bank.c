/*
Create a structure to specify data on costomer in a bank.The data to store is:Acc_no,Name,and Balance in account.
Assume maximum of 200 customers in the bank.
i.)Write a function to print Acc_no. and Name of the each customer with balance below Rs 100.
i.)If a customer gives a request for withdraw or deposit it is given in the form:
Acc_no,Amount(1 for deposit and 2 for withdraw).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define N 5

struct account {
    int acc_no;
    char name[30];
    float balance;
};

int count = 0; // To track the number of accounts

void display(struct account customer[]);

int main() {
    struct account customer[N];
    int choice, acc_no, i;
    char name[30];
    float amount;

    printf("1. Deposit\n");
    printf("2. Withdrawal\n");
    printf("3. Create Account\n");
    printf("4. Customers with Balance Below Rs.100\n");
    printf("5. Exit\n");

    while (TRUE) {
        printf("\nEnter a choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Deposit
                printf("Enter Account Number: ");
                scanf("%d", &acc_no);
                printf("Enter Name: ");
                scanf("%s", name);

                for (i = 0; i < count; i++) {
                    if ((customer[i].acc_no == acc_no) && (strcmp(name, customer[i].name) == 0)) {
                        printf("Enter Deposit Amount: ");
                        scanf("%f", &amount);
                        customer[i].balance += amount;
                        printf("Deposit Successful. Updated Balance: Rs. %.2f\n", customer[i].balance);
                        break;
                    }
                }
                if (i == count) {
                    printf("No matching account found.\n");
                }
                break;

            case 2: // Withdrawal
                printf("Enter Account Number: ");
                scanf("%d", &acc_no);
                printf("Enter Name: ");
                scanf("%s", name);

                for (i = 0; i < count; i++) {
                    if ((customer[i].acc_no == acc_no) && (strcmp(name, customer[i].name) == 0)) {
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f", &amount);

                        if (customer[i].balance >= amount) {
                            customer[i].balance -= amount;
                            printf("Withdrawal Successful. Remaining Balance: Rs. %.2f\n", customer[i].balance);
                        } else {
                            printf("Insufficient Balance. Current Balance: Rs. %.2f\n", customer[i].balance);
                        }
                        break;
                    }
                }
                if (i == count) {
                    printf("No matching account found.\n");
                }
                break;

            case 3: // Create Account
                if (count >= N) {
                    printf("Account limit reached. Cannot create more accounts.\n");
                    break;
                }
                printf("Enter Account Number: ");
                scanf("%d", &customer[count].acc_no);
                printf("Enter Name: ");
                scanf("%s", customer[count].name);
                printf("Enter Initial Balance: ");
                scanf("%f", &customer[count].balance);
                printf("Account Created Successfully!\n");
                count++;
                break;

            case 4: // Display Customers with Balance Below Rs.100
                display(customer);
                break;

            case 5: // Exit
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void display(struct account customer[]) {
    int i, found = 0;
    printf("\nCustomers with Balance Below Rs.100:\n");
    for (i = 0; i < count; i++) {
        if (customer[i].balance < 100) {
            printf("Account Number: %d\n", customer[i].acc_no);
            printf("Name: %s\n", customer[i].name);
            printf("Balance: Rs. %.2f\n\n", customer[i].balance);
            found = 1;
        }
    }
    if (!found) {
        printf("No customers with balance below Rs.100.\n");
    }
}
