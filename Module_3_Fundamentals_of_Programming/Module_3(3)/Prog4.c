// WAP to print table up to given numbers.

#include <stdio.h>
int main() {
    int num, number_to_print;
    
    printf("Enter an number: ");
    scanf("%d", &num);

    printf("Enter the number upto table print: ");
    scanf("%d", &number_to_print);

    printf ("Table of %d \n", num);
    
    for (int i = 1; i <= number_to_print; ++i) {
        printf("%d * %d = %d \n", num, i, num * i);
    }
    return 0;
}
