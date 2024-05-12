// Convert school’s name in abbreviated form

#include <stdio.h>
int main() {

    char fname[20], mname[20], lname[20];

    printf("Enter full name of school(first middle last): ");

    scanf("%s %s %s", &fname, &mname, &lname);

    printf("Abbreviated school name: ");

    printf("%c. %c. %s\n", fname[0], mname[0], lname);

    return 0;

}