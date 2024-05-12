// Write a program in C to find the length of a string without using library functions.

#include <stdio.h>

int main () {
    char str[50];
    int length = 0;

    printf ("Enter the string: ");
    scanf ("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf ("The length of the string %s is %d", str, length);
    return 0;
}