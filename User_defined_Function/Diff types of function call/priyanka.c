//Storage classes and scope rules

//Static
// #include<stdio.h>
// void function()
// {
// static int x=0;
//  x++;
//  printf("x= %d\n",x);
// }
// int main()
// {
//     function();
//     function();
//     function();
//     return 0;
// }

//Register
#include<stdio.h>
void function()
{
    register int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    function();
    return 0;
}