// Write a program in C to combine two strings manually.

#include <stdio.h>

void combineStrings(const char *str1, const char *str2, char *combined) {
    int i = 0, j = 0;

    // Copy characters from the first string
    while (str1[i] != '\0') {
        combined[j] = str1[i];
        i++;
        j++;
    }

    // Copy characters from the second string
    i = 0;
    while (str2[i] != '\0') {
        combined[j] = str2[i];
        i++;
        j++;
    }

    // Null-terminate the combined string
    combined[j] = '\0';
}

int main() {
    char str1[100], str2[100], combined[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Removing newline characters from input
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    combineStrings(str1, str2, combined);

    printf("Combined string: %s\n", combined);

    return 0;
}
