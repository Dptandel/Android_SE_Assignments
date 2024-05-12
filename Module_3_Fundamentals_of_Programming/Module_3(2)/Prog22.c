// WAP to input the week number and print week day.

#include <stdio.h>

int main () {
    int day;

    printf ("Enter the number of day : ");
    scanf ("%d", &day);

    switch (day) {
        case 1: 
            printf ("The %dst day of the week is Monday.", day); 
            break;

        case 2: 
            printf ("The %dnd day of the week is Tuesday.", day); 
            break;

        case 3: 
            printf ("The %drd day of the week is Wednesday.", day); 
            break;

        case 4: 
            printf ("The %dth day of the week is Thursday.", day); 
            break;

        case 5: 
            printf ("The %dth day of the week is Friday.", day); 
            break;

        case 6: 
            printf ("The %dth day of the week is Saturday.", day); 
            break;

        case 7: 
            printf ("The %dth day of the week is Sunday.", day); 
            break;

        default:
            printf ("Invalid input...!");
            break;
    }
    return 0;
}