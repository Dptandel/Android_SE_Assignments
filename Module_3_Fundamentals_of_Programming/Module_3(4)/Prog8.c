// WAP to reverse a string and check that the string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int i, length, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }


    // Check if the string is a palindrome
    for (i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}