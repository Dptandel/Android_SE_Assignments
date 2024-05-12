// Series Program:
// 1 2 3 6 9 18 27 54...

#include <stdio.h>

int main () {
    int n1 = 1, n2 = 2, i, number;

    printf("Enter the number of elements: ");    
    scanf("%d", &number);

    printf("%d %d ", n1, n2);

    for(i = 3; i <= number; i++) {

        if (i % 2 == 1) {
            n1 = n1 * 3;
            printf("%d",n1);
            printf(" ");   
        } else {
            n2 = n2 * 3;
            printf("%d",n2);
            printf(" ");
        }
    }
    return 0;
}