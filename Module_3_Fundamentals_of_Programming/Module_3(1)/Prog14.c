// Find ascii value of given number

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    char ascii = number + 48;

    printf("The ASCII value of %d is %d\n", number, ascii);

    return 0;
}