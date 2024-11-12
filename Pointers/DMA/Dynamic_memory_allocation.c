//Dynamic Memory Allocation
/*
The process of allocating and freeing memory at run time is known as Dynamic Memory Allocation.This reserves the 
memory required by the program and returns this source to the system once the use of reserved space is utilized.
*/

//Problem With Array
/*
1.)C requires the number of elements in an array to be specified at compile time.
2.)It is difficult to know the exact size of the array in advance(prior to execution).
3.)If the size needed at the run time is small then the specified size,then we have wastage of memory space.
4.)If the size needed at run time is greater then specified size,we will have shortage of memory space.
5.)Solution DMA
*/

//There are 4 libary functions:malloc(),calloc(),free() and realloc() for memory management.This functions are 
//defined within header file stdlib.h or alloc.h