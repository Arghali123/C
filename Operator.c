// #include<stdio.h>
// int main()
// {
//     unsigned int x=5;//0000 0101 in binary
//     unsigned int y=3;//0000 0011 in binary

//     //Bitwise AND
//     unsigned int and_result=x&y;//0000 0001
//     printf("Bitwisw AND :%d & %d = %d\n",x,y,and_result);

//     //Bitwise OR 
//     unsigned int or_result=x|y;//0000 0111
//     printf("Bitwisw OR: %d | %d =%d\n",x,y,or_result);

//     //Bitwise XOR 
//     unsigned int xor_result=x^y;//0000 0110
//     printf("Bitwise XOR: %d ^ %d =%d\n",x,y,xor_result);
   

//     //Bitwise NOT 
//     unsigned int not_result=~x;//1111 1010 
//     printf("Bitwise NOT:~%d =%d\n",x,not_result);

//     //Left shift 
//     unsigned int left_shift_result=x<<1;//0000 1010
//     printf("Left shift:%d<<1 =%d\n",x,left_shift_result);

//     //Right shift 
//     unsigned int right_shift_result=x>>1;
//     printf("Right shift :%d>>1 =%d\n",x,right_shift_result);
//     return 0;
// }

//comma.c

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     //using comma operator
//     a=(b=3,c=5,b+c);
//     //b and c are assigned first,then their sum is assigned to a
//     printf("The value of a : %d\n",a);//Output:8
//     return 0;
// }


//operators.c

#include<stdio.h>
int main()
{
    //unary operator
    // int a=5;
    // int b=-a;//unary minus
    // printf("Unary minus:-%d =%d\n",a,b);

    //Binary operators(arthematic)
    // int x=10;
    // int y=3;
    // printf("Addition:%d+%d =%d\n",x,y,x+y);
    // printf("Subtraction:%d-%d =%d",x,y,x-y);
    // printf("Multiplication:%d*%d =%d\n",x,y,x*y);
    // printf("Division:%d/%d =%d",x,y,x/y);
    // printf("Remender:%d % %d =%d\n",x,y,x%y);

    //Relational operators
    // printf("Equal to:%d==%d =%d\n",x,y,x==y);
    // printf("Not equal to %d != %d =%d\n",x,y,x!=y);
    // printf("Greater then:%d > %d =%d\n",x,y,x>y);
    // printf("Less then:%d > %d =%d\n",x,y,x<y);
    // printf("Greater than or equal to: %d >= %d = %d\n",x,y,x>=y);
    // printf("Less than or equal to: %d <= %d = %d\n",x,y,x<=y);

    //Logical operators
    // int p=1;//true
    // int q=0;//false

    // printf("Logical AND:%d && %d = %d\n",p,q,p&&q);
    // printf("Logical OR: %d || %d = %d\n",p,q,p||q);
    // printf("Logical NOT: !%d = %d\n",p,!p);

    //Assignment Operators
    // int z=10;
    // printf("Intitial value: z= %d\n",z);
    // z+=5;//z=z+5
    // printf("After z+=5= %d\n",z);
    // z-=2;//z=z-2
    // printf("After z-=2: %d\n",z);
    // z*=3;//z=z*3
    // printf("After z*=3: %d\n",z);
    // z/=4;  //z=z/4
    // printf("After z/=4: %d\n",z);
    // z%=3;
    // printf("After z%%=3: %d\n",z);

    //Increment and decrement
    // int m=5;
    // printf("Initial value: m= %d\n",m);
    // printf("Post increment: m++= %d\n",m++);
    // printf("After post increment: m= %d\n",m);
    // printf("Pre-increment: ++m= %d\n",++m);
    // printf("Post-decrement: m--= %d\n",m--);
    // printf("After post-decrement: m= %d\n",m);
    // printf("Pre-decrement:--m= %d\n",--m);

    //Ternary operator
    int x=10;
    int y=3;
    int result=(x>y)? x:y;//If x is greater then y,result=x,else result=y
    printf("Ternary opeator:(x>y)? x:y = %d\n",result);
    

    return 0;
}

