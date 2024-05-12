// Check Number Is Positive or Negative.

#include <stdio.h>

int main () {
    int num;

    printf ("Enter number : ");
    scanf ("%d", &num);

    if (num > 0) {
        printf ("Number is Positive!");
    } else if (num < 0) {
        printf ("Number is Negative!");
    } else {
        printf ("Your Number is equal to %d...!", num);
    }
    return 0;
}