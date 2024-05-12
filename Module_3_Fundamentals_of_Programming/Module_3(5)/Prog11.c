// Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toggleCase(char *sentence) {
    int length = strlen(sentence);
    for (int i = 0; i < length; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    toggleCase(sentence);

    printf("Toggled case sentence: %s\n", sentence);

    return 0;
}
