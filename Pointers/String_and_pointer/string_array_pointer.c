// #include <stdio.h>
// int main()
// {
//    // Array of strings(array of pointer to char)
//    const char *arr[] = {
//        "hello",
//        "world",
//        "this",
//        "is",
//        "an",
//        "array",
//        "of",
//        "string"};
//    // Size odf the array(number of strings)
//    int size = sizeof(arr) / sizeof(arr[0]);

//    // Accessing individual characters in each string and printing using pointers
//    printf("Individual Characters of each strings:\n");
//    for (int i = 0; i < size; i++)
//    {
//       const char *ptr = arr[i]; // Pointer to the first character of the sting\]
//       printf("%c\n", *ptr);
//       //   printf("String : %d\n",i+1);
//       while (*ptr != '\0')
//       {
//          printf("%c\t", *ptr);
//          ptr++;
//       }
//       printf("\n");
//    }

//    return 0;
// }
