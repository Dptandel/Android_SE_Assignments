// WAP to find maximum number among 3 numbers using ternary operator.

#include <stdio.h>

int main () {
    int n1, n2, n3, max;

    printf ("Enter numbers :");
    scanf ("%d %d %d", &n1, &n2, &n3);

    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    printf("Largest number among %d, %d and %d is %d.", n1, n2, n3, max);

    return 0;
}