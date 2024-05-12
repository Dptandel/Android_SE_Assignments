// Patterns: 
/*

1
1 0         
1 0 1       
1 0 1 0     
1 0 1 0 1   

*/

#include <stdio.h>

int main () {

    int row, col;

    for (row = 0; row <= 5; row++) {
        for (col = 1; col <= row; col++) {
            if(col % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf ("\n");
    }
    return 0;
}