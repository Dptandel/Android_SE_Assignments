// Write a program in C to count the total number of vowels or consonants in a string.

#include <stdio.h>

int main () {
    char str[50];
    int numberOfVowels = 0, numberOfConsonants = 0, i = 0;

    printf ("Enter the string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            numberOfVowels++;
        } else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            numberOfVowels++;
        } else {
            numberOfConsonants++;
        }
        i++;
    }

    printf("Vowels: %d", numberOfVowels);
    printf("\nConsonants: %d", numberOfConsonants);

    return 0;
}