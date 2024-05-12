// WAP to find the largest of three numbers.

#include <stdio.h>

int main () {
    int num1, num2, num3, max;

    printf ("Enter numbers :");
    scanf ("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf ("%d is the largest of given three numbers", num1);
    } else if (num2 > num3 && num2 > num1) {
        printf ("%d is the largest of given three numbers", num2);
    } else {
        printf ("%d is the largest of given three numbers", num3);
    }

    return 0;
}