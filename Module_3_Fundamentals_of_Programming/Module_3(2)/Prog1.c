// Write a C program to accept two integers and check whether they are equal or not

#include <stdio.h>

int main () {
    int num1, num2;

    printf ("Enter two numbers: ");
    scanf ("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf ("Numbers are Equal!");
    } else {
        printf ("Numbers are Not Equal!");
    }
    return 0;
}