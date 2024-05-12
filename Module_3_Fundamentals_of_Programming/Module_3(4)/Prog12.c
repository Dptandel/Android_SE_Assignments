// WAP to accept 5 numbers from user and display in reverse order using for loop and array.

#include <stdio.h>

int main () {
    int array[5];

    printf ("Enter 5 numbers: ");

    for (int i = 0; i < 5; i++) {
        scanf ("%d", &array[i]);
    }

    printf ("Array of numbers in reversed order: ");
    for (int i = 4; i >= 0; i--) {
        printf ("%d ", array[i]);
    }
    return 0;
}