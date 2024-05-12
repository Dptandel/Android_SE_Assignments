// Convert minutes into seconds and hours

#include <stdio.h>

int main () {
    int minutes, seconds, hours;

    printf ("Enter Minutes: ");
    scanf ("%d", &minutes);

    //Minutes to seconds and hours
    seconds = minutes * 60;
    hours = minutes / 60;

    printf ("Seconds : %d seconds", seconds);
    printf ("\n Hours : %d hours", hours);

    return 0;
}