// WAP to perform Palindrome number using for loop and function.

#include <stdio.h>

int checkPalindrome(int num) {
    int reversed = 0, reminder;

    for(int i = num; i > 0; ) {
        reminder = i % 10;
        reversed = reversed * 10 + reminder;
        i = i / 10;
    }

    return num == reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}