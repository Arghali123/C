//9. Sort 5 Words Stored in an Array of Pointers
#include <stdio.h>
#include <string.h>

int main() {
    char *words[5];
    char temp[50];

    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++) {
        words[i] = (char *)malloc(50 * sizeof(char));
        fgets(words[i], 50, stdin);
        words[i][strcspn(words[i], "\n")] = 0; // Remove newline
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Sorted words:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
        free(words[i]);
    }

    return 0;
}
