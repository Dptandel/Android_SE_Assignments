// WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

int main () {
    int num;

    printf ("Enter Number (check positive / negative / zero) : ");
    scanf ("%d", &num);

    if (num > 0) {
        printf ("the number %d is Positive Number", num);
    } else if (num < 0) {
        printf ("the number %d is Negative Number", num);
    } else if (num == 0) {
        printf ("the number is %d (ZERO)", num);
    } else {
        printf ("the number is invalid");
    }

    return 0;
}