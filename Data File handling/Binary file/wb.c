#include<stdio.h>
int main()
{
    int numbers[]={10,20,30,40,50};

    //Open the file in binary write mode
    FILE *file=fopen("data.bin","wb");
    if(file==NULL)
    {
        printf("Couldnot open file for writing.\n");
        return 1;
    }
    //Write the array to the file
    size_t numberElementsWritten=fwrite(numbers,sizeof(int),5,file);
    if(numberElementsWritten!=5)
    {
        printf("Error writing to file.\n");
    }
    else
    {
        printf("Data written sucessfully.\n");
    }
    //Close the file
    fclose(file);
    return 0;
}