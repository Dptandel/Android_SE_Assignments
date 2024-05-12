// Accept marks from user and check pass or fail.

#include <stdio.h>

int main () {
    int marks;

    printf ("Enter marks of User (to check user is pass/fail) :");
    scanf ("%d", &marks);

    if (marks >= 33 && marks <= 100) {
        printf ("User is Pass.");
    } else if (marks < 33 && marks >= 0) {
        printf ("User is Fail.");
    } else {
        printf ("Invalid User marks");
    }
    return 0;
}