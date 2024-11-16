//4. Count Characters and Words in a Sentence
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100];
    int words = 1, characters = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ')
            words++;
        else if (isalnum(sentence[i]))
            characters++;
    }

    printf("Characters: %d\nWords: %d\n", characters, words);
    return 0;
}
