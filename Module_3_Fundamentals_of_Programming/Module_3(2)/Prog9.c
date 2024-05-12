// C Program to Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h>

int main () {
    char ch;

    printf ("Enter Character (for checking uppercase or lowercase or digit or special character) : ");
    scanf ("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf ("%c is Uppercase Character.", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf ("%c is Lowercase Character.", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf ("%c is Digit.", ch);
    } else {
        printf ("%c is Special Character", ch);
    }

    return 0;
}