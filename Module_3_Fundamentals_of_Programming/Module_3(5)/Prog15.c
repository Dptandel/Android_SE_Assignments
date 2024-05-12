// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLargestSmallestWords(char *str, char *largest, char *smallest) {
    char word[1000];
    int i = 0, j = 0;
    int max_length = 0, min_length = 1000; // Assuming maximum word length is less than 1000

    while (str[i] != '\0') {
        // Skip leading whitespaces
        while (isspace(str[i])) {
            i++;
        }

        // Extract word
        j = 0;
        while (!isspace(str[i]) && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        // Check if the extracted word is larger than the largest word found so far
        if (strlen(word) > max_length) {
            strcpy(largest, word);
            max_length = strlen(word);
        }

        // Check if the extracted word is smaller than the smallest word found so far
        if (strlen(word) < min_length && strlen(word) > 0) {
            strcpy(smallest, word);
            min_length = strlen(word);
        }
    }
}

int main() {
    char str[1000], largest[1000], smallest[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing newline character from input
    str[strcspn(str, "\n")] = '\0';

    findLargestSmallestWords(str, largest, smallest);

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}
