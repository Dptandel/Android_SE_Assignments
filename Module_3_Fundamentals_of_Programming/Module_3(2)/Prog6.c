// Find the Character Is Vowel or Not.

#include <stdio.h>

int main () {
    char c;

    printf ("Enter Character (for checking vowel or not) : ");
    scanf ("%C", &c);

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf ("%c is vowel.", c);
    } else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf ("%c is vowel.", c);
    } else {
        printf ("%c is not a vowel.", c);
    }
    return 0;
}