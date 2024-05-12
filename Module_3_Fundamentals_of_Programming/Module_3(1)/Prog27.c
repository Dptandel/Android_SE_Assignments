// Convert days into months

#include <stdio.h>

int main () {
    int days, months;

    printf ("Enter Days: ");
    scanf ("%d", &days);

    //Days to months
    months = days / 30;

    printf ("Months : %d months", months);
    return 0;
}