// WAP to convert years into days and days into years

#include <stdio.h>

int main () {
    int years, days, months;

    printf ("Enter Years: ");
    scanf ("%d", &years);

    //Years to days
    days = years * 365;
    printf ("Days : %d days", days);

    //Days to years
    years = ( days / 30 ) / 12;
    printf ("\n Years : %d years", years);

    return 0;
}