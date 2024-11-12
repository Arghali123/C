#include<stdio.h>
int main()
{
    //Unary operator
    int a=5;
    int b=-a;//Unary minus
    printf("Unary minus: -%d= %d\n",a,b);

    //Binary opearatos(Arthematic)
    int x=10;
    int y=3;
    printf("Additio:%d+%d = %d\n",x,y,x+y);
    printf("Subraction:%d-%d= %d\n",x,y,x-y);
    printf("Multiplication:%d*%d= %d\n",x,y,x*y);
    printf("Division:%d/%d= %d\n",x,y,x/y);
    printf("Modulus:%d %% %d= %d\n",x,y,x%y);

    //Relational Operators
    printf("Equal to:%d==%d = %d\n",x,y,x==y);
    printf("Not equal to:%d != %d = %d\n",x,y,x!=y);
    printf("Greater than:%d>%d= %d\n",x,y,x>y);
    printf("Less than:%d<%d= %d\n",x,y,x<y);
    printf("Greater than or equal to:%d>=%d= %d\n",x,y,x>=y);
    printf("Less than or equal to:%d<=%d= %d\n",x,y,x<=y);

    //Logical Operator
    int p=1;//True
    int q=0;//False
    printf("Logical AND:%d&&%d= %d\n",p,q,p&&q);
    printf("Logical OR:%d||%d= %d\n",p,q,p||q);
    printf("Logical NOT:!%d= %d\n",p,!p);

    //Assignment Operators
    int z=10;
    printf("Initial value:z= %d\n",z);
    z+=5;//z=z+5
    printf("After +=5:z= %d\n",z);
    z-=2;//z=z-2
    printf("After -=2:z= %d\n",z);
    z*=3;//z=z*3
    printf("After *=3:z= %d\n",z);
    z/=4;//z=z/4
    printf("After /=4:z= %d\n",z);
    z%=3;//z=z%3
    printf("After %%=3:z= %d\n",z);

    //Increment and Decrement Operators
    int m=5;
    printf("Initial value:m= %d\n",m);
    printf("Post-increment:m++= %d\n",m++);
    printf("After post-increment:m= %d\n",m);
    printf("Pre-increment:++m= %d\n",++m);
    printf("Post -decrement:m--= %d\n",m--);
    printf("After Post-decrement:m= %d\n",m);
    printf("Pre-decrement:--m= %d\n",--m);

    //Ternary Operator
    int result=(x>y)?x:y;//if x is greater then y,result=x else result=y
    printf("Ternary operator:(x>y)?x:y = %d\n",result);
    return 0;
}