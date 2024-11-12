//A file name DATA conatains a series of intergers numbers.Code a program to read these numbers and then write all
//odd number to ODD fiel and even numbers in EVEN file.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fpdata;
    FILE *fpodd;
    FILE *fpeven;
    int i,n;
    int num;
    printf("How many integrs you want in data file?: ");
    scanf("%d",&n);
    printf("Enter %d Integers:\n",n);
    fpdata=fopen("DATA.txt","w");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        fprintf(fpdata,"%d ",num);
    }
    fclose(fpdata);
    
    fpdata=fopen("DATA.txt","r");
    fpeven=fopen("EVEN.txt","w");
    fpodd=fopen("ODD.txt","w");

    for(i=0;i<n;i++)
    {
        fscanf(fpdata,"%d",&num);
        if(num%2==0)
        {
            fprintf(fpeven,"%d ",num);
        }
        else
        {
            fprintf(fpodd,"%d ",num);
        }
    }
    printf("\nTransferred Sucessfully");
    fclose(fpdata);
    fclose(fpeven);
    fclose(fpodd);
}