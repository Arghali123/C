//5. Remove Whitespaces and Replace Periods with Colons in a Sentence
#include <stdio.h>

int main() {
    char sentence[100], result[100];
    int j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            result[j++] = (sentence[i] == '.') ? ':' : sentence[i];
        }
    }
    result[j] = '\0';

    printf("Modified sentence: %s\n", result);
    return 0;
}
