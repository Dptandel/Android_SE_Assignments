// Write a program in C to print individual characters of a string in reverse order.

#include <stdio.h>
#include <string.h>

int main () {
    char str[50];

    printf ("Enter the string: ");
    scanf ("%s", str);

    strrev(str);

    for (int i = 0; str[i] != '\0'; i++) {
        printf ("%c\n", str[i]);
    }
    return 0;
}