// Convert temperature Fahrenheit to Celsius

#include <stdio.h>

int main () {
    float temperature_fahrenheit, temperature_celsius;

    printf ("Enter temperature in fahrenheit : ");
    scanf ("%f", &temperature_fahrenheit);

    //Temperature in degrees Celsius
    temperature_celsius = ( temperature_fahrenheit - 32 ) * 5 / 9;
    printf ("Temperature in Degree Celsius is : %f", temperature_celsius);
    return 0;
}
