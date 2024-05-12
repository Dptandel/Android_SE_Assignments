// WAP to find minimum number among 3 numbers using ternary operator.

#include <stdio.h>

int main () {
    int n1, n2, n3, min;

    printf ("Enter numbers :");
    scanf ("%d %d %d", &n1, &n2, &n3);

    min = (n1 < n2) ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);

    printf("Smallest number among %d, %d and %d is %d.", n1, n2, n3, min);

    return 0;
}