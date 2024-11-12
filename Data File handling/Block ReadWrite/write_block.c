#include<stdio.h>
int main()
{
    //Create an array of integers to write
    int numbers[]={10,20,30,40,50};

    //Open the file in binary write mode
    FILE *file=fopen("block_data.bin","wb");
    if(file==NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    //Write the entire block(array) to the file in one go
    size_t elementsWritten=fwrite(numbers,sizeof(int),5,file);
    if(elementsWritten!=5)
    {
        printf("Error writing block to file.\n");
    }
    else
    {
        printf("Block of data written Sucessfully.\n");
    }

    //Close the file
    fclose(file);
}