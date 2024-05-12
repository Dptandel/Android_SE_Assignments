// Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Hello, world!";
    char string2[] = "I'm Dharmin Tandel.";

    printf("Before copying");
    printf("\nString1 : %s", string1);
    printf("\nString2 : %s", string2);

    strcpy(string2, string1);

    printf("\nAfter copying");
    printf("\nString1 : %s", string1);
    printf("\nString2 : %s", string2);

    return 0;
}