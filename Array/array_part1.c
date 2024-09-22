
// Array introduction
// An array is a collection of elements of the same data type placed in contiguous(consecutively)memory location
// and can be accessed individually using index to a unique given name. An array is a group of related data items
// that share a common name.

// Characteristics of an array
// 1.)All the elements of an array share the same name and they are distinguished from one to another with the help
//    of an element or index number.
// 2.)Memory for an array elements is allocated at array declaration time rather than program run time.
// 3.)Once the memory is allocated,it's size cannot be grown or shrunk at the run time.
// 4.)We have to guess the expected size of memory in advance.
// 5.)Array elements are always stored in contiguous memory locations.
// 6.)Any particular element of array can be modified seperately without disturbing other elements.

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

// WAP to store marks of 5 students and display them
//  #include<stdio.h>
//  int main()
//  {
//      int marks[5],sum=0;
//      float aveage;
//      // printf("%d\n",marks[0]);
//      // printf("%d\n",marks[1]);
//      // printf("%d\n",marks[2]);
//      // printf("%d\n",marks[3]);
//      // printf("%d\n",marks[4]);
//      for(int i=0;i<5;i++)
//      {
//          printf("Enter the marks %d: ",i+1);
//          scanf("%d",&marks[i]);
//          sum=sum+marks[i];
//      }
//      aveage=sum/5;

//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",marks[i]);
//     }
//         printf("The sum of all the marks is %d\n",sum);
//         printf("The sum of all the marks is %.3f\n",aveage);
//     return 0;
// }

// Program that accepts the price and stock of 5 differnent bulbs,calculate the total stock value.
// #include <stdio.h>
// int main()
// {
//     int i, stock[5];
//     float price[5];
//     float total = 0;
//     for (i = 0; i < 5; i++)
//     {
//         printf("Enter stock of buld %d: ", i + 1);
//         scanf("%d", &stock[i]);
//         printf("Enter the price of bulb %d: ", i + 1);
//         scanf("%f", &price[i]);
//         total = total + stock[i] * price[i];
//     }
//     printf("The total stock value is %.3f\n", total);
//     return 0;
// }

// Program to find the smallest and the largest element in the array
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     int small, large, a[5];
//     printf("Entet the value of n : ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter the %d element of an array: ", i + 1);
//         scanf("%d", &a[i]);
//     }
//     printf("The elements of an array are : ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         small = a[0];
//         large = a[0];
//         for (i = 1; i < n; i++)
//       {
//         if (small > a[i])
//         {
//             small = a[i];
//         }
//         if (large < a[i])
//         {
//             large = a[i];
//         }
//       }
//     }
//     printf("\nThe smallest element is %d and the largest element is %d", small, large);
//     return 0;
// }

// Sorting
// Sorting is the process of arranging items in some sequence(ascending or descending) by value or by alphabet or
// by any other weight.

// Program for sorting elements of one dimensional array in ascending order using selection sort.

// WAP to store marks of top 5 students and
// 1.)display the average marks
// 2.)display the highest & lowest marks
// #include <stdio.h>
// int main()
// {
//     int i, n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     int a[n];
//     int small, large,found=0;
//     float average, sum = 0;

//     for (i = 0; i < n; i++)
//     {
//         printf("Enter %d student's mark: ", i + 1);
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i < n; i++)
//     {
//         small = a[0];
//         large = a[0];
//         for (i = 1; i < n; i++)
//         {
//             if (small > a[i])
//             {
//                 small = a[i];
//             }
//             if (large < a[i])
//             {
//                 large = a[i];
//             }
//         }
//     }
//     printf("\nThe small number is %d and largest number is %d", small, large);

//     printf("\nThe marks are: ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//         sum = sum + a[i];
//     }
//     average = sum / n;
//     printf("\nThe average is %.3f", average);

//   for(i=0;i<n;i++)
//   {
//     if(a[i]==50)
//     {
//         found=1;
//         break;
//     }
//   }
//   if(found)
//   {
//     printf("\n50 is found man!!");
//   }
//   else
//   {
//     printf("\n50 is not in the array");
//   }

//     return 0;
// }

// Program for sorting elements of one dimensional array in ascending order using selection sort/(Bubble Sort).
// #include <stdio.h>
// int main()
// {
//     int nums[100], i, j, n, temp;
//     printf("\nHow many numbers you want to sort ??\t");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &nums[i]);
//     }
//     printf("\nThe numbers before sorting are: \n");
//     for (i = 0; i < n; i++)
//         printf("%d\t", nums[i]);
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (nums[i] > nums[j])
//             {
//                 temp = nums[i];
//                 nums[i] = nums[j];
//                 nums[j] = temp;
//             }
//         }
//     }
//     printf("\nThe numbers in asecnding order are:\n");
//     for(i=0;i<n;i++)
//     printf("%d\t",nums[i]);
//     return 0;
// }
// note:most passes  it will require is equal to the number of elements in the array -1,because when(n-1)elements
// are in their correct positions,the array is itself sorted.

// Searching in an array
// Searching is a process of finding an element within the list of elements(i.e.array)

// note:
// 1.)Argument is an actual value passed to a function or method when it is called.
// 2.)Parameter is a variable which stores arguments:e.g:A,B

// Program to illustrate the searching of an item in an array using sequential search that is seaching in unordered array.
// #include <stdio.h>
// #define MAX 5
// int main()
// {
//     int number[MAX], key, i, flag = 0;
//     for (i = 0; i < MAX; i++)
//     {
//         printf("Enter the %d th element of array: ", i + 1);
//         scanf("%d", &number[i]);
//     }
//     printf("Enter the key element: ");
//     scanf("%d", &key);
//     for (i = 0; i < MAX; i++)
//     {
//         if(key==number[i])
//         {
//             flag=1;
//             break;
//         }
//         else
//         {
//             flag=0;
//         }

//     }
//     if(flag==1)
//     {
//         printf("\n%d was found at position %d",key,i+1);
//     }
//     else
//     {
//         printf("\n%d was not found",key);
//     }
//     return 0;
// }
