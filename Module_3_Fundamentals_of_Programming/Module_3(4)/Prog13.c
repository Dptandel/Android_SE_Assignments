// WAP to accept 5 students name and store it in array.

#include <stdio.h>

int main () {
    int students[5][20];

    for (int i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", &students[i]);
    }

    printf("\nThe names of the students are: ");
    for (int i = 0; i < 5; i++) {
        printf("%s ", students[i]);
    }
    return 0;
}