//Prorgram to illustrate the use of break within loop
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
        if(i==6)
        {
            break;
        }
    }
    return 0;
}