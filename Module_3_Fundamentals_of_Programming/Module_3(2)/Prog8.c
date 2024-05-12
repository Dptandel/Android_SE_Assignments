// WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include <stdio.h>

int main () {
    int height;

    printf ("Enter height of person (in cm) : ");
    scanf ("%d", &height);

    if (height >= 152 && height <= 168) {
        printf ("Person is in short height category.");
    } else if(height >= 169 && height <= 182) {
        printf ("Person is average category.");
    } else if(height >= 183 && height <= 196) {
        printf ("Person is tall category.");
    } else {
        printf ("Person is not in any category");
    }

    return 0;
}