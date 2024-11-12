#include<stdio.h>
int main()
{
    unsigned int x=5;//0000  0101 in binary
    unsigned int y=3;//0000  0011 in binary

    //Bitwise AND
    unsigned int and_result=x&y;//0000 0001
    printf("Bitwise AND: %d\n",and_result);
    
    //Bitwise OR
    unsigned int or_result=x|y;//0000 0111
    printf("Bitwise OR: %d\n",or_result);

    //Bitwise XOR
    unsigned int xor_result=x^y;//0000 0110(if are differnt then 1 else 0)
    printf("Bitwise XOR: %d\n",xor_result);

    //Bitwise NOT
    unsigned int not_result=~x;//1111 1010
    printf("Bitwise NOT: %d\n",not_result);

    //Left Shift
    unsigned int left_shift_result=x<<1;//0000 1010
    printf("Left shift: %d\n",left_shift_result);

    //Right Shift 
    unsigned int right_shift_result=x>>1;//0000 0010
    printf("Right shift: %d\n",right_shift_result);

    return 0;
}