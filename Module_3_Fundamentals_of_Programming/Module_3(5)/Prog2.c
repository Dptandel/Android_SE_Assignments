// Write a program in C to separate individual characters from a string.

#include <stdio.h>

int main () {
    char str[50];

    printf ("Enter the string: ");
    scanf ("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        printf ("%c\n", str[i]);
    }
    return 0;
}