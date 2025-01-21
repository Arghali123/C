// Program to convert decimal to binary.
#include <stdio.h>
int main()
{
    long int decNum, binNum, q = 1, rem, rev = 0, i = 1;
    printf("Enter the Decimal num: ");
    scanf("%ld", &decNum);
    int inputted_num=decNum;
    while (q != 0)
    {
        q = decNum / 2;
        rem = decNum % 2;
        decNum = q;
        rev = rev + rem * i;
        i = i * 10;
    }
    printf("The Binary number of %d Decimal number is %ld.\n",inputted_num,rev);
    return 0;
}