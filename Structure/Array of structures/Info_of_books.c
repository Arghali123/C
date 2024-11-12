// WAP to create a structure named Book with members name,author,published year and price and display information of 3 books
#include <stdio.h>
#include <string.h>
// Define a structure named Book
struct Book
{
    char name[50];
    char author[30];
    int published_year;
    int price;
};

int main()
{
    // Declare an array of structure variables for 3 books
    struct Book Book_info[3];

    // Input info for each book
    for (int i = 0; i < 3; i++)
    {

        printf("Enter the name of the Book: \n");
        getchar(); // Clear the newline character from the  input buffer
        fgets(Book_info[i].name, sizeof(Book_info[i].name), stdin);

        printf("Enter the name of the author: \n");
        getchar();
        fgets(Book_info[i].author, sizeof(Book_info[i].author), stdin);

        printf("Enter published year: \n");
        scanf("%d", &Book_info[i].published_year);

        printf("Enter price of the book: \n");
        scanf("%d", &Book_info[i].price);
    }

    // Display information for each book
    for (int i = 0; i < 3; i++)
    {
        printf("\n--- Book %d Information ---\n", i + 1);
        printf("Name of the book: %s\n", Book_info[i].name);
        printf("Name of the author: %s\n", Book_info[i].author);
        printf("Published year of the book: %d\n", Book_info[i].published_year);
        printf("Price of the book: %d\n", Book_info[i].price);
    }

    return 0;
}
