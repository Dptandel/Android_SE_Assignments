// Convert years into days and months

#include <stdio.h>

int main () {
    int years, days, months;

    printf ("Enter Years: ");
    scanf ("%d", &years);

    //Years to months and days
    months = years * 12;
    days = years * 365;

    printf ("Months : %d months", months);
    printf ("\n Days : %d days", days);

    return 0;
}