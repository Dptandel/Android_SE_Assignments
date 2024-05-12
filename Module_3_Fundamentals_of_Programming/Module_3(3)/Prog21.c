// Accept 3 numbers from user using while loop and check each numbers palindrome.

#include <stdio.h>

int main() {
    int num1, num2, num3, reversed = 0, original, remainder;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check if num1 is palindrome
    original = num1;
    while (num1 != 0) {
        remainder = num1 % 10;
        reversed = reversed * 10 + remainder;
        num1 /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    // Check if num2 is palindrome
    reversed = 0;
    original = num2;
    while (num2 != 0) {
        remainder = num2 % 10;
        reversed = reversed * 10 + remainder;
        num2 /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    // Check if num3 is palindrome
    reversed = 0;
    original = num3;
    while (num3 != 0) {
        remainder = num3 % 10;
        reversed = reversed * 10 + remainder;
        num3 /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}