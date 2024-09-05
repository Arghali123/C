#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 != 0)
    {
        printf("Fizz");
    }
    if (n % 5 == 0 && n % 3 != 0)
    {
        printf("buzz");
    }
    if (n % 5 == 0 && n % 3 == 0)
    {
        printf("Fizz buzz");
    }
    return 0;
}