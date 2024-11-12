// Define a structure for vehicle Owner having data members name,address,telephone number,vechile number and
// license number.Take the data for 3 owners,write them in File "Own.txt".Read the data from the file and display
// them.
#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
void main()
{
    FILE *fp;
    struct vechicle_owner
    {
        char name[30];
        char address[30];
        long int phone_no;
        int vechile_no;
        int licence_no;
    };
    struct vechicle_owner vechile[SIZE], v[SIZE];
    int i;
    fp = fopen("Own.txt", "w");
    if (fp == NULL)
    {
        printf("Couldnot open or create file.");
        exit(0);
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter the Information about vechile Owner %d\n",i+1);
        printf("Enter name: ");
        gets(vechile[i].name);

        printf("Enter address: ");
        gets(vechile[i].address);

        printf("Enter Telephone No: ");
        scanf("%ld",&vechile[i].phone_no);

        printf("Enter Vechile no: ");
        scanf("%d",&vechile[i].vechile_no);

        printf("Enter license no: ");
        scanf("%d",&vechile[i].licence_no);

        fprintf(fp,"%s\t%s\t%ld\t%d\t%d\n",vechile[i].name,vechile[i].address,vechile[i].phone_no,vechile[i].vechile_no,vechile[i].licence_no);
        fflush(stdin);
        
    }
    fclose(fp);

    fp=fopen("Own.txt","r");
    for(i=0;i<SIZE;i++)
    {
        fscanf(fp,"%s%s%ld%d%d",&v[i].name,&v[i].address,&v[i].phone_no,&v[i].vechile_no,&v[i].licence_no);
        printf("%s\t%s\t%ld\t%d\t%d\n",v[i].name,v[i].address,v[i].phone_no,v[i].vechile_no,v[i].licence_no);
    }
    fclose(fp);
}