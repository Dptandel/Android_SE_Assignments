// Series Program:
// (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++) {
        for (j = 1 ; j <= i ; j++) {
            sum += j;
        }
    }
    printf("(1) + (1+2+) + (1+2+3) + ... + (1+2+3+...+%d) = %d", n, sum);

    return 0;
}