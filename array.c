// #include<stdio.h>
// int main()
// {
//     //declare an array
//     int n[5];
//     //initialize an array
//     n[0]=1;
//     n[1]=12;
//     n[2]=13;
//     n[3]=15;
//     n[4]=100;
    
//     //one line initialization
//     int num[5]={100,20,2,12,23};
//     num[4]=11;
//     printf("%d\n",n[0]);
//     printf("%d\n",n[4]);
//     printf("\n%d",num[1]);
//     printf("\n%d",num[4]);
//     return 0;
// }

//WAP to store marks of 5 students and display them
#include<stdio.h>
int main()
{
    int marks[5],sum=0;
    float aveage;
    // printf("%d\n",marks[0]);
    // printf("%d\n",marks[1]);
    // printf("%d\n",marks[2]);
    // printf("%d\n",marks[3]);
    // printf("%d\n",marks[4]);
    for(int i=0;i<5;i++)
    {
        printf("Enter the marks %d: ",i+1);
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    aveage=sum/5;

    for(int i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
        printf("The sum of all the marks is %d\n",sum);
        printf("The sum of all the marks is %.3f\n",aveage);
    return 0;
}