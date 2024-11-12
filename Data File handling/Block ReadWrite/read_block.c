#include<stdio.h>
int main()
{
    //Array to hold the data read from the file
    int numbers[5];

    //Open the file in binary read mode
    FILE *file=fopen("block_data.bin","rb");
    if(file==NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    //Read the entire Block(array) from the file in one go
    size_t elementsRead=fread(numbers,sizeof(int),5,file);
    if(elementsRead!=5)
    {
        printf("Error reading block from the file.\n");
    }
    else
    {
        printf("Block of data read sucessfully.\n");
    }
    //Print the number to verify the read operation
    for(int i=0;i<5;i++)
    {
        printf("Number %d= %d\n",i+1,numbers[i]);
    }
    //Closing the file
    fclose(file);
    return 0;
}