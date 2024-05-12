// WAP to find reverse of string using recursion.

#include <stdio.h>
int reverseString() {
    char c;
    scanf("%c", &c);
    
    if (c != '\n') {
        reverseString();
        printf("%c", c);
    }
}

int main() {
    printf("Enter a string: ");
    
    reverseString();

    return 0;
}
