// WAP to accept 5 numbers from user and check entered number is even or odd using of array.

#include <stdio.h>

int main () {
    int numbers[5];

    printf ("Enter 5 numbers: ");

    for (int i = 0; i < 5; i++) {
        scanf ("%d", &numbers[i]);
    }

    printf ("Array of numbers: ");
    for (int i = 0; i < 5; i++) {
        printf ("%d ", numbers[i]);
    }

    printf ("\n");

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf ("%d is Even.\n", numbers[i]);
        } else {
            printf ("%d is Odd.\n", numbers[i]);
        }
    }

    return 0;
}