//Pointer to array of structures
#include<stdio.h>
struct book
{
    char name[20];
    int pages;
    float price;
};
int main()
{
    struct book b[5],*bptr;
    bptr=b;
    for(int i=0;i<5;i++)
    {
        printf("\nEnter the information of Book %d.\n",i+1);
        printf("Enter name: ");
        scanf("%s",(bptr+i)->name);
        printf("Enter no of pages: ");
        scanf("%d",&(bptr+i)->pages);
        printf("Enter price: ");
        scanf("%f",&(bptr+i)->price);
    }
    printf("Name\t\tNo of pages\tPrice\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\t\t%d\t\t%f\n",(bptr+i)->name,(bptr+i)->pages,(bptr+i)->price);
    }
    return 0;
}