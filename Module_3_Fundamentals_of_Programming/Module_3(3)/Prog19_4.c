// Patterns: 
/*

A
A B
A B C
A B C D
A B C D E

*/

#include <stdio.h>

int main () {

    int row, col;
    char c = 'A';

    for (row = 0; row < 5; row++) {
        for (col = 0; col <= row; col++) {
            printf ("%c ", c + col);            
        }
        printf ("\n");
    }
    
    return 0;
}