// Patterns: 
/*

* 
* * 
* * * 
* * * * 
* * * * *
* * * * * * 
* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>

int main () {

    int row, col;

// for upper triangular
    for (row = 0; row < 6; row++) {
        for (col = 1; col <= row; col++) {
            printf ("* ");
        }
        printf ("\n");
    }

// for lower triangular
    for (row = 6; row >= 0; row--) {
        for (col = 1; col <= row; col++) {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}

