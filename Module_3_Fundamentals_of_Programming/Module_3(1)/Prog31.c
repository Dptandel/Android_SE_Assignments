// Convert kilometers into meters

#include <stdio.h>

int main () {
    float kilometers;
    int meters;

    printf ("Enter Kilometers: ");
    scanf ("%f", &kilometers);

    //Kilometer to meters conversion
    meters = kilometers * 1000;
    printf ("%d meters in %.2f kilometers", meters, kilometers);

    return 0;
}