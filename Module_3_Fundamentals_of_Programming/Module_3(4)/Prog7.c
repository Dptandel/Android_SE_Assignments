// WAP Find out length of string without using inbuilt function.

#include <stdio.h>

int main() {
    char str[50];
    int i = 0;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        length++;
        i++;
    }

    printf("The length of the string is: %d", length);

    return 0;
}