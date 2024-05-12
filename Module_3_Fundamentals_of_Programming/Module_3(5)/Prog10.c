// Write a program in C to extract a substring from a given string.

#include <stdio.h>
#include <string.h>

void extractSubstring(char *string, char *substring, int start, int end) {
    int length = strlen(string);
    if (start < 0 || start >= length || end < 0 || end >= length || start > end) {
        printf("Invalid start and end indexes.\n");
        return;
    }

    int i, j = 0;
    for (i = start; i <= end; i++) {
        substring[j] = string[i];
        j++;
    }
    substring[j] = '\0';
}

int main() {
    char string[100], substring[100];
    int start, end;

    printf("Enter a string: ");
    scanf("%[^\n]s", string);

    printf("Enter start index: ");
    scanf("%d", &start);

    printf("Enter end index: ");
    scanf("%d", &end);

    extractSubstring(string, substring, start, end);
    printf("The substring is: %s\n", substring);

    return 0;
}
