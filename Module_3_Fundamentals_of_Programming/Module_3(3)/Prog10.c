// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans:- 5).

#include <stdio.h>

int main () {
    int number, digit, last_digit, first_digit, summation;

    printf ("Enter a number: ");
    scanf ("%d", &number);

    last_digit = number % 10;
    
    while (number > 0) {
        number /= 10;
        if (number != 0) {
            first_digit = number;
        }
    }
    
    summation = first_digit + last_digit;
    
    printf ("Summation of first digit (%d) and last digit (%d) is %d.",first_digit, last_digit, summation);

    return 0;
}