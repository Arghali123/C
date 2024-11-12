// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *arr, min, max, n;
//     int i;
//     printf("Enter the number of elements in your arr:\n");
//     scanf("%d", &n);
//     arr = (int *)malloc(n * sizeof(int));
//     if (arr == NULL)
//     {
//         printf("memory allocation failed");
//         return 1;
//     }
//     printf("Enter your Elements:\n");
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     min = max = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//         if (max < arr[i])
//         {k
//             max = arr[i];
//         }
//     }
//     printf("Small is: %d\n", min);
//     printf("Large: %d", max);
//     free(arr);
//     return 0;
// }
