//10.Write a program to print the following pattern
/*
    UN
    UNIV
    UNIVER
    UNIVERSI
    UNIVERSITY
    UNIVERSI
    UNIVER
    UNIV
    UN
*/
#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "UNIVERSITY";
    // int length = strlen(word);
    
    // Define the lengths to print for the desired pattern
    int lengths[] = {2, 4, 6, 8, 10, 8, 6, 4, 2};
    int num_lines = sizeof(lengths) / sizeof(lengths[0]);
    printf("%d\n",num_lines);
    for(int i = 0; i < num_lines; i++) {
        int current_length = lengths[i];
        for(int j = 0; j < current_length; j++) {
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}
