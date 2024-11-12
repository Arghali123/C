// Program to read name list of 5 students and display them in alphabetical form.
#include <stdio.h>
#include <string.h>
#define N 5
int main()
{
    char name[N][20], temp[20];
    int i, j;
    printf("Enter the name list of 5 students:\n");
    for (i = 0; i < N; i++)
    {
        gets(name[i]);
    }
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("The sorted list are:\n");
    for (i = 0; i < N; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}