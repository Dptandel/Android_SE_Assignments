// Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, word_count;

    printf("Enter a string: ");
    gets(str);

    i = 0;
    word_count = 1;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
        word_count++;
        }
        i++;
    }

    printf("Total number of words in string is %d.", word_count);

    return 0;
}