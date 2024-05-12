// Calculate sum of 10 numbers using of while loop.

#include <stdio.h>

int main () {
    int i, num, sum = 0, count = 1;

    printf("Enter 10 Numbers: ");

    for (i = 0; i < 10; i++) {
        while (count <= 10) {
            scanf("%d", &num);
            sum += num;
            count++;
        } 
    }

    printf("The sum of given 10 Numbers is : %d ", sum);

    return 0;
}