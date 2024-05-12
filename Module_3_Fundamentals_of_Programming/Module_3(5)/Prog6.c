// Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>

int main () {
    char str[100];
    int numberOfAlphabets = 0, digits = 0, specialCharacters = 0, i = 0;

    printf ("Enter the string: ");
    gets(str);

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            numberOfAlphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            specialCharacters++;
        }
        i++;
    }

    printf("Alphabets: %d", numberOfAlphabets);
    printf("\nDigits: %d", digits);
    printf("\nSpecialCharacters: %d", specialCharacters);

    return 0;
}