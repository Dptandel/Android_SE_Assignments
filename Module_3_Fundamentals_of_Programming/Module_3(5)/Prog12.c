// Write a program in C to find the number of times a given word 'is' appears in the given string.

#include <stdio.h>
#include <string.h>

int countOccurrences(char *string, char *word) {
    int count = 0;
    int wordLength = strlen(word);
    char *ptr = string;

    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr += wordLength;
    }

    return count;
}

int main() {
    char string[100];
    char word[] = "is";

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    int occurrences = countOccurrences(string, word);
    printf("The word '%s' appears %d times in the given string.\n", word, occurrences);

    return 0;
}
